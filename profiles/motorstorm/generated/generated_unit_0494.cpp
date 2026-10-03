#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0494[1023] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0,
    6, 0, 0, 0, 7, 0, 8, 0, 9, 0, 10, 11, 0, 0, 12, 0, 0, 0, 13, 14, 0, 15, 0, 16, 0, 0, 17, 0, 18, 19, 0, 0,
    0, 20, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0,
    0, 0, 0, 30, 0, 0, 31, 0, 32, 0, 33, 0, 0, 34, 35, 0, 36, 0, 37, 0, 0, 38, 0, 39, 0, 40, 0, 0, 41, 0, 0, 42,
    0, 43, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49,
    0, 0, 50, 0, 51, 0, 52, 0, 0, 53, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 58, 0, 59, 0, 60, 0,
    0, 61, 0, 0, 0, 62, 0, 63, 64, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 70, 0, 71, 0, 72, 0, 0, 73, 0, 74, 0, 0, 75, 0, 76, 0, 0, 77, 0, 0, 78, 0, 79, 0, 0, 80,
    0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 85, 0, 86, 0, 87, 0, 88, 0, 0, 89, 0, 0, 90, 91, 0, 92, 0, 0, 0, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 98, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0,
    0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 0, 108, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 114, 0, 0, 115, 0,
    116, 117, 0, 118, 0, 119, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 0,
    134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 140,
    0, 0, 0, 141, 0, 142, 143, 0, 144, 0, 145, 146, 0, 147, 0, 148, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151,
    0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 156, 0, 0, 157, 0, 0, 0, 158, 0, 159, 0, 160, 0, 161, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0,
    0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 0, 171,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 177, 0, 0, 0, 178, 0, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 181, 0, 0, 182, 0, 183, 184, 0, 185, 0, 186, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 192,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0,
    0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0,
    0, 211, 0, 0, 0, 212, 0, 213, 214, 0, 215, 0, 216, 217, 0, 218, 0, 219, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0,
    0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 225, 0, 0, 226, 0, 227, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0,
    0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 233, 0, 0, 234, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 238, 0,
    0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 242, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245,
};
void recomp_unit_0494_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089F2000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0494[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089F2000;
    case 2u: goto L_089F2018;
    case 3u: goto L_089F2034;
    case 4u: goto L_089F2064;
    case 5u: goto L_089F2074;
    case 6u: goto L_089F2080;
    case 7u: goto L_089F2090;
    case 8u: goto L_089F2098;
    case 9u: goto L_089F20A0;
    case 10u: goto L_089F20A8;
    case 11u: goto L_089F20AC;
    case 12u: goto L_089F20B8;
    case 13u: goto L_089F20C8;
    case 14u: goto L_089F20CC;
    case 15u: goto L_089F20D4;
    case 16u: goto L_089F20DC;
    case 17u: goto L_089F20E8;
    case 18u: goto L_089F20F0;
    case 19u: goto L_089F20F4;
    case 20u: goto L_089F2104;
    case 21u: goto L_089F210C;
    case 22u: goto L_089F2118;
    case 23u: goto L_089F2144;
    case 24u: goto L_089F216C;
    case 25u: goto L_089F2190;
    case 26u: goto L_089F21A0;
    case 27u: goto L_089F21AC;
    case 28u: goto L_089F21CC;
    case 29u: goto L_089F21E8;
    case 30u: goto L_089F220C;
    case 31u: goto L_089F2218;
    case 32u: goto L_089F2220;
    case 33u: goto L_089F2228;
    case 34u: goto L_089F2234;
    case 35u: goto L_089F2238;
    case 36u: goto L_089F2240;
    case 37u: goto L_089F2248;
    case 38u: goto L_089F2254;
    case 39u: goto L_089F225C;
    case 40u: goto L_089F2264;
    case 41u: goto L_089F2270;
    case 42u: goto L_089F227C;
    case 43u: goto L_089F2284;
    case 44u: goto L_089F228C;
    case 45u: goto L_089F2298;
    case 46u: goto L_089F22A4;
    case 47u: goto L_089F22C0;
    case 48u: goto L_089F22DC;
    case 49u: goto L_089F22FC;
    case 50u: goto L_089F2308;
    case 51u: goto L_089F2310;
    case 52u: goto L_089F2318;
    case 53u: goto L_089F2324;
    case 54u: goto L_089F2330;
    case 55u: goto L_089F2338;
    case 56u: goto L_089F2354;
    case 57u: goto L_089F235C;
    case 58u: goto L_089F2368;
    case 59u: goto L_089F2370;
    case 60u: goto L_089F2378;
    case 61u: goto L_089F2384;
    case 62u: goto L_089F2394;
    case 63u: goto L_089F239C;
    case 64u: goto L_089F23A0;
    case 65u: goto L_089F23A8;
    case 66u: goto L_089F23B4;
    case 67u: goto L_089F23C0;
    case 68u: goto L_089F23DC;
    case 69u: goto L_089F2410;
    case 70u: goto L_089F2418;
    case 71u: goto L_089F2420;
    case 72u: goto L_089F2428;
    case 73u: goto L_089F2434;
    case 74u: goto L_089F243C;
    case 75u: goto L_089F2448;
    case 76u: goto L_089F2450;
    case 77u: goto L_089F245C;
    case 78u: goto L_089F2468;
    case 79u: goto L_089F2470;
    case 80u: goto L_089F247C;
    case 81u: goto L_089F2484;
    case 82u: goto L_089F248C;
    case 83u: goto L_089F2498;
    case 84u: goto L_089F24A8;
    case 85u: goto L_089F24B0;
    case 86u: goto L_089F24B8;
    case 87u: goto L_089F24C0;
    case 88u: goto L_089F24C8;
    case 89u: goto L_089F24D4;
    case 90u: goto L_089F24E0;
    case 91u: goto L_089F24E4;
    case 92u: goto L_089F24EC;
    case 93u: goto L_089F2510;
    case 94u: goto L_089F2534;
    case 95u: goto L_089F2544;
    case 96u: goto L_089F255C;
    case 97u: goto L_089F2568;
    case 98u: goto L_089F2578;
    case 99u: goto L_089F25A0;
    case 100u: goto L_089F25DC;
    case 101u: goto L_089F25EC;
    case 102u: goto L_089F2604;
    case 103u: goto L_089F2630;
    case 104u: goto L_089F263C;
    case 105u: goto L_089F264C;
    case 106u: goto L_089F2658;
    case 107u: goto L_089F2664;
    case 108u: goto L_089F2674;
    case 109u: goto L_089F269C;
    case 110u: goto L_089F26A8;
    case 111u: goto L_089F26B4;
    case 112u: goto L_089F26D0;
    case 113u: goto L_089F26E4;
    case 114u: goto L_089F26EC;
    case 115u: goto L_089F26F8;
    case 116u: goto L_089F2700;
    case 117u: goto L_089F2704;
    case 118u: goto L_089F270C;
    case 119u: goto L_089F2714;
    case 120u: goto L_089F2718;
    case 121u: goto L_089F2740;
    case 122u: goto L_089F2768;
    case 123u: goto L_089F27A0;
    case 124u: goto L_089F27A8;
    case 125u: goto L_089F27B0;
    case 126u: goto L_089F27E8;
    case 127u: goto L_089F27F8;
    case 128u: goto L_089F2810;
    case 129u: goto L_089F283C;
    case 130u: goto L_089F2848;
    case 131u: goto L_089F2858;
    case 132u: goto L_089F2864;
    case 133u: goto L_089F2870;
    case 134u: goto L_089F2880;
    case 135u: goto L_089F28A8;
    case 136u: goto L_089F28B4;
    case 137u: goto L_089F28C0;
    case 138u: goto L_089F28DC;
    case 139u: goto L_089F28F0;
    case 140u: goto L_089F28FC;
    case 141u: goto L_089F290C;
    case 142u: goto L_089F2914;
    case 143u: goto L_089F2918;
    case 144u: goto L_089F2920;
    case 145u: goto L_089F2928;
    case 146u: goto L_089F292C;
    case 147u: goto L_089F2934;
    case 148u: goto L_089F293C;
    case 149u: goto L_089F2940;
    case 150u: goto L_089F296C;
    case 151u: goto L_089F297C;
    case 152u: goto L_089F2984;
    case 153u: goto L_089F29A0;
    case 154u: goto L_089F29AC;
    case 155u: goto L_089F29BC;
    case 156u: goto L_089F29C4;
    case 157u: goto L_089F29D0;
    case 158u: goto L_089F29E0;
    case 159u: goto L_089F29E8;
    case 160u: goto L_089F29F0;
    case 161u: goto L_089F29F8;
    case 162u: goto L_089F2A24;
    case 163u: goto L_089F2A60;
    case 164u: goto L_089F2A74;
    case 165u: goto L_089F2A8C;
    case 166u: goto L_089F2AB8;
    case 167u: goto L_089F2AC4;
    case 168u: goto L_089F2AD4;
    case 169u: goto L_089F2AE0;
    case 170u: goto L_089F2AEC;
    case 171u: goto L_089F2AFC;
    case 172u: goto L_089F2B24;
    case 173u: goto L_089F2B30;
    case 174u: goto L_089F2B3C;
    case 175u: goto L_089F2B4C;
    case 176u: goto L_089F2B5C;
    case 177u: goto L_089F2B64;
    case 178u: goto L_089F2B74;
    case 179u: goto L_089F2B90;
    case 180u: goto L_089F2BA4;
    case 181u: goto L_089F2BAC;
    case 182u: goto L_089F2BB8;
    case 183u: goto L_089F2BC0;
    case 184u: goto L_089F2BC4;
    case 185u: goto L_089F2BCC;
    case 186u: goto L_089F2BD4;
    case 187u: goto L_089F2BD8;
    case 188u: goto L_089F2C04;
    case 189u: goto L_089F2C30;
    case 190u: goto L_089F2C6C;
    case 191u: goto L_089F2C74;
    case 192u: goto L_089F2C7C;
    case 193u: goto L_089F2CB4;
    case 194u: goto L_089F2CC8;
    case 195u: goto L_089F2CE0;
    case 196u: goto L_089F2D0C;
    case 197u: goto L_089F2D18;
    case 198u: goto L_089F2D28;
    case 199u: goto L_089F2D34;
    case 200u: goto L_089F2D40;
    case 201u: goto L_089F2D50;
    case 202u: goto L_089F2D78;
    case 203u: goto L_089F2D84;
    case 204u: goto L_089F2D90;
    case 205u: goto L_089F2DA0;
    case 206u: goto L_089F2DB0;
    case 207u: goto L_089F2DB8;
    case 208u: goto L_089F2DC8;
    case 209u: goto L_089F2DE4;
    case 210u: goto L_089F2DF8;
    case 211u: goto L_089F2E04;
    case 212u: goto L_089F2E14;
    case 213u: goto L_089F2E1C;
    case 214u: goto L_089F2E20;
    case 215u: goto L_089F2E28;
    case 216u: goto L_089F2E30;
    case 217u: goto L_089F2E34;
    case 218u: goto L_089F2E3C;
    case 219u: goto L_089F2E44;
    case 220u: goto L_089F2E48;
    case 221u: goto L_089F2E78;
    case 222u: goto L_089F2E8C;
    case 223u: goto L_089F2E9C;
    case 224u: goto L_089F2EAC;
    case 225u: goto L_089F2EB4;
    case 226u: goto L_089F2EC0;
    case 227u: goto L_089F2EC8;
    case 228u: goto L_089F2ED0;
    case 229u: goto L_089F2EE8;
    case 230u: goto L_089F2F04;
    case 231u: goto L_089F2F20;
    case 232u: goto L_089F2F28;
    case 233u: goto L_089F2F34;
    case 234u: goto L_089F2F40;
    case 235u: goto L_089F2F48;
    case 236u: goto L_089F2F5C;
    case 237u: goto L_089F2F70;
    case 238u: goto L_089F2F78;
    case 239u: goto L_089F2F94;
    case 240u: goto L_089F2FA4;
    case 241u: goto L_089F2FB8;
    case 242u: goto L_089F2FC0;
    case 243u: goto L_089F2FCC;
    case 244u: goto L_089F2FDC;
    case 245u: goto L_089F2FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089F2000:
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
L_089F2018:
    aot_gpr[2] = (0u | 0u);
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
L_089F2034:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x089F2064u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089F2064u) goto L_089F2064;
    return;
