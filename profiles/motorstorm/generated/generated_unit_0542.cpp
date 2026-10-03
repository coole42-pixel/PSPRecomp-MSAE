#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0542[1023] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 0, 20,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0, 26, 0, 27, 0, 0, 28, 0, 29, 0,
    30, 0, 0, 31, 0, 0, 32, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 36, 0, 37, 0, 0, 38, 0, 0, 0, 39, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 44, 0, 0, 0, 0, 45,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 48, 0, 49, 0, 0, 50, 51, 0, 0, 52, 0, 53,
    0, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 57, 0, 0, 0, 58, 0, 59, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0,
    0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0,
    0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 91, 0, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0,
    0, 0, 98, 0, 0, 0, 99, 0, 0, 100, 0, 0, 101, 0, 102, 0, 0, 103, 104, 0, 0, 105, 0, 0, 0, 106, 0, 107, 0, 108, 0, 0,
    109, 0, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 113, 0, 0, 114, 0, 0, 115, 0, 116, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0,
    0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 122, 0, 123, 0, 0, 124, 125, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0,
    0, 129, 0, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 139, 0, 140, 0, 0, 141, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 144, 0, 145, 0, 146, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 157,
    0, 0, 0, 158, 0, 0, 0, 159, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 166,
    0, 0, 0, 167, 0, 0, 0, 168, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 176, 0, 177, 0, 178, 0, 0, 0, 0, 179, 180, 0, 0, 181, 0, 182, 0,
    183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 190, 0, 191, 192, 0, 0,
    193, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0, 201, 0,
    0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208,
    0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224,
    0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 231, 0, 232, 233, 0, 234, 0, 0, 235, 0, 236, 0, 0, 237, 0, 238, 0, 239,
};
void recomp_unit_0542_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A22000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0542[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A22000;
    case 2u: goto L_08A22018;
    case 3u: goto L_08A22024;
    case 4u: goto L_08A2202C;
    case 5u: goto L_08A22050;
    case 6u: goto L_08A22060;
    case 7u: goto L_08A22070;
    case 8u: goto L_08A22098;
    case 9u: goto L_08A220B8;
    case 10u: goto L_08A220C4;
    case 11u: goto L_08A220CC;
    case 12u: goto L_08A220DC;
    case 13u: goto L_08A22108;
    case 14u: goto L_08A2211C;
    case 15u: goto L_08A22130;
    case 16u: goto L_08A22144;
    case 17u: goto L_08A22154;
    case 18u: goto L_08A22164;
    case 19u: goto L_08A22170;
    case 20u: goto L_08A2217C;
    case 21u: goto L_08A22190;
    case 22u: goto L_08A221A4;
    case 23u: goto L_08A221B8;
    case 24u: goto L_08A221CC;
    case 25u: goto L_08A221D4;
    case 26u: goto L_08A221DC;
    case 27u: goto L_08A221E4;
    case 28u: goto L_08A221F0;
    case 29u: goto L_08A221F8;
    case 30u: goto L_08A22200;
    case 31u: goto L_08A2220C;
    case 32u: goto L_08A22218;
    case 33u: goto L_08A22220;
    case 34u: goto L_08A22234;
    case 35u: goto L_08A22248;
    case 36u: goto L_08A22254;
    case 37u: goto L_08A2225C;
    case 38u: goto L_08A22268;
    case 39u: goto L_08A22278;
    case 40u: goto L_08A222A0;
    case 41u: goto L_08A222BC;
    case 42u: goto L_08A222D4;
    case 43u: goto L_08A222E0;
    case 44u: goto L_08A222E8;
    case 45u: goto L_08A222FC;
    case 46u: goto L_08A2233C;
    case 47u: goto L_08A22344;
    case 48u: goto L_08A22350;
    case 49u: goto L_08A22358;
    case 50u: goto L_08A22364;
    case 51u: goto L_08A22368;
    case 52u: goto L_08A22374;
    case 53u: goto L_08A2237C;
    case 54u: goto L_08A2238C;
    case 55u: goto L_08A22394;
    case 56u: goto L_08A223A4;
    case 57u: goto L_08A223AC;
    case 58u: goto L_08A223BC;
    case 59u: goto L_08A223C4;
    case 60u: goto L_08A223C8;
    case 61u: goto L_08A223D8;
    case 62u: goto L_08A223F8;
    case 63u: goto L_08A22418;
    case 64u: goto L_08A22454;
    case 65u: goto L_08A2245C;
    case 66u: goto L_08A22460;
    case 67u: goto L_08A2249C;
    case 68u: goto L_08A224E0;
    case 69u: goto L_08A22510;
    case 70u: goto L_08A22518;
    case 71u: goto L_08A22534;
    case 72u: goto L_08A22544;
    case 73u: goto L_08A2254C;
    case 74u: goto L_08A2256C;
    case 75u: goto L_08A22578;
    case 76u: goto L_08A22580;
    case 77u: goto L_08A225A0;
    case 78u: goto L_08A225A8;
    case 79u: goto L_08A225AC;
    case 80u: goto L_08A225C0;
    case 81u: goto L_08A225E4;
    case 82u: goto L_08A225F4;
    case 83u: goto L_08A22604;
    case 84u: goto L_08A22628;
    case 85u: goto L_08A22648;
    case 86u: goto L_08A22654;
    case 87u: goto L_08A2265C;
    case 88u: goto L_08A2266C;
    case 89u: goto L_08A22690;
    case 90u: goto L_08A226A4;
    case 91u: goto L_08A226AC;
    case 92u: goto L_08A226B8;
    case 93u: goto L_08A226C0;
    case 94u: goto L_08A226D0;
    case 95u: goto L_08A226E0;
    case 96u: goto L_08A226EC;
    case 97u: goto L_08A226F8;
    case 98u: goto L_08A22708;
    case 99u: goto L_08A22718;
    case 100u: goto L_08A22724;
    case 101u: goto L_08A22730;
    case 102u: goto L_08A22738;
    case 103u: goto L_08A22744;
    case 104u: goto L_08A22748;
    case 105u: goto L_08A22754;
    case 106u: goto L_08A22764;
    case 107u: goto L_08A2276C;
    case 108u: goto L_08A22774;
    case 109u: goto L_08A22780;
    case 110u: goto L_08A22790;
    case 111u: goto L_08A2279C;
    case 112u: goto L_08A227A8;
    case 113u: goto L_08A227B0;
    case 114u: goto L_08A227BC;
    case 115u: goto L_08A227C8;
    case 116u: goto L_08A227D0;
    case 117u: goto L_08A227D8;
    case 118u: goto L_08A227E4;
    case 119u: goto L_08A22804;
    case 120u: goto L_08A22820;
    case 121u: goto L_08A22834;
    case 122u: goto L_08A2283C;
    case 123u: goto L_08A22844;
    case 124u: goto L_08A22850;
    case 125u: goto L_08A22854;
    case 126u: goto L_08A22860;
    case 127u: goto L_08A2286C;
    case 128u: goto L_08A22878;
    case 129u: goto L_08A22884;
    case 130u: goto L_08A22890;
    case 131u: goto L_08A22898;
    case 132u: goto L_08A228AC;
    case 133u: goto L_08A228B4;
    case 134u: goto L_08A228BC;
    case 135u: goto L_08A228C4;
    case 136u: goto L_08A22908;
    case 137u: goto L_08A22920;
    case 138u: goto L_08A2292C;
    case 139u: goto L_08A22934;
    case 140u: goto L_08A2293C;
    case 141u: goto L_08A22948;
    case 142u: goto L_08A22954;
    case 143u: goto L_08A2295C;
    case 144u: goto L_08A22994;
    case 145u: goto L_08A2299C;
    case 146u: goto L_08A229A4;
    case 147u: goto L_08A229A8;
    case 148u: goto L_08A229B8;
    case 149u: goto L_08A229E0;
    case 150u: goto L_08A229E8;
    case 151u: goto L_08A22A2C;
    case 152u: goto L_08A22A3C;
    case 153u: goto L_08A22A4C;
    case 154u: goto L_08A22A54;
    case 155u: goto L_08A22A64;
    case 156u: goto L_08A22A74;
    case 157u: goto L_08A22A7C;
    case 158u: goto L_08A22A8C;
    case 159u: goto L_08A22A9C;
    case 160u: goto L_08A22AA4;
    case 161u: goto L_08A22AB4;
    case 162u: goto L_08A22ACC;
    case 163u: goto L_08A22AD4;
    case 164u: goto L_08A22AE4;
    case 165u: goto L_08A22AF4;
    case 166u: goto L_08A22AFC;
    case 167u: goto L_08A22B0C;
    case 168u: goto L_08A22B1C;
    case 169u: goto L_08A22B24;
    case 170u: goto L_08A22B34;
    case 171u: goto L_08A22B44;
    case 172u: goto L_08A22B4C;
    case 173u: goto L_08A22B90;
    case 174u: goto L_08A22BA4;
    case 175u: goto L_08A22BB4;
    case 176u: goto L_08A22BBC;
    case 177u: goto L_08A22BC4;
    case 178u: goto L_08A22BCC;
    case 179u: goto L_08A22BE0;
    case 180u: goto L_08A22BE4;
    case 181u: goto L_08A22BF0;
    case 182u: goto L_08A22BF8;
    case 183u: goto L_08A22C00;
    case 184u: goto L_08A22C08;
    case 185u: goto L_08A22C28;
    case 186u: goto L_08A22C30;
    case 187u: goto L_08A22C38;
    case 188u: goto L_08A22C58;
    case 189u: goto L_08A22C60;
    case 190u: goto L_08A22C68;
    case 191u: goto L_08A22C70;
    case 192u: goto L_08A22C74;
    case 193u: goto L_08A22C80;
    case 194u: goto L_08A22C88;
    case 195u: goto L_08A22C98;
    case 196u: goto L_08A22CC0;
    case 197u: goto L_08A22CCC;
    case 198u: goto L_08A22CD8;
    case 199u: goto L_08A22CE4;
    case 200u: goto L_08A22CF0;
    case 201u: goto L_08A22CF8;
    case 202u: goto L_08A22D04;
    case 203u: goto L_08A22D18;
    case 204u: goto L_08A22D2C;
    case 205u: goto L_08A22D3C;
    case 206u: goto L_08A22D48;
    case 207u: goto L_08A22D6C;
    case 208u: goto L_08A22D7C;
    case 209u: goto L_08A22D8C;
    case 210u: goto L_08A22D9C;
    case 211u: goto L_08A22DAC;
    case 212u: goto L_08A22DBC;
    case 213u: goto L_08A22DCC;
    case 214u: goto L_08A22DDC;
    case 215u: goto L_08A22DEC;
    case 216u: goto L_08A22DFC;
    case 217u: goto L_08A22E3C;
    case 218u: goto L_08A22E60;
    case 219u: goto L_08A22E70;
    case 220u: goto L_08A22EA4;
    case 221u: goto L_08A22EB4;
    case 222u: goto L_08A22EC0;
    case 223u: goto L_08A22EDC;
    case 224u: goto L_08A22EFC;
    case 225u: goto L_08A22F0C;
    case 226u: goto L_08A22F44;
    case 227u: goto L_08A22F58;
    case 228u: goto L_08A22F68;
    case 229u: goto L_08A22FA4;
    case 230u: goto L_08A22FAC;
    case 231u: goto L_08A22FB4;
    case 232u: goto L_08A22FBC;
    case 233u: goto L_08A22FC0;
    case 234u: goto L_08A22FC8;
    case 235u: goto L_08A22FD4;
    case 236u: goto L_08A22FDC;
    case 237u: goto L_08A22FE8;
    case 238u: goto L_08A22FF0;
    case 239u: goto L_08A22FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A22000:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22018:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[6] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(324), aot_gpr[5]);
        goto L_08A22024;
    }
    goto L_08A22024;
