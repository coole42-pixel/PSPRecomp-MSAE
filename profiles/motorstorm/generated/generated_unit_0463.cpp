#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0463[1022] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 10, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 15, 0, 16, 0,
    0, 0, 0, 0, 0, 17, 0, 18, 0, 19, 0, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0, 26, 27,
    0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0,
    0, 0, 35, 0, 36, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 41, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0,
    44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 52, 53, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0,
    0, 0, 0, 63, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0,
    71, 0, 72, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78,
    0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 85, 0, 86, 87, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94,
    0, 0, 95, 0, 0, 96, 0, 97, 0, 98, 0, 0, 99, 100, 0, 101, 0, 102, 0, 0, 0, 0, 103, 0, 104, 0, 105, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 109, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 112, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 118,
    119, 120, 0, 0, 0, 0, 0, 121, 0, 122, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 127, 0, 0, 0, 0, 128, 0, 129, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 132, 0, 0, 133, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 136, 0, 137, 138, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 141,
    0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0,
    0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 156, 0, 0, 0, 157, 0, 158, 0, 0, 159,
    0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165,
    0, 166, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0,
    175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 179, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 184,
    0, 185, 0, 0, 186, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 191, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0,
    0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 201, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0,
    0, 0, 206, 0, 0, 207, 0, 208, 209, 0, 210, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 215,
};
void recomp_unit_0463_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089D3004u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0463[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089D3004;
    case 2u: goto L_089D3014;
    case 3u: goto L_089D3020;
    case 4u: goto L_089D3064;
    case 5u: goto L_089D306C;
    case 6u: goto L_089D30A0;
    case 7u: goto L_089D30C8;
    case 8u: goto L_089D30CC;
    case 9u: goto L_089D30DC;
    case 10u: goto L_089D3124;
    case 11u: goto L_089D3128;
    case 12u: goto L_089D3130;
    case 13u: goto L_089D3164;
    case 14u: goto L_089D316C;
    case 15u: goto L_089D3174;
    case 16u: goto L_089D317C;
    case 17u: goto L_089D3198;
    case 18u: goto L_089D31A0;
    case 19u: goto L_089D31A8;
    case 20u: goto L_089D31B8;
    case 21u: goto L_089D31C4;
    case 22u: goto L_089D31D0;
    case 23u: goto L_089D31D8;
    case 24u: goto L_089D31E0;
    case 25u: goto L_089D31E8;
    case 26u: goto L_089D31FC;
    case 27u: goto L_089D3200;
    case 28u: goto L_089D3214;
    case 29u: goto L_089D321C;
    case 30u: goto L_089D325C;
    case 31u: goto L_089D3264;
    case 32u: goto L_089D326C;
    case 33u: goto L_089D3274;
    case 34u: goto L_089D327C;
    case 35u: goto L_089D328C;
    case 36u: goto L_089D3294;
    case 37u: goto L_089D329C;
    case 38u: goto L_089D32AC;
    case 39u: goto L_089D32BC;
    case 40u: goto L_089D32CC;
    case 41u: goto L_089D32D4;
    case 42u: goto L_089D32D8;
    case 43u: goto L_089D32FC;
    case 44u: goto L_089D3304;
    case 45u: goto L_089D3314;
    case 46u: goto L_089D3338;
    case 47u: goto L_089D333C;
    case 48u: goto L_089D3360;
    case 49u: goto L_089D3388;
    case 50u: goto L_089D33D4;
    case 51u: goto L_089D33E8;
    case 52u: goto L_089D33EC;
    case 53u: goto L_089D33F0;
    case 54u: goto L_089D3420;
    case 55u: goto L_089D3428;
    case 56u: goto L_089D3430;
    case 57u: goto L_089D3444;
    case 58u: goto L_089D344C;
    case 59u: goto L_089D3458;
    case 60u: goto L_089D3460;
    case 61u: goto L_089D346C;
    case 62u: goto L_089D3478;
    case 63u: goto L_089D3490;
    case 64u: goto L_089D3494;
    case 65u: goto L_089D34A4;
    case 66u: goto L_089D34B4;
    case 67u: goto L_089D34BC;
    case 68u: goto L_089D34CC;
    case 69u: goto L_089D34EC;
    case 70u: goto L_089D34F8;
    case 71u: goto L_089D3504;
    case 72u: goto L_089D350C;
    case 73u: goto L_089D351C;
    case 74u: goto L_089D3524;
    case 75u: goto L_089D354C;
    case 76u: goto L_089D3554;
    case 77u: goto L_089D3568;
    case 78u: goto L_089D3580;
    case 79u: goto L_089D35A4;
    case 80u: goto L_089D35AC;
    case 81u: goto L_089D35B4;
    case 82u: goto L_089D363C;
    case 83u: goto L_089D3644;
    case 84u: goto L_089D3650;
    case 85u: goto L_089D3658;
    case 86u: goto L_089D3660;
    case 87u: goto L_089D3664;
    case 88u: goto L_089D3674;
    case 89u: goto L_089D36B8;
    case 90u: goto L_089D36C0;
    case 91u: goto L_089D36C8;
    case 92u: goto L_089D36D8;
    case 93u: goto L_089D36E4;
    case 94u: goto L_089D3700;
    case 95u: goto L_089D370C;
    case 96u: goto L_089D3718;
    case 97u: goto L_089D3720;
    case 98u: goto L_089D3728;
    case 99u: goto L_089D3734;
    case 100u: goto L_089D3738;
    case 101u: goto L_089D3740;
    case 102u: goto L_089D3748;
    case 103u: goto L_089D375C;
    case 104u: goto L_089D3764;
    case 105u: goto L_089D376C;
    case 106u: goto L_089D3774;
    case 107u: goto L_089D3794;
    case 108u: goto L_089D37A4;
    case 109u: goto L_089D37AC;
    case 110u: goto L_089D37B4;
    case 111u: goto L_089D37C4;
    case 112u: goto L_089D3808;
    case 113u: goto L_089D3810;
    case 114u: goto L_089D3828;
    case 115u: goto L_089D3850;
    case 116u: goto L_089D3860;
    case 117u: goto L_089D386C;
    case 118u: goto L_089D3880;
    case 119u: goto L_089D3884;
    case 120u: goto L_089D3888;
    case 121u: goto L_089D38A0;
    case 122u: goto L_089D38A8;
    case 123u: goto L_089D38B0;
    case 124u: goto L_089D38C8;
    case 125u: goto L_089D38D8;
    case 126u: goto L_089D38E4;
    case 127u: goto L_089D390C;
    case 128u: goto L_089D3920;
    case 129u: goto L_089D3928;
    case 130u: goto L_089D3934;
    case 131u: goto L_089D3948;
    case 132u: goto L_089D3988;
    case 133u: goto L_089D3994;
    case 134u: goto L_089D39A4;
    case 135u: goto L_089D39B0;
    case 136u: goto L_089D39C4;
    case 137u: goto L_089D39CC;
    case 138u: goto L_089D39D0;
    case 139u: goto L_089D39E4;
    case 140u: goto L_089D39EC;
    case 141u: goto L_089D3A00;
    case 142u: goto L_089D3A08;
    case 143u: goto L_089D3A10;
    case 144u: goto L_089D3A34;
    case 145u: goto L_089D3A50;
    case 146u: goto L_089D3A64;
    case 147u: goto L_089D3A6C;
    case 148u: goto L_089D3A88;
    case 149u: goto L_089D3A90;
    case 150u: goto L_089D3AC4;
    case 151u: goto L_089D3AEC;
    case 152u: goto L_089D3B18;
    case 153u: goto L_089D3B30;
    case 154u: goto L_089D3B4C;
    case 155u: goto L_089D3B58;
    case 156u: goto L_089D3B5C;
    case 157u: goto L_089D3B6C;
    case 158u: goto L_089D3B74;
    case 159u: goto L_089D3B80;
    case 160u: goto L_089D3B88;
    case 161u: goto L_089D3B98;
    case 162u: goto L_089D3BAC;
    case 163u: goto L_089D3BC8;
    case 164u: goto L_089D3BD8;
    case 165u: goto L_089D3C00;
    case 166u: goto L_089D3C08;
    case 167u: goto L_089D3C10;
    case 168u: goto L_089D3C24;
    case 169u: goto L_089D3C60;
    case 170u: goto L_089D3C74;
    case 171u: goto L_089D3C7C;
    case 172u: goto L_089D3CB0;
    case 173u: goto L_089D3CBC;
    case 174u: goto L_089D3CF8;
    case 175u: goto L_089D3D04;
    case 176u: goto L_089D3D14;
    case 177u: goto L_089D3D24;
    case 178u: goto L_089D3D30;
    case 179u: goto L_089D3D40;
    case 180u: goto L_089D3D48;
    case 181u: goto L_089D3D58;
    case 182u: goto L_089D3D68;
    case 183u: goto L_089D3D78;
    case 184u: goto L_089D3D80;
    case 185u: goto L_089D3D88;
    case 186u: goto L_089D3D94;
    case 187u: goto L_089D3D98;
    case 188u: goto L_089D3DA0;
    case 189u: goto L_089D3E28;
    case 190u: goto L_089D3E34;
    case 191u: goto L_089D3E3C;
    case 192u: goto L_089D3E4C;
    case 193u: goto L_089D3E58;
    case 194u: goto L_089D3E6C;
    case 195u: goto L_089D3EA0;
    case 196u: goto L_089D3EB0;
    case 197u: goto L_089D3ED4;
    case 198u: goto L_089D3EF8;
    case 199u: goto L_089D3F10;
    case 200u: goto L_089D3F30;
    case 201u: goto L_089D3F34;
    case 202u: goto L_089D3F3C;
    case 203u: goto L_089D3F4C;
    case 204u: goto L_089D3F68;
    case 205u: goto L_089D3F70;
    case 206u: goto L_089D3F8C;
    case 207u: goto L_089D3F98;
    case 208u: goto L_089D3FA0;
    case 209u: goto L_089D3FA4;
    case 210u: goto L_089D3FAC;
    case 211u: goto L_089D3FB4;
    case 212u: goto L_089D3FC4;
    case 213u: goto L_089D3FE0;
    case 214u: goto L_089D3FE8;
    case 215u: goto L_089D3FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089D3004:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1028)));
        goto L_089D30CC;
    }
    goto L_089D3014;