L_089F2064:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089F2074u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F2074u) goto L_089F2074;
    return;
L_089F2074:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2144;
      }
      goto L_089F2080;
    }
L_089F2080:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (0u | 45u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[17] = (0u | 46u);
      if (branch_taken) {
          goto L_089F20A8;
      }
      goto L_089F2090;
    }
L_089F2090:
    if (aot_gpr[4] == aot_gpr[17]) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
        goto L_089F20AC;
    }
    goto L_089F2098;
L_089F2098:
    aot_gpr[31] = (0x089F20A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 87u, 0x089F0508u>(ctx, &aot_mem) && ctx.pc == 0x089F20A0u) goto L_089F20A0;
    return;
L_089F20A0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2144;
      }
      goto L_089F20A8;
    }
L_089F20A8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
    goto L_089F20AC;
L_089F20AC:
    aot_gpr[20] = (0u | 0u);
    if (aot_gpr[4] == aot_gpr[17]) {
    aot_gpr[20] = (0u | 1u);
        goto L_089F20B8;
    }
    goto L_089F20B8;
L_089F20B8:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_089F2104;
      }
      goto L_089F20C8;
    }
L_089F20C8:
    aot_gpr[19] = (aot_gpr[18] + aot_gpr[21]);
    goto L_089F20CC;
