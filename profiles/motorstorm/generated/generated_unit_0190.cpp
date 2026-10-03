#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0190[1022] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 7, 0,
    8, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 11, 0, 12, 0, 13, 0, 14, 0, 15, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18,
    0, 0, 0, 19, 0, 20, 0, 0, 21, 0, 22, 0, 23, 0, 24, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0,
    0, 35, 0, 36, 0, 0, 37, 0, 38, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 47, 0,
    0, 48, 0, 0, 0, 49, 0, 50, 0, 0, 51, 0, 0, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0,
    61, 0, 62, 0, 63, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 73, 0, 74, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0,
    78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0,
    82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0,
    88, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 93, 0, 94, 0, 95, 0, 0, 0, 96, 0, 0,
    0, 97, 0, 0, 98, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0,
    107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 0, 116,
    0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 119, 0, 0, 120, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 124, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 133, 0, 0, 134, 0, 0, 0, 135, 0, 0, 136, 0, 137, 0, 138, 0, 139, 0,
    0, 140, 0, 0, 141, 0, 142, 0, 0, 143, 0, 144, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 147, 0, 148, 0, 149, 0, 0, 0, 150, 0,
    0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 154, 0, 155, 0, 0, 0, 0, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 0, 161, 0,
    162, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 169, 0, 170, 0, 0, 0, 0,
    0, 171, 0, 0, 172, 0, 173, 0, 174, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0,
    0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 189, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 194, 0, 0, 195, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0,
    0, 0, 198, 0, 0, 199, 0, 200, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0,
    0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 208, 0, 209, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 213, 0, 0, 214,
    0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0,
    0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0,
    0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 237, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0,
    0, 240, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 246, 0,
    0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252,
};
void recomp_unit_0190_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088C2000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0190[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088C2000;
    case 2u: goto L_088C2018;
    case 3u: goto L_088C2020;
    case 4u: goto L_088C2040;
    case 5u: goto L_088C2058;
    case 6u: goto L_088C2060;
    case 7u: goto L_088C2078;
    case 8u: goto L_088C2080;
    case 9u: goto L_088C2094;
    case 10u: goto L_088C209C;
    case 11u: goto L_088C20AC;
    case 12u: goto L_088C20B4;
    case 13u: goto L_088C20BC;
    case 14u: goto L_088C20C4;
    case 15u: goto L_088C20CC;
    case 16u: goto L_088C20D4;
    case 17u: goto L_088C20E8;
    case 18u: goto L_088C20FC;
    case 19u: goto L_088C210C;
    case 20u: goto L_088C2114;
    case 21u: goto L_088C2120;
    case 22u: goto L_088C2128;
    case 23u: goto L_088C2130;
    case 24u: goto L_088C2138;
    case 25u: goto L_088C2140;
    case 26u: goto L_088C2150;
    case 27u: goto L_088C2170;
    case 28u: goto L_088C2180;
    case 29u: goto L_088C218C;
    case 30u: goto L_088C21AC;
    case 31u: goto L_088C21C8;
    case 32u: goto L_088C21D0;
    case 33u: goto L_088C21D8;
    case 34u: goto L_088C21F4;
    case 35u: goto L_088C2204;
    case 36u: goto L_088C220C;
    case 37u: goto L_088C2218;
    case 38u: goto L_088C2220;
    case 39u: goto L_088C2228;
    case 40u: goto L_088C2240;
    case 41u: goto L_088C224C;
    case 42u: goto L_088C2260;
    case 43u: goto L_088C22A4;
    case 44u: goto L_088C22C4;
    case 45u: goto L_088C22E8;
    case 46u: goto L_088C22F0;
    case 47u: goto L_088C22F8;
    case 48u: goto L_088C2304;
    case 49u: goto L_088C2314;
    case 50u: goto L_088C231C;
    case 51u: goto L_088C2328;
    case 52u: goto L_088C2338;
    case 53u: goto L_088C2340;
    case 54u: goto L_088C2348;
    case 55u: goto L_088C2350;
    case 56u: goto L_088C2358;
    case 57u: goto L_088C2360;
    case 58u: goto L_088C2368;
    case 59u: goto L_088C2370;
    case 60u: goto L_088C2378;
    case 61u: goto L_088C2380;
    case 62u: goto L_088C2388;
    case 63u: goto L_088C2390;
    case 64u: goto L_088C2398;
    case 65u: goto L_088C23A8;
    case 66u: goto L_088C23BC;
    case 67u: goto L_088C23CC;
    case 68u: goto L_088C23E4;
    case 69u: goto L_088C23F0;
    case 70u: goto L_088C2410;
    case 71u: goto L_088C2424;
    case 72u: goto L_088C2434;
    case 73u: goto L_088C243C;
    case 74u: goto L_088C2444;
    case 75u: goto L_088C244C;
    case 76u: goto L_088C245C;
    case 77u: goto L_088C2470;
    case 78u: goto L_088C2480;
    case 79u: goto L_088C248C;
    case 80u: goto L_088C24E8;
    case 81u: goto L_088C24F8;
    case 82u: goto L_088C2500;
    case 83u: goto L_088C2514;
    case 84u: goto L_088C2530;
    case 85u: goto L_088C2544;
    case 86u: goto L_088C2550;
    case 87u: goto L_088C2574;
    case 88u: goto L_088C2580;
    case 89u: goto L_088C2594;
    case 90u: goto L_088C25A0;
    case 91u: goto L_088C25B8;
    case 92u: goto L_088C25CC;
    case 93u: goto L_088C25D4;
    case 94u: goto L_088C25DC;
    case 95u: goto L_088C25E4;
    case 96u: goto L_088C25F4;
    case 97u: goto L_088C2604;
    case 98u: goto L_088C2610;
    case 99u: goto L_088C2618;
    case 100u: goto L_088C2628;
    case 101u: goto L_088C2638;
    case 102u: goto L_088C2644;
    case 103u: goto L_088C264C;
    case 104u: goto L_088C265C;
    case 105u: goto L_088C266C;
    case 106u: goto L_088C2678;
    case 107u: goto L_088C2680;
    case 108u: goto L_088C2690;
    case 109u: goto L_088C26A0;
    case 110u: goto L_088C26AC;
    case 111u: goto L_088C26B4;
    case 112u: goto L_088C26C4;
    case 113u: goto L_088C26D4;
    case 114u: goto L_088C26E0;
    case 115u: goto L_088C26EC;
    case 116u: goto L_088C26FC;
    case 117u: goto L_088C271C;
    case 118u: goto L_088C2730;
    case 119u: goto L_088C2738;
    case 120u: goto L_088C2744;
    case 121u: goto L_088C274C;
    case 122u: goto L_088C275C;
    case 123u: goto L_088C2780;
    case 124u: goto L_088C2794;
    case 125u: goto L_088C279C;
    case 126u: goto L_088C27A8;
    case 127u: goto L_088C27C8;
    case 128u: goto L_088C27DC;
    case 129u: goto L_088C27E8;
    case 130u: goto L_088C2814;
    case 131u: goto L_088C281C;
    case 132u: goto L_088C2830;
    case 133u: goto L_088C2838;
    case 134u: goto L_088C2844;
    case 135u: goto L_088C2854;
    case 136u: goto L_088C2860;
    case 137u: goto L_088C2868;
    case 138u: goto L_088C2870;
    case 139u: goto L_088C2878;
    case 140u: goto L_088C2884;
    case 141u: goto L_088C2890;
    case 142u: goto L_088C2898;
    case 143u: goto L_088C28A4;
    case 144u: goto L_088C28AC;
    case 145u: goto L_088C28B8;
    case 146u: goto L_088C28CC;
    case 147u: goto L_088C28D8;
    case 148u: goto L_088C28E0;
    case 149u: goto L_088C28E8;
    case 150u: goto L_088C28F8;
    case 151u: goto L_088C2908;
    case 152u: goto L_088C2918;
    case 153u: goto L_088C2924;
    case 154u: goto L_088C292C;
    case 155u: goto L_088C2934;
    case 156u: goto L_088C294C;
    case 157u: goto L_088C2954;
    case 158u: goto L_088C295C;
    case 159u: goto L_088C2964;
    case 160u: goto L_088C296C;
    case 161u: goto L_088C2978;
    case 162u: goto L_088C2980;
    case 163u: goto L_088C2990;
    case 164u: goto L_088C2998;
    case 165u: goto L_088C29B0;
    case 166u: goto L_088C29C0;
    case 167u: goto L_088C29D0;
    case 168u: goto L_088C29DC;
    case 169u: goto L_088C29E4;
    case 170u: goto L_088C29EC;
    case 171u: goto L_088C2A04;
    case 172u: goto L_088C2A10;
    case 173u: goto L_088C2A18;
    case 174u: goto L_088C2A20;
    case 175u: goto L_088C2A28;
    case 176u: goto L_088C2A38;
    case 177u: goto L_088C2A58;
    case 178u: goto L_088C2A78;
    case 179u: goto L_088C2A84;
    case 180u: goto L_088C2AA4;
    case 181u: goto L_088C2AB4;
    case 182u: goto L_088C2AD4;
    case 183u: goto L_088C2ADC;
    case 184u: goto L_088C2AE4;
    case 185u: goto L_088C2B1C;
    case 186u: goto L_088C2B40;
    case 187u: goto L_088C2B4C;
    case 188u: goto L_088C2B70;
    case 189u: goto L_088C2B84;
    case 190u: goto L_088C2B8C;
    case 191u: goto L_088C2B9C;
    case 192u: goto L_088C2BB8;
    case 193u: goto L_088C2BC0;
    case 194u: goto L_088C2BC8;
    case 195u: goto L_088C2BD4;
    case 196u: goto L_088C2BE4;
    case 197u: goto L_088C2BF0;
    case 198u: goto L_088C2C08;
    case 199u: goto L_088C2C14;
    case 200u: goto L_088C2C1C;
    case 201u: goto L_088C2C24;
    case 202u: goto L_088C2C38;
    case 203u: goto L_088C2C60;
    case 204u: goto L_088C2C74;
    case 205u: goto L_088C2C8C;
    case 206u: goto L_088C2C98;
    case 207u: goto L_088C2CB0;
    case 208u: goto L_088C2CB8;
    case 209u: goto L_088C2CC0;
    case 210u: goto L_088C2CC8;
    case 211u: goto L_088C2CD8;
    case 212u: goto L_088C2CE8;
    case 213u: goto L_088C2CF0;
    case 214u: goto L_088C2CFC;
    case 215u: goto L_088C2D20;
    case 216u: goto L_088C2D2C;
    case 217u: goto L_088C2D54;
    case 218u: goto L_088C2D64;
    case 219u: goto L_088C2D6C;
    case 220u: goto L_088C2D84;
    case 221u: goto L_088C2DA4;
    case 222u: goto L_088C2DAC;
    case 223u: goto L_088C2DB4;
    case 224u: goto L_088C2DC8;
    case 225u: goto L_088C2DDC;
    case 226u: goto L_088C2DEC;
    case 227u: goto L_088C2E14;
    case 228u: goto L_088C2E34;
    case 229u: goto L_088C2E40;
    case 230u: goto L_088C2E4C;
    case 231u: goto L_088C2E60;
    case 232u: goto L_088C2E68;
    case 233u: goto L_088C2E8C;
    case 234u: goto L_088C2E98;
    case 235u: goto L_088C2EBC;
    case 236u: goto L_088C2EC4;
    case 237u: goto L_088C2ED0;
    case 238u: goto L_088C2ED8;
    case 239u: goto L_088C2EE0;
    case 240u: goto L_088C2F04;
    case 241u: goto L_088C2F0C;
    case 242u: goto L_088C2F14;
    case 243u: goto L_088C2F38;
    case 244u: goto L_088C2F5C;
    case 245u: goto L_088C2F64;
    case 246u: goto L_088C2F78;
    case 247u: goto L_088C2F84;
    case 248u: goto L_088C2FA4;
    case 249u: goto L_088C2FC4;
    case 250u: goto L_088C2FCC;
    case 251u: goto L_088C2FD4;
    case 252u: goto L_088C2FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088C2000:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2018:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2020:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28416), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2040:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088C2058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 197u, 0x08810D44u>(ctx, &aot_mem) && ctx.pc == 0x088C2058u) goto L_088C2058;
    return;
