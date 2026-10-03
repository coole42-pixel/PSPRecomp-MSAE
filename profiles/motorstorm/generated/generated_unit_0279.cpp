#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0279[1013] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0,
    0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 20, 0,
    21, 0, 0, 22, 23, 0, 24, 0, 25, 0, 26, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 31, 0, 0, 0, 32,
    0, 33, 0, 34, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 41, 0, 42, 43,
    0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 48, 0, 49, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0,
    0, 0, 52, 0, 53, 0, 0, 54, 0, 0, 0, 55, 0, 0, 56, 0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0, 61, 0, 0, 0, 62,
    0, 0, 63, 0, 64, 0, 0, 65, 0, 0, 0, 66, 67, 0, 68, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72,
    0, 73, 0, 0, 74, 0, 75, 0, 0, 0, 76, 0, 77, 0, 0, 0, 78, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 83,
    0, 84, 0, 85, 0, 86, 0, 87, 0, 0, 0, 88, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 0, 92, 93, 0, 94, 95, 0, 0, 0, 96,
    0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 109, 0, 110, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0,
    115, 0, 0, 0, 116, 0, 0, 117, 0, 118, 0, 119, 0, 0, 120, 0, 0, 0, 121, 0, 122, 0, 0, 0, 123, 0, 0, 124, 0, 125, 0, 0,
    126, 0, 0, 0, 127, 128, 0, 129, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 135, 0, 136,
    0, 0, 0, 137, 0, 138, 0, 0, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 144, 0, 145, 0, 146, 0, 147, 0,
    148, 0, 0, 0, 149, 0, 150, 0, 151, 0, 152, 0, 0, 0, 0, 0, 153, 154, 0, 155, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0,
    0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 164,
    0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0,
    181, 0, 182, 0, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 189, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195,
};
void recomp_unit_0279_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0891B000u;
        entry_id = (entry_delta < 4052u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0279[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0891B000;
    case 2u: goto L_0891B04C;
    case 3u: goto L_0891B0B8;
    case 4u: goto L_0891B0C4;
    case 5u: goto L_0891B0F4;
    case 6u: goto L_0891B124;
    case 7u: goto L_0891B158;
    case 8u: goto L_0891B198;
    case 9u: goto L_0891B1C0;
    case 10u: goto L_0891B1F0;
    case 11u: goto L_0891B214;
    case 12u: goto L_0891B294;
    case 13u: goto L_0891B2AC;
    case 14u: goto L_0891B2D8;
    case 15u: goto L_0891B2FC;
    case 16u: goto L_0891B334;
    case 17u: goto L_0891B358;
    case 18u: goto L_0891B368;
    case 19u: goto L_0891B374;
    case 20u: goto L_0891B378;
    case 21u: goto L_0891B380;
    case 22u: goto L_0891B38C;
    case 23u: goto L_0891B390;
    case 24u: goto L_0891B398;
    case 25u: goto L_0891B3A0;
    case 26u: goto L_0891B3A8;
    case 27u: goto L_0891B3AC;
    case 28u: goto L_0891B3B4;
    case 29u: goto L_0891B3D8;
    case 30u: goto L_0891B3E0;
    case 31u: goto L_0891B3EC;
    case 32u: goto L_0891B3FC;
    case 33u: goto L_0891B404;
    case 34u: goto L_0891B40C;
    case 35u: goto L_0891B410;
    case 36u: goto L_0891B420;
    case 37u: goto L_0891B444;
    case 38u: goto L_0891B44C;
    case 39u: goto L_0891B458;
    case 40u: goto L_0891B468;
    case 41u: goto L_0891B470;
    case 42u: goto L_0891B478;
    case 43u: goto L_0891B47C;
    case 44u: goto L_0891B48C;
    case 45u: goto L_0891B50C;
    case 46u: goto L_0891B528;
    case 47u: goto L_0891B540;
    case 48u: goto L_0891B548;
    case 49u: goto L_0891B550;
    case 50u: goto L_0891B558;
    case 51u: goto L_0891B568;
    case 52u: goto L_0891B588;
    case 53u: goto L_0891B590;
    case 54u: goto L_0891B59C;
    case 55u: goto L_0891B5AC;
    case 56u: goto L_0891B5B8;
    case 57u: goto L_0891B5C0;
    case 58u: goto L_0891B5C8;
    case 59u: goto L_0891B5D4;
    case 60u: goto L_0891B5E4;
    case 61u: goto L_0891B5EC;
    case 62u: goto L_0891B5FC;
    case 63u: goto L_0891B608;
    case 64u: goto L_0891B610;
    case 65u: goto L_0891B61C;
    case 66u: goto L_0891B62C;
    case 67u: goto L_0891B630;
    case 68u: goto L_0891B638;
    case 69u: goto L_0891B640;
    case 70u: goto L_0891B650;
    case 71u: goto L_0891B664;
    case 72u: goto L_0891B67C;
    case 73u: goto L_0891B684;
    case 74u: goto L_0891B690;
    case 75u: goto L_0891B698;
    case 76u: goto L_0891B6A8;
    case 77u: goto L_0891B6B0;
    case 78u: goto L_0891B6C0;
    case 79u: goto L_0891B6C8;
    case 80u: goto L_0891B6D0;
    case 81u: goto L_0891B6F0;
    case 82u: goto L_0891B6F8;
    case 83u: goto L_0891B6FC;
    case 84u: goto L_0891B704;
    case 85u: goto L_0891B70C;
    case 86u: goto L_0891B714;
    case 87u: goto L_0891B71C;
    case 88u: goto L_0891B72C;
    case 89u: goto L_0891B734;
    case 90u: goto L_0891B73C;
    case 91u: goto L_0891B744;
    case 92u: goto L_0891B75C;
    case 93u: goto L_0891B760;
    case 94u: goto L_0891B768;
    case 95u: goto L_0891B76C;
    case 96u: goto L_0891B77C;
    case 97u: goto L_0891B790;
    case 98u: goto L_0891B7A0;
    case 99u: goto L_0891B7B0;
    case 100u: goto L_0891B7C8;
    case 101u: goto L_0891B7D4;
    case 102u: goto L_0891B7F0;
    case 103u: goto L_0891B7F8;
    case 104u: goto L_0891B800;
    case 105u: goto L_0891B844;
    case 106u: goto L_0891B8D8;
    case 107u: goto L_0891B90C;
    case 108u: goto L_0891B924;
    case 109u: goto L_0891B92C;
    case 110u: goto L_0891B934;
    case 111u: goto L_0891B93C;
    case 112u: goto L_0891B94C;
    case 113u: goto L_0891B96C;
    case 114u: goto L_0891B974;
    case 115u: goto L_0891B980;
    case 116u: goto L_0891B990;
    case 117u: goto L_0891B99C;
    case 118u: goto L_0891B9A4;
    case 119u: goto L_0891B9AC;
    case 120u: goto L_0891B9B8;
    case 121u: goto L_0891B9C8;
    case 122u: goto L_0891B9D0;
    case 123u: goto L_0891B9E0;
    case 124u: goto L_0891B9EC;
    case 125u: goto L_0891B9F4;
    case 126u: goto L_0891BA00;
    case 127u: goto L_0891BA10;
    case 128u: goto L_0891BA14;
    case 129u: goto L_0891BA1C;
    case 130u: goto L_0891BA24;
    case 131u: goto L_0891BA34;
    case 132u: goto L_0891BA48;
    case 133u: goto L_0891BA60;
    case 134u: goto L_0891BA68;
    case 135u: goto L_0891BA74;
    case 136u: goto L_0891BA7C;
    case 137u: goto L_0891BA8C;
    case 138u: goto L_0891BA94;
    case 139u: goto L_0891BAA4;
    case 140u: goto L_0891BAAC;
    case 141u: goto L_0891BAB4;
    case 142u: goto L_0891BAD4;
    case 143u: goto L_0891BADC;
    case 144u: goto L_0891BAE0;
    case 145u: goto L_0891BAE8;
    case 146u: goto L_0891BAF0;
    case 147u: goto L_0891BAF8;
    case 148u: goto L_0891BB00;
    case 149u: goto L_0891BB10;
    case 150u: goto L_0891BB18;
    case 151u: goto L_0891BB20;
    case 152u: goto L_0891BB28;
    case 153u: goto L_0891BB40;
    case 154u: goto L_0891BB44;
    case 155u: goto L_0891BB4C;
    case 156u: goto L_0891BB50;
    case 157u: goto L_0891BB60;
    case 158u: goto L_0891BB78;
    case 159u: goto L_0891BB90;
    case 160u: goto L_0891BB98;
    case 161u: goto L_0891BBC8;
    case 162u: goto L_0891BBD8;
    case 163u: goto L_0891BBF0;
    case 164u: goto L_0891BBFC;
    case 165u: goto L_0891BC1C;
    case 166u: goto L_0891BC24;
    case 167u: goto L_0891BC2C;
    case 168u: goto L_0891BC78;
    case 169u: goto L_0891BCF0;
    case 170u: goto L_0891BD1C;
    case 171u: goto L_0891BD2C;
    case 172u: goto L_0891BDA4;
    case 173u: goto L_0891BDDC;
    case 174u: goto L_0891BE14;
    case 175u: goto L_0891BE20;
    case 176u: goto L_0891BE28;
    case 177u: goto L_0891BE38;
    case 178u: goto L_0891BE50;
    case 179u: goto L_0891BE6C;
    case 180u: goto L_0891BE78;
    case 181u: goto L_0891BE80;
    case 182u: goto L_0891BE88;
    case 183u: goto L_0891BE94;
    case 184u: goto L_0891BE9C;
    case 185u: goto L_0891BEA4;
    case 186u: goto L_0891BEAC;
    case 187u: goto L_0891BEB4;
    case 188u: goto L_0891BEBC;
    case 189u: goto L_0891BEC4;
    case 190u: goto L_0891BED8;
    case 191u: goto L_0891BEE4;
    case 192u: goto L_0891BF0C;
    case 193u: goto L_0891BF80;
    case 194u: goto L_0891BF8C;
    case 195u: goto L_0891BFD0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0891B000:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(36)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (aot_gpr[11] | 0u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(26)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[10] = (aot_gpr[10] & 65535u);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0891B04Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[14]);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 167u, 0x08930EF4u>(ctx, &aot_mem) && ctx.pc == 0x0891B04Cu) goto L_0891B04C;
    return;
L_0891B04C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28804)));
    PSPRECOMP_AOT_STORE16(aot_gpr[23] + static_cast<std::uint32_t>(-3664), static_cast<std::uint16_t>(aot_gpr[22]));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-3662), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[20]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-3661), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(-3660), static_cast<std::uint16_t>(0u));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(-3658), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[20]);
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(-3656), static_cast<std::uint16_t>(0u));
    aot_gpr[5] = (aot_gpr[5] & 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0891B0B8u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0891B0B8u) goto L_0891B0B8;
    return;