L_089F20CC:
    aot_gpr[31] = (0x089F20D4u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(0))))));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 87u, 0x089F0508u>(ctx, &aot_mem) && ctx.pc == 0x089F20D4u) goto L_089F20D4;
    return;
L_089F20D4:
    if (aot_gpr[2] != 0u) {
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
        goto L_089F20F4;
    }
    goto L_089F20DC;
L_089F20DC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_089F2144;
      }
      goto L_089F20E8;
    }
L_089F20E8:
    { const bool branch_taken = aot_gpr[20] != 0u;
    aot_gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_089F2144;
      }
      goto L_089F20F0;
    }
L_089F20F0:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    goto L_089F20F4;
L_089F20F4:
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[21]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[18] + aot_gpr[21]);
      if (branch_taken) {
          goto L_089F20CC;
      }
      goto L_089F2104;
    }
L_089F2104:
    aot_gpr[31] = (0x089F210Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 97u, 0x08A394ECu>(ctx, &aot_mem) && ctx.pc == 0x089F210Cu) goto L_089F210C;
    return;
L_089F210C:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x089F2118u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 5u, 0x08A40050u>(ctx, &aot_mem) && ctx.pc == 0x089F2118u) goto L_089F2118;
    return;
L_089F2118:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[2] = (0u | 1u);
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
L_089F2144:
    aot_gpr[2] = (0u | 0u);
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
L_089F216C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089F2190u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089F2190u) goto L_089F2190;
    return;
