#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0243[1024] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 5,
    0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 12, 13, 0,
    0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 21,
    0, 22, 0, 23, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 30, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38,
    0, 39, 0, 40, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0,
    0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75,
    0, 0, 0, 76, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 85, 86, 87, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91,
    0, 92, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0,
    100, 0, 0, 0, 101, 0, 102, 0, 0, 0, 103, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 108, 0, 109, 0, 0, 110,
    0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0,
    127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0,
    134, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140,
    0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 149, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0,
    0, 0, 0, 154, 0, 0, 0, 155, 0, 156, 0, 0, 0, 157, 0, 158, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0,
    0, 0, 0, 0, 163, 164, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170,
};
void recomp_unit_0243_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088F7000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0243[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088F7000;
    case 2u: goto L_088F702C;
    case 3u: goto L_088F7060;
    case 4u: goto L_088F7070;
    case 5u: goto L_088F707C;
    case 6u: goto L_088F7094;
    case 7u: goto L_088F70A0;
    case 8u: goto L_088F70B0;
    case 9u: goto L_088F70C4;
    case 10u: goto L_088F7154;
    case 11u: goto L_088F715C;
    case 12u: goto L_088F7174;
    case 13u: goto L_088F7178;
    case 14u: goto L_088F7184;
    case 15u: goto L_088F7190;
    case 16u: goto L_088F719C;
    case 17u: goto L_088F71A8;
    case 18u: goto L_088F71CC;
    case 19u: goto L_088F71D8;
    case 20u: goto L_088F71EC;
    case 21u: goto L_088F71FC;
    case 22u: goto L_088F7204;
    case 23u: goto L_088F720C;
    case 24u: goto L_088F7218;
    case 25u: goto L_088F7228;
    case 26u: goto L_088F7238;
    case 27u: goto L_088F723C;
    case 28u: goto L_088F7264;
    case 29u: goto L_088F7270;
    case 30u: goto L_088F7274;
    case 31u: goto L_088F729C;
    case 32u: goto L_088F72A4;
    case 33u: goto L_088F72B0;
    case 34u: goto L_088F72BC;
    case 35u: goto L_088F72E0;
    case 36u: goto L_088F7300;
    case 37u: goto L_088F7374;
    case 38u: goto L_088F737C;
    case 39u: goto L_088F7384;
    case 40u: goto L_088F738C;
    case 41u: goto L_088F739C;
    case 42u: goto L_088F73A4;
    case 43u: goto L_088F73B8;
    case 44u: goto L_088F73C0;
    case 45u: goto L_088F73DC;
    case 46u: goto L_088F73E8;
    case 47u: goto L_088F7424;
    case 48u: goto L_088F7448;
    case 49u: goto L_088F746C;
    case 50u: goto L_088F7480;
    case 51u: goto L_088F74F8;
    case 52u: goto L_088F7540;
    case 53u: goto L_088F7554;
    case 54u: goto L_088F7560;
    case 55u: goto L_088F75A0;
    case 56u: goto L_088F75A8;
    case 57u: goto L_088F75C0;
    case 58u: goto L_088F75C8;
    case 59u: goto L_088F75DC;
    case 60u: goto L_088F7614;
    case 61u: goto L_088F7628;
    case 62u: goto L_088F7634;
    case 63u: goto L_088F7680;
    case 64u: goto L_088F76B0;
    case 65u: goto L_088F7724;
    case 66u: goto L_088F7740;
    case 67u: goto L_088F7774;
    case 68u: goto L_088F7784;
    case 69u: goto L_088F7794;
    case 70u: goto L_088F77A4;
    case 71u: goto L_088F77B4;
    case 72u: goto L_088F77C4;
    case 73u: goto L_088F77D4;
    case 74u: goto L_088F77E4;
    case 75u: goto L_088F77FC;
    case 76u: goto L_088F780C;
    case 77u: goto L_088F7814;
    case 78u: goto L_088F7820;
    case 79u: goto L_088F783C;
    case 80u: goto L_088F7850;
    case 81u: goto L_088F7890;
    case 82u: goto L_088F78C0;
    case 83u: goto L_088F78D4;
    case 84u: goto L_088F78DC;
    case 85u: goto L_088F78F0;
    case 86u: goto L_088F78F4;
    case 87u: goto L_088F78F8;
    case 88u: goto L_088F7940;
    case 89u: goto L_088F7950;
    case 90u: goto L_088F7974;
    case 91u: goto L_088F797C;
    case 92u: goto L_088F7984;
    case 93u: goto L_088F7998;
    case 94u: goto L_088F79A4;
    case 95u: goto L_088F79B8;
    case 96u: goto L_088F79D4;
    case 97u: goto L_088F7A24;
    case 98u: goto L_088F7A68;
    case 99u: goto L_088F7A70;
    case 100u: goto L_088F7A80;
    case 101u: goto L_088F7A90;
    case 102u: goto L_088F7A98;
    case 103u: goto L_088F7AA8;
    case 104u: goto L_088F7AB0;
    case 105u: goto L_088F7AC0;
    case 106u: goto L_088F7AD0;
    case 107u: goto L_088F7AE0;
    case 108u: goto L_088F7AE8;
    case 109u: goto L_088F7AF0;
    case 110u: goto L_088F7AFC;
    case 111u: goto L_088F7B10;
    case 112u: goto L_088F7B2C;
    case 113u: goto L_088F7B9C;
    case 114u: goto L_088F7BD4;
    case 115u: goto L_088F7BF8;
    case 116u: goto L_088F7C10;
    case 117u: goto L_088F7C20;
    case 118u: goto L_088F7C28;
    case 119u: goto L_088F7C3C;
    case 120u: goto L_088F7C44;
    case 121u: goto L_088F7C8C;
    case 122u: goto L_088F7C94;
    case 123u: goto L_088F7CB0;
    case 124u: goto L_088F7CB8;
    case 125u: goto L_088F7CE0;
    case 126u: goto L_088F7CF0;
    case 127u: goto L_088F7D00;
    case 128u: goto L_088F7D10;
    case 129u: goto L_088F7D20;
    case 130u: goto L_088F7D30;
    case 131u: goto L_088F7D34;
    case 132u: goto L_088F7D64;
    case 133u: goto L_088F7D70;
    case 134u: goto L_088F7D80;
    case 135u: goto L_088F7D90;
    case 136u: goto L_088F7D98;
    case 137u: goto L_088F7DAC;
    case 138u: goto L_088F7DD4;
    case 139u: goto L_088F7DEC;
    case 140u: goto L_088F7DFC;
    case 141u: goto L_088F7E14;
    case 142u: goto L_088F7E28;
    case 143u: goto L_088F7E30;
    case 144u: goto L_088F7E40;
    case 145u: goto L_088F7E54;
    case 146u: goto L_088F7E5C;
    case 147u: goto L_088F7E9C;
    case 148u: goto L_088F7EA4;
    case 149u: goto L_088F7EB4;
    case 150u: goto L_088F7EBC;
    case 151u: goto L_088F7EC4;
    case 152u: goto L_088F7EE4;
    case 153u: goto L_088F7EF8;
    case 154u: goto L_088F7F0C;
    case 155u: goto L_088F7F1C;
    case 156u: goto L_088F7F24;
    case 157u: goto L_088F7F34;
    case 158u: goto L_088F7F3C;
    case 159u: goto L_088F7F40;
    case 160u: goto L_088F7F50;
    case 161u: goto L_088F7F70;
    case 162u: goto L_088F7F78;
    case 163u: goto L_088F7F90;
    case 164u: goto L_088F7F94;
    case 165u: goto L_088F7FA4;
    case 166u: goto L_088F7FAC;
    case 167u: goto L_088F7FC8;
    case 168u: goto L_088F7FD0;
    case 169u: goto L_088F7FF4;
    case 170u: goto L_088F7FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088F7000:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(3104));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088F702Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29100));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F702Cu) goto L_088F702C;
    return;