L_0891B0B8:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0891B0C4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 138u, 0x08931D08u>(ctx, &aot_mem) && ctx.pc == 0x0891B0C4u) goto L_0891B0C4;
    return;
L_0891B0C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0891B0F4u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0891B0F4u) goto L_0891B0F4;
    return;
L_0891B0F4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B124:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0891B1F0;
      }
      goto L_0891B158;
    }
L_0891B158:
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[6] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(-28816)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0891B198u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0891B198u) goto L_0891B198;
    return;
L_0891B198:
    aot_gpr[4] = (48501u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[4] | 49807u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (2216u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29352)));
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_gpr[31] = (0x0891B1C0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0278_entry, 278u, 51u, 0x0891A6C8u>(ctx, &aot_mem) && ctx.pc == 0x0891B1C0u) goto L_0891B1C0;
    return;
L_0891B1C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0891B1F0u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0891B1F0u) goto L_0891B1F0;
    return;
L_0891B1F0:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B214:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(-28814)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[4] & 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[6] = (~(aot_gpr[5] | 0u));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[6] = (aot_gpr[18] & aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] & 1u);
    aot_gpr[5] = (aot_gpr[7] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x0891B294u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0891B294u) goto L_0891B294;
    return;
L_0891B294:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0891B2ACu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 92u, 0x08935918u>(ctx, &aot_mem) && ctx.pc == 0x0891B2ACu) goto L_0891B2AC;
    return;