L_089D3014:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1248)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(12));
        (void)rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 223u, 0x089D2F60u>(ctx, &aot_mem); return;
    }
    goto L_089D3020;
L_089D3020:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1252)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1248)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089D3064u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D3064u) goto L_089D3064;
    return;
L_089D3064:
    aot_gpr[2] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 223u, 0x089D2F60u>(ctx, &aot_mem); return;
L_089D306C:
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[19]));
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(11));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[3]);
    aot_gpr[31] = (0x089D30A0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 221u, 0x08986F4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D30A0u) goto L_089D30A0;
    return;
L_089D30A0:
    aot_gpr[2] = (0u + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D30C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1028)));
    goto L_089D30CC;
L_089D30CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1248)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089D316C;
      }
      goto L_089D30DC;
    }
L_089D30DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1252)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1248)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089D3124u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D3124u) goto L_089D3124;
    return;
L_089D3124:
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[19]));
    goto L_089D3128;
L_089D3128:
    aot_gpr[31] = (0x089D3130u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 16u, 0x08986158u>(ctx, &aot_mem) && ctx.pc == 0x089D3130u) goto L_089D3130;
    return;
L_089D3130:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(12));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[6] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[29]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[3]);
    aot_gpr[31] = (0x089D3164u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 221u, 0x08986F4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D3164u) goto L_089D3164;
    return;