L_08A22024:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2202C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A22050u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1244));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A22050u) goto L_08A22050;
    return;
L_08A22050:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(328));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A22060u);
    aot_gpr[6] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22060u) goto L_08A22060;
    return;
L_08A22060:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(428));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A22070u);
    aot_gpr[6] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22070u) goto L_08A22070;
    return;
L_08A22070:
    aot_gpr[4] = (0u | 14u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(320), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(528), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(532), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(536), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22098:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A220B8u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 158u, 0x08A12ADCu>(ctx, &aot_mem) && ctx.pc == 0x08A220B8u) goto L_08A220B8;
    return;
L_08A220B8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(528), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A220CC;
      }
      goto L_08A220C4;
    }
L_08A220C4:
    aot_gpr[31] = (0x08A220CCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08A228C4;
L_08A220CC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A220DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08A22108u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 215u, 0x08A46CCCu>(ctx, &aot_mem) && ctx.pc == 0x08A22108u) goto L_08A22108;
    return;
L_08A22108:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(18024));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[31] = (0x08A2211Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A225C0;
L_08A2211C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(320));
    aot_gpr[31] = (0x08A22130u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(1264));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A22130u) goto L_08A22130;
    return;
L_08A22130:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A22144u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A22144u) goto L_08A22144;
    return;
