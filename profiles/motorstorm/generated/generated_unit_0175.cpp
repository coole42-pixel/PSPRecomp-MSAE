#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0175[1023] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0,
    0, 0, 15, 0, 16, 17, 0, 0, 18, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0,
    0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31,
    0, 0, 32, 33, 34, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 42, 0, 0, 43, 0, 0, 44, 0, 45, 0, 0, 46, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0,
    0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 68, 0, 69, 0, 70, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77,
    0, 78, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 0,
    88, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93,
    0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 99, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0,
    0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 109, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112,
    0, 0, 113, 0, 0, 114, 0, 0, 0, 115, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 122, 123, 0, 124, 0, 0, 0, 0, 0, 0,
    0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 136, 0, 0, 137,
    0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 142, 0, 143, 0,
    0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150,
    0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0,
    155, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 161, 0, 162,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166,
};
void recomp_unit_0175_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088B3000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0175[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088B3000;
    case 2u: goto L_088B3034;
    case 3u: goto L_088B3054;
    case 4u: goto L_088B3068;
    case 5u: goto L_088B309C;
    case 6u: goto L_088B30B4;
    case 7u: goto L_088B30E8;
    case 8u: goto L_088B3104;
    case 9u: goto L_088B311C;
    case 10u: goto L_088B3128;
    case 11u: goto L_088B3148;
    case 12u: goto L_088B315C;
    case 13u: goto L_088B31DC;
    case 14u: goto L_088B31EC;
    case 15u: goto L_088B3208;
    case 16u: goto L_088B3210;
    case 17u: goto L_088B3214;
    case 18u: goto L_088B3220;
    case 19u: goto L_088B3234;
    case 20u: goto L_088B323C;
    case 21u: goto L_088B324C;
    case 22u: goto L_088B3254;
    case 23u: goto L_088B3268;
    case 24u: goto L_088B3270;
    case 25u: goto L_088B3278;
    case 26u: goto L_088B3290;
    case 27u: goto L_088B32A0;
    case 28u: goto L_088B32B8;
    case 29u: goto L_088B32C0;
    case 30u: goto L_088B32D0;
    case 31u: goto L_088B32FC;
    case 32u: goto L_088B3308;
    case 33u: goto L_088B330C;
    case 34u: goto L_088B3310;
    case 35u: goto L_088B3318;
    case 36u: goto L_088B3324;
    case 37u: goto L_088B3388;
    case 38u: goto L_088B33A0;
    case 39u: goto L_088B33B4;
    case 40u: goto L_088B33D8;
    case 41u: goto L_088B33F0;
    case 42u: goto L_088B3404;
    case 43u: goto L_088B3410;
    case 44u: goto L_088B341C;
    case 45u: goto L_088B3424;
    case 46u: goto L_088B3430;
    case 47u: goto L_088B3438;
    case 48u: goto L_088B3444;
    case 49u: goto L_088B345C;
    case 50u: goto L_088B3468;
    case 51u: goto L_088B349C;
    case 52u: goto L_088B34BC;
    case 53u: goto L_088B34D0;
    case 54u: goto L_088B34DC;
    case 55u: goto L_088B3500;
    case 56u: goto L_088B351C;
    case 57u: goto L_088B3528;
    case 58u: goto L_088B3538;
    case 59u: goto L_088B3548;
    case 60u: goto L_088B3550;
    case 61u: goto L_088B355C;
    case 62u: goto L_088B35C4;
    case 63u: goto L_088B35D4;
    case 64u: goto L_088B35F4;
    case 65u: goto L_088B360C;
    case 66u: goto L_088B361C;
    case 67u: goto L_088B362C;
    case 68u: goto L_088B3638;
    case 69u: goto L_088B3640;
    case 70u: goto L_088B3648;
    case 71u: goto L_088B3650;
    case 72u: goto L_088B3658;
    case 73u: goto L_088B36A8;
    case 74u: goto L_088B36C0;
    case 75u: goto L_088B36C8;
    case 76u: goto L_088B36F0;
    case 77u: goto L_088B36FC;
    case 78u: goto L_088B3704;
    case 79u: goto L_088B3708;
    case 80u: goto L_088B372C;
    case 81u: goto L_088B3758;
    case 82u: goto L_088B377C;
    case 83u: goto L_088B3838;
    case 84u: goto L_088B384C;
    case 85u: goto L_088B3858;
    case 86u: goto L_088B3864;
    case 87u: goto L_088B3874;
    case 88u: goto L_088B3880;
    case 89u: goto L_088B388C;
    case 90u: goto L_088B38A4;
    case 91u: goto L_088B38C8;
    case 92u: goto L_088B38E4;
    case 93u: goto L_088B38FC;
    case 94u: goto L_088B3908;
    case 95u: goto L_088B3928;
    case 96u: goto L_088B393C;
    case 97u: goto L_088B3968;
    case 98u: goto L_088B39AC;
    case 99u: goto L_088B39B0;
    case 100u: goto L_088B39CC;
    case 101u: goto L_088B39D4;
    case 102u: goto L_088B39E0;
    case 103u: goto L_088B39F8;
    case 104u: goto L_088B3A04;
    case 105u: goto L_088B3A18;
    case 106u: goto L_088B3A30;
    case 107u: goto L_088B3A3C;
    case 108u: goto L_088B3A48;
    case 109u: goto L_088B3A50;
    case 110u: goto L_088B3A54;
    case 111u: goto L_088B3A68;
    case 112u: goto L_088B3A7C;
    case 113u: goto L_088B3A88;
    case 114u: goto L_088B3A94;
    case 115u: goto L_088B3AA4;
    case 116u: goto L_088B3AB0;
    case 117u: goto L_088B3AB8;
    case 118u: goto L_088B3AC8;
    case 119u: goto L_088B3AF4;
    case 120u: goto L_088B3B48;
    case 121u: goto L_088B3B54;
    case 122u: goto L_088B3B58;
    case 123u: goto L_088B3B5C;
    case 124u: goto L_088B3B64;
    case 125u: goto L_088B3B88;
    case 126u: goto L_088B3BC0;
    case 127u: goto L_088B3BE4;
    case 128u: goto L_088B3C0C;
    case 129u: goto L_088B3C28;
    case 130u: goto L_088B3C4C;
    case 131u: goto L_088B3C84;
    case 132u: goto L_088B3C9C;
    case 133u: goto L_088B3CB0;
    case 134u: goto L_088B3CD4;
    case 135u: goto L_088B3CE0;
    case 136u: goto L_088B3CF0;
    case 137u: goto L_088B3CFC;
    case 138u: goto L_088B3D0C;
    case 139u: goto L_088B3D30;
    case 140u: goto L_088B3D3C;
    case 141u: goto L_088B3D6C;
    case 142u: goto L_088B3D70;
    case 143u: goto L_088B3D78;
    case 144u: goto L_088B3D8C;
    case 145u: goto L_088B3D9C;
    case 146u: goto L_088B3DD4;
    case 147u: goto L_088B3E04;
    case 148u: goto L_088B3E24;
    case 149u: goto L_088B3E6C;
    case 150u: goto L_088B3E7C;
    case 151u: goto L_088B3E88;
    case 152u: goto L_088B3EA8;
    case 153u: goto L_088B3EC0;
    case 154u: goto L_088B3EE4;
    case 155u: goto L_088B3F00;
    case 156u: goto L_088B3F18;
    case 157u: goto L_088B3F24;
    case 158u: goto L_088B3F44;
    case 159u: goto L_088B3F58;
    case 160u: goto L_088B3F68;
    case 161u: goto L_088B3F74;
    case 162u: goto L_088B3F7C;
    case 163u: goto L_088B3F90;
    case 164u: goto L_088B3FA4;
    case 165u: goto L_088B3FC4;
    case 166u: goto L_088B3FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088B3000:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3034:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27536), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3054:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088B3068u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 78u, 0x088AACD0u>(ctx, &aot_mem) && ctx.pc == 0x088B3068u) goto L_088B3068;
    return;