L_089D3164:
    aot_gpr[2] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 223u, 0x089D2F60u>(ctx, &aot_mem); return;
L_089D316C:
    aot_gpr[31] = (0x089D3174u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 54u, 0x089D2320u>(ctx, &aot_mem) && ctx.pc == 0x089D3174u) goto L_089D3174;
    return;
L_089D3174:
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[19]));
    goto L_089D3128;
L_089D317C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089D3214;
      }
      goto L_089D3198;
    }
L_089D3198:
    aot_gpr[31] = (0x089D31A0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 31u, 0x089D2150u>(ctx, &aot_mem) && ctx.pc == 0x089D31A0u) goto L_089D31A0;
    return;
L_089D31A0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D3214;
      }
      goto L_089D31A8;
    }
L_089D31A8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089D3200;
      }
      goto L_089D31B8;
    }
L_089D31B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[4] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_089D3200;
      }
      goto L_089D31C4;
    }
L_089D31C4:
    aot_gpr[4] = (aot_gpr[3] + 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089D3200;
      }
      goto L_089D31D0;
    }
L_089D31D0:
    aot_gpr[31] = (0x089D31D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 235u, 0x08A42D14u>(ctx, &aot_mem) && ctx.pc == 0x089D31D8u) goto L_089D31D8;
    return;
L_089D31D8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089D31FC;
      }
      goto L_089D31E0;
    }
L_089D31E0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089D31E8;
L_089D31E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D31FC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089D3200;
L_089D3200:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(11));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3214:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    goto L_089D31E8;
L_089D321C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[20] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(260)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089D3338;
      }
      goto L_089D325C;
    }
L_089D325C:
    if (aot_gpr[5] == 0u) {
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(3));
        goto L_089D333C;
    }
    goto L_089D3264;
L_089D3264:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089D3338;
      }
      goto L_089D326C;
    }
L_089D326C:
    aot_gpr[31] = (0x089D3274u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    goto L_089D317C;
L_089D3274:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D32D8;
      }
      goto L_089D327C;
    }
L_089D327C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(26));
        goto L_089D32D8;
    }
    goto L_089D328C;
L_089D328C:
    aot_gpr[31] = (0x089D3294u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 31u, 0x089D2150u>(ctx, &aot_mem) && ctx.pc == 0x089D3294u) goto L_089D3294;
    return;
L_089D3294:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D3338;
      }
      goto L_089D329C;
    }
L_089D329C:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(22588)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(10));
        goto L_089D32D8;
    }
    goto L_089D32AC;
L_089D32AC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(1028)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_089D3360;
      }
      goto L_089D32BC;
    }
L_089D32BC:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089D32CCu);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 240u, 0x08A42D48u>(ctx, &aot_mem) && ctx.pc == 0x089D32CCu) goto L_089D32CC;
    return;
L_089D32CC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (aot_gpr[18] + 0u);
        goto L_089D32FC;
    }
    goto L_089D32D4;
L_089D32D4:
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(26));
    goto L_089D32D8;
L_089D32D8:
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
L_089D32FC:
    aot_gpr[31] = (0x089D3304u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 25u, 0x08A4313Cu>(ctx, &aot_mem) && ctx.pc == 0x089D3304u) goto L_089D3304;
    return;
L_089D3304:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x089D3314u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089D3314u) goto L_089D3314;
    return;
L_089D3314:
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
L_089D3338:
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(3));
    goto L_089D333C;
L_089D333C:
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
L_089D3360:
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(11));
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
L_089D3388:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-384));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(344), aot_gpr[22]);
    aot_gpr[22] = (2217u << 16u);
    aot_gpr[2] = (aot_gpr[22] + static_cast<std::uint32_t>(22284));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(356), aot_gpr[31]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(256));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(352), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(348), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(340), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(336), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(332), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(328), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(324), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(372), __builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(368), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
      if (branch_taken) {
          goto L_089D33E8;
      }
      goto L_089D33D4;
    }
L_089D33D4:
    aot_gpr[19] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2800)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(260)));
    if (aot_gpr[3] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1028)));
        goto L_089D3420;
    }
    goto L_089D33E8;