L_088F702C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7060:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088F7070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0240_entry, 240u, 67u, 0x088F4CECu>(ctx, &aot_mem) && ctx.pc == 0x088F7070u) goto L_088F7070;
    return;
L_088F7070:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F707C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[17] = (0u | 0u);
    goto L_088F7094;
L_088F7094:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088F70A0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0233_entry, 233u, 10u, 0x088ED1B4u>(ctx, &aot_mem) && ctx.pc == 0x088F70A0u) goto L_088F70A0;
    return;
L_088F70A0:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F7094;
      }
      goto L_088F70B0;
    }
L_088F70B0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F70C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-352));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2996)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(424)));
    aot_gpr[5] = (aot_gpr[5] ^ 4u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(316), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(324), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(328), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(332), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(336), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(340), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(344), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(348), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088F7178;
      }
      goto L_088F7154;
    }
L_088F7154:
    aot_gpr[31] = (0x088F715Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0248_entry, 248u, 18u, 0x088FC160u>(ctx, &aot_mem) && ctx.pc == 0x088F715Cu) goto L_088F715C;
    return;
L_088F715C:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[0] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F7178;
      }
      goto L_088F7174;
    }
L_088F7174:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_088F7178;
L_088F7178:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(416)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] & 255u);
      if (branch_taken) {
          goto L_088F7204;
      }
      goto L_088F7184;
    }
L_088F7184:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2060)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088F71A8;
      }
      goto L_088F7190;
    }
L_088F7190:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088F719Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0233_entry, 233u, 108u, 0x088ED9D4u>(ctx, &aot_mem) && ctx.pc == 0x088F719Cu) goto L_088F719C;
    return;
