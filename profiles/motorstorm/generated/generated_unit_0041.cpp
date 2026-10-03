#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0041[1013] = {
    1, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0,
    0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 21, 0, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 26, 0, 27, 0, 0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0,
    31, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 35, 0, 36, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0, 42, 0, 0,
    43, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0,
    53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0,
    60, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0,
    67, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0,
    0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78,
    0, 79, 0, 80, 0, 81, 0, 82, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0,
    92, 0, 93, 0, 94, 0, 0, 95, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 100, 101, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112,
    0, 113, 0, 114, 0, 115, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0,
    0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 127, 0, 128, 0, 0, 0, 129, 0, 0,
    0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 134, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0,
    0, 138, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0,
    0, 145, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 151, 152, 0, 0,
    153, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 160, 0, 161,
    0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169,
    0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 176, 0, 0, 177, 0, 0, 0,
    0, 178, 0, 0, 0, 179, 0, 180, 0, 0, 181, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 188, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192,
    0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199,
};
void recomp_unit_0041_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0882D000u;
        entry_id = (entry_delta < 4052u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0041[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0882D000;
    case 2u: goto L_0882D008;
    case 3u: goto L_0882D010;
    case 4u: goto L_0882D020;
    case 5u: goto L_0882D038;
    case 6u: goto L_0882D04C;
    case 7u: goto L_0882D060;
    case 8u: goto L_0882D074;
    case 9u: goto L_0882D098;
    case 10u: goto L_0882D0AC;
    case 11u: goto L_0882D0B4;
    case 12u: goto L_0882D0D0;
    case 13u: goto L_0882D0F0;
    case 14u: goto L_0882D120;
    case 15u: goto L_0882D170;
    case 16u: goto L_0882D1A8;
    case 17u: goto L_0882D1B4;
    case 18u: goto L_0882D1C8;
    case 19u: goto L_0882D1D4;
    case 20u: goto L_0882D200;
    case 21u: goto L_0882D208;
    case 22u: goto L_0882D218;
    case 23u: goto L_0882D224;
    case 24u: goto L_0882D230;
    case 25u: goto L_0882D23C;
    case 26u: goto L_0882D244;
    case 27u: goto L_0882D24C;
    case 28u: goto L_0882D25C;
    case 29u: goto L_0882D268;
    case 30u: goto L_0882D274;
    case 31u: goto L_0882D280;
    case 32u: goto L_0882D28C;
    case 33u: goto L_0882D29C;
    case 34u: goto L_0882D2B4;
    case 35u: goto L_0882D2BC;
    case 36u: goto L_0882D2C4;
    case 37u: goto L_0882D2CC;
    case 38u: goto L_0882D2D4;
    case 39u: goto L_0882D2DC;
    case 40u: goto L_0882D2E4;
    case 41u: goto L_0882D2EC;
    case 42u: goto L_0882D2F4;
    case 43u: goto L_0882D300;
    case 44u: goto L_0882D304;
    case 45u: goto L_0882D314;
    case 46u: goto L_0882D344;
    case 47u: goto L_0882D388;
    case 48u: goto L_0882D3A8;
    case 49u: goto L_0882D3D8;
    case 50u: goto L_0882D414;
    case 51u: goto L_0882D430;
    case 52u: goto L_0882D474;
    case 53u: goto L_0882D480;
    case 54u: goto L_0882D490;
    case 55u: goto L_0882D4B0;
    case 56u: goto L_0882D4BC;
    case 57u: goto L_0882D4D4;
    case 58u: goto L_0882D4E0;
    case 59u: goto L_0882D4F8;
    case 60u: goto L_0882D500;
    case 61u: goto L_0882D518;
    case 62u: goto L_0882D520;
    case 63u: goto L_0882D534;
    case 64u: goto L_0882D548;
    case 65u: goto L_0882D558;
    case 66u: goto L_0882D568;
    case 67u: goto L_0882D580;
    case 68u: goto L_0882D58C;
    case 69u: goto L_0882D5A4;
    case 70u: goto L_0882D5B0;
    case 71u: goto L_0882D5C8;
    case 72u: goto L_0882D5D0;
    case 73u: goto L_0882D5E8;
    case 74u: goto L_0882D5F0;
    case 75u: goto L_0882D60C;
    case 76u: goto L_0882D648;
    case 77u: goto L_0882D664;
    case 78u: goto L_0882D67C;
    case 79u: goto L_0882D684;
    case 80u: goto L_0882D68C;
    case 81u: goto L_0882D694;
    case 82u: goto L_0882D69C;
    case 83u: goto L_0882D6A4;
    case 84u: goto L_0882D6AC;
    case 85u: goto L_0882D6C8;
    case 86u: goto L_0882D6D0;
    case 87u: goto L_0882D6D8;
    case 88u: goto L_0882D6E0;
    case 89u: goto L_0882D6E8;
    case 90u: goto L_0882D6F0;
    case 91u: goto L_0882D6F8;
    case 92u: goto L_0882D700;
    case 93u: goto L_0882D708;
    case 94u: goto L_0882D710;
    case 95u: goto L_0882D71C;
    case 96u: goto L_0882D72C;
    case 97u: goto L_0882D738;
    case 98u: goto L_0882D774;
    case 99u: goto L_0882D780;
    case 100u: goto L_0882D79C;
    case 101u: goto L_0882D7A0;
    case 102u: goto L_0882D7A8;
    case 103u: goto L_0882D7B4;
    case 104u: goto L_0882D7C0;
    case 105u: goto L_0882D7DC;
    case 106u: goto L_0882D7EC;
    case 107u: goto L_0882D810;
    case 108u: goto L_0882D830;
    case 109u: goto L_0882D844;
    case 110u: goto L_0882D854;
    case 111u: goto L_0882D874;
    case 112u: goto L_0882D87C;
    case 113u: goto L_0882D884;
    case 114u: goto L_0882D88C;
    case 115u: goto L_0882D894;
    case 116u: goto L_0882D89C;
    case 117u: goto L_0882D8A8;
    case 118u: goto L_0882D8C0;
    case 119u: goto L_0882D8D0;
    case 120u: goto L_0882D8F4;
    case 121u: goto L_0882D908;
    case 122u: goto L_0882D918;
    case 123u: goto L_0882D928;
    case 124u: goto L_0882D930;
    case 125u: goto L_0882D940;
    case 126u: goto L_0882D954;
    case 127u: goto L_0882D95C;
    case 128u: goto L_0882D964;
    case 129u: goto L_0882D974;
    case 130u: goto L_0882D988;
    case 131u: goto L_0882D998;
    case 132u: goto L_0882D9A8;
    case 133u: goto L_0882D9BC;
    case 134u: goto L_0882D9C4;
    case 135u: goto L_0882D9D0;
    case 136u: goto L_0882D9E4;
    case 137u: goto L_0882D9F4;
    case 138u: goto L_0882DA04;
    case 139u: goto L_0882DA18;
    case 140u: goto L_0882DA20;
    case 141u: goto L_0882DA3C;
    case 142u: goto L_0882DA50;
    case 143u: goto L_0882DA60;
    case 144u: goto L_0882DA70;
    case 145u: goto L_0882DA84;
    case 146u: goto L_0882DA8C;
    case 147u: goto L_0882DA98;
    case 148u: goto L_0882DAC0;
    case 149u: goto L_0882DAE0;
    case 150u: goto L_0882DAE8;
    case 151u: goto L_0882DAF0;
    case 152u: goto L_0882DAF4;
    case 153u: goto L_0882DB00;
    case 154u: goto L_0882DB08;
    case 155u: goto L_0882DB10;
    case 156u: goto L_0882DB2C;
    case 157u: goto L_0882DB44;
    case 158u: goto L_0882DB54;
    case 159u: goto L_0882DB68;
    case 160u: goto L_0882DB74;
    case 161u: goto L_0882DB7C;
    case 162u: goto L_0882DB90;
    case 163u: goto L_0882DB9C;
    case 164u: goto L_0882DBC4;
    case 165u: goto L_0882DBD0;
    case 166u: goto L_0882DBE4;
    case 167u: goto L_0882DBF0;
    case 168u: goto L_0882DC6C;
    case 169u: goto L_0882DC7C;
    case 170u: goto L_0882DC90;
    case 171u: goto L_0882DCA0;
    case 172u: goto L_0882DCAC;
    case 173u: goto L_0882DCB8;
    case 174u: goto L_0882DCCC;
    case 175u: goto L_0882DCDC;
    case 176u: goto L_0882DCE4;
    case 177u: goto L_0882DCF0;
    case 178u: goto L_0882DD04;
    case 179u: goto L_0882DD14;
    case 180u: goto L_0882DD1C;
    case 181u: goto L_0882DD28;
    case 182u: goto L_0882DD38;
    case 183u: goto L_0882DD44;
    case 184u: goto L_0882DDF8;
    case 185u: goto L_0882DE28;
    case 186u: goto L_0882DE5C;
    case 187u: goto L_0882DE64;
    case 188u: goto L_0882DE6C;
    case 189u: goto L_0882DEA4;
    case 190u: goto L_0882DEC0;
    case 191u: goto L_0882DEF0;
    case 192u: goto L_0882DEFC;
    case 193u: goto L_0882DF10;
    case 194u: goto L_0882DF30;
    case 195u: goto L_0882DF40;
    case 196u: goto L_0882DF6C;
    case 197u: goto L_0882DF80;
    case 198u: goto L_0882DFBC;
    case 199u: goto L_0882DFD0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0882D000:
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[20] = (2215u << 16u);
    goto L_0882D008;
L_0882D008:
    aot_gpr[31] = (0x0882D010u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 58u, 0x088B73F4u>(ctx, &aot_mem) && ctx.pc == 0x0882D010u) goto L_0882D010;
    return;
L_0882D010:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x0882D020u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 108u, 0x0882C870u>(ctx, &aot_mem) && ctx.pc == 0x0882D020u) goto L_0882D020;
    return;
L_0882D020:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4444), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(-2080)));
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_0882D038;
    }
    goto L_0882D038;