L_089D33E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(356)));
    goto L_089D33EC;
L_089D33EC:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(352)));
    goto L_089D33F0;
L_089D33F0:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(348)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(340)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(336)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(332)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(328)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    aot_fpr[21] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(372)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(368)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3420:
    aot_gpr[31] = (0x089D3428u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 11u, 0x089D9100u>(ctx, &aot_mem) && ctx.pc == 0x089D3428u) goto L_089D3428;
    return;
L_089D3428:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D33E8;
      }
      goto L_089D3430;
    }
L_089D3430:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2800)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_089D33E8;
      }
      goto L_089D3444;
    }
L_089D3444:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(356)));
      if (branch_taken) {
          goto L_089D33EC;
      }
      goto L_089D344C;
    }
L_089D344C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089D3458u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 44u, 0x089D2260u>(ctx, &aot_mem) && ctx.pc == 0x089D3458u) goto L_089D3458;
    return;
L_089D3458:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089D33E8;
      }
      goto L_089D3460;
    }
L_089D3460:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(356)));
      if (branch_taken) {
          goto L_089D33EC;
      }
      goto L_089D346C;
    }
L_089D346C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(352)));
      if (branch_taken) {
          goto L_089D33F0;
      }
      goto L_089D3478;
    }
L_089D3478:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (2215u << 16u);
    aot_fpr[21] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16012)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16008)));
    aot_gpr[23] = (0u + 0u);
    goto L_089D34A4;
L_089D3490:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    goto L_089D3494;
L_089D3494:
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[23] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(356)));
      if (branch_taken) {
          goto L_089D33EC;
      }
      goto L_089D34A4;
    }
L_089D34A4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (aot_gpr[23] + aot_gpr[2]);
    aot_gpr[31] = (0x089D34B4u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 31u, 0x089D2150u>(ctx, &aot_mem) && ctx.pc == 0x089D34B4u) goto L_089D34B4;
    return;
L_089D34B4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D3490;
      }
      goto L_089D34BC;
    }
L_089D34BC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
        goto L_089D3494;
    }
    goto L_089D34CC;
L_089D34CC:
    aot_gpr[2] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x089D34ECu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 230u, 0x08A42CE8u>(ctx, &aot_mem) && ctx.pc == 0x089D34ECu) goto L_089D34EC;
    return;
L_089D34EC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3504;
      }
      goto L_089D34F8;
    }
L_089D34F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3764;
      }
      goto L_089D3504;
    }
L_089D3504:
    aot_gpr[31] = (0x089D350Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 82u, 0x08986574u>(ctx, &aot_mem) && ctx.pc == 0x089D350Cu) goto L_089D350C;
    return;
L_089D350C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
      if (branch_taken) {
          goto L_089D3490;
      }
      goto L_089D351C;
    }
L_089D351C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
        goto L_089D3494;
    }
    goto L_089D3524;
L_089D3524:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_fpr[1] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[2] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[1])));
    aot_fpr[1] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[0])));
    { const float fs = aot_fpr[1]; const float ft = aot_fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[0] = aot_fpr[1] / aot_fpr[20];
    ctx.set_fpu_condition((aot_fpr[21] <= aot_fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[0] = aot_fpr[0] - aot_fpr[21];
        goto L_089D3810;
    }
    goto L_089D354C;
L_089D354C:
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[0]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_089D3554;
L_089D3554:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
        goto L_089D3494;
    }
    goto L_089D3568;
L_089D3568:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(38)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(255));
    aot_gpr[3] = (aot_gpr[6] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    if (aot_gpr[3] == 0u) aot_gpr[6] = (aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    goto L_089D3580;
L_089D3580:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[2] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    aot_gpr[30] = (aot_gpr[8] + 0u);
    if (aot_gpr[2] == 0u) aot_gpr[30] = (aot_gpr[7]);
    aot_gpr[3] = (aot_gpr[4] < aot_gpr[30] ? 1u : 0u);
    if (aot_gpr[3] != 0u) aot_gpr[30] = (aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[30]) <= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
      if (branch_taken) {
          goto L_089D3660;
      }
      goto L_089D35A4;
    }
L_089D35A4:
    aot_gpr[31] = (0x089D35ACu);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 31u, 0x089D2150u>(ctx, &aot_mem) && ctx.pc == 0x089D35ACu) goto L_089D35AC;
    return;
L_089D35AC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[20] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D3660;
      }
      goto L_089D35B4;
    }
L_089D35B4:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(44));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[21]));
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(5)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(3)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(1)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(2)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (2217u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(16684));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr[30]));
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store_word_left(aot_gpr[8] + static_cast<std::uint32_t>(3), aot_gpr[7]);
    rt.memory().aot_store_word_left(aot_gpr[8] + static_cast<std::uint32_t>(7), aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[8] + static_cast<std::uint32_t>(11), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[8] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    rt.memory().aot_store_word_right(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    aot_gpr[31] = (0x089D363Cu);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(16684), aot_gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 87u, 0x08A434A4u>(ctx, &aot_mem) && ctx.pc == 0x089D363Cu) goto L_089D363C;
    return;
L_089D363C:
    if (aot_gpr[2] != 0u) {
    aot_gpr[20] = (0u + 0u);
        goto L_089D3664;
    }
    goto L_089D3644;
L_089D3644:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
      if (branch_taken) {
          goto L_089D3738;
      }
      goto L_089D3650;
    }