L_08A22144:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A22154u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(1276));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A22154u) goto L_08A22154;
    return;
L_08A22154:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A22164u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A22164u) goto L_08A22164;
    return;
L_08A22164:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(328));
      if (branch_taken) {
          goto L_08A2217C;
      }
      goto L_08A22170;
    }
L_08A22170:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08A2217Cu);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(428));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A2217Cu) goto L_08A2217C;
    return;
L_08A2217C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[17] + static_cast<std::uint32_t>(324));
    aot_gpr[31] = (0x08A22190u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(1284));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A22190u) goto L_08A22190;
    return;
L_08A22190:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A221A4u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A221A4u) goto L_08A221A4;
    return;
L_08A221A4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x08A221B8u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(1292));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A221B8u) goto L_08A221B8;
    return;
L_08A221B8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A221CCu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A221CCu) goto L_08A221CC;
    return;
L_08A221CC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A221DC;
      }
      goto L_08A221D4;
    }
L_08A221D4:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_08A221DC;
L_08A221DC:
    aot_gpr[31] = (0x08A221E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A221E4u) goto L_08A221E4;
    return;
L_08A221E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A221F0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A221F0u) goto L_08A221F0;
    return;
L_08A221F0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22218;
      }
      goto L_08A221F8;
    }
L_08A221F8:
    aot_gpr[31] = (0x08A22200u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A22200u) goto L_08A22200;
    return;
L_08A22200:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A2220Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2220Cu) goto L_08A2220C;
    return;
L_08A2220C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A22218u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A22218u) goto L_08A22218;
    return;