L_088C2058:
    aot_gpr[31] = (0x088C2060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 110u, 0x0885A704u>(ctx, &aot_mem) && ctx.pc == 0x088C2060u) goto L_088C2060;
    return;
L_088C2060:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C20B4;
      }
      goto L_088C2078;
    }
L_088C2078:
    aot_gpr[31] = (0x088C2080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x088C2080u) goto L_088C2080;
    return;
L_088C2080:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088C2094u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31172));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x088C2094u) goto L_088C2094;
    return;
L_088C2094:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C20B4;
      }
      goto L_088C209C;
    }
L_088C209C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088C20ACu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 47u, 0x0884A458u>(ctx, &aot_mem) && ctx.pc == 0x088C20ACu) goto L_088C20AC;
    return;
L_088C20AC:
    aot_gpr[31] = (0x088C20B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 49u, 0x0884A484u>(ctx, &aot_mem) && ctx.pc == 0x088C20B4u) goto L_088C20B4;
    return;
L_088C20B4:
    aot_gpr[31] = (0x088C20BCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 15u, 0x088930B8u>(ctx, &aot_mem) && ctx.pc == 0x088C20BCu) goto L_088C20BC;
    return;
L_088C20BC:
    aot_gpr[31] = (0x088C20C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 67u, 0x0885A430u>(ctx, &aot_mem) && ctx.pc == 0x088C20C4u) goto L_088C20C4;
    return;
