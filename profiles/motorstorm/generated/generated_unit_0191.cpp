#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0191[1024] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 6, 7, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 13, 0, 14, 15, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0,
    20, 0, 21, 0, 0, 0, 22, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 34, 0, 0, 0, 35, 0,
    36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    42, 0, 43, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 54, 0, 55, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 62, 0, 63, 0, 64, 65, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 72, 0, 73, 0, 0, 0, 0, 74,
    0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 79, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 83,
    0, 0, 84, 0, 85, 0, 0, 0, 0, 86, 0, 87, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 92,
    0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    98, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105,
    0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 0, 0, 112, 0, 113, 0, 0, 0, 114, 0,
    115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 125, 0, 0, 0, 126, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 130,
    0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0,
    137, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 144,
    0, 145, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 150, 0, 151, 0, 152, 0, 153, 0, 0, 154, 155, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160,
    0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 167, 0, 0, 0, 168, 0, 169, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 176,
    0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 183, 0, 184, 0, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 188,
    0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 202,
    0, 203, 0, 204, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 211, 0, 212, 0, 0,
    0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 219, 0, 0, 220, 0, 0,
    221, 0, 0, 0, 222, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 0, 226, 0, 227, 0, 0, 0, 228, 0, 0, 229, 230, 0, 231, 0, 0, 232,
};
void recomp_unit_0191_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088C3000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0191[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088C3000;
    case 2u: goto L_088C300C;
    case 3u: goto L_088C3024;
    case 4u: goto L_088C302C;
    case 5u: goto L_088C303C;
    case 6u: goto L_088C3050;
    case 7u: goto L_088C3054;
    case 8u: goto L_088C305C;
    case 9u: goto L_088C3070;
    case 10u: goto L_088C30A4;
    case 11u: goto L_088C30D0;
    case 12u: goto L_088C3100;
    case 13u: goto L_088C310C;
    case 14u: goto L_088C3114;
    case 15u: goto L_088C3118;
    case 16u: goto L_088C3128;
    case 17u: goto L_088C313C;
    case 18u: goto L_088C3164;
    case 19u: goto L_088C3174;
    case 20u: goto L_088C3180;
    case 21u: goto L_088C3188;
    case 22u: goto L_088C3198;
    case 23u: goto L_088C31A0;
    case 24u: goto L_088C31AC;
    case 25u: goto L_088C31C8;
    case 26u: goto L_088C31E8;
    case 27u: goto L_088C31F0;
    case 28u: goto L_088C3214;
    case 29u: goto L_088C321C;
    case 30u: goto L_088C323C;
    case 31u: goto L_088C324C;
    case 32u: goto L_088C3254;
    case 33u: goto L_088C325C;
    case 34u: goto L_088C3268;
    case 35u: goto L_088C3278;
    case 36u: goto L_088C3280;
    case 37u: goto L_088C328C;
    case 38u: goto L_088C32B0;
    case 39u: goto L_088C32C0;
    case 40u: goto L_088C32C8;
    case 41u: goto L_088C32E0;
    case 42u: goto L_088C3300;
    case 43u: goto L_088C3308;
    case 44u: goto L_088C3310;
    case 45u: goto L_088C3324;
    case 46u: goto L_088C3338;
    case 47u: goto L_088C3348;
    case 48u: goto L_088C3354;
    case 49u: goto L_088C3388;
    case 50u: goto L_088C33C4;
    case 51u: goto L_088C33D8;
    case 52u: goto L_088C33E0;
    case 53u: goto L_088C33F0;
    case 54u: goto L_088C3408;
    case 55u: goto L_088C3410;
    case 56u: goto L_088C3424;
    case 57u: goto L_088C342C;
    case 58u: goto L_088C3460;
    case 59u: goto L_088C3468;
    case 60u: goto L_088C349C;
    case 61u: goto L_088C34A4;
    case 62u: goto L_088C34B8;
    case 63u: goto L_088C34C0;
    case 64u: goto L_088C34C8;
    case 65u: goto L_088C34CC;
    case 66u: goto L_088C34D4;
    case 67u: goto L_088C34DC;
    case 68u: goto L_088C350C;
    case 69u: goto L_088C3514;
    case 70u: goto L_088C3544;
    case 71u: goto L_088C3554;
    case 72u: goto L_088C3560;
    case 73u: goto L_088C3568;
    case 74u: goto L_088C357C;
    case 75u: goto L_088C3584;
    case 76u: goto L_088C359C;
    case 77u: goto L_088C35A8;
    case 78u: goto L_088C35B4;
    case 79u: goto L_088C35BC;
    case 80u: goto L_088C35D0;
    case 81u: goto L_088C35D8;
    case 82u: goto L_088C35F0;
    case 83u: goto L_088C35FC;
    case 84u: goto L_088C3608;
    case 85u: goto L_088C3610;
    case 86u: goto L_088C3624;
    case 87u: goto L_088C362C;
    case 88u: goto L_088C3638;
    case 89u: goto L_088C3640;
    case 90u: goto L_088C366C;
    case 91u: goto L_088C3674;
    case 92u: goto L_088C367C;
    case 93u: goto L_088C3690;
    case 94u: goto L_088C3698;
    case 95u: goto L_088C36C0;
    case 96u: goto L_088C36C8;
    case 97u: goto L_088C36D4;
    case 98u: goto L_088C3700;
    case 99u: goto L_088C3708;
    case 100u: goto L_088C371C;
    case 101u: goto L_088C372C;
    case 102u: goto L_088C3744;
    case 103u: goto L_088C3754;
    case 104u: goto L_088C3760;
    case 105u: goto L_088C377C;
    case 106u: goto L_088C379C;
    case 107u: goto L_088C37B0;
    case 108u: goto L_088C37B8;
    case 109u: goto L_088C37C0;
    case 110u: goto L_088C37C8;
    case 111u: goto L_088C37D0;
    case 112u: goto L_088C37E0;
    case 113u: goto L_088C37E8;
    case 114u: goto L_088C37F8;
    case 115u: goto L_088C3800;
    case 116u: goto L_088C3810;
    case 117u: goto L_088C3828;
    case 118u: goto L_088C3834;
    case 119u: goto L_088C3840;
    case 120u: goto L_088C3848;
    case 121u: goto L_088C3850;
    case 122u: goto L_088C3884;
    case 123u: goto L_088C38A8;
    case 124u: goto L_088C38B8;
    case 125u: goto L_088C38C0;
    case 126u: goto L_088C38D0;
    case 127u: goto L_088C38D8;
    case 128u: goto L_088C38E4;
    case 129u: goto L_088C38F0;
    case 130u: goto L_088C38FC;
    case 131u: goto L_088C391C;
    case 132u: goto L_088C3924;
    case 133u: goto L_088C3934;
    case 134u: goto L_088C3954;
    case 135u: goto L_088C3960;
    case 136u: goto L_088C3974;
    case 137u: goto L_088C3980;
    case 138u: goto L_088C398C;
    case 139u: goto L_088C3994;
    case 140u: goto L_088C39B4;
    case 141u: goto L_088C39D0;
    case 142u: goto L_088C39D8;
    case 143u: goto L_088C39E0;
    case 144u: goto L_088C39FC;
    case 145u: goto L_088C3A04;
    case 146u: goto L_088C3A0C;
    case 147u: goto L_088C3A20;
    case 148u: goto L_088C3A34;
    case 149u: goto L_088C3A48;
    case 150u: goto L_088C3A50;
    case 151u: goto L_088C3A58;
    case 152u: goto L_088C3A60;
    case 153u: goto L_088C3A68;
    case 154u: goto L_088C3A74;
    case 155u: goto L_088C3A78;
    case 156u: goto L_088C3AB4;
    case 157u: goto L_088C3ABC;
    case 158u: goto L_088C3ADC;
    case 159u: goto L_088C3AEC;
    case 160u: goto L_088C3AFC;
    case 161u: goto L_088C3B18;
    case 162u: goto L_088C3B24;
    case 163u: goto L_088C3B30;
    case 164u: goto L_088C3B44;
    case 165u: goto L_088C3B58;
    case 166u: goto L_088C3B60;
    case 167u: goto L_088C3B88;
    case 168u: goto L_088C3B98;
    case 169u: goto L_088C3BA0;
    case 170u: goto L_088C3BA4;
    case 171u: goto L_088C3BC8;
    case 172u: goto L_088C3BD8;
    case 173u: goto L_088C3BF8;
    case 174u: goto L_088C3C58;
    case 175u: goto L_088C3C6C;
    case 176u: goto L_088C3C7C;
    case 177u: goto L_088C3C90;
    case 178u: goto L_088C3C9C;
    case 179u: goto L_088C3CAC;
    case 180u: goto L_088C3D04;
    case 181u: goto L_088C3D20;
    case 182u: goto L_088C3D30;
    case 183u: goto L_088C3D38;
    case 184u: goto L_088C3D40;
    case 185u: goto L_088C3D50;
    case 186u: goto L_088C3D5C;
    case 187u: goto L_088C3D68;
    case 188u: goto L_088C3D7C;
    case 189u: goto L_088C3D84;
    case 190u: goto L_088C3D8C;
    case 191u: goto L_088C3D94;
    case 192u: goto L_088C3D9C;
    case 193u: goto L_088C3DA4;
    case 194u: goto L_088C3DAC;
    case 195u: goto L_088C3DC4;
    case 196u: goto L_088C3E28;
    case 197u: goto L_088C3E34;
    case 198u: goto L_088C3E40;
    case 199u: goto L_088C3E58;
    case 200u: goto L_088C3E64;
    case 201u: goto L_088C3E70;
    case 202u: goto L_088C3E7C;
    case 203u: goto L_088C3E84;
    case 204u: goto L_088C3E8C;
    case 205u: goto L_088C3EA0;
    case 206u: goto L_088C3EAC;
    case 207u: goto L_088C3EBC;
    case 208u: goto L_088C3ECC;
    case 209u: goto L_088C3ED8;
    case 210u: goto L_088C3EE4;
    case 211u: goto L_088C3EEC;
    case 212u: goto L_088C3EF4;
    case 213u: goto L_088C3F08;
    case 214u: goto L_088C3F18;
    case 215u: goto L_088C3F28;
    case 216u: goto L_088C3F38;
    case 217u: goto L_088C3F54;
    case 218u: goto L_088C3F60;
    case 219u: goto L_088C3F68;
    case 220u: goto L_088C3F74;
    case 221u: goto L_088C3F80;
    case 222u: goto L_088C3F90;
    case 223u: goto L_088C3F98;
    case 224u: goto L_088C3FA4;
    case 225u: goto L_088C3FB0;
    case 226u: goto L_088C3FC0;
    case 227u: goto L_088C3FC8;
    case 228u: goto L_088C3FD8;
    case 229u: goto L_088C3FE4;
    case 230u: goto L_088C3FE8;
    case 231u: goto L_088C3FF0;
    case 232u: goto L_088C3FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088C3000:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(24760));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (2216u << 16u);
      if (branch_taken) {
          goto L_088C302C;
      }
      goto L_088C300C;
    }