L_0882D038:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(-2080)));
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (aot_gpr[23] | 0u);
        goto L_0882D04C;
    }
    goto L_0882D04C;
L_0882D04C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(-6824)));
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (aot_gpr[22] | 0u);
        goto L_0882D060;
    }
    goto L_0882D060;
L_0882D060:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(-6824)));
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (aot_gpr[21] | 0u);
        goto L_0882D074;
    }
    goto L_0882D074;
L_0882D074:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(152), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(264));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x0882D098u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0882D098u) goto L_0882D098;
    return;
L_0882D098:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D008;
      }
      goto L_0882D0AC;
    }
L_0882D0AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D0F0;
      }
      goto L_0882D0B4;
    }
L_0882D0B4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1900)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0882D0F0;
      }
      goto L_0882D0D0;
    }
L_0882D0D0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1900)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(152), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882D0D0;
      }
      goto L_0882D0F0;
    }
L_0882D0F0:
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
L_0882D120:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[30]);
    aot_gpr[22] = (2218u << 16u);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[30] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-144));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-2064));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-1104));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[31] = (0x0882D170u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 104u, 0x0882C818u>(ctx, &aot_mem) && ctx.pc == 0x0882D170u) goto L_0882D170;
    return;
L_0882D170:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1904)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-2076), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(105))))));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[16]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[22] = (aot_gpr[5] + aot_gpr[22]);
    aot_gpr[30] = (aot_gpr[5] + aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0882D1A8;
L_0882D1A8:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0882D1B4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 189u, 0x088A0C6Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D1B4u) goto L_0882D1B4;
    return;