L_088B3068:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3952));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(148), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(152), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B309C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088B30B4u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 78u, 0x088AACD0u>(ctx, &aot_mem) && ctx.pc == 0x088B30B4u) goto L_088B30B4;
    return;
L_088B30B4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3952));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(148), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(152), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B30E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B3148;
      }
      goto L_088B3104;
    }
L_088B3104:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3952));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088B311Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 164u, 0x088A9C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088B311Cu) goto L_088B311C;
    return;
L_088B311C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088B3148;
      }
      goto L_088B3128;
    }
L_088B3128:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088B3148u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B3148u) goto L_088B3148;
    return;
L_088B3148:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B315C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (0u | 10u);
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[7] = (0u | 1000u);
    aot_gpr[8] = (0u | 100u);
    aot_gpr[9] = (0u | 60u);
    aot_gpr[10] = (0u | 60000u);
    aot_gpr[6] = (0u | 99u);
    aot_gpr[11] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[11]; const std::uint32_t divisor = aot_gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[8] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[7]; const std::uint32_t divisor = aot_gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[7] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[10]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[5] = (ctx.lo);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(160)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[7]) < 100 ? 1u : 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(162)));
        goto L_088B31DC;
    }
    goto L_088B31DC;
L_088B31DC:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (0u | 59u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(161)));
        goto L_088B31EC;
    }
    goto L_088B31EC;