L_089D3650:
    aot_gpr[31] = (0x089D3658u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 25u, 0x08A4313Cu>(ctx, &aot_mem) && ctx.pc == 0x089D3658u) goto L_089D3658;
    return;
L_089D3658:
    if (aot_gpr[2] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(52)));
        goto L_089D3728;
    }
    goto L_089D3660;
L_089D3660:
    aot_gpr[20] = (0u + 0u);
    goto L_089D3664;
L_089D3664:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(124));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089D3674u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089D3674u) goto L_089D3674;
    return;
L_089D3674:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[7] = (2217u << 16u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(14));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[16]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16684));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(124));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1084)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[20]);
    aot_gpr[31] = (0x089D36B8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 221u, 0x08986F4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D36B8u) goto L_089D36B8;
    return;
L_089D36B8:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
        goto L_089D3494;
    }
    goto L_089D36C0;
L_089D36C0:
    aot_gpr[31] = (0x089D36C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 82u, 0x08986574u>(ctx, &aot_mem) && ctx.pc == 0x089D36C8u) goto L_089D36C8;
    return;
L_089D36C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (0x089D36D8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 47u, 0x08A4323Cu>(ctx, &aot_mem) && ctx.pc == 0x089D36D8u) goto L_089D36D8;
    return;
L_089D36D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[31] = (0x089D36E4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 25u, 0x08A4313Cu>(ctx, &aot_mem) && ctx.pc == 0x089D36E4u) goto L_089D36E4;
    return;
L_089D36E4:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr[8] = (aot_gpr[8] - aot_gpr[30]);
    aot_gpr[31] = (0x089D3700u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089D3700u) goto L_089D3700;
    return;
L_089D3700:
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089D370Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 230u, 0x08A42CE8u>(ctx, &aot_mem) && ctx.pc == 0x089D370Cu) goto L_089D370C;
    return;
L_089D370C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D3490;
      }
      goto L_089D3718;
    }
L_089D3718:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
      if (branch_taken) {
          goto L_089D3580;
      }
      goto L_089D3720;
    }
L_089D3720:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    goto L_089D3494;
L_089D3728:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x089D3734u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089D3734u) goto L_089D3734;
    return;
L_089D3734:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    goto L_089D3738;
L_089D3738:
    aot_gpr[31] = (0x089D3740u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 69u, 0x08A43364u>(ctx, &aot_mem) && ctx.pc == 0x089D3740u) goto L_089D3740;
    return;
L_089D3740:
    if (aot_gpr[2] != 0u) {
    aot_gpr[20] = (0u + 0u);
        goto L_089D3664;
    }
    goto L_089D3748;
L_089D3748:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16696));
    aot_gpr[31] = (0x089D375Cu);
    aot_gpr[6] = (aot_gpr[30] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089D375Cu) goto L_089D375C;
    return;
L_089D375C:
    aot_gpr[20] = (aot_gpr[30] + static_cast<std::uint32_t>(12));
    goto L_089D3664;
L_089D3764:
    aot_gpr[31] = (0x089D376Cu);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x089D376Cu) goto L_089D376C;
    return;
L_089D376C:
    aot_gpr[31] = (0x089D3774u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 222u, 0x08A42C74u>(ctx, &aot_mem) && ctx.pc == 0x089D3774u) goto L_089D3774;
    return;
L_089D3774:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(248)));
    aot_gpr[2] = (aot_gpr[21] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
        goto L_089D3494;
    }
    goto L_089D3794;
L_089D3794:
    aot_gpr[2] = (aot_gpr[22] + static_cast<std::uint32_t>(22284));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(304)));
    if (aot_gpr[17] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
        goto L_089D3494;
    }
    goto L_089D37A4;
L_089D37A4:
    aot_gpr[31] = (0x089D37ACu);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 42u, 0x089D2244u>(ctx, &aot_mem) && ctx.pc == 0x089D37ACu) goto L_089D37AC;
    return;
L_089D37AC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(200));
      if (branch_taken) {
          goto L_089D3490;
      }
      goto L_089D37B4;
    }
L_089D37B4:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(76));
    aot_gpr[31] = (0x089D37C4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[21]));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089D37C4u) goto L_089D37C4;
    return;
L_089D37C4:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(80));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(200));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[5]);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(76));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1084)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(252), aot_gpr[3]);
    aot_gpr[3] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[2]);
    aot_gpr[31] = (0x089D3808u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 221u, 0x08986F4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D3808u) goto L_089D3808;
    return;
L_089D3808:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    goto L_089D3494;
L_089D3810:
    aot_gpr[2] = (32768u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[0]));
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[3]);
    goto L_089D3554;
L_089D3828:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(22284));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(304)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_089D3880;
      }
      goto L_089D3850;
    }
L_089D3850:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(288)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_089D3880;
      }
      goto L_089D3860;
    }
L_089D3860:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1024)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (aot_gpr[16] + 0u);
        goto L_089D3888;
    }
    goto L_089D386C;
L_089D386C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-4));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089D38A0;
      }
      goto L_089D3880;
    }
L_089D3880:
    aot_gpr[16] = (0u + 0u);
    goto L_089D3884;
