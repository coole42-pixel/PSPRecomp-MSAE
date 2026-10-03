#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0447[1021] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 0, 0,
    10, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 15, 0, 0, 0, 0, 0, 16,
    0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0,
    0, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 30, 0, 0, 31, 0, 0, 32, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 36, 0, 37, 0, 0, 0, 38,
    39, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 43, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0, 0, 47, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 50, 0, 0, 0,
    51, 0, 52, 0, 53, 0, 0, 0, 54, 0, 55, 0, 0, 56, 0, 57, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0,
    61, 0, 0, 62, 0, 63, 0, 0, 0, 64, 0, 65, 0, 0, 0, 66, 0, 67, 0, 68, 0, 0, 69, 70, 0, 0, 0, 0, 0, 71, 0, 72,
    0, 0, 0, 0, 0, 73, 0, 74, 0, 75, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 85, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 88, 0, 89, 0, 90, 0, 0, 0, 91, 92, 93, 0, 94, 0, 0, 0, 95, 0, 96,
    0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 104,
    0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 110, 0, 0,
    0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 114, 115, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0,
    0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 127, 0, 128, 129, 130, 0, 0, 0, 0, 0, 0, 131, 0,
    132, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0,
    0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0,
    0, 147, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 152, 0, 0, 0, 0, 153, 0, 154,
    0, 155, 0, 0, 156, 0, 157, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 178, 0, 179, 0, 180, 0, 181, 0, 182, 0, 183,
    0, 0, 0, 0, 184, 0, 0, 185, 0, 186, 187, 0, 188, 0, 189, 0, 0, 190, 0, 191, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 198, 0, 199, 0, 0, 200, 201,
};
void recomp_unit_0447_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089C3000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0447[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089C3000;
    case 2u: goto L_089C3008;
    case 3u: goto L_089C3018;
    case 4u: goto L_089C3024;
    case 5u: goto L_089C3028;
    case 6u: goto L_089C304C;
    case 7u: goto L_089C3058;
    case 8u: goto L_089C3060;
    case 9u: goto L_089C3068;
    case 10u: goto L_089C3080;
    case 11u: goto L_089C3088;
    case 12u: goto L_089C3094;
    case 13u: goto L_089C30D4;
    case 14u: goto L_089C30E0;
    case 15u: goto L_089C30E4;
    case 16u: goto L_089C30FC;
    case 17u: goto L_089C3104;
    case 18u: goto L_089C312C;
    case 19u: goto L_089C314C;
    case 20u: goto L_089C3154;
    case 21u: goto L_089C315C;
    case 22u: goto L_089C316C;
    case 23u: goto L_089C3188;
    case 24u: goto L_089C319C;
    case 25u: goto L_089C31A4;
    case 26u: goto L_089C31B0;
    case 27u: goto L_089C31BC;
    case 28u: goto L_089C31C8;
    case 29u: goto L_089C31D4;
    case 30u: goto L_089C3208;
    case 31u: goto L_089C3214;
    case 32u: goto L_089C3220;
    case 33u: goto L_089C3224;
    case 34u: goto L_089C324C;
    case 35u: goto L_089C3254;
    case 36u: goto L_089C3264;
    case 37u: goto L_089C326C;
    case 38u: goto L_089C327C;
    case 39u: goto L_089C3280;
    case 40u: goto L_089C3290;
    case 41u: goto L_089C3298;
    case 42u: goto L_089C32C4;
    case 43u: goto L_089C3308;
    case 44u: goto L_089C331C;
    case 45u: goto L_089C3324;
    case 46u: goto L_089C332C;
    case 47u: goto L_089C3338;
    case 48u: goto L_089C333C;
    case 49u: goto L_089C336C;
    case 50u: goto L_089C3370;
    case 51u: goto L_089C3380;
    case 52u: goto L_089C3388;
    case 53u: goto L_089C3390;
    case 54u: goto L_089C33A0;
    case 55u: goto L_089C33A8;
    case 56u: goto L_089C33B4;
    case 57u: goto L_089C33BC;
    case 58u: goto L_089C33C0;
    case 59u: goto L_089C33E8;
    case 60u: goto L_089C33F4;
    case 61u: goto L_089C3400;
    case 62u: goto L_089C340C;
    case 63u: goto L_089C3414;
    case 64u: goto L_089C3424;
    case 65u: goto L_089C342C;
    case 66u: goto L_089C343C;
    case 67u: goto L_089C3444;
    case 68u: goto L_089C344C;
    case 69u: goto L_089C3458;
    case 70u: goto L_089C345C;
    case 71u: goto L_089C3474;
    case 72u: goto L_089C347C;
    case 73u: goto L_089C3494;
    case 74u: goto L_089C349C;
    case 75u: goto L_089C34A4;
    case 76u: goto L_089C34A8;
    case 77u: goto L_089C34D8;
    case 78u: goto L_089C3500;
    case 79u: goto L_089C3520;
    case 80u: goto L_089C3528;
    case 81u: goto L_089C352C;
    case 82u: goto L_089C3548;
    case 83u: goto L_089C355C;
    case 84u: goto L_089C3564;
    case 85u: goto L_089C3574;
    case 86u: goto L_089C35A0;
    case 87u: goto L_089C35A8;
    case 88u: goto L_089C35B4;
    case 89u: goto L_089C35BC;
    case 90u: goto L_089C35C4;
    case 91u: goto L_089C35D4;
    case 92u: goto L_089C35D8;
    case 93u: goto L_089C35DC;
    case 94u: goto L_089C35E4;
    case 95u: goto L_089C35F4;
    case 96u: goto L_089C35FC;
    case 97u: goto L_089C3614;
    case 98u: goto L_089C362C;
    case 99u: goto L_089C3634;
    case 100u: goto L_089C363C;
    case 101u: goto L_089C3648;
    case 102u: goto L_089C3658;
    case 103u: goto L_089C3674;
    case 104u: goto L_089C367C;
    case 105u: goto L_089C3698;
    case 106u: goto L_089C36B8;
    case 107u: goto L_089C36D4;
    case 108u: goto L_089C36E0;
    case 109u: goto L_089C36EC;
    case 110u: goto L_089C36F4;
    case 111u: goto L_089C3708;
    case 112u: goto L_089C372C;
    case 113u: goto L_089C3740;
    case 114u: goto L_089C374C;
    case 115u: goto L_089C3750;
    case 116u: goto L_089C3754;
    case 117u: goto L_089C3778;
    case 118u: goto L_089C3788;
    case 119u: goto L_089C3798;
    case 120u: goto L_089C37C0;
    case 121u: goto L_089C37D0;
    case 122u: goto L_089C37D4;
    case 123u: goto L_089C37E8;
    case 124u: goto L_089C3818;
    case 125u: goto L_089C383C;
    case 126u: goto L_089C3844;
    case 127u: goto L_089C384C;
    case 128u: goto L_089C3854;
    case 129u: goto L_089C3858;
    case 130u: goto L_089C385C;
    case 131u: goto L_089C3878;
    case 132u: goto L_089C3880;
    case 133u: goto L_089C3894;
    case 134u: goto L_089C389C;
    case 135u: goto L_089C38B4;
    case 136u: goto L_089C38C4;
    case 137u: goto L_089C38CC;
    case 138u: goto L_089C38D4;
    case 139u: goto L_089C391C;
    case 140u: goto L_089C393C;
    case 141u: goto L_089C3964;
    case 142u: goto L_089C3984;
    case 143u: goto L_089C39C4;
    case 144u: goto L_089C39CC;
    case 145u: goto L_089C39DC;
    case 146u: goto L_089C39E4;
    case 147u: goto L_089C3A04;
    case 148u: goto L_089C3A18;
    case 149u: goto L_089C3A20;
    case 150u: goto L_089C3A34;
    case 151u: goto L_089C3A5C;
    case 152u: goto L_089C3A60;
    case 153u: goto L_089C3A74;
    case 154u: goto L_089C3A7C;
    case 155u: goto L_089C3A84;
    case 156u: goto L_089C3A90;
    case 157u: goto L_089C3A98;
    case 158u: goto L_089C3AAC;
    case 159u: goto L_089C3AB4;
    case 160u: goto L_089C3BE0;
    case 161u: goto L_089C3C18;
    case 162u: goto L_089C3C40;
    case 163u: goto L_089C3C5C;
    case 164u: goto L_089C3CB0;
    case 165u: goto L_089C3CE4;
    case 166u: goto L_089C3CF8;
    case 167u: goto L_089C3D44;
    case 168u: goto L_089C3D70;
    case 169u: goto L_089C3DB8;
    case 170u: goto L_089C3DE0;
    case 171u: goto L_089C3DE8;
    case 172u: goto L_089C3E2C;
    case 173u: goto L_089C3E3C;
    case 174u: goto L_089C3E70;
    case 175u: goto L_089C3EA4;
    case 176u: goto L_089C3EC8;
    case 177u: goto L_089C3ED0;
    case 178u: goto L_089C3ED4;
    case 179u: goto L_089C3EDC;
    case 180u: goto L_089C3EE4;
    case 181u: goto L_089C3EEC;
    case 182u: goto L_089C3EF4;
    case 183u: goto L_089C3EFC;
    case 184u: goto L_089C3F10;
    case 185u: goto L_089C3F1C;
    case 186u: goto L_089C3F24;
    case 187u: goto L_089C3F28;
    case 188u: goto L_089C3F30;
    case 189u: goto L_089C3F38;
    case 190u: goto L_089C3F44;
    case 191u: goto L_089C3F4C;
    case 192u: goto L_089C3F54;
    case 193u: goto L_089C3F5C;
    case 194u: goto L_089C3F78;
    case 195u: goto L_089C3FB8;
    case 196u: goto L_089C3FC4;
    case 197u: goto L_089C3FD0;
    case 198u: goto L_089C3FD8;
    case 199u: goto L_089C3FE0;
    case 200u: goto L_089C3FEC;
    case 201u: goto L_089C3FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089C3000:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089C3024;
      }
      goto L_089C3008;
    }
