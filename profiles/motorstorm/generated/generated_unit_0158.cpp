#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0158[1024] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 6, 0, 0, 0, 7, 0, 8, 0, 9,
    0, 0, 10, 0, 0, 0, 0, 11, 0, 12, 0, 13, 0, 14, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 21, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 29, 0, 0, 30, 0,
    0, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 40, 0,
    41, 0, 42, 0, 43, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0,
    0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 54, 0, 0, 0, 55, 0, 0, 0, 56, 0, 57,
    0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0,
    0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 70,
    0, 0, 0, 71, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0,
    78, 0, 0, 79, 0, 80, 0, 81, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    84, 0, 85, 0, 0, 86, 0, 87, 0, 0, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 96, 0, 0, 97, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 102, 0, 103, 0, 104, 0, 105,
    0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0,
    0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 119, 120, 0, 121, 0, 0, 122, 0,
    0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0,
    128, 0, 0, 0, 129, 0, 130, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 136, 0, 137, 0, 138, 0, 139, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0,
    0, 145, 0, 146, 0, 0, 147, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0,
    0, 0, 153, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 159, 0, 0, 0, 160,
    0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 171, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0,
    176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 179, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0,
    0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 187, 0, 188, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 199,
    0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 206, 0, 0, 207,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 212, 0, 0, 0, 213, 0, 214, 0, 0,
    0, 0, 0, 0, 215, 0, 0, 216, 0, 217, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 223, 0,
    0, 0, 224, 0, 225, 0, 0, 0, 0, 226, 0, 227, 0, 0, 228, 0, 0, 0, 229, 0, 230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 0, 0,
    235, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 241, 0, 242,
};
void recomp_unit_0158_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088A2000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0158[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088A2000;
    case 2u: goto L_088A2014;
    case 3u: goto L_088A2044;
    case 4u: goto L_088A204C;
    case 5u: goto L_088A2054;
    case 6u: goto L_088A205C;
    case 7u: goto L_088A206C;
    case 8u: goto L_088A2074;
    case 9u: goto L_088A207C;
    case 10u: goto L_088A2088;
    case 11u: goto L_088A209C;
    case 12u: goto L_088A20A4;
    case 13u: goto L_088A20AC;
    case 14u: goto L_088A20B4;
    case 15u: goto L_088A20BC;
    case 16u: goto L_088A20CC;
    case 17u: goto L_088A2104;
    case 18u: goto L_088A2114;
    case 19u: goto L_088A2134;
    case 20u: goto L_088A2140;
    case 21u: goto L_088A2148;
    case 22u: goto L_088A2150;
    case 23u: goto L_088A2158;
    case 24u: goto L_088A2188;
    case 25u: goto L_088A21A8;
    case 26u: goto L_088A21C0;
    case 27u: goto L_088A21DC;
    case 28u: goto L_088A21E4;
    case 29u: goto L_088A21EC;
    case 30u: goto L_088A21F8;
    case 31u: goto L_088A2208;
    case 32u: goto L_088A2210;
    case 33u: goto L_088A2218;
    case 34u: goto L_088A2220;
    case 35u: goto L_088A2228;
    case 36u: goto L_088A223C;
    case 37u: goto L_088A224C;
    case 38u: goto L_088A2264;
    case 39u: goto L_088A226C;
    case 40u: goto L_088A2278;
    case 41u: goto L_088A2280;
    case 42u: goto L_088A2288;
    case 43u: goto L_088A2290;
    case 44u: goto L_088A2294;
    case 45u: goto L_088A22A4;
    case 46u: goto L_088A22CC;
    case 47u: goto L_088A22E8;
    case 48u: goto L_088A22F4;
    case 49u: goto L_088A2318;
    case 50u: goto L_088A2324;
    case 51u: goto L_088A232C;
    case 52u: goto L_088A233C;
    case 53u: goto L_088A234C;
    case 54u: goto L_088A2354;
    case 55u: goto L_088A2364;
    case 56u: goto L_088A2374;
    case 57u: goto L_088A237C;
    case 58u: goto L_088A2390;
    case 59u: goto L_088A239C;
    case 60u: goto L_088A23C0;
    case 61u: goto L_088A23CC;
    case 62u: goto L_088A23E4;
    case 63u: goto L_088A23F8;
    case 64u: goto L_088A240C;
    case 65u: goto L_088A2420;
    case 66u: goto L_088A2434;
    case 67u: goto L_088A244C;
    case 68u: goto L_088A2464;
    case 69u: goto L_088A246C;
    case 70u: goto L_088A247C;
    case 71u: goto L_088A248C;
    case 72u: goto L_088A2494;
    case 73u: goto L_088A24A4;
    case 74u: goto L_088A24B4;
    case 75u: goto L_088A24C8;
    case 76u: goto L_088A24E8;
    case 77u: goto L_088A24F0;
    case 78u: goto L_088A2500;
    case 79u: goto L_088A250C;
    case 80u: goto L_088A2514;
    case 81u: goto L_088A251C;
    case 82u: goto L_088A2524;
    case 83u: goto L_088A2534;
    case 84u: goto L_088A2580;
    case 85u: goto L_088A2588;
    case 86u: goto L_088A2594;
    case 87u: goto L_088A259C;
    case 88u: goto L_088A25AC;
    case 89u: goto L_088A25B4;
    case 90u: goto L_088A25BC;
    case 91u: goto L_088A25C4;
    case 92u: goto L_088A25CC;
    case 93u: goto L_088A25F0;
    case 94u: goto L_088A2618;
    case 95u: goto L_088A265C;
    case 96u: goto L_088A2694;
    case 97u: goto L_088A26A0;
    case 98u: goto L_088A26A4;
    case 99u: goto L_088A26B8;
    case 100u: goto L_088A26D0;
    case 101u: goto L_088A26DC;
    case 102u: goto L_088A26E4;
    case 103u: goto L_088A26EC;
    case 104u: goto L_088A26F4;
    case 105u: goto L_088A26FC;
    case 106u: goto L_088A2704;
    case 107u: goto L_088A270C;
    case 108u: goto L_088A2714;
    case 109u: goto L_088A271C;
    case 110u: goto L_088A2724;
    case 111u: goto L_088A272C;
    case 112u: goto L_088A2740;
    case 113u: goto L_088A2768;
    case 114u: goto L_088A2774;
    case 115u: goto L_088A2788;
    case 116u: goto L_088A27A0;
    case 117u: goto L_088A27C4;
    case 118u: goto L_088A27D0;
    case 119u: goto L_088A27E0;
    case 120u: goto L_088A27E4;
    case 121u: goto L_088A27EC;
    case 122u: goto L_088A27F8;
    case 123u: goto L_088A2818;
    case 124u: goto L_088A2820;
    case 125u: goto L_088A2850;
    case 126u: goto L_088A2868;
    case 127u: goto L_088A2878;
    case 128u: goto L_088A2880;
    case 129u: goto L_088A2890;
    case 130u: goto L_088A2898;
    case 131u: goto L_088A28A0;
    case 132u: goto L_088A28AC;
    case 133u: goto L_088A28B8;
    case 134u: goto L_088A28C4;
    case 135u: goto L_088A28D0;
    case 136u: goto L_088A28D8;
    case 137u: goto L_088A28E0;
    case 138u: goto L_088A28E8;
    case 139u: goto L_088A28F0;
    case 140u: goto L_088A291C;
    case 141u: goto L_088A2924;
    case 142u: goto L_088A2938;
    case 143u: goto L_088A2944;
    case 144u: goto L_088A2978;
    case 145u: goto L_088A2984;
    case 146u: goto L_088A298C;
    case 147u: goto L_088A2998;
    case 148u: goto L_088A29A0;
    case 149u: goto L_088A29A8;
    case 150u: goto L_088A29C4;
    case 151u: goto L_088A29EC;
    case 152u: goto L_088A29F8;
    case 153u: goto L_088A2A08;
    case 154u: goto L_088A2A10;
    case 155u: goto L_088A2A24;
    case 156u: goto L_088A2A3C;
    case 157u: goto L_088A2A5C;
    case 158u: goto L_088A2A64;
    case 159u: goto L_088A2A6C;
    case 160u: goto L_088A2A7C;
    case 161u: goto L_088A2A94;
    case 162u: goto L_088A2AC0;
    case 163u: goto L_088A2AC8;
    case 164u: goto L_088A2AD8;
    case 165u: goto L_088A2B04;
    case 166u: goto L_088A2B1C;
    case 167u: goto L_088A2B38;
    case 168u: goto L_088A2B54;
    case 169u: goto L_088A2B5C;
    case 170u: goto L_088A2B64;
    case 171u: goto L_088A2B8C;
    case 172u: goto L_088A2B94;
    case 173u: goto L_088A2BA4;
    case 174u: goto L_088A2BD0;
    case 175u: goto L_088A2BE8;
    case 176u: goto L_088A2C00;
    case 177u: goto L_088A2C20;
    case 178u: goto L_088A2C28;
    case 179u: goto L_088A2C30;
    case 180u: goto L_088A2C38;
    case 181u: goto L_088A2C44;
    case 182u: goto L_088A2C70;
    case 183u: goto L_088A2C88;
    case 184u: goto L_088A2CA0;
    case 185u: goto L_088A2CC8;
    case 186u: goto L_088A2CD0;
    case 187u: goto L_088A2CD8;
    case 188u: goto L_088A2CE0;
    case 189u: goto L_088A2CF0;
    case 190u: goto L_088A2D14;
    case 191u: goto L_088A2D28;
    case 192u: goto L_088A2D30;
    case 193u: goto L_088A2D38;
    case 194u: goto L_088A2D40;
    case 195u: goto L_088A2D48;
    case 196u: goto L_088A2D50;
    case 197u: goto L_088A2D58;
    case 198u: goto L_088A2D70;
    case 199u: goto L_088A2D7C;
    case 200u: goto L_088A2D84;
    case 201u: goto L_088A2D9C;
    case 202u: goto L_088A2DB8;
    case 203u: goto L_088A2DC0;
    case 204u: goto L_088A2DD4;
    case 205u: goto L_088A2DDC;
    case 206u: goto L_088A2DF0;
    case 207u: goto L_088A2DFC;
    case 208u: goto L_088A2E20;
    case 209u: goto L_088A2E3C;
    case 210u: goto L_088A2E48;
    case 211u: goto L_088A2E54;
    case 212u: goto L_088A2E5C;
    case 213u: goto L_088A2E6C;
    case 214u: goto L_088A2E74;
    case 215u: goto L_088A2E90;
    case 216u: goto L_088A2E9C;
    case 217u: goto L_088A2EA4;
    case 218u: goto L_088A2EB4;
    case 219u: goto L_088A2EBC;
    case 220u: goto L_088A2ED8;
    case 221u: goto L_088A2EE4;
    case 222u: goto L_088A2EF0;
    case 223u: goto L_088A2EF8;
    case 224u: goto L_088A2F08;
    case 225u: goto L_088A2F10;
    case 226u: goto L_088A2F24;
    case 227u: goto L_088A2F2C;
    case 228u: goto L_088A2F38;
    case 229u: goto L_088A2F48;
    case 230u: goto L_088A2F50;
    case 231u: goto L_088A2F58;
    case 232u: goto L_088A2F60;
    case 233u: goto L_088A2F68;
    case 234u: goto L_088A2F70;
    case 235u: goto L_088A2F80;
    case 236u: goto L_088A2F84;
    case 237u: goto L_088A2F90;
    case 238u: goto L_088A2FC4;
    case 239u: goto L_088A2FD8;
    case 240u: goto L_088A2FE4;
    case 241u: goto L_088A2FF4;
    case 242u: goto L_088A2FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088A2000:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2014:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A2114;
      }
      goto L_088A2044;
    }