L_088F719C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088F71A8u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0233_entry, 233u, 103u, 0x088ED93Cu>(ctx, &aot_mem) && ctx.pc == 0x088F71A8u) goto L_088F71A8;
    return;
L_088F71A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2996)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(704)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7456));
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F71D8;
      }
      goto L_088F71CC;
    }
L_088F71CC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088F71D8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0233_entry, 233u, 131u, 0x088EDDE4u>(ctx, &aot_mem) && ctx.pc == 0x088F71D8u) goto L_088F71D8;
    return;
L_088F71D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    aot_gpr[20] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[31] = (0x088F71ECu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 167u, 0x0894BC3Cu>(ctx, &aot_mem) && ctx.pc == 0x088F71ECu) goto L_088F71EC;
    return;
L_088F71EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[31] = (0x088F71FCu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 169u, 0x0894BC58u>(ctx, &aot_mem) && ctx.pc == 0x088F71FCu) goto L_088F71FC;
    return;
L_088F71FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F729C;
      }
      goto L_088F7204;
    }
L_088F7204:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_088F729C;
      }
      goto L_088F720C;
    }
L_088F720C:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x088F7218u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0233_entry, 233u, 131u, 0x088EDDE4u>(ctx, &aot_mem) && ctx.pc == 0x088F7218u) goto L_088F7218;
    return;
L_088F7218:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(750)));
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(832));
      if (branch_taken) {
          goto L_088F7238;
      }
      goto L_088F7228;
    }
L_088F7228:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(496));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F723C;
      }
      goto L_088F7238;
    }
L_088F7238:
    { const std::uint32_t vfpu_address = aot_gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    goto L_088F723C;
L_088F723C:
    ctx.execute_vfpu_vdot_ct<16u, 21u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32604)));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_088F7274;
      }
      goto L_088F7264;
    }
L_088F7264:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2996)));
    aot_gpr[31] = (0x088F7270u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0248_entry, 248u, 21u, 0x088FC1ACu>(ctx, &aot_mem) && ctx.pc == 0x088F7270u) goto L_088F7270;
    return;
L_088F7270:
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    goto L_088F7274;
L_088F7274:
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(208);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(208));
    aot_gpr[31] = (0x088F729Cu);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7652)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 169u, 0x0894BC58u>(ctx, &aot_mem) && ctx.pc == 0x088F729Cu) goto L_088F729C;
    return;
L_088F729C:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F737C;
      }
      goto L_088F72A4;
    }
L_088F72A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(416)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F737C;
      }
      goto L_088F72B0;
    }
L_088F72B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2060)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_088F737C;
      }
      goto L_088F72BC;
    }
L_088F72BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2996)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(704)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7456));
    aot_gpr[5] = (aot_gpr[6] ^ aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F737C;
      }
      goto L_088F72E0;
    }
L_088F72E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(704)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6880));
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F737C;
      }
      goto L_088F7300;
    }
L_088F7300:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1024)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(936)));
    aot_gpr[4] = (aot_gpr[4] & 15u);
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2272)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    aot_gpr[5] = (13702u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[26] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[26] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[5] | 14269u);
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[23] = (aot_gpr[16] + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (16256u << 16u);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[20])) && aot_fpr[13] == aot_fpr[20]));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[23]);
    aot_gpr[4] = (16128u << 16u);
    aot_gpr[22] = (aot_gpr[16] + static_cast<std::uint32_t>(832));
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(848));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(544));
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(880));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    aot_gpr[30] = (aot_gpr[16] + static_cast<std::uint32_t>(864));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[21] = (2216u << 16u);
      if (branch_taken) {
          goto L_088F7384;
      }
      goto L_088F7374;
    }
L_088F7374:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F738C;
      }
      goto L_088F737C;
    }
L_088F737C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0244_entry, 244u, 6u, 0x088F80B8u>(ctx, &aot_mem); return;
      }
      goto L_088F7384;
    }
L_088F7384:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3068)));
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[26] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[26] = fs * ft; }
    goto L_088F738C;
L_088F738C:
    ctx.set_fpu_condition((aot_fpr[22] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (49024u << 16u);
      if (branch_taken) {
          goto L_088F73A4;
      }
      goto L_088F739C;
    }
L_088F739C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_088F73B8;
      }
      goto L_088F73A4;
    }
L_088F73A4:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_088F73B8;
    }
    goto L_088F73B8;
L_088F73B8:
    aot_gpr[31] = (0x088F73C0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 105u, 0x08A2F768u>(ctx, &aot_mem) && ctx.pc == 0x088F73C0u) goto L_088F73C0;
    return;
L_088F73C0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x088F73DCu);
    aot_fpr[12] = aot_fpr[22] - aot_fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x088F73DCu) goto L_088F73DC;
    return;
