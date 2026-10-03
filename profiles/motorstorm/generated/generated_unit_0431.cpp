#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0431[1018] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0,
    0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 10, 11, 0, 0, 0, 0, 0, 0,
    0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0,
    0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 29, 0, 30, 0,
    0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 37, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42,
    0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 49, 50,
    0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 62, 0,
    0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0,
    0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0,
    0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 82, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93,
    0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 98, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 102, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 106, 0, 107, 0, 0,
    0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0,
    0, 0, 115, 0, 116, 0, 117, 0, 118, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 121, 0, 0, 122, 123, 124, 0, 0, 0, 125, 0, 126, 0,
    0, 127, 0, 128, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 132, 133, 134, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 150, 151, 0, 0, 0, 152, 0, 153, 0,
    154, 0, 0, 0, 0, 155, 0, 0, 156, 0, 157, 0, 158, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 162, 0, 163, 0,
    0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 166, 0, 167, 0, 168, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 171, 0, 172, 0, 0,
    0, 0, 173, 0, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 177, 0, 178, 179, 0, 180, 0, 0, 0, 0, 181, 0, 182, 0, 183, 0, 0, 0,
    184, 0, 185, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 192,
    0, 0, 193, 0, 194, 0, 195, 0, 0, 0, 0, 196, 0, 197, 0, 198, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 202, 0, 203, 0,
    204, 0, 0, 0, 205, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 212,
    0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 219, 220, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 225, 0, 226, 0, 227, 0, 228, 0, 0, 229, 0, 0, 230, 0, 231,
    0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 234, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237,
};
void recomp_unit_0431_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089B3000u;
        entry_id = (entry_delta < 4072u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0431[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089B3000;
    case 2u: goto L_089B3014;
    case 3u: goto L_089B3030;
    case 4u: goto L_089B304C;
    case 5u: goto L_089B3068;
    case 6u: goto L_089B3084;
    case 7u: goto L_089B30A0;
    case 8u: goto L_089B30D4;
    case 9u: goto L_089B30DC;
    case 10u: goto L_089B30E0;
    case 11u: goto L_089B30E4;
    case 12u: goto L_089B3104;
    case 13u: goto L_089B3130;
    case 14u: goto L_089B3138;
    case 15u: goto L_089B3160;
    case 16u: goto L_089B3168;
    case 17u: goto L_089B318C;
    case 18u: goto L_089B3194;
    case 19u: goto L_089B31B8;
    case 20u: goto L_089B31C0;
    case 21u: goto L_089B31E4;
    case 22u: goto L_089B31EC;
    case 23u: goto L_089B3210;
    case 24u: goto L_089B3218;
    case 25u: goto L_089B3230;
    case 26u: goto L_089B3238;
    case 27u: goto L_089B3250;
    case 28u: goto L_089B3258;
    case 29u: goto L_089B3270;
    case 30u: goto L_089B3278;
    case 31u: goto L_089B3290;
    case 32u: goto L_089B3298;
    case 33u: goto L_089B32BC;
    case 34u: goto L_089B32C4;
    case 35u: goto L_089B32E4;
    case 36u: goto L_089B32EC;
    case 37u: goto L_089B32F4;
    case 38u: goto L_089B332C;
    case 39u: goto L_089B3344;
    case 40u: goto L_089B334C;
    case 41u: goto L_089B3368;
    case 42u: goto L_089B337C;
    case 43u: goto L_089B3394;
    case 44u: goto L_089B33A8;
    case 45u: goto L_089B33B0;
    case 46u: goto L_089B33B8;
    case 47u: goto L_089B33EC;
    case 48u: goto L_089B33F4;
    case 49u: goto L_089B33F8;
    case 50u: goto L_089B33FC;
    case 51u: goto L_089B341C;
    case 52u: goto L_089B3448;
    case 53u: goto L_089B3450;
    case 54u: goto L_089B3474;
    case 55u: goto L_089B347C;
    case 56u: goto L_089B34A4;
    case 57u: goto L_089B34AC;
    case 58u: goto L_089B34BC;
    case 59u: goto L_089B34C8;
    case 60u: goto L_089B34EC;
    case 61u: goto L_089B34F4;
    case 62u: goto L_089B34F8;
    case 63u: goto L_089B3514;
    case 64u: goto L_089B351C;
    case 65u: goto L_089B3540;
    case 66u: goto L_089B3548;
    case 67u: goto L_089B356C;
    case 68u: goto L_089B3574;
    case 69u: goto L_089B3598;
    case 70u: goto L_089B35A0;
    case 71u: goto L_089B35C4;
    case 72u: goto L_089B35CC;
    case 73u: goto L_089B35F0;
    case 74u: goto L_089B35F8;
    case 75u: goto L_089B3610;
    case 76u: goto L_089B3618;
    case 77u: goto L_089B3638;
    case 78u: goto L_089B3640;
    case 79u: goto L_089B3648;
    case 80u: goto L_089B3668;
    case 81u: goto L_089B3670;
    case 82u: goto L_089B3678;
    case 83u: goto L_089B36B0;
    case 84u: goto L_089B36C8;
    case 85u: goto L_089B36D0;
    case 86u: goto L_089B36EC;
    case 87u: goto L_089B3700;
    case 88u: goto L_089B3718;
    case 89u: goto L_089B372C;
    case 90u: goto L_089B3734;
    case 91u: goto L_089B373C;
    case 92u: goto L_089B3764;
    case 93u: goto L_089B377C;
    case 94u: goto L_089B3784;
    case 95u: goto L_089B3798;
    case 96u: goto L_089B37A8;
    case 97u: goto L_089B37BC;
    case 98u: goto L_089B37C4;
    case 99u: goto L_089B37CC;
    case 100u: goto L_089B37D4;
    case 101u: goto L_089B3820;
    case 102u: goto L_089B3824;
    case 103u: goto L_089B3828;
    case 104u: goto L_089B385C;
    case 105u: goto L_089B3864;
    case 106u: goto L_089B386C;
    case 107u: goto L_089B3874;
    case 108u: goto L_089B3890;
    case 109u: goto L_089B38A0;
    case 110u: goto L_089B38B0;
    case 111u: goto L_089B38BC;
    case 112u: goto L_089B38C8;
    case 113u: goto L_089B38D4;
    case 114u: goto L_089B38F8;
    case 115u: goto L_089B3908;
    case 116u: goto L_089B3910;
    case 117u: goto L_089B3918;
    case 118u: goto L_089B3920;
    case 119u: goto L_089B3930;
    case 120u: goto L_089B393C;
    case 121u: goto L_089B394C;
    case 122u: goto L_089B3958;
    case 123u: goto L_089B395C;
    case 124u: goto L_089B3960;
    case 125u: goto L_089B3970;
    case 126u: goto L_089B3978;
    case 127u: goto L_089B3984;
    case 128u: goto L_089B398C;
    case 129u: goto L_089B3994;
    case 130u: goto L_089B399C;
    case 131u: goto L_089B39D0;
    case 132u: goto L_089B39D4;
    case 133u: goto L_089B39D8;
    case 134u: goto L_089B39DC;
    case 135u: goto L_089B3A00;
    case 136u: goto L_089B3A0C;
    case 137u: goto L_089B3A1C;
    case 138u: goto L_089B3A28;
    case 139u: goto L_089B3A34;
    case 140u: goto L_089B3A3C;
    case 141u: goto L_089B3A48;
    case 142u: goto L_089B3A54;
    case 143u: goto L_089B3A70;
    case 144u: goto L_089B3A8C;
    case 145u: goto L_089B3AA0;
    case 146u: goto L_089B3AA8;
    case 147u: goto L_089B3AB0;
    case 148u: goto L_089B3AC0;
    case 149u: goto L_089B3AC8;
    case 150u: goto L_089B3ADC;
    case 151u: goto L_089B3AE0;
    case 152u: goto L_089B3AF0;
    case 153u: goto L_089B3AF8;
    case 154u: goto L_089B3B00;
    case 155u: goto L_089B3B14;
    case 156u: goto L_089B3B20;
    case 157u: goto L_089B3B28;
    case 158u: goto L_089B3B30;
    case 159u: goto L_089B3B44;
    case 160u: goto L_089B3B50;
    case 161u: goto L_089B3B5C;
    case 162u: goto L_089B3B70;
    case 163u: goto L_089B3B78;
    case 164u: goto L_089B3B94;
    case 165u: goto L_089B3B9C;
    case 166u: goto L_089B3BB0;
    case 167u: goto L_089B3BB8;
    case 168u: goto L_089B3BC0;
    case 169u: goto L_089B3BD0;
    case 170u: goto L_089B3BD8;
    case 171u: goto L_089B3BEC;
    case 172u: goto L_089B3BF4;
    case 173u: goto L_089B3C08;
    case 174u: goto L_089B3C14;
    case 175u: goto L_089B3C1C;
    case 176u: goto L_089B3C24;
    case 177u: goto L_089B3C38;
    case 178u: goto L_089B3C40;
    case 179u: goto L_089B3C44;
    case 180u: goto L_089B3C4C;
    case 181u: goto L_089B3C60;
    case 182u: goto L_089B3C68;
    case 183u: goto L_089B3C70;
    case 184u: goto L_089B3C80;
    case 185u: goto L_089B3C88;
    case 186u: goto L_089B3C9C;
    case 187u: goto L_089B3CA8;
    case 188u: goto L_089B3CBC;
    case 189u: goto L_089B3CC4;
    case 190u: goto L_089B3CE0;
    case 191u: goto L_089B3CE8;
    case 192u: goto L_089B3CFC;
    case 193u: goto L_089B3D08;
    case 194u: goto L_089B3D10;
    case 195u: goto L_089B3D18;
    case 196u: goto L_089B3D2C;
    case 197u: goto L_089B3D34;
    case 198u: goto L_089B3D3C;
    case 199u: goto L_089B3D50;
    case 200u: goto L_089B3D5C;
    case 201u: goto L_089B3D68;
    case 202u: goto L_089B3D70;
    case 203u: goto L_089B3D78;
    case 204u: goto L_089B3D80;
    case 205u: goto L_089B3D90;
    case 206u: goto L_089B3D94;
    case 207u: goto L_089B3DC8;
    case 208u: goto L_089B3DCC;
    case 209u: goto L_089B3E50;
    case 210u: goto L_089B3E5C;
    case 211u: goto L_089B3E64;
    case 212u: goto L_089B3E7C;
    case 213u: goto L_089B3E84;
    case 214u: goto L_089B3E8C;
    case 215u: goto L_089B3E94;
    case 216u: goto L_089B3E9C;
    case 217u: goto L_089B3EA4;
    case 218u: goto L_089B3EE4;
    case 219u: goto L_089B3EE8;
    case 220u: goto L_089B3EEC;
    case 221u: goto L_089B3F14;
    case 222u: goto L_089B3F20;
    case 223u: goto L_089B3F2C;
    case 224u: goto L_089B3F38;
    case 225u: goto L_089B3F44;
    case 226u: goto L_089B3F4C;
    case 227u: goto L_089B3F54;
    case 228u: goto L_089B3F5C;
    case 229u: goto L_089B3F68;
    case 230u: goto L_089B3F74;
    case 231u: goto L_089B3F7C;
    case 232u: goto L_089B3F90;
    case 233u: goto L_089B3F98;
    case 234u: goto L_089B3FAC;
    case 235u: goto L_089B3FB8;
    case 236u: goto L_089B3FC0;
    case 237u: goto L_089B3FE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089B3000:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(28112));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(129));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B3014u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B3014u) goto L_089B3014;
    return;
