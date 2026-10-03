#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0415[1023] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 5, 0, 0, 6, 0, 7, 0, 8, 0, 9, 0, 0, 0, 0, 0, 10, 0, 11, 0,
    0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 16, 0, 17, 0, 18, 0, 0, 0, 19, 0, 0, 20, 0,
    21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 28, 0,
    0, 0, 29, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 36, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 41, 42, 0, 43, 44, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 49, 0, 50, 0, 51, 0, 0, 52, 0, 0, 53, 0, 54, 0, 55, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 59,
    0, 0, 60, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0,
    0, 66, 67, 0, 0, 0, 68, 69, 0, 0, 70, 0, 71, 72, 0, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0,
    0, 82, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 91, 0, 92, 0, 0, 0, 0, 93,
    0, 94, 0, 0, 95, 96, 0, 97, 0, 98, 0, 99, 0, 0, 100, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 104,
    0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 108, 0, 109, 0, 110, 0, 111, 0, 0, 112, 0,
    0, 0, 113, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 119, 0, 120, 0, 0, 121,
    0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 124, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0,
    128, 0, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 138, 139, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 0, 144, 0, 145, 0,
    0, 146, 0, 147, 0, 148, 0, 0, 149, 0, 150, 0, 0, 151, 0, 152, 0, 0, 0, 153, 0, 154, 0, 155, 156, 0, 157, 0, 0, 158, 0, 159,
    0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 165, 0, 0, 0, 166, 0, 167, 0, 168, 0,
    0, 169, 0, 170, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0,
    0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 179, 0, 180, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 184, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 186, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 189, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 193, 0, 194, 0, 195, 0, 0, 0, 196, 0, 197, 0, 198, 0, 0, 0,
    0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 202, 203, 0,
    0, 204, 0, 205, 0, 206, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0,
    212, 0, 213, 214, 215, 0, 0, 216, 0, 217, 0, 218, 0, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 0, 0, 224, 225, 0, 0, 226, 0,
    0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 230, 0, 231, 0, 232, 0, 233, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 240, 0, 241, 0, 0, 242, 0, 243, 0, 0, 244, 245, 0, 0, 0, 0, 0, 0, 246, 247, 248,
};
void recomp_unit_0415_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089A3000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0415[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089A3000;
    case 2u: goto L_089A3018;
    case 3u: goto L_089A3020;
    case 4u: goto L_089A302C;
    case 5u: goto L_089A3034;
    case 6u: goto L_089A3040;
    case 7u: goto L_089A3048;
    case 8u: goto L_089A3050;
    case 9u: goto L_089A3058;
    case 10u: goto L_089A3070;
    case 11u: goto L_089A3078;
    case 12u: goto L_089A308C;
    case 13u: goto L_089A3094;
    case 14u: goto L_089A30AC;
    case 15u: goto L_089A30B4;
    case 16u: goto L_089A30CC;
    case 17u: goto L_089A30D4;
    case 18u: goto L_089A30DC;
    case 19u: goto L_089A30EC;
    case 20u: goto L_089A30F8;
    case 21u: goto L_089A3100;
    case 22u: goto L_089A3110;
    case 23u: goto L_089A31A4;
    case 24u: goto L_089A31BC;
    case 25u: goto L_089A31CC;
    case 26u: goto L_089A31E4;
    case 27u: goto L_089A31EC;
    case 28u: goto L_089A31F8;
    case 29u: goto L_089A3208;
    case 30u: goto L_089A3214;
    case 31u: goto L_089A3224;
    case 32u: goto L_089A3234;
    case 33u: goto L_089A3240;
    case 34u: goto L_089A3248;
    case 35u: goto L_089A3254;
    case 36u: goto L_089A3284;
    case 37u: goto L_089A3294;
    case 38u: goto L_089A329C;
    case 39u: goto L_089A32B0;
    case 40u: goto L_089A32C4;
    case 41u: goto L_089A32D4;
    case 42u: goto L_089A32D8;
    case 43u: goto L_089A32E0;
    case 44u: goto L_089A32E4;
    case 45u: goto L_089A3300;
    case 46u: goto L_089A3344;
    case 47u: goto L_089A334C;
    case 48u: goto L_089A3370;
    case 49u: goto L_089A3384;
    case 50u: goto L_089A338C;
    case 51u: goto L_089A3394;
    case 52u: goto L_089A33A0;
    case 53u: goto L_089A33AC;
    case 54u: goto L_089A33B4;
    case 55u: goto L_089A33BC;
    case 56u: goto L_089A33C4;
    case 57u: goto L_089A33DC;
    case 58u: goto L_089A33E8;
    case 59u: goto L_089A33FC;
    case 60u: goto L_089A3408;
    case 61u: goto L_089A3418;
    case 62u: goto L_089A3424;
    case 63u: goto L_089A3448;
    case 64u: goto L_089A344C;
    case 65u: goto L_089A3474;
    case 66u: goto L_089A3484;
    case 67u: goto L_089A3488;
    case 68u: goto L_089A3498;
    case 69u: goto L_089A349C;
    case 70u: goto L_089A34A8;
    case 71u: goto L_089A34B0;
    case 72u: goto L_089A34B4;
    case 73u: goto L_089A34C4;
    case 74u: goto L_089A34D0;
    case 75u: goto L_089A34DC;
    case 76u: goto L_089A3500;
    case 77u: goto L_089A3508;
    case 78u: goto L_089A351C;
    case 79u: goto L_089A3524;
    case 80u: goto L_089A3534;
    case 81u: goto L_089A3574;
    case 82u: goto L_089A3584;
    case 83u: goto L_089A3588;
    case 84u: goto L_089A35BC;
    case 85u: goto L_089A35CC;
    case 86u: goto L_089A35E4;
    case 87u: goto L_089A35EC;
    case 88u: goto L_089A3614;
    case 89u: goto L_089A3650;
    case 90u: goto L_089A365C;
    case 91u: goto L_089A3660;
    case 92u: goto L_089A3668;
    case 93u: goto L_089A367C;
    case 94u: goto L_089A3684;
    case 95u: goto L_089A3690;
    case 96u: goto L_089A3694;
    case 97u: goto L_089A369C;
    case 98u: goto L_089A36A4;
    case 99u: goto L_089A36AC;
    case 100u: goto L_089A36B8;
    case 101u: goto L_089A36CC;
    case 102u: goto L_089A36D4;
    case 103u: goto L_089A36F8;
    case 104u: goto L_089A36FC;
    case 105u: goto L_089A3714;
    case 106u: goto L_089A3740;
    case 107u: goto L_089A3748;
    case 108u: goto L_089A3754;
    case 109u: goto L_089A375C;
    case 110u: goto L_089A3764;
    case 111u: goto L_089A376C;
    case 112u: goto L_089A3778;
    case 113u: goto L_089A3788;
    case 114u: goto L_089A378C;
    case 115u: goto L_089A37B0;
    case 116u: goto L_089A37B8;
    case 117u: goto L_089A37D0;
    case 118u: goto L_089A37E4;
    case 119u: goto L_089A37E8;
    case 120u: goto L_089A37F0;
    case 121u: goto L_089A37FC;
    case 122u: goto L_089A3820;
    case 123u: goto L_089A3828;
    case 124u: goto L_089A383C;
    case 125u: goto L_089A3840;
    case 126u: goto L_089A3850;
    case 127u: goto L_089A3878;
    case 128u: goto L_089A3880;
    case 129u: goto L_089A388C;
    case 130u: goto L_089A3894;
    case 131u: goto L_089A389C;
    case 132u: goto L_089A38A4;
    case 133u: goto L_089A38AC;
    case 134u: goto L_089A38B4;
    case 135u: goto L_089A38C4;
    case 136u: goto L_089A390C;
    case 137u: goto L_089A3918;
    case 138u: goto L_089A3928;
    case 139u: goto L_089A392C;
    case 140u: goto L_089A3930;
    case 141u: goto L_089A3954;
    case 142u: goto L_089A395C;
    case 143u: goto L_089A3964;
    case 144u: goto L_089A3970;
    case 145u: goto L_089A3978;
    case 146u: goto L_089A3984;
    case 147u: goto L_089A398C;
    case 148u: goto L_089A3994;
    case 149u: goto L_089A39A0;
    case 150u: goto L_089A39A8;
    case 151u: goto L_089A39B4;
    case 152u: goto L_089A39BC;
    case 153u: goto L_089A39CC;
    case 154u: goto L_089A39D4;
    case 155u: goto L_089A39DC;
    case 156u: goto L_089A39E0;
    case 157u: goto L_089A39E8;
    case 158u: goto L_089A39F4;
    case 159u: goto L_089A39FC;
    case 160u: goto L_089A3A10;
    case 161u: goto L_089A3A18;
    case 162u: goto L_089A3A38;
    case 163u: goto L_089A3A40;
    case 164u: goto L_089A3A50;
    case 165u: goto L_089A3A58;
    case 166u: goto L_089A3A68;
    case 167u: goto L_089A3A70;
    case 168u: goto L_089A3A78;
    case 169u: goto L_089A3A84;
    case 170u: goto L_089A3A8C;
    case 171u: goto L_089A3A9C;
    case 172u: goto L_089A3AA4;
    case 173u: goto L_089A3AF8;
    case 174u: goto L_089A3B10;
    case 175u: goto L_089A3B1C;
    case 176u: goto L_089A3B30;
    case 177u: goto L_089A3B40;
    case 178u: goto L_089A3B50;
    case 179u: goto L_089A3B54;
    case 180u: goto L_089A3B5C;
    case 181u: goto L_089A3B60;
    case 182u: goto L_089A3BA0;
    case 183u: goto L_089A3BB8;
    case 184u: goto L_089A3BC0;
    case 185u: goto L_089A3BC4;
    case 186u: goto L_089A3C20;
    case 187u: goto L_089A3C24;
    case 188u: goto L_089A3C50;
    case 189u: goto L_089A3C84;
    case 190u: goto L_089A3C90;
    case 191u: goto L_089A3CA4;
    case 192u: goto L_089A3CB0;
    case 193u: goto L_089A3CC0;
    case 194u: goto L_089A3CC8;
    case 195u: goto L_089A3CD0;
    case 196u: goto L_089A3CE0;
    case 197u: goto L_089A3CE8;
    case 198u: goto L_089A3CF0;
    case 199u: goto L_089A3D0C;
    case 200u: goto L_089A3D54;
    case 201u: goto L_089A3D6C;
    case 202u: goto L_089A3D74;
    case 203u: goto L_089A3D78;
    case 204u: goto L_089A3D84;
    case 205u: goto L_089A3D8C;
    case 206u: goto L_089A3D94;
    case 207u: goto L_089A3D9C;
    case 208u: goto L_089A3DB4;
    case 209u: goto L_089A3DC4;
    case 210u: goto L_089A3DD4;
    case 211u: goto L_089A3DE0;
    case 212u: goto L_089A3E00;
    case 213u: goto L_089A3E08;
    case 214u: goto L_089A3E0C;
    case 215u: goto L_089A3E10;
    case 216u: goto L_089A3E1C;
    case 217u: goto L_089A3E24;
    case 218u: goto L_089A3E2C;
    case 219u: goto L_089A3E38;
    case 220u: goto L_089A3E40;
    case 221u: goto L_089A3E48;
    case 222u: goto L_089A3E50;
    case 223u: goto L_089A3E58;
    case 224u: goto L_089A3E68;
    case 225u: goto L_089A3E6C;
    case 226u: goto L_089A3E78;
    case 227u: goto L_089A3E8C;
    case 228u: goto L_089A3EC4;
    case 229u: goto L_089A3ED4;
    case 230u: goto L_089A3ED8;
    case 231u: goto L_089A3EE0;
    case 232u: goto L_089A3EE8;
    case 233u: goto L_089A3EF0;
    case 234u: goto L_089A3F00;
    case 235u: goto L_089A3F44;
    case 236u: goto L_089A3F54;
    case 237u: goto L_089A3F58;
    case 238u: goto L_089A3F8C;
    case 239u: goto L_089A3F9C;
    case 240u: goto L_089A3FA8;
    case 241u: goto L_089A3FB0;
    case 242u: goto L_089A3FBC;
    case 243u: goto L_089A3FC4;
    case 244u: goto L_089A3FD0;
    case 245u: goto L_089A3FD4;
    case 246u: goto L_089A3FF0;
    case 247u: goto L_089A3FF4;
    case 248u: goto L_089A3FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089A3000:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(26)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[18] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0414_entry, 414u, 286u, 0x089A2FF4u>(ctx, &aot_mem); return;
      }
      goto L_089A3018;
    }