L_0882D1B4:
    aot_gpr[23] = (aot_gpr[17] << 24u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    aot_gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[23]) >> 24u));
      if (branch_taken) {
          goto L_0882D200;
      }
      goto L_0882D1C8;
    }
L_0882D1C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(720)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D200;
      }
      goto L_0882D1D4;
    }
L_0882D1D4:
    aot_gpr[4] = (aot_gpr[23] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[4] = (aot_gpr[4] << 8u);
    aot_gpr[6] = (0u - aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(716), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_0882D388;
      }
      goto L_0882D200;
    }
L_0882D200:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0882D25C;
      }
      goto L_0882D208;
    }
L_0882D208:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26500)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D230;
      }
      goto L_0882D218;
    }
L_0882D218:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0882D224u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 108u, 0x0882C870u>(ctx, &aot_mem) && ctx.pc == 0x0882D224u) goto L_0882D224;
    return;
L_0882D224:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(264));
      if (branch_taken) {
          goto L_0882D244;
      }
      goto L_0882D230;
    }
L_0882D230:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0882D23Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 108u, 0x0882C870u>(ctx, &aot_mem) && ctx.pc == 0x0882D23Cu) goto L_0882D23C;
    return;
L_0882D23C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(264));
    goto L_0882D244;
L_0882D244:
    aot_gpr[31] = (0x0882D24Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 58u, 0x088B73F4u>(ctx, &aot_mem) && ctx.pc == 0x0882D24Cu) goto L_0882D24C;
    return;
L_0882D24C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4444), aot_gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(238))))));
      if (branch_taken) {
          goto L_0882D274;
      }
      goto L_0882D25C;
    }
L_0882D25C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0882D268u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 108u, 0x0882C870u>(ctx, &aot_mem) && ctx.pc == 0x0882D268u) goto L_0882D268;
    return;
L_0882D268:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(238))))));
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(264));
    goto L_0882D274;
L_0882D274:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0882D280u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 158u, 0x08872BF0u>(ctx, &aot_mem) && ctx.pc == 0x0882D280u) goto L_0882D280;
    return;
L_0882D280:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D304;
      }
      goto L_0882D28C;
    }
L_0882D28C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(240))))));
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882D2F4;
      }
      goto L_0882D29C;
    }
L_0882D29C:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[5]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-12936)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882D2B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 1013u);
      if (branch_taken) {
          goto L_0882D2F4;
      }
      goto L_0882D2BC;
    }
L_0882D2BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 1001u);
      if (branch_taken) {
          goto L_0882D2F4;
      }
      goto L_0882D2C4;
    }
L_0882D2C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 1016u);
      if (branch_taken) {
          goto L_0882D2F4;
      }
      goto L_0882D2CC;
    }
L_0882D2CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 1004u);
      if (branch_taken) {
          goto L_0882D2F4;
      }
      goto L_0882D2D4;
    }
L_0882D2D4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 1010u);
      if (branch_taken) {
          goto L_0882D2F4;
      }
      goto L_0882D2DC;
    }