L_089D3884:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089D3888;
L_089D3888:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D38A0:
    aot_gpr[31] = (0x089D38A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 43u, 0x089D92D0u>(ctx, &aot_mem) && ctx.pc == 0x089D38A8u) goto L_089D38A8;
    return;
L_089D38A8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D3884;
      }
      goto L_089D38B0;
    }
L_089D38B0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2800)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(312)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(288), aot_gpr[2]);
      if (branch_taken) {
          goto L_089D3880;
      }
      goto L_089D38C8;
    }
L_089D38C8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(316)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089D38D8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D38D8u) goto L_089D38D8;
    return;
L_089D38D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(316), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(312), 0u);
    goto L_089D3884;
L_089D38E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
      if (branch_taken) {
          goto L_089D3AEC;
      }
      goto L_089D390C;
    }
L_089D390C:
    aot_gpr[21] = (2217u << 16u);
    aot_gpr[17] = (aot_gpr[21] + static_cast<std::uint32_t>(22284));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(15));
      if (branch_taken) {
          goto L_089D3AC4;
      }
      goto L_089D3920;
    }
L_089D3920:
    aot_gpr[31] = (0x089D3928u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0388_entry, 388u, 67u, 0x08988540u>(ctx, &aot_mem) && ctx.pc == 0x089D3928u) goto L_089D3928;
    return;
L_089D3928:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1028)));
    aot_gpr[31] = (0x089D3934u);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 16u, 0x08986158u>(ctx, &aot_mem) && ctx.pc == 0x089D3934u) goto L_089D3934;
    return;
L_089D3934:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(76));
    aot_gpr[31] = (0x089D3948u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089D3948u) goto L_089D3948;
    return;
L_089D3948:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(80));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1084)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(18));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[3]);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    aot_gpr[31] = (0x089D3988u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 221u, 0x08986F4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D3988u) goto L_089D3988;
    return;
L_089D3988:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[20] = (2217u << 16u);
      if (branch_taken) {
          goto L_089D3A00;
      }
      goto L_089D3994;
    }
L_089D3994:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2800)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_089D3A00;
      }
      goto L_089D39A4;
    }
L_089D39A4:
    aot_gpr[19] = (aot_gpr[17] + 0u);
    aot_gpr[17] = (0u + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(296)));
    goto L_089D39B0;
L_089D39B0:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089D39D0;
      }
      goto L_089D39C4;
    }
L_089D39C4:
    aot_gpr[31] = (0x089D39CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x089D39CCu) goto L_089D39CC;
    return;
L_089D39CC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(296)));
    goto L_089D39D0;
L_089D39D0:
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(44));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(72));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D39EC;
      }
      goto L_089D39E4;
    }
L_089D39E4:
    aot_gpr[31] = (0x089D39ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 222u, 0x08A42C74u>(ctx, &aot_mem) && ctx.pc == 0x089D39ECu) goto L_089D39EC;
    return;
L_089D39EC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(260)));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(296)));
        goto L_089D39B0;
    }
    goto L_089D3A00;
L_089D3A00:
    aot_gpr[31] = (0x089D3A08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 125u, 0x089D27C4u>(ctx, &aot_mem) && ctx.pc == 0x089D3A08u) goto L_089D3A08;
    return;
L_089D3A08:
    aot_gpr[31] = (0x089D3A10u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 28u, 0x089D91F4u>(ctx, &aot_mem) && ctx.pc == 0x089D3A10u) goto L_089D3A10;
    return;
L_089D3A10:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2800)));
    aot_gpr[3] = (aot_gpr[21] + static_cast<std::uint32_t>(22284));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(304), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(284), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(288), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089D3AEC;
      }
      goto L_089D3A34;
    }
L_089D3A34:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089D3A50u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0387_entry, 387u, 11u, 0x089870C0u>(ctx, &aot_mem) && ctx.pc == 0x089D3A50u) goto L_089D3A50;
    return;
L_089D3A50:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4232)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089D3A88;
      }
      goto L_089D3A64;
    }
L_089D3A64:
    aot_gpr[31] = (0x089D3A6Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 132u, 0x089D284Cu>(ctx, &aot_mem) && ctx.pc == 0x089D3A6Cu) goto L_089D3A6C;
    return;
L_089D3A6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1248), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1252), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1256), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1260), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1316)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089D3A64;
      }
      goto L_089D3A88;
    }
L_089D3A88:
    aot_gpr[31] = (0x089D3A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 201u, 0x089D1FE4u>(ctx, &aot_mem) && ctx.pc == 0x089D3A90u) goto L_089D3A90;
    return;
L_089D3A90:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2800)));
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(22284));
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(320), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(316), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(324), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(280), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(328), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(312), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(332), 0u);
    goto L_089D3AC4;
L_089D3AC4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3AEC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3B18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
      if (branch_taken) {
          goto L_089D3B58;
      }
      goto L_089D3B30;
    }
L_089D3B30:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(260)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089D3B5C;
      }
      goto L_089D3B4C;
    }
L_089D3B4C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_089D3B6C;
      }
      goto L_089D3B58;
    }
L_089D3B58:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_089D3B5C;
L_089D3B5C:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3B6C:
    aot_gpr[31] = (0x089D3B74u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 42u, 0x089D2244u>(ctx, &aot_mem) && ctx.pc == 0x089D3B74u) goto L_089D3B74;
    return;