L_088A2044:
    aot_gpr[31] = (0x088A204Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x088A204Cu) goto L_088A204C;
    return;
L_088A204C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2074;
      }
      goto L_088A2054;
    }
L_088A2054:
    aot_gpr[31] = (0x088A205Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x088A205Cu) goto L_088A205C;
    return;
L_088A205C:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[20] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A207C;
      }
      goto L_088A206C;
    }
L_088A206C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2114;
      }
      goto L_088A2074;
    }
L_088A2074:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2114;
      }
      goto L_088A207C;
    }
L_088A207C:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (2218u << 16u);
    goto L_088A2088;
L_088A2088:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(720)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A20A4;
      }
      goto L_088A209C;
    }
L_088A209C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2104;
      }
      goto L_088A20A4;
    }
L_088A20A4:
    { const bool branch_taken = aot_gpr[20] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_088A20BC;
      }
      goto L_088A20AC;
    }
L_088A20AC:
    aot_gpr[31] = (0x088A20B4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 134u, 0x088A1C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088A20B4u) goto L_088A20B4;
    return;
L_088A20B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2104;
      }
      goto L_088A20BC;
    }
L_088A20BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A2104;
      }
      goto L_088A20CC;
    }
L_088A20CC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(716))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[7] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x088A2104u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 21u, 0x088A5140u>(ctx, &aot_mem) && ctx.pc == 0x088A2104u) goto L_088A2104;
    return;