L_088C20C4:
    aot_gpr[31] = (0x088C20CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 28u, 0x088631FCu>(ctx, &aot_mem) && ctx.pc == 0x088C20CCu) goto L_088C20CC;
    return;
L_088C20CC:
    aot_gpr[31] = (0x088C20D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 137u, 0x08865B18u>(ctx, &aot_mem) && ctx.pc == 0x088C20D4u) goto L_088C20D4;
    return;
L_088C20D4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C20E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088C20FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 50u, 0x0885A324u>(ctx, &aot_mem) && ctx.pc == 0x088C20FCu) goto L_088C20FC;
    return;
L_088C20FC:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088C210Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 43u, 0x088932C8u>(ctx, &aot_mem) && ctx.pc == 0x088C210Cu) goto L_088C210C;
    return;
L_088C210C:
    aot_gpr[31] = (0x088C2114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 32u, 0x08931398u>(ctx, &aot_mem) && ctx.pc == 0x088C2114u) goto L_088C2114;
    return;
L_088C2114:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088C2120u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 55u, 0x088933C0u>(ctx, &aot_mem) && ctx.pc == 0x088C2120u) goto L_088C2120;
    return;
L_088C2120:
    aot_gpr[31] = (0x088C2128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 66u, 0x0885A428u>(ctx, &aot_mem) && ctx.pc == 0x088C2128u) goto L_088C2128;
    return;
L_088C2128:
    aot_gpr[31] = (0x088C2130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 222u, 0x0889BF60u>(ctx, &aot_mem) && ctx.pc == 0x088C2130u) goto L_088C2130;
    return;
L_088C2130:
    aot_gpr[31] = (0x088C2138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 222u, 0x08810F24u>(ctx, &aot_mem) && ctx.pc == 0x088C2138u) goto L_088C2138;
    return;
L_088C2138:
    aot_gpr[31] = (0x088C2140u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 231u, 0x08893EF8u>(ctx, &aot_mem) && ctx.pc == 0x088C2140u) goto L_088C2140;
    return;
L_088C2140:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2150:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C2180;
      }
      goto L_088C2170;
    }
L_088C2170:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[31] = (0x088C2180u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C2180u) goto L_088C2180;
    return;
L_088C2180:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C218C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    aot_gpr[18] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x088C21ACu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 80u, 0x088935FCu>(ctx, &aot_mem) && ctx.pc == 0x088C21ACu) goto L_088C21AC;
    return;
L_088C21AC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(25237)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x088C21C8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31184));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088C21C8u) goto L_088C21C8;
    return;
L_088C21C8:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C21F4;
      }
      goto L_088C21D0;
    }
L_088C21D0:
    aot_gpr[31] = (0x088C21D8u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 124u, 0x08943884u>(ctx, &aot_mem) && ctx.pc == 0x088C21D8u) goto L_088C21D8;
    return;
L_088C21D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 19u);
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[16] = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C220C;
      }
      goto L_088C21F4;
    }
L_088C21F4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088C2204u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31228));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088C2204u) goto L_088C2204;
    return;
L_088C2204:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    goto L_088C220C;
L_088C220C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088C2218u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 84u, 0x08893684u>(ctx, &aot_mem) && ctx.pc == 0x088C2218u) goto L_088C2218;
    return;
L_088C2218:
    aot_gpr[31] = (0x088C2220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 124u, 0x08865A2Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2220u) goto L_088C2220;
    return;
L_088C2220:
    aot_gpr[31] = (0x088C2228u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 125u, 0x08865A40u>(ctx, &aot_mem) && ctx.pc == 0x088C2228u) goto L_088C2228;
    return;
L_088C2228:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7908)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_088C224C;
      }
      goto L_088C2240;
    }