L_089C3008:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(192)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C3018u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C3018u) goto L_089C3018;
    return;
L_089C3018:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[3] == aot_gpr[20]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(188)));
        goto L_089C304C;
    }
    goto L_089C3024;
L_089C3024:
    aot_gpr[19] = (0u + 0u);
    goto L_089C3028;
L_089C3028:
    aot_gpr[2] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C304C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C3058u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C3058u) goto L_089C3058;
    return;
L_089C3058:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(428), 0u);
    goto L_089C3028;
L_089C3060:
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(2));
    goto L_089C3028;
L_089C3068:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(236)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u | 54509u);
      if (branch_taken) {
          goto L_089C3088;
      }
      goto L_089C3080;
    }
L_089C3080:
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089C3088u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C3088u) goto L_089C3088;
    return;
L_089C3088:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C3094:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (2217u << 16u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2792)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C30D4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C30D4u) goto L_089C30D4;
    return;
L_089C30D4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089C30FC;
      }
      goto L_089C30E0;
    }
L_089C30E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_089C30E4;
L_089C30E4:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C30FC:
    aot_gpr[31] = (0x089C3104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 147u, 0x089C2BCCu>(ctx, &aot_mem) && ctx.pc == 0x089C3104u) goto L_089C3104;
    return;
L_089C3104:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[3] = (aot_gpr[6] << 6u);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[2] << 3u);
    aot_gpr[3] = (aot_gpr[6] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089C315C;
      }
      goto L_089C312C;
    }