L_089D3B74:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D3B88;
      }
      goto L_089D3B80;
    }
L_089D3B80:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_089D3B88;
L_089D3B88:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_089D3B6C;
    }
    goto L_089D3B98;
L_089D3B98:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3BAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089D3BC8u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 11u, 0x089D9100u>(ctx, &aot_mem) && ctx.pc == 0x089D3BC8u) goto L_089D3BC8;
    return;
L_089D3BC8:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089D3C00;
      }
      goto L_089D3BD8;
    }
L_089D3BD8:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(248)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    goto L_089D3B18;
L_089D3C00:
    aot_gpr[31] = (0x089D3C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 18u, 0x089D914Cu>(ctx, &aot_mem) && ctx.pc == 0x089D3C08u) goto L_089D3C08;
    return;
L_089D3C08:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D3BD8;
      }
      goto L_089D3C10;
    }
L_089D3C10:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3C24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-192));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[18]);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[20]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[19]);
      if (branch_taken) {
          goto L_089D3C7C;
      }
      goto L_089D3C60;
    }
L_089D3C60:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(25));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[16] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_089D3CB0;
      }
      goto L_089D3C74;
    }
L_089D3C74:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_089D3C7C;
L_089D3C7C:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3CB0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(29));
      if (branch_taken) {
          goto L_089D3CF8;
      }
      goto L_089D3CBC;
    }
L_089D3CBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(29));
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3CF8:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[3] = (0u | 65535u);
      if (branch_taken) {
          goto L_089D3D94;
      }
      goto L_089D3D04;
    }
L_089D3D04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089D3D98;
      }
      goto L_089D3D14;
    }
L_089D3D14:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[6] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[18]);
        goto L_089D3C7C;
    }
    goto L_089D3D24;
L_089D3D24:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089D3D98;
      }
      goto L_089D3D30;
    }
L_089D3D30:
    aot_gpr[7] = (aot_gpr[2] + static_cast<std::uint32_t>(22284));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(15));
      if (branch_taken) {
          goto L_089D3D48;
      }
      goto L_089D3D40;
    }
L_089D3D40:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    goto L_089D3C7C;
L_089D3D48:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(248)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089D3D98;
      }
      goto L_089D3D58;
    }
L_089D3D58:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(260)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[18]);
        goto L_089D3C7C;
    }
    goto L_089D3D68;
L_089D3D68:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1092)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_089D3FA0;
      }
      goto L_089D3D78;
    }
L_089D3D78:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_089D3FA0;
      }
      goto L_089D3D80;
    }
L_089D3D80:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(14));
      if (branch_taken) {
          goto L_089D3FA4;
      }
      goto L_089D3D88;
    }
L_089D3D88:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1072)));
    if (aot_gpr[22] == aot_gpr[4]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(312), aot_gpr[8]);
        goto L_089D3DA0;
    }
    goto L_089D3D94;
L_089D3D94:
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(3));
    goto L_089D3D98;
L_089D3D98:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    goto L_089D3C7C;
L_089D3DA0:
    aot_gpr[21] = (2217u << 16u);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(20));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(316), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(320), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(324), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(328), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(332), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(1248), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(1252), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(1256), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(1260), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(280), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(304), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(308), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2800)));
    aot_gpr[31] = (0x089D3E28u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(300), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 201u, 0x089D1FE4u>(ctx, &aot_mem) && ctx.pc == 0x089D3E28u) goto L_089D3E28;
    return;
L_089D3E28:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089D3E34u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1028)));
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 18u, 0x089D914Cu>(ctx, &aot_mem) && ctx.pc == 0x089D3E34u) goto L_089D3E34;
    return;
L_089D3E34:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[20] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D3D40;
      }
      goto L_089D3E3C;
    }
L_089D3E3C:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1028)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
    { const bool branch_taken = aot_gpr[23] == aot_gpr[2];
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_089D3D40;
      }
      goto L_089D3E4C;
    }
L_089D3E4C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089D3D94;
      }
      goto L_089D3E58;
    }
L_089D3E58:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1084)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) > 0;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2800)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0464_entry, 464u, 1u, 0x089D4000u>(ctx, &aot_mem); return;
      }
      goto L_089D3E6C;
    }
L_089D3E6C:
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(248)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(11));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(260)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x089D3EA0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089D3EA0u) goto L_089D3EA0;
    return;
L_089D3EA0:
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[22] = (0u + 0u);
      if (branch_taken) {
          goto L_089D3D94;
      }
      goto L_089D3EB0;
    }
L_089D3EB0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(60));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[31] = (0x089D3ED4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1028)));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 16u, 0x08986158u>(ctx, &aot_mem) && ctx.pc == 0x089D3ED4u) goto L_089D3ED4;
    return;
L_089D3ED4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(76));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[7]));
    aot_gpr[31] = (0x089D3EF8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089D3EF8u) goto L_089D3EF8;
    return;
L_089D3EF8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(80));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(72));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[31] = (0x089D3F10u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 38u, 0x08985364u>(ctx, &aot_mem) && ctx.pc == 0x089D3F10u) goto L_089D3F10;
    return;