L_088C2240:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_088C224C;
L_088C224C:
    aot_gpr[4] = (15820u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[31] = (0x088C2260u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 36u, 0x0886325Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2260u) goto L_088C2260;
    return;
L_088C2260:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-7292), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-7291), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7296), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7300), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C22A4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28424), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C22C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-29124), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088C22E8u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 64u, 0x0893F6D8u>(ctx, &aot_mem) && ctx.pc == 0x088C22E8u) goto L_088C22E8;
    return;
L_088C22E8:
    aot_gpr[31] = (0x088C22F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 146u, 0x08931E90u>(ctx, &aot_mem) && ctx.pc == 0x088C22F0u) goto L_088C22F0;
    return;
L_088C22F0:
    aot_gpr[31] = (0x088C22F8u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 68u, 0x0893F730u>(ctx, &aot_mem) && ctx.pc == 0x088C22F8u) goto L_088C22F8;
    return;
L_088C22F8:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x088C2304u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 49u, 0x08931588u>(ctx, &aot_mem) && ctx.pc == 0x088C2304u) goto L_088C2304;
    return;
L_088C2304:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x088C2314u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 64u, 0x0893F6D8u>(ctx, &aot_mem) && ctx.pc == 0x088C2314u) goto L_088C2314;
    return;
L_088C2314:
    aot_gpr[31] = (0x088C231Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 68u, 0x0893F730u>(ctx, &aot_mem) && ctx.pc == 0x088C231Cu) goto L_088C231C;
    return;
L_088C231C:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x088C2328u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 49u, 0x08931588u>(ctx, &aot_mem) && ctx.pc == 0x088C2328u) goto L_088C2328;
    return;
L_088C2328:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088C2338u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x0885B13Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2338u) goto L_088C2338;
    return;
L_088C2338:
    aot_gpr[31] = (0x088C2340u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 86u, 0x088635B8u>(ctx, &aot_mem) && ctx.pc == 0x088C2340u) goto L_088C2340;
    return;
L_088C2340:
    aot_gpr[31] = (0x088C2348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 79u, 0x08849A74u>(ctx, &aot_mem) && ctx.pc == 0x088C2348u) goto L_088C2348;
    return;
L_088C2348:
    aot_gpr[31] = (0x088C2350u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 167u, 0x0882FFE4u>(ctx, &aot_mem) && ctx.pc == 0x088C2350u) goto L_088C2350;
    return;
L_088C2350:
    aot_gpr[31] = (0x088C2358u);
    aot_gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 167u, 0x0882FFE4u>(ctx, &aot_mem) && ctx.pc == 0x088C2358u) goto L_088C2358;
    return;
L_088C2358:
    aot_gpr[31] = (0x088C2360u);
    aot_gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 167u, 0x0882FFE4u>(ctx, &aot_mem) && ctx.pc == 0x088C2360u) goto L_088C2360;
    return;
L_088C2360:
    aot_gpr[31] = (0x088C2368u);
    aot_gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 167u, 0x0882FFE4u>(ctx, &aot_mem) && ctx.pc == 0x088C2368u) goto L_088C2368;
    return;
L_088C2368:
    aot_gpr[31] = (0x088C2370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 185u, 0x08848CBCu>(ctx, &aot_mem) && ctx.pc == 0x088C2370u) goto L_088C2370;
    return;
L_088C2370:
    aot_gpr[31] = (0x088C2378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 48u, 0x088238A0u>(ctx, &aot_mem) && ctx.pc == 0x088C2378u) goto L_088C2378;
    return;
L_088C2378:
    aot_gpr[31] = (0x088C2380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 65u, 0x0885B51Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2380u) goto L_088C2380;
    return;
L_088C2380:
    aot_gpr[31] = (0x088C2388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 21u, 0x08894124u>(ctx, &aot_mem) && ctx.pc == 0x088C2388u) goto L_088C2388;
    return;
L_088C2388:
    aot_gpr[31] = (0x088C2390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 105u, 0x0881B854u>(ctx, &aot_mem) && ctx.pc == 0x088C2390u) goto L_088C2390;
    return;
L_088C2390:
    aot_gpr[31] = (0x088C2398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 152u, 0x08872B74u>(ctx, &aot_mem) && ctx.pc == 0x088C2398u) goto L_088C2398;
    return;
L_088C2398:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7268), 0u);
    aot_gpr[31] = (0x088C23A8u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 33u, 0x08811228u>(ctx, &aot_mem) && ctx.pc == 0x088C23A8u) goto L_088C23A8;
    return;
L_088C23A8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088C23BCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31344));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 48u, 0x0891C310u>(ctx, &aot_mem) && ctx.pc == 0x088C23BCu) goto L_088C23BC;
    return;
L_088C23BC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C23CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C23E4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C23E4u) goto L_088C23E4;
    return;
L_088C23E4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C23F0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28440), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2410:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088C2424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 32u, 0x08931398u>(ctx, &aot_mem) && ctx.pc == 0x088C2424u) goto L_088C2424;
    return;
L_088C2424:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C243C;
      }
      goto L_088C2434;
    }
L_088C2434:
    aot_gpr[31] = (0x088C243Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 55u, 0x088933C0u>(ctx, &aot_mem) && ctx.pc == 0x088C243Cu) goto L_088C243C;
    return;
L_088C243C:
    aot_gpr[31] = (0x088C2444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 222u, 0x08810F24u>(ctx, &aot_mem) && ctx.pc == 0x088C2444u) goto L_088C2444;
    return;
L_088C2444:
    aot_gpr[31] = (0x088C244Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 231u, 0x08893EF8u>(ctx, &aot_mem) && ctx.pc == 0x088C244Cu) goto L_088C244C;
    return;
L_088C244C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C245C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(13)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2480;
      }
      goto L_088C2470;
    }
L_088C2470:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[31] = (0x088C2480u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C2480u) goto L_088C2480;
    return;
L_088C2480:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C248C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-7292), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-7291), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7296), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    aot_gpr[31] = (0x088C24E8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7300), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 109u, 0x0889B6D4u>(ctx, &aot_mem) && ctx.pc == 0x088C24E8u) goto L_088C24E8;
    return;