L_089A3018:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2340)));
    (void)rt.invoke_chained_direct<&recomp_unit_0414_entry, 414u, 248u, 0x089A2DDCu>(ctx, &aot_mem); return;
L_089A3020:
    aot_gpr[4] = (aot_gpr[5] + 0u);
    aot_gpr[31] = (0x089A302Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A302Cu) goto L_089A302C;
    return;
L_089A302C:
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(3));
    (void)rt.invoke_chained_direct<&recomp_unit_0414_entry, 414u, 244u, 0x089A2DACu>(ctx, &aot_mem); return;
L_089A3034:
    aot_gpr[22] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2336), 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0414_entry, 414u, 232u, 0x089A2D28u>(ctx, &aot_mem); return;
L_089A3040:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    goto L_089A3048;
L_089A3048:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089A3048;
      }
      goto L_089A3050;
    }
L_089A3050:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3058:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089A3070u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 214u, 0x0898DF50u>(ctx, &aot_mem) && ctx.pc == 0x089A3070u) goto L_089A3070;
    return;
L_089A3070:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A3094;
      }
      goto L_089A3078;
    }
L_089A3078:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089A30AC;
      }
      goto L_089A308C;
    }
L_089A308C:
    aot_gpr[31] = (0x089A3094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 118u, 0x0898F7CCu>(ctx, &aot_mem) && ctx.pc == 0x089A3094u) goto L_089A3094;
    return;
