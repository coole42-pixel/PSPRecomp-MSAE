#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0495[1024] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 8, 9, 0, 0, 10, 0,
    11, 0, 12, 0, 0, 13, 14, 0, 15, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 20, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0,
    0, 28, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 35,
    0, 0, 36, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0,
    42, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 48, 0, 0, 0, 0, 0, 0,
    0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 51, 0, 52, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 55, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61,
    0, 62, 0, 0, 63, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 67, 0, 68,
    0, 0, 69, 0, 70, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 74, 0, 75, 0, 0, 76, 0, 77, 0, 78, 0, 0,
    79, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 90, 0, 91, 0, 0, 0, 92, 0, 93, 0, 94, 0,
    95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 99, 0,
    100, 0, 0, 0, 101, 0, 102, 0, 103, 0, 104, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 112, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 134, 0, 135, 0, 0, 0, 0, 136, 0,
    0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 142, 0, 0, 143, 0, 0, 0, 144, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 149, 150, 0, 151, 0, 0, 0, 0, 0, 152, 0, 153,
    0, 0, 0, 154, 0, 0, 155, 0, 156, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 163, 0, 0, 164, 0, 0, 165, 0, 166, 0, 0, 167, 0, 168, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 173, 0, 174, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0,
    0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 182, 0, 183, 0, 184, 0, 0, 185, 0, 186, 0, 187, 0, 0, 0,
    0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 194, 0, 0, 195, 0, 0,
    0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0, 201,
    0, 202, 0, 0, 0, 203, 0, 204, 0, 0, 205, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210, 0, 0, 211, 0, 212, 0, 0, 213, 0, 214, 0,
    215, 0, 216, 0, 0, 0, 0, 217, 0, 218, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 0, 224, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 229,
    0, 0, 230, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0,
    237, 0, 238, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244,
};
void recomp_unit_0495_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089F3000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0495[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089F3000;
    case 2u: goto L_089F3010;
    case 3u: goto L_089F301C;
    case 4u: goto L_089F3034;
    case 5u: goto L_089F304C;
    case 6u: goto L_089F3054;
    case 7u: goto L_089F305C;
    case 8u: goto L_089F3068;
    case 9u: goto L_089F306C;
    case 10u: goto L_089F3078;
    case 11u: goto L_089F3080;
    case 12u: goto L_089F3088;
    case 13u: goto L_089F3094;
    case 14u: goto L_089F3098;
    case 15u: goto L_089F30A0;
    case 16u: goto L_089F30B0;
    case 17u: goto L_089F30B8;
    case 18u: goto L_089F30D0;
    case 19u: goto L_089F30E0;
    case 20u: goto L_089F310C;
    case 21u: goto L_089F3114;
    case 22u: goto L_089F3120;
    case 23u: goto L_089F3140;
    case 24u: goto L_089F3148;
    case 25u: goto L_089F3150;
    case 26u: goto L_089F315C;
    case 27u: goto L_089F3174;
    case 28u: goto L_089F3184;
    case 29u: goto L_089F3194;
    case 30u: goto L_089F31A0;
    case 31u: goto L_089F31B0;
    case 32u: goto L_089F31D0;
    case 33u: goto L_089F31E0;
    case 34u: goto L_089F31EC;
    case 35u: goto L_089F31FC;
    case 36u: goto L_089F3208;
    case 37u: goto L_089F3218;
    case 38u: goto L_089F3224;
    case 39u: goto L_089F3234;
    case 40u: goto L_089F3240;
    case 41u: goto L_089F3274;
    case 42u: goto L_089F3280;
    case 43u: goto L_089F3290;
    case 44u: goto L_089F329C;
    case 45u: goto L_089F32B0;
    case 46u: goto L_089F32BC;
    case 47u: goto L_089F32E0;
    case 48u: goto L_089F32E4;
    case 49u: goto L_089F3308;
    case 50u: goto L_089F333C;
    case 51u: goto L_089F3340;
    case 52u: goto L_089F3348;
    case 53u: goto L_089F3358;
    case 54u: goto L_089F3364;
    case 55u: goto L_089F3374;
    case 56u: goto L_089F3390;
    case 57u: goto L_089F33B0;
    case 58u: goto L_089F33C0;
    case 59u: goto L_089F33CC;
    case 60u: goto L_089F33E0;
    case 61u: goto L_089F33FC;
    case 62u: goto L_089F3404;
    case 63u: goto L_089F3410;
    case 64u: goto L_089F3418;
    case 65u: goto L_089F342C;
    case 66u: goto L_089F3470;
    case 67u: goto L_089F3474;
    case 68u: goto L_089F347C;
    case 69u: goto L_089F3488;
    case 70u: goto L_089F3490;
    case 71u: goto L_089F349C;
    case 72u: goto L_089F34A4;
    case 73u: goto L_089F34CC;
    case 74u: goto L_089F34D0;
    case 75u: goto L_089F34D8;
    case 76u: goto L_089F34E4;
    case 77u: goto L_089F34EC;
    case 78u: goto L_089F34F4;
    case 79u: goto L_089F3500;
    case 80u: goto L_089F3508;
    case 81u: goto L_089F3514;
    case 82u: goto L_089F3520;
    case 83u: goto L_089F353C;
    case 84u: goto L_089F3550;
    case 85u: goto L_089F3554;
    case 86u: goto L_089F355C;
    case 87u: goto L_089F3584;
    case 88u: goto L_089F35B4;
    case 89u: goto L_089F35CC;
    case 90u: goto L_089F35D0;
    case 91u: goto L_089F35D8;
    case 92u: goto L_089F35E8;
    case 93u: goto L_089F35F0;
    case 94u: goto L_089F35F8;
    case 95u: goto L_089F3600;
    case 96u: goto L_089F360C;
    case 97u: goto L_089F3634;
    case 98u: goto L_089F3674;
    case 99u: goto L_089F3678;
    case 100u: goto L_089F3680;
    case 101u: goto L_089F3690;
    case 102u: goto L_089F3698;
    case 103u: goto L_089F36A0;
    case 104u: goto L_089F36A8;
    case 105u: goto L_089F36AC;
    case 106u: goto L_089F36B8;
    case 107u: goto L_089F36E0;
    case 108u: goto L_089F36E8;
    case 109u: goto L_089F3710;
    case 110u: goto L_089F3744;
    case 111u: goto L_089F3758;
    case 112u: goto L_089F3784;
    case 113u: goto L_089F378C;
    case 114u: goto L_089F3794;
    case 115u: goto L_089F37B4;
    case 116u: goto L_089F37C4;
    case 117u: goto L_089F37E4;
    case 118u: goto L_089F37FC;
    case 119u: goto L_089F3810;
    case 120u: goto L_089F3830;
    case 121u: goto L_089F383C;
    case 122u: goto L_089F3850;
    case 123u: goto L_089F3858;
    case 124u: goto L_089F386C;
    case 125u: goto L_089F3894;
    case 126u: goto L_089F38BC;
    case 127u: goto L_089F38E4;
    case 128u: goto L_089F38F4;
    case 129u: goto L_089F3900;
    case 130u: goto L_089F391C;
    case 131u: goto L_089F392C;
    case 132u: goto L_089F3948;
    case 133u: goto L_089F3950;
    case 134u: goto L_089F395C;
    case 135u: goto L_089F3964;
    case 136u: goto L_089F3978;
    case 137u: goto L_089F398C;
    case 138u: goto L_089F3994;
    case 139u: goto L_089F39B0;
    case 140u: goto L_089F39C0;
    case 141u: goto L_089F39D4;
    case 142u: goto L_089F39DC;
    case 143u: goto L_089F39E8;
    case 144u: goto L_089F39F8;
    case 145u: goto L_089F3A24;
    case 146u: goto L_089F3A30;
    case 147u: goto L_089F3A3C;
    case 148u: goto L_089F3A48;
    case 149u: goto L_089F3A50;
    case 150u: goto L_089F3A54;
    case 151u: goto L_089F3A5C;
    case 152u: goto L_089F3A74;
    case 153u: goto L_089F3A7C;
    case 154u: goto L_089F3A8C;
    case 155u: goto L_089F3A98;
    case 156u: goto L_089F3AA0;
    case 157u: goto L_089F3AA8;
    case 158u: goto L_089F3AC0;
    case 159u: goto L_089F3AE4;
    case 160u: goto L_089F3B0C;
    case 161u: goto L_089F3B18;
    case 162u: goto L_089F3B24;
    case 163u: goto L_089F3B2C;
    case 164u: goto L_089F3B38;
    case 165u: goto L_089F3B44;
    case 166u: goto L_089F3B4C;
    case 167u: goto L_089F3B58;
    case 168u: goto L_089F3B60;
    case 169u: goto L_089F3B70;
    case 170u: goto L_089F3B8C;
    case 171u: goto L_089F3BB0;
    case 172u: goto L_089F3BBC;
    case 173u: goto L_089F3BC0;
    case 174u: goto L_089F3BC8;
    case 175u: goto L_089F3BD0;
    case 176u: goto L_089F3BDC;
    case 177u: goto L_089F3BF8;
    case 178u: goto L_089F3C0C;
    case 179u: goto L_089F3C18;
    case 180u: goto L_089F3C2C;
    case 181u: goto L_089F3C3C;
    case 182u: goto L_089F3C44;
    case 183u: goto L_089F3C4C;
    case 184u: goto L_089F3C54;
    case 185u: goto L_089F3C60;
    case 186u: goto L_089F3C68;
    case 187u: goto L_089F3C70;
    case 188u: goto L_089F3C84;
    case 189u: goto L_089F3C98;
    case 190u: goto L_089F3CA0;
    case 191u: goto L_089F3CBC;
    case 192u: goto L_089F3CCC;
    case 193u: goto L_089F3CE0;
    case 194u: goto L_089F3CE8;
    case 195u: goto L_089F3CF4;
    case 196u: goto L_089F3D04;
    case 197u: goto L_089F3D50;
    case 198u: goto L_089F3D5C;
    case 199u: goto L_089F3D68;
    case 200u: goto L_089F3D74;
    case 201u: goto L_089F3D7C;
    case 202u: goto L_089F3D84;
    case 203u: goto L_089F3D94;
    case 204u: goto L_089F3D9C;
    case 205u: goto L_089F3DA8;
    case 206u: goto L_089F3DB0;
    case 207u: goto L_089F3DB8;
    case 208u: goto L_089F3DC0;
    case 209u: goto L_089F3DC8;
    case 210u: goto L_089F3DD0;
    case 211u: goto L_089F3DDC;
    case 212u: goto L_089F3DE4;
    case 213u: goto L_089F3DF0;
    case 214u: goto L_089F3DF8;
    case 215u: goto L_089F3E00;
    case 216u: goto L_089F3E08;
    case 217u: goto L_089F3E1C;
    case 218u: goto L_089F3E24;
    case 219u: goto L_089F3E2C;
    case 220u: goto L_089F3E34;
    case 221u: goto L_089F3E50;
    case 222u: goto L_089F3E5C;
    case 223u: goto L_089F3E68;
    case 224u: goto L_089F3E78;
    case 225u: goto L_089F3EA8;
    case 226u: goto L_089F3EC4;
    case 227u: goto L_089F3ED8;
    case 228u: goto L_089F3EF4;
    case 229u: goto L_089F3EFC;
    case 230u: goto L_089F3F08;
    case 231u: goto L_089F3F10;
    case 232u: goto L_089F3F24;
    case 233u: goto L_089F3F38;
    case 234u: goto L_089F3F40;
    case 235u: goto L_089F3F5C;
    case 236u: goto L_089F3F6C;
    case 237u: goto L_089F3F80;
    case 238u: goto L_089F3F88;
    case 239u: goto L_089F3F94;
    case 240u: goto L_089F3FA4;
    case 241u: goto L_089F3FC8;
    case 242u: goto L_089F3FD4;
    case 243u: goto L_089F3FE4;
    case 244u: goto L_089F3FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089F3000:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089F3010u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F30E0;
L_089F3010:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089F301Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 126u, 0x089FA834u>(ctx, &aot_mem) && ctx.pc == 0x089F301Cu) goto L_089F301C;
    return;