L_088F73DC:
    aot_fpr[28] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[31] = (0x088F73E8u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x088F73E8u) goto L_088F73E8;
    return;
L_088F73E8:
    aot_fpr[12] = aot_fpr[28] / aot_fpr[0];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    aot_gpr[31] = (0x088F7424u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 23u, 0x088842C4u>(ctx, &aot_mem) && ctx.pc == 0x088F7424u) goto L_088F7424;
    return;
L_088F7424:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<23u, 4u>(vfpu_value); }
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
      if (branch_taken) {
          goto L_088F746C;
      }
      goto L_088F7448;
    }
L_088F7448:
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<24u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7480;
      }
      goto L_088F746C;
    }
L_088F746C:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<24u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    goto L_088F7480;
L_088F7480:
    ctx.execute_vfpu_vdot_ct<16u, 20u, 24u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[30] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]) & 0x7FFFFFFFu);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<22u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<22u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<22u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<22u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 22u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<22u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[20] | 0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<23u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(144);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[31] = (0x088F74F8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 23u, 0x088842C4u>(ctx, &aot_mem) && ctx.pc == 0x088F74F8u) goto L_088F74F8;
    return;
L_088F74F8:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(288);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(22u, 20u, 21u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<22u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(144);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<22u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<21u, 4u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<16u, 21u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[4] = (13702u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 14269u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<23u, 4u>(vfpu_value); }
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
        goto L_088F7554;
    }
    goto L_088F7540;
L_088F7540:
    ctx.execute_vfpu_vdot_ct<16u, 21u, 21u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<21u, 21u, 16u, 3u>();
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(144);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_088F7560;
      }
      goto L_088F7554;
    }
L_088F7554:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    goto L_088F7560;
L_088F7560:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]) & 0x7FFFFFFFu);
    aot_gpr[4] = (16180u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 65012u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    ctx.execute_vfpu_vdot_ct<16u, 23u, 23u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16911u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 3461u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (16818u << 16u);
      if (branch_taken) {
          goto L_088F75A8;
      }
      goto L_088F75A0;
    }
L_088F75A0:
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_088F75DC;
      }
      goto L_088F75A8;
    }
L_088F75A8:
    aot_gpr[4] = (aot_gpr[4] | 53479u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (16726u << 16u);
      if (branch_taken) {
          goto L_088F75C8;
      }
      goto L_088F75C0;
    }
L_088F75C0:
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_088F75DC;
      }
      goto L_088F75C8;
    }
L_088F75C8:
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    aot_gpr[4] = (aot_gpr[4] | 37958u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] / aot_fpr[16];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    goto L_088F75DC;
L_088F75DC:
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<21u, 21u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(144);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<24u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<24u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<21u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(144);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.execute_vfpu_vdot_ct<16u, 21u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
        goto L_088F7628;
    }
    goto L_088F7614;
L_088F7614:
    ctx.execute_vfpu_vdot_ct<16u, 21u, 21u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<21u, 21u, 16u, 3u>();
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(144);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_088F7634;
      }
      goto L_088F7628;
    }
L_088F7628:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    goto L_088F7634;
L_088F7634:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    ctx.execute_vfpu_cross_quat(24u, 22u, 20u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<24u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<24u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<23u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<22u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<22u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.execute_vfpu_vdot_ct<16u, 22u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.execute_vfpu_cross_quat(22u, 20u, 21u, 3u);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<22u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088F7680u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 158u, 0x088EBF44u>(ctx, &aot_mem) && ctx.pc == 0x088F7680u) goto L_088F7680;
    return;
L_088F7680:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(160);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088F76B0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 158u, 0x088EBF44u>(ctx, &aot_mem) && ctx.pc == 0x088F76B0u) goto L_088F76B0;
    return;
L_088F76B0:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(160);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32608)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[30];
    aot_gpr[4] = (16668u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 62915u);
    aot_fpr[22] = aot_fpr[13] - aot_fpr[12];
    aot_fpr[22] = aot_fpr[22] / aot_fpr[28];
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(356)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<23u, 4u>(vfpu_value); }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[26] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[26] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3072)));
    ctx.set_fpu_condition((aot_fpr[26] < aot_fpr[22]));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    aot_fpr[13] = aot_fpr[24] - aot_fpr[12];
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
      if (branch_taken) {
          goto L_088F7740;
      }
      goto L_088F7724;
    }
L_088F7724:
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) ^ 0x80000000u);
    ctx.set_fpu_condition((aot_fpr[26] < aot_fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
        goto L_088F7740;
    }
    goto L_088F7740;
L_088F7740:
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<21u, 21u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(176);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.execute_vfpu_cross_quat(22u, 20u, 21u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<22u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(192);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(928)));
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]) & 0x7FFFFFFFu);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3080)));
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3076)));
      if (branch_taken) {
          goto L_088F7784;
      }
      goto L_088F7774;
    }