L_089A3094:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A30AC:
    aot_gpr[5] = (0u + 0u);
    goto L_089A308C;
L_089A30B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16264)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16264));
      if (branch_taken) {
          goto L_089A30DC;
      }
      goto L_089A30CC;
    }
L_089A30CC:
    aot_gpr[31] = (0x089A30D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089A30D4u) goto L_089A30D4;
    return;
L_089A30D4:
    aot_gpr[3] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16268), 0u);
    goto L_089A30DC;
L_089A30DC:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089A30F8;
      }
      goto L_089A30EC;
    }
L_089A30EC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(108)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A30F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A30F8u) goto L_089A30F8;
    return;
L_089A30F8:
    aot_gpr[31] = (0x089A3100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 19u, 0x0898E12Cu>(ctx, &aot_mem) && ctx.pc == 0x089A3100u) goto L_089A3100;
    return;
L_089A3100:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3110:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[3] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(28688));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(25704));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(176), aot_gpr[2]);
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(21800));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(132), aot_gpr[3]);
    aot_gpr[3] = (2202u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(23908));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(136), aot_gpr[2]);
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(17608));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(140), aot_gpr[3]);
    aot_gpr[3] = (2202u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(21700));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(144), aot_gpr[2]);
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(16128));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(148), aot_gpr[3]);
    aot_gpr[3] = (2202u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(21528));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(152), aot_gpr[2]);
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(28164));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(156), aot_gpr[3]);
    aot_gpr[3] = (2202u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(13196));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(160), aot_gpr[2]);
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(28580));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(164), aot_gpr[3]);
    aot_gpr[3] = (2202u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(28640));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(168), aot_gpr[2]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(172), aot_gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A31A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x089A31BCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089A31BCu) goto L_089A31BC;
    return;
L_089A31BC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A31CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_089A31EC;
      }
      goto L_089A31E4;
    }
L_089A31E4:
    aot_gpr[31] = (0x089A31ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089A31ECu) goto L_089A31EC;
    return;
L_089A31EC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A31F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_089A3248;
      }
      goto L_089A3208;
    }
L_089A3208:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089A3214u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 222u, 0x08A42C74u>(ctx, &aot_mem) && ctx.pc == 0x089A3214u) goto L_089A3214;
    return;
L_089A3214:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089A3224u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 222u, 0x08A42C74u>(ctx, &aot_mem) && ctx.pc == 0x089A3224u) goto L_089A3224;
    return;
L_089A3224:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089A3234u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(120));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089A3234u) goto L_089A3234;
    return;
L_089A3234:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089A3240u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089A3240u) goto L_089A3240;
    return;
L_089A3240:
    aot_gpr[31] = (0x089A3248u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089A3248u) goto L_089A3248;
    return;
L_089A3248:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3254:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x089A3284u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089A3284u) goto L_089A3284;
    return;
L_089A3284:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(192));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089A32D8;
      }
      goto L_089A3294;
    }
L_089A3294:
    aot_gpr[31] = (0x089A329Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089A329Cu) goto L_089A329C;
    return;
L_089A329C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_089A32D8;
      }
      goto L_089A32B0;
    }
L_089A32B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089A32C4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 214u, 0x08A42BC0u>(ctx, &aot_mem) && ctx.pc == 0x089A32C4u) goto L_089A32C4;
    return;
L_089A32C4:
    aot_gpr[3] = (aot_gpr[16] >> 4u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_089A3300;
      }
      goto L_089A32D4;
    }
L_089A32D4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089A32D8;
L_089A32D8:
    aot_gpr[31] = (0x089A32E0u);
    aot_gpr[4] = (aot_gpr[7] + 0u);
    goto L_089A31F8;
L_089A32E0:
    aot_gpr[4] = (0u + 0u);
    goto L_089A32E4;
L_089A32E4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3300:
    aot_gpr[2] = (2595u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 31795u);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[3]) * static_cast<std::uint64_t>(aot_gpr[2]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (ctx.hi);
    aot_gpr[2] = (aot_gpr[2] >> 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(124), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089A3344u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 214u, 0x08A42BC0u>(ctx, &aot_mem) && ctx.pc == 0x089A3344u) goto L_089A3344;
    return;
L_089A3344:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089A32D8;
      }
      goto L_089A334C;
    }