L_088B31EC:
    aot_gpr[5] = (0u | 99u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_088B3210;
      }
      goto L_088B3208;
    }
L_088B3208:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088B3214;
      }
      goto L_088B3210;
    }
L_088B3210:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_088B3214;
L_088B3214:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(aot_gpr[5]));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3220:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088B3234u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 26u, 0x088AB300u>(ctx, &aot_mem) && ctx.pc == 0x088B3234u) goto L_088B3234;
    return;
L_088B3234:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B32C0;
      }
      goto L_088B323C;
    }
L_088B323C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(148)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
        goto L_088B3270;
    }
    goto L_088B324C;
L_088B324C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088B32C0;
      }
      goto L_088B3254;
    }
L_088B3254:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7504));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x088B3268u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088B315C;
L_088B3268:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B32C0;
      }
      goto L_088B3270;
    }
L_088B3270:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B32C0;
      }
      goto L_088B3278;
    }
L_088B3278:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(156)));
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088B32A0;
      }
      goto L_088B3290;
    }
L_088B3290:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088B32B8;
      }
      goto L_088B32A0;
    }
L_088B32A0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4444)));
    aot_gpr[31] = (0x088B32B8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(140)));
    goto L_088B315C;
L_088B32B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B32C0;
      }
      goto L_088B32C0;
    }
L_088B32C0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B32D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(30)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088B330C;
      }
      goto L_088B32FC;
    }
L_088B32FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088B3310;
      }
      goto L_088B3308;
    }
L_088B3308:
    aot_gpr[4] = (0u | 1u);
    goto L_088B330C;
L_088B330C:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_088B3310;
L_088B3310:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B349C;
      }
      goto L_088B3318;
    }
L_088B3318:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088B3324u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 53u, 0x088AAA7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3324u) goto L_088B3324;
    return;
L_088B3324:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(104))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(116))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[6] = (16672u << 16u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(106))))));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(117))))));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[4] = (16800u << 16u);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    aot_fpr[13] = aot_fpr[15] + aot_fpr[22];
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    aot_gpr[4] = (0u | 109u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = aot_fpr[13] + aot_fpr[16];
    aot_gpr[31] = (0x088B3388u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088B3388u) goto L_088B3388;
    return;
L_088B3388:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(160)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(161)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(162)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088B33A0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088B33A0u) goto L_088B33A0;
    return;