L_089C312C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[6] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (aot_gpr[7] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(436)));
    aot_gpr[7] = (aot_gpr[18] + 0u);
    { const bool branch_taken = aot_gpr[17] != aot_gpr[3];
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C30E0;
      }
      goto L_089C314C;
    }
L_089C314C:
    aot_gpr[31] = (0x089C3154u);
    // nop
    goto L_089C3068;
L_089C3154:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_089C30E4;
L_089C315C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2792)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C316Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C316Cu) goto L_089C316C;
    return;
L_089C316C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C3188:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u | 54509u);
      if (branch_taken) {
          goto L_089C31A4;
      }
      goto L_089C319C;
    }
L_089C319C:
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089C31A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C31A4u) goto L_089C31A4;
    return;
L_089C31A4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C31B0:
    aot_gpr[7] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(3));
    goto L_089C3188;
L_089C31BC:
    aot_gpr[7] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(3));
    goto L_089C3188;
L_089C31C8:
    aot_gpr[7] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(3));
    goto L_089C3188;
L_089C31D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_089C3298;
      }
      goto L_089C3208;
    }
L_089C3208:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_089C3298;
      }
      goto L_089C3214;
    }
L_089C3214:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (0u + 0u);
      if (branch_taken) {
          goto L_089C324C;
      }
      goto L_089C3220;
    }
L_089C3220:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089C3224;
L_089C3224:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C324C:
    aot_gpr[18] = (0u + 0u);
    aot_gpr[22] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    goto L_089C3254;