L_089A334C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(60), aot_gpr[18]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(124)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(120));
    aot_gpr[31] = (0x089A3370u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089A3370u) goto L_089A3370;
    return;
L_089A3370:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089A32E4;
      }
      goto L_089A3384;
    }
L_089A3384:
    // nop
    goto L_089A32D8;
L_089A338C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A33BC;
      }
      goto L_089A3394;
    }
L_089A3394:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_089A33BC;
      }
      goto L_089A33A0;
    }
L_089A33A0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(92));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A33BC;
      }
      goto L_089A33AC;
    }
L_089A33AC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A33BC;
      }
      goto L_089A33B4;
    }
L_089A33B4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A33BC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A33C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[7] = (aot_gpr[5] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[10] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089A34B0;
      }
      goto L_089A33DC;
    }
L_089A33DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089A34B4;
      }
      goto L_089A33E8;
    }
L_089A33E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[9] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089A3418;
      }
      goto L_089A33FC;
    }
L_089A33FC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A34C4;
      }
      goto L_089A3408;
    }
L_089A3408:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3418:
    aot_gpr[2] = (aot_gpr[5] < static_cast<std::uint32_t>(4097) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(12)));
        goto L_089A349C;
    }
    goto L_089A3424;
L_089A3424:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(68)));
    aot_gpr[8] = (aot_gpr[5] + static_cast<std::uint32_t>(-4096));
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[7] + aot_gpr[2]);
    aot_gpr[9] = (aot_gpr[2] + static_cast<std::uint32_t>(-8));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[4] - aot_gpr[8]);
      if (branch_taken) {
          goto L_089A3488;
      }
      goto L_089A3448;
    }
L_089A3448:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    goto L_089A344C;
L_089A344C:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[2] + static_cast<std::uint32_t>(-8));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[5] < static_cast<std::uint32_t>(4097) ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[5] + static_cast<std::uint32_t>(-4096));
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(64), aot_gpr[5]);
      if (branch_taken) {
          goto L_089A3498;
      }
      goto L_089A3474;
    }
L_089A3474:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[8] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
        goto L_089A344C;
    }
    goto L_089A3484;
L_089A3484:
    aot_gpr[2] = (aot_gpr[4] - aot_gpr[8]);
    goto L_089A3488;
L_089A3488:
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (aot_gpr[3] - aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(64), aot_gpr[5]);
    goto L_089A3498;
L_089A3498:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(12)));
    goto L_089A349C;
L_089A349C:
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[31] = (0x089A34A8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 143u, 0x0898EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x089A34A8u) goto L_089A34A8;
    return;
L_089A34A8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A3408;
      }
      goto L_089A34B0;
    }
L_089A34B0:
    aot_gpr[3] = (0u + 0u);
    goto L_089A34B4;
L_089A34B4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A34C4:
    aot_gpr[2] = (aot_gpr[5] < static_cast<std::uint32_t>(1604) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(1603));
        goto L_089A34D0;
    }
    goto L_089A34D0;
L_089A34D0:
    aot_gpr[2] = (aot_gpr[9] < aot_gpr[5] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(12)));
        goto L_089A3508;
    }
    goto L_089A34DC;
L_089A34DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (aot_gpr[2] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[4]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(64), aot_gpr[5]);
      if (branch_taken) {
          goto L_089A34D0;
      }
      goto L_089A3500;
    }
L_089A3500:
    aot_gpr[3] = (0u + 0u);
    goto L_089A34B4;
L_089A3508:
    aot_gpr[8] = (aot_gpr[6] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089A351Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 132u, 0x0898E970u>(ctx, &aot_mem) && ctx.pc == 0x089A351Cu) goto L_089A351C;
    return;
L_089A351C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A34B0;
      }
      goto L_089A3524;
    }
L_089A3524:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3534:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (aot_gpr[6] + static_cast<std::uint32_t>(92));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089A35BC;
      }
      goto L_089A3574;
    }
L_089A3574:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), 0u);
      if (branch_taken) {
          goto L_089A3714;
      }
      goto L_089A3584;
    }
L_089A3584:
    aot_gpr[3] = (0u + 0u);
    goto L_089A3588;
L_089A3588:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A35BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    goto L_089A35CC;
L_089A35CC:
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), 0u);
    if (aot_gpr[2] != 0u) aot_gpr[9] = (aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_089A3668;
      }
      goto L_089A35E4;
    }
L_089A35E4:
    aot_gpr[8] = (0u + 0u);
    aot_gpr[5] = (aot_gpr[8] + 0u);
    goto L_089A35EC;
L_089A35EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[6] = (aot_gpr[2] + aot_gpr[29]);
    aot_gpr[2] = (aot_gpr[3] << 2u);
    aot_gpr[7] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[5]) < 8 ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089A3650;
      }
      goto L_089A3614;
    }
L_089A3614:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[3] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[3] + 0u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[3]);
    goto L_089A3650;
L_089A3650:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    { const std::uint32_t dividend = aot_gpr[7]; const std::uint32_t divisor = aot_gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089A3660;
      }
      goto L_089A365C;
    }
L_089A365C:
    rt.unsupported(0x089A365Cu, 0x000001CDu, "special? not lowered yet"); return;
L_089A3660:
    { const bool branch_taken = aot_gpr[9] != aot_gpr[8];
    aot_gpr[3] = (ctx.hi);
      if (branch_taken) {
          goto L_089A35EC;
      }
      goto L_089A3668;
    }
L_089A3668:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[23] + 0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089A367Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_089A33C4;
L_089A367C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A3588;
      }
      goto L_089A3684;
    }
L_089A3684:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
        goto L_089A36AC;
    }
    goto L_089A3690;
L_089A3690:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_089A3694;
L_089A3694:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089A3584;
      }
      goto L_089A369C;
    }
L_089A369C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
      if (branch_taken) {
          goto L_089A35CC;
      }
      goto L_089A36A4;
    }
L_089A36A4:
    aot_gpr[3] = (0u + 0u);
    goto L_089A3588;