L_089F301C:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3034:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F306C;
      }
      goto L_089F304C;
    }
L_089F304C:
    aot_gpr[31] = (0x089F3054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F3054u) goto L_089F3054;
    return;
L_089F3054:
    aot_gpr[31] = (0x089F305Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F305Cu) goto L_089F305C;
    return;
L_089F305C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F3068u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089F3068u) goto L_089F3068;
    return;
L_089F3068:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_089F306C;
L_089F306C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F3098;
      }
      goto L_089F3078;
    }
L_089F3078:
    aot_gpr[31] = (0x089F3080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F3080u) goto L_089F3080;
    return;
L_089F3080:
    aot_gpr[31] = (0x089F3088u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3088u) goto L_089F3088;
    return;
L_089F3088:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089F3094u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089F3094u) goto L_089F3094;
    return;
L_089F3094:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_089F3098;
L_089F3098:
    aot_gpr[31] = (0x089F30A0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 157u, 0x089FAA3Cu>(ctx, &aot_mem) && ctx.pc == 0x089F30A0u) goto L_089F30A0;
    return;
L_089F30A0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F30B0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F30B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089F30D0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F30D0u) goto L_089F30D0;
    return;
L_089F30D0:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F30E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x089F310Cu);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F310Cu) goto L_089F310C;
    return;