L_0891B2AC:
    aot_gpr[4] = (16076u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[6] = (17152u << 16u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-12944));
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0891B2D8u);
    aot_gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0278_entry, 278u, 78u, 0x0891AB14u>(ctx, &aot_mem) && ctx.pc == 0x0891B2D8u) goto L_0891B2D8;
    return;
L_0891B2D8:
    aot_gpr[4] = (16025u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[6] = (17088u << 16u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[5] = (0u | 6u);
    aot_gpr[31] = (0x0891B2FCu);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0278_entry, 278u, 78u, 0x0891AB14u>(ctx, &aot_mem) && ctx.pc == 0x0891B2FCu) goto L_0891B2FC;
    return;
L_0891B2FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[4] = (aot_gpr[18] & 65535u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0891B334u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0891B334u) goto L_0891B334;
    return;
L_0891B334:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B358:
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 97 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 65 ? 1u : 0u);
      if (branch_taken) {
          goto L_0891B378;
      }
      goto L_0891B368;
    }
L_0891B368:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 123 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B3A0;
      }
      goto L_0891B374;
    }
L_0891B374:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 65 ? 1u : 0u);
    goto L_0891B378;
L_0891B378:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 48 ? 1u : 0u);
      if (branch_taken) {
          goto L_0891B390;
      }
      goto L_0891B380;
    }
L_0891B380:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 91 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B3A0;
      }
      goto L_0891B38C;
    }
L_0891B38C:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 48 ? 1u : 0u);
    goto L_0891B390;
L_0891B390:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 58 ? 1u : 0u);
      if (branch_taken) {
          goto L_0891B3A8;
      }
      goto L_0891B398;
    }
L_0891B398:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B3A8;
      }
      goto L_0891B3A0;
    }
L_0891B3A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0891B3AC;
      }
      goto L_0891B3A8;
    }
L_0891B3A8:
    aot_gpr[2] = (0u | 0u);
    goto L_0891B3AC;
L_0891B3AC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B3B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[31]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 160u);
    aot_gpr[31] = (0x0891B3D8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-26496));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0891B3D8u) goto L_0891B3D8;
    return;
L_0891B3D8:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    goto L_0891B3E0;
L_0891B3E0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_0891B404;
      }
      goto L_0891B3EC;
    }
L_0891B3EC:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(80) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0891B3E0;
      }
      goto L_0891B3FC;
    }
L_0891B3FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B40C;
      }
      goto L_0891B404;
    }
L_0891B404:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0891B410;
      }
      goto L_0891B40C;
    }
L_0891B40C:
    aot_gpr[2] = (0u | 1u);
    goto L_0891B410;