L_089A36AC:
    aot_gpr[20] = (aot_gpr[16] + static_cast<std::uint32_t>(72));
    aot_gpr[31] = (0x089A36B8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem) && ctx.pc == 0x089A36B8u) goto L_089A36B8;
    return;
L_089A36B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[22] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089A3694;
      }
      goto L_089A36CC;
    }
L_089A36CC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089A3588;
      }
      goto L_089A36D4;
    }
L_089A36D4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (aot_gpr[19] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[21]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[3] & 65535u);
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[30] = (0u + 0u);
      if (branch_taken) {
          goto L_089A376C;
      }
      goto L_089A36F8;
    }
L_089A36F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    goto L_089A36FC;
L_089A36FC:
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[17]);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_089A3694;
L_089A3714:
    aot_gpr[3] = (aot_gpr[6] + static_cast<std::uint32_t>(164));
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(140));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(164), 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(140), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[31] = (0x089A3740u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 230u, 0x08A42CE8u>(ctx, &aot_mem) && ctx.pc == 0x089A3740u) goto L_089A3740;
    return;
L_089A3740:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A3588;
      }
      goto L_089A3748;
    }
L_089A3748:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089A3588;
      }
      goto L_089A3754;
    }
L_089A3754:
    aot_gpr[31] = (0x089A375Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 227u, 0x08A42CC8u>(ctx, &aot_mem) && ctx.pc == 0x089A375Cu) goto L_089A375C;
    return;
L_089A375C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A3588;
      }
      goto L_089A3764;
    }
L_089A3764:
    aot_gpr[3] = (0u + 0u);
    goto L_089A3588;
L_089A376C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
      if (branch_taken) {
          goto L_089A3828;
      }
      goto L_089A3778;
    }
L_089A3778:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), 0u);
      if (branch_taken) {
          goto L_089A3850;
      }
      goto L_089A3788;
    }
L_089A3788:
    aot_gpr[17] = (0u + 0u);
    goto L_089A378C;
L_089A378C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(10)));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[31] = (0x089A37B0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 47u, 0x08A4323Cu>(ctx, &aot_mem) && ctx.pc == 0x089A37B0u) goto L_089A37B0;
    return;
L_089A37B0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A3588;
      }
      goto L_089A37B8;
    }
L_089A37B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[21] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == aot_gpr[3]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(8)));
        goto L_089A38A4;
    }
    goto L_089A37D0;
L_089A37D0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[3] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] != 0u;
    { const std::uint32_t dividend = aot_gpr[3]; const std::uint32_t divisor = aot_gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089A37E8;
      }
      goto L_089A37E4;
    }
L_089A37E4:
    rt.unsupported(0x089A37E4u, 0x000001CDu, "special? not lowered yet"); return;
L_089A37E8:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[19] = (ctx.hi);
      if (branch_taken) {
          goto L_089A3690;
      }
      goto L_089A37F0;
    }
L_089A37F0:
    aot_gpr[2] = (aot_gpr[30] < aot_gpr[22] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
        goto L_089A3694;
    }
    goto L_089A37FC;
L_089A37FC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (aot_gpr[19] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[21]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[3] & 65535u);
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
        goto L_089A36FC;
    }
    goto L_089A3820;
L_089A3820:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_089A376C;
L_089A3828:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089A3840;
      }
      goto L_089A383C;
    }
L_089A383C:
    rt.unsupported(0x089A383Cu, 0x000001CDu, "special? not lowered yet"); return;
L_089A3840:
    aot_gpr[17] = (aot_gpr[17] - aot_gpr[4]);
    aot_gpr[5] = (ctx.hi);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    goto L_089A378C;
L_089A3850:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x089A3878u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 230u, 0x08A42CE8u>(ctx, &aot_mem) && ctx.pc == 0x089A3878u) goto L_089A3878;
    return;
L_089A3878:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A3588;
      }
      goto L_089A3880;
    }
L_089A3880:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
        goto L_089A3694;
    }
    goto L_089A388C;
L_089A388C:
    aot_gpr[31] = (0x089A3894u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 227u, 0x08A42CC8u>(ctx, &aot_mem) && ctx.pc == 0x089A3894u) goto L_089A3894;
    return;
L_089A3894:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
        goto L_089A3694;
    }
    goto L_089A389C;
L_089A389C:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_089A3588;
L_089A38A4:
    aot_gpr[31] = (0x089A38ACu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 47u, 0x08A4323Cu>(ctx, &aot_mem) && ctx.pc == 0x089A38ACu) goto L_089A38AC;
    return;
L_089A38AC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A3588;
      }
      goto L_089A38B4;
    }
L_089A38B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    goto L_089A37D0;
L_089A38C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(92));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089A390Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 61u, 0x08A432FCu>(ctx, &aot_mem) && ctx.pc == 0x089A390Cu) goto L_089A390C;
    return;
L_089A390C:
    aot_gpr[20] = (aot_gpr[16] + static_cast<std::uint32_t>(164));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A392C;
      }
      goto L_089A3918;
    }
L_089A3918:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089A3954;
      }
      goto L_089A3928;
    }
L_089A3928:
    aot_gpr[3] = (0u + 0u);
    goto L_089A392C;
L_089A392C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_089A3930;
L_089A3930:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
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
L_089A3954:
    aot_gpr[31] = (0x089A395Cu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 87u, 0x08A434A4u>(ctx, &aot_mem) && ctx.pc == 0x089A395Cu) goto L_089A395C;
    return;
L_089A395C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A392C;
      }
      goto L_089A3964;
    }
L_089A3964:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089A3A68;
      }
      goto L_089A3970;
    }
L_089A3970:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3A68;
      }
      goto L_089A3978;
    }
L_089A3978:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(164)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_089A39E0;
    }
    goto L_089A3984;
L_089A3984:
    aot_gpr[31] = (0x089A398Cu);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    goto L_089A3534;
L_089A398C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A392C;
      }
      goto L_089A3994;
    }
L_089A3994:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089A39A0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 61u, 0x08A432FCu>(ctx, &aot_mem) && ctx.pc == 0x089A39A0u) goto L_089A39A0;
    return;
L_089A39A0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A392C;
      }
      goto L_089A39A8;
    }