L_089F310C:
    aot_gpr[31] = (0x089F3114u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3114u) goto L_089F3114;
    return;
L_089F3114:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089F3120u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F3120u) goto L_089F3120;
    return;
L_089F3120:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-10256));
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 92u);
    aot_gpr[31] = (0x089F3140u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x089F3140u) goto L_089F3140;
    return;
L_089F3140:
    aot_gpr[31] = (0x089F3148u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F3148u) goto L_089F3148;
    return;
L_089F3148:
    aot_gpr[31] = (0x089F3150u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3150u) goto L_089F3150;
    return;
L_089F3150:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089F315Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F315Cu) goto L_089F315C;
    return;
L_089F315C:
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 93u);
    aot_gpr[31] = (0x089F3174u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x089F3174u) goto L_089F3174;
    return;
L_089F3174:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F3184u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F3184u) goto L_089F3184;
    return;
L_089F3184:
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F3194u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x089F3194u) goto L_089F3194;
    return;
L_089F3194:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089F31A0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F31A0u) goto L_089F31A0;
    return;
L_089F31A0:
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F31B0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x089F31B0u) goto L_089F31B0;
    return;
L_089F31B0:
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
L_089F31D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089F31E0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 165u, 0x089FAAC4u>(ctx, &aot_mem) && ctx.pc == 0x089F31E0u) goto L_089F31E0;
    return;