L_089D3F10:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[2]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(21));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    aot_gpr[3] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) > 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[3]);
      if (branch_taken) {
          goto L_089D3FAC;
      }
      goto L_089D3F30;
    }
L_089D3F30:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1024)));
    goto L_089D3F34;
L_089D3F34:
    if (aot_gpr[3] == 0u) {
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(3));
        goto L_089D3D98;
    }
    goto L_089D3F3C;
L_089D3F3C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1080)));
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[22]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          goto L_089D3D40;
      }
      goto L_089D3F4C;
    }
L_089D3F4C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[23] + 0u);
    aot_gpr[31] = (0x089D3F68u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 132u, 0x089D284Cu>(ctx, &aot_mem) && ctx.pc == 0x089D3F68u) goto L_089D3F68;
    return;
L_089D3F68:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D3D40;
      }
      goto L_089D3F70;
    }
L_089D3F70:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2800)));
    aot_gpr[31] = (0x089D3F8Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(284), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0388_entry, 388u, 67u, 0x08988540u>(ctx, &aot_mem) && ctx.pc == 0x089D3F8Cu) goto L_089D3F8C;
    return;
L_089D3F8C:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089D3F98u);
    aot_gpr[5] = (aot_gpr[23] + 0u);
    goto L_089D3BAC;
L_089D3F98:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    goto L_089D3C7C;
L_089D3FA0:
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(14));
    goto L_089D3FA4;
L_089D3FA4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    goto L_089D3C7C;
L_089D3FAC:
    aot_gpr[16] = (0u + 0u);
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(76));
    goto L_089D3FB4;
L_089D3FB4:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (0x089D3FC4u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 21u, 0x08985274u>(ctx, &aot_mem) && ctx.pc == 0x089D3FC4u) goto L_089D3FC4;
    return;
L_089D3FC4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (0u < aot_gpr[3] ? 1u : 0u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[3]);
      if (branch_taken) {
          goto L_089D3FB4;
      }
      goto L_089D3FE0;
    }
L_089D3FE0:
    if (aot_gpr[22] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1024)));
        goto L_089D3F34;
    }
    goto L_089D3FE8;
L_089D3FE8:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089D3FF8u);
    aot_gpr[6] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 221u, 0x08986F4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D3FF8u) goto L_089D3FF8;
    return;
L_089D3FF8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1024)));
    goto L_089D3F34;
}

void recomp_unit_0463(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0463_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_463(Runtime &runtime) {
    runtime.register_generated_unit(463u, 0x089D3000u, 4096u, &recomp_unit_0463, &recomp_unit_0463_entry);
    runtime.register_function(0x089D3004u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3014u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3020u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3064u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D306Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D30A0u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D30C8u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D30CCu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D30DCu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3124u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3128u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3130u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3164u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D316Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3174u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D317Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3198u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D31A0u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D31A8u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D31B8u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D31C4u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D31D0u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D31D8u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D31E0u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D31E8u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D31FCu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3200u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3214u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D321Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D325Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3264u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D326Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3274u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D327Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D328Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3294u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D329Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D32ACu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D32BCu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D32CCu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D32D4u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D32D8u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D32FCu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3304u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3314u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3338u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D333Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3360u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3388u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D33D4u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D33E8u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D33ECu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D33F0u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3420u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3428u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3430u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3444u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D344Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3458u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3460u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D346Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3478u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3490u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3494u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D34A4u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D34B4u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D34BCu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D34CCu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D34ECu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D34F8u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3504u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D350Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D351Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3524u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D354Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3554u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3568u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3580u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D35A4u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D35ACu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D35B4u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D363Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3644u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3650u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3658u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3660u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3664u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3674u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D36B8u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D36C0u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D36C8u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D36D8u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D36E4u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3700u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D370Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3718u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3720u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3728u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3734u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3738u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3740u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3748u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D375Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3764u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D376Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3774u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3794u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D37A4u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D37ACu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D37B4u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D37C4u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3808u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3810u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3828u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3850u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3860u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D386Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3880u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3884u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3888u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D38A0u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D38A8u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D38B0u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D38C8u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D38D8u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D38E4u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D390Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3920u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3928u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3934u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3948u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3988u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3994u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D39A4u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D39B0u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D39C4u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D39CCu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D39D0u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D39E4u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D39ECu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3A00u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3A08u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3A10u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3A34u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3A50u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3A64u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3A6Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3A88u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3A90u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3AC4u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3AECu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3B18u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3B30u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3B4Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3B58u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3B5Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3B6Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3B74u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3B80u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3B88u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3B98u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3BACu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3BC8u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3BD8u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3C00u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3C08u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3C10u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3C24u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3C60u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3C74u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3C7Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3CB0u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3CBCu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3CF8u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3D04u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3D14u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3D24u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3D30u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3D40u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3D48u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3D58u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3D68u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3D78u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3D80u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3D88u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3D94u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3D98u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3DA0u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3E28u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3E34u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3E3Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3E4Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3E58u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3E6Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3EA0u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3EB0u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3ED4u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3EF8u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3F10u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3F30u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3F34u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3F3Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3F4Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3F68u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3F70u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3F8Cu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3F98u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3FA0u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3FA4u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3FACu, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3FB4u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3FC4u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3FE0u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3FE8u, &recomp_unit_0463, "recomp_unit_0463");
    runtime.register_function(0x089D3FF8u, &recomp_unit_0463, "recomp_unit_0463");
}
} // namespace psprecomp