L_088F7774:
    aot_fpr[14] = aot_fpr[24] - aot_fpr[24];
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
      if (branch_taken) {
          goto L_088F7820;
      }
      goto L_088F7784;
    }
L_088F7784:
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F77B4;
      }
      goto L_088F7794;
    }
L_088F7794:
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F77B4;
      }
      goto L_088F77A4;
    }
L_088F77A4:
    aot_fpr[14] = aot_fpr[24] - aot_fpr[20];
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
      if (branch_taken) {
          goto L_088F7820;
      }
      goto L_088F77B4;
    }
L_088F77B4:
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[16] = aot_fpr[15] - aot_fpr[14];
        goto L_088F77D4;
    }
    goto L_088F77C4;
L_088F77C4:
    aot_fpr[14] = aot_fpr[24] - aot_fpr[20];
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
      if (branch_taken) {
          goto L_088F7820;
      }
      goto L_088F77D4;
    }
L_088F77D4:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[16]) || std::isnan(aot_fpr[20])) && aot_fpr[16] == aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F77FC;
      }
      goto L_088F77E4;
    }
L_088F77E4:
    aot_fpr[14] = aot_fpr[26] - aot_fpr[14];
    aot_fpr[14] = aot_fpr[14] / aot_fpr[16];
    aot_fpr[14] = aot_fpr[24] - aot_fpr[14];
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
      if (branch_taken) {
          goto L_088F7820;
      }
      goto L_088F77FC;
    }
L_088F77FC:
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_088F7814;
    }
    goto L_088F780C;
L_088F780C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_088F7814;
      }
      goto L_088F7814;
    }
L_088F7814:
    aot_fpr[14] = aot_fpr[24] - aot_fpr[14];
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_088F7820;
L_088F7820:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(12)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (16384u << 16u);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[14]) || std::isnan(aot_fpr[20])) && aot_fpr[14] == aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_088F7850;
      }
      goto L_088F783C;
    }
L_088F783C:
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32600)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[24] - aot_fpr[13];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    goto L_088F7850;
L_088F7850:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3084)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<20u, 21u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(176);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.execute_vfpu_vdot_ct<16u, 23u, 23u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]) & 0x7FFFFFFFu);
    aot_gpr[31] = (0x088F7890u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3040)));
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 173u, 0x08A2FB6Cu>(ctx, &aot_mem) && ctx.pc == 0x088F7890u) goto L_088F7890;
    return;
L_088F7890:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[5] = (16298u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<23u, 4u>(vfpu_value); }
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[20])) && aot_fpr[12] == aot_fpr[20]));
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(288);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[5] = (aot_gpr[5] | 40894u);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
      if (branch_taken) {
          goto L_088F78DC;
      }
      goto L_088F78C0;
    }
L_088F78C0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3092)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[5] = (16668u << 16u);
      if (branch_taken) {
          goto L_088F78F8;
      }
      goto L_088F78D4;
    }
L_088F78D4:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088F78F4;
      }
      goto L_088F78DC;
    }
L_088F78DC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3088)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[5] = (16668u << 16u);
      if (branch_taken) {
          goto L_088F78F8;
      }
      goto L_088F78F0;
    }
L_088F78F0:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088F78F4;
L_088F78F4:
    aot_gpr[5] = (16668u << 16u);
    goto L_088F78F8;
L_088F78F8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[5] = (aot_gpr[5] | 62915u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3044)));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[17]) & 0x7FFFFFFFu);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<24u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 23u, 24u, 3u>();
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F7950;
      }
      goto L_088F7940;
    }
L_088F7940:
    aot_gpr[5] = (49216u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_088F7984;
      }
      goto L_088F7950;
    }
L_088F7950:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]) & 0x7FFFFFFFu);
    aot_gpr[5] = (2216u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-32588)));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[30] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[30] = fs * ft; }
    aot_fpr[30] = aot_fpr[24] - aot_fpr[30];
    ctx.set_fpu_condition((aot_fpr[30] < aot_fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    { const float fs = aot_fpr[30]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
        goto L_088F797C;
    }
    goto L_088F7974;
L_088F7974:
    aot_fpr[30] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    { const float fs = aot_fpr[30]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    goto L_088F797C;
L_088F797C:
    aot_fpr[12] = aot_fpr[12] + aot_fpr[24];
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    goto L_088F7984;
L_088F7984:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[20])) && aot_fpr[12] == aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F79A4;
      }
      goto L_088F7998;
    }
L_088F7998:
    aot_gpr[5] = (2216u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-32584)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    goto L_088F79A4;
L_088F79A4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3048)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F79D4;
      }
      goto L_088F79B8;
    }
L_088F79B8:
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) ^ 0x80000000u);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088F79D4;
    }
    goto L_088F79D4;