L_089F31E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F31EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089F31FCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 139u, 0x089FA8FCu>(ctx, &aot_mem) && ctx.pc == 0x089F31FCu) goto L_089F31FC;
    return;
L_089F31FC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3208:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089F3218u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 173u, 0x089FAB74u>(ctx, &aot_mem) && ctx.pc == 0x089F3218u) goto L_089F3218;
    return;
L_089F3218:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3224:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089F3234u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 179u, 0x089FAC34u>(ctx, &aot_mem) && ctx.pc == 0x089F3234u) goto L_089F3234;
    return;
L_089F3234:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3240:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x089F3274u);
    aot_gpr[5] = (0u | 63u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 197u, 0x08A3AA54u>(ctx, &aot_mem) && ctx.pc == 0x089F3274u) goto L_089F3274;
    return;
L_089F3274:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089F3280u);
    aot_gpr[20] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F3280u) goto L_089F3280;
    return;
L_089F3280:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_089F32E4;
    }
    goto L_089F3290;
L_089F3290:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089F329Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089F329Cu) goto L_089F329C;
    return;
L_089F329C:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[19]);
    aot_gpr[6] = (aot_gpr[16] - aot_gpr[19]);
    aot_gpr[31] = (0x089F32B0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 140u, 0x089FA904u>(ctx, &aot_mem) && ctx.pc == 0x089F32B0u) goto L_089F32B0;
    return;
L_089F32B0:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[2] = (aot_gpr[19] + aot_gpr[18]);
      if (branch_taken) {
          goto L_089F32E0;
      }
      goto L_089F32BC;
    }
L_089F32BC:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
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
L_089F32E0:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_089F32E4;
L_089F32E4:
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
L_089F3308:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[18] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F3374;
      }
      goto L_089F333C;
    }
L_089F333C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089F3340;
L_089F3340:
    aot_gpr[31] = (0x089F3348u);
    aot_gpr[5] = (0u | 0u);
    goto L_089F3BF8;
L_089F3348:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089F3358u);
    aot_gpr[5] = (0u | 0u);
    goto L_089F3AE4;
L_089F3358:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F3364u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 230u, 0x089F2F04u>(ctx, &aot_mem) && ctx.pc == 0x089F3364u) goto L_089F3364;
    return;
L_089F3364:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[18] ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089F3340;
    }
    goto L_089F3374;
L_089F3374:
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
L_089F3390:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28900)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(28904));
      if (branch_taken) {
          goto L_089F33CC;
      }
      goto L_089F33B0;
    }
L_089F33B0:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28900), aot_gpr[5]);
    aot_gpr[31] = (0x089F33C0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089F38BC;
L_089F33C0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x089F33CCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-18792));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089F33CCu) goto L_089F33CC;
    return;
L_089F33CC:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F33E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F3418;
      }
      goto L_089F33FC;
    }
L_089F33FC:
    aot_gpr[31] = (0x089F3404u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F3308;
L_089F3404:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F3418;
      }
      goto L_089F3410;
    }
L_089F3410:
    aot_gpr[31] = (0x089F3418u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x089F3418u) goto L_089F3418;
    return;
L_089F3418:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F342C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[20] ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_089F34CC;
      }
      goto L_089F3470;
    }
L_089F3470:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089F3474;
L_089F3474:
    aot_gpr[31] = (0x089F347Cu);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    goto L_089F3BF8;
L_089F347C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089F3488u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_089F30B8;
L_089F3488:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F34A4;
      }
      goto L_089F3490;
    }
L_089F3490:
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[20] ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089F3474;
    }
    goto L_089F349C;
L_089F349C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089F34D0;
      }
      goto L_089F34A4;
    }
L_089F34A4:
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
L_089F34CC:
    aot_gpr[20] = (0u | 0u);
    goto L_089F34D0;