L_088A2104:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(768));
      if (branch_taken) {
          goto L_088A2088;
      }
      goto L_088A2114;
    }
L_088A2114:
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
L_088A2134:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A2148;
      }
      goto L_088A2140;
    }
L_088A2140:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A2150;
      }
      goto L_088A2148;
    }
L_088A2148:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[5]);
    goto L_088A2150;
L_088A2150:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2158:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[7] & 255u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x088A2188u);
    aot_gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088A2188u) goto L_088A2188;
    return;
L_088A2188:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[17]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-5820)));
    aot_gpr[7] = (aot_gpr[18] & 255u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088A21A8u);
    aot_gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 139u, 0x088A4920u>(ctx, &aot_mem) && ctx.pc == 0x088A21A8u) goto L_088A21A8;
    return;
L_088A21A8:
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
L_088A21C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088A21DCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x088A21DCu) goto L_088A21DC;
    return;
L_088A21DC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2210;
      }
      goto L_088A21E4;
    }
L_088A21E4:
    aot_gpr[31] = (0x088A21ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x088A21ECu) goto L_088A21EC;
    return;
L_088A21EC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088A21F8u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 197u, 0x08964DF0u>(ctx, &aot_mem) && ctx.pc == 0x088A21F8u) goto L_088A21F8;
    return;
L_088A21F8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26496)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2218;
      }
      goto L_088A2208;
    }
L_088A2208:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2228;
      }
      goto L_088A2210;
    }
L_088A2210:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A223C;
      }
      goto L_088A2218;
    }
L_088A2218:
    aot_gpr[31] = (0x088A2220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 159u, 0x0896A970u>(ctx, &aot_mem) && ctx.pc == 0x088A2220u) goto L_088A2220;
    return;
L_088A2220:
    aot_gpr[31] = (0x088A2228u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 158u, 0x0896A964u>(ctx, &aot_mem) && ctx.pc == 0x088A2228u) goto L_088A2228;
    return;
L_088A2228:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x088A223Cu);
    aot_gpr[7] = (0u | 80u);
    goto L_088A2158;
L_088A223C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A224C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088A2264u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 168u, 0x089D1E14u>(ctx, &aot_mem) && ctx.pc == 0x088A2264u) goto L_088A2264;
    return;
L_088A2264:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A2288;
      }
      goto L_088A226C;
    }
L_088A226C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x088A2278u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 169u, 0x089D1E24u>(ctx, &aot_mem) && ctx.pc == 0x088A2278u) goto L_088A2278;
    return;
L_088A2278:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2290;
      }
      goto L_088A2280;
    }
L_088A2280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2294;
      }
      goto L_088A2288;
    }
L_088A2288:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2294;
      }
      goto L_088A2290;
    }
L_088A2290:
    aot_gpr[2] = (0u | 0u);
    goto L_088A2294;
L_088A2294:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A22A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[31]);
    aot_gpr[31] = (0x088A22CCu);
    aot_gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088A22CCu) goto L_088A22CC;
    return;
L_088A22CC:
    aot_gpr[4] = (0u | 75u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x088A22E8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 125u, 0x089D1AF0u>(ctx, &aot_mem) && ctx.pc == 0x088A22E8u) goto L_088A22E8;
    return;
L_088A22E8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A232C;
      }
      goto L_088A22F4;
    }
L_088A22F4:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[7] = (0u | 5u);
    aot_gpr[8] = (0u | 9u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x088A2318u);
    aot_gpr[10] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 141u, 0x089D1C14u>(ctx, &aot_mem) && ctx.pc == 0x088A2318u) goto L_088A2318;
    return;