L_088F79D4:
    ctx.execute_vfpu_vdot_ct<16u, 22u, 20u, 3u>();
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3052)));
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[5]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(224);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[12])) && aot_fpr[13] == aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F7AF0;
      }
      goto L_088F7A24;
    }
L_088F7A24:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(928)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) & 0x7FFFFFFFu);
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32592)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-32596)));
    aot_fpr[14] = aot_fpr[24] - aot_fpr[13];
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-32596), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3096)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3100)));
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(288);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
      if (branch_taken) {
          goto L_088F7A70;
      }
      goto L_088F7A68;
    }
L_088F7A68:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_088F7AE8;
      }
      goto L_088F7A70;
    }
L_088F7A70:
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F7A98;
      }
      goto L_088F7A80;
    }
L_088F7A80:
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F7A98;
      }
      goto L_088F7A90;
    }
L_088F7A90:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_088F7AE8;
      }
      goto L_088F7A98;
    }
L_088F7A98:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[15] = aot_fpr[14] - aot_fpr[13];
        goto L_088F7AB0;
    }
    goto L_088F7AA8;
L_088F7AA8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_088F7AE8;
      }
      goto L_088F7AB0;
    }
L_088F7AB0:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[15]) || std::isnan(aot_fpr[20])) && aot_fpr[15] == aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F7AD0;
      }
      goto L_088F7AC0;
    }
L_088F7AC0:
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_fpr[12] = aot_fpr[12] / aot_fpr[15];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7AE8;
      }
      goto L_088F7AD0;
    }
L_088F7AD0:
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_088F7AE8;
    }
    goto L_088F7AE0;
L_088F7AE0:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_088F7AE8;
      }
      goto L_088F7AE8;
    }
L_088F7AE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7AFC;
      }
      goto L_088F7AF0;
    }
L_088F7AF0:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-32596), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(288);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    goto L_088F7AFC;
L_088F7AFC:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[20])) && aot_fpr[13] == aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F7B9C;
      }
      goto L_088F7B10;
    }
L_088F7B10:
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[4] = (16840u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F7B9C;
      }
      goto L_088F7B2C;
    }
L_088F7B2C:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(23u, 21u, 22u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<23u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(224);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[12] = aot_fpr[24] - aot_fpr[12];
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3104)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32580)));
    aot_fpr[14] = aot_fpr[24] - aot_fpr[13];
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[17]) & 0x7FFFFFFFu);
    aot_fpr[15] = aot_fpr[24] - aot_fpr[17];
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<21u, 23u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(224);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<22u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<21u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088F7B9C;
L_088F7B9C:
    { const std::uint32_t vfpu_address = aot_gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(22u, 21u, 20u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<22u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(240);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<22u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (13702u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 14269u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_088F7BF8;
    }
    goto L_088F7BD4;
L_088F7BD4:
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(240);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(244)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_fpr[22] = aot_fpr[24] - aot_fpr[22];
      if (branch_taken) {
          goto L_088F7C10;
      }
      goto L_088F7BF8;
    }
L_088F7BF8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(244), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(248), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    aot_fpr[22] = aot_fpr[24] - aot_fpr[22];
    goto L_088F7C10;
L_088F7C10:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (49024u << 16u);
      if (branch_taken) {
          goto L_088F7C28;
      }
      goto L_088F7C20;
    }
L_088F7C20:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_088F7C3C;
      }
      goto L_088F7C28;
    }
L_088F7C28:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088F7C3C;
    }
    goto L_088F7C3C;
L_088F7C3C:
    aot_gpr[31] = (0x088F7C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 105u, 0x08A2F768u>(ctx, &aot_mem) && ctx.pc == 0x088F7C44u) goto L_088F7C44;
    return;
L_088F7C44:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]) ^ 0x80000000u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6932)));
    aot_gpr[4] = (16880u << 16u);
    aot_fpr[19] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (16948u << 16u);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[17] = (2218u << 16u);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[5] = (2218u << 16u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-3132)));
      if (branch_taken) {
          goto L_088F7C94;
      }
      goto L_088F7C8C;
    }
L_088F7C8C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[12] - aot_fpr[14];
      if (branch_taken) {
          goto L_088F7CB8;
      }
      goto L_088F7C94;
    }
L_088F7C94:
    aot_gpr[6] = (49648u << 16u);
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[6]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_088F7CB8;
    }
    goto L_088F7CB0;
L_088F7CB0:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
      if (branch_taken) {
          goto L_088F7CB8;
      }
      goto L_088F7CB8;
    }
L_088F7CB8:
    ctx.execute_vfpu_vdot_ct<16u, 21u, 21u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    aot_gpr[6] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (16672u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F7CF0;
      }
      goto L_088F7CE0;
    }