L_089F34D0:
    aot_gpr[31] = (0x089F34D8u);
    aot_gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 236u, 0x089F2F5Cu>(ctx, &aot_mem) && ctx.pc == 0x089F34D8u) goto L_089F34D8;
    return;
L_089F34D8:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_089F34F4;
      }
      goto L_089F34E4;
    }
L_089F34E4:
    aot_gpr[31] = (0x089F34ECu);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 228u, 0x089F2ED0u>(ctx, &aot_mem) && ctx.pc == 0x089F34ECu) goto L_089F34EC;
    return;
L_089F34EC:
    aot_gpr[20] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_089F34F4;
L_089F34F4:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F3500u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_089F30E0;
L_089F3500:
    if (aot_gpr[19] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089F3554;
    }
    goto L_089F3508;
L_089F3508:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089F3550;
      }
      goto L_089F3514;
    }
L_089F3514:
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089F3550;
      }
      goto L_089F3520;
    }
L_089F3520:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x089F353Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089F31D0;
L_089F353C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089F3520;
      }
      goto L_089F3550;
    }
L_089F3550:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089F3554;
L_089F3554:
    aot_gpr[31] = (0x089F355Cu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    goto L_089F39F8;
L_089F355C:
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
L_089F3584:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F360C;
      }
      goto L_089F35B4;
    }
L_089F35B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F360C;
      }
      goto L_089F35CC;
    }
L_089F35CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089F35D0;
L_089F35D0:
    aot_gpr[31] = (0x089F35D8u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_089F3BF8;
L_089F35D8:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089F35E8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_089F30B8;
L_089F35E8:
    if (aot_gpr[2] == 0u) {
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
        goto L_089F3600;
    }
    goto L_089F35F0;
L_089F35F0:
    aot_gpr[31] = (0x089F35F8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_089F30B0;
L_089F35F8:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089F3600;
L_089F3600:
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[19] ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089F35D0;
    }
    goto L_089F360C;
L_089F360C:
    aot_gpr[2] = (aot_gpr[21] | 0u);
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
L_089F3634:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[20] ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089F36B8;
      }
      goto L_089F3674;
    }
L_089F3674:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_089F3678;
L_089F3678:
    aot_gpr[31] = (0x089F3680u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_089F3BF8;
L_089F3680:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x089F3690u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_089F30B8;
L_089F3690:
    if (aot_gpr[2] == 0u) {
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
        goto L_089F36AC;
    }
    goto L_089F3698;
L_089F3698:
    aot_gpr[31] = (0x089F36A0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_089F31EC;
L_089F36A0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_089F36E0;
      }
      goto L_089F36A8;
    }
L_089F36A8:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089F36AC;
L_089F36AC:
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[20] ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_089F3678;
    }
    goto L_089F36B8;
L_089F36B8:
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
L_089F36E0:
    aot_gpr[31] = (0x089F36E8u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 244u, 0x089F2FDCu>(ctx, &aot_mem) && ctx.pc == 0x089F36E8u) goto L_089F36E8;
    return;
L_089F36E8:
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
L_089F3710:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[6] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F3894;
      }
      goto L_089F3744;
    }
L_089F3744:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089F3758u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F3758u) goto L_089F3758;
    return;
L_089F3758:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[21] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089F386C;
      }
      goto L_089F3784;
    }
L_089F3784:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089F378C;
L_089F378C:
    aot_gpr[31] = (0x089F3794u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F3794u) goto L_089F3794;
    return;
L_089F3794:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[19]);
      if (branch_taken) {
          goto L_089F3894;
      }
      goto L_089F37B4;
    }
L_089F37B4:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[31] = (0x089F37C4u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F37C4u) goto L_089F37C4;
    return;
L_089F37C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
      if (branch_taken) {
          goto L_089F3894;
      }
      goto L_089F37E4;
    }
L_089F37E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F37FCu);
    aot_gpr[7] = (0u | 0u);
    goto L_089F342C;
L_089F37FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F3810u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F3810u) goto L_089F3810;
    return;
L_089F3810:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_089F3858;
      }
      goto L_089F3830;
    }
L_089F3830:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F383Cu);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    goto L_089F3BF8;
L_089F383C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089F3850u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 184u, 0x089FACA0u>(ctx, &aot_mem) && ctx.pc == 0x089F3850u) goto L_089F3850;
    return;
L_089F3850:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F3894;
      }
      goto L_089F3858;
    }
L_089F3858:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_089F378C;
    }
    goto L_089F386C;
L_089F386C:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3894:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F38BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28908)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(28912));
      if (branch_taken) {
          goto L_089F3900;
      }
      goto L_089F38E4;
    }
L_089F38E4:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28908), aot_gpr[5]);
    aot_gpr[31] = (0x089F38F4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F391C;
L_089F38F4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x089F3900u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-18780));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3900u) goto L_089F3900;
    return;