L_0882D2DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 1019u);
      if (branch_taken) {
          goto L_0882D2F4;
      }
      goto L_0882D2E4;
    }
L_0882D2E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 1022u);
      if (branch_taken) {
          goto L_0882D2F4;
      }
      goto L_0882D2EC;
    }
L_0882D2EC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 1007u);
      if (branch_taken) {
          goto L_0882D2F4;
      }
      goto L_0882D2F4;
    }
L_0882D2F4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0882D300u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 158u, 0x08872BF0u>(ctx, &aot_mem) && ctx.pc == 0x0882D300u) goto L_0882D300;
    return;
L_0882D300:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_0882D304;
L_0882D304:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x0882D314u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 1u, 0x08872004u>(ctx, &aot_mem) && ctx.pc == 0x0882D314u) goto L_0882D314;
    return;
L_0882D314:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(152), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(244));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0882D344u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 112u, 0x088A2740u>(ctx, &aot_mem) && ctx.pc == 0x0882D344u) goto L_0882D344;
    return;
L_0882D344:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[23] << 24u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[5] = (aot_gpr[5] << 8u);
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[7] = (0u - aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(716), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0882D388;
L_0882D388:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(64));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[17]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_0882D1A8;
      }
      goto L_0882D3A8;
    }
L_0882D3A8:
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
L_0882D3D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    aot_gpr[31] = (0x0882D414u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 104u, 0x0882C818u>(ctx, &aot_mem) && ctx.pc == 0x0882D414u) goto L_0882D414;
    return;
L_0882D414:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27976)));
    aot_gpr[16] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0882D60C;
      }
      goto L_0882D430;
    }
L_0882D430:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2848));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2592));
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12944));
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[30] = (2218u << 16u);
    aot_gpr[23] = (2218u << 16u);
    aot_gpr[22] = (0u | 15u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-2080));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-6824));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-6816));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-2336));
    goto L_0882D474;
L_0882D474:
    aot_gpr[21] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0882D480u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 58u, 0x088B73F4u>(ctx, &aot_mem) && ctx.pc == 0x0882D480u) goto L_0882D480;
    return;
L_0882D480:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0882D490u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 108u, 0x0882C870u>(ctx, &aot_mem) && ctx.pc == 0x0882D490u) goto L_0882D490;
    return;
L_0882D490:
    aot_gpr[17] = (aot_gpr[21] & 255u);
    aot_gpr[4] = (aot_gpr[17] & 255u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0882D4BC;
      }
      goto L_0882D4B0;
    }
L_0882D4B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[4] << 6u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    goto L_0882D4BC;
L_0882D4BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[17] & 255u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882D4E0;
      }
      goto L_0882D4D4;
    }
L_0882D4D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[5] << 6u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    goto L_0882D4E0;
L_0882D4E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] & 255u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0882D500;
      }
      goto L_0882D4F8;
    }
L_0882D4F8:
    aot_gpr[5] = (aot_gpr[4] << 6u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[30]);
    goto L_0882D500;
L_0882D500:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[17] & 255u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882D520;
      }
      goto L_0882D518;
    }
L_0882D518:
    aot_gpr[4] = (aot_gpr[5] << 6u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[23]);
    goto L_0882D520;
L_0882D520:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[20]);
    aot_gpr[4] = (0u | 3u);
    aot_gpr[31] = (0x0882D534u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0882D534u) goto L_0882D534;
    return;
L_0882D534:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0882D548u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0882D548u) goto L_0882D548;
    return;
L_0882D548:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(264));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0882D558u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0882D558u) goto L_0882D558;
    return;
L_0882D558:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(152), aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x0882D568u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 108u, 0x0882C870u>(ctx, &aot_mem) && ctx.pc == 0x0882D568u) goto L_0882D568;
    return;
L_0882D568:
    aot_gpr[20] = (aot_gpr[17] & 255u);
    aot_gpr[5] = (aot_gpr[20] + aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882D58C;
      }
      goto L_0882D580;
    }
L_0882D580:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[20] << 6u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    goto L_0882D58C;
L_0882D58C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] & 255u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0882D5B0;
      }
      goto L_0882D5A4;
    }
L_0882D5A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] << 6u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    goto L_0882D5B0;
L_0882D5B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[17] & 255u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882D5D0;
      }
      goto L_0882D5C8;
    }
L_0882D5C8:
    aot_gpr[4] = (aot_gpr[5] << 6u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[30]);
    goto L_0882D5D0;
L_0882D5D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] & 255u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0882D5F0;
      }
      goto L_0882D5E8;
    }
L_0882D5E8:
    aot_gpr[17] = (aot_gpr[4] << 6u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[23]);
    goto L_0882D5F0;
L_0882D5F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(152), aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[16] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D474;
      }
      goto L_0882D60C;
    }
L_0882D60C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4444), aot_gpr[5]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882D648:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7488)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D710;
      }
      goto L_0882D664;
    }