L_08A22218:
    aot_gpr[31] = (0x08A22220u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 49u, 0x089EF294u>(ctx, &aot_mem) && ctx.pc == 0x08A22220u) goto L_08A22220;
    return;
L_08A22220:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(532));
    aot_gpr[31] = (0x08A22234u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(1304));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A22234u) goto L_08A22234;
    return;
L_08A22234:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A22248u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A22248u) goto L_08A22248;
    return;
L_08A22248:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(532), 0u);
        goto L_08A22254;
    }
    goto L_08A22254;
L_08A22254:
    aot_gpr[31] = (0x08A2225Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A2225Cu) goto L_08A2225C;
    return;
L_08A2225C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A22268u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A22268u) goto L_08A22268;
    return;
L_08A22268:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A22278u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A22628;
L_08A22278:
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
L_08A222A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A222E8;
      }
      goto L_08A222BC;
    }
L_08A222BC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26304));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A222D4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A222D4u) goto L_08A222D4;
    return;
L_08A222D4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A222E8;
      }
      goto L_08A222E0;
    }
L_08A222E0:
    aot_gpr[31] = (0x08A222E8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A222E8u) goto L_08A222E8;
    return;
L_08A222E8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A222FC:
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
    aot_gpr[31] = (0x08A2233Cu);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2233Cu) goto L_08A2233C;
    return;
L_08A2233C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A223F8;
      }
      goto L_08A22344;
    }
L_08A22344:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A22350u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A22350u) goto L_08A22350;
    return;
L_08A22350:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A22368;
      }
      goto L_08A22358;
    }
L_08A22358:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(528)));
    aot_gpr[31] = (0x08A22364u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_08A22CC0;
L_08A22364:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A22368;
L_08A22368:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A22374u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A22374u) goto L_08A22374;
    return;
L_08A22374:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A223C8;
      }
      goto L_08A2237C;
    }
L_08A2237C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A2238Cu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A2238Cu) goto L_08A2238C;
    return;
L_08A2238C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A223C8;
      }
      goto L_08A22394;
    }
L_08A22394:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A223A4u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A223A4u) goto L_08A223A4;
    return;
L_08A223A4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A223C8;
      }
      goto L_08A223AC;
    }
L_08A223AC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A223BCu);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A223BCu) goto L_08A223BC;
    return;
L_08A223BC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A223F8;
      }
      goto L_08A223C4;
    }
L_08A223C4:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08A223C8;
L_08A223C8:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A223D8u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 11u, 0x08A0107Cu>(ctx, &aot_mem) && ctx.pc == 0x08A223D8u) goto L_08A223D8;
    return;
L_08A223D8:
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
L_08A223F8:
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
L_08A22418:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2245C;
      }
      goto L_08A22454;
    }
L_08A22454:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(316)));
      if (branch_taken) {
          goto L_08A22460;
      }
      goto L_08A2245C;
    }
L_08A2245C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    goto L_08A22460;
L_08A22460:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[6] + static_cast<std::uint32_t>(72));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(0))))));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(296)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(300)));
    aot_gpr[21] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[23]);
    aot_gpr[30] = (aot_gpr[16] + static_cast<std::uint32_t>(328));
    aot_gpr[22] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(324)));
    aot_gpr[31] = (0x08A2249Cu);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A2249Cu) goto L_08A2249C;
    return;
L_08A2249C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    aot_gpr[12] = (aot_gpr[16] + static_cast<std::uint32_t>(144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[10] = (aot_gpr[17] | 0u);
    aot_gpr[11] = (aot_gpr[23] | 0u);
    jump_target = aot_gpr[13];
    aot_gpr[31] = (0x08A224E0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[12]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A224E0u) goto L_08A224E0;
    return;
L_08A224E0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22510:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22518:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A225AC;
      }
      goto L_08A22534;
    }
L_08A22534:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(324)));
    aot_gpr[17] = (2215u << 16u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1324));
      if (branch_taken) {
          goto L_08A22578;
      }
      goto L_08A22544;
    }
L_08A22544:
    aot_gpr[31] = (0x08A2254Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 235u, 0x089FEE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2254Cu) goto L_08A2254C;
    return;
L_08A2254C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A2256Cu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2256Cu) goto L_08A2256C;
    return;
L_08A2256C:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(324)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A225A8;
      }
      goto L_08A22578;
    }
L_08A22578:
    aot_gpr[31] = (0x08A22580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 235u, 0x089FEE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22580u) goto L_08A22580;
    return;
L_08A22580:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A225A0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A225A0u) goto L_08A225A0;
    return;
L_08A225A0:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(324)));
    aot_gpr[17] = (aot_gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08A225A8;
L_08A225A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), aot_gpr[17]);
    goto L_08A225AC;
L_08A225AC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A225C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A225E4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1328));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A225E4u) goto L_08A225E4;
    return;
L_08A225E4:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(328));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A225F4u);
    aot_gpr[6] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A225F4u) goto L_08A225F4;
    return;