L_089C3254:
    aot_gpr[16] = (aot_gpr[22] + aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C3264u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 106u, 0x0898F67Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3264u) goto L_089C3264;
    return;
L_089C3264:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(376)));
        goto L_089C3280;
    }
    goto L_089C326C;
L_089C326C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[3] == aot_gpr[2]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[19]);
        goto L_089C3220;
    }
    goto L_089C327C;
L_089C327C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(376)));
    goto L_089C3280;
L_089C3280:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[19] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089C3254;
      }
      goto L_089C3290;
    }
L_089C3290:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089C3224;
L_089C3298:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C32C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[8]);
      if (branch_taken) {
          goto L_089C34A4;
      }
      goto L_089C3308;
    }
L_089C3308:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_089C34A8;
    }
    goto L_089C331C;
L_089C331C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089C3338;
      }
      goto L_089C3324;
    }
L_089C3324:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089C34A4;
      }
      goto L_089C332C;
    }
L_089C332C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[30] = (0u + 0u);
      if (branch_taken) {
          goto L_089C336C;
      }
      goto L_089C3338;
    }
L_089C3338:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_089C333C;
L_089C333C:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C336C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089C3370;
L_089C3370:
    aot_gpr[5] = (aot_gpr[30] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089C3380u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 11u, 0x089C1154u>(ctx, &aot_mem) && ctx.pc == 0x089C3380u) goto L_089C3380;
    return;
L_089C3380:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[30] << 6u);
      if (branch_taken) {
          goto L_089C33C0;
      }
      goto L_089C3388;
    }
L_089C3388:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (0u + 0u);
    goto L_089C3390;
L_089C3390:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089C33A0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 106u, 0x0898F67Cu>(ctx, &aot_mem) && ctx.pc == 0x089C33A0u) goto L_089C33A0;
    return;
L_089C33A0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C33B4;
      }
      goto L_089C33A8;
    }
L_089C33A8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089C349C;
      }
      goto L_089C33B4;
    }
L_089C33B4:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[17];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089C3390;
      }
      goto L_089C33BC;
    }
L_089C33BC:
    aot_gpr[3] = (aot_gpr[30] << 6u);
    goto L_089C33C0;
L_089C33C0:
    aot_gpr[2] = (aot_gpr[30] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[30]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[22] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(376)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_089C345C;
    }
    goto L_089C33E8;
L_089C33E8:
    aot_gpr[21] = (0u + 0u);
    aot_gpr[20] = (0u + 0u);
    aot_gpr[23] = (aot_gpr[22] + static_cast<std::uint32_t>(16));
    goto L_089C33F4;
L_089C33F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[23] + aot_gpr[20]);
      if (branch_taken) {
          goto L_089C340C;
      }
      goto L_089C3400;
    }
L_089C3400:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
        goto L_089C344C;
    }
    goto L_089C340C;
L_089C340C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (0u + 0u);
    goto L_089C3414;
L_089C3414:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089C3424u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 106u, 0x0898F67Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3424u) goto L_089C3424;
    return;
L_089C3424:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C343C;
      }
      goto L_089C342C;
    }
L_089C342C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089C347C;
      }
      goto L_089C343C;
    }
L_089C343C:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[17];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089C3414;
      }
      goto L_089C3444;
    }
L_089C3444:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(376)));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    goto L_089C344C;
L_089C344C:
    aot_gpr[2] = (aot_gpr[21] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089C33F4;
      }
      goto L_089C3458;
    }
L_089C3458:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089C345C;
L_089C345C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[30] + static_cast<std::uint32_t>(1));
    aot_gpr[30] = (aot_gpr[3] & 65535u);
    aot_gpr[2] = (aot_gpr[30] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089C3370;
      }
      goto L_089C3474;
    }
L_089C3474:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_089C333C;
L_089C347C:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[30]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(376)));
    aot_gpr[2] = (aot_gpr[21] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089C33F4;
      }
      goto L_089C3494;
    }
L_089C3494:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089C345C;
L_089C349C:
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[30]));
    goto L_089C33BC;
L_089C34A4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_089C34A8;
L_089C34A8:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C34D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
      if (branch_taken) {
          goto L_089C3528;
      }
      goto L_089C3500;
    }
L_089C3500:
    aot_gpr[20] = (2217u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(52)));
    aot_gpr[6] = (aot_gpr[18] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C3520u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C3520u) goto L_089C3520;
    return;