L_089F2190:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089F21A0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F21A0u) goto L_089F21A0;
    return;
L_089F21A0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F21CC;
      }
      goto L_089F21AC;
    }
L_089F21AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (0u | 1u);
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
L_089F21CC:
    aot_gpr[2] = (0u | 0u);
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
L_089F21E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089F220Cu);
    aot_gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089F220Cu) goto L_089F220C;
    return;
L_089F220C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089F2218u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F2218u) goto L_089F2218;
    return;
L_089F2218:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2238;
      }
      goto L_089F2220;
    }
L_089F2220:
    aot_gpr[31] = (0x089F2228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089F2228u) goto L_089F2228;
    return;
L_089F2228:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089F2234u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F2234u) goto L_089F2234;
    return;
L_089F2234:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_089F2238;
L_089F2238:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F22A4;
      }
      goto L_089F2240;
    }
L_089F2240:
    aot_gpr[31] = (0x089F2248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089F2248u) goto L_089F2248;
    return;
L_089F2248:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089F2254u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F2254u) goto L_089F2254;
    return;
L_089F2254:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2284;
      }
      goto L_089F225C;
    }
L_089F225C:
    aot_gpr[31] = (0x089F2264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089F2264u) goto L_089F2264;
    return;
L_089F2264:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089F2270u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F2270u) goto L_089F2270;
    return;
L_089F2270:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F227Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F227Cu) goto L_089F227C;
    return;
L_089F227C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F22C0;
      }
      goto L_089F2284;
    }
L_089F2284:
    aot_gpr[31] = (0x089F228Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089F228Cu) goto L_089F228C;
    return;
L_089F228C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089F2298u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F2298u) goto L_089F2298;
    return;
L_089F2298:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F2240;
      }
      goto L_089F22A4;
    }
L_089F22A4:
    aot_gpr[2] = (0u | 0u);
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
L_089F22C0:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_089F22DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089F22FCu);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089F22FCu) goto L_089F22FC;
    return;
L_089F22FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089F2308u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F2308u) goto L_089F2308;
    return;
L_089F2308:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2338;
      }
      goto L_089F2310;
    }
L_089F2310:
    aot_gpr[31] = (0x089F2318u);
    aot_gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089F2318u) goto L_089F2318;
    return;
L_089F2318:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089F2324u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F2324u) goto L_089F2324;
    return;
L_089F2324:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F2354;
      }
      goto L_089F2330;
    }
L_089F2330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F23C0;
      }
      goto L_089F2338;
    }
L_089F2338:
    aot_gpr[2] = (0u | 0u);
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
L_089F2354:
    aot_gpr[31] = (0x089F235Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089F235Cu) goto L_089F235C;
    return;
L_089F235C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089F2368u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F2368u) goto L_089F2368;
    return;
L_089F2368:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F23A0;
      }
      goto L_089F2370;
    }
L_089F2370:
    aot_gpr[31] = (0x089F2378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089F2378u) goto L_089F2378;
    return;
L_089F2378:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089F2384u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F2384u) goto L_089F2384;
    return;
L_089F2384:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089F2394u);
    aot_gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089F2394u) goto L_089F2394;
    return;
L_089F2394:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F23A0;
      }
      goto L_089F239C;
    }
L_089F239C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089F23A0;
L_089F23A0:
    aot_gpr[31] = (0x089F23A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089F23A8u) goto L_089F23A8;
    return;
L_089F23A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089F23B4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F23B4u) goto L_089F23B4;
    return;
L_089F23B4:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F2354;
      }
      goto L_089F23C0;
    }
L_089F23C0:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_089F23DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_089F24EC;
      }
      goto L_089F2410;
    }
L_089F2410:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F24EC;
      }
      goto L_089F2418;
    }
L_089F2418:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089F24EC;
      }
      goto L_089F2420;
    }
L_089F2420:
    aot_gpr[31] = (0x089F2428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089F2428u) goto L_089F2428;
    return;
L_089F2428:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089F2434u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F2434u) goto L_089F2434;
    return;
L_089F2434:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[16] << 2u);
      if (branch_taken) {
          goto L_089F24EC;
      }
      goto L_089F243C;
    }
L_089F243C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F2448u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089F2448u) goto L_089F2448;
    return;
L_089F2448:
    aot_gpr[31] = (0x089F2450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089F2450u) goto L_089F2450;
    return;
L_089F2450:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089F245Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F245Cu) goto L_089F245C;
    return;
L_089F245C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[20]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089F24E4;
      }
      goto L_089F2468;
    }
L_089F2468:
    aot_gpr[31] = (0x089F2470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089F2470u) goto L_089F2470;
    return;
L_089F2470:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089F247Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F247Cu) goto L_089F247C;
    return;
L_089F247C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F24C0;
      }
      goto L_089F2484;
    }
L_089F2484:
    aot_gpr[31] = (0x089F248Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089F248Cu) goto L_089F248C;
    return;
L_089F248C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089F2498u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F2498u) goto L_089F2498;
    return;