L_089A39A8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089A39B4u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 87u, 0x08A434A4u>(ctx, &aot_mem) && ctx.pc == 0x089A39B4u) goto L_089A39B4;
    return;
L_089A39B4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A392C;
      }
      goto L_089A39BC;
    }
L_089A39BC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[19] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (0u + 0u);
        goto L_089A392C;
    }
    goto L_089A39CC;
L_089A39CC:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089A3A68;
      }
      goto L_089A39D4;
    }
L_089A39D4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3A68;
      }
      goto L_089A39DC;
    }
L_089A39DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_089A39E0;
L_089A39E0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u | 52012u);
      if (branch_taken) {
          goto L_089A392C;
      }
      goto L_089A39E8;
    }
L_089A39E8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089A39F4u);
    aot_gpr[5] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 78u, 0x08A43404u>(ctx, &aot_mem) && ctx.pc == 0x089A39F4u) goto L_089A39F4;
    return;
L_089A39F4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A392C;
      }
      goto L_089A39FC;
    }
L_089A39FC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089A3A18;
      }
      goto L_089A3A10;
    }
L_089A3A10:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    goto L_089A3A18;
L_089A3A18:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[31] = (0x089A3A38u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 33u, 0x08A4317Cu>(ctx, &aot_mem) && ctx.pc == 0x089A3A38u) goto L_089A3A38;
    return;
L_089A3A38:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A392C;
      }
      goto L_089A3A40;
    }
L_089A3A40:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089A3A50u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 61u, 0x08A432FCu>(ctx, &aot_mem) && ctx.pc == 0x089A3A50u) goto L_089A3A50;
    return;
L_089A3A50:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A392C;
      }
      goto L_089A3A58;
    }
L_089A3A58:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[19] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (0u + 0u);
        goto L_089A392C;
    }
    goto L_089A3A68;
L_089A3A68:
    aot_gpr[31] = (0x089A3A70u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    goto L_089A3534;
L_089A3A70:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A392C;
      }
      goto L_089A3A78;
    }
L_089A3A78:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089A3A84u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 61u, 0x08A432FCu>(ctx, &aot_mem) && ctx.pc == 0x089A3A84u) goto L_089A3A84;
    return;
L_089A3A84:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A392C;
      }
      goto L_089A3A8C;
    }
L_089A3A8C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u | 52012u);
      if (branch_taken) {
          goto L_089A3928;
      }
      goto L_089A3A9C;
    }
L_089A3A9C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_089A3930;
L_089A3AA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(59));
    aot_gpr[8] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[19] = (aot_gpr[2] + static_cast<std::uint32_t>(92));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(140)));
    aot_gpr[18] = (aot_gpr[2] + static_cast<std::uint32_t>(140));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[23] = (aot_gpr[2] + static_cast<std::uint32_t>(152));
      if (branch_taken) {
          goto L_089A3C50;
      }
      goto L_089A3AF8;
    }
L_089A3AF8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(36)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A3D8C;
      }
      goto L_089A3B10;
    }
L_089A3B10:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[30] = (0u + 0u);
      if (branch_taken) {
          goto L_089A3DC4;
      }
      goto L_089A3B1C;
    }
L_089A3B1C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[21] = (0u + 0u);
    aot_gpr[31] = (0x089A3B30u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 158u, 0x0899FCD4u>(ctx, &aot_mem) && ctx.pc == 0x089A3B30u) goto L_089A3B30;
    return;
L_089A3B30:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[22] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_089A3B54;
      }
      goto L_089A3B40;
    }
L_089A3B40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(184)));
    aot_gpr[5] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A3B50u);
    aot_gpr[6] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A3B50u) goto L_089A3B50;
    return;
L_089A3B50:
    aot_gpr[21] = (aot_gpr[2] + 0u);
    goto L_089A3B54;
L_089A3B54:
    { const bool branch_taken = aot_gpr[22] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
      if (branch_taken) {
          goto L_089A3C84;
      }
      goto L_089A3B5C;
    }
L_089A3B5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_089A3B60;
L_089A3B60:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-128));
    aot_gpr[6] = (aot_gpr[7] - aot_gpr[6]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[6] + static_cast<std::uint32_t>(3));
    if (aot_gpr[22] == 0u) aot_gpr[5] = (0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[2]);
    aot_gpr[3] = ((aot_gpr[3] & ~0x00000003u) | ((0u & 0x00000003u) << 0u));
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[31] = (0x089A3BA0u);
    aot_gpr[16] = (aot_gpr[7] + aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A3BA0u) goto L_089A3BA0;
    return;
L_089A3BA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[17] = (0u + 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089A3BB8u);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A3BB8u) goto L_089A3BB8;
    return;
L_089A3BB8:
    if (aot_gpr[17] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_089A3D78;
    }
    goto L_089A3BC0;
L_089A3BC0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    goto L_089A3BC4;
L_089A3BC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[20] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[8] = (0u + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store_word_left(aot_gpr[16] + static_cast<std::uint32_t>(3), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[16] + static_cast<std::uint32_t>(7), aot_gpr[5]);
    rt.memory().aot_store_word_right(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    rt.memory().aot_store_word_left(aot_gpr[16] + static_cast<std::uint32_t>(11), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(44)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(36)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] != 0u;
    { const std::uint32_t dividend = aot_gpr[3]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089A3C24;
      }
      goto L_089A3C20;
    }
L_089A3C20:
    rt.unsupported(0x089A3C20u, 0x000001CDu, "special? not lowered yet"); return;
L_089A3C24:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[5] = (ctx.hi);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(0u));
    goto L_089A3C50;
L_089A3C50:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[8] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3C84:
    aot_gpr[7] = (aot_gpr[6] & 65535u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_089A3B60;
    }
    goto L_089A3C90;
L_089A3C90:
    aot_gpr[3] = (aot_gpr[21] + 0u);
    aot_gpr[3] = ((aot_gpr[3] & ~0x1FFFFFFFu) | ((0u & 0x1FFFFFFFu) << 0u));
    aot_gpr[2] = (57344u << 16u);
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089A3CF0;
      }
      goto L_089A3CA4;
    }