L_089B3014:
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(28248));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(130));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B3030u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B3030u) goto L_089B3030;
    return;
L_089B3030:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[18] + static_cast<std::uint32_t>(23180));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-23236));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(131));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B304Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B304Cu) goto L_089B304C;
    return;
L_089B304C:
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(28328));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(132));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B3068u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B3068u) goto L_089B3068;
    return;
L_089B3068:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[18] + static_cast<std::uint32_t>(23180));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-23180));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(133));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B3084u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B3084u) goto L_089B3084;
    return;
L_089B3084:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B30A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[31] = (0x089B30D4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089B3920;
L_089B30D4:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[18];
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089B3104;
      }
      goto L_089B30DC;
    }
L_089B30DC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089B30E0;
L_089B30E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_089B30E4;
L_089B30E4:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
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
L_089B3104:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(20));
    aot_gpr[8] = (aot_gpr[20] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[29]);
    aot_gpr[31] = (0x089B3130u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    goto L_089B399C;
L_089B3130:
    if (aot_gpr[2] == aot_gpr[18]) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B30E0;
    }
    goto L_089B3138;
L_089B3138:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(15));
    aot_gpr[8] = (aot_gpr[20] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089B3160u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[21]);
    goto L_089B399C;
L_089B3160:
    if (aot_gpr[2] == aot_gpr[18]) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B30E0;
    }
    goto L_089B3168;