L_088B33A0:
    aot_gpr[5] = (16256u << 16u);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[31] = (0x088B33B4u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 34u, 0x088B0270u>(ctx, &aot_mem) && ctx.pc == 0x088B33B4u) goto L_088B33B4;
    return;
L_088B33B4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x088B33D8u);
    aot_gpr[10] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088B33D8u) goto L_088B33D8;
    return;
L_088B33D8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(156)));
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B349C;
      }
      goto L_088B33F0;
    }
L_088B33F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (65333u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32560));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    aot_gpr[6] = (65328u << 16u);
      if (branch_taken) {
          goto L_088B341C;
      }
      goto L_088B3404;
    }
L_088B3404:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(12415));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (65344u << 16u);
      if (branch_taken) {
          goto L_088B341C;
      }
      goto L_088B3410;
    }
L_088B3410:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16448));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088B349C;
      }
      goto L_088B341C;
    }
L_088B341C:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_088B3430;
      }
      goto L_088B3424;
    }
L_088B3424:
    aot_gpr[4] = (0u | 45u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088B3438;
      }
      goto L_088B3430;
    }
L_088B3430:
    aot_gpr[4] = (0u | 43u);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_088B3438;
L_088B3438:
    aot_gpr[4] = (0u | 109u);
    aot_gpr[31] = (0x088B3444u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088B3444u) goto L_088B3444;
    return;
L_088B3444:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(163)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(164)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(165)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088B345Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088B345Cu) goto L_088B345C;
    return;
L_088B345C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088B3468u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088B3468u) goto L_088B3468;
    return;
L_088B3468:
    aot_gpr[4] = (17264u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x088B349Cu);
    aot_gpr[10] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088B349Cu) goto L_088B349C;
    return;
L_088B349C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B34BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088B34D0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 189u, 0x088A9E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088B34D0u) goto L_088B34D0;
    return;
L_088B34D0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088B34DCu);
    aot_gpr[5] = (0u | 0u);
    goto L_088B315C;
L_088B34DC:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3500:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[2] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088B351Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088B315C;
L_088B351C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B35C4;
      }
      goto L_088B3528;
    }
L_088B3528:
    aot_gpr[5] = (65333u << 16u);
    aot_gpr[6] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32560));
      if (branch_taken) {
          goto L_088B3550;
      }
      goto L_088B3538;
    }
L_088B3538:
    aot_gpr[5] = (65344u << 16u);
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16448));
      if (branch_taken) {
          goto L_088B3550;
      }
      goto L_088B3548;
    }
L_088B3548:
    aot_gpr[5] = (65328u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12415));
    goto L_088B3550;
L_088B3550:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[31] = (0x088B355Cu);
    aot_gpr[4] = (aot_gpr[2] - aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 87u, 0x08A39434u>(ctx, &aot_mem) && ctx.pc == 0x088B355Cu) goto L_088B355C;
    return;
L_088B355C:
    aot_gpr[4] = (0u | 10u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[4] = (0u | 1000u);
    aot_gpr[5] = (0u | 100u);
    aot_gpr[6] = (0u | 60u);
    aot_gpr[7] = (0u | 60000u);
    aot_gpr[8] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[5] = (ctx.hi);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (ctx.hi);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (ctx.lo);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088B35C4;
L_088B35C4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B35D4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27544), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B35F4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(156)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(156)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B3648;
      }
      goto L_088B360C;
    }
L_088B360C:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B3640;
      }
      goto L_088B361C;
    }
L_088B361C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_088B3638;
      }
      goto L_088B362C;
    }
L_088B362C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_088B3650;
      }
      goto L_088B3638;
    }