L_089A3CA4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(59));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[8] = (0u | 52013u);
      if (branch_taken) {
          goto L_089A3C50;
      }
      goto L_089A3CB0;
    }
L_089A3CB0:
    aot_gpr[16] = (aot_gpr[7] + static_cast<std::uint32_t>(63));
    aot_gpr[16] = ((aot_gpr[16] & ~0x0000003Fu) | ((0u & 0x0000003Fu) << 0u));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[16];
    aot_gpr[4] = (aot_gpr[20] + 0u);
      if (branch_taken) {
          goto L_089A3CF0;
      }
      goto L_089A3CC0;
    }
L_089A3CC0:
    aot_gpr[31] = (0x089A3CC8u);
    aot_gpr[5] = (aot_gpr[16] - aot_gpr[7]);
    goto L_089A38C4;
L_089A3CC8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[8] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A3C50;
      }
      goto L_089A3CD0;
    }
L_089A3CD0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089A3CE0u);
    aot_gpr[5] = (aot_gpr[16] - aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 33u, 0x08A4317Cu>(ctx, &aot_mem) && ctx.pc == 0x089A3CE0u) goto L_089A3CE0;
    return;
L_089A3CE0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[8] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A3C50;
      }
      goto L_089A3CE8;
    }
L_089A3CE8:
    aot_gpr[6] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[16]));
    goto L_089A3CF0;
L_089A3CF0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(184)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(188)));
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[30]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A3D0Cu);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[30]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A3D0Cu) goto L_089A3D0C;
    return;
L_089A3D0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[21] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[2]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-128));
    aot_gpr[6] = (aot_gpr[7] - aot_gpr[6]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[6] + static_cast<std::uint32_t>(3));
    if (aot_gpr[22] == 0u) aot_gpr[5] = (0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[2]);
    aot_gpr[3] = ((aot_gpr[3] & ~0x00000003u) | ((0u & 0x00000003u) << 0u));
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[31] = (0x089A3D54u);
    aot_gpr[16] = (aot_gpr[7] + aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A3D54u) goto L_089A3D54;
    return;
L_089A3D54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089A3D6Cu);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A3D6Cu) goto L_089A3D6C;
    return;
L_089A3D6C:
    if (aot_gpr[17] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
        goto L_089A3BC4;
    }
    goto L_089A3D74;
L_089A3D74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_089A3D78;
L_089A3D78:
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089A3D84u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A3D84u) goto L_089A3D84;
    return;
L_089A3D84:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    goto L_089A3BC4;
L_089A3D8C:
    aot_gpr[31] = (0x089A3D94u);
    // nop
    goto L_089A3534;
L_089A3D94:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[8] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A3C50;
      }
      goto L_089A3D9C;
    }
L_089A3D9C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(36)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (0u | 52012u);
      if (branch_taken) {
          goto L_089A3C50;
      }
      goto L_089A3DB4;
    }
L_089A3DB4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(84)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[30] = (0u + 0u);
      if (branch_taken) {
          goto L_089A3B1C;
      }
      goto L_089A3DC4;
    }
L_089A3DC4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089A3DD4u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A3DD4u) goto L_089A3DD4;
    return;
L_089A3DD4:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089A3DE0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A3DE0u) goto L_089A3DE0;
    return;
L_089A3DE0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[21] = (aot_gpr[16] + static_cast<std::uint32_t>(3));
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(-51));
    aot_gpr[2] = (aot_gpr[2] & 255u);
    aot_gpr[3] = (aot_gpr[5] ^ 54u);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_089A3E08;
      }
      goto L_089A3E00;
    }
L_089A3E00:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_089A3EE0;
      }
      goto L_089A3E08;
    }
L_089A3E08:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    goto L_089A3E0C;
L_089A3E0C:
    aot_gpr[30] = (0u + static_cast<std::uint32_t>(1));
    goto L_089A3E10;
L_089A3E10:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(51));
      if (branch_taken) {
          goto L_089A3ED4;
      }
      goto L_089A3E1C;
    }
L_089A3E1C:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(27));
      if (branch_taken) {
          goto L_089A3ED4;
      }
      goto L_089A3E24;
    }
L_089A3E24:
    if (aot_gpr[5] == aot_gpr[2]) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
        goto L_089A3ED8;
    }
    goto L_089A3E2C;
L_089A3E2C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_089A3E50;
      }
      goto L_089A3E38;
    }
L_089A3E38:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(53));
      if (branch_taken) {
          goto L_089A3E50;
      }
      goto L_089A3E40;
    }
L_089A3E40:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A3E50;
      }
      goto L_089A3E48;
    }
L_089A3E48:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[17] = (2217u << 16u);
      if (branch_taken) {
          goto L_089A3E78;
      }
      goto L_089A3E50;
    }
L_089A3E50:
    aot_gpr[31] = (0x089A3E58u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A3E58u) goto L_089A3E58;
    return;
L_089A3E58:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1)));
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_gpr[3]))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A3EF0;
      }
      goto L_089A3E68;
    }
L_089A3E68:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_089A3E6C;
L_089A3E6C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1)));
    aot_gpr[30] = (aot_gpr[30] + aot_gpr[2]);
    aot_gpr[17] = (2217u << 16u);
    goto L_089A3E78;
L_089A3E78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16264)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089A3E8Cu);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089A3E8Cu) goto L_089A3E8C;
    return;
L_089A3E8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[4] = (aot_gpr[16] - aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[4] + static_cast<std::uint32_t>(3));
    aot_gpr[3] = ((aot_gpr[3] & ~0x00000003u) | ((0u & 0x00000003u) << 0u));
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[3]);
    aot_gpr[16] = (aot_gpr[16] - aot_gpr[30]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16264)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[31] = (0x089A3EC4u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089A3EC4u) goto L_089A3EC4;
    return;
L_089A3EC4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[3]));
    goto L_089A3B1C;
L_089A3ED4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    goto L_089A3ED8;
L_089A3ED8:
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(2));
    goto L_089A3E2C;
L_089A3EE0:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[2];
    aot_gpr[4] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089A3E10;
      }
      goto L_089A3EE8;
    }