L_089F2498:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089F24A8u);
    aot_gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089F24A8u) goto L_089F24A8;
    return;
L_089F24A8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089F24C0;
      }
      goto L_089F24B0;
    }
L_089F24B0:
    if (aot_gpr[4] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[19]);
        goto L_089F24B8;
    }
    goto L_089F24B8;
L_089F24B8:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    goto L_089F24C0;
L_089F24C0:
    aot_gpr[31] = (0x089F24C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089F24C8u) goto L_089F24C8;
    return;
L_089F24C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089F24D4u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F24D4u) goto L_089F24D4;
    return;
L_089F24D4:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F2468;
      }
      goto L_089F24E0;
    }
L_089F24E0:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[20]) ? 1u : 0u);
    goto L_089F24E4;
L_089F24E4:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F2510;
      }
      goto L_089F24EC;
    }
L_089F24EC:
    aot_gpr[2] = (aot_gpr[20] | 0u);
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
L_089F2510:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_089F2534:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2568;
      }
      goto L_089F2544;
    }
L_089F2544:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(128));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089F255Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F255Cu) goto L_089F255C;
    return;
L_089F255C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2568:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2578:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F2740;
      }
      goto L_089F25A0;
    }
L_089F25A0:
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(10904));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[19] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-18744));
    aot_gpr[20] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-10272));
    aot_gpr[17] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089F25DCu);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(26064));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F25DCu) goto L_089F25DC;
    return;
L_089F25DC:
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-10264));
      if (branch_taken) {
          goto L_089F2630;
      }
      goto L_089F25EC;
    }
L_089F25EC:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(3));
    aot_gpr[4] = (aot_gpr[4] >> 2u);
    aot_gpr[31] = (0x089F2604u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 32u, 0x089FA23Cu>(ctx, &aot_mem) && ctx.pc == 0x089F2604u) goto L_089F2604;
    return;
L_089F2604:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089F263C;
      }
      goto L_089F2630;
    }
L_089F2630:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    goto L_089F263C;
L_089F263C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x089F264Cu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F264Cu) goto L_089F264C;
    return;
L_089F264C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[31] = (0x089F2658u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F2658u) goto L_089F2658;
    return;
L_089F2658:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089F269C;
      }
      goto L_089F2664;
    }
L_089F2664:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3));
    aot_gpr[4] = (aot_gpr[4] >> 2u);
    aot_gpr[31] = (0x089F2674u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 32u, 0x089FA23Cu>(ctx, &aot_mem) && ctx.pc == 0x089F2674u) goto L_089F2674;
    return;
L_089F2674:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089F26A8;
      }
      goto L_089F269C;
    }
L_089F269C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    goto L_089F26A8;
L_089F26A8:
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x089F26B4u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F26B4u) goto L_089F26B4;
    return;
L_089F26B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(136));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089F26D0u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F26D0u) goto L_089F26D0;
    return;
L_089F26D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[19];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[18]);
      if (branch_taken) {
          goto L_089F26EC;
      }
      goto L_089F26E4;
    }
L_089F26E4:
    aot_gpr[31] = (0x089F26ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F26ECu) goto L_089F26EC;
    return;
L_089F26EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[4] == aot_gpr[19]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_089F2704;
    }
    goto L_089F26F8;
L_089F26F8:
    aot_gpr[31] = (0x089F2700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F2700u) goto L_089F2700;
    return;
L_089F2700:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_089F2704;
L_089F2704:
    if (aot_gpr[4] == aot_gpr[19]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
        goto L_089F2718;
    }
    goto L_089F270C;
L_089F270C:
    aot_gpr[31] = (0x089F2714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F2714u) goto L_089F2714;
    return;
L_089F2714:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    goto L_089F2718;
L_089F2718:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2740:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2768:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089F2940;
      }
      goto L_089F27A0;
    }
L_089F27A0:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2940;
      }
      goto L_089F27A8;
    }
L_089F27A8:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[20] = (2216u << 16u);
      if (branch_taken) {
          goto L_089F2940;
      }
      goto L_089F27B0;
    }
L_089F27B0:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(10904));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[21] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-18744));
    aot_gpr[22] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[21]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-10272));
    aot_gpr[19] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x089F27E8u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(26064));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F27E8u) goto L_089F27E8;
    return;
L_089F27E8:
    aot_gpr[23] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-10264));
      if (branch_taken) {
          goto L_089F283C;
      }
      goto L_089F27F8;
    }
L_089F27F8:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(3));
    aot_gpr[4] = (aot_gpr[4] >> 2u);
    aot_gpr[31] = (0x089F2810u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 32u, 0x089FA23Cu>(ctx, &aot_mem) && ctx.pc == 0x089F2810u) goto L_089F2810;
    return;
L_089F2810:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089F2848;
      }
      goto L_089F283C;
    }
L_089F283C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[21] + static_cast<std::uint32_t>(8));
    goto L_089F2848;
L_089F2848:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x089F2858u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F2858u) goto L_089F2858;
    return;
L_089F2858:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[31] = (0x089F2864u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F2864u) goto L_089F2864;
    return;