L_088B3638:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B3650;
      }
      goto L_088B3640;
    }
L_088B3640:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B3650;
      }
      goto L_088B3648;
    }
L_088B3648:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B3650;
      }
      goto L_088B3650;
    }
L_088B3650:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3658:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    aot_gpr[10] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[6] = (0u | 1u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[31]);
    aot_gpr[31] = (0x088B36A8u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 221u, 0x08A4BFECu>(ctx, &aot_mem) && ctx.pc == 0x088B36A8u) goto L_088B36A8;
    return;
L_088B36A8:
    aot_gpr[4] = (aot_gpr[10] | 0u);
    aot_gpr[6] = (16848u << 16u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[6]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B36F0;
      }
      goto L_088B36C0;
    }
L_088B36C0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_088B3708;
      }
      goto L_088B36C8;
    }
L_088B36C8:
    aot_gpr[4] = (16864u << 16u);
    aot_fpr[18] = __builtin_bit_cast(float, 0u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[19] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[17]));
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[18]));
    aot_fpr[17] = aot_fpr[17] + aot_fpr[16];
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[16] = aot_fpr[18] + aot_fpr[16];
      if (branch_taken) {
          goto L_088B377C;
      }
      goto L_088B36F0;
    }
L_088B36F0:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B372C;
      }
      goto L_088B36FC;
    }
L_088B36FC:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (16864u << 16u);
      if (branch_taken) {
          goto L_088B3758;
      }
      goto L_088B3704;
    }
L_088B3704:
    aot_gpr[4] = (16256u << 16u);
    goto L_088B3708;
L_088B3708:
    aot_fpr[18] = __builtin_bit_cast(float, 0u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[19] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[17]));
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[18]));
    aot_fpr[17] = aot_fpr[17] + aot_fpr[16];
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[16] = aot_fpr[18] + aot_fpr[16];
      if (branch_taken) {
          goto L_088B377C;
      }
      goto L_088B372C;
    }
L_088B372C:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[19] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[17]));
    aot_gpr[4] = (16856u << 16u);
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[18]));
    aot_fpr[17] = aot_fpr[17] + aot_fpr[16];
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[16] = aot_fpr[18] + aot_fpr[16];
      if (branch_taken) {
          goto L_088B377C;
      }
      goto L_088B3758;
    }
L_088B3758:
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[19] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[17]));
    aot_gpr[4] = (16856u << 16u);
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[18]));
    aot_fpr[17] = aot_fpr[17] + aot_fpr[16];
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_fpr[16] = aot_fpr[18] + aot_fpr[16];
    goto L_088B377C;
L_088B377C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[17] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[17]));
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[18] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[19] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[15];
    aot_gpr[6] = (2215u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[9]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25408)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088B3838u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x088B3838u) goto L_088B3838;
    return;
L_088B3838:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] | 10u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
      if (branch_taken) {
          goto L_088B3858;
      }
      goto L_088B384C;
    }
L_088B384C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[4]);
    goto L_088B3858;
L_088B3858:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088B3864u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x088B3864u) goto L_088B3864;
    return;
L_088B3864:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088B3874u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 59u, 0x0892F600u>(ctx, &aot_mem) && ctx.pc == 0x088B3874u) goto L_088B3874;
    return;
L_088B3874:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088B3880u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 62u, 0x089356ACu>(ctx, &aot_mem) && ctx.pc == 0x088B3880u) goto L_088B3880;
    return;
L_088B3880:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B388C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088B38A4u);
    aot_gpr[6] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 78u, 0x088AACD0u>(ctx, &aot_mem) && ctx.pc == 0x088B38A4u) goto L_088B38A4;
    return;
L_088B38A4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3904));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B38C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B3928;
      }
      goto L_088B38E4;
    }
L_088B38E4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3904));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088B38FCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 164u, 0x088A9C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088B38FCu) goto L_088B38FC;
    return;