L_088C24E8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C27E8;
      }
      goto L_088C24F8;
    }
L_088C24F8:
    aot_gpr[31] = (0x088C2500u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 80u, 0x088935FCu>(ctx, &aot_mem) && ctx.pc == 0x088C2500u) goto L_088C2500;
    return;
L_088C2500:
    aot_gpr[20] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(31376));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088C2514u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088C2514u) goto L_088C2514;
    return;
L_088C2514:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26504)));
    aot_gpr[31] = (0x088C2530u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 79u, 0x0896F37Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2530u) goto L_088C2530;
    return;
L_088C2530:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088C2544u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(31388));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2544u) goto L_088C2544;
    return;
L_088C2544:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088C2550u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 209u, 0x0888CF00u>(ctx, &aot_mem) && ctx.pc == 0x088C2550u) goto L_088C2550;
    return;
L_088C2550:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(7978)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(7972)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088C2574u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(31396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2574u) goto L_088C2574;
    return;
L_088C2574:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088C2580u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2580u) goto L_088C2580;
    return;
L_088C2580:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088C2594u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(31412));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2594u) goto L_088C2594;
    return;
L_088C2594:
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x088C25A0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x088C25A0u) goto L_088C25A0;
    return;
L_088C25A0:
    aot_gpr[18] = (2214u << 16u);
    aot_gpr[17] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(31444));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(31460));
      if (branch_taken) {
          goto L_088C26E0;
      }
      goto L_088C25B8;
    }
L_088C25B8:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(31424));
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088C2618;
      }
      goto L_088C25CC;
    }
L_088C25CC:
    { const bool branch_taken = aot_gpr[19] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088C264C;
      }
      goto L_088C25D4;
    }
L_088C25D4:
    { const bool branch_taken = aot_gpr[19] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C2680;
      }
      goto L_088C25DC;
    }
L_088C25DC:
    { const bool branch_taken = aot_gpr[19] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_088C26B4;
      }
      goto L_088C25E4;
    }
L_088C25E4:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088C25F4u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088C25F4u) goto L_088C25F4;
    return;
L_088C25F4:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 116u);
    aot_gpr[31] = (0x088C2604u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088C2604u) goto L_088C2604;
    return;
L_088C2604:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088C2610u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 209u, 0x0888CF00u>(ctx, &aot_mem) && ctx.pc == 0x088C2610u) goto L_088C2610;
    return;
L_088C2610:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C26E0;
      }
      goto L_088C2618;
    }
L_088C2618:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088C2628u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2628u) goto L_088C2628;
    return;
L_088C2628:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 112u);
    aot_gpr[31] = (0x088C2638u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088C2638u) goto L_088C2638;
    return;
L_088C2638:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088C2644u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 209u, 0x0888CF00u>(ctx, &aot_mem) && ctx.pc == 0x088C2644u) goto L_088C2644;
    return;
L_088C2644:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C26E0;
      }
      goto L_088C264C;
    }
L_088C264C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088C265Cu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088C265Cu) goto L_088C265C;
    return;
L_088C265C:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 113u);
    aot_gpr[31] = (0x088C266Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088C266Cu) goto L_088C266C;
    return;
L_088C266C:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088C2678u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 209u, 0x0888CF00u>(ctx, &aot_mem) && ctx.pc == 0x088C2678u) goto L_088C2678;
    return;
L_088C2678:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C26E0;
      }
      goto L_088C2680;
    }
L_088C2680:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088C2690u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2690u) goto L_088C2690;
    return;
L_088C2690:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 114u);
    aot_gpr[31] = (0x088C26A0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088C26A0u) goto L_088C26A0;
    return;
L_088C26A0:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088C26ACu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 209u, 0x0888CF00u>(ctx, &aot_mem) && ctx.pc == 0x088C26ACu) goto L_088C26AC;
    return;
L_088C26AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C26E0;
      }
      goto L_088C26B4;
    }
L_088C26B4:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088C26C4u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088C26C4u) goto L_088C26C4;
    return;
L_088C26C4:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 115u);
    aot_gpr[31] = (0x088C26D4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088C26D4u) goto L_088C26D4;
    return;
L_088C26D4:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088C26E0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 209u, 0x0888CF00u>(ctx, &aot_mem) && ctx.pc == 0x088C26E0u) goto L_088C26E0;
    return;
L_088C26E0:
    aot_gpr[4] = (0u | 4u);
    { const bool branch_taken = aot_gpr[19] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C274C;
      }
      goto L_088C26EC;
    }
L_088C26EC:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088C26FCu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088C26FCu) goto L_088C26FC;
    return;
L_088C26FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088C271Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088C271Cu) goto L_088C271C;
    return;
L_088C271C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088C2730u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2730u) goto L_088C2730;
    return;
L_088C2730:
    aot_gpr[31] = (0x088C2738u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 51u, 0x0888C28Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2738u) goto L_088C2738;
    return;
L_088C2738:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088C2744u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x088C2744u) goto L_088C2744;
    return;
L_088C2744:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C27E8;
      }
      goto L_088C274C;
    }
L_088C274C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088C275Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088C275Cu) goto L_088C275C;
    return;
L_088C275C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088C2780u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2780u) goto L_088C2780;
    return;
L_088C2780:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088C2794u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2794u) goto L_088C2794;
    return;
L_088C2794:
    aot_gpr[31] = (0x088C279Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 51u, 0x0888C28Cu>(ctx, &aot_mem) && ctx.pc == 0x088C279Cu) goto L_088C279C;
    return;
L_088C279C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088C27A8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 254u, 0x0888BFBCu>(ctx, &aot_mem) && ctx.pc == 0x088C27A8u) goto L_088C27A8;
    return;