L_0882D664:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[5]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-12904)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882D67C:
    aot_gpr[31] = (0x0882D684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 112u, 0x0882C8BCu>(ctx, &aot_mem) && ctx.pc == 0x0882D684u) goto L_0882D684;
    return;
L_0882D684:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D710;
      }
      goto L_0882D68C;
    }
L_0882D68C:
    aot_gpr[31] = (0x0882D694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 123u, 0x0882C9F0u>(ctx, &aot_mem) && ctx.pc == 0x0882D694u) goto L_0882D694;
    return;
L_0882D694:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D710;
      }
      goto L_0882D69C;
    }
L_0882D69C:
    aot_gpr[31] = (0x0882D6A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 145u, 0x0882CBECu>(ctx, &aot_mem) && ctx.pc == 0x0882D6A4u) goto L_0882D6A4;
    return;
L_0882D6A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D710;
      }
      goto L_0882D6AC;
    }
L_0882D6AC:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-2852)));
    aot_gpr[5] = (aot_gpr[5] ^ 2u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D6D8;
      }
      goto L_0882D6C8;
    }
L_0882D6C8:
    aot_gpr[31] = (0x0882D6D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 169u, 0x0882CE7Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D6D0u) goto L_0882D6D0;
    return;
L_0882D6D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D6E0;
      }
      goto L_0882D6D8;
    }
L_0882D6D8:
    aot_gpr[31] = (0x0882D6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 145u, 0x0882CBECu>(ctx, &aot_mem) && ctx.pc == 0x0882D6E0u) goto L_0882D6E0;
    return;
L_0882D6E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D710;
      }
      goto L_0882D6E8;
    }
L_0882D6E8:
    aot_gpr[31] = (0x0882D6F0u);
    // nop
    goto L_0882D120;
L_0882D6F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D710;
      }
      goto L_0882D6F8;
    }
L_0882D6F8:
    aot_gpr[31] = (0x0882D700u);
    // nop
    goto L_0882D3D8;
L_0882D700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D710;
      }
      goto L_0882D708;
    }
L_0882D708:
    aot_gpr[31] = (0x0882D710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 145u, 0x0882CBECu>(ctx, &aot_mem) && ctx.pc == 0x0882D710u) goto L_0882D710;
    return;
L_0882D710:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882D71C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0882D72Cu);
    // nop
    goto L_0882D648;
L_0882D72C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882D738:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[21]);
    aot_gpr[21] = (0u | 15u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[31]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 60u);
    aot_gpr[31] = (0x0882D774u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(23156));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0882D774u) goto L_0882D774;
    return;
L_0882D774:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0882D780u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7320)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 29u, 0x0892733Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D780u) goto L_0882D780;
    return;
L_0882D780:
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[21]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[20] = (ctx.hi);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0882D7EC;
      }
      goto L_0882D79C;
    }
L_0882D79C:
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    goto L_0882D7A0;
L_0882D7A0:
    aot_gpr[31] = (0x0882D7A8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 93u, 0x0882C734u>(ctx, &aot_mem) && ctx.pc == 0x0882D7A8u) goto L_0882D7A8;
    return;
L_0882D7A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[20]);
      if (branch_taken) {
          goto L_0882D7C0;
      }
      goto L_0882D7B4;
    }
L_0882D7B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(168), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0882D7DC;
      }
      goto L_0882D7C0;
    }
L_0882D7C0:
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[21]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.hi);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(168), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0882D7DC;
L_0882D7DC:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(296));
      if (branch_taken) {
          goto L_0882D7A0;
      }
      goto L_0882D7EC;
    }
L_0882D7EC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882D810:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23152), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882D830:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-272));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[31]);
    aot_gpr[31] = (0x0882D844u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0882D844u) goto L_0882D844;
    return;
L_0882D844:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0882D854u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12872));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x0882D854u) goto L_0882D854;
    return;
L_0882D854:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7288)));
    aot_gpr[8] = (2179u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 2u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0882D874u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-8128));
    if (rt.invoke_chained_direct<&recomp_unit_0345_entry, 345u, 168u, 0x0895DF44u>(ctx, &aot_mem) && ctx.pc == 0x0882D874u) goto L_0882D874;
    return;
L_0882D874:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23220), aot_gpr[2]);
    goto L_0882D87C;
L_0882D87C:
    aot_gpr[31] = (0x0882D884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 33u, 0x08933178u>(ctx, &aot_mem) && ctx.pc == 0x0882D884u) goto L_0882D884;
    return;
L_0882D884:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D89C;
      }
      goto L_0882D88C;
    }
L_0882D88C:
    aot_gpr[31] = (0x0882D894u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 121u, 0x08932AB8u>(ctx, &aot_mem) && ctx.pc == 0x0882D894u) goto L_0882D894;
    return;
L_0882D894:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D87C;
      }
      goto L_0882D89C;
    }
L_0882D89C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882D8A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-272));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[31]);
    aot_gpr[31] = (0x0882D8C0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0882D8C0u) goto L_0882D8C0;
    return;