L_089B3168:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[8] = (aot_gpr[20] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089B318Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[21]);
    goto L_089B399C;
L_089B318C:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[18];
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089B30DC;
      }
      goto L_089B3194;
    }
L_089B3194:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(13));
    aot_gpr[8] = (aot_gpr[20] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[29]);
    aot_gpr[31] = (0x089B31B8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    goto L_089B399C;
L_089B31B8:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[18];
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089B30DC;
      }
      goto L_089B31C0;
    }
L_089B31C0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(11));
    aot_gpr[8] = (aot_gpr[20] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[29]);
    aot_gpr[31] = (0x089B31E4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    goto L_089B399C;
L_089B31E4:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[18];
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089B30DC;
      }
      goto L_089B31EC;
    }
L_089B31EC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(10));
    aot_gpr[8] = (aot_gpr[20] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[29]);
    aot_gpr[31] = (0x089B3210u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    goto L_089B399C;
L_089B3210:
    if (aot_gpr[2] == aot_gpr[18]) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B30E0;
    }
    goto L_089B3218;
L_089B3218:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[31] = (0x089B3230u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(3));
    goto L_089B399C;
L_089B3230:
    if (aot_gpr[2] == aot_gpr[18]) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B30E0;
    }
    goto L_089B3238;
L_089B3238:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[31] = (0x089B3250u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(5));
    goto L_089B399C;
L_089B3250:
    if (aot_gpr[2] == aot_gpr[18]) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B30E0;
    }
    goto L_089B3258;
L_089B3258:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[31] = (0x089B3270u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(6));
    goto L_089B399C;
L_089B3270:
    if (aot_gpr[2] == aot_gpr[18]) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B30E0;
    }
    goto L_089B3278;