L_088C27A8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[19] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(26756));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x088C27C8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26516)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 58u, 0x088A57D0u>(ctx, &aot_mem) && ctx.pc == 0x088C27C8u) goto L_088C27C8;
    return;
L_088C27C8:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088C27DCu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088C27DCu) goto L_088C27DC;
    return;
L_088C27DC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088C27E8u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x088C27E8u) goto L_088C27E8;
    return;
L_088C27E8:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2814:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C281C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088C2830u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 197u, 0x08810D44u>(ctx, &aot_mem) && ctx.pc == 0x088C2830u) goto L_088C2830;
    return;
L_088C2830:
    aot_gpr[31] = (0x088C2838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 42u, 0x08828598u>(ctx, &aot_mem) && ctx.pc == 0x088C2838u) goto L_088C2838;
    return;
L_088C2838:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088C2844u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 15u, 0x088930B8u>(ctx, &aot_mem) && ctx.pc == 0x088C2844u) goto L_088C2844;
    return;
L_088C2844:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2A18;
      }
      goto L_088C2854;
    }
L_088C2854:
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088C2890;
      }
      goto L_088C2860;
    }
L_088C2860:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088C2934;
      }
      goto L_088C2868;
    }
L_088C2868:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C2964;
      }
      goto L_088C2870;
    }
L_088C2870:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_088C29EC;
      }
      goto L_088C2878;
    }
L_088C2878:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x088C2884u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 29u, 0x088A3200u>(ctx, &aot_mem) && ctx.pc == 0x088C2884u) goto L_088C2884;
    return;
L_088C2884:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088C2A18;
      }
      goto L_088C2890;
    }
L_088C2890:
    aot_gpr[31] = (0x088C2898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 178u, 0x0889FEB8u>(ctx, &aot_mem) && ctx.pc == 0x088C2898u) goto L_088C2898;
    return;
L_088C2898:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(1336));
    aot_gpr[31] = (0x088C28A4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 59u, 0x0889F48Cu>(ctx, &aot_mem) && ctx.pc == 0x088C28A4u) goto L_088C28A4;
    return;
L_088C28A4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C28D8;
      }
      goto L_088C28AC;
    }
L_088C28AC:
    aot_gpr[4] = (0u | 293u);
    aot_gpr[31] = (0x088C28B8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088C28B8u) goto L_088C28B8;
    return;
L_088C28B8:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088C28CCu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x088C28CCu) goto L_088C28CC;
    return;
L_088C28CC:
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088C292C;
      }
      goto L_088C28D8;
    }
L_088C28D8:
    aot_gpr[31] = (0x088C28E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 58u, 0x0889F47Cu>(ctx, &aot_mem) && ctx.pc == 0x088C28E0u) goto L_088C28E0;
    return;
L_088C28E0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C292C;
      }
      goto L_088C28E8;
    }
L_088C28E8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-3216)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088C2924;
      }
      goto L_088C28F8;
    }
L_088C28F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7917)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2924;
      }
      goto L_088C2908;
    }
L_088C2908:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    aot_gpr[31] = (0x088C2918u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 148u, 0x08888EB4u>(ctx, &aot_mem) && ctx.pc == 0x088C2918u) goto L_088C2918;
    return;
L_088C2918:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088C292C;
      }
      goto L_088C2924;
    }
L_088C2924:
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088C292C;
L_088C292C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2A18;
      }
      goto L_088C2934;
    }
L_088C2934:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 14 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C295C;
      }
      goto L_088C294C;
    }
L_088C294C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C295C;
      }
      goto L_088C2954;
    }
L_088C2954:
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088C295C;
L_088C295C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2A18;
      }
      goto L_088C2964;
    }
L_088C2964:
    aot_gpr[31] = (0x088C296Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x088C296Cu) goto L_088C296C;
    return;
L_088C296C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_088C2990;
    }
    goto L_088C2978;
L_088C2978:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C29E4;
      }
      goto L_088C2980;
    }
L_088C2980:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088C29E4;
      }
      goto L_088C2990;
    }
L_088C2990:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C29E4;
      }
      goto L_088C2998;
    }
L_088C2998:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-3216)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088C29DC;
      }
      goto L_088C29B0;
    }
L_088C29B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7917)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C29DC;
      }
      goto L_088C29C0;
    }
L_088C29C0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    aot_gpr[31] = (0x088C29D0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 148u, 0x08888EB4u>(ctx, &aot_mem) && ctx.pc == 0x088C29D0u) goto L_088C29D0;
    return;
L_088C29D0:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088C29E4;
      }
      goto L_088C29DC;
    }
L_088C29DC:
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088C29E4;
L_088C29E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2A18;
      }
      goto L_088C29EC;
    }
L_088C29EC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6976));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4))))));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088C2A10;
      }
      goto L_088C2A04;
    }
L_088C2A04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26500)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2A18;
      }
      goto L_088C2A10;
    }
L_088C2A10:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088C2A18;
L_088C2A18:
    aot_gpr[31] = (0x088C2A20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 28u, 0x088631FCu>(ctx, &aot_mem) && ctx.pc == 0x088C2A20u) goto L_088C2A20;
    return;
L_088C2A20:
    aot_gpr[31] = (0x088C2A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 137u, 0x08865B18u>(ctx, &aot_mem) && ctx.pc == 0x088C2A28u) goto L_088C2A28;
    return;
L_088C2A28:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2A38:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28448), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2A58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(5292), 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C2A78u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C2A78u) goto L_088C2A78;
    return;
L_088C2A78:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2A84:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28456), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2AA4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27428)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2214u << 16u);
      if (branch_taken) {
          goto L_088C2ADC;
      }
      goto L_088C2AB4;
    }
L_088C2AB4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(31480)));
    aot_gpr[5] = (2214u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(31484)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C2ADC;
      }
      goto L_088C2AD4;
    }
L_088C2AD4:
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    goto L_088C2ADC;
L_088C2ADC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2AE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[5] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2C38;
      }
      goto L_088C2B1C;
    }