L_0891B410:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B420:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 32u);
    aot_gpr[31] = (0x0891B444u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-26336));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0891B444u) goto L_0891B444;
    return;
L_0891B444:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    goto L_0891B44C;
L_0891B44C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_0891B470;
      }
      goto L_0891B458;
    }
L_0891B458:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0891B44C;
      }
      goto L_0891B468;
    }
L_0891B468:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B478;
      }
      goto L_0891B470;
    }
L_0891B470:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0891B47C;
      }
      goto L_0891B478;
    }
L_0891B478:
    aot_gpr[2] = (0u | 1u);
    goto L_0891B47C;
L_0891B47C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B48C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-352));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (aot_gpr[18] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(316), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(328), aot_gpr[23]);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[20] = (aot_gpr[10] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[4]);
    aot_gpr[23] = (aot_gpr[11] & 255u);
    aot_gpr[16] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(324), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(332), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(336), aot_gpr[31]);
    aot_gpr[31] = (0x0891B50Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x0891B50Cu) goto L_0891B50C;
    return;
L_0891B50C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[22] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[18]);
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[22]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[17]);
      if (branch_taken) {
          goto L_0891B800;
      }
      goto L_0891B528;
    }
L_0891B528:
    aot_gpr[4] = (20352u << 16u);
    aot_gpr[21] = (0u | 13u);
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[17] = (0u | 32u);
    aot_gpr[30] = (0u | 45u);
    aot_gpr[19] = (0u | 10u);
    goto L_0891B540;
L_0891B540:
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[16]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_0891B548;
L_0891B548:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[22]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0891B568;
      }
      goto L_0891B550;
    }
L_0891B550:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B568;
      }
      goto L_0891B558;
    }
L_0891B558:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_0891B548;
      }
      goto L_0891B568;
    }
L_0891B568:
    aot_gpr[18] = (aot_gpr[20] + aot_gpr[16]);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(264));
    aot_gpr[31] = (0x0891B588u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 101u, 0x0891982Cu>(ctx, &aot_mem) && ctx.pc == 0x0891B588u) goto L_0891B588;
    return;
L_0891B588:
    aot_gpr[31] = (0x0891B590u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x0891B590u) goto L_0891B590;
    return;
L_0891B590:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
      if (branch_taken) {
          goto L_0891B5EC;
      }
      goto L_0891B59C;
    }
L_0891B59C:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (aot_gpr[20] + aot_gpr[16]);
      if (branch_taken) {
          goto L_0891B5E4;
      }
      goto L_0891B5AC;
    }
L_0891B5AC:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[8] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0891B5C8;
      }
      goto L_0891B5B8;
    }
L_0891B5B8:
    { const bool branch_taken = aot_gpr[8] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0891B5C8;
      }
      goto L_0891B5C0;
    }
L_0891B5C0:
    { const bool branch_taken = aot_gpr[8] != aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_0891B5D4;
      }
      goto L_0891B5C8;
    }
L_0891B5C8:
    aot_gpr[5] = (aot_gpr[6] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_0891B630;
      }
      goto L_0891B5D4;
    }
L_0891B5D4:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0891B5AC;
      }
      goto L_0891B5E4;
    }
L_0891B5E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_0891B630;
      }
      goto L_0891B5EC;
    }
L_0891B5EC:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (aot_gpr[20] + aot_gpr[16]);
      if (branch_taken) {
          goto L_0891B62C;
      }
      goto L_0891B5FC;
    }
L_0891B5FC:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[8] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0891B610;
      }
      goto L_0891B608;
    }
L_0891B608:
    { const bool branch_taken = aot_gpr[8] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0891B61C;
      }
      goto L_0891B610;
    }
L_0891B610:
    aot_gpr[5] = (aot_gpr[6] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_0891B630;
      }
      goto L_0891B61C;
    }
L_0891B61C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0891B5FC;
      }
      goto L_0891B62C;
    }
L_0891B62C:
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    goto L_0891B630;
L_0891B630:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B640;
      }
      goto L_0891B638;
    }
L_0891B638:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_0891B640;
L_0891B640:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x0891B650u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0891B650u) goto L_0891B650;
    return;
L_0891B650:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[5]);
    aot_gpr[31] = (0x0891B664u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x0891B664u) goto L_0891B664;
    return;
L_0891B664:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[10] = (0u | 63u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[11] = (0u | 33u);
      if (branch_taken) {
          goto L_0891B760;
      }
      goto L_0891B67C;
    }
L_0891B67C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B760;
      }
      goto L_0891B684;
    }
L_0891B684:
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0891B73C;
      }
      goto L_0891B690;
    }
L_0891B690:
    { const bool branch_taken = aot_gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B6D0;
      }
      goto L_0891B698;
    }
L_0891B698:
    aot_gpr[7] = (aot_gpr[29] + aot_gpr[6]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_0891B6C0;
      }
      goto L_0891B6A8;
    }
L_0891B6A8:
    { const bool branch_taken = aot_gpr[7] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0891B6C0;
      }
      goto L_0891B6B0;
    }