L_089F3900:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F391C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F392C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F3964;
      }
      goto L_089F3948;
    }
L_089F3948:
    aot_gpr[31] = (0x089F3950u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F3B8C;
L_089F3950:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F3964;
      }
      goto L_089F395C;
    }
L_089F395C:
    aot_gpr[31] = (0x089F3964u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F39C0;
L_089F3964:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3978:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089F398Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F398Cu) goto L_089F398C;
    return;
L_089F398C:
    aot_gpr[31] = (0x089F3994u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3994u) goto L_089F3994;
    return;
L_089F3994:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 53u);
    aot_gpr[31] = (0x089F39B0u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-10224));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x089F39B0u) goto L_089F39B0;
    return;
L_089F39B0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F39C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089F39D4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F39D4u) goto L_089F39D4;
    return;
L_089F39D4:
    aot_gpr[31] = (0x089F39DCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F39DCu) goto L_089F39DC;
    return;
L_089F39DC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089F39E8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089F39E8u) goto L_089F39E8;
    return;
L_089F39E8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F39F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F3AC0;
      }
      goto L_089F3A24;
    }
L_089F3A24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089F3A74;
      }
      goto L_089F3A30;
    }
L_089F3A30:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[31] = (0x089F3A3Cu);
    aot_gpr[4] = (0u | 12u);
    goto L_089F3C84;
L_089F3A3C:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F3A54;
      }
      goto L_089F3A48;
    }
L_089F3A48:
    aot_gpr[31] = (0x089F3A50u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_089F3C70;
L_089F3A50:
    aot_gpr[19] = (aot_gpr[20] | 0u);
    goto L_089F3A54;
L_089F3A54:
    { const bool branch_taken = aot_gpr[19] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[19]);
      if (branch_taken) {
          goto L_089F3AC0;
      }
      goto L_089F3A5C;
    }
L_089F3A5C:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_089F3AC0;
      }
      goto L_089F3A74;
    }
L_089F3A74:
    aot_gpr[31] = (0x089F3A7Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089F3C2C;
L_089F3A7C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[31] = (0x089F3A8Cu);
    aot_gpr[4] = (0u | 12u);
    goto L_089F3C84;
L_089F3A8C:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    if (aot_gpr[20] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[17]);
        goto L_089F3AA8;
    }
    goto L_089F3A98;
L_089F3A98:
    aot_gpr[31] = (0x089F3AA0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_089F3C70;
L_089F3AA0:
    aot_gpr[19] = (aot_gpr[20] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    goto L_089F3AA8;
L_089F3AA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_089F3AC0;
L_089F3AC0:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_089F3AE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F3B70;
      }
      goto L_089F3B0C;
    }
L_089F3B0C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F3B18u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_089F3C2C;
L_089F3B18:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F3B70;
      }
      goto L_089F3B24;
    }
L_089F3B24:
    if (aot_gpr[16] != 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_089F3B38;
    }
    goto L_089F3B2C;
L_089F3B2C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_089F3B58;
      }
      goto L_089F3B38;
    }
L_089F3B38:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[6];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089F3B4C;
      }
      goto L_089F3B44;
    }
L_089F3B44:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_089F3B58;
      }
      goto L_089F3B4C;
    }
L_089F3B4C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    goto L_089F3B58;
L_089F3B58:
    aot_gpr[31] = (0x089F3B60u);
    // nop
    goto L_089F3CCC;
L_089F3B60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_089F3B70;
L_089F3B70:
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
L_089F3B8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F3BDC;
      }
      goto L_089F3BB0;
    }
L_089F3BB0:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089F3BDC;
      }
      goto L_089F3BBC;
    }
L_089F3BBC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089F3BC0;
L_089F3BC0:
    aot_gpr[31] = (0x089F3BC8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_089F3AE4;
L_089F3BC8:
    if (aot_gpr[2] == 0u) {
    aot_gpr[18] = (0u | 0u);
        goto L_089F3BD0;
    }
    goto L_089F3BD0;
L_089F3BD0:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) >= 0;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_089F3BC0;
      }
      goto L_089F3BDC;
    }
L_089F3BDC:
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
L_089F3BF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089F3C0Cu);
    aot_gpr[16] = (0u | 0u);
    goto L_089F3C2C;
L_089F3C0C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_089F3C18;
    }
    goto L_089F3C18;
L_089F3C18:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3C2C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    goto L_089F3C3C;
L_089F3C3C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F3C68;
      }
      goto L_089F3C44;
    }
L_089F3C44:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F3C68;
      }
      goto L_089F3C4C;
    }
L_089F3C4C:
    { const bool branch_taken = aot_gpr[7] == aot_gpr[5];
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F3C60;
      }
      goto L_089F3C54;
    }