L_088C300C:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-29080), aot_gpr[4]);
    aot_gpr[4] = (16799u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 55050u);
    aot_gpr[31] = (0x088C3024u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0279_entry, 279u, 192u, 0x0891BF0Cu>(ctx, &aot_mem) && ctx.pc == 0x088C3024u) goto L_088C3024;
    return;
L_088C3024:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_088C3054;
      }
      goto L_088C302C;
    }
L_088C302C:
    aot_gpr[4] = (16879u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 49807u);
    aot_gpr[31] = (0x088C303Cu);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0279_entry, 279u, 192u, 0x0891BF0Cu>(ctx, &aot_mem) && ctx.pc == 0x088C303Cu) goto L_088C303C;
    return;
L_088C303C:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-29080), aot_gpr[4]);
    aot_gpr[4] = (0u | 333u);
    aot_gpr[31] = (0x088C3050u);
    aot_gpr[5] = (0u | 166u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 149u, 0x08943A90u>(ctx, &aot_mem) && ctx.pc == 0x088C3050u) goto L_088C3050;
    return;
L_088C3050:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_088C3054;
L_088C3054:
    aot_gpr[31] = (0x088C305Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C305Cu) goto L_088C305C;
    return;
L_088C305C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3070:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x088C30A4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(31520));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 31u, 0x088111ECu>(ctx, &aot_mem) && ctx.pc == 0x088C30A4u) goto L_088C30A4;
    return;