L_088A2318:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A2354;
      }
      goto L_088A2324;
    }
L_088A2324:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A237C;
      }
      goto L_088A232C;
    }
L_088A232C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (0x088A233Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x088A233Cu) goto L_088A233C;
    return;
L_088A233C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 6u);
    aot_gpr[31] = (0x088A234Cu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 146u, 0x08962A68u>(ctx, &aot_mem) && ctx.pc == 0x088A234Cu) goto L_088A234C;
    return;
L_088A234C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A24B4;
      }
      goto L_088A2354;
    }
L_088A2354:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (0x088A2364u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x088A2364u) goto L_088A2364;
    return;
L_088A2364:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 6u);
    aot_gpr[31] = (0x088A2374u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 146u, 0x08962A68u>(ctx, &aot_mem) && ctx.pc == 0x088A2374u) goto L_088A2374;
    return;
L_088A2374:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A24B4;
      }
      goto L_088A237C;
    }
L_088A237C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (0u | 36u);
    aot_gpr[31] = (0x088A2390u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17308));
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 177u, 0x089D1E84u>(ctx, &aot_mem) && ctx.pc == 0x088A2390u) goto L_088A2390;
    return;
L_088A2390:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A246C;
      }
      goto L_088A239C;
    }
L_088A239C:
    aot_gpr[5] = (2186u << 16u);
    aot_gpr[6] = (2186u << 16u);
    aot_gpr[7] = (2186u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3344));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(13608));
    aot_gpr[31] = (0x088A23C0u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(3492));
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 185u, 0x089D1EF4u>(ctx, &aot_mem) && ctx.pc == 0x088A23C0u) goto L_088A23C0;
    return;
L_088A23C0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A2494;
      }
      goto L_088A23CC;
    }
L_088A23CC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (2213u << 16u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5820));
    aot_gpr[31] = (0x088A23E4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6256));
    if (rt.invoke_chained_direct<&recomp_unit_0382_entry, 382u, 242u, 0x08982FA0u>(ctx, &aot_mem) && ctx.pc == 0x088A23E4u) goto L_088A23E4;
    return;
L_088A23E4:
    aot_gpr[5] = (2186u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(248));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088A23F8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3576));
    if (rt.invoke_chained_direct<&recomp_unit_0382_entry, 382u, 242u, 0x08982FA0u>(ctx, &aot_mem) && ctx.pc == 0x088A23F8u) goto L_088A23F8;
    return;
L_088A23F8:
    aot_gpr[5] = (2186u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(252));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088A240Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3892));
    if (rt.invoke_chained_direct<&recomp_unit_0382_entry, 382u, 242u, 0x08982FA0u>(ctx, &aot_mem) && ctx.pc == 0x088A240Cu) goto L_088A240C;
    return;
L_088A240C:
    aot_gpr[5] = (2186u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(256));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088A2420u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4024));
    if (rt.invoke_chained_direct<&recomp_unit_0382_entry, 382u, 242u, 0x08982FA0u>(ctx, &aot_mem) && ctx.pc == 0x088A2420u) goto L_088A2420;
    return;
L_088A2420:
    aot_gpr[5] = (2186u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(260));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088A2434u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4280));
    if (rt.invoke_chained_direct<&recomp_unit_0382_entry, 382u, 242u, 0x08982FA0u>(ctx, &aot_mem) && ctx.pc == 0x088A2434u) goto L_088A2434;
    return;
L_088A2434:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (2213u << 16u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7768));
    aot_gpr[31] = (0x088A244Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6104));
    if (rt.invoke_chained_direct<&recomp_unit_0382_entry, 382u, 242u, 0x08982FA0u>(ctx, &aot_mem) && ctx.pc == 0x088A244Cu) goto L_088A244C;
    return;
L_088A244C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (2213u << 16u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5812));
    aot_gpr[31] = (0x088A2464u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6180));
    if (rt.invoke_chained_direct<&recomp_unit_0382_entry, 382u, 242u, 0x08982FA0u>(ctx, &aot_mem) && ctx.pc == 0x088A2464u) goto L_088A2464;
    return;
L_088A2464:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A24B4;
      }
      goto L_088A246C;
    }
L_088A246C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(52));
    aot_gpr[31] = (0x088A247Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x088A247Cu) goto L_088A247C;
    return;
L_088A247C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 6u);
    aot_gpr[31] = (0x088A248Cu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 146u, 0x08962A68u>(ctx, &aot_mem) && ctx.pc == 0x088A248Cu) goto L_088A248C;
    return;
L_088A248C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A24B4;
      }
      goto L_088A2494;
    }
L_088A2494:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[31] = (0x088A24A4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x088A24A4u) goto L_088A24A4;
    return;
L_088A24A4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 6u);
    aot_gpr[31] = (0x088A24B4u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 146u, 0x08962A68u>(ctx, &aot_mem) && ctx.pc == 0x088A24B4u) goto L_088A24B4;
    return;
L_088A24B4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A24C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088A24E8u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 159u, 0x0898DBBCu>(ctx, &aot_mem) && ctx.pc == 0x088A24E8u) goto L_088A24E8;
    return;
L_088A24E8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A251C;
      }
      goto L_088A24F0;
    }
L_088A24F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A2514;
      }
      goto L_088A2500;
    }
L_088A2500:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x088A250Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 169u, 0x0898DC60u>(ctx, &aot_mem) && ctx.pc == 0x088A250Cu) goto L_088A250C;
    return;
L_088A250C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A2524;
      }
      goto L_088A2514;
    }
L_088A2514:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A2524;
      }
      goto L_088A251C;
    }
L_088A251C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2524;
      }
      goto L_088A2524;
    }