L_088B38FC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088B3928;
      }
      goto L_088B3908;
    }
L_088B3908:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088B3928u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B3928u) goto L_088B3928;
    return;
L_088B3928:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B393C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[31]);
    aot_gpr[31] = (0x088B3968u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 26u, 0x088AB300u>(ctx, &aot_mem) && ctx.pc == 0x088B3968u) goto L_088B3968;
    return;
L_088B3968:
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[5] = (20224u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[21] = (32768u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(160), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(164), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(168), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B39CC;
      }
      goto L_088B39AC;
    }
L_088B39AC:
    aot_gpr[7] = (aot_gpr[29] | 0u);
    goto L_088B39B0;
L_088B39B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(296));
    aot_gpr[8] = (aot_gpr[5] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B39B0;
      }
      goto L_088B39CC;
    }
L_088B39CC:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B39F8;
      }
      goto L_088B39D4;
    }
L_088B39D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088B39E0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_088B35F4;
L_088B39E0:
    aot_gpr[5] = (aot_gpr[20] << 2u);
    aot_gpr[6] = (2187u << 16u);
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088B39F8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(13812));
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 164u, 0x08A4FCC8u>(ctx, &aot_mem) && ctx.pc == 0x088B39F8u) goto L_088B39F8;
    return;
L_088B39F8:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_088B3A04;
L_088B3A04:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3A54;
      }
      goto L_088B3A18;
    }
L_088B3A18:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(156)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
        goto L_088B3A3C;
    }
    goto L_088B3A30;
L_088B3A30:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088B3A48;
      }
      goto L_088B3A3C;
    }
L_088B3A3C:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[21]);
    goto L_088B3A48;
L_088B3A48:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[19];
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(148), aot_gpr[7]);
      if (branch_taken) {
          goto L_088B3A54;
      }
      goto L_088B3A50;
    }
L_088B3A50:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(160), aot_gpr[4]);
    goto L_088B3A54;
L_088B3A54:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[4] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B3A04;
      }
      goto L_088B3A68;
    }
L_088B3A68:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(156)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
        goto L_088B3A88;
    }
    goto L_088B3A7C;
L_088B3A7C:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088B3A94;
      }
      goto L_088B3A88;
    }
L_088B3A88:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[21] = (aot_gpr[4] + aot_gpr[21]);
    goto L_088B3A94;
L_088B3A94:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(164), aot_gpr[21]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088B3AA4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7512)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 253u, 0x088BEF2Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3AA4u) goto L_088B3AA4;
    return;
L_088B3AA4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3AC8;
      }
      goto L_088B3AB0;
    }
L_088B3AB0:
    aot_gpr[31] = (0x088B3AB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 64u, 0x0886D408u>(ctx, &aot_mem) && ctx.pc == 0x088B3AB8u) goto L_088B3AB8;
    return;
L_088B3AB8:
    aot_gpr[4] = (aot_gpr[2] << 3u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(144)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(168), aot_gpr[4]);
    goto L_088B3AC8;
L_088B3AC8:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3AF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(30)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088B3B58;
      }
      goto L_088B3B48;
    }
L_088B3B48:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088B3B5C;
      }
      goto L_088B3B54;
    }
L_088B3B54:
    aot_gpr[4] = (0u | 1u);
    goto L_088B3B58;
L_088B3B58:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_088B3B5C;
L_088B3B5C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3E24;
      }
      goto L_088B3B64;
    }
L_088B3B64:
    aot_gpr[4] = (17387u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[4] = (16800u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[31] = (0x088B3B88u);
    aot_gpr[4] = (0u | 72u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088B3B88u) goto L_088B3B88;
    return;
L_088B3B88:
    aot_gpr[23] = (65409u << 16u);
    aot_gpr[10] = (16256u << 16u);
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[10]);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-32640));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (aot_gpr[30] | 0u);
    aot_gpr[8] = (aot_gpr[23] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x088B3BC0u);
    aot_gpr[10] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088B3BC0u) goto L_088B3BC0;
    return;