L_089B3278:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[31] = (0x089B3290u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(26));
    goto L_089B399C;
L_089B3290:
    if (aot_gpr[2] == aot_gpr[18]) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B30E0;
    }
    goto L_089B3298;
L_089B3298:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(25));
    aot_gpr[8] = (aot_gpr[20] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089B32BCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[21]);
    goto L_089B399C;
L_089B32BC:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[18];
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089B30DC;
      }
      goto L_089B32C4;
    }
L_089B32C4:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[8] = (aot_gpr[20] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089B32E4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[21]);
    goto L_089B399C;
L_089B32E4:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[18];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_089B30E4;
      }
      goto L_089B32EC;
    }
L_089B32EC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089B30E4;
L_089B32F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x089B332Cu);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    goto L_089B3920;
L_089B332C:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(20));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[17];
    aot_gpr[8] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089B3368;
      }
      goto L_089B3344;
    }
L_089B3344:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089B334C;
L_089B334C:
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
L_089B3368:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    aot_gpr[31] = (0x089B337Cu);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_089B399C;
L_089B337C:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[8] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[17];
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(23));
      if (branch_taken) {
          goto L_089B3344;
      }
      goto L_089B3394;
    }
L_089B3394:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[29]);
    aot_gpr[31] = (0x089B33A8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_089B399C;
L_089B33A8:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[17];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089B334C;
      }
      goto L_089B33B0;
    }
L_089B33B0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089B334C;
L_089B33B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[31] = (0x089B33ECu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089B3920;
L_089B33EC:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[18];
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089B341C;
      }
      goto L_089B33F4;
    }
L_089B33F4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089B33F8;
L_089B33F8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_089B33FC;
L_089B33FC:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
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
L_089B341C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(12));
    aot_gpr[8] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[29]);
    aot_gpr[31] = (0x089B3448u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    goto L_089B399C;
L_089B3448:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[18];
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089B33F4;
      }
      goto L_089B3450;
    }
L_089B3450:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[8] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[29]);
    aot_gpr[31] = (0x089B3474u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    goto L_089B399C;
L_089B3474:
    if (aot_gpr[2] == aot_gpr[18]) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B33F8;
    }
    goto L_089B347C;
L_089B347C:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[8] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089B34A4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[21]);
    goto L_089B399C;
L_089B34A4:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[18];
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089B33F4;
      }
      goto L_089B34AC;
    }
L_089B34AC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[3] & 4u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_089B3648;
    }
    goto L_089B34BC;
L_089B34BC:
    aot_gpr[2] = (aot_gpr[3] & 2u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089B34F8;
      }
      goto L_089B34C8;
    }
L_089B34C8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(18));
    aot_gpr[8] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[29]);
    aot_gpr[31] = (0x089B34ECu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    goto L_089B399C;
L_089B34EC:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[18];
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089B33F4;
      }
      goto L_089B34F4;
    }
L_089B34F4:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    goto L_089B34F8;
L_089B34F8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089B3514u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[21]);
    goto L_089B399C;
L_089B3514:
    if (aot_gpr[2] == aot_gpr[18]) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B33F8;
    }
    goto L_089B351C;
L_089B351C:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[8] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089B3540u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[21]);
    goto L_089B399C;
L_089B3540:
    if (aot_gpr[2] == aot_gpr[18]) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B33F8;
    }
    goto L_089B3548;
L_089B3548:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089B356Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[21]);
    goto L_089B399C;
L_089B356C:
    if (aot_gpr[2] == aot_gpr[18]) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B33F8;
    }
    goto L_089B3574;
L_089B3574:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(36));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[8] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089B3598u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[21]);
    goto L_089B399C;
L_089B3598:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[18];
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089B33F4;
      }
      goto L_089B35A0;
    }
L_089B35A0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(21));
    aot_gpr[8] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[29]);
    aot_gpr[31] = (0x089B35C4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    goto L_089B399C;
L_089B35C4:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[18];
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089B33F4;
      }
      goto L_089B35CC;
    }
L_089B35CC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(45)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(22));
    aot_gpr[8] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[29]);
    aot_gpr[31] = (0x089B35F0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    goto L_089B399C;
L_089B35F0:
    if (aot_gpr[2] == aot_gpr[18]) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B33F8;
    }
    goto L_089B35F8;
L_089B35F8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[31] = (0x089B3610u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(3));
    goto L_089B399C;
L_089B3610:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[18];
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089B33F4;
      }
      goto L_089B3618;
    }
L_089B3618:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[8] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(27));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089B3638u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[21]);
    goto L_089B399C;
L_089B3638:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[18];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_089B33FC;
      }
      goto L_089B3640;
    }
L_089B3640:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089B33FC;
L_089B3648:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(19));
    aot_gpr[8] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[29]);
    aot_gpr[31] = (0x089B3668u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    goto L_089B399C;
L_089B3668:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[18];
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089B33F4;
      }
      goto L_089B3670;
    }