L_089F3C54:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_089F3C3C;
      }
      goto L_089F3C60;
    }
L_089F3C60:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3C68:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3C70:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3C84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089F3C98u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F3C98u) goto L_089F3C98;
    return;
L_089F3C98:
    aot_gpr[31] = (0x089F3CA0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3CA0u) goto L_089F3CA0;
    return;
L_089F3CA0:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 23u);
    aot_gpr[31] = (0x089F3CBCu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-10224));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x089F3CBCu) goto L_089F3CBC;
    return;
L_089F3CBC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3CCC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089F3CE0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F3CE0u) goto L_089F3CE0;
    return;
L_089F3CE0:
    aot_gpr[31] = (0x089F3CE8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3CE8u) goto L_089F3CE8;
    return;
L_089F3CE8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089F3CF4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089F3CF4u) goto L_089F3CF4;
    return;
L_089F3CF4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3D04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[31]);
    aot_gpr[31] = (0x089F3D50u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10192));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x089F3D50u) goto L_089F3D50;
    return;
L_089F3D50:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[31] = (0x089F3D5Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F3D5Cu) goto L_089F3D5C;
    return;
L_089F3D5C:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089F3D68u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F3D68u) goto L_089F3D68;
    return;
L_089F3D68:
    aot_gpr[21] = (aot_gpr[2] - aot_gpr[20]);
    aot_gpr[22] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[21] ? 1u : 0u);
    goto L_089F3D74;
L_089F3D74:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F3DA8;
      }
      goto L_089F3D7C;
    }
L_089F3D7C:
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[23] = (aot_gpr[16] + aot_gpr[22]);
      if (branch_taken) {
          goto L_089F3DA8;
      }
      goto L_089F3D84;
    }
L_089F3D84:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089F3D94u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 223u, 0x08A3AB88u>(ctx, &aot_mem) && ctx.pc == 0x089F3D94u) goto L_089F3D94;
    return;
L_089F3D94:
    if (aot_gpr[2] == 0u) {
    aot_gpr[19] = (aot_gpr[23] | 0u);
        goto L_089F3D9C;
    }
    goto L_089F3D9C;
L_089F3D9C:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[21] ? 1u : 0u);
      if (branch_taken) {
          goto L_089F3D74;
      }
      goto L_089F3DA8;
    }
L_089F3DA8:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F3E78;
      }
      goto L_089F3DB0;
    }
L_089F3DB0:
    aot_gpr[31] = (0x089F3DB8u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F3DB8u) goto L_089F3DB8;
    return;
L_089F3DB8:
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[2]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(0))))));
    goto L_089F3DC0;
L_089F3DC0:
    aot_gpr[31] = (0x089F3DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 97u, 0x089F057Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3DC8u) goto L_089F3DC8;
    return;
L_089F3DC8:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(0))))));
        goto L_089F3DDC;
    }
    goto L_089F3DD0;
L_089F3DD0:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_089F3DC0;
      }
      goto L_089F3DDC;
    }
L_089F3DDC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089F3E1C;
      }
      goto L_089F3DE4;
    }
L_089F3DE4:
    aot_gpr[5] = (0u | 59u);
    aot_gpr[6] = (0u | 13u);
    aot_gpr[7] = (0u | 10u);
    goto L_089F3DF0;
L_089F3DF0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089F3E1C;
      }
      goto L_089F3DF8;
    }
L_089F3DF8:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_089F3E1C;
      }
      goto L_089F3E00;
    }
L_089F3E00:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_089F3E1C;
      }
      goto L_089F3E08;
    }
L_089F3E08:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[16]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F3DF0;
      }
      goto L_089F3E1C;
    }
L_089F3E1C:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F3E78;
      }
      goto L_089F3E24;
    }
L_089F3E24:
    aot_gpr[31] = (0x089F3E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F3E2Cu) goto L_089F3E2C;
    return;
L_089F3E2C:
    aot_gpr[31] = (0x089F3E34u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3E34u) goto L_089F3E34;
    return;
L_089F3E34:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 389u);
    aot_gpr[31] = (0x089F3E50u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-10188));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x089F3E50u) goto L_089F3E50;
    return;
L_089F3E50:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_089F3E78;
      }
      goto L_089F3E5C;
    }
L_089F3E5C:
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F3E68u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F3E68u) goto L_089F3E68;
    return;
L_089F3E68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_089F3E78;
L_089F3E78:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3EA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089F3EC4u);
    aot_gpr[6] = (0u | 768u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3EC4u) goto L_089F3EC4;
    return;
L_089F3EC4:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3ED8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F3F10;
      }
      goto L_089F3EF4;
    }