L_088C30A4:
    aot_gpr[20] = (0u | 1u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(25548), static_cast<std::uint8_t>(aot_gpr[20]));
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24760));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(64)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[31] = (0x088C30D0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(28648), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 30u, 0x0891D23Cu>(ctx, &aot_mem) && ctx.pc == 0x088C30D0u) goto L_088C30D0;
    return;
L_088C30D0:
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-30480)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-30480), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088C3100u);
    aot_gpr[6] = (0u | 52u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C3100u) goto L_088C3100;
    return;
L_088C3100:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3118;
      }
      goto L_088C310C;
    }
L_088C310C:
    aot_gpr[31] = (0x088C3114u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 155u, 0x08885EF4u>(ctx, &aot_mem) && ctx.pc == 0x088C3114u) goto L_088C3114;
    return;
L_088C3114:
    aot_gpr[16] = (aot_gpr[21] | 0u);
    goto L_088C3118;
L_088C3118:
    aot_gpr[21] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-30480), aot_gpr[17]);
    aot_gpr[31] = (0x088C3128u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 125u, 0x08885CF4u>(ctx, &aot_mem) && ctx.pc == 0x088C3128u) goto L_088C3128;
    return;
L_088C3128:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (65409u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28792)));
    aot_gpr[31] = (0x088C313Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-32640));
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 55u, 0x08945B58u>(ctx, &aot_mem) && ctx.pc == 0x088C313Cu) goto L_088C313C;
    return;
L_088C313C:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-7292), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7296), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7300), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088C3164u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-7291), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 27u, 0x0881118Cu>(ctx, &aot_mem) && ctx.pc == 0x088C3164u) goto L_088C3164;
    return;
L_088C3164:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C3180;
      }
      goto L_088C3174;
    }
L_088C3174:
    aot_gpr[4] = (0u | 333u);
    aot_gpr[31] = (0x088C3180u);
    aot_gpr[5] = (0u | 166u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 149u, 0x08943A90u>(ctx, &aot_mem) && ctx.pc == 0x088C3180u) goto L_088C3180;
    return;
L_088C3180:
    aot_gpr[31] = (0x088C3188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 43u, 0x0886F3A4u>(ctx, &aot_mem) && ctx.pc == 0x088C3188u) goto L_088C3188;
    return;
L_088C3188:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(3492), static_cast<std::uint8_t>(aot_gpr[20]));
    aot_gpr[31] = (0x088C3198u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 137u, 0x08885DACu>(ctx, &aot_mem) && ctx.pc == 0x088C3198u) goto L_088C3198;
    return;
L_088C3198:
    aot_gpr[31] = (0x088C31A0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 30u, 0x0891D23Cu>(ctx, &aot_mem) && ctx.pc == 0x088C31A0u) goto L_088C31A0;
    return;
L_088C31A0:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-30480), aot_gpr[2]);
      if (branch_taken) {
          goto L_088C31C8;
      }
      goto L_088C31AC;
    }
L_088C31AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088C31C8u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C31C8u) goto L_088C31C8;
    return;
L_088C31C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-30480), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(aot_gpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31532));
    aot_gpr[31] = (0x088C31E8u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 48u, 0x0891C310u>(ctx, &aot_mem) && ctx.pc == 0x088C31E8u) goto L_088C31E8;
    return;
L_088C31E8:
    aot_gpr[31] = (0x088C31F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 165u, 0x08931FC0u>(ctx, &aot_mem) && ctx.pc == 0x088C31F0u) goto L_088C31F0;
    return;
L_088C31F0:
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
L_088C3214:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C321C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28480), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C323C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C324Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 197u, 0x08810D44u>(ctx, &aot_mem) && ctx.pc == 0x088C324Cu) goto L_088C324C;
    return;
L_088C324C:
    aot_gpr[31] = (0x088C3254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 110u, 0x088798BCu>(ctx, &aot_mem) && ctx.pc == 0x088C3254u) goto L_088C3254;
    return;
L_088C3254:
    aot_gpr[31] = (0x088C325Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 9u, 0x0886E088u>(ctx, &aot_mem) && ctx.pc == 0x088C325Cu) goto L_088C325C;
    return;
L_088C325C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3268:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C3278u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 163u, 0x0886DB64u>(ctx, &aot_mem) && ctx.pc == 0x088C3278u) goto L_088C3278;
    return;
L_088C3278:
    aot_gpr[31] = (0x088C3280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 222u, 0x08810F24u>(ctx, &aot_mem) && ctx.pc == 0x088C3280u) goto L_088C3280;
    return;
L_088C3280:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C328C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C32C8;
      }
      goto L_088C32B0;
    }