L_089C3520:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089C3548;
      }
      goto L_089C3528;
    }
L_089C3528:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_089C352C;
L_089C352C:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C3548:
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089C355Cu);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    goto L_089C32C4;
L_089C355C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C3528;
      }
      goto L_089C3564;
    }
L_089C3564:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_089C352C;
      }
      goto L_089C3574;
    }
L_089C3574:
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[3] = (aot_gpr[5] << 6u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(436), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089C35A0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    goto L_089C31D4;
L_089C35A0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089C3528;
      }
      goto L_089C35A8;
    }
L_089C35A8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C35C4;
      }
      goto L_089C35B4;
    }
L_089C35B4:
    aot_gpr[31] = (0x089C35BCu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 185u, 0x089C2F4Cu>(ctx, &aot_mem) && ctx.pc == 0x089C35BCu) goto L_089C35BC;
    return;
L_089C35BC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_089C352C;
      }
      goto L_089C35C4;
    }
L_089C35C4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u | 65535u);
      if (branch_taken) {
          goto L_089C3634;
      }
      goto L_089C35D4;
    }
L_089C35D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089C35D8;
L_089C35D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(64)));
    goto L_089C35DC;
L_089C35DC:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C35E4u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C35E4u) goto L_089C35E4;
    return;
L_089C35E4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C35F4u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C35F4u) goto L_089C35F4;
    return;
L_089C35F4:
    if (aot_gpr[2] != 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
        goto L_089C352C;
    }
    goto L_089C35FC;
L_089C35FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C3614u);
    aot_gpr[6] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C3614u) goto L_089C3614;
    return;
L_089C3614:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C362Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C362Cu) goto L_089C362C;
    return;
L_089C362C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_089C352C;
L_089C3634:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C35D8;
      }
      goto L_089C363C;
    }
L_089C363C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(64)));
        goto L_089C35DC;
    }
    goto L_089C3648;
L_089C3648:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2792)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(244)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C3658u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C3658u) goto L_089C3658;
    return;
L_089C3658:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2792)));
    aot_gpr[5] = (aot_gpr[5] >> 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(248)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C3674u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C3674u) goto L_089C3674;
    return;
L_089C3674:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089C35D8;
L_089C367C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[11] = (0u | 54509u);
      if (branch_taken) {
          goto L_089C36EC;
      }
      goto L_089C3698;
    }
L_089C3698:
    aot_gpr[3] = (aot_gpr[5] << 6u);
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[5];
    aot_gpr[11] = (0u + 0u);
      if (branch_taken) {
          goto L_089C36EC;
      }
      goto L_089C36B8;
    }
L_089C36B8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-3));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[11] = (0u | 54003u);
      if (branch_taken) {
          goto L_089C36EC;
      }
      goto L_089C36D4;
    }
L_089C36D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C36EC;
      }
      goto L_089C36E0;
    }
L_089C36E0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(440)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (2217u << 16u);
        goto L_089C36F4;
    }
    goto L_089C36EC;
L_089C36EC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[11] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C36F4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(72)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C3708:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[19]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
      if (branch_taken) {
          goto L_089C3858;
      }
      goto L_089C372C;
    }
L_089C372C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (0u | 54509u);
      if (branch_taken) {
          goto L_089C3858;
      }
      goto L_089C3740;
    }
L_089C3740:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C3878;
      }
      goto L_089C374C;
    }
L_089C374C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089C3750;
L_089C3750:
    aot_gpr[18] = (0u + 0u);
    goto L_089C3754;
L_089C3754:
    aot_gpr[3] = (aot_gpr[7] << 6u);
    aot_gpr[2] = (aot_gpr[7] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[9] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[18];
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(23));
      if (branch_taken) {
          goto L_089C3854;
      }
      goto L_089C3778;
    }
L_089C3778:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089C3788u);
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089C3788u) goto L_089C3788;
    return;
L_089C3788:
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C3798u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089C3798u) goto L_089C3798;
    return;
L_089C3798:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[11] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[3]);
      if (branch_taken) {
          goto L_089C3854;
      }
      goto L_089C37C0;
    }
L_089C37C0:
    aot_gpr[18] = (0u + 0u);
    aot_gpr[16] = (0u + 0u);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(6));
    goto L_089C37E8;