L_089F3EF4:
    aot_gpr[31] = (0x089F3EFCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F3FA4;
L_089F3EFC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F3F10;
      }
      goto L_089F3F08;
    }
L_089F3F08:
    aot_gpr[31] = (0x089F3F10u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F3F6C;
L_089F3F10:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3F24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089F3F38u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F3F38u) goto L_089F3F38;
    return;
L_089F3F38:
    aot_gpr[31] = (0x089F3F40u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3F40u) goto L_089F3F40;
    return;
L_089F3F40:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 158u);
    aot_gpr[31] = (0x089F3F5Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-10188));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x089F3F5Cu) goto L_089F3F5C;
    return;
L_089F3F5C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3F6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089F3F80u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F3F80u) goto L_089F3F80;
    return;
L_089F3F80:
    aot_gpr[31] = (0x089F3F88u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3F88u) goto L_089F3F88;
    return;
L_089F3F88:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089F3F94u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089F3F94u) goto L_089F3F94;
    return;
L_089F3F94:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3FA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    goto L_089F3FC8;
L_089F3FC8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F3FD4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 107u, 0x089F46D0u>(ctx, &aot_mem) && ctx.pc == 0x089F3FD4u) goto L_089F3FD4;
    return;
L_089F3FD4:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089F3FC8;
      }
      goto L_089F3FE4;
    }
L_089F3FE4:
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
L_089F3FFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.pc = 0x089F4000u; return;
}

void recomp_unit_0495(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0495_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_495(Runtime &runtime) {
    runtime.register_generated_unit(495u, 0x089F3000u, 4096u, &recomp_unit_0495, &recomp_unit_0495_entry);
    runtime.register_function(0x089F3000u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3010u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F301Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3034u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F304Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3054u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F305Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3068u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F306Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3078u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3080u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3088u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3094u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3098u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F30A0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F30B0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F30B8u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F30D0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F30E0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F310Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3114u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3120u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3140u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3148u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3150u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F315Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3174u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3184u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3194u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F31A0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F31B0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F31D0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F31E0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F31ECu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F31FCu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3208u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3218u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3224u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3234u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3240u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3274u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3280u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3290u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F329Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F32B0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F32BCu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F32E0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F32E4u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3308u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F333Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3340u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3348u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3358u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3364u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3374u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3390u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F33B0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F33C0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F33CCu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F33E0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F33FCu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3404u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3410u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3418u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F342Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3470u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3474u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F347Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3488u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3490u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F349Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F34A4u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F34CCu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F34D0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F34D8u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F34E4u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F34ECu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F34F4u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3500u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3508u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3514u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3520u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F353Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3550u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3554u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F355Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3584u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F35B4u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F35CCu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F35D0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F35D8u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F35E8u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F35F0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F35F8u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3600u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F360Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3634u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3674u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3678u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3680u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3690u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3698u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F36A0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F36A8u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F36ACu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F36B8u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F36E0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F36E8u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3710u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3744u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3758u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3784u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F378Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3794u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F37B4u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F37C4u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F37E4u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F37FCu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3810u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3830u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F383Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3850u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3858u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F386Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3894u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F38BCu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F38E4u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F38F4u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3900u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F391Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F392Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3948u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3950u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F395Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3964u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3978u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F398Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3994u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F39B0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F39C0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F39D4u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F39DCu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F39E8u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F39F8u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3A24u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3A30u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3A3Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3A48u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3A50u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3A54u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3A5Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3A74u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3A7Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3A8Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3A98u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3AA0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3AA8u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3AC0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3AE4u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3B0Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3B18u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3B24u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3B2Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3B38u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3B44u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3B4Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3B58u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3B60u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3B70u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3B8Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3BB0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3BBCu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3BC0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3BC8u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3BD0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3BDCu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3BF8u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3C0Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3C18u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3C2Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3C3Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3C44u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3C4Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3C54u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3C60u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3C68u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3C70u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3C84u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3C98u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3CA0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3CBCu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3CCCu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3CE0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3CE8u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3CF4u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3D04u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3D50u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3D5Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3D68u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3D74u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3D7Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3D84u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3D94u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3D9Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3DA8u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3DB0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3DB8u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3DC0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3DC8u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3DD0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3DDCu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3DE4u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3DF0u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3DF8u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3E00u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3E08u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3E1Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3E24u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3E2Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3E34u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3E50u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3E5Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3E68u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3E78u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3EA8u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3EC4u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3ED8u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3EF4u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3EFCu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3F08u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3F10u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3F24u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3F38u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3F40u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3F5Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3F6Cu, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3F80u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3F88u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3F94u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3FA4u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3FC8u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3FD4u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3FE4u, &recomp_unit_0495, "recomp_unit_0495");
    runtime.register_function(0x089F3FFCu, &recomp_unit_0495, "recomp_unit_0495");
}
} // namespace psprecomp