L_088C32B0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[31] = (0x088C32C0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C32C0u) goto L_088C32C0;
    return;
L_088C32C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3338;
      }
      goto L_088C32C8;
    }
L_088C32C8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6976));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(22))))));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3338;
      }
      goto L_088C32E0;
    }
L_088C32E0:
    aot_gpr[4] = (0u | 13u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24848), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    aot_gpr[16] = (2215u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(24760));
      if (branch_taken) {
          goto L_088C3310;
      }
      goto L_088C3300;
    }
L_088C3300:
    aot_gpr[31] = (0x088C3308u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C3308u) goto L_088C3308;
    return;
L_088C3308:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3338;
      }
      goto L_088C3310;
    }
L_088C3310:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088C3324u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31552));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088C3324u) goto L_088C3324;
    return;
L_088C3324:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(5252), aot_gpr[2]);
    aot_gpr[31] = (0x088C3338u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C3338u) goto L_088C3338;
    return;
L_088C3338:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3348:
    aot_gpr[5] = (0u | 1u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3354:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(32504), static_cast<std::uint8_t>(aot_gpr[18]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (2218u << 16u);
      if (branch_taken) {
          goto L_088C371C;
      }
      goto L_088C3388;
    }
L_088C3388:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-7292), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7296), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7300), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-7291), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[19] ^ 1u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C33E0;
      }
      goto L_088C33C4;
    }
L_088C33C4:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088C33D8u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 43u, 0x088B02E8u>(ctx, &aot_mem) && ctx.pc == 0x088C33D8u) goto L_088C33D8;
    return;
L_088C33D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3708;
      }
      goto L_088C33E0;
    }
L_088C33E0:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3708;
      }
      goto L_088C33F0;
    }
L_088C33F0:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(31568)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3408:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3708;
      }
      goto L_088C3410;
    }
L_088C3410:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x088C3424u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 43u, 0x088B02E8u>(ctx, &aot_mem) && ctx.pc == 0x088C3424u) goto L_088C3424;
    return;
L_088C3424:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3708;
      }
      goto L_088C342C;
    }
L_088C342C:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 11u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 15u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x088C3460u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 43u, 0x088B02E8u>(ctx, &aot_mem) && ctx.pc == 0x088C3460u) goto L_088C3460;
    return;
L_088C3460:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3708;
      }
      goto L_088C3468;
    }
L_088C3468:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 11u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 15u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x088C349Cu);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 43u, 0x088B02E8u>(ctx, &aot_mem) && ctx.pc == 0x088C349Cu) goto L_088C349C;
    return;
L_088C349C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3708;
      }
      goto L_088C34A4;
    }
L_088C34A4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2072)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C34CC;
      }
      goto L_088C34B8;
    }
L_088C34B8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088C3674;
      }
      goto L_088C34C0;
    }
L_088C34C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088C3514;
      }
      goto L_088C34C8;
    }
L_088C34C8:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    goto L_088C34CC;
L_088C34CC:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C3640;
      }
      goto L_088C34D4;
    }
L_088C34D4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_088C3674;
      }
      goto L_088C34DC;
    }
L_088C34DC:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 19u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 7u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x088C350Cu);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 43u, 0x088B02E8u>(ctx, &aot_mem) && ctx.pc == 0x088C350Cu) goto L_088C350C;
    return;
L_088C350C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3674;
      }
      goto L_088C3514;
    }
L_088C3514:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 7u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (aot_gpr[19] ^ 4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C3584;
      }
      goto L_088C3544;
    }
L_088C3544:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2272)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088C3584;
      }
      goto L_088C3554;
    }
L_088C3554:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[31] = (0x088C3560u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 81u, 0x0887447Cu>(ctx, &aot_mem) && ctx.pc == 0x088C3560u) goto L_088C3560;
    return;
L_088C3560:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3584;
      }
      goto L_088C3568;
    }
L_088C3568:
    aot_gpr[4] = (0u | 14u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088C357Cu);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 43u, 0x088B02E8u>(ctx, &aot_mem) && ctx.pc == 0x088C357Cu) goto L_088C357C;
    return;
L_088C357C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3638;
      }
      goto L_088C3584;
    }
L_088C3584:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] ^ 4u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088C35D8;
      }
      goto L_088C359C;
    }
L_088C359C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088C35D8;
      }
      goto L_088C35A8;
    }
L_088C35A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[31] = (0x088C35B4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 92u, 0x08874504u>(ctx, &aot_mem) && ctx.pc == 0x088C35B4u) goto L_088C35B4;
    return;
L_088C35B4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C35D8;
      }
      goto L_088C35BC;
    }
L_088C35BC:
    aot_gpr[4] = (0u | 20u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088C35D0u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 43u, 0x088B02E8u>(ctx, &aot_mem) && ctx.pc == 0x088C35D0u) goto L_088C35D0;
    return;
L_088C35D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3638;
      }
      goto L_088C35D8;
    }
L_088C35D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] ^ 4u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088C362C;
      }
      goto L_088C35F0;
    }
L_088C35F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2280)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088C362C;
      }
      goto L_088C35FC;
    }
L_088C35FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[31] = (0x088C3608u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 103u, 0x0887458Cu>(ctx, &aot_mem) && ctx.pc == 0x088C3608u) goto L_088C3608;
    return;
L_088C3608:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C362C;
      }
      goto L_088C3610;
    }
L_088C3610:
    aot_gpr[4] = (0u | 21u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088C3624u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 43u, 0x088B02E8u>(ctx, &aot_mem) && ctx.pc == 0x088C3624u) goto L_088C3624;
    return;
L_088C3624:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3638;
      }
      goto L_088C362C;
    }