L_088A2524:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2534:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[8] + static_cast<std::uint32_t>(17328));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[11] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (0u | 2u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x088A2580u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 149u, 0x089D1CC4u>(ctx, &aot_mem) && ctx.pc == 0x088A2580u) goto L_088A2580;
    return;
L_088A2580:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A25C4;
      }
      goto L_088A2588;
    }
L_088A2588:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x088A2594u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088A224C;
L_088A2594:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A25BC;
      }
      goto L_088A259C;
    }
L_088A259C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x088A25ACu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 55u, 0x089832C4u>(ctx, &aot_mem) && ctx.pc == 0x088A25ACu) goto L_088A25AC;
    return;
L_088A25AC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_088A25CC;
    }
    goto L_088A25B4;
L_088A25B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A26A4;
      }
      goto L_088A25BC;
    }
L_088A25BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A26A4;
      }
      goto L_088A25C4;
    }
L_088A25C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A26A4;
      }
      goto L_088A25CC;
    }
L_088A25CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 8u);
    aot_gpr[6] = (0u - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x088A25F0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 148u, 0x088A49ECu>(ctx, &aot_mem) && ctx.pc == 0x088A25F0u) goto L_088A25F0;
    return;
L_088A25F0:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(720), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2152)));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(232), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2152)));
    aot_gpr[4] = (aot_gpr[5] & 255u);
    aot_gpr[31] = (0x088A2618u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 180u, 0x088A0BC8u>(ctx, &aot_mem) && ctx.pc == 0x088A2618u) goto L_088A2618;
    return;
L_088A2618:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(7978)));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(234), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(7976)));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(236), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x088A265Cu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 157u, 0x089D1D90u>(ctx, &aot_mem) && ctx.pc == 0x088A265Cu) goto L_088A265C;
    return;
L_088A265C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(26508)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[17] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(224), aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(aot_gpr[17]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(85));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088A2694u);
    aot_gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088A2694u) goto L_088A2694;
    return;
L_088A2694:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[31] = (0x088A26A0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 190u, 0x088A0C88u>(ctx, &aot_mem) && ctx.pc == 0x088A26A0u) goto L_088A26A0;
    return;
L_088A26A0:
    aot_gpr[2] = (0u | 0u);
    goto L_088A26A4;
L_088A26A4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A26B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088A26D0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_088A2534;
L_088A26D0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A2724;
      }
      goto L_088A26DC;
    }
L_088A26DC:
    aot_gpr[31] = (0x088A26E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x088A26E4u) goto L_088A26E4;
    return;
L_088A26E4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A271C;
      }
      goto L_088A26EC;
    }
L_088A26EC:
    aot_gpr[31] = (0x088A26F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x088A26F4u) goto L_088A26F4;
    return;
L_088A26F4:
    aot_gpr[31] = (0x088A26FCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 146u, 0x08964AB8u>(ctx, &aot_mem) && ctx.pc == 0x088A26FCu) goto L_088A26FC;
    return;
L_088A26FC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2714;
      }
      goto L_088A2704;
    }
L_088A2704:
    aot_gpr[31] = (0x088A270Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088A24C8;
L_088A270C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A272C;
      }
      goto L_088A2714;
    }
L_088A2714:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A272C;
      }
      goto L_088A271C;
    }
L_088A271C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_088A272C;
      }
      goto L_088A2724;
    }
L_088A2724:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_088A272C;
      }
      goto L_088A272C;
    }
L_088A272C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2740:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-320));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[31]);
    aot_gpr[31] = (0x088A2768u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 21u, 0x089640D8u>(ctx, &aot_mem) && ctx.pc == 0x088A2768u) goto L_088A2768;
    return;
L_088A2768:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088A2774u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088A2774u) goto L_088A2774;
    return;
L_088A2774:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2788:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    goto L_088A27A0;
L_088A27A0:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(716))))));
    aot_gpr[9] = (aot_gpr[8] << 5u);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[8] = (aot_gpr[8] << 3u);
    aot_gpr[8] = (aot_gpr[9] + aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_088A27D0;
      }
      goto L_088A27C4;
    }
L_088A27C4:
    aot_gpr[2] = (aot_gpr[7] << 24u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> 24u));
      if (branch_taken) {
          goto L_088A27E4;
      }
      goto L_088A27D0;
    }
L_088A27D0:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(768));
      if (branch_taken) {
          goto L_088A27A0;
      }
      goto L_088A27E0;
    }
L_088A27E0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088A27E4;
L_088A27E4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A27EC:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (aot_gpr[6] & 255u);
      if (branch_taken) {
          goto L_088A2818;
      }
      goto L_088A27F8;
    }
L_088A27F8:
    aot_gpr[5] = (aot_gpr[5] << 8u);
    aot_gpr[7] = (0u - aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(216), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_088A2818;
L_088A2818:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2820:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2878;
      }
      goto L_088A2850;
    }
L_088A2850:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(17352)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2868:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088A2878u);
    aot_gpr[6] = (0u | 1u);
    goto L_088A27EC;
L_088A2878:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2A24;
      }
      goto L_088A2880;
    }
L_088A2880:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088A2890u);
    aot_gpr[6] = (0u | 0u);
    goto L_088A27EC;
L_088A2890:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2878;
      }
      goto L_088A2898;
    }
L_088A2898:
    aot_gpr[31] = (0x088A28A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x088A28A0u) goto L_088A28A0;
    return;
L_088A28A0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088A28ACu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 197u, 0x08964DF0u>(ctx, &aot_mem) && ctx.pc == 0x088A28ACu) goto L_088A28AC;
    return;
L_088A28AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[4]);
      if (branch_taken) {
          goto L_088A2878;
      }
      goto L_088A28B8;
    }