L_089A3EE8:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    goto L_089A3E0C;
L_089A3EF0:
    aot_gpr[2] = (aot_gpr[3] & 127u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_089A3E6C;
L_089A3F00:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
      if (branch_taken) {
          goto L_089A3F54;
      }
      goto L_089A3F44;
    }
L_089A3F44:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (aot_gpr[17] < static_cast<std::uint32_t>(1401) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_089A3F8C;
    }
    goto L_089A3F54;
L_089A3F54:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
    goto L_089A3F58;
L_089A3F58:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3F8C:
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(92));
    aot_gpr[31] = (0x089A3F9Cu);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 61u, 0x08A432FCu>(ctx, &aot_mem) && ctx.pc == 0x089A3F9Cu) goto L_089A3F9C;
    return;
L_089A3F9C:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(140));
      if (branch_taken) {
          goto L_089A3F58;
      }
      goto L_089A3FA8;
    }
L_089A3FA8:
    if (aot_gpr[17] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(8)));
        (void)rt.invoke_chained_direct<&recomp_unit_0416_entry, 416u, 30u, 0x089A4168u>(ctx, &aot_mem); return;
    }
    goto L_089A3FB0;
L_089A3FB0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[20] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0416_entry, 416u, 4u, 0x089A4018u>(ctx, &aot_mem); return;
      }
      goto L_089A3FBC;
    }
L_089A3FBC:
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(8)));
        (void)rt.invoke_chained_direct<&recomp_unit_0416_entry, 416u, 30u, 0x089A4168u>(ctx, &aot_mem); return;
    }
    goto L_089A3FC4;
L_089A3FC4:
    aot_gpr[2] = (aot_gpr[20] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[20] + static_cast<std::uint32_t>(-50));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0416_entry, 416u, 29u, 0x089A415Cu>(ctx, &aot_mem); return;
      }
      goto L_089A3FD0;
    }
L_089A3FD0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    goto L_089A3FD4;
L_089A3FD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(88)));
    aot_gpr[3] = (aot_gpr[5] & 65535u);
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(63));
    aot_gpr[6] = ((aot_gpr[6] & ~0x0000003Fu) | ((0u & 0x0000003Fu) << 0u));
    { const bool branch_taken = aot_gpr[20] == aot_gpr[4];
    aot_gpr[3] = (aot_gpr[6] - aot_gpr[3]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0416_entry, 416u, 34u, 0x089A41ACu>(ctx, &aot_mem); return;
      }
      goto L_089A3FF0;
    }
L_089A3FF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089A3FF4;
L_089A3FF4:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[3] ? 1u : 0u);
    goto L_089A3FF8;
L_089A3FF8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(1401) ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0416_entry, 416u, 2u, 0x089A4008u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0416_entry, 416u, 1u, 0x089A4000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0415(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0415_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_415(Runtime &runtime) {
    runtime.register_generated_unit(415u, 0x089A3000u, 4096u, &recomp_unit_0415, &recomp_unit_0415_entry);
    runtime.register_function(0x089A3000u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3018u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3020u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A302Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3034u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3040u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3048u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3050u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3058u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3070u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3078u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A308Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3094u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A30ACu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A30B4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A30CCu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A30D4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A30DCu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A30ECu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A30F8u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3100u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3110u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A31A4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A31BCu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A31CCu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A31E4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A31ECu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A31F8u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3208u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3214u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3224u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3234u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3240u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3248u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3254u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3284u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3294u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A329Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A32B0u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A32C4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A32D4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A32D8u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A32E0u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A32E4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3300u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3344u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A334Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3370u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3384u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A338Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3394u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A33A0u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A33ACu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A33B4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A33BCu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A33C4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A33DCu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A33E8u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A33FCu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3408u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3418u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3424u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3448u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A344Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3474u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3484u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3488u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3498u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A349Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A34A8u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A34B0u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A34B4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A34C4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A34D0u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A34DCu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3500u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3508u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A351Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3524u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3534u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3574u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3584u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3588u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A35BCu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A35CCu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A35E4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A35ECu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3614u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3650u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A365Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3660u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3668u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A367Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3684u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3690u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3694u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A369Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A36A4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A36ACu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A36B8u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A36CCu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A36D4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A36F8u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A36FCu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3714u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3740u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3748u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3754u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A375Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3764u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A376Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3778u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3788u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A378Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A37B0u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A37B8u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A37D0u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A37E4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A37E8u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A37F0u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A37FCu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3820u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3828u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A383Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3840u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3850u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3878u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3880u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A388Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3894u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A389Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A38A4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A38ACu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A38B4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A38C4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A390Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3918u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3928u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A392Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3930u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3954u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A395Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3964u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3970u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3978u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3984u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A398Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3994u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A39A0u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A39A8u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A39B4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A39BCu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A39CCu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A39D4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A39DCu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A39E0u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A39E8u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A39F4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A39FCu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3A10u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3A18u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3A38u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3A40u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3A50u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3A58u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3A68u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3A70u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3A78u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3A84u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3A8Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3A9Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3AA4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3AF8u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3B10u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3B1Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3B30u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3B40u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3B50u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3B54u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3B5Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3B60u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3BA0u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3BB8u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3BC0u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3BC4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3C20u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3C24u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3C50u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3C84u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3C90u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3CA4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3CB0u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3CC0u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3CC8u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3CD0u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3CE0u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3CE8u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3CF0u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3D0Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3D54u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3D6Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3D74u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3D78u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3D84u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3D8Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3D94u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3D9Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3DB4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3DC4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3DD4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3DE0u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3E00u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3E08u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3E0Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3E10u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3E1Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3E24u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3E2Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3E38u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3E40u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3E48u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3E50u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3E58u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3E68u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3E6Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3E78u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3E8Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3EC4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3ED4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3ED8u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3EE0u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3EE8u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3EF0u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3F00u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3F44u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3F54u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3F58u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3F8Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3F9Cu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3FA8u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3FB0u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3FBCu, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3FC4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3FD0u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3FD4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3FF0u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3FF4u, &recomp_unit_0415, "recomp_unit_0415");
    runtime.register_function(0x089A3FF8u, &recomp_unit_0415, "recomp_unit_0415");
}
} // namespace psprecomp