L_088C362C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088C3638u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 43u, 0x088B02E8u>(ctx, &aot_mem) && ctx.pc == 0x088C3638u) goto L_088C3638;
    return;
L_088C3638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3674;
      }
      goto L_088C3640;
    }
L_088C3640:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 12u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 13u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x088C366Cu);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 43u, 0x088B02E8u>(ctx, &aot_mem) && ctx.pc == 0x088C366Cu) goto L_088C366C;
    return;
L_088C366C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3674;
      }
      goto L_088C3674;
    }
L_088C3674:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3708;
      }
      goto L_088C367C;
    }
L_088C367C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2072)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088C36C8;
      }
      goto L_088C3690;
    }
L_088C3690:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088C3708;
      }
      goto L_088C3698;
    }
L_088C3698:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 7u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x088C36C0u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 43u, 0x088B02E8u>(ctx, &aot_mem) && ctx.pc == 0x088C36C0u) goto L_088C36C0;
    return;
L_088C36C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3708;
      }
      goto L_088C36C8;
    }
L_088C36C8:
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    aot_gpr[5] = (0u | 10u);
      if (branch_taken) {
          goto L_088C3708;
      }
      goto L_088C36D4;
    }
L_088C36D4:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (0u | 19u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (0u | 7u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x088C3700u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 43u, 0x088B02E8u>(ctx, &aot_mem) && ctx.pc == 0x088C3700u) goto L_088C3700;
    return;
L_088C3700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3708;
      }
      goto L_088C3708;
    }
L_088C3708:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(28037), static_cast<std::uint8_t>(aot_gpr[18]));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(28036), static_cast<std::uint8_t>(aot_gpr[18]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    goto L_088C371C;
L_088C371C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[31] = (0x088C372Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 89u, 0x088DC6DCu>(ctx, &aot_mem) && ctx.pc == 0x088C372Cu) goto L_088C372C;
    return;
L_088C372C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[19] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[19] ^ 7u);
      if (branch_taken) {
          goto L_088C3760;
      }
      goto L_088C3744;
    }
L_088C3744:
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C3760;
      }
      goto L_088C3754;
    }
L_088C3754:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7504));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[18]));
    goto L_088C3760;
L_088C3760:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C377C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28488), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C379C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088C37B0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 197u, 0x08810D44u>(ctx, &aot_mem) && ctx.pc == 0x088C37B0u) goto L_088C37B0;
    return;
L_088C37B0:
    aot_gpr[31] = (0x088C37B8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 42u, 0x08828598u>(ctx, &aot_mem) && ctx.pc == 0x088C37B8u) goto L_088C37B8;
    return;
L_088C37B8:
    aot_gpr[31] = (0x088C37C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 110u, 0x088798BCu>(ctx, &aot_mem) && ctx.pc == 0x088C37C0u) goto L_088C37C0;
    return;
L_088C37C0:
    aot_gpr[31] = (0x088C37C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 28u, 0x088631FCu>(ctx, &aot_mem) && ctx.pc == 0x088C37C8u) goto L_088C37C8;
    return;
L_088C37C8:
    aot_gpr[31] = (0x088C37D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 137u, 0x08865B18u>(ctx, &aot_mem) && ctx.pc == 0x088C37D0u) goto L_088C37D0;
    return;
L_088C37D0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2268)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C37E8;
      }
      goto L_088C37E0;
    }
L_088C37E0:
    aot_gpr[31] = (0x088C37E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 216u, 0x08865FC0u>(ctx, &aot_mem) && ctx.pc == 0x088C37E8u) goto L_088C37E8;
    return;
L_088C37E8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3800;
      }
      goto L_088C37F8;
    }
L_088C37F8:
    aot_gpr[31] = (0x088C3800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 15u, 0x088930B8u>(ctx, &aot_mem) && ctx.pc == 0x088C3800u) goto L_088C3800;
    return;
L_088C3800:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3810:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088C3828u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 163u, 0x0886DB64u>(ctx, &aot_mem) && ctx.pc == 0x088C3828u) goto L_088C3828;
    return;
L_088C3828:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3840;
      }
      goto L_088C3834;
    }
L_088C3834:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[31] = (0x088C3840u);
    aot_gpr[4] = (aot_gpr[4] << 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 213u, 0x08810E24u>(ctx, &aot_mem) && ctx.pc == 0x088C3840u) goto L_088C3840;
    return;
L_088C3840:
    aot_gpr[31] = (0x088C3848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 6u, 0x0882C040u>(ctx, &aot_mem) && ctx.pc == 0x088C3848u) goto L_088C3848;
    return;
L_088C3848:
    aot_gpr[31] = (0x088C3850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 222u, 0x08810F24u>(ctx, &aot_mem) && ctx.pc == 0x088C3850u) goto L_088C3850;
    return;
L_088C3850:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-7292), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7296), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7300), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-7291), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3884:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C38B8;
      }
      goto L_088C38A8;
    }
L_088C38A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C3954;
      }
      goto L_088C38B8;
    }
L_088C38B8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3924;
      }
      goto L_088C38C0;
    }
L_088C38C0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C3924;
      }
      goto L_088C38D0;
    }
L_088C38D0:
    aot_gpr[31] = (0x088C38D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 86u, 0x088936A0u>(ctx, &aot_mem) && ctx.pc == 0x088C38D8u) goto L_088C38D8;
    return;
L_088C38D8:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C38F0;
      }
      goto L_088C38E4;
    }
L_088C38E4:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088C3954;
      }
      goto L_088C38F0;
    }
L_088C38F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C3954;
      }
      goto L_088C38FC;
    }
L_088C38FC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24848)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24760));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[31] = (0x088C391Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C391Cu) goto L_088C391C;
    return;
L_088C391C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3954;
      }
      goto L_088C3924;
    }