L_08A225F4:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(428));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A22604u);
    aot_gpr[6] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22604u) goto L_08A22604;
    return;
L_08A22604:
    aot_gpr[4] = (0u | 14u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(320), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(528), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(532), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22628:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A22648u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 158u, 0x08A12ADCu>(ctx, &aot_mem) && ctx.pc == 0x08A22648u) goto L_08A22648;
    return;
L_08A22648:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(528), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A2265C;
      }
      goto L_08A22654;
    }
L_08A22654:
    aot_gpr[31] = (0x08A2265Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08A22A2C;
L_08A2265C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2266C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A22690u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 27u, 0x08A011D8u>(ctx, &aot_mem) && ctx.pc == 0x08A22690u) goto L_08A22690;
    return;
L_08A22690:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(18160));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[31] = (0x08A226A4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(23464));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 142u, 0x089EEBC0u>(ctx, &aot_mem) && ctx.pc == 0x08A226A4u) goto L_08A226A4;
    return;
L_08A226A4:
    aot_gpr[31] = (0x08A226ACu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(24492));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 142u, 0x089EEBC0u>(ctx, &aot_mem) && ctx.pc == 0x08A226ACu) goto L_08A226AC;
    return;
L_08A226AC:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(25524));
    aot_gpr[31] = (0x08A226B8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 75u, 0x08A46458u>(ctx, &aot_mem) && ctx.pc == 0x08A226B8u) goto L_08A226B8;
    return;
L_08A226B8:
    aot_gpr[31] = (0x08A226C0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A22D48;
L_08A226C0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A226D0u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(1360));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A226D0u) goto L_08A226D0;
    return;
L_08A226D0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A226E0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A226E0u) goto L_08A226E0;
    return;
L_08A226E0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(332));
      if (branch_taken) {
          goto L_08A226F8;
      }
      goto L_08A226EC;
    }
L_08A226EC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08A226F8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A22D2C;
L_08A226F8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A22708u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(1368));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A22708u) goto L_08A22708;
    return;
L_08A22708:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A22718u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A22718u) goto L_08A22718;
    return;
L_08A22718:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A22738;
      }
      goto L_08A22724;
    }
L_08A22724:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08A22730u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A22730u) goto L_08A22730;
    return;
L_08A22730:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A22748;
      }
      goto L_08A22738;
    }
L_08A22738:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A22744u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1376));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A22744u) goto L_08A22744;
    return;
L_08A22744:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A22748;
L_08A22748:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08A22754u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(1412));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A22754u) goto L_08A22754;
    return;
L_08A22754:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A22764u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A22764u) goto L_08A22764;
    return;
L_08A22764:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A22774;
      }
      goto L_08A2276C;
    }
L_08A2276C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(23460), aot_gpr[4]);
    goto L_08A22774;
L_08A22774:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08A22780u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A22780u) goto L_08A22780;
    return;
L_08A22780:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A22790u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A22790u) goto L_08A22790;
    return;
L_08A22790:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A227E4;
      }
      goto L_08A2279C;
    }
L_08A2279C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A227A8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1436));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A227A8u) goto L_08A227A8;
    return;
L_08A227A8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A227BC;
      }
      goto L_08A227B0;
    }
L_08A227B0:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(848), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A227E4;
      }
      goto L_08A227BC;
    }
L_08A227BC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A227C8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1444));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A227C8u) goto L_08A227C8;
    return;
L_08A227C8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A227D8;
      }
      goto L_08A227D0;
    }
L_08A227D0:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(848), 0u);
      if (branch_taken) {
          goto L_08A227E4;
      }
      goto L_08A227D8;
    }
L_08A227D8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A227E4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1448));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A227E4u) goto L_08A227E4;
    return;
L_08A227E4:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A22804:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A22898;
      }
      goto L_08A22820;
    }
L_08A22820:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(18160));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(23456)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A22854;
      }
      goto L_08A22834;
    }
L_08A22834:
    aot_gpr[31] = (0x08A2283Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2283Cu) goto L_08A2283C;
    return;
L_08A2283C:
    aot_gpr[31] = (0x08A22844u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22844u) goto L_08A22844;
    return;
L_08A22844:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(23456)));
    aot_gpr[31] = (0x08A22850u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A22850u) goto L_08A22850;
    return;
L_08A22850:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(23456), 0u);
    goto L_08A22854;
L_08A22854:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(25524));
    aot_gpr[31] = (0x08A22860u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 87u, 0x08A46520u>(ctx, &aot_mem) && ctx.pc == 0x08A22860u) goto L_08A22860;
    return;
L_08A22860:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(24492));
    aot_gpr[31] = (0x08A2286Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 144u, 0x089EEBF4u>(ctx, &aot_mem) && ctx.pc == 0x08A2286Cu) goto L_08A2286C;
    return;
L_08A2286C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(23464));
    aot_gpr[31] = (0x08A22878u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 144u, 0x089EEBF4u>(ctx, &aot_mem) && ctx.pc == 0x08A22878u) goto L_08A22878;
    return;