L_089F2864:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089F28A8;
      }
      goto L_089F2870;
    }
L_089F2870:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3));
    aot_gpr[4] = (aot_gpr[4] >> 2u);
    aot_gpr[31] = (0x089F2880u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 32u, 0x089FA23Cu>(ctx, &aot_mem) && ctx.pc == 0x089F2880u) goto L_089F2880;
    return;
L_089F2880:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[22]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089F28B4;
      }
      goto L_089F28A8;
    }
L_089F28A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(8));
    goto L_089F28B4;
L_089F28B4:
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x089F28C0u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F28C0u) goto L_089F28C0;
    return;
L_089F28C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(136));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089F28DCu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F28DCu) goto L_089F28DC;
    return;
L_089F28DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089F28FC;
      }
      goto L_089F28F0;
    }
L_089F28F0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F28FCu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089F28FCu) goto L_089F28FC;
    return;
L_089F28FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[20] == aot_gpr[21]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_089F2918;
    }
    goto L_089F290C;
L_089F290C:
    aot_gpr[31] = (0x089F2914u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F2914u) goto L_089F2914;
    return;
L_089F2914:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089F2918;
L_089F2918:
    if (aot_gpr[4] == aot_gpr[21]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_089F292C;
    }
    goto L_089F2920;
L_089F2920:
    aot_gpr[31] = (0x089F2928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F2928u) goto L_089F2928;
    return;
L_089F2928:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_089F292C;
L_089F292C:
    if (aot_gpr[4] == aot_gpr[21]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[19]);
        goto L_089F2940;
    }
    goto L_089F2934;
L_089F2934:
    aot_gpr[31] = (0x089F293Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F293Cu) goto L_089F293C;
    return;
L_089F293C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    goto L_089F2940;
L_089F2940:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F296C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F29A0;
      }
      goto L_089F297C;
    }
L_089F297C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F29A0;
      }
      goto L_089F2984;
    }
L_089F2984:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089F29A0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F29A0u) goto L_089F29A0;
    return;
L_089F29A0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F29AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F29D0;
      }
      goto L_089F29BC;
    }
L_089F29BC:
    aot_gpr[31] = (0x089F29C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 242u, 0x089F4F28u>(ctx, &aot_mem) && ctx.pc == 0x089F29C4u) goto L_089F29C4;
    return;
L_089F29C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F29D0:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F29E0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F29F0;
      }
      goto L_089F29E8;
    }
L_089F29E8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F29F0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F29F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F2C04;
      }
      goto L_089F2A24;
    }
L_089F2A24:
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(10904));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[19] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-18744));
    aot_gpr[20] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-10272));
    aot_gpr[17] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089F2A60u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(26064));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F2A60u) goto L_089F2A60;
    return;
L_089F2A60:
    aot_gpr[22] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-10264));
      if (branch_taken) {
          goto L_089F2AB8;
      }
      goto L_089F2A74;
    }
L_089F2A74:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(3));
    aot_gpr[4] = (aot_gpr[4] >> 2u);
    aot_gpr[31] = (0x089F2A8Cu);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 32u, 0x089FA23Cu>(ctx, &aot_mem) && ctx.pc == 0x089F2A8Cu) goto L_089F2A8C;
    return;
L_089F2A8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089F2AC4;
      }
      goto L_089F2AB8;
    }
L_089F2AB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    goto L_089F2AC4;
L_089F2AC4:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x089F2AD4u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F2AD4u) goto L_089F2AD4;
    return;
L_089F2AD4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[31] = (0x089F2AE0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F2AE0u) goto L_089F2AE0;
    return;
L_089F2AE0:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089F2B24;
      }
      goto L_089F2AEC;
    }
L_089F2AEC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3));
    aot_gpr[4] = (aot_gpr[4] >> 2u);
    aot_gpr[31] = (0x089F2AFCu);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 32u, 0x089FA23Cu>(ctx, &aot_mem) && ctx.pc == 0x089F2AFCu) goto L_089F2AFC;
    return;
L_089F2AFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089F2B30;
      }
      goto L_089F2B24;
    }
L_089F2B24:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    goto L_089F2B30;
L_089F2B30:
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x089F2B3Cu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F2B3Cu) goto L_089F2B3C;
    return;
L_089F2B3C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-10260));
    aot_gpr[31] = (0x089F2B4Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F2B4Cu) goto L_089F2B4C;
    return;
L_089F2B4C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089F2B5Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F2B5Cu) goto L_089F2B5C;
    return;
L_089F2B5C:
    aot_gpr[31] = (0x089F2B64u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F2B64u) goto L_089F2B64;
    return;
L_089F2B64:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089F2B74u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F2B74u) goto L_089F2B74;
    return;
L_089F2B74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(136));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089F2B90u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F2B90u) goto L_089F2B90;
    return;
L_089F2B90:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[19];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[18]);
      if (branch_taken) {
          goto L_089F2BAC;
      }
      goto L_089F2BA4;
    }
L_089F2BA4:
    aot_gpr[31] = (0x089F2BACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F2BACu) goto L_089F2BAC;
    return;