L_088C3924:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C3954;
      }
      goto L_088C3934;
    }
L_088C3934:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24848)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24760));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[31] = (0x088C3954u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C3954u) goto L_088C3954;
    return;
L_088C3954:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3A0C;
      }
      goto L_088C3960;
    }
L_088C3960:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x088C3974u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31624));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088C3974u) goto L_088C3974;
    return;
L_088C3974:
    aot_gpr[16] = (2215u << 16u);
    { const bool branch_taken = aot_gpr[17] != aot_gpr[2];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(24760));
      if (branch_taken) {
          goto L_088C398C;
      }
      goto L_088C3980;
    }
L_088C3980:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088C398Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6480)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 122u, 0x08879998u>(ctx, &aot_mem) && ctx.pc == 0x088C398Cu) goto L_088C398C;
    return;
L_088C398C:
    aot_gpr[31] = (0x088C3994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 54u, 0x0886232Cu>(ctx, &aot_mem) && ctx.pc == 0x088C3994u) goto L_088C3994;
    return;
L_088C3994:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(4808));
    aot_gpr[31] = (0x088C39B4u);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 112u, 0x08873760u>(ctx, &aot_mem) && ctx.pc == 0x088C39B4u) goto L_088C39B4;
    return;
L_088C39B4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2852)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3A04;
      }
      goto L_088C39D0;
    }
L_088C39D0:
    aot_gpr[31] = (0x088C39D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088C39D8u) goto L_088C39D8;
    return;
L_088C39D8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3A04;
      }
      goto L_088C39E0;
    }
L_088C39E0:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2696));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[31] = (0x088C39FCu);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C39FCu) goto L_088C39FC;
    return;
L_088C39FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3A0C;
      }
      goto L_088C3A04;
    }
L_088C3A04:
    aot_gpr[31] = (0x088C3A0Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C3A0Cu) goto L_088C3A0C;
    return;
L_088C3A0C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3A20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088C3A34u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 114u, 0x0882BF3Cu>(ctx, &aot_mem) && ctx.pc == 0x088C3A34u) goto L_088C3A34;
    return;
L_088C3A34:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088C3A78;
      }
      goto L_088C3A48;
    }
L_088C3A48:
    aot_gpr[31] = (0x088C3A50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 197u, 0x08810D44u>(ctx, &aot_mem) && ctx.pc == 0x088C3A50u) goto L_088C3A50;
    return;
L_088C3A50:
    aot_gpr[31] = (0x088C3A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 42u, 0x08828598u>(ctx, &aot_mem) && ctx.pc == 0x088C3A58u) goto L_088C3A58;
    return;
L_088C3A58:
    aot_gpr[31] = (0x088C3A60u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 163u, 0x0886DB64u>(ctx, &aot_mem) && ctx.pc == 0x088C3A60u) goto L_088C3A60;
    return;
L_088C3A60:
    aot_gpr[31] = (0x088C3A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 222u, 0x08810F24u>(ctx, &aot_mem) && ctx.pc == 0x088C3A68u) goto L_088C3A68;
    return;
L_088C3A68:
    aot_gpr[4] = (0u | 222u);
    aot_gpr[31] = (0x088C3A74u);
    aot_gpr[5] = (0u | 111u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 149u, 0x08943A90u>(ctx, &aot_mem) && ctx.pc == 0x088C3A74u) goto L_088C3A74;
    return;
L_088C3A74:
    aot_gpr[4] = (0u | 1u);
    goto L_088C3A78;
L_088C3A78:
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-3951), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(27496)));
    aot_gpr[7] = (16294u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(27496), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[7] = (aot_gpr[7] | 26214u);
    aot_gpr[5] = (0u | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7908)));
    aot_gpr[31] = (0x088C3AB4u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 5u, 0x08866050u>(ctx, &aot_mem) && ctx.pc == 0x088C3AB4u) goto L_088C3AB4;
    return;
L_088C3AB4:
    aot_gpr[31] = (0x088C3ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0296_entry, 296u, 167u, 0x0892CC00u>(ctx, &aot_mem) && ctx.pc == 0x088C3ABCu) goto L_088C3ABC;
    return;
L_088C3ABC:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7048)));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7264), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3AEC;
      }
      goto L_088C3ADC;
    }
L_088C3ADC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5252)));
    aot_gpr[31] = (0x088C3AECu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 84u, 0x08893684u>(ctx, &aot_mem) && ctx.pc == 0x088C3AECu) goto L_088C3AEC;
    return;
L_088C3AEC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3AFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(26492)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088C3B24;
      }
      goto L_088C3B18;
    }
L_088C3B18:
    aot_gpr[4] = (0u | 333u);
    aot_gpr[31] = (0x088C3B24u);
    aot_gpr[5] = (0u | 166u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 149u, 0x08943A90u>(ctx, &aot_mem) && ctx.pc == 0x088C3B24u) goto L_088C3B24;
    return;
L_088C3B24:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088C3B30u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-3951), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0296_entry, 296u, 174u, 0x0892CC70u>(ctx, &aot_mem) && ctx.pc == 0x088C3B30u) goto L_088C3B30;
    return;
L_088C3B30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[31] = (0x088C3B44u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(27496), static_cast<std::uint8_t>(aot_gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 122u, 0x088C5840u>(ctx, &aot_mem) && ctx.pc == 0x088C3B44u) goto L_088C3B44;
    return;
L_088C3B44:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C3B88;
      }
      goto L_088C3B58;
    }
L_088C3B58:
    aot_gpr[31] = (0x088C3B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 2u, 0x08866008u>(ctx, &aot_mem) && ctx.pc == 0x088C3B60u) goto L_088C3B60;
    return;