L_0882D8C0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0882D8D0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12844));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x0882D8D0u) goto L_0882D8D0;
    return;
L_0882D8D0:
    aot_gpr[6] = (0u | 32768u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[31] = (0x0882D8F4u);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 255u, 0x08876EA0u>(ctx, &aot_mem) && ctx.pc == 0x0882D8F4u) goto L_0882D8F4;
    return;
L_0882D8F4:
    aot_gpr[16] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(23224), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0882D908u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 40u, 0x0882F344u>(ctx, &aot_mem) && ctx.pc == 0x0882D908u) goto L_0882D908;
    return;
L_0882D908:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23224)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0882D918u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7340)));
    if (rt.invoke_chained_direct<&recomp_unit_0265_entry, 265u, 129u, 0x0890DEE0u>(ctx, &aot_mem) && ctx.pc == 0x0882D918u) goto L_0882D918;
    return;
L_0882D918:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23224)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0882D928u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23120)));
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 54u, 0x088295C8u>(ctx, &aot_mem) && ctx.pc == 0x0882D928u) goto L_0882D928;
    return;
L_0882D928:
    aot_gpr[31] = (0x0882D930u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23224)));
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 78u, 0x088299B4u>(ctx, &aot_mem) && ctx.pc == 0x0882D930u) goto L_0882D930;
    return;
L_0882D930:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23224)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D95C;
      }
      goto L_0882D940;
    }
L_0882D940:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (0x0882D954u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 87u, 0x08885900u>(ctx, &aot_mem) && ctx.pc == 0x0882D954u) goto L_0882D954;
    return;
L_0882D954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D964;
      }
      goto L_0882D95C;
    }
L_0882D95C:
    aot_gpr[31] = (0x0882D964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 86u, 0x088858D0u>(ctx, &aot_mem) && ctx.pc == 0x0882D964u) goto L_0882D964;
    return;
L_0882D964:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882D974:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-272));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[31]);
    aot_gpr[31] = (0x0882D988u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0882D988u) goto L_0882D988;
    return;
L_0882D988:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0882D998u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12816));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x0882D998u) goto L_0882D998;
    return;
L_0882D998:
    aot_gpr[5] = (0u | 32768u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0882D9A8u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 113u, 0x08877760u>(ctx, &aot_mem) && ctx.pc == 0x0882D9A8u) goto L_0882D9A8;
    return;
L_0882D9A8:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23228), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D9C4;
      }
      goto L_0882D9BC;
    }
L_0882D9BC:
    aot_gpr[31] = (0x0882D9C4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 124u, 0x0891F8E8u>(ctx, &aot_mem) && ctx.pc == 0x0882D9C4u) goto L_0882D9C4;
    return;
L_0882D9C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882D9D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-272));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[31]);
    aot_gpr[31] = (0x0882D9E4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0882D9E4u) goto L_0882D9E4;
    return;
L_0882D9E4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0882D9F4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12792));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x0882D9F4u) goto L_0882D9F4;
    return;
L_0882D9F4:
    aot_gpr[5] = (0u | 32768u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0882DA04u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 113u, 0x08877760u>(ctx, &aot_mem) && ctx.pc == 0x0882DA04u) goto L_0882DA04;
    return;
L_0882DA04:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23232), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882DA20;
      }
      goto L_0882DA18;
    }
L_0882DA18:
    aot_gpr[31] = (0x0882DA20u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 124u, 0x0891F8E8u>(ctx, &aot_mem) && ctx.pc == 0x0882DA20u) goto L_0882DA20;
    return;
L_0882DA20:
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29276)));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23252), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882DA3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-272));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[31]);
    aot_gpr[31] = (0x0882DA50u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0882DA50u) goto L_0882DA50;
    return;
L_0882DA50:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0882DA60u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12768));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x0882DA60u) goto L_0882DA60;
    return;
L_0882DA60:
    aot_gpr[5] = (0u | 32768u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0882DA70u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 113u, 0x08877760u>(ctx, &aot_mem) && ctx.pc == 0x0882DA70u) goto L_0882DA70;
    return;
L_0882DA70:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23236), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882DA8C;
      }
      goto L_0882DA84;
    }
L_0882DA84:
    aot_gpr[31] = (0x0882DA8Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 124u, 0x0891F8E8u>(ctx, &aot_mem) && ctx.pc == 0x0882DA8Cu) goto L_0882DA8C;
    return;
L_0882DA8C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882DA98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0882DAE8;
      }
      goto L_0882DAC0;
    }
L_0882DAC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0882DAE0u);
    aot_gpr[6] = (0u | 48u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882DAE0u) goto L_0882DAE0;
    return;
L_0882DAE0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0882DAF4;
      }
      goto L_0882DAE8;
    }
L_0882DAE8:
    aot_gpr[31] = (0x0882DAF0u);
    aot_gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x0882DAF0u) goto L_0882DAF0;
    return;