L_08A22878:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A22884u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A22884u) goto L_08A22884;
    return;
L_08A22884:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22898;
      }
      goto L_08A22890;
    }
L_08A22890:
    aot_gpr[31] = (0x08A22898u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A22898u) goto L_08A22898;
    return;
L_08A22898:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A228AC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A228B4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A228BC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A228C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A22908u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A22908u) goto L_08A22908;
    return;
L_08A22908:
    aot_gpr[20] = (aot_gpr[17] | 0u);
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[20] + static_cast<std::uint32_t>(1120));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1352));
    goto L_08A22920;
L_08A22920:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08A2292Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2292Cu) goto L_08A2292C;
    return;
L_08A2292C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A22994;
      }
      goto L_08A22934;
    }
L_08A22934:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_08A2293C;
L_08A2293C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(864)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A2295C;
      }
      goto L_08A22948;
    }
L_08A22948:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2293C;
      }
      goto L_08A22954;
    }
L_08A22954:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A229A8;
      }
      goto L_08A2295C;
    }
L_08A2295C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1188)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(864), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(1188), aot_gpr[4]);
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
L_08A22994:
    aot_gpr[31] = (0x08A2299Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2299Cu) goto L_08A2299C;
    return;
L_08A2299C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A229E0;
      }
      goto L_08A229A4;
    }
L_08A229A4:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08A229A8;
L_08A229A8:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(328));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(328));
      if (branch_taken) {
          goto L_08A22920;
      }
      goto L_08A229B8;
    }
L_08A229B8:
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
L_08A229E0:
    aot_gpr[31] = (0x08A229E8u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A229E8u) goto L_08A229E8;
    return;
L_08A229E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1188)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(296)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(864), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(1188), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(296), aot_gpr[4]);
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
L_08A22A2C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(300)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (aot_gpr[6] << 2u);
      if (branch_taken) {
          goto L_08A22A4C;
      }
      goto L_08A22A3C;
    }
L_08A22A3C:
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(21856), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(300), aot_gpr[6]);
    goto L_08A22A4C;
L_08A22A4C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22A54:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (aot_gpr[6] << 2u);
      if (branch_taken) {
          goto L_08A22A74;
      }
      goto L_08A22A64;
    }
L_08A22A64:
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(22112), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(304), aot_gpr[6]);
    goto L_08A22A74;
L_08A22A74:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22A7C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(308)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (aot_gpr[6] << 2u);
      if (branch_taken) {
          goto L_08A22A9C;
      }
      goto L_08A22A8C;
    }
L_08A22A8C:
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(22368), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(308), aot_gpr[6]);
    goto L_08A22A9C;
L_08A22A9C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22AA4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(308)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22ACC;
      }
      goto L_08A22AB4;
    }
L_08A22AB4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(324)));
    aot_gpr[7] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(22624), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(324), aot_gpr[6]);
    goto L_08A22ACC;
L_08A22ACC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22AD4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(312)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (aot_gpr[6] << 2u);
      if (branch_taken) {
          goto L_08A22AF4;
      }
      goto L_08A22AE4;
    }
L_08A22AE4:
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(22688), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(312), aot_gpr[6]);
    goto L_08A22AF4;
L_08A22AF4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22AFC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(316)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (aot_gpr[6] << 2u);
      if (branch_taken) {
          goto L_08A22B1C;
      }
      goto L_08A22B0C;
    }
L_08A22B0C:
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(22944), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(316), aot_gpr[6]);
    goto L_08A22B1C;
L_08A22B1C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22B24:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(320)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (aot_gpr[6] << 2u);
      if (branch_taken) {
          goto L_08A22B44;
      }
      goto L_08A22B34;
    }
L_08A22B34:
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(23200), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(320), aot_gpr[6]);
    goto L_08A22B44;
L_08A22B44:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22B4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A22B90u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A22B90u) goto L_08A22B90;
    return;
L_08A22B90:
    aot_gpr[22] = (2215u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[19] + static_cast<std::uint32_t>(1120));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1352));
    goto L_08A22BA4;
L_08A22BA4:
    aot_gpr[21] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A22BB4u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22BB4u) goto L_08A22BB4;
    return;
L_08A22BB4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A22C98;
      }
      goto L_08A22BBC;
    }
L_08A22BBC:
    aot_gpr[31] = (0x08A22BC4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22BC4u) goto L_08A22BC4;
    return;
L_08A22BC4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A22C88;
      }
      goto L_08A22BCC;
    }
L_08A22BCC:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1188)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A22C98;
      }
      goto L_08A22BE0;
    }
L_08A22BE0:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1456));
    goto L_08A22BE4;
L_08A22BE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(864)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[16];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(324)));
      if (branch_taken) {
          goto L_08A22C60;
      }
      goto L_08A22BF0;
    }
L_08A22BF0:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A22C30;
      }
      goto L_08A22BF8;
    }