L_0891B6B0:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0891B6C8;
      }
      goto L_0891B6C0;
    }
L_0891B6C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B73C;
      }
      goto L_0891B6C8;
    }
L_0891B6C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B734;
      }
      goto L_0891B6D0;
    }
L_0891B6D0:
    aot_gpr[7] = (aot_gpr[16] + aot_gpr[6]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (aot_gpr[29] + aot_gpr[6]);
    aot_gpr[7] = (0u | 0u);
    { const bool branch_taken = aot_gpr[8] == aot_gpr[11];
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(8))))));
      if (branch_taken) {
          goto L_0891B6F8;
      }
      goto L_0891B6F0;
    }
L_0891B6F0:
    { const bool branch_taken = aot_gpr[8] != aot_gpr[10];
    // nop
      if (branch_taken) {
          goto L_0891B6FC;
      }
      goto L_0891B6F8;
    }
L_0891B6F8:
    aot_gpr[7] = (0u | 1u);
    goto L_0891B6FC;
L_0891B6FC:
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B70C;
      }
      goto L_0891B704;
    }
L_0891B704:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0891B72C;
      }
      goto L_0891B70C;
    }
L_0891B70C:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[30];
    // nop
      if (branch_taken) {
          goto L_0891B72C;
      }
      goto L_0891B714;
    }
L_0891B714:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0891B72C;
      }
      goto L_0891B71C;
    }
L_0891B71C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0891B734;
      }
      goto L_0891B72C;
    }
L_0891B72C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B73C;
      }
      goto L_0891B734;
    }
L_0891B734:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B690;
      }
      goto L_0891B73C;
    }
L_0891B73C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B760;
      }
      goto L_0891B744;
    }
L_0891B744:
    aot_gpr[5] = (aot_gpr[4] - aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0891B760;
      }
      goto L_0891B75C;
    }
L_0891B75C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0891B760;
L_0891B760:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891B76C;
      }
      goto L_0891B768;
    }
L_0891B768:
    aot_gpr[18] = (0u | 0u);
    goto L_0891B76C;
L_0891B76C:
    aot_gpr[18] = (aot_gpr[4] - aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0891B7A0;
      }
      goto L_0891B77C;
    }
L_0891B77C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[31] = (0x0891B790u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 83u, 0x08919650u>(ctx, &aot_mem) && ctx.pc == 0x0891B790u) goto L_0891B790;
    return;
L_0891B790:
    ctx.set_fpu_condition((aot_fpr[0] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891B7A0;
      }
      goto L_0891B7A0;
    }
L_0891B7A0:
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[18]);
    aot_gpr[18] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[22]) ? 1u : 0u);
    if (aot_gpr[18] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
        goto L_0891B7D4;
    }
    goto L_0891B7B0;
L_0891B7B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    if (static_cast<std::int32_t>(aot_gpr[4]) < 0) {
    aot_fpr[12] = aot_fpr[12] + aot_fpr[26];
        goto L_0891B7C8;
    }
    goto L_0891B7C8;
L_0891B7C8:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_fpr[24] = aot_fpr[24] + aot_fpr[12];
      if (branch_taken) {
          goto L_0891B7F0;
      }
      goto L_0891B7D4;
    }
L_0891B7D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[24] = aot_fpr[24] + aot_fpr[12];
    goto L_0891B7F0;
L_0891B7F0:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B540;
      }
      goto L_0891B7F8;
    }
L_0891B7F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_0891B800;
L_0891B800:
    aot_fpr[0] = aot_fpr[24] - aot_fpr[12];
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(312)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(316)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(328)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(332)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(336)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B844:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-368));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(324), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(328), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(352), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (aot_gpr[18] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[30]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(332), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(336), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(340), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(348), aot_gpr[23]);
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[20] = (aot_gpr[10] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[9] | 0u);
    aot_gpr[21] = (aot_gpr[7] | 0u);
    aot_gpr[23] = (aot_gpr[11] & 255u);
    aot_gpr[16] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(316), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(344), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(356), aot_gpr[31]);
    aot_gpr[31] = (0x0891B8D8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x0891B8D8u) goto L_0891B8D8;
    return;
L_0891B8D8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[22] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[22]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[21]);
      if (branch_taken) {
          goto L_0891BC2C;
      }
      goto L_0891B90C;
    }
L_0891B90C:
    aot_gpr[4] = (20352u << 16u);
    aot_gpr[21] = (0u | 13u);
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[17] = (0u | 32u);
    aot_gpr[30] = (0u | 45u);
    aot_gpr[19] = (0u | 10u);
    goto L_0891B924;
L_0891B924:
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[16]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_0891B92C;
L_0891B92C:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[22]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0891B94C;
      }
      goto L_0891B934;
    }
L_0891B934:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B94C;
      }
      goto L_0891B93C;
    }
L_0891B93C:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_0891B92C;
      }
      goto L_0891B94C;
    }