L_088A28B8:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A28D8;
      }
      goto L_088A28C4;
    }
L_088A28C4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088A28D0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 189u, 0x088A0C6Cu>(ctx, &aot_mem) && ctx.pc == 0x088A28D0u) goto L_088A28D0;
    return;
L_088A28D0:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(217), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088A28D8;
L_088A28D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2878;
      }
      goto L_088A28E0;
    }
L_088A28E0:
    aot_gpr[31] = (0x088A28E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 231u, 0x0889AD54u>(ctx, &aot_mem) && ctx.pc == 0x088A28E8u) goto L_088A28E8;
    return;
L_088A28E8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A291C;
      }
      goto L_088A28F0;
    }
L_088A28F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26508)));
    aot_gpr[7] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(72), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26508)));
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(24760));
    aot_gpr[31] = (0x088A291Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088A291Cu) goto L_088A291C;
    return;
L_088A291C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2878;
      }
      goto L_088A2924;
    }
L_088A2924:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26508)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(76), aot_gpr[4]);
      if (branch_taken) {
          goto L_088A2878;
      }
      goto L_088A2938;
    }
L_088A2938:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088A2944u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 189u, 0x088A0C6Cu>(ctx, &aot_mem) && ctx.pc == 0x088A2944u) goto L_088A2944;
    return;
L_088A2944:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(716))))));
    aot_gpr[5] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A298C;
      }
      goto L_088A2978;
    }
L_088A2978:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A2A10;
      }
      goto L_088A2984;
    }
L_088A2984:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A29A0;
      }
      goto L_088A298C;
    }
L_088A298C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2A10;
      }
      goto L_088A2998;
    }
L_088A2998:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2A10;
      }
      goto L_088A29A0;
    }
L_088A29A0:
    aot_gpr[31] = (0x088A29A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088A29A8u) goto L_088A29A8;
    return;
L_088A29A8:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(104), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088A29EC;
      }
      goto L_088A29C4;
    }
L_088A29C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[5]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(27444)));
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(27444)));
    aot_gpr[7] = (0u | 31u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(148), aot_gpr[7]);
    goto L_088A29EC;
L_088A29EC:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (0x088A29F8u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 40u, 0x0882C3D8u>(ctx, &aot_mem) && ctx.pc == 0x088A29F8u) goto L_088A29F8;
    return;
L_088A29F8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1900)));
    aot_gpr[31] = (0x088A2A08u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 21u, 0x088BC15Cu>(ctx, &aot_mem) && ctx.pc == 0x088A2A08u) goto L_088A2A08;
    return;
L_088A2A08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2A10;
      }
      goto L_088A2A10;
    }
L_088A2A10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(424), aot_gpr[5]);
      if (branch_taken) {
          goto L_088A2878;
      }
      goto L_088A2A24;
    }
L_088A2A24:
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
L_088A2A3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-3008));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2980), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2984), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2988), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2992), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2996), aot_gpr[31]);
    aot_gpr[31] = (0x088A2A5Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x088A2A5Cu) goto L_088A2A5C;
    return;
L_088A2A5C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A2A6C;
      }
      goto L_088A2A64;
    }
L_088A2A64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2B1C;
      }
      goto L_088A2A6C;
    }
L_088A2A6C:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[29] + aot_gpr[18]);
    aot_gpr[17] = (0u | 0u);
    goto L_088A2A7C;
L_088A2A7C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(232));
    aot_gpr[31] = (0x088A2A94u);
    aot_gpr[6] = (0u | 476u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088A2A94u) goto L_088A2A94;
    return;
L_088A2A94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (0u < aot_gpr[19] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(708), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(476));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(768));
      if (branch_taken) {
          goto L_088A2A7C;
      }
      goto L_088A2AC0;
    }
L_088A2AC0:
    aot_gpr[31] = (0x088A2AC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x088A2AC8u) goto L_088A2AC8;
    return;
L_088A2AC8:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(2856));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x088A2AD8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 154u, 0x0898380Cu>(ctx, &aot_mem) && ctx.pc == 0x088A2AD8u) goto L_088A2AD8;
    return;
L_088A2AD8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2856), aot_gpr[17]);
    aot_gpr[4] = (0u | 80u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(248)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(2860), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2864), aot_gpr[5]);
    aot_gpr[4] = (0u | 2856u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2912), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2928), aot_gpr[29]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2868));
    aot_gpr[31] = (0x088A2B04u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 38u, 0x08985364u>(ctx, &aot_mem) && ctx.pc == 0x088A2B04u) goto L_088A2B04;
    return;
L_088A2B04:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2868), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2932), 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2932));
    aot_gpr[31] = (0x088A2B1Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 158u, 0x08983858u>(ctx, &aot_mem) && ctx.pc == 0x088A2B1Cu) goto L_088A2B1C;
    return;
L_088A2B1C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2980)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2984)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2988)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2992)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2996)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(3008));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2B38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-624));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(600), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(604), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(608), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(612), aot_gpr[31]);
    aot_gpr[31] = (0x088A2B54u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x088A2B54u) goto L_088A2B54;
    return;
L_088A2B54:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(105))))));
        goto L_088A2B64;
    }
    goto L_088A2B5C;
L_088A2B5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2BE8;
      }
      goto L_088A2B64;
    }
L_088A2B64:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 8u);
    aot_gpr[6] = (0u - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(232));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088A2B8Cu);
    aot_gpr[6] = (0u | 476u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088A2B8Cu) goto L_088A2B8C;
    return;
L_088A2B8C:
    aot_gpr[31] = (0x088A2B94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x088A2B94u) goto L_088A2B94;
    return;