L_088B3BC0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (2214u << 16u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[24];
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(168)));
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(29384));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088B3BE4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088B3BE4u) goto L_088B3BE4;
    return;
L_088B3BE4:
    aot_gpr[8] = (65389u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[30] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 4u);
    aot_gpr[31] = (0x088B3C0Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(24637));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088B3C0Cu) goto L_088B3C0C;
    return;
L_088B3C0C:
    aot_gpr[4] = (16928u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (0u | 71u);
    aot_gpr[31] = (0x088B3C28u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088B3C28u) goto L_088B3C28;
    return;
L_088B3C28:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (aot_gpr[30] | 0u);
    aot_gpr[8] = (aot_gpr[23] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x088B3C4Cu);
    aot_gpr[10] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088B3C4Cu) goto L_088B3C4C;
    return;
L_088B3C4C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (16268u << 16u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[24];
    aot_gpr[5] = (20352u << 16u);
    aot_gpr[6] = (16848u << 16u);
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[19] = (0u | 0u);
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[22] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[16]);
    goto L_088B3C84;
L_088B3C84:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3D78;
      }
      goto L_088B3C9C;
    }
L_088B3C9C:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[21]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    if (static_cast<std::int32_t>(aot_gpr[21]) < 0) {
    aot_fpr[12] = aot_fpr[12] + aot_fpr[30];
        goto L_088B3CB0;
    }
    goto L_088B3CB0;
L_088B3CB0:
    aot_fpr[13] = aot_fpr[13] + aot_fpr[12];
    aot_gpr[6] = (16672u << 16u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[31] = (0x088B3CD4u);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[24];
    goto L_088B3658;
L_088B3CD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_088B3CF0;
      }
      goto L_088B3CE0;
    }
L_088B3CE0:
    aot_gpr[16] = (65280u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(28539));
      if (branch_taken) {
          goto L_088B3CFC;
      }
      goto L_088B3CF0;
    }
L_088B3CF0:
    aot_gpr[16] = (65389u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(24637));
    goto L_088B3CFC;
L_088B3CFC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(148)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x088B3D0Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088B3D0Cu) goto L_088B3D0C;
    return;
L_088B3D0C:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[30] | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x088B3D30u);
    aot_gpr[10] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088B3D30u) goto L_088B3D30;
    return;
L_088B3D30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[19];
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088B3D70;
      }
      goto L_088B3D3C;
    }
L_088B3D3C:
    aot_gpr[4] = (16784u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (17092u << 16u);
    aot_fpr[13] = aot_fpr[20] - aot_fpr[13];
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16816u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (65281u << 16u);
    aot_gpr[31] = (0x088B3D6Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32640));
    goto L_088B3658;
L_088B3D6C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_088B3D70;
L_088B3D70:
    aot_fpr[12] = aot_fpr[20] + aot_fpr[24];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088B3D78;
L_088B3D78:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B3C84;
      }
      goto L_088B3D8C;
    }
L_088B3D8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(160)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[7] = (17092u << 16u);
      if (branch_taken) {
          goto L_088B3E24;
      }
      goto L_088B3D9C;
    }
L_088B3D9C:
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[4] = (16928u << 16u);
    aot_gpr[7] = (16784u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(164)));
    aot_gpr[7] = (16816u << 16u);
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (65281u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088B3DD4u);
    aot_gpr[16] = (aot_gpr[7] + static_cast<std::uint32_t>(-32640));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088B3DD4u) goto L_088B3DD4;
    return;
L_088B3DD4:
    aot_gpr[8] = (16281u << 16u);
    aot_gpr[8] = (aot_gpr[8] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[8] = (65280u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[30] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 1u);
    aot_gpr[31] = (0x088B3E04u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(28539));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088B3E04u) goto L_088B3E04;
    return;