L_089C37D0:
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089C37D4;
L_089C37D4:
    aot_gpr[2] = (aot_gpr[11] & 65535u);
    aot_gpr[16] = (aot_gpr[3] & 65535u);
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089C385C;
      }
      goto L_089C37E8;
    }
L_089C37E8:
    aot_gpr[3] = (aot_gpr[16] << 6u);
    aot_gpr[2] = (aot_gpr[16] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-3));
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C37D4;
      }
      goto L_089C3818;
    }
L_089C3818:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u | 61440u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[19];
    aot_gpr[10] = (0u + 0u);
      if (branch_taken) {
          goto L_089C37D4;
      }
      goto L_089C383C;
    }
L_089C383C:
    aot_gpr[31] = (0x089C3844u);
    // nop
    goto L_089C367C;
L_089C3844:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089C38CC;
      }
      goto L_089C384C;
    }
L_089C384C:
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089C37D4;
L_089C3854:
    aot_gpr[18] = (0u + 0u);
    goto L_089C3858;
L_089C3858:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    goto L_089C385C;
L_089C385C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C3878:
    if (aot_gpr[6] == 0u) {
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_089C3750;
    }
    goto L_089C3880;
L_089C3880:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (0u + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[4] = (aot_gpr[9] + 0u);
    goto L_089C389C;
L_089C3894:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[5];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089C3754;
      }
      goto L_089C389C;
    }
L_089C389C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-3));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[3] & 65535u);
      if (branch_taken) {
          goto L_089C3894;
      }
      goto L_089C38B4;
    }
L_089C38B4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[8] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C3894;
      }
      goto L_089C38C4;
    }
L_089C38C4:
    aot_gpr[18] = (aot_gpr[8] & 65535u);
    goto L_089C3894;
L_089C38CC:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    goto L_089C37D0;
L_089C38D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    aot_gpr[7] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[8] = (aot_gpr[29] + 0u);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[16] = (aot_gpr[5] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[31]);
    aot_gpr[31] = (0x089C391Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 13u, 0x089CC0F0u>(ctx, &aot_mem) && ctx.pc == 0x089C391Cu) goto L_089C391C;
    return;
L_089C391C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u | 61440u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[10] = (0u + 0u);
      if (branch_taken) {
          goto L_089C3964;
      }
      goto L_089C393C;
    }
L_089C393C:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[3] = (aot_gpr[11] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_gpr[31] = (0x089C3964u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[11]);
    goto L_089C367C;
L_089C3964:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C3984:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[7] = (aot_gpr[19] + 0u);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x089C39C4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 13u, 0x089CC0F0u>(ctx, &aot_mem) && ctx.pc == 0x089C39C4u) goto L_089C39C4;
    return;
L_089C39C4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C39E4;
      }
      goto L_089C39CC;
    }
L_089C39CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[5] == aot_gpr[2]) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_089C3A98;
    }
    goto L_089C39DC;
L_089C39DC:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089C3A04;
      }
      goto L_089C39E4;
    }
L_089C39E4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C3A04:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089C3A18u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0454_entry, 454u, 5u, 0x089CA090u>(ctx, &aot_mem) && ctx.pc == 0x089C3A18u) goto L_089C3A18;
    return;
L_089C3A18:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C39E4;
      }
      goto L_089C3A20;
    }
L_089C3A20:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(22)));
        goto L_089C3A84;
    }
    goto L_089C3A34;
L_089C3A34:
    aot_gpr[3] = (aot_gpr[5] << 6u);
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(436)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(22)));
        goto L_089C3A84;
    }
    goto L_089C3A5C;
L_089C3A5C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089C3A60;
L_089C3A60:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[8] = (aot_gpr[18] - aot_gpr[7]);
    aot_gpr[31] = (0x089C3A74u);
    aot_gpr[7] = (aot_gpr[17] + aot_gpr[7]);
    goto L_089C38D4;
L_089C3A74:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C39E4;
      }
      goto L_089C3A7C;
    }
L_089C3A7C:
    aot_gpr[3] = (0u + 0u);
    goto L_089C39E4;
L_089C3A84:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[5];
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089C3A60;
      }
      goto L_089C3A90;
    }
L_089C3A90:
    aot_gpr[3] = (0u + 0u);
    goto L_089C39E4;
L_089C3A98:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(10)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[18] - aot_gpr[6]);
    aot_gpr[31] = (0x089C3AACu);
    aot_gpr[6] = (aot_gpr[17] + aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0454_entry, 454u, 190u, 0x089CAC5Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3AACu) goto L_089C3AAC;
    return;