L_088C3B60:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (16294u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7908)));
    aot_gpr[4] = (aot_gpr[5] | 26214u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x088C3B88u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 5u, 0x08866050u>(ctx, &aot_mem) && ctx.pc == 0x088C3B88u) goto L_088C3B88;
    return;
L_088C3B88:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_088C3BA4;
      }
      goto L_088C3B98;
    }
L_088C3B98:
    aot_gpr[31] = (0x088C3BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 85u, 0x08893694u>(ctx, &aot_mem) && ctx.pc == 0x088C3BA0u) goto L_088C3BA0;
    return;
L_088C3BA0:
    aot_gpr[5] = (2218u << 16u);
    goto L_088C3BA4;
L_088C3BA4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7480)));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(8808), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(5272)));
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[31] = (0x088C3BC8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7492)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 134u, 0x088DCB3Cu>(ctx, &aot_mem) && ctx.pc == 0x088C3BC8u) goto L_088C3BC8;
    return;
L_088C3BC8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3BD8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28496), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3BF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2852)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[22]);
    aot_gpr[22] = (2218u << 16u);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(31736));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (2218u << 16u);
      if (branch_taken) {
          goto L_088C3C7C;
      }
      goto L_088C3C58;
    }
L_088C3C58:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088C3C6Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31708));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088C3C6Cu) goto L_088C3C6C;
    return;
L_088C3C6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[22] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C3C9C;
      }
      goto L_088C3C7C;
    }
L_088C3C7C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088C3C90u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31748));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088C3C90u) goto L_088C3C90;
    return;
L_088C3C90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088C3C9C;
L_088C3C9C:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[20] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2214u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 2u, 0x088C403Cu>(ctx, &aot_mem); return;
      }
      goto L_088C3CAC;
    }
L_088C3CAC:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31804));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[6] = (2219u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-22880));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[9] = (2219u << 16u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-23360));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[9]);
    aot_gpr[10] = (2219u << 16u);
    aot_gpr[6] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[23] = (0u | 0u);
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(-22400));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(28508));
    aot_gpr[5] = (20224u << 16u);
    aot_gpr[23] = (aot_gpr[23] + aot_gpr[10]);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    goto L_088C3D04;
L_088C3D04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1900)));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[30] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C3FFC;
      }
      goto L_088C3D20;
    }
L_088C3D20:
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C3D50;
      }
      goto L_088C3D30;
    }
L_088C3D30:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C3D40;
      }
      goto L_088C3D38;
    }
L_088C3D38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3D50;
      }
      goto L_088C3D40;
    }
L_088C3D40:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(296));
      if (branch_taken) {
          goto L_088C3D30;
      }
      goto L_088C3D50;
    }
L_088C3D50:
    aot_gpr[16] = (aot_gpr[19] + static_cast<std::uint32_t>(264));
    aot_gpr[31] = (0x088C3D5Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x088C3D5Cu) goto L_088C3D5C;
    return;
L_088C3D5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088C3D68u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088C3D68u) goto L_088C3D68;
    return;
L_088C3D68:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2072)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C3D8C;
      }
      goto L_088C3D7C;
    }
L_088C3D7C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088C3EE4;
      }
      goto L_088C3D84;
    }
L_088C3D84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DA4;
      }
      goto L_088C3D8C;
    }
L_088C3D8C:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C3ED8;
      }
      goto L_088C3D94;
    }
L_088C3D94:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C3E8C;
      }
      goto L_088C3D9C;
    }
L_088C3D9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3EE4;
      }
      goto L_088C3DA4;
    }
L_088C3DA4:
    aot_gpr[31] = (0x088C3DACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088C3DACu) goto L_088C3DAC;
    return;
L_088C3DAC:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(104));
    aot_gpr[5] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 10u);
      if (branch_taken) {
          goto L_088C3E64;
      }
      goto L_088C3DC4;
    }
L_088C3DC4:
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[5] = (0u | 1000u);
    aot_gpr[8] = (0u | 60000u);
    aot_gpr[6] = (0u | 100u);
    aot_gpr[7] = (0u | 60u);
    aot_gpr[9] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[16] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[9]; const std::uint32_t divisor = aot_gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (aot_gpr[16] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    aot_gpr[18] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[17] = (ctx.hi);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C3E34;
      }
      goto L_088C3E28;
    }
L_088C3E28:
    aot_gpr[18] = (0u | 99u);
    aot_gpr[17] = (0u | 59u);
    aot_gpr[16] = (aot_gpr[18] | 0u);
    goto L_088C3E34;
L_088C3E34:
    aot_gpr[4] = (0u | 109u);
    aot_gpr[31] = (0x088C3E40u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088C3E40u) goto L_088C3E40;
    return;
L_088C3E40:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088C3E58u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088C3E58u) goto L_088C3E58;
    return;
L_088C3E58:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[20] < aot_gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_088C3E84;
      }
      goto L_088C3E64;
    }
L_088C3E64:
    aot_gpr[4] = (0u | 108u);
    aot_gpr[31] = (0x088C3E70u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088C3E70u) goto L_088C3E70;
    return;
L_088C3E70:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x088C3E7Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088C3E7Cu) goto L_088C3E7C;
    return;
L_088C3E7C:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (aot_gpr[20] < aot_gpr[18] ? 1u : 0u);
    goto L_088C3E84;
L_088C3E84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3EEC;
      }
      goto L_088C3E8C;
    }
L_088C3E8C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(156)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
        goto L_088C3EAC;
    }
    goto L_088C3EA0;
L_088C3EA0:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088C3EBC;
      }
      goto L_088C3EAC;
    }
L_088C3EAC:
    aot_gpr[18] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[18] = (aot_gpr[4] + aot_gpr[18]);
    goto L_088C3EBC;
L_088C3EBC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x088C3ECCu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088C3ECCu) goto L_088C3ECC;
    return;