L_088A2B94:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(476));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x088A2BA4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 154u, 0x0898380Cu>(ctx, &aot_mem) && ctx.pc == 0x088A2BA4u) goto L_088A2BA4;
    return;
L_088A2BA4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(476), aot_gpr[17]);
    aot_gpr[4] = (0u | 80u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(252)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(480), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(484), aot_gpr[5]);
    aot_gpr[4] = (0u | 476u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(532), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(548), aot_gpr[29]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(488));
    aot_gpr[31] = (0x088A2BD0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 38u, 0x08985364u>(ctx, &aot_mem) && ctx.pc == 0x088A2BD0u) goto L_088A2BD0;
    return;
L_088A2BD0:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(488), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(552), 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(552));
    aot_gpr[31] = (0x088A2BE8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 158u, 0x08983858u>(ctx, &aot_mem) && ctx.pc == 0x088A2BE8u) goto L_088A2BE8;
    return;
L_088A2BE8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(600)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(604)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(608)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(612)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(624));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2C00:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[31]);
    aot_gpr[31] = (0x088A2C20u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x088A2C20u) goto L_088A2C20;
    return;
L_088A2C20:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A2C30;
      }
      goto L_088A2C28;
    }
L_088A2C28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2C88;
      }
      goto L_088A2C30;
    }
L_088A2C30:
    aot_gpr[31] = (0x088A2C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x088A2C38u) goto L_088A2C38;
    return;
L_088A2C38:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x088A2C44u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 154u, 0x0898380Cu>(ctx, &aot_mem) && ctx.pc == 0x088A2C44u) goto L_088A2C44;
    return;
L_088A2C44:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[4] = (0u | 80u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(256)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (0u | 24u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x088A2C70u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 38u, 0x08985364u>(ctx, &aot_mem) && ctx.pc == 0x088A2C70u) goto L_088A2C70;
    return;
L_088A2C70:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(76));
    aot_gpr[31] = (0x088A2C88u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 158u, 0x08983858u>(ctx, &aot_mem) && ctx.pc == 0x088A2C88u) goto L_088A2C88;
    return;
L_088A2C88:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2CA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A2D48;
      }
      goto L_088A2CC8;
    }
L_088A2CC8:
    aot_gpr[31] = (0x088A2CD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x088A2CD0u) goto L_088A2CD0;
    return;
L_088A2CD0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2D40;
      }
      goto L_088A2CD8;
    }
L_088A2CD8:
    aot_gpr[31] = (0x088A2CE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x088A2CE0u) goto L_088A2CE0;
    return;
L_088A2CE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A2D38;
      }
      goto L_088A2CF0;
    }
L_088A2CF0:
    aot_gpr[4] = (aot_gpr[4] << 8u);
    aot_gpr[6] = (0u - aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(708)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A2D30;
      }
      goto L_088A2D14;
    }
L_088A2D14:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(238))))));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2248)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A2D58;
      }
      goto L_088A2D28;
    }
L_088A2D28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2D50;
      }
      goto L_088A2D30;
    }
L_088A2D30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2D84;
      }
      goto L_088A2D38;
    }
L_088A2D38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2D84;
      }
      goto L_088A2D40;
    }
L_088A2D40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2D84;
      }
      goto L_088A2D48;
    }
L_088A2D48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2D84;
      }
      goto L_088A2D50;
    }
L_088A2D50:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2D84;
      }
      goto L_088A2D58;
    }
L_088A2D58:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(238), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(2264)));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(240), static_cast<std::uint16_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_088A2D7C;
      }
      goto L_088A2D70;
    }
L_088A2D70:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(244));
    aot_gpr[31] = (0x088A2D7Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 167u, 0x088CDD6Cu>(ctx, &aot_mem) && ctx.pc == 0x088A2D7Cu) goto L_088A2D7C;
    return;
L_088A2D7C:
    aot_gpr[31] = (0x088A2D84u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088A2B38;
L_088A2D84:
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
L_088A2D9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[9] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(105))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088A2DB8u);
    aot_gpr[6] = (aot_gpr[9] | 0u);
    goto L_088A27EC;
L_088A2DB8:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2DDC;
      }
      goto L_088A2DC0;
    }
L_088A2DC0:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088A2DD4u);
    aot_gpr[7] = (0u | 80u);
    goto L_088A2158;
L_088A2DD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2DF0;
      }
      goto L_088A2DDC;
    }
L_088A2DDC:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088A2DF0u);
    aot_gpr[7] = (0u | 80u);
    goto L_088A2158;
L_088A2DF0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2DFC:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(105))))));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] << 8u);
    aot_gpr[6] = (0u - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(216)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2E20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[2] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    goto L_088A2E3C;
L_088A2E3C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(720)));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A2E5C;
      }
      goto L_088A2E48;
    }
L_088A2E48:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2E5C;
      }
      goto L_088A2E54;
    }
L_088A2E54:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] & 255u);
    goto L_088A2E5C;
L_088A2E5C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(768));
      if (branch_taken) {
          goto L_088A2E3C;
      }
      goto L_088A2E6C;
    }
L_088A2E6C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2E74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[2] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    goto L_088A2E90;
L_088A2E90:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(720)));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A2EA4;
      }
      goto L_088A2E9C;
    }
L_088A2E9C:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] & 255u);
    goto L_088A2EA4;
L_088A2EA4:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(768));
      if (branch_taken) {
          goto L_088A2E90;
      }
      goto L_088A2EB4;
    }
L_088A2EB4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2EBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[2] = (0u | 1u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    goto L_088A2ED8;
L_088A2ED8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(720)));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A2EF8;
      }
      goto L_088A2EE4;
    }