L_089B3670:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089B34BC;
L_089B3678:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(7));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x089B36B0u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    goto L_089B3920;
L_089B36B0:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(20));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[17];
    aot_gpr[8] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089B36EC;
      }
      goto L_089B36C8;
    }
L_089B36C8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089B36D0;
L_089B36D0:
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
L_089B36EC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    aot_gpr[31] = (0x089B3700u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_089B399C;
L_089B3700:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[8] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[17];
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(23));
      if (branch_taken) {
          goto L_089B36C8;
      }
      goto L_089B3718;
    }
L_089B3718:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[29]);
    aot_gpr[31] = (0x089B372Cu);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_089B399C;
L_089B372C:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[17];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089B36D0;
      }
      goto L_089B3734;
    }
L_089B3734:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089B36D0;
L_089B373C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x089B3764u);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089B3920;
L_089B3764:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(24));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[16];
    aot_gpr[8] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089B3798;
      }
      goto L_089B377C;
    }
L_089B377C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089B3784;
L_089B3784:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B3798:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089B37A8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    goto L_089B399C;
L_089B37A8:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[16];
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089B377C;
      }
      goto L_089B37BC;
    }
L_089B37BC:
    aot_gpr[31] = (0x089B37C4u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_089B399C;
L_089B37C4:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[16];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089B3784;
      }
      goto L_089B37CC;
    }
L_089B37CC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089B3784;
L_089B37D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(12), 0u);
      if (branch_taken) {
          goto L_089B385C;
      }
      goto L_089B3820;
    }
L_089B3820:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089B3824;
L_089B3824:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_089B3828;
L_089B3828:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B385C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089B3824;
      }
      goto L_089B3864;
    }
L_089B3864:
    if (aot_gpr[6] == 0u) {
    aot_gpr[29] = (aot_gpr[30] + 0u);
        goto L_089B3828;
    }
    goto L_089B386C;
L_089B386C:
    if (aot_gpr[7] == 0u) {
    aot_gpr[29] = (aot_gpr[30] + 0u);
        goto L_089B3828;
    }
    goto L_089B3874;
L_089B3874:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[30] + 0u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    aot_gpr[31] = (0x089B3890u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(16), aot_gpr[29]);
    goto L_089B3D3C;
L_089B3890:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    if (aot_gpr[16] == aot_gpr[2]) {
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B3824;
    }
    goto L_089B38A0;
L_089B38A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[19] + 0u);
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x089B38B0u);
    aot_gpr[23] = (aot_gpr[30] + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B38B0u) goto L_089B38B0;
    return;
L_089B38B0:
    aot_gpr[22] = (aot_gpr[30] + static_cast<std::uint32_t>(12));
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089B38D4;
L_089B38BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[20];
    aot_gpr[31] = (0x089B38C8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B38C8u) goto L_089B38C8;
    return;
L_089B38C8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B3910;
      }
      goto L_089B38D4;
    }
L_089B38D4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[30] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[8] = (aot_gpr[23] + 0u);
    aot_gpr[9] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x089B38F8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    goto L_089B3EA4;
L_089B38F8:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[6] = (aot_gpr[23] + 0u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[18];
    aot_gpr[7] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089B38BC;
      }
      goto L_089B3908;
    }
L_089B3908:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089B3824;
L_089B3910:
    jump_target = aot_gpr[21];
    aot_gpr[31] = (0x089B3918u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3918u) goto L_089B3918;
    return;
L_089B3918:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_089B3828;
L_089B3920:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_089B3958;
      }
      goto L_089B3930;
    }
L_089B3930:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089B395C;
      }
      goto L_089B393C;
    }
L_089B393C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[5] < static_cast<std::uint32_t>(9) ? 1u : 0u);
      if (branch_taken) {
          goto L_089B3958;
      }
      goto L_089B394C;
    }
L_089B394C:
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089B3970;
      }
      goto L_089B3958;
    }
L_089B3958:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089B395C;
L_089B395C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089B3960;
L_089B3960:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B3970:
    aot_gpr[31] = (0x089B3978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 31u, 0x0899037Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3978u) goto L_089B3978;
    return;
L_089B3978:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089B3958;
      }
      goto L_089B3984;
    }
L_089B3984:
    aot_gpr[31] = (0x089B398Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 31u, 0x0899037Cu>(ctx, &aot_mem) && ctx.pc == 0x089B398Cu) goto L_089B398C;
    return;
L_089B398C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B3958;
      }
      goto L_089B3994;
    }
L_089B3994:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089B3960;
L_089B399C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
      if (branch_taken) {
          goto L_089B3A00;
      }
      goto L_089B39D0;
    }
L_089B39D0:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089B39D4;
L_089B39D4:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089B39D8;
L_089B39D8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089B39DC;
L_089B39DC:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B3A00:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[19] == 0u) {
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B39D4;
    }
    goto L_089B3A0C;