L_088C3ECC:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[20] < aot_gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_088C3EEC;
      }
      goto L_088C3ED8;
    }
L_088C3ED8:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[20] < aot_gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_088C3EEC;
      }
      goto L_088C3EE4;
    }
L_088C3EE4:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (aot_gpr[20] < aot_gpr[18] ? 1u : 0u);
    goto L_088C3EEC;
L_088C3EEC:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C3FF0;
      }
      goto L_088C3EF4;
    }
L_088C3EF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088C3F08u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x088C3F08u) goto L_088C3F08;
    return;
L_088C3F08:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x088C3F18u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 106u, 0x0888C608u>(ctx, &aot_mem) && ctx.pc == 0x088C3F18u) goto L_088C3F18;
    return;
L_088C3F18:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088C3F28u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x088C3F28u) goto L_088C3F28;
    return;
L_088C3F28:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[31] = (0x088C3F38u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x088C3F38u) goto L_088C3F38;
    return;
L_088C3F38:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2852)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3FC0;
      }
      goto L_088C3F54;
    }
L_088C3F54:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x088C3F60u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 97u, 0x088BA8C4u>(ctx, &aot_mem) && ctx.pc == 0x088C3F60u) goto L_088C3F60;
    return;
L_088C3F60:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3F98;
      }
      goto L_088C3F68;
    }
L_088C3F68:
    aot_gpr[4] = (0u | 68u);
    aot_gpr[31] = (0x088C3F74u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088C3F74u) goto L_088C3F74;
    return;
L_088C3F74:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088C3F80u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 97u, 0x088BA8C4u>(ctx, &aot_mem) && ctx.pc == 0x088C3F80u) goto L_088C3F80;
    return;
L_088C3F80:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088C3F90u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088C3F90u) goto L_088C3F90;
    return;
L_088C3F90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3FB0;
      }
      goto L_088C3F98;
    }
L_088C3F98:
    aot_gpr[4] = (0u | 69u);
    aot_gpr[31] = (0x088C3FA4u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088C3FA4u) goto L_088C3FA4;
    return;
L_088C3FA4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088C3FB0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088C3FB0u) goto L_088C3FB0;
    return;
L_088C3FB0:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[31] = (0x088C3FC0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x088C3FC0u) goto L_088C3FC0;
    return;
L_088C3FC0:
    aot_gpr[31] = (0x088C3FC8u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x088C3FC8u) goto L_088C3FC8;
    return;
L_088C3FC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088C3FE8;
      }
      goto L_088C3FD8;
    }
L_088C3FD8:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088C3FE4u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 123u, 0x0888C790u>(ctx, &aot_mem) && ctx.pc == 0x088C3FE4u) goto L_088C3FE4;
    return;
L_088C3FE4:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    goto L_088C3FE8;
L_088C3FE8:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    goto L_088C3FF0;
L_088C3FF0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088C3FFC;
L_088C3FFC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.pc = 0x088C4000u; return;
}

void recomp_unit_0191(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0191_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_191(Runtime &runtime) {
    runtime.register_generated_unit(191u, 0x088C3000u, 4096u, &recomp_unit_0191, &recomp_unit_0191_entry);
    runtime.register_function(0x088C3000u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C300Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3024u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C302Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C303Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3050u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3054u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C305Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3070u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C30A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C30D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3100u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C310Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3114u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3118u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3128u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C313Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3164u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3174u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3180u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3188u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3198u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C31A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C31ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C31C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C31E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C31F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3214u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C321Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C323Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C324Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3254u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C325Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3268u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3278u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3280u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C328Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C32B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C32C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C32C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C32E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3300u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3308u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3310u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3324u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3338u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3348u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3354u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3388u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C33C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C33D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C33E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C33F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3408u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3410u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3424u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C342Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3460u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3468u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C349Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C34A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C34B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C34C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C34C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C34CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C34D4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C34DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C350Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3514u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3544u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3554u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3560u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3568u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C357Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3584u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C359Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C35A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C35B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C35BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C35D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C35D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C35F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C35FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3608u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3610u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3624u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C362Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3638u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3640u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C366Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3674u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C367Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3690u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3698u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C36C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C36C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C36D4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3700u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3708u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C371Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C372Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3744u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3754u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3760u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C377Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C379Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C37B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C37B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C37C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C37C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C37D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C37E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C37E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C37F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3800u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3810u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3828u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3834u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3840u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3848u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3850u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3884u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C38A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C38B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C38C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C38D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C38D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C38E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C38F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C38FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C391Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3924u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3934u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3954u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3960u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3974u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3980u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C398Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3994u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C39B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C39D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C39D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C39E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C39FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3A04u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3A0Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3A20u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3A34u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3A48u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3A50u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3A58u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3A60u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3A68u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3A74u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3A78u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3AB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3ABCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3ADCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3AECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3AFCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3B18u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3B24u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3B30u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3B44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3B58u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3B60u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3B88u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3B98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3BA0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3BA4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3BC8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3BD8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3BF8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3C58u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3C6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3C7Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3C90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3C9Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3CACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3D04u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3D20u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3D30u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3D38u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3D40u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3D50u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3D5Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3D68u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3D7Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3D84u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3D8Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3D94u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3D9Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3DA4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3DACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3DC4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3E28u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3E34u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3E40u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3E58u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3E64u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3E70u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3E7Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3E84u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3E8Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3EA0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3EACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3EBCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3ECCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3ED8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3EE4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3EECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3EF4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3F08u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3F18u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3F28u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3F38u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3F54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3F60u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3F68u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3F74u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3F80u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3F90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3F98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3FA4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3FB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3FC0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3FC8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3FD8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3FE4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3FE8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3FF0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x088C3FFCu, &recomp_unit_0191, "recomp_unit_0191");
}
} // namespace psprecomp