L_0882DAF0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_0882DAF4;
L_0882DAF4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (2215u << 16u);
        goto L_0882DB10;
    }
    goto L_0882DB00;
L_0882DB00:
    aot_gpr[31] = (0x0882DB08u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 44u, 0x0882F380u>(ctx, &aot_mem) && ctx.pc == 0x0882DB08u) goto L_0882DB08;
    return;
L_0882DB08:
    aot_gpr[18] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (2215u << 16u);
    goto L_0882DB10;
L_0882DB10:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23240), aot_gpr[18]);
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
L_0882DB2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-272));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[31]);
    aot_gpr[31] = (0x0882DB44u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0882DB44u) goto L_0882DB44;
    return;
L_0882DB44:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0882DB54u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12744));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x0882DB54u) goto L_0882DB54;
    return;
L_0882DB54:
    aot_gpr[5] = (0u | 32768u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0882DB68u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 79u, 0x088774DCu>(ctx, &aot_mem) && ctx.pc == 0x0882DB68u) goto L_0882DB68;
    return;
L_0882DB68:
    aot_gpr[16] = (2215u << 16u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(23244), aot_gpr[2]);
      if (branch_taken) {
          goto L_0882DC6C;
      }
      goto L_0882DB74;
    }
L_0882DB74:
    aot_gpr[31] = (0x0882DB7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 81u, 0x0893582Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DB7Cu) goto L_0882DB7C;
    return;
L_0882DB7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23244)));
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(2000));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), aot_gpr[4]);
      if (branch_taken) {
          goto L_0882DB9C;
      }
      goto L_0882DB90;
    }
L_0882DB90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(88)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    goto L_0882DB9C;
L_0882DB9C:
    aot_gpr[4] = (0u | 8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[5] | 2048u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-29120)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
      if (branch_taken) {
          goto L_0882DBD0;
      }
      goto L_0882DBC4;
    }
L_0882DBC4:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[12];
    goto L_0882DBD0;
L_0882DBD0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29116)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_0882DBF0;
      }
      goto L_0882DBE4;
    }
L_0882DBE4:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    goto L_0882DBF0;
L_0882DBF0:
    aot_fpr[14] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25404)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1928));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    aot_gpr[6] = (65344u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(0u));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16448));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(36), aot_gpr[6]);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(52), aot_gpr[6]);
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1992), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[7]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(aot_gpr[6]));
    goto L_0882DC6C;
L_0882DC6C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882DC7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-272));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[31]);
    aot_gpr[31] = (0x0882DC90u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0882DC90u) goto L_0882DC90;
    return;
L_0882DC90:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0882DCA0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12720));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x0882DCA0u) goto L_0882DCA0;
    return;
L_0882DCA0:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0882DCACu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 90u, 0x0882F7E4u>(ctx, &aot_mem) && ctx.pc == 0x0882DCACu) goto L_0882DCAC;
    return;
L_0882DCAC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882DCB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-272));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[31]);
    aot_gpr[31] = (0x0882DCCCu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0882DCCCu) goto L_0882DCCC;
    return;
L_0882DCCC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0882DCDCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12696));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x0882DCDCu) goto L_0882DCDC;
    return;
L_0882DCDC:
    aot_gpr[31] = (0x0882DCE4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 72u, 0x088634C4u>(ctx, &aot_mem) && ctx.pc == 0x0882DCE4u) goto L_0882DCE4;
    return;
L_0882DCE4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882DCF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-272));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[31]);
    aot_gpr[31] = (0x0882DD04u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0882DD04u) goto L_0882DD04;
    return;
L_0882DD04:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0882DD14u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12668));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x0882DD14u) goto L_0882DD14;
    return;
L_0882DD14:
    aot_gpr[31] = (0x0882DD1Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 100u, 0x08884B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DD1Cu) goto L_0882DD1C;
    return;
L_0882DD1C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882DD28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0882DD38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 82u, 0x08863574u>(ctx, &aot_mem) && ctx.pc == 0x0882DD38u) goto L_0882DD38;
    return;
L_0882DD38:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882DD44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-272));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(244), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(252), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[30]);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[21] = (2216u << 16u);
    aot_gpr[23] = (2216u << 16u);
    aot_gpr[30] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(248), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[31]);
    aot_gpr[4] = (49024u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[7] = (aot_gpr[29] | 0u);
    goto L_0882DDF8;
L_0882DDF8:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (aot_gpr[29] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(96), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[8] = (aot_gpr[5] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882DDF8;
      }
      goto L_0882DE28;
    }
L_0882DE28:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), aot_gpr[30]);
    aot_gpr[22] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[22]);
    aot_gpr[30] = (65280u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[30]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[5] = (65505u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7968));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[5]);
    aot_gpr[31] = (0x0882DE5Cu);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(aot_gpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 20u, 0x089351E4u>(ctx, &aot_mem) && ctx.pc == 0x0882DE5Cu) goto L_0882DE5C;
    return;