L_089B3A0C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[8] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B39D4;
    }
    goto L_089B3A1C;
L_089B3A1C:
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B39D4;
    }
    goto L_089B3A28;
L_089B3A28:
    aot_gpr[2] = (aot_gpr[7] < static_cast<std::uint32_t>(29) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B39D4;
    }
    goto L_089B3A34;
L_089B3A34:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[2] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089B39D8;
      }
      goto L_089B3A3C;
    }
L_089B3A3C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089B39D8;
      }
      goto L_089B3A48;
    }
L_089B3A48:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089B39DC;
      }
      goto L_089B3A54;
    }
L_089B3A54:
    aot_gpr[2] = (aot_gpr[6] & 15u);
    aot_gpr[2] = (aot_gpr[2] << 12u);
    aot_gpr[3] = (aot_gpr[7] & 4095u);
    aot_gpr[4] = (aot_gpr[6] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[2] | aot_gpr[3]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (aot_gpr[9] & 65535u);
      if (branch_taken) {
          goto L_089B39D0;
      }
      goto L_089B3A70;
    }
L_089B3A70:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[6] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-15088));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B3A8C:
    aot_gpr[2] = (aot_gpr[9] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[8] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B39D4;
    }
    goto L_089B3AA0;
L_089B3AA0:
    aot_gpr[31] = (0x089B3AA8u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 31u, 0x0899037Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3AA8u) goto L_089B3AA8;
    return;
L_089B3AA8:
    if (aot_gpr[2] != 0u) {
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B39D4;
    }
    goto L_089B3AB0;
L_089B3AB0:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[31] = (0x089B3AC0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 31u, 0x0899037Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3AC0u) goto L_089B3AC0;
    return;
L_089B3AC0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B39D0;
      }
      goto L_089B3AC8;
    }
L_089B3AC8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[22] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089B3B50;
      }
      goto L_089B3ADC;
    }
L_089B3ADC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_089B3AE0;
L_089B3AE0:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(-4));
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[31] = (0x089B3AF0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 31u, 0x0899037Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3AF0u) goto L_089B3AF0;
    return;
L_089B3AF0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089B39D8;
      }
      goto L_089B3AF8;
    }
L_089B3AF8:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089B39D4;
L_089B3B00:
    aot_gpr[2] = (aot_gpr[9] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[8] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B39D4;
    }
    goto L_089B3B14;
L_089B3B14:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[9] != aot_gpr[2]) {
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B39D4;
    }
    goto L_089B3B20;
L_089B3B20:
    aot_gpr[31] = (0x089B3B28u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 31u, 0x0899037Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3B28u) goto L_089B3B28;
    return;
L_089B3B28:
    if (aot_gpr[2] != 0u) {
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B39D4;
    }
    goto L_089B3B30;
L_089B3B30:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089B3B44u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089B3B44u) goto L_089B3B44;
    return;
L_089B3B44:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[3]);
    goto L_089B3ADC;
L_089B3B50:
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[16]);
    aot_gpr[21] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[20] = (0u + 0u);
    goto L_089B3B5C;
L_089B3B5C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[20]);
    aot_gpr[31] = (0x089B3B70u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 39u, 0x089903DCu>(ctx, &aot_mem) && ctx.pc == 0x089B3B70u) goto L_089B3B70;
    return;
L_089B3B70:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089B39D0;
      }
      goto L_089B3B78;
    }
L_089B3B78:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[21]);
    aot_gpr[2] = (aot_gpr[22] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B3B5C;
      }
      goto L_089B3B94;
    }
L_089B3B94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_089B3AE0;
L_089B3B9C:
    aot_gpr[2] = (aot_gpr[9] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[8] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B39D4;
    }
    goto L_089B3BB0;
L_089B3BB0:
    aot_gpr[31] = (0x089B3BB8u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 31u, 0x0899037Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3BB8u) goto L_089B3BB8;
    return;
L_089B3BB8:
    if (aot_gpr[2] != 0u) {
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B39D4;
    }
    goto L_089B3BC0;
L_089B3BC0:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[31] = (0x089B3BD0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 31u, 0x0899037Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3BD0u) goto L_089B3BD0;
    return;
L_089B3BD0:
    if (aot_gpr[2] != 0u) {
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B39D4;
    }
    goto L_089B3BD8;
L_089B3BD8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[16]);
    aot_gpr[31] = (0x089B3BECu);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089B3BECu) goto L_089B3BEC;
    return;
L_089B3BEC:
    aot_gpr[16] = (aot_gpr[20] + aot_gpr[16]);
    goto L_089B3ADC;
L_089B3BF4:
    aot_gpr[2] = (aot_gpr[9] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[8] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B39D4;
    }
    goto L_089B3C08;
L_089B3C08:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    if (aot_gpr[9] != aot_gpr[2]) {
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B39D4;
    }
    goto L_089B3C14;
L_089B3C14:
    aot_gpr[31] = (0x089B3C1Cu);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 31u, 0x0899037Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3C1Cu) goto L_089B3C1C;
    return;