L_088F7CE0:
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[28];
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
      if (branch_taken) {
          goto L_088F7D20;
      }
      goto L_088F7CF0;
    }
L_088F7CF0:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F7D10;
      }
      goto L_088F7D00;
    }
L_088F7D00:
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[28];
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
      if (branch_taken) {
          goto L_088F7D20;
      }
      goto L_088F7D10;
    }
L_088F7D10:
    aot_fpr[13] = aot_fpr[13] / aot_fpr[14];
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[28];
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    goto L_088F7D20;
L_088F7D20:
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[6] = (16217u << 16u);
      if (branch_taken) {
          goto L_088F7D34;
      }
      goto L_088F7D30;
    }
L_088F7D30:
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_088F7D34;
L_088F7D34:
    aot_gpr[6] = (aot_gpr[6] | 39322u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_gpr[6] = (15897u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 39322u);
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[14] = aot_fpr[14] + aot_fpr[18];
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
      if (branch_taken) {
          goto L_088F7D70;
      }
      goto L_088F7D64;
    }
L_088F7D64:
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_088F7D98;
      }
      goto L_088F7D70;
    }
L_088F7D70:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[6] = (49024u << 16u);
      if (branch_taken) {
          goto L_088F7D90;
      }
      goto L_088F7D80;
    }
L_088F7D80:
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_088F7D98;
      }
      goto L_088F7D90;
    }
L_088F7D90:
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    goto L_088F7D98;
L_088F7D98:
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[18]) || std::isnan(aot_fpr[20])) && aot_fpr[18] == aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088F7DD4;
      }
      goto L_088F7DAC;
    }
L_088F7DAC:
    aot_gpr[6] = (17224u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const std::uint32_t vfpu_address = aot_gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 21u, 20u, 3u>();
    aot_gpr[6] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[18] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[18]) & 0x7FFFFFFFu);
    aot_fpr[14] = aot_fpr[18] + aot_fpr[14];
    aot_fpr[14] = aot_fpr[13] / aot_fpr[14];
    goto L_088F7DD4;
L_088F7DD4:
    aot_gpr[6] = (16872u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[6]);
    ctx.set_fpu_condition((aot_fpr[16] < aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3056)));
      if (branch_taken) {
          goto L_088F7DFC;
      }
      goto L_088F7DEC;
    }
L_088F7DEC:
    aot_gpr[6] = (16153u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 39322u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[6]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    goto L_088F7DFC;
L_088F7DFC:
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3028)));
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
      if (branch_taken) {
          goto L_088F7E30;
      }
      goto L_088F7E14;
    }
L_088F7E14:
    aot_fpr[13] = aot_fpr[16] + aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
        goto L_088F7E28;
    }
    goto L_088F7E28;
L_088F7E28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7E5C;
      }
      goto L_088F7E30;
    }
L_088F7E30:
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F7E5C;
      }
      goto L_088F7E40;
    }
L_088F7E40:
    aot_fpr[13] = aot_fpr[13] - aot_fpr[16];
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
        goto L_088F7E54;
    }
    goto L_088F7E54;
L_088F7E54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7E5C;
      }
      goto L_088F7E5C;
    }
L_088F7E5C:
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3028), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) ^ 0x80000000u);
    ctx.execute_vfpu_vdot_ct<16u, 21u, 21u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[7] = (ctx.vfpu_scalar_bits_ct<16u>());
    { const std::uint32_t vfpu_address = aot_gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (16752u << 16u);
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[6]);
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F7EA4;
      }
      goto L_088F7E9C;
    }
L_088F7E9C:
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_088F7EC4;
      }
      goto L_088F7EA4;
    }
L_088F7EA4:
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F7EBC;
      }
      goto L_088F7EB4;
    }
L_088F7EB4:
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_088F7EC4;
      }
      goto L_088F7EBC;
    }
L_088F7EBC:
    aot_fpr[14] = aot_fpr[14] / aot_fpr[18];
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    goto L_088F7EC4;
L_088F7EC4:
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.execute_vfpu_vdot_ct<16u, 21u, 20u, 3u>();
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (ctx.vfpu_scalar_bits_ct<16u>());
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[17]) || std::isnan(aot_fpr[20])) && aot_fpr[17] == aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[6]);
      if (branch_taken) {
          goto L_088F7F94;
      }
      goto L_088F7EE4;
    }
L_088F7EE4:
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[17]) || std::isnan(aot_fpr[20])) && aot_fpr[17] == aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F7F94;
      }
      goto L_088F7EF8;
    }
L_088F7EF8:
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((aot_fpr[17] <= aot_fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F7F94;
      }
      goto L_088F7F0C;
    }
L_088F7F0C:
    ctx.set_fpu_condition((aot_fpr[16] < aot_fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F7F24;
      }
      goto L_088F7F1C;
    }
L_088F7F1C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_088F7F40;
      }
      goto L_088F7F24;
    }