L_08A22BF8:
    aot_gpr[31] = (0x08A22C00u);
    aot_gpr[5] = (0u | 1u);
    goto L_08A22018;
L_08A22C00:
    aot_gpr[31] = (0x08A22C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 235u, 0x089FEE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22C08u) goto L_08A22C08;
    return;
L_08A22C08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A22C28u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A22C28u) goto L_08A22C28;
    return;
L_08A22C28:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A22C74;
      }
      goto L_08A22C30;
    }
L_08A22C30:
    aot_gpr[31] = (0x08A22C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 235u, 0x089FEE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22C38u) goto L_08A22C38;
    return;
L_08A22C38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 6u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A22C58u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A22C58u) goto L_08A22C58;
    return;
L_08A22C58:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A22C74;
      }
      goto L_08A22C60;
    }
L_08A22C60:
    if (aot_gpr[5] == 0u) {
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08A22C74;
    }
    goto L_08A22C68;
L_08A22C68:
    aot_gpr[31] = (0x08A22C70u);
    aot_gpr[5] = (0u | 0u);
    goto L_08A22018;
L_08A22C70:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A22C74;
L_08A22C74:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A22BE4;
      }
      goto L_08A22C80;
    }
L_08A22C80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22C98;
      }
      goto L_08A22C88;
    }
L_08A22C88:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(328));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(328));
      if (branch_taken) {
          goto L_08A22BA4;
      }
      goto L_08A22C98;
    }
L_08A22C98:
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
L_08A22CC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    goto L_08A22CCC;
L_08A22CCC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(21856)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[5];
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A22CF0;
      }
      goto L_08A22CD8;
    }
L_08A22CD8:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A22CCC;
      }
      goto L_08A22CE4;
    }
L_08A22CE4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22CF0:
    aot_gpr[31] = (0x08A22CF8u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_08A22518;
L_08A22CF8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22D04:
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(864));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(296)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22D18:
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(21856));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(300)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22D2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A22D3Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(25524));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 92u, 0x08A46578u>(ctx, &aot_mem) && ctx.pc == 0x08A22D3Cu) goto L_08A22D3C;
    return;
L_08A22D3C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22D48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A22D6Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1460));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A22D6Cu) goto L_08A22D6C;
    return;
L_08A22D6C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(332));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A22D7Cu);
    aot_gpr[6] = (0u | 513u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22D7Cu) goto L_08A22D7C;
    return;
L_08A22D7C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(864));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A22D8Cu);
    aot_gpr[6] = (0u | 20992u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22D8Cu) goto L_08A22D8C;
    return;
L_08A22D8C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(21856));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A22D9Cu);
    aot_gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22D9Cu) goto L_08A22D9C;
    return;
L_08A22D9C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(22112));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A22DACu);
    aot_gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22DACu) goto L_08A22DAC;
    return;
L_08A22DAC:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(22368));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A22DBCu);
    aot_gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22DBCu) goto L_08A22DBC;
    return;
L_08A22DBC:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(22688));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A22DCCu);
    aot_gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22DCCu) goto L_08A22DCC;
    return;
L_08A22DCC:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(22624));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A22DDCu);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22DDCu) goto L_08A22DDC;
    return;
L_08A22DDC:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(22944));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A22DECu);
    aot_gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22DECu) goto L_08A22DEC;
    return;
L_08A22DEC:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(23200));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A22DFCu);
    aot_gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22DFCu) goto L_08A22DFC;
    return;
L_08A22DFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(23456), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(23460), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(300), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(304), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(308), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(312), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(316), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(320), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(328), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A22E3Cu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 185u, 0x08A00C48u>(ctx, &aot_mem) && ctx.pc == 0x08A22E3Cu) goto L_08A22E3C;
    return;
L_08A22E3C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(848), aot_gpr[4]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(852), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(856), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(860), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(25520), 0u);
    aot_gpr[31] = (0x08A22E60u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A22E70;
L_08A22E60:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22E70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[19] + static_cast<std::uint32_t>(864));
    aot_gpr[17] = (aot_gpr[19] + static_cast<std::uint32_t>(1120));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1352));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    goto L_08A22EA4;
L_08A22EA4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A22EB4u);
    aot_gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22EB4u) goto L_08A22EB4;
    return;
L_08A22EB4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A22EC0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A22EC0u) goto L_08A22EC0;
    return;
L_08A22EC0:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(1188), 0u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(328));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(328));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(328));
      if (branch_taken) {
          goto L_08A22EA4;
      }
      goto L_08A22EDC;
    }
L_08A22EDC:
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
L_08A22EFC:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(852), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22F0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23460)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[21] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0543_entry, 543u, 66u, 0x08A232F0u>(ctx, &aot_mem); return;
      }
      goto L_08A22F44;
    }
L_08A22F44:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(23460), 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A22F58u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(1412));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A22F58u) goto L_08A22F58;
    return;
L_08A22F58:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A22F68u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A22F68u) goto L_08A22F68;
    return;