L_089B3C1C:
    if (aot_gpr[2] != 0u) {
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B39D4;
    }
    goto L_089B3C24;
L_089B3C24:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[16]);
    aot_gpr[31] = (0x089B3C38u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 31u, 0x0899037Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3C38u) goto L_089B3C38;
    return;
L_089B3C38:
    if (aot_gpr[2] != 0u) {
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B39D4;
    }
    goto L_089B3C40;
L_089B3C40:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089B3C44;
L_089B3C44:
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    goto L_089B3ADC;
L_089B3C4C:
    aot_gpr[2] = (aot_gpr[9] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[8] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B39D4;
    }
    goto L_089B3C60;
L_089B3C60:
    aot_gpr[31] = (0x089B3C68u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 31u, 0x0899037Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3C68u) goto L_089B3C68;
    return;
L_089B3C68:
    if (aot_gpr[2] != 0u) {
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B39D4;
    }
    goto L_089B3C70;
L_089B3C70:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[31] = (0x089B3C80u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 31u, 0x0899037Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3C80u) goto L_089B3C80;
    return;
L_089B3C80:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B39D0;
      }
      goto L_089B3C88;
    }
L_089B3C88:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[22] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089B3ADC;
      }
      goto L_089B3C9C;
    }
L_089B3C9C:
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[16]);
    aot_gpr[21] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[20] = (0u + 0u);
    goto L_089B3CA8;
L_089B3CA8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[2] = (aot_gpr[20] + aot_gpr[2]);
    aot_gpr[31] = (0x089B3CBCu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 31u, 0x0899037Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3CBCu) goto L_089B3CBC;
    return;
L_089B3CBC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089B39D0;
      }
      goto L_089B3CC4;
    }
L_089B3CC4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[21]);
    aot_gpr[2] = (aot_gpr[22] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089B3CA8;
      }
      goto L_089B3CE0;
    }
L_089B3CE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_089B3AE0;
L_089B3CE8:
    aot_gpr[2] = (aot_gpr[9] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[8] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B39D4;
    }
    goto L_089B3CFC;
L_089B3CFC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    if (aot_gpr[9] != aot_gpr[2]) {
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B39D4;
    }
    goto L_089B3D08;
L_089B3D08:
    aot_gpr[31] = (0x089B3D10u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 31u, 0x0899037Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3D10u) goto L_089B3D10;
    return;
L_089B3D10:
    if (aot_gpr[2] != 0u) {
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B39D4;
    }
    goto L_089B3D18;
L_089B3D18:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[16]);
    aot_gpr[31] = (0x089B3D2Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 39u, 0x089903DCu>(ctx, &aot_mem) && ctx.pc == 0x089B3D2Cu) goto L_089B3D2C;
    return;
L_089B3D2C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_089B3C44;
    }
    goto L_089B3D34;
L_089B3D34:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089B39D4;
L_089B3D3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
      if (branch_taken) {
          goto L_089B3D90;
      }
      goto L_089B3D50;
    }
L_089B3D50:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B3D94;
    }
    goto L_089B3D5C;
L_089B3D5C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_089B3D90;
      }
      goto L_089B3D68;
    }
L_089B3D68:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089B3D90;
      }
      goto L_089B3D70;
    }
L_089B3D70:
    aot_gpr[31] = (0x089B3D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 34u, 0x089903A0u>(ctx, &aot_mem) && ctx.pc == 0x089B3D78u) goto L_089B3D78;
    return;
L_089B3D78:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B3D90;
      }
      goto L_089B3D80;
    }
L_089B3D80:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[2] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_089B3D94;
      }
      goto L_089B3D90;
    }
L_089B3D90:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089B3D94;
L_089B3D94:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B3DC8:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089B3DCC;
L_089B3DCC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B3E50:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089B3E5Cu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 34u, 0x089903A0u>(ctx, &aot_mem) && ctx.pc == 0x089B3E5Cu) goto L_089B3E5C;
    return;
L_089B3E5C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B3DC8;
      }
      goto L_089B3E64;
    }
L_089B3E64:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[6] + 0u);
      if (branch_taken) {
          goto L_089B3DCC;
      }
      goto L_089B3E7C;
    }
L_089B3E7C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089B3DCC;
L_089B3E84:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    goto L_089B3E64;
L_089B3E8C:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    goto L_089B3E64;
L_089B3E94:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4));
    goto L_089B3E64;
L_089B3E9C:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8));
    goto L_089B3E64;
L_089B3EA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
      if (branch_taken) {
          goto L_089B3F14;
      }
      goto L_089B3EE4;
    }
L_089B3EE4:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089B3EE8;
L_089B3EE8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_089B3EEC;
L_089B3EEC:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B3F14:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B3EE8;
    }
    goto L_089B3F20;
L_089B3F20:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B3EE8;
    }
    goto L_089B3F2C;
L_089B3F2C:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[5]) < 4 ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B3EE8;
    }
    goto L_089B3F38;