L_0882DE5C:
    aot_gpr[31] = (0x0882DE64u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 28u, 0x08935318u>(ctx, &aot_mem) && ctx.pc == 0x0882DE64u) goto L_0882DE64;
    return;
L_0882DE64:
    aot_gpr[31] = (0x0882DE6Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x0882DE6Cu) goto L_0882DE6C;
    return;
L_0882DE6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[30]);
    aot_gpr[4] = (aot_gpr[5] | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[4]);
    aot_gpr[4] = (4305u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12080));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0882DEA4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x0882DEA4u) goto L_0882DEA4;
    return;
L_0882DEA4:
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(-28940), static_cast<std::uint8_t>(aot_gpr[22]));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(-28939), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(-28816)));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(-28886), static_cast<std::uint8_t>(aot_gpr[22]));
    aot_gpr[22] = (aot_gpr[4] & 4u);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
      if (branch_taken) {
          goto L_0882DEF0;
      }
      goto L_0882DEC0;
    }
L_0882DEC0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[23] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    aot_gpr[5] = (aot_gpr[5] & 4u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[5]);
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(-28804), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0882DEF0u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0882DEF0u) goto L_0882DEF0;
    return;
L_0882DEF0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0882DEFCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1912)));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 21u, 0x089281DCu>(ctx, &aot_mem) && ctx.pc == 0x0882DEFCu) goto L_0882DEFC;
    return;
L_0882DEFC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[23] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-28804)));
      if (branch_taken) {
          goto L_0882DF40;
      }
      goto L_0882DF10;
    }
L_0882DF10:
    aot_gpr[5] = (aot_gpr[5] & 4u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(-28804), aot_gpr[6]);
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0882DF30u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0882DF30u) goto L_0882DF30;
    return;
L_0882DF30:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[23] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-28804)));
    goto L_0882DF40;
L_0882DF40:
    aot_gpr[5] = (aot_gpr[5] & 2u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(-28940), static_cast<std::uint8_t>(0u));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(-28939), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(-28804), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0882DF6Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0882DF6Cu) goto L_0882DF6C;
    return;
L_0882DF6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0882DFD0;
      }
      goto L_0882DF80;
    }
L_0882DF80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(76)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (aot_gpr[6] & 64u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (0u < aot_gpr[8] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] & 1u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x0882DFBCu);
    aot_gpr[7] = (aot_gpr[8] & 255u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882DFBCu) goto L_0882DFBC;
    return;
L_0882DFBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882DF80;
      }
      goto L_0882DFD0;
    }
L_0882DFD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[23] + static_cast<std::uint32_t>(-28814)));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(-28886), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0882E004u);
    aot_gpr[4] = (0u | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0041(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0041_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_41(Runtime &runtime) {
    runtime.register_generated_unit(41u, 0x0882D000u, 4096u, &recomp_unit_0041, &recomp_unit_0041_entry);
    runtime.register_function(0x0882D000u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D008u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D010u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D020u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D038u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D04Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D060u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D074u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D098u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D0ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D0B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D0D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D0F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D120u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D170u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D1A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D1B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D1C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D1D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D200u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D208u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D218u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D224u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D230u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D23Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D244u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D24Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D25Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D268u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D274u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D280u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D28Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D29Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D2B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D2BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D2C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D2CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D2D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D2DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D2E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D2ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D2F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D300u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D304u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D314u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D344u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D388u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D3A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D3D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D414u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D430u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D474u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D480u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D490u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D4B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D4BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D4D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D4E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D4F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D500u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D518u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D520u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D534u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D548u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D558u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D568u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D580u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D58Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D5A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D5B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D5C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D5D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D5E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D5F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D60Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D648u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D664u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D67Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D684u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D68Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D694u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D69Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D6A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D6ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D6C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D6D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D6D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D6E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D6E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D6F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D6F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D700u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D708u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D710u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D71Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D72Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D738u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D774u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D780u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D79Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D7A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D7A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D7B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D7C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D7DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D7ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D810u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D830u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D844u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D854u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D874u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D87Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D884u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D88Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D894u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D89Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D8A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D8C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D8D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D8F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D908u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D918u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D928u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D930u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D940u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D954u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D95Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D964u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D974u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D988u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D998u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D9A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D9BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D9C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D9D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D9E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882D9F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DA04u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DA18u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DA20u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DA3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DA50u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DA60u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DA70u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DA84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DA8Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DA98u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DAC0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DAE0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DAE8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DAF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DAF4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DB00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DB08u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DB10u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DB2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DB44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DB54u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DB68u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DB74u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DB7Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DB90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DB9Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DBC4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DBD0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DBE4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DBF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DC6Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DC7Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DC90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DCA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DCACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DCB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DCCCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DCDCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DCE4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DCF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DD04u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DD14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DD1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DD28u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DD38u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DD44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DDF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DE28u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DE5Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DE64u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DE6Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DEA4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DEC0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DEF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DEFCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DF10u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DF30u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DF40u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DF6Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DF80u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DFBCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x0882DFD0u, &recomp_unit_0041, "recomp_unit_0041");
}
} // namespace psprecomp