L_089F2BAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[4] == aot_gpr[19]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_089F2BC4;
    }
    goto L_089F2BB8;
L_089F2BB8:
    aot_gpr[31] = (0x089F2BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F2BC0u) goto L_089F2BC0;
    return;
L_089F2BC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_089F2BC4;
L_089F2BC4:
    if (aot_gpr[4] == aot_gpr[19]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
        goto L_089F2BD8;
    }
    goto L_089F2BCC;
L_089F2BCC:
    aot_gpr[31] = (0x089F2BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F2BD4u) goto L_089F2BD4;
    return;
L_089F2BD4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    goto L_089F2BD8;
L_089F2BD8:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2C04:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2C30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089F2E48;
      }
      goto L_089F2C6C;
    }
L_089F2C6C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2E48;
      }
      goto L_089F2C74;
    }
L_089F2C74:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[20] = (2216u << 16u);
      if (branch_taken) {
          goto L_089F2E48;
      }
      goto L_089F2C7C;
    }
L_089F2C7C:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(10904));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[21] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-18744));
    aot_gpr[22] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[21]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-10272));
    aot_gpr[19] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x089F2CB4u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(26064));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F2CB4u) goto L_089F2CB4;
    return;
L_089F2CB4:
    aot_gpr[30] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-10264));
      if (branch_taken) {
          goto L_089F2D0C;
      }
      goto L_089F2CC8;
    }
L_089F2CC8:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(3));
    aot_gpr[4] = (aot_gpr[4] >> 2u);
    aot_gpr[31] = (0x089F2CE0u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 32u, 0x089FA23Cu>(ctx, &aot_mem) && ctx.pc == 0x089F2CE0u) goto L_089F2CE0;
    return;
L_089F2CE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089F2D18;
      }
      goto L_089F2D0C;
    }
L_089F2D0C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[21] + static_cast<std::uint32_t>(8));
    goto L_089F2D18;
L_089F2D18:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x089F2D28u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F2D28u) goto L_089F2D28;
    return;
L_089F2D28:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[31] = (0x089F2D34u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F2D34u) goto L_089F2D34;
    return;
L_089F2D34:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089F2D78;
      }
      goto L_089F2D40;
    }
L_089F2D40:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3));
    aot_gpr[4] = (aot_gpr[4] >> 2u);
    aot_gpr[31] = (0x089F2D50u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 32u, 0x089FA23Cu>(ctx, &aot_mem) && ctx.pc == 0x089F2D50u) goto L_089F2D50;
    return;
L_089F2D50:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[22]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089F2D84;
      }
      goto L_089F2D78;
    }
L_089F2D78:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(8));
    goto L_089F2D84;
L_089F2D84:
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x089F2D90u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F2D90u) goto L_089F2D90;
    return;
L_089F2D90:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[22] = (aot_gpr[4] + static_cast<std::uint32_t>(-10260));
    aot_gpr[31] = (0x089F2DA0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F2DA0u) goto L_089F2DA0;
    return;
L_089F2DA0:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x089F2DB0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F2DB0u) goto L_089F2DB0;
    return;
L_089F2DB0:
    aot_gpr[31] = (0x089F2DB8u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F2DB8u) goto L_089F2DB8;
    return;
L_089F2DB8:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x089F2DC8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F2DC8u) goto L_089F2DC8;
    return;
L_089F2DC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(136));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089F2DE4u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F2DE4u) goto L_089F2DE4;
    return;
L_089F2DE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089F2E04;
      }
      goto L_089F2DF8;
    }
L_089F2DF8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F2E04u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089F2E04u) goto L_089F2E04;
    return;
L_089F2E04:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[20] == aot_gpr[21]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_089F2E20;
    }
    goto L_089F2E14;
L_089F2E14:
    aot_gpr[31] = (0x089F2E1Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F2E1Cu) goto L_089F2E1C;
    return;
L_089F2E1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089F2E20;
L_089F2E20:
    if (aot_gpr[4] == aot_gpr[21]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_089F2E34;
    }
    goto L_089F2E28;
L_089F2E28:
    aot_gpr[31] = (0x089F2E30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F2E30u) goto L_089F2E30;
    return;
L_089F2E30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_089F2E34;
L_089F2E34:
    if (aot_gpr[4] == aot_gpr[21]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[19]);
        goto L_089F2E48;
    }
    goto L_089F2E3C;
L_089F2E3C:
    aot_gpr[31] = (0x089F2E44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F2E44u) goto L_089F2E44;
    return;
L_089F2E44:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    goto L_089F2E48;
L_089F2E48:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2E78:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9968));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2E8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_089F2EB4;
      }
      goto L_089F2E9C;
    }
L_089F2E9C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9968));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
      if (branch_taken) {
          goto L_089F2EB4;
      }
      goto L_089F2EAC;
    }
L_089F2EAC:
    aot_gpr[31] = (0x089F2EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x089F2EB4u) goto L_089F2EB4;
    return;
L_089F2EB4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2EC0:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2EC8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2ED0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089F2EE8u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 108u, 0x089FA718u>(ctx, &aot_mem) && ctx.pc == 0x089F2EE8u) goto L_089F2EE8;
    return;