L_088B3E04:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[24];
    aot_gpr[5] = (0u | 3u);
    aot_gpr[31] = (0x088B3E24u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    goto L_088B3658;
L_088B3E24:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3E6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088B3E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 189u, 0x088A9E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3E7Cu) goto L_088B3E7C;
    return;
L_088B3E7C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3E88:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27552), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3EA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088B3EC0u);
    aot_gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 78u, 0x088AACD0u>(ctx, &aot_mem) && ctx.pc == 0x088B3EC0u) goto L_088B3EC0;
    return;
L_088B3EC0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3856));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3EE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B3F44;
      }
      goto L_088B3F00;
    }
L_088B3F00:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3856));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088B3F18u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 164u, 0x088A9C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3F18u) goto L_088B3F18;
    return;
L_088B3F18:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088B3F44;
      }
      goto L_088B3F24;
    }
L_088B3F24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088B3F44u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B3F44u) goto L_088B3F44;
    return;
L_088B3F44:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3F58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088B3F68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 26u, 0x088AB300u>(ctx, &aot_mem) && ctx.pc == 0x088B3F68u) goto L_088B3F68;
    return;
L_088B3F68:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3F74:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3F7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088B3F90u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 189u, 0x088A9E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3F90u) goto L_088B3F90;
    return;
L_088B3F90:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(148), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3FA4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27560), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3FC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[31]);
    aot_gpr[31] = (0x088B3FF8u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 221u, 0x08A4BFECu>(ctx, &aot_mem) && ctx.pc == 0x088B3FF8u) goto L_088B3FF8;
    return;
L_088B3FF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 39u);
    ctx.pc = 0x088B4000u; return;
}

void recomp_unit_0175(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0175_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_175(Runtime &runtime) {
    runtime.register_generated_unit(175u, 0x088B3000u, 4096u, &recomp_unit_0175, &recomp_unit_0175_entry);
    runtime.register_function(0x088B3000u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3034u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3054u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3068u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B309Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B30B4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B30E8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3104u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B311Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3128u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3148u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B315Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B31DCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B31ECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3208u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3210u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3214u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3220u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3234u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B323Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B324Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3254u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3268u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3270u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3278u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3290u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B32A0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B32B8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B32C0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B32D0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B32FCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3308u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B330Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3310u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3318u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3324u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3388u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B33A0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B33B4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B33D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B33F0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3404u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3410u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B341Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3424u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3430u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3438u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3444u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B345Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3468u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B349Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B34BCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B34D0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B34DCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3500u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B351Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3528u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3538u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3548u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3550u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B355Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B35C4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B35D4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B35F4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B360Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B361Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B362Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3638u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3640u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3648u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3650u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3658u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B36A8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B36C0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B36C8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B36F0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B36FCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3704u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3708u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B372Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3758u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B377Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3838u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B384Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3858u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3864u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3874u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3880u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B388Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B38A4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B38C8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B38E4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B38FCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3908u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3928u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B393Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3968u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B39ACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B39B0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B39CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B39D4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B39E0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B39F8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3A04u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3A18u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3A30u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3A3Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3A48u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3A50u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3A54u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3A68u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3A7Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3A88u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3A94u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3AA4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3AB0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3AB8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3AC8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3AF4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3B48u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3B54u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3B58u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3B5Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3B64u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3B88u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3BC0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3BE4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3C0Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3C28u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3C4Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3C84u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3C9Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3CB0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3CD4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3CE0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3CF0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3CFCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3D0Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3D30u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3D3Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3D6Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3D70u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3D78u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3D8Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3D9Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3DD4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3E04u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3E24u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3E6Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3E7Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3E88u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3EA8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3EC0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3EE4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3F00u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3F18u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3F24u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3F44u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3F58u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3F68u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3F74u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3F7Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3F90u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3FA4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3FC4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x088B3FF8u, &recomp_unit_0175, "recomp_unit_0175");
}
} // namespace psprecomp