L_0891B94C:
    aot_gpr[18] = (aot_gpr[20] + aot_gpr[16]);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(264));
    aot_gpr[31] = (0x0891B96Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 101u, 0x0891982Cu>(ctx, &aot_mem) && ctx.pc == 0x0891B96Cu) goto L_0891B96C;
    return;
L_0891B96C:
    aot_gpr[31] = (0x0891B974u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x0891B974u) goto L_0891B974;
    return;
L_0891B974:
    aot_gpr[7] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
      if (branch_taken) {
          goto L_0891B9D0;
      }
      goto L_0891B980;
    }
L_0891B980:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[20] + aot_gpr[16]);
      if (branch_taken) {
          goto L_0891B9C8;
      }
      goto L_0891B990;
    }
L_0891B990:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0891B9AC;
      }
      goto L_0891B99C;
    }
L_0891B99C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0891B9AC;
      }
      goto L_0891B9A4;
    }
L_0891B9A4:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_0891B9B8;
      }
      goto L_0891B9AC;
    }
L_0891B9AC:
    aot_gpr[7] = (aot_gpr[6] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[10] < aot_gpr[7] ? 1u : 0u);
      if (branch_taken) {
          goto L_0891BA14;
      }
      goto L_0891B9B8;
    }
L_0891B9B8:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0891B990;
      }
      goto L_0891B9C8;
    }
L_0891B9C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[10] < aot_gpr[7] ? 1u : 0u);
      if (branch_taken) {
          goto L_0891BA14;
      }
      goto L_0891B9D0;
    }
L_0891B9D0:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[20] + aot_gpr[16]);
      if (branch_taken) {
          goto L_0891BA10;
      }
      goto L_0891B9E0;
    }
L_0891B9E0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0891B9F4;
      }
      goto L_0891B9EC;
    }
L_0891B9EC:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0891BA00;
      }
      goto L_0891B9F4;
    }
L_0891B9F4:
    aot_gpr[7] = (aot_gpr[6] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[10] < aot_gpr[7] ? 1u : 0u);
      if (branch_taken) {
          goto L_0891BA14;
      }
      goto L_0891BA00;
    }
L_0891BA00:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0891B9E0;
      }
      goto L_0891BA10;
    }
L_0891BA10:
    aot_gpr[6] = (aot_gpr[10] < aot_gpr[7] ? 1u : 0u);
    goto L_0891BA14;
L_0891BA14:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BA24;
      }
      goto L_0891BA1C;
    }
L_0891BA1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[7]);
    aot_gpr[10] = (aot_gpr[7] | 0u);
    goto L_0891BA24;
L_0891BA24:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0891BA34u);
    aot_gpr[6] = (aot_gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0891BA34u) goto L_0891BA34;
    return;
L_0891BA34:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[5]);
    aot_gpr[31] = (0x0891BA48u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x0891BA48u) goto L_0891BA48;
    return;
L_0891BA48:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[10] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[11] = (0u | 63u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[12] = (0u | 33u);
      if (branch_taken) {
          goto L_0891BB44;
      }
      goto L_0891BA60;
    }
L_0891BA60:
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BB44;
      }
      goto L_0891BA68;
    }
L_0891BA68:
    aot_gpr[9] = (aot_gpr[8] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[7] = (aot_gpr[10] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0891BB20;
      }
      goto L_0891BA74;
    }
L_0891BA74:
    { const bool branch_taken = aot_gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BAB4;
      }
      goto L_0891BA7C;
    }
L_0891BA7C:
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[7]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_0891BAA4;
      }
      goto L_0891BA8C;
    }
L_0891BA8C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0891BAA4;
      }
      goto L_0891BA94;
    }
L_0891BA94:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (aot_gpr[8] < aot_gpr[10] ? 1u : 0u);
      if (branch_taken) {
          goto L_0891BAAC;
      }
      goto L_0891BAA4;
    }
L_0891BAA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BB20;
      }
      goto L_0891BAAC;
    }
L_0891BAAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BB18;
      }
      goto L_0891BAB4;
    }
L_0891BAB4:
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[7]);
    aot_gpr[5] = (0u | 0u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[12];
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(8))))));
      if (branch_taken) {
          goto L_0891BADC;
      }
      goto L_0891BAD4;
    }
L_0891BAD4:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[11];
    // nop
      if (branch_taken) {
          goto L_0891BAE0;
      }
      goto L_0891BADC;
    }
L_0891BADC:
    aot_gpr[5] = (0u | 1u);
    goto L_0891BAE0;
L_0891BAE0:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BAF0;
      }
      goto L_0891BAE8;
    }
L_0891BAE8:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0891BB10;
      }
      goto L_0891BAF0;
    }
L_0891BAF0:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[30];
    // nop
      if (branch_taken) {
          goto L_0891BB10;
      }
      goto L_0891BAF8;
    }
L_0891BAF8:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0891BB10;
      }
      goto L_0891BB00;
    }
L_0891BB00:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (aot_gpr[8] < aot_gpr[10] ? 1u : 0u);
      if (branch_taken) {
          goto L_0891BB18;
      }
      goto L_0891BB10;
    }
L_0891BB10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BB20;
      }
      goto L_0891BB18;
    }