L_088A2EE4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(217)));
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A2EF8;
      }
      goto L_088A2EF0;
    }
L_088A2EF0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A2F08;
      }
      goto L_088A2EF8;
    }
L_088A2EF8:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(768));
      if (branch_taken) {
          goto L_088A2ED8;
      }
      goto L_088A2F08;
    }
L_088A2F08:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2F10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2F60;
      }
      goto L_088A2F24;
    }
L_088A2F24:
    aot_gpr[31] = (0x088A2F2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x088A2F2Cu) goto L_088A2F2C;
    return;
L_088A2F2C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2F58;
      }
      goto L_088A2F38;
    }
L_088A2F38:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088A2F68;
      }
      goto L_088A2F48;
    }
L_088A2F48:
    aot_gpr[31] = (0x088A2F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 200u, 0x08964E38u>(ctx, &aot_mem) && ctx.pc == 0x088A2F50u) goto L_088A2F50;
    return;
L_088A2F50:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088A2F84;
      }
      goto L_088A2F58;
    }
L_088A2F58:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A2F84;
      }
      goto L_088A2F60;
    }
L_088A2F60:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A2F84;
      }
      goto L_088A2F68;
    }
L_088A2F68:
    aot_gpr[31] = (0x088A2F70u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x088A2F70u) goto L_088A2F70;
    return;
L_088A2F70:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 42u);
    aot_gpr[31] = (0x088A2F80u);
    aot_gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 146u, 0x08962A68u>(ctx, &aot_mem) && ctx.pc == 0x088A2F80u) goto L_088A2F80;
    return;
L_088A2F80:
    aot_gpr[2] = (0u | 0u);
    goto L_088A2F84;
L_088A2F84:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2F90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 20u, 0x088A314Cu>(ctx, &aot_mem); return;
      }
      goto L_088A2FC4;
    }
L_088A2FC4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088A2FFC;
      }
      goto L_088A2FD8;
    }
L_088A2FD8:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 4u, 0x088A3020u>(ctx, &aot_mem); return;
      }
      goto L_088A2FE4;
    }
L_088A2FE4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1900)));
    aot_gpr[31] = (0x088A2FF4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 71u, 0x088BC4F4u>(ctx, &aot_mem) && ctx.pc == 0x088A2FF4u) goto L_088A2FF4;
    return;
L_088A2FF4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 4u, 0x088A3020u>(ctx, &aot_mem); return;
      }
      goto L_088A2FFC;
    }
L_088A2FFC:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 7 ? 1u : 0u);
    ctx.pc = 0x088A3000u; return;
}

void recomp_unit_0158(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0158_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_158(Runtime &runtime) {
    runtime.register_generated_unit(158u, 0x088A2000u, 4096u, &recomp_unit_0158, &recomp_unit_0158_entry);
    runtime.register_function(0x088A2000u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2014u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2044u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A204Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2054u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A205Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A206Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2074u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A207Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2088u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A209Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A20A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A20ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A20B4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A20BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A20CCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2104u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2114u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2134u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2140u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2148u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2150u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2158u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2188u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A21A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A21C0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A21DCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A21E4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A21ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A21F8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2208u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2210u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2218u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2220u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2228u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A223Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A224Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2264u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A226Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2278u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2280u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2288u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2290u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2294u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A22A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A22CCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A22E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A22F4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2318u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2324u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A232Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A233Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A234Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2354u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2364u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2374u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A237Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2390u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A239Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A23C0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A23CCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A23E4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A23F8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A240Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2420u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2434u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A244Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2464u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A246Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A247Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A248Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2494u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A24A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A24B4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A24C8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A24E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A24F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2500u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A250Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2514u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A251Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2524u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2534u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2580u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2588u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2594u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A259Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A25ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A25B4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A25BCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A25C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A25CCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A25F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2618u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A265Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2694u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A26A0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A26A4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A26B8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A26D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A26DCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A26E4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A26ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A26F4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A26FCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2704u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A270Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2714u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A271Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2724u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A272Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2740u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2768u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2774u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2788u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A27A0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A27C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A27D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A27E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A27E4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A27ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A27F8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2818u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2820u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2850u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2868u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2878u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2880u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2890u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2898u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A28A0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A28ACu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A28B8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A28C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A28D0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A28D8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A28E0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A28E8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A28F0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A291Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2924u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2938u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2944u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2978u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2984u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A298Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2998u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A29A0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A29A8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A29C4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A29ECu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A29F8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2A08u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2A10u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2A24u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2A3Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2A5Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2A64u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2A6Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2A7Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2A94u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2AC0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2AC8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2AD8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2B04u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2B1Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2B38u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2B54u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2B5Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2B64u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2B8Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2B94u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2BA4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2BD0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2BE8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2C00u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2C20u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2C28u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2C30u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2C38u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2C44u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2C70u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2C88u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2CA0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2CC8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2CD0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2CD8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2CE0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2CF0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2D14u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2D28u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2D30u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2D38u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2D40u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2D48u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2D50u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2D58u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2D70u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2D7Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2D84u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2D9Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2DB8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2DC0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2DD4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2DDCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2DF0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2DFCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2E20u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2E3Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2E48u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2E54u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2E5Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2E6Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2E74u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2E90u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2E9Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2EA4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2EB4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2EBCu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2ED8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2EE4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2EF0u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2EF8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2F08u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2F10u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2F24u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2F2Cu, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2F38u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2F48u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2F50u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2F58u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2F60u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2F68u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2F70u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2F80u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2F84u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2F90u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2FC4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2FD8u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2FE4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2FF4u, &recomp_unit_0158, "recomp_unit_0158");
    runtime.register_function(0x088A2FFCu, &recomp_unit_0158, "recomp_unit_0158");
}
} // namespace psprecomp