L_089C3AAC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C39E4;
      }
      goto L_089C3AB4;
    }
L_089C3AB4:
    aot_gpr[3] = (0u + 0u);
    goto L_089C39E4;
L_089C3BE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(6));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (aot_gpr[2] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[31] = (0x089C3C18u);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089C3C18u) goto L_089C3C18;
    return;
L_089C3C18:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[19]));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[8] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[31] = (0x089C3C40u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(22)));
    goto L_089C38D4;
L_089C3C40:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C3C5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    aot_gpr[2] = (aot_gpr[9] + static_cast<std::uint32_t>(6));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (aot_gpr[2] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(14));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] & 65535u);
    aot_gpr[31] = (0x089C3CB0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089C3CB0u) goto L_089C3CB0;
    return;
L_089C3CB0:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[17]));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[31] = (0x089C3CE4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 13u, 0x089CC0F0u>(ctx, &aot_mem) && ctx.pc == 0x089C3CE4u) goto L_089C3CE4;
    return;
L_089C3CE4:
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[8] = (aot_gpr[18] + 0u);
    aot_gpr[9] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089C3D44;
      }
      goto L_089C3CF8;
    }
L_089C3CF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C3D44u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C3D44u) goto L_089C3D44;
    return;
L_089C3D44:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C3D70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(10));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_089C3DE0;
      }
      goto L_089C3DB8;
    }
L_089C3DB8:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C3DE0:
    aot_gpr[31] = (0x089C3DE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089C3DE8u) goto L_089C3DE8;
    return;
L_089C3DE8:
    aot_gpr[4] = (aot_gpr[16] << 6u);
    aot_gpr[3] = (aot_gpr[16] << 3u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[19] = (aot_gpr[3] << 3u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[16]));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(468)));
    aot_gpr[8] = (aot_gpr[29] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089C3E2Cu);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0455_entry, 455u, 186u, 0x089CBD6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3E2Cu) goto L_089C3E2C;
    return;
L_089C3E2C:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089C3DB8;
      }
      goto L_089C3E3C;
    }
L_089C3E3C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[21]);
    aot_gpr[3] = (aot_gpr[19] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(200)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C3E70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C3E70u) goto L_089C3E70;
    return;
L_089C3E70:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[3] = (aot_gpr[19] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C3EA4:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_gpr[5]))));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[5] << 1u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[8] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[14] = (aot_gpr[8] + 0u);
    aot_gpr[13] = (aot_gpr[8] + static_cast<std::uint32_t>(3));
    aot_gpr[15] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
    goto L_089C3EC8;
L_089C3EC8:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[15];
    // nop
      if (branch_taken) {
          goto L_089C3EE4;
      }
      goto L_089C3ED0;
    }
L_089C3ED0:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    goto L_089C3ED4;
L_089C3ED4:
    if (aot_gpr[13] != aot_gpr[8]) {
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
        goto L_089C3EC8;
    }
    goto L_089C3EDC;
L_089C3EDC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C3EE4:
    if (static_cast<std::int32_t>(aot_gpr[5]) <= 0) {
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
        goto L_089C3ED4;
    }
    goto L_089C3EEC;
L_089C3EEC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[9] = (0u + 0u);
    goto L_089C3EF4;
L_089C3EF4:
    { const bool branch_taken = aot_gpr[14] == aot_gpr[3];
    aot_gpr[2] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C3F38;
      }
      goto L_089C3EFC;
    }
L_089C3EFC:
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (0u + 0u);
    aot_gpr[12] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[11] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[2] = (aot_gpr[7] + aot_gpr[3]);
    goto L_089C3F10;
L_089C3F10:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[12];
    // nop
      if (branch_taken) {
          goto L_089C3F4C;
      }
      goto L_089C3F1C;
    }
L_089C3F1C:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C3F38;
      }
      goto L_089C3F24;
    }
L_089C3F24:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    goto L_089C3F28;
L_089C3F28:
    { const bool branch_taken = aot_gpr[7] != aot_gpr[11];
    aot_gpr[2] = (aot_gpr[7] + aot_gpr[3]);
      if (branch_taken) {
          goto L_089C3F10;
      }
      goto L_089C3F30;
    }