L_0891BB18:
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BA74;
      }
      goto L_0891BB20;
    }
L_0891BB20:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BB44;
      }
      goto L_0891BB28;
    }
L_0891BB28:
    aot_gpr[4] = (aot_gpr[10] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0891BB44;
      }
      goto L_0891BB40;
    }
L_0891BB40:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    goto L_0891BB44;
L_0891BB44:
    { const bool branch_taken = aot_gpr[8] != aot_gpr[10];
    // nop
      if (branch_taken) {
          goto L_0891BB50;
      }
      goto L_0891BB4C;
    }
L_0891BB4C:
    aot_gpr[8] = (0u | 0u);
    goto L_0891BB50;
L_0891BB50:
    aot_gpr[18] = (aot_gpr[10] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0891BBC8;
      }
      goto L_0891BB60;
    }
L_0891BB60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x0891BB78u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 83u, 0x08919650u>(ctx, &aot_mem) && ctx.pc == 0x0891BB78u) goto L_0891BB78;
    return;
L_0891BB78:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (2215u << 16u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25408)));
      if (branch_taken) {
          goto L_0891BB98;
      }
      goto L_0891BB90;
    }
L_0891BB90:
    aot_fpr[12] = aot_fpr[24] / aot_fpr[12];
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[26] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[26] = fs * ft; }
    goto L_0891BB98;
L_0891BB98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_gpr[31] = (0x0891BBC8u);
    aot_gpr[10] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x0891BBC8u) goto L_0891BBC8;
    return;
L_0891BBC8:
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[18]);
    aot_gpr[18] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[22]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0891BBFC;
      }
      goto L_0891BBD8;
    }
L_0891BBD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    if (static_cast<std::int32_t>(aot_gpr[4]) < 0) {
    aot_fpr[13] = aot_fpr[13] + aot_fpr[28];
        goto L_0891BBF0;
    }
    goto L_0891BBF0;
L_0891BBF0:
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
      if (branch_taken) {
          goto L_0891BC1C;
      }
      goto L_0891BBFC;
    }
L_0891BBFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_0891BC1C;
L_0891BC1C:
    { const bool branch_taken = aot_gpr[18] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0891B924;
      }
      goto L_0891BC24;
    }
L_0891BC24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_0891BC2C;
L_0891BC2C:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[0] = aot_fpr[0] - aot_fpr[12];
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(312)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(316)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(328)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(332)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(336)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(340)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(348)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(352)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(356)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891BC78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-320));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[23]);
    aot_gpr[23] = (0u | 46u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(256), static_cast<std::uint8_t>(aot_gpr[23]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(257), static_cast<std::uint8_t>(aot_gpr[23]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(258), static_cast<std::uint8_t>(aot_gpr[23]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[22]);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[16] = (aot_gpr[10] | 0u);
    aot_gpr[17] = (aot_gpr[9] | 0u);
    aot_gpr[18] = (aot_gpr[8] | 0u);
    aot_gpr[20] = (aot_gpr[7] | 0u);
    aot_gpr[21] = (aot_gpr[5] | 0u);
    aot_gpr[22] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(259), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[31]);
    aot_gpr[31] = (0x0891BCF0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 83u, 0x08919650u>(ctx, &aot_mem) && ctx.pc == 0x0891BCF0u) goto L_0891BCF0;
    return;
L_0891BCF0:
    aot_gpr[4] = (16672u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(260));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_fpr[12] = aot_fpr[0] + aot_fpr[12];
    aot_gpr[31] = (0x0891BD1Cu);
    aot_fpr[12] = aot_fpr[20] - aot_fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 101u, 0x0891982Cu>(ctx, &aot_mem) && ctx.pc == 0x0891BD1Cu) goto L_0891BD1C;
    return;
L_0891BD1C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0891BD2Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0891BD2Cu) goto L_0891BD2C;
    return;
L_0891BD2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[23]));
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[23]));
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[23]));
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[9] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0891BDA4u);
    aot_gpr[10] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x0891BDA4u) goto L_0891BDA4;
    return;
L_0891BDA4:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891BDDC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x0891BE14u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-26304));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0891BE14u) goto L_0891BE14;
    return;
L_0891BE14:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0891BEE4;
      }
      goto L_0891BE20;
    }
L_0891BE20:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[17] = (0u | 13u);
    goto L_0891BE28;
L_0891BE28:
    aot_gpr[19] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0891BE38u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 77u, 0x0891956Cu>(ctx, &aot_mem) && ctx.pc == 0x0891BE38u) goto L_0891BE38;
    return;
L_0891BE38:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[22] = (aot_gpr[20] - aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0891BE50u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 243u, 0x08A3AC74u>(ctx, &aot_mem) && ctx.pc == 0x0891BE50u) goto L_0891BE50;
    return;
L_0891BE50:
    aot_gpr[19] = (aot_gpr[21] + aot_gpr[22]);
    aot_gpr[21] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BE78;
      }
      goto L_0891BE6C;
    }