L_088C2B1C:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(6408));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (14979u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] | 4719u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[7]);
      if (branch_taken) {
          goto L_088C2B4C;
      }
      goto L_088C2B40;
    }
L_088C2B40:
    aot_gpr[6] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_088C2B4C;
L_088C2B4C:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (2214u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(31492)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C2C1C;
      }
      goto L_088C2B70;
    }
L_088C2B70:
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C2B9C;
      }
      goto L_088C2B84;
    }
L_088C2B84:
    aot_gpr[31] = (0x088C2B8Cu);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 70u, 0x0881764Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2B8Cu) goto L_088C2B8C;
    return;
L_088C2B8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(3) ? 1u : 0u);
      if (branch_taken) {
          goto L_088C2C1C;
      }
      goto L_088C2B9C;
    }
L_088C2B9C:
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-6936)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x088C2BB8u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 85u, 0x08826778u>(ctx, &aot_mem) && ctx.pc == 0x088C2BB8u) goto L_088C2BB8;
    return;
L_088C2BB8:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (2218u << 16u);
    goto L_088C2BC0;
L_088C2BC0:
    aot_gpr[31] = (0x088C2BC8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7320)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 29u, 0x0892733Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2BC8u) goto L_088C2BC8;
    return;
L_088C2BC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-6936)));
    aot_gpr[31] = (0x088C2BD4u);
    aot_gpr[21] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 101u, 0x08826900u>(ctx, &aot_mem) && ctx.pc == 0x088C2BD4u) goto L_088C2BD4;
    return;
L_088C2BD4:
    { const std::uint32_t dividend = aot_gpr[21]; const std::uint32_t divisor = aot_gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.hi);
    { const bool branch_taken = aot_gpr[20] == aot_gpr[4];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
      if (branch_taken) {
          goto L_088C2BC0;
      }
      goto L_088C2BE4;
    }
L_088C2BE4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088C2BF0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-6936)));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 107u, 0x08826978u>(ctx, &aot_mem) && ctx.pc == 0x088C2BF0u) goto L_088C2BF0;
    return;
L_088C2BF0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(3) ? 1u : 0u);
      if (branch_taken) {
          goto L_088C2C14;
      }
      goto L_088C2C08;
    }
L_088C2C08:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_088C2C14;
L_088C2C14:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088C2C1C;
L_088C2C1C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2C38;
      }
      goto L_088C2C24;
    }
L_088C2C24:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6936)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[31] = (0x088C2C38u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7652)));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 92u, 0x08826864u>(ctx, &aot_mem) && ctx.pc == 0x088C2C38u) goto L_088C2C38;
    return;
L_088C2C38:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
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
L_088C2C60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088C2C74u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 197u, 0x08810D44u>(ctx, &aot_mem) && ctx.pc == 0x088C2C74u) goto L_088C2C74;
    return;
L_088C2C74:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6408));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_088C2C98;
      }
      goto L_088C2C8C;
    }
L_088C2C8C:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_088C2C98;
L_088C2C98:
    aot_gpr[4] = (14979u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 4719u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088C2CB0u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    goto L_088C2AA4;
L_088C2CB0:
    aot_gpr[31] = (0x088C2CB8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088C2AE4;
L_088C2CB8:
    aot_gpr[31] = (0x088C2CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 110u, 0x088798BCu>(ctx, &aot_mem) && ctx.pc == 0x088C2CC0u) goto L_088C2CC0;
    return;
L_088C2CC0:
    aot_gpr[31] = (0x088C2CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 9u, 0x0886E088u>(ctx, &aot_mem) && ctx.pc == 0x088C2CC8u) goto L_088C2CC8;
    return;
L_088C2CC8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2CD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C2CE8u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 163u, 0x0886DB64u>(ctx, &aot_mem) && ctx.pc == 0x088C2CE8u) goto L_088C2CE8;
    return;
L_088C2CE8:
    aot_gpr[31] = (0x088C2CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 222u, 0x08810F24u>(ctx, &aot_mem) && ctx.pc == 0x088C2CF0u) goto L_088C2CF0;
    return;
L_088C2CF0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2CFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6408));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_088C2D2C;
      }
      goto L_088C2D20;
    }
L_088C2D20:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_088C2D2C;
L_088C2D2C:
    aot_gpr[4] = (14979u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 4719u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2214u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(31480)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C2D6C;
      }
      goto L_088C2D54;
    }
L_088C2D54:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[31] = (0x088C2D64u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C2D64u) goto L_088C2D64;
    return;
L_088C2D64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2DDC;
      }
      goto L_088C2D6C;
    }
L_088C2D6C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6976));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(22))))));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2DDC;
      }
      goto L_088C2D84;
    }
L_088C2D84:
    aot_gpr[4] = (0u | 12u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24848), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    aot_gpr[16] = (2215u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(24760));
      if (branch_taken) {
          goto L_088C2DB4;
      }
      goto L_088C2DA4;
    }
L_088C2DA4:
    aot_gpr[31] = (0x088C2DACu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C2DACu) goto L_088C2DAC;
    return;
L_088C2DAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2DDC;
      }
      goto L_088C2DB4;
    }
L_088C2DB4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088C2DC8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31496));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088C2DC8u) goto L_088C2DC8;
    return;
L_088C2DC8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(5252), aot_gpr[2]);
    aot_gpr[31] = (0x088C2DDCu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C2DDCu) goto L_088C2DDC;
    return;
L_088C2DDC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2DEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088C2EC4;
      }
      goto L_088C2E14;
    }
L_088C2E14:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-6936)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x088C2E34u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 85u, 0x08826778u>(ctx, &aot_mem) && ctx.pc == 0x088C2E34u) goto L_088C2E34;
    return;
L_088C2E34:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088C2E40u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7320)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 29u, 0x0892733Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2E40u) goto L_088C2E40;
    return;