L_089B3F38:
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[3] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B3EE8;
    }
    goto L_089B3F44;
L_089B3F44:
    if (aot_gpr[6] == 0u) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B3EE8;
    }
    goto L_089B3F4C;
L_089B3F4C:
    if (aot_gpr[7] == 0u) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B3EE8;
    }
    goto L_089B3F54;
L_089B3F54:
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089B3EE8;
      }
      goto L_089B3F5C;
    }
L_089B3F5C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3EE8;
      }
      goto L_089B3F68;
    }
L_089B3F68:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_089B3EEC;
      }
      goto L_089B3F74;
    }
L_089B3F74:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3EEC;
      }
      goto L_089B3F7C;
    }
L_089B3F7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B3F90u);
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 34u, 0x089903A0u>(ctx, &aot_mem) && ctx.pc == 0x089B3F90u) goto L_089B3F90;
    return;
L_089B3F90:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089B3EE8;
      }
      goto L_089B3F98;
    }
L_089B3F98:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_089B3EEC;
      }
      goto L_089B3FAC;
    }
L_089B3FAC:
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[17]);
    aot_gpr[31] = (0x089B3FB8u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 34u, 0x089903A0u>(ctx, &aot_mem) && ctx.pc == 0x089B3FB8u) goto L_089B3FB8;
    return;
L_089B3FB8:
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089B3EE8;
    }
    goto L_089B3FC0;
L_089B3FC0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[2] & 4095u);
    aot_gpr[2] = (aot_gpr[2] >> 12u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089B3EE4;
      }
      goto L_089B3FE4;
    }
L_089B3FE4:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[6] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-14976));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0431(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0431_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_431(Runtime &runtime) {
    runtime.register_generated_unit(431u, 0x089B3000u, 4096u, &recomp_unit_0431, &recomp_unit_0431_entry);
    runtime.register_function(0x089B3000u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3014u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3030u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B304Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3068u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3084u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B30A0u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B30D4u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B30DCu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B30E0u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B30E4u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3104u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3130u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3138u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3160u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3168u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B318Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3194u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B31B8u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B31C0u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B31E4u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B31ECu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3210u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3218u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3230u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3238u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3250u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3258u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3270u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3278u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3290u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3298u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B32BCu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B32C4u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B32E4u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B32ECu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B32F4u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B332Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3344u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B334Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3368u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B337Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3394u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B33A8u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B33B0u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B33B8u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B33ECu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B33F4u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B33F8u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B33FCu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B341Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3448u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3450u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3474u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B347Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B34A4u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B34ACu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B34BCu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B34C8u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B34ECu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B34F4u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B34F8u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3514u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B351Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3540u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3548u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B356Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3574u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3598u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B35A0u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B35C4u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B35CCu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B35F0u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B35F8u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3610u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3618u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3638u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3640u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3648u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3668u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3670u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3678u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B36B0u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B36C8u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B36D0u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B36ECu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3700u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3718u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B372Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3734u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B373Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3764u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B377Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3784u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3798u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B37A8u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B37BCu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B37C4u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B37CCu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B37D4u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3820u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3824u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3828u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B385Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3864u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B386Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3874u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3890u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B38A0u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B38B0u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B38BCu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B38C8u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B38D4u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B38F8u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3908u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3910u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3918u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3920u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3930u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B393Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B394Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3958u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B395Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3960u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3970u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3978u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3984u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B398Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3994u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B399Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B39D0u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B39D4u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B39D8u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B39DCu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3A00u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3A0Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3A1Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3A28u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3A34u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3A3Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3A48u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3A54u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3A70u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3A8Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3AA0u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3AA8u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3AB0u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3AC0u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3AC8u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3ADCu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3AE0u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3AF0u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3AF8u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3B00u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3B14u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3B20u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3B28u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3B30u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3B44u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3B50u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3B5Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3B70u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3B78u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3B94u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3B9Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3BB0u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3BB8u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3BC0u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3BD0u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3BD8u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3BECu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3BF4u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3C08u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3C14u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3C1Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3C24u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3C38u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3C40u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3C44u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3C4Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3C60u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3C68u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3C70u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3C80u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3C88u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3C9Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3CA8u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3CBCu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3CC4u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3CE0u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3CE8u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3CFCu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3D08u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3D10u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3D18u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3D2Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3D34u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3D3Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3D50u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3D5Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3D68u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3D70u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3D78u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3D80u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3D90u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3D94u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3DC8u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3DCCu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3E50u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3E5Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3E64u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3E7Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3E84u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3E8Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3E94u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3E9Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3EA4u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3EE4u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3EE8u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3EECu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3F14u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3F20u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3F2Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3F38u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3F44u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3F4Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3F54u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3F5Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3F68u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3F74u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3F7Cu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3F90u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3F98u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3FACu, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3FB8u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3FC0u, &recomp_unit_0431, "recomp_unit_0431");
    runtime.register_function(0x089B3FE4u, &recomp_unit_0431, "recomp_unit_0431");
}
} // namespace psprecomp