L_0891BE6C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0891BE78u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 77u, 0x0891956Cu>(ctx, &aot_mem) && ctx.pc == 0x0891BE78u) goto L_0891BE78;
    return;
L_0891BE78:
    aot_gpr[31] = (0x0891BE80u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0891B420;
L_0891BE80:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BED8;
      }
      goto L_0891BE88;
    }
L_0891BE88:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BED8;
      }
      goto L_0891BE94;
    }
L_0891BE94:
    aot_gpr[31] = (0x0891BE9Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0891B358;
L_0891BE9C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
      if (branch_taken) {
          goto L_0891BEB4;
      }
      goto L_0891BEA4;
    }
L_0891BEA4:
    aot_gpr[31] = (0x0891BEACu);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    goto L_0891B358;
L_0891BEAC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BED8;
      }
      goto L_0891BEB4;
    }
L_0891BEB4:
    aot_gpr[31] = (0x0891BEBCu);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    goto L_0891B3B4;
L_0891BEBC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BED8;
      }
      goto L_0891BEC4;
    }
L_0891BEC4:
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[19]);
    aot_gpr[21] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0891BED8;
L_0891BED8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BE28;
      }
      goto L_0891BEE4;
    }
L_0891BEE4:
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
L_0891BF0C:
    aot_gpr[4] = (16256u << 16u);
    aot_gpr[5] = (16968u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = aot_fpr[13] / aot_fpr[12];
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-3132), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[9] = (2216u << 16u);
    aot_gpr[11] = (0u | 1u);
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(-29344), static_cast<std::uint8_t>(aot_gpr[11]));
    aot_gpr[4] = (16153u << 16u);
    aot_gpr[10] = (2218u << 16u);
    aot_gpr[5] = (16341u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_gpr[5] = (aot_gpr[5] | 22125u);
    aot_gpr[7] = (2218u << 16u);
    aot_fpr[15] = aot_fpr[14] / aot_fpr[12];
    aot_gpr[8] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-7652), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(-7048), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = aot_fpr[12] / aot_fpr[14];
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-6472), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-12888), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891BF80:
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-29344), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891BF8C:
    aot_gpr[4] = (16880u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 1u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16256u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[15] = aot_fpr[14] / aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7652), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-6472), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[12] = aot_fpr[14] / aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-12888), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-3132), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891BFD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[6] & 32767u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0891C004u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    (void)rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0279(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0279_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_279(Runtime &runtime) {
    runtime.register_generated_unit(279u, 0x0891B000u, 4096u, &recomp_unit_0279, &recomp_unit_0279_entry);
    runtime.register_function(0x0891B000u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B04Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B0B8u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B0C4u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B0F4u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B124u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B158u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B198u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B1C0u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B1F0u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B214u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B294u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B2ACu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B2D8u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B2FCu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B334u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B358u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B368u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B374u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B378u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B380u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B38Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B390u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B398u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B3A0u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B3A8u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B3ACu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B3B4u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B3D8u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B3E0u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B3ECu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B3FCu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B404u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B40Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B410u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B420u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B444u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B44Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B458u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B468u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B470u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B478u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B47Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B48Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B50Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B528u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B540u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B548u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B550u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B558u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B568u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B588u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B590u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B59Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B5ACu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B5B8u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B5C0u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B5C8u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B5D4u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B5E4u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B5ECu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B5FCu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B608u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B610u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B61Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B62Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B630u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B638u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B640u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B650u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B664u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B67Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B684u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B690u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B698u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B6A8u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B6B0u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B6C0u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B6C8u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B6D0u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B6F0u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B6F8u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B6FCu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B704u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B70Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B714u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B71Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B72Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B734u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B73Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B744u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B75Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B760u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B768u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B76Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B77Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B790u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B7A0u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B7B0u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B7C8u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B7D4u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B7F0u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B7F8u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B800u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B844u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B8D8u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B90Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B924u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B92Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B934u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B93Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B94Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B96Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B974u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B980u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B990u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B99Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B9A4u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B9ACu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B9B8u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B9C8u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B9D0u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B9E0u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B9ECu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891B9F4u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BA00u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BA10u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BA14u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BA1Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BA24u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BA34u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BA48u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BA60u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BA68u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BA74u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BA7Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BA8Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BA94u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BAA4u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BAACu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BAB4u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BAD4u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BADCu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BAE0u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BAE8u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BAF0u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BAF8u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BB00u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BB10u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BB18u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BB20u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BB28u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BB40u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BB44u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BB4Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BB50u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BB60u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BB78u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BB90u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BB98u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BBC8u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BBD8u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BBF0u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BBFCu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BC1Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BC24u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BC2Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BC78u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BCF0u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BD1Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BD2Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BDA4u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BDDCu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BE14u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BE20u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BE28u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BE38u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BE50u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BE6Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BE78u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BE80u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BE88u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BE94u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BE9Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BEA4u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BEACu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BEB4u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BEBCu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BEC4u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BED8u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BEE4u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BF0Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BF80u, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BF8Cu, &recomp_unit_0279, "recomp_unit_0279");
    runtime.register_function(0x0891BFD0u, &recomp_unit_0279, "recomp_unit_0279");
}
} // namespace psprecomp