L_089C3F30:
    { const bool branch_taken = aot_gpr[10] != aot_gpr[15];
    aot_gpr[2] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C3F5C;
      }
      goto L_089C3F38;
    }
L_089C3F38:
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_gpr[2]))));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[9];
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089C3EF4;
      }
      goto L_089C3F44;
    }
L_089C3F44:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    goto L_089C3ED4;
L_089C3F4C:
    if (aot_gpr[10] == aot_gpr[2]) {
    aot_gpr[10] = (aot_gpr[7] + 0u);
        goto L_089C3F24;
    }
    goto L_089C3F54;
L_089C3F54:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    goto L_089C3F28;
L_089C3F5C:
    aot_gpr[3] = (aot_gpr[10] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_089C3ED0;
L_089C3F78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[21] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[19] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089C3FEC;
      }
      goto L_089C3FB8;
    }
L_089C3FB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[5] = (0u + 0u);
    goto L_089C3FC4;
L_089C3FC4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
        goto L_089C3FE0;
    }
    goto L_089C3FD0;
L_089C3FD0:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[2] = (aot_gpr[3] & 65535u);
      if (branch_taken) {
          goto L_089C3FF0;
      }
      goto L_089C3FD8;
    }
L_089C3FD8:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089C3FE0;
L_089C3FE0:
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C3FC4;
      }
      goto L_089C3FEC;
    }
L_089C3FEC:
    aot_gpr[2] = (0u | 65535u);
    goto L_089C3FF0;
L_089C3FF0:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (aot_gpr[2] & 65535u);
    aot_gpr[2] = (aot_gpr[18] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0448_entry, 448u, 18u, 0x089C40B0u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0448_entry, 448u, 1u, 0x089C4004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0447(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0447_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_447(Runtime &runtime) {
    runtime.register_generated_unit(447u, 0x089C3000u, 4096u, &recomp_unit_0447, &recomp_unit_0447_entry);
    runtime.register_function(0x089C3000u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3008u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3018u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3024u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3028u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C304Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3058u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3060u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3068u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3080u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3088u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3094u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C30D4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C30E0u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C30E4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C30FCu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3104u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C312Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C314Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3154u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C315Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C316Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3188u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C319Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C31A4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C31B0u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C31BCu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C31C8u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C31D4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3208u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3214u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3220u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3224u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C324Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3254u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3264u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C326Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C327Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3280u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3290u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3298u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C32C4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3308u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C331Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3324u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C332Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3338u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C333Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C336Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3370u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3380u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3388u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3390u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C33A0u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C33A8u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C33B4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C33BCu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C33C0u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C33E8u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C33F4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3400u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C340Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3414u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3424u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C342Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C343Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3444u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C344Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3458u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C345Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3474u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C347Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3494u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C349Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C34A4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C34A8u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C34D8u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3500u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3520u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3528u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C352Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3548u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C355Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3564u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3574u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C35A0u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C35A8u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C35B4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C35BCu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C35C4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C35D4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C35D8u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C35DCu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C35E4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C35F4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C35FCu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3614u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C362Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3634u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C363Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3648u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3658u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3674u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C367Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3698u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C36B8u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C36D4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C36E0u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C36ECu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C36F4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3708u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C372Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3740u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C374Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3750u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3754u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3778u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3788u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3798u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C37C0u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C37D0u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C37D4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C37E8u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3818u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C383Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3844u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C384Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3854u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3858u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C385Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3878u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3880u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3894u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C389Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C38B4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C38C4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C38CCu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C38D4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C391Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C393Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3964u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3984u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C39C4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C39CCu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C39DCu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C39E4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3A04u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3A18u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3A20u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3A34u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3A5Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3A60u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3A74u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3A7Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3A84u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3A90u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3A98u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3AACu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3AB4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3BE0u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3C18u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3C40u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3C5Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3CB0u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3CE4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3CF8u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3D44u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3D70u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3DB8u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3DE0u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3DE8u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3E2Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3E3Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3E70u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3EA4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3EC8u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3ED0u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3ED4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3EDCu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3EE4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3EECu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3EF4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3EFCu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3F10u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3F1Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3F24u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3F28u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3F30u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3F38u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3F44u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3F4Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3F54u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3F5Cu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3F78u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3FB8u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3FC4u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3FD0u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3FD8u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3FE0u, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3FECu, &recomp_unit_0447, "recomp_unit_0447");
    runtime.register_function(0x089C3FF0u, &recomp_unit_0447, "recomp_unit_0447");
}
} // namespace psprecomp