L_08A22F68:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(328), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1480));
    aot_gpr[30] = (2215u << 16u);
    aot_gpr[22] = (0u | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[23] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(1476));
    goto L_08A22FA4;
L_08A22FA4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) > 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A22FC0;
      }
      goto L_08A22FAC;
    }
L_08A22FAC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) < 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0543_entry, 543u, 8u, 0x08A23050u>(ctx, &aot_mem); return;
      }
      goto L_08A22FB4;
    }
L_08A22FB4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_08A22FDC;
      }
      goto L_08A22FBC;
    }
L_08A22FBC:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 2 ? 1u : 0u);
    goto L_08A22FC0;
L_08A22FC0:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A22FF8;
      }
      goto L_08A22FC8;
    }
L_08A22FC8:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0543_entry, 543u, 4u, 0x08A23028u>(ctx, &aot_mem); return;
      }
      goto L_08A22FD4;
    }
L_08A22FD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0543_entry, 543u, 8u, 0x08A23050u>(ctx, &aot_mem); return;
      }
      goto L_08A22FDC;
    }
L_08A22FDC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A22FE8u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x08A22FE8u) goto L_08A22FE8;
    return;
L_08A22FE8:
    if (aot_gpr[2] != 0u) {
    aot_gpr[16] = (0u | 1u);
        goto L_08A22FF0;
    }
    goto L_08A22FF0;
L_08A22FF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0543_entry, 543u, 8u, 0x08A23050u>(ctx, &aot_mem); return;
      }
      goto L_08A22FF8;
    }
L_08A22FF8:
    aot_gpr[31] = (0x08A23000u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0542(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0542_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_542(Runtime &runtime) {
    runtime.register_generated_unit(542u, 0x08A22000u, 4096u, &recomp_unit_0542, &recomp_unit_0542_entry);
    runtime.register_function(0x08A22000u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22018u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22024u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A2202Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22050u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22060u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22070u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22098u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A220B8u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A220C4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A220CCu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A220DCu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22108u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A2211Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22130u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22144u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22154u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22164u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22170u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A2217Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22190u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A221A4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A221B8u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A221CCu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A221D4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A221DCu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A221E4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A221F0u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A221F8u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22200u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A2220Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22218u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22220u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22234u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22248u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22254u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A2225Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22268u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22278u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A222A0u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A222BCu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A222D4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A222E0u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A222E8u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A222FCu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A2233Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22344u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22350u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22358u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22364u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22368u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22374u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A2237Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A2238Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22394u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A223A4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A223ACu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A223BCu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A223C4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A223C8u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A223D8u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A223F8u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22418u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22454u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A2245Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22460u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A2249Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A224E0u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22510u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22518u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22534u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22544u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A2254Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A2256Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22578u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22580u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A225A0u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A225A8u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A225ACu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A225C0u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A225E4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A225F4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22604u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22628u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22648u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22654u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A2265Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A2266Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22690u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A226A4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A226ACu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A226B8u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A226C0u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A226D0u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A226E0u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A226ECu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A226F8u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22708u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22718u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22724u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22730u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22738u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22744u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22748u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22754u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22764u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A2276Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22774u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22780u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22790u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A2279Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A227A8u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A227B0u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A227BCu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A227C8u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A227D0u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A227D8u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A227E4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22804u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22820u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22834u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A2283Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22844u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22850u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22854u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22860u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A2286Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22878u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22884u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22890u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22898u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A228ACu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A228B4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A228BCu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A228C4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22908u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22920u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A2292Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22934u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A2293Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22948u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22954u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A2295Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22994u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A2299Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A229A4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A229A8u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A229B8u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A229E0u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A229E8u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22A2Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22A3Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22A4Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22A54u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22A64u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22A74u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22A7Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22A8Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22A9Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22AA4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22AB4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22ACCu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22AD4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22AE4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22AF4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22AFCu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22B0Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22B1Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22B24u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22B34u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22B44u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22B4Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22B90u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22BA4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22BB4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22BBCu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22BC4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22BCCu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22BE0u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22BE4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22BF0u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22BF8u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22C00u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22C08u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22C28u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22C30u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22C38u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22C58u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22C60u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22C68u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22C70u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22C74u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22C80u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22C88u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22C98u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22CC0u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22CCCu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22CD8u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22CE4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22CF0u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22CF8u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22D04u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22D18u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22D2Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22D3Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22D48u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22D6Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22D7Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22D8Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22D9Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22DACu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22DBCu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22DCCu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22DDCu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22DECu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22DFCu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22E3Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22E60u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22E70u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22EA4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22EB4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22EC0u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22EDCu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22EFCu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22F0Cu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22F44u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22F58u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22F68u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22FA4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22FACu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22FB4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22FBCu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22FC0u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22FC8u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22FD4u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22FDCu, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22FE8u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22FF0u, &recomp_unit_0542, "recomp_unit_0542");
    runtime.register_function(0x08A22FF8u, &recomp_unit_0542, "recomp_unit_0542");
}
} // namespace psprecomp