L_088F7F24:
    ctx.set_fpu_condition((aot_fpr[16] <= aot_fpr[18]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[17] = aot_fpr[16] - aot_fpr[18];
        goto L_088F7F3C;
    }
    goto L_088F7F34;
L_088F7F34:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_088F7F40;
      }
      goto L_088F7F3C;
    }
L_088F7F3C:
    aot_fpr[17] = aot_fpr[17] / aot_fpr[18];
    goto L_088F7F40;
L_088F7F40:
    ctx.set_fpu_condition((aot_fpr[16] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F7F78;
      }
      goto L_088F7F50;
    }
L_088F7F50:
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (48896u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[16] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F7F94;
      }
      goto L_088F7F70;
    }
L_088F7F70:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088F7F94;
      }
      goto L_088F7F78;
    }
L_088F7F78:
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[16] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F7F94;
      }
      goto L_088F7F90;
    }
L_088F7F90:
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_088F7F94;
L_088F7F94:
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[20] = aot_fpr[12] + aot_fpr[14];
      if (branch_taken) {
          goto L_088F7FAC;
      }
      goto L_088F7FA4;
    }
L_088F7FA4:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_088F7FC8;
      }
      goto L_088F7FAC;
    }
L_088F7FAC:
    aot_gpr[4] = (49024u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088F7FC8;
    }
    goto L_088F7FC8;
L_088F7FC8:
    aot_gpr[31] = (0x088F7FD0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 105u, 0x08A2F768u>(ctx, &aot_mem) && ctx.pc == 0x088F7FD0u) goto L_088F7FD0;
    return;
L_088F7FD0:
    aot_fpr[13] = aot_fpr[20] - aot_fpr[0];
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(288);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-3132)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7652)));
      if (branch_taken) {
          goto L_088F7FFC;
      }
      goto L_088F7FF4;
    }
L_088F7FF4:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0244_entry, 244u, 2u, 0x088F8018u>(ctx, &aot_mem); return;
      }
      goto L_088F7FFC;
    }
L_088F7FFC:
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.pc = 0x088F8000u; return;
}

void recomp_unit_0243(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0243_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_243(Runtime &runtime) {
    runtime.register_generated_unit(243u, 0x088F7000u, 4096u, &recomp_unit_0243, &recomp_unit_0243_entry);
    runtime.register_function(0x088F7000u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F702Cu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7060u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7070u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F707Cu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7094u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F70A0u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F70B0u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F70C4u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7154u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F715Cu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7174u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7178u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7184u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7190u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F719Cu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F71A8u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F71CCu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F71D8u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F71ECu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F71FCu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7204u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F720Cu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7218u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7228u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7238u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F723Cu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7264u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7270u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7274u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F729Cu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F72A4u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F72B0u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F72BCu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F72E0u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7300u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7374u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F737Cu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7384u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F738Cu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F739Cu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F73A4u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F73B8u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F73C0u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F73DCu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F73E8u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7424u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7448u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F746Cu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7480u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F74F8u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7540u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7554u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7560u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F75A0u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F75A8u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F75C0u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F75C8u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F75DCu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7614u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7628u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7634u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7680u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F76B0u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7724u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7740u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7774u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7784u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7794u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F77A4u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F77B4u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F77C4u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F77D4u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F77E4u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F77FCu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F780Cu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7814u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7820u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F783Cu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7850u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7890u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F78C0u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F78D4u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F78DCu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F78F0u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F78F4u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F78F8u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7940u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7950u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7974u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F797Cu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7984u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7998u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F79A4u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F79B8u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F79D4u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7A24u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7A68u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7A70u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7A80u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7A90u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7A98u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7AA8u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7AB0u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7AC0u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7AD0u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7AE0u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7AE8u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7AF0u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7AFCu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7B10u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7B2Cu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7B9Cu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7BD4u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7BF8u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7C10u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7C20u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7C28u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7C3Cu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7C44u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7C8Cu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7C94u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7CB0u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7CB8u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7CE0u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7CF0u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7D00u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7D10u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7D20u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7D30u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7D34u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7D64u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7D70u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7D80u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7D90u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7D98u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7DACu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7DD4u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7DECu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7DFCu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7E14u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7E28u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7E30u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7E40u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7E54u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7E5Cu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7E9Cu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7EA4u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7EB4u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7EBCu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7EC4u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7EE4u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7EF8u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7F0Cu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7F1Cu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7F24u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7F34u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7F3Cu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7F40u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7F50u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7F70u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7F78u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7F90u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7F94u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7FA4u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7FACu, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7FC8u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7FD0u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7FF4u, &recomp_unit_0243, "recomp_unit_0243");
    runtime.register_function(0x088F7FFCu, &recomp_unit_0243, "recomp_unit_0243");
}
} // namespace psprecomp