L_088C2E40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-6936)));
    aot_gpr[31] = (0x088C2E4Cu);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 101u, 0x08826900u>(ctx, &aot_mem) && ctx.pc == 0x088C2E4Cu) goto L_088C2E4C;
    return;
L_088C2E4C:
    { const std::uint32_t dividend = aot_gpr[19]; const std::uint32_t divisor = aot_gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[5] = (ctx.hi);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[31] = (0x088C2E60u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-6936)));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 107u, 0x08826978u>(ctx, &aot_mem) && ctx.pc == 0x088C2E60u) goto L_088C2E60;
    return;
L_088C2E60:
    aot_gpr[31] = (0x088C2E68u);
    aot_gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 70u, 0x0881764Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2E68u) goto L_088C2E68;
    return;
L_088C2E68:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6408));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_088C2E98;
      }
      goto L_088C2E8C;
    }
L_088C2E8C:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_088C2E98;
L_088C2E98:
    aot_gpr[4] = (14979u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 4719u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 1u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088C2EBCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 89u, 0x088DC6DCu>(ctx, &aot_mem) && ctx.pc == 0x088C2EBCu) goto L_088C2EBC;
    return;
L_088C2EBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2F0C;
      }
      goto L_088C2EC4;
    }
L_088C2EC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088C2EE0;
      }
      goto L_088C2ED0;
    }
L_088C2ED0:
    aot_gpr[31] = (0x088C2ED8u);
    aot_gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 70u, 0x0881764Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2ED8u) goto L_088C2ED8;
    return;
L_088C2ED8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2F0C;
      }
      goto L_088C2EE0;
    }
L_088C2EE0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6928));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-6828)));
    aot_gpr[4] = (aot_gpr[5] ^ aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C2F0C;
      }
      goto L_088C2F04;
    }
L_088C2F04:
    aot_gpr[31] = (0x088C2F0Cu);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 70u, 0x0881764Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2F0Cu) goto L_088C2F0C;
    return;
L_088C2F0C:
    aot_gpr[31] = (0x088C2F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 71u, 0x088624CCu>(ctx, &aot_mem) && ctx.pc == 0x088C2F14u) goto L_088C2F14;
    return;
L_088C2F14:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-7483), static_cast<std::uint8_t>(aot_gpr[17]));
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
L_088C2F38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6928));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-6828)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C2F64;
      }
      goto L_088C2F5C;
    }
L_088C2F5C:
    aot_gpr[31] = (0x088C2F64u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 70u, 0x0881764Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2F64u) goto L_088C2F64;
    return;
L_088C2F64:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-7483), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2F78:
    aot_gpr[5] = (0u | 1u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2F84:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28464), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2FA4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28472), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2FC4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2FCC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2FD4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28792)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088C2FF4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 55u, 0x08945B58u>(ctx, &aot_mem) && ctx.pc == 0x088C2FF4u) goto L_088C2FF4;
    return;
L_088C2FF4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    aot_gpr[16] = (2215u << 16u);
    ctx.pc = 0x088C3000u; return;
}

void recomp_unit_0190(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0190_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_190(Runtime &runtime) {
    runtime.register_generated_unit(190u, 0x088C2000u, 4096u, &recomp_unit_0190, &recomp_unit_0190_entry);
    runtime.register_function(0x088C2000u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2018u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2020u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2040u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2058u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2060u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2078u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2080u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2094u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C209Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C20ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C20B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C20BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C20C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C20CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C20D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C20E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C20FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C210Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2114u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2120u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2128u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2130u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2138u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2140u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2150u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2170u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2180u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C218Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C21ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C21C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C21D0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C21D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C21F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2204u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C220Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2218u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2220u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2228u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2240u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C224Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2260u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C22A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C22C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C22E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C22F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C22F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2304u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2314u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C231Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2328u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2338u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2340u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2348u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2350u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2358u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2360u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2368u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2370u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2378u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2380u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2388u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2390u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2398u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C23A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C23BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C23CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C23E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C23F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2410u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2424u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2434u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C243Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2444u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C244Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C245Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2470u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2480u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C248Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C24E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C24F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2500u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2514u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2530u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2544u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2550u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2574u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2580u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2594u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C25A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C25B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C25CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C25D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C25DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C25E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C25F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2604u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2610u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2618u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2628u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2638u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2644u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C264Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C265Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C266Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2678u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2680u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2690u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C26A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C26ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C26B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C26C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C26D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C26E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C26ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C26FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C271Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2730u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2738u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2744u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C274Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C275Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2780u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2794u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C279Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C27A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C27C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C27DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C27E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2814u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C281Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2830u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2838u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2844u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2854u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2860u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2868u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2870u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2878u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2884u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2890u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2898u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C28A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C28ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C28B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C28CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C28D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C28E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C28E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C28F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2908u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2918u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2924u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C292Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2934u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C294Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2954u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C295Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2964u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C296Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2978u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2980u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2990u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2998u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C29B0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C29C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C29D0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C29DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C29E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C29ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2A04u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2A10u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2A18u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2A20u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2A28u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2A38u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2A58u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2A78u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2A84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2AA4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2AB4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2AD4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2ADCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2AE4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2B1Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2B40u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2B4Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2B70u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2B84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2B8Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2B9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2BB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2BC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2BC8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2BD4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2BE4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2BF0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2C08u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2C14u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2C1Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2C24u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2C38u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2C60u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2C74u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2C8Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2C98u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2CB0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2CB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2CC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2CC8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2CD8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2CE8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2CF0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2CFCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2D20u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2D2Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2D54u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2D64u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2D6Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2D84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2DA4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2DACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2DB4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2DC8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2DDCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2DECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2E14u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2E34u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2E40u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2E4Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2E60u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2E68u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2E8Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2E98u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2EBCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2EC4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2ED0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2ED8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2EE0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2F04u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2F0Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2F14u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2F38u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2F5Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2F64u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2F78u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2F84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2FA4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2FC4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2FCCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2FD4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x088C2FF4u, &recomp_unit_0190, "recomp_unit_0190");
}
} // namespace psprecomp