L_089F2EE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2F04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F2F48;
      }
      goto L_089F2F20;
    }
L_089F2F20:
    aot_gpr[31] = (0x089F2F28u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 4u, 0x089F3034u>(ctx, &aot_mem) && ctx.pc == 0x089F2F28u) goto L_089F2F28;
    return;
L_089F2F28:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089F2F34u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 113u, 0x089FA778u>(ctx, &aot_mem) && ctx.pc == 0x089F2F34u) goto L_089F2F34;
    return;
L_089F2F34:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2F48;
      }
      goto L_089F2F40;
    }
L_089F2F40:
    aot_gpr[31] = (0x089F2F48u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F2FA4;
L_089F2F48:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2F5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089F2F70u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F2F70u) goto L_089F2F70;
    return;
L_089F2F70:
    aot_gpr[31] = (0x089F2F78u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F2F78u) goto L_089F2F78;
    return;
L_089F2F78:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 45u);
    aot_gpr[31] = (0x089F2F94u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-10256));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x089F2F94u) goto L_089F2F94;
    return;
L_089F2F94:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2FA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089F2FB8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F2FB8u) goto L_089F2FB8;
    return;
L_089F2FB8:
    aot_gpr[31] = (0x089F2FC0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F2FC0u) goto L_089F2FC0;
    return;
L_089F2FC0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089F2FCCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089F2FCCu) goto L_089F2FCC;
    return;
L_089F2FCC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2FDC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 3u, 0x089F301Cu>(ctx, &aot_mem); return;
      }
      goto L_089F2FF8;
    }
L_089F2FF8:
    aot_gpr[31] = (0x089F3000u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 4u, 0x089F3034u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0494(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0494_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_494(Runtime &runtime) {
    runtime.register_generated_unit(494u, 0x089F2000u, 4096u, &recomp_unit_0494, &recomp_unit_0494_entry);
    runtime.register_function(0x089F2000u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2018u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2034u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2064u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2074u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2080u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2090u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2098u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F20A0u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F20A8u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F20ACu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F20B8u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F20C8u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F20CCu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F20D4u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F20DCu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F20E8u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F20F0u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F20F4u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2104u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F210Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2118u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2144u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F216Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2190u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F21A0u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F21ACu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F21CCu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F21E8u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F220Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2218u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2220u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2228u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2234u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2238u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2240u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2248u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2254u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F225Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2264u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2270u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F227Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2284u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F228Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2298u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F22A4u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F22C0u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F22DCu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F22FCu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2308u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2310u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2318u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2324u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2330u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2338u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2354u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F235Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2368u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2370u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2378u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2384u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2394u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F239Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F23A0u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F23A8u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F23B4u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F23C0u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F23DCu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2410u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2418u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2420u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2428u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2434u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F243Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2448u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2450u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F245Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2468u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2470u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F247Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2484u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F248Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2498u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F24A8u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F24B0u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F24B8u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F24C0u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F24C8u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F24D4u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F24E0u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F24E4u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F24ECu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2510u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2534u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2544u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F255Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2568u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2578u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F25A0u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F25DCu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F25ECu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2604u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2630u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F263Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F264Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2658u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2664u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2674u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F269Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F26A8u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F26B4u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F26D0u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F26E4u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F26ECu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F26F8u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2700u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2704u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F270Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2714u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2718u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2740u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2768u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F27A0u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F27A8u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F27B0u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F27E8u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F27F8u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2810u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F283Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2848u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2858u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2864u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2870u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2880u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F28A8u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F28B4u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F28C0u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F28DCu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F28F0u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F28FCu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F290Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2914u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2918u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2920u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2928u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F292Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2934u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F293Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2940u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F296Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F297Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2984u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F29A0u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F29ACu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F29BCu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F29C4u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F29D0u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F29E0u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F29E8u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F29F0u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F29F8u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2A24u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2A60u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2A74u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2A8Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2AB8u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2AC4u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2AD4u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2AE0u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2AECu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2AFCu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2B24u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2B30u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2B3Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2B4Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2B5Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2B64u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2B74u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2B90u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2BA4u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2BACu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2BB8u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2BC0u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2BC4u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2BCCu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2BD4u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2BD8u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2C04u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2C30u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2C6Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2C74u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2C7Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2CB4u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2CC8u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2CE0u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2D0Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2D18u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2D28u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2D34u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2D40u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2D50u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2D78u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2D84u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2D90u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2DA0u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2DB0u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2DB8u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2DC8u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2DE4u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2DF8u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2E04u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2E14u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2E1Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2E20u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2E28u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2E30u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2E34u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2E3Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2E44u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2E48u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2E78u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2E8Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2E9Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2EACu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2EB4u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2EC0u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2EC8u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2ED0u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2EE8u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2F04u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2F20u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2F28u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2F34u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2F40u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2F48u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2F5Cu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2F70u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2F78u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2F94u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2FA4u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2FB8u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2FC0u, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2FCCu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2FDCu, &recomp_unit_0494, "recomp_unit_0494");
    runtime.register_function(0x089F2FF8u, &recomp_unit_0494, "recomp_unit_0494");
}
} // namespace psprecomp
