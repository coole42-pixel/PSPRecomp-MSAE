#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0211[1023] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0,
    0, 0, 0, 7, 8, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 11, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 30, 0,
    31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 35, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0,
    0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 50,
    0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 62, 0, 0, 63, 0, 64, 0, 65, 0, 0, 0, 66, 0, 0,
    0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0,
    0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 84,
    85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0,
    0, 0, 91, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 98, 0, 99, 0, 0, 100, 0, 101, 0, 102, 0, 0, 0, 0, 0,
    0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    112, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 121, 0, 122, 0, 123,
    0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 0, 130, 0,
    0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 140, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153, 154, 0, 155, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0,
    0, 158, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 162, 0, 163, 0, 164, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0,
    167, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0,
    0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 181, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185,
};
void recomp_unit_0211_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088D7004u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0211[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088D7004;
    case 2u: goto L_088D7018;
    case 3u: goto L_088D7020;
    case 4u: goto L_088D7028;
    case 5u: goto L_088D7038;
    case 6u: goto L_088D7070;
    case 7u: goto L_088D7090;
    case 8u: goto L_088D7094;
    case 9u: goto L_088D70A8;
    case 10u: goto L_088D70B4;
    case 11u: goto L_088D70C8;
    case 12u: goto L_088D70CC;
    case 13u: goto L_088D70E8;
    case 14u: goto L_088D7104;
    case 15u: goto L_088D7120;
    case 16u: goto L_088D7140;
    case 17u: goto L_088D7160;
    case 18u: goto L_088D7174;
    case 19u: goto L_088D7194;
    case 20u: goto L_088D71C4;
    case 21u: goto L_088D71D8;
    case 22u: goto L_088D7204;
    case 23u: goto L_088D7210;
    case 24u: goto L_088D721C;
    case 25u: goto L_088D7230;
    case 26u: goto L_088D7240;
    case 27u: goto L_088D7248;
    case 28u: goto L_088D7264;
    case 29u: goto L_088D7274;
    case 30u: goto L_088D727C;
    case 31u: goto L_088D7284;
    case 32u: goto L_088D729C;
    case 33u: goto L_088D72C4;
    case 34u: goto L_088D72F4;
    case 35u: goto L_088D7310;
    case 36u: goto L_088D7314;
    case 37u: goto L_088D733C;
    case 38u: goto L_088D7348;
    case 39u: goto L_088D7350;
    case 40u: goto L_088D7358;
    case 41u: goto L_088D7398;
    case 42u: goto L_088D73B0;
    case 43u: goto L_088D73D8;
    case 44u: goto L_088D73F8;
    case 45u: goto L_088D7414;
    case 46u: goto L_088D741C;
    case 47u: goto L_088D744C;
    case 48u: goto L_088D7468;
    case 49u: goto L_088D7474;
    case 50u: goto L_088D7480;
    case 51u: goto L_088D7494;
    case 52u: goto L_088D74A0;
    case 53u: goto L_088D74B4;
    case 54u: goto L_088D74BC;
    case 55u: goto L_088D74D0;
    case 56u: goto L_088D74DC;
    case 57u: goto L_088D7514;
    case 58u: goto L_088D7520;
    case 59u: goto L_088D752C;
    case 60u: goto L_088D7538;
    case 61u: goto L_088D7544;
    case 62u: goto L_088D754C;
    case 63u: goto L_088D7558;
    case 64u: goto L_088D7560;
    case 65u: goto L_088D7568;
    case 66u: goto L_088D7578;
    case 67u: goto L_088D7598;
    case 68u: goto L_088D75A4;
    case 69u: goto L_088D75C8;
    case 70u: goto L_088D75D0;
    case 71u: goto L_088D7608;
    case 72u: goto L_088D7610;
    case 73u: goto L_088D7630;
    case 74u: goto L_088D7634;
    case 75u: goto L_088D763C;
    case 76u: goto L_088D7674;
    case 77u: goto L_088D767C;
    case 78u: goto L_088D768C;
    case 79u: goto L_088D76A8;
    case 80u: goto L_088D76BC;
    case 81u: goto L_088D76C4;
    case 82u: goto L_088D76EC;
    case 83u: goto L_088D76F4;
    case 84u: goto L_088D7700;
    case 85u: goto L_088D7704;
    case 86u: goto L_088D7718;
    case 87u: goto L_088D772C;
    case 88u: goto L_088D7738;
    case 89u: goto L_088D7748;
    case 90u: goto L_088D7770;
    case 91u: goto L_088D778C;
    case 92u: goto L_088D7790;
    case 93u: goto L_088D77A4;
    case 94u: goto L_088D77D0;
    case 95u: goto L_088D77F0;
    case 96u: goto L_088D7830;
    case 97u: goto L_088D7840;
    case 98u: goto L_088D7848;
    case 99u: goto L_088D7850;
    case 100u: goto L_088D785C;
    case 101u: goto L_088D7864;
    case 102u: goto L_088D786C;
    case 103u: goto L_088D788C;
    case 104u: goto L_088D7894;
    case 105u: goto L_088D78C0;
    case 106u: goto L_088D78E4;
    case 107u: goto L_088D7928;
    case 108u: goto L_088D7930;
    case 109u: goto L_088D7938;
    case 110u: goto L_088D7944;
    case 111u: goto L_088D7974;
    case 112u: goto L_088D7984;
    case 113u: goto L_088D798C;
    case 114u: goto L_088D7994;
    case 115u: goto L_088D79B8;
    case 116u: goto L_088D7A18;
    case 117u: goto L_088D7A2C;
    case 118u: goto L_088D7A3C;
    case 119u: goto L_088D7A50;
    case 120u: goto L_088D7A5C;
    case 121u: goto L_088D7A70;
    case 122u: goto L_088D7A78;
    case 123u: goto L_088D7A80;
    case 124u: goto L_088D7A98;
    case 125u: goto L_088D7AB4;
    case 126u: goto L_088D7ABC;
    case 127u: goto L_088D7AD4;
    case 128u: goto L_088D7ADC;
    case 129u: goto L_088D7AE4;
    case 130u: goto L_088D7AFC;
    case 131u: goto L_088D7B08;
    case 132u: goto L_088D7B1C;
    case 133u: goto L_088D7B30;
    case 134u: goto L_088D7B38;
    case 135u: goto L_088D7B48;
    case 136u: goto L_088D7B5C;
    case 137u: goto L_088D7B70;
    case 138u: goto L_088D7BBC;
    case 139u: goto L_088D7BC4;
    case 140u: goto L_088D7C0C;
    case 141u: goto L_088D7C14;
    case 142u: goto L_088D7C1C;
    case 143u: goto L_088D7C38;
    case 144u: goto L_088D7C44;
    case 145u: goto L_088D7C50;
    case 146u: goto L_088D7C6C;
    case 147u: goto L_088D7C74;
    case 148u: goto L_088D7C9C;
    case 149u: goto L_088D7CA4;
    case 150u: goto L_088D7CD0;
    case 151u: goto L_088D7D00;
    case 152u: goto L_088D7D38;
    case 153u: goto L_088D7D40;
    case 154u: goto L_088D7D44;
    case 155u: goto L_088D7D4C;
    case 156u: goto L_088D7D64;
    case 157u: goto L_088D7D6C;
    case 158u: goto L_088D7D88;
    case 159u: goto L_088D7D90;
    case 160u: goto L_088D7DA8;
    case 161u: goto L_088D7DB8;
    case 162u: goto L_088D7DC0;
    case 163u: goto L_088D7DC8;
    case 164u: goto L_088D7DD0;
    case 165u: goto L_088D7DD8;
    case 166u: goto L_088D7DF0;
    case 167u: goto L_088D7E04;
    case 168u: goto L_088D7E08;
    case 169u: goto L_088D7E28;
    case 170u: goto L_088D7E3C;
    case 171u: goto L_088D7E64;
    case 172u: goto L_088D7E88;
    case 173u: goto L_088D7E9C;
    case 174u: goto L_088D7EC0;
    case 175u: goto L_088D7ED8;
    case 176u: goto L_088D7F18;
    case 177u: goto L_088D7F24;
    case 178u: goto L_088D7F34;
    case 179u: goto L_088D7F60;
    case 180u: goto L_088D7F68;
    case 181u: goto L_088D7F74;
    case 182u: goto L_088D7F94;
    case 183u: goto L_088D7FA0;
    case 184u: goto L_088D7FC8;
    case 185u: goto L_088D7FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088D7004:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088D7018u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 202u, 0x088D6E40u>(ctx, &aot_mem) && ctx.pc == 0x088D7018u) goto L_088D7018;
    return;
L_088D7018:
    aot_gpr[31] = (0x088D7020u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 213u, 0x088D6EE8u>(ctx, &aot_mem) && ctx.pc == 0x088D7020u) goto L_088D7020;
    return;
L_088D7020:
    aot_gpr[31] = (0x088D7028u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 219u, 0x088D6F4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7028u) goto L_088D7028;
    return;
L_088D7028:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7038:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x088D7070u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 16u, 0x088E6104u>(ctx, &aot_mem) && ctx.pc == 0x088D7070u) goto L_088D7070;
    return;
L_088D7070:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(812)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D70E8;
      }
      goto L_088D7090;
    }
L_088D7090:
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
    goto L_088D7094;
L_088D7094:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(11));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x088D70A8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x088D70A8u) goto L_088D70A8;
    return;
L_088D70A8:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
      if (branch_taken) {
          goto L_088D70CC;
      }
      goto L_088D70B4;
    }
L_088D70B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088D70C8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 22u, 0x088E61CCu>(ctx, &aot_mem) && ctx.pc == 0x088D70C8u) goto L_088D70C8;
    return;
L_088D70C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    goto L_088D70CC;
L_088D70CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(812)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7094;
      }
      goto L_088D70E8;
    }
L_088D70E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(812)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088D7140;
      }
      goto L_088D7104;
    }
L_088D7104:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[31] = (0x088D7120u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(816)));
    if (rt.invoke_chained_direct<&recomp_unit_0251_entry, 251u, 38u, 0x088FF3E0u>(ctx, &aot_mem) && ctx.pc == 0x088D7120u) goto L_088D7120;
    return;
L_088D7120:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(812)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D7104;
      }
      goto L_088D7140;
    }
L_088D7140:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(972)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(88));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088D7160u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D7160u) goto L_088D7160;
    return;
L_088D7160:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x088D7174u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 250u, 0x0891EF6Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7174u) goto L_088D7174;
    return;
L_088D7174:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
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
L_088D7194:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_088D71C4;
L_088D71C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1524), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D71C4;
      }
      goto L_088D71D8;
    }
L_088D71D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2176)));
    aot_gpr[5] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[17] = (0u | 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[21] = (0u | 100u);
    aot_gpr[22] = (0u | 10u);
    aot_gpr[19] = (ctx.lo);
    aot_gpr[4] = (aot_gpr[19] << 3u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[4]);
    goto L_088D7204;
L_088D7204:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[31] = (0x088D7210u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 182u, 0x08872D68u>(ctx, &aot_mem) && ctx.pc == 0x088D7210u) goto L_088D7210;
    return;
L_088D7210:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7274;
      }
      goto L_088D721C;
    }
L_088D721C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(132)));
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[21]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[5] = (ctx.lo);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_088D7274;
      }
      goto L_088D7230;
    }
L_088D7230:
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.hi);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7274;
      }
      goto L_088D7240;
    }
L_088D7240:
    aot_gpr[31] = (0x088D7248u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D7248u) goto L_088D7248;
    return;
L_088D7248:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[31] = (0x088D7264u);
    aot_gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0223_entry, 223u, 113u, 0x088E3930u>(ctx, &aot_mem) && ctx.pc == 0x088D7264u) goto L_088D7264;
    return;
L_088D7264:
    aot_gpr[4] = (aot_gpr[17] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1524), aot_gpr[2]);
    goto L_088D7274;
L_088D7274:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088D729C;
      }
      goto L_088D727C;
    }
L_088D727C:
    aot_gpr[31] = (0x088D7284u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D7284u) goto L_088D7284;
    return;
L_088D7284:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7204;
      }
      goto L_088D729C;
    }
L_088D729C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D72C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x088D72F4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D72F4u) goto L_088D72F4;
    return;
L_088D72F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088D73B0;
      }
      goto L_088D7310;
    }
L_088D7310:
    aot_gpr[18] = (2216u << 16u);
    goto L_088D7314;
L_088D7314:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088D733Cu);
    aot_gpr[6] = (0u | 56u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D733Cu) goto L_088D733C;
    return;
L_088D733C:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    if (aot_gpr[21] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1540), aot_gpr[22]);
        goto L_088D7358;
    }
    goto L_088D7348;
L_088D7348:
    aot_gpr[31] = (0x088D7350u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 10u, 0x08944134u>(ctx, &aot_mem) && ctx.pc == 0x088D7350u) goto L_088D7350;
    return;
L_088D7350:
    aot_gpr[22] = (aot_gpr[21] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1540), aot_gpr[22]);
    goto L_088D7358;
L_088D7358:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1524)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(92)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(35)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    aot_gpr[7] = (aot_gpr[9] | 0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088D7398u);
    aot_gpr[9] = (aot_gpr[11] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 191u, 0x08943E00u>(ctx, &aot_mem) && ctx.pc == 0x088D7398u) goto L_088D7398;
    return;
L_088D7398:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(68)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D7314;
      }
      goto L_088D73B0;
    }
L_088D73B0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D73D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x088D73F8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D73F8u) goto L_088D73F8;
    return;
L_088D73F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_088D744C;
      }
      goto L_088D7414;
    }
L_088D7414:
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_088D741C;
L_088D741C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(1524)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D741C;
      }
      goto L_088D744C;
    }
L_088D744C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088D7468u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 176u, 0x088DEE14u>(ctx, &aot_mem) && ctx.pc == 0x088D7468u) goto L_088D7468;
    return;
L_088D7468:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088D7474u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 59u, 0x088DF45Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7474u) goto L_088D7474;
    return;
L_088D7474:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088D7480u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 91u, 0x088DF6B0u>(ctx, &aot_mem) && ctx.pc == 0x088D7480u) goto L_088D7480;
    return;
L_088D7480:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D74B4;
      }
      goto L_088D7494;
    }
L_088D7494:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088D74A0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0220_entry, 220u, 9u, 0x088E00CCu>(ctx, &aot_mem) && ctx.pc == 0x088D74A0u) goto L_088D74A0;
    return;
L_088D74A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7494;
      }
      goto L_088D74B4;
    }
L_088D74B4:
    aot_gpr[31] = (0x088D74BCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088D72C4;
L_088D74BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088D7514;
      }
      goto L_088D74D0;
    }
L_088D74D0:
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    goto L_088D74DC;
L_088D74DC:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1540)));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(4), aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D74DC;
      }
      goto L_088D7514;
    }
L_088D7514:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2198), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[18] = (0u | 0u);
    goto L_088D7520;
L_088D7520:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2172)));
    aot_gpr[31] = (0x088D752Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 148u, 0x0885BA04u>(ctx, &aot_mem) && ctx.pc == 0x088D752Cu) goto L_088D752C;
    return;
L_088D752C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7568;
      }
      goto L_088D7538;
    }
L_088D7538:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D754C;
      }
      goto L_088D7544;
    }
L_088D7544:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2198), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_088D7578;
      }
      goto L_088D754C;
    }
L_088D754C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088D7568;
      }
      goto L_088D7558;
    }
L_088D7558:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7568;
      }
      goto L_088D7560;
    }
L_088D7560:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2198), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088D7578;
      }
      goto L_088D7568;
    }
L_088D7568:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7520;
      }
      goto L_088D7578;
    }
L_088D7578:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2190), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7598:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1100)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D7630;
      }
      goto L_088D75A4;
    }
L_088D75A4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(176)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[8] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7630;
      }
      goto L_088D75C8;
    }
L_088D75C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (0u | 0u);
    goto L_088D75D0;
L_088D75D0:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(40)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(176)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(40)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[6]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(308)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(308)));
    if (aot_gpr[9] != aot_gpr[10]) {
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
        goto L_088D7610;
    }
    goto L_088D7608;
L_088D7608:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088D7634;
      }
      goto L_088D7610;
    }
L_088D7610:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(40)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(176)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(40)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (aot_gpr[8] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D75D0;
      }
      goto L_088D7630;
    }
L_088D7630:
    aot_gpr[2] = (0u | 0u);
    goto L_088D7634;
L_088D7634:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D763C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[11] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[11] + static_cast<std::uint32_t>(2178)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[11] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(84));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D772C;
      }
      goto L_088D7674;
    }
L_088D7674:
    aot_gpr[31] = (0x088D767Cu);
    aot_gpr[5] = (aot_gpr[3] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D767Cu) goto L_088D767C;
    return;
L_088D767C:
    aot_gpr[12] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x088D768Cu);
    aot_gpr[4] = (aot_gpr[11] | 0u);
    goto L_088D7598;
L_088D768C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[11] + static_cast<std::uint32_t>(2178)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[11] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(84));
      if (branch_taken) {
          goto L_088D7718;
      }
      goto L_088D76A8;
    }
L_088D76A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_088D7718;
      }
      goto L_088D76BC;
    }
L_088D76BC:
    aot_gpr[31] = (0x088D76C4u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D76C4u) goto L_088D76C4;
    return;
L_088D76C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[11] + static_cast<std::uint32_t>(2178)));
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[9] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[9]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(22)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[12] + static_cast<std::uint32_t>(22)));
    aot_gpr[4] = (aot_gpr[11] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[10] != aot_gpr[5];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(84));
      if (branch_taken) {
          goto L_088D7704;
      }
      goto L_088D76EC;
    }
L_088D76EC:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[12];
    // nop
      if (branch_taken) {
          goto L_088D7700;
      }
      goto L_088D76F4;
    }
L_088D76F4:
    aot_gpr[5] = (aot_gpr[11] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(1430), static_cast<std::uint8_t>(aot_gpr[8]));
      if (branch_taken) {
          goto L_088D7718;
      }
      goto L_088D7700;
    }
L_088D7700:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    goto L_088D7704;
L_088D7704:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D76BC;
      }
      goto L_088D7718;
    }
L_088D7718:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7674;
      }
      goto L_088D772C;
    }
L_088D772C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7738:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5104)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7748:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x088D7770u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D7770u) goto L_088D7770;
    return;
L_088D7770:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088D77D0;
      }
      goto L_088D778C;
    }
L_088D778C:
    aot_gpr[16] = (aot_gpr[20] | 0u);
    goto L_088D7790;
L_088D7790:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1540)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[31] = (0x088D77A4u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 100u, 0x088DE784u>(ctx, &aot_mem) && ctx.pc == 0x088D77A4u) goto L_088D77A4;
    return;
L_088D77A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(68)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D7790;
      }
      goto L_088D77D0;
    }
L_088D77D0:
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
L_088D77F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[7] & 255u);
    aot_gpr[18] = (aot_gpr[8] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[10];
    aot_gpr[20] = (2218u << 16u);
      if (branch_taken) {
          goto L_088D7840;
      }
      goto L_088D7830;
    }
L_088D7830:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1944)));
    aot_gpr[9] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7492)));
      if (branch_taken) {
          goto L_088D7848;
      }
      goto L_088D7840;
    }
L_088D7840:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1944), aot_gpr[7]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7492)));
    goto L_088D7848;
L_088D7848:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088D7864;
      }
      goto L_088D7850;
    }
L_088D7850:
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x088D785Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D785Cu) goto L_088D785C;
    return;
L_088D785C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_088D7864;
L_088D7864:
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088D7894;
      }
      goto L_088D786C;
    }
L_088D786C:
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1555)));
    aot_gpr[6] = (aot_gpr[8] | 0u);
    aot_gpr[4] = (aot_gpr[10] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[31] = (0x088D788Cu);
    aot_gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 177u, 0x088DFD70u>(ctx, &aot_mem) && ctx.pc == 0x088D788Cu) goto L_088D788C;
    return;
L_088D788C:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(20)));
    goto L_088D7894;
L_088D7894:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1988)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1984)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1992)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1996)));
    aot_gpr[4] = (aot_gpr[10] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088D78C0u);
    aot_gpr[9] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 137u, 0x088DFA20u>(ctx, &aot_mem) && ctx.pc == 0x088D78C0u) goto L_088D78C0;
    return;
L_088D78C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1964), aot_gpr[2]);
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
L_088D78E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[8] & 255u);
    aot_gpr[19] = (aot_gpr[6] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[9] & 255u);
    aot_gpr[8] = (aot_gpr[10] & 255u);
    aot_gpr[19] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[16] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_088D7930;
      }
      goto L_088D7928;
    }
L_088D7928:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(2048), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088D7930;
L_088D7930:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D798C;
      }
      goto L_088D7938;
    }
L_088D7938:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x088D7944u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D7944u) goto L_088D7944;
    return;
L_088D7944:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (aot_gpr[21] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(2000), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[8] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x088D7974u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 199u, 0x088DFF4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7974u) goto L_088D7974;
    return;
L_088D7974:
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(1948), aot_gpr[17]);
    aot_gpr[31] = (0x088D7984u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1812))))));
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 180u, 0x0885AB0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7984u) goto L_088D7984;
    return;
L_088D7984:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(2012), aot_gpr[2]);
      if (branch_taken) {
          goto L_088D7994;
      }
      goto L_088D798C;
    }
L_088D798C:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(2000), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(1948), 0u);
    goto L_088D7994;
L_088D7994:
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
L_088D79B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    aot_gpr[7] = (aot_gpr[7] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[30]);
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_gpr[3] = (aot_gpr[8] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[7]);
    aot_gpr[19] = (aot_gpr[9] & 255u);
    aot_gpr[22] = (aot_gpr[10] & 255u);
    aot_gpr[30] = (aot_gpr[11] & 255u);
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[20] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[23];
    aot_gpr[21] = (2218u << 16u);
      if (branch_taken) {
          goto L_088D7B5C;
      }
      goto L_088D7A18;
    }
L_088D7A18:
    aot_gpr[17] = (aot_gpr[18] << 2u);
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1948)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7B5C;
      }
      goto L_088D7A2C;
    }
L_088D7A2C:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2172)));
    aot_gpr[31] = (0x088D7A3Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 148u, 0x0885BA04u>(ctx, &aot_mem) && ctx.pc == 0x088D7A3Cu) goto L_088D7A3C;
    return;
L_088D7A3C:
    aot_gpr[7] = (aot_gpr[2] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2048)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_088D7A70;
      }
      goto L_088D7A50;
    }
L_088D7A50:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(11))))));
    { const bool branch_taken = aot_gpr[20] != aot_gpr[5];
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_088D7A70;
      }
      goto L_088D7A5C;
    }
L_088D7A5C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[5] = (16384u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[13] = aot_fpr[12] - aot_fpr[13];
    goto L_088D7A70;
L_088D7A70:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[23];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088D7B5C;
      }
      goto L_088D7A78;
    }
L_088D7A78:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_088D7B5C;
      }
      goto L_088D7A80;
    }
L_088D7A80:
    aot_gpr[8] = (aot_gpr[7] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1948)));
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x088D7A98u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D7A98u) goto L_088D7A98;
    return;
L_088D7A98:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(22)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1948)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2048)));
    aot_gpr[9] = (0u | 1u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[9];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088D7ADC;
      }
      goto L_088D7AB4;
    }
L_088D7AB4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088D7AD4;
      }
      goto L_088D7ABC;
    }
L_088D7ABC:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
      if (branch_taken) {
          goto L_088D7AD4;
      }
      goto L_088D7AD4;
    }
L_088D7AD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7AFC;
      }
      goto L_088D7ADC;
    }
L_088D7ADC:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088D7AFC;
      }
      goto L_088D7AE4;
    }
L_088D7AE4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
      if (branch_taken) {
          goto L_088D7AFC;
      }
      goto L_088D7AFC;
    }
L_088D7AFC:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088D7B08u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D7B08u) goto L_088D7B08;
    return;
L_088D7B08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(22)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1948)));
    aot_gpr[6] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088D7B30;
      }
      goto L_088D7B1C;
    }
L_088D7B1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[19] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(312)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[12];
    goto L_088D7B30;
L_088D7B30:
    aot_gpr[31] = (0x088D7B38u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D7B38u) goto L_088D7B38;
    return;
L_088D7B38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(22)));
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D7B5C;
      }
      goto L_088D7B48;
    }
L_088D7B48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[19] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(316)));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[12];
    goto L_088D7B5C;
L_088D7B5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1964)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1992)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1996)));
      if (branch_taken) {
          goto L_088D7BC4;
      }
      goto L_088D7B70;
    }
L_088D7B70:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[5] = (aot_gpr[18] << 2u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2000)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2060)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2072)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2036)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    aot_gpr[9] = (aot_gpr[5] + static_cast<std::uint32_t>(2024));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[22]);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088D7BBCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0220_entry, 220u, 137u, 0x088E0B90u>(ctx, &aot_mem) && ctx.pc == 0x088D7BBCu) goto L_088D7BBC;
    return;
L_088D7BBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7C0C;
      }
      goto L_088D7BC4;
    }
L_088D7BC4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2060)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2072)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2036)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    aot_gpr[7] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[22]);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088D7C0Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0220_entry, 220u, 137u, 0x088E0B90u>(ctx, &aot_mem) && ctx.pc == 0x088D7C0Cu) goto L_088D7C0C;
    return;
L_088D7C0C:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7C38;
      }
      goto L_088D7C14;
    }
L_088D7C14:
    aot_gpr[31] = (0x088D7C1Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D7C1Cu) goto L_088D7C1C;
    return;
L_088D7C1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[18] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(320))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(2084), aot_gpr[4]);
    goto L_088D7C38;
L_088D7C38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7CD0;
      }
      goto L_088D7C44;
    }
L_088D7C44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = aot_gpr[18] == aot_gpr[23];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1980)));
      if (branch_taken) {
          goto L_088D7CA4;
      }
      goto L_088D7C50;
    }
L_088D7C50:
    aot_gpr[18] = (aot_gpr[18] << 2u);
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1948)));
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[6]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(1812))))));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7C74;
      }
      goto L_088D7C6C;
    }
L_088D7C6C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2024)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(2012), aot_gpr[6]);
    goto L_088D7C74;
L_088D7C74:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2012)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[31] = (0x088D7C9Cu);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0220_entry, 220u, 82u, 0x088E0744u>(ctx, &aot_mem) && ctx.pc == 0x088D7C9Cu) goto L_088D7C9C;
    return;
L_088D7C9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7CD0;
      }
      goto L_088D7CA4;
    }
L_088D7CA4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[31] = (0x088D7CD0u);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0220_entry, 220u, 82u, 0x088E0744u>(ctx, &aot_mem) && ctx.pc == 0x088D7CD0u) goto L_088D7CD0;
    return;
L_088D7CD0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7D00:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[18] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x088D7D38u);
    aot_gpr[6] = (aot_gpr[7] & 255u);
    goto L_088D7738;
L_088D7D38:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D7D44;
      }
      goto L_088D7D40;
    }
L_088D7D40:
    aot_gpr[17] = (aot_gpr[5] | 0u);
    goto L_088D7D44;
L_088D7D44:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7E9C;
      }
      goto L_088D7D4C;
    }
L_088D7D4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(23)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7E9C;
      }
      goto L_088D7D64;
    }
L_088D7D64:
    aot_gpr[31] = (0x088D7D6Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D7D6Cu) goto L_088D7D6C;
    return;
L_088D7D6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7DB8;
      }
      goto L_088D7D88;
    }
L_088D7D88:
    aot_gpr[31] = (0x088D7D90u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D7D90u) goto L_088D7D90;
    return;
L_088D7D90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088D7DA8u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 91u, 0x088DE718u>(ctx, &aot_mem) && ctx.pc == 0x088D7DA8u) goto L_088D7DA8;
    return;
L_088D7DA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7D88;
      }
      goto L_088D7DB8;
    }
L_088D7DB8:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7DD0;
      }
      goto L_088D7DC0;
    }
L_088D7DC0:
    aot_gpr[31] = (0x088D7DC8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 68u, 0x088DF4F4u>(ctx, &aot_mem) && ctx.pc == 0x088D7DC8u) goto L_088D7DC8;
    return;
L_088D7DC8:
    aot_gpr[31] = (0x088D7DD0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 101u, 0x088DF74Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7DD0u) goto L_088D7DD0;
    return;
L_088D7DD0:
    aot_gpr[31] = (0x088D7DD8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088D7748;
L_088D7DD8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1944)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x088D7DF0u);
    aot_gpr[8] = (0u | 1u);
    goto L_088D77F0;
L_088D7DF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7E9C;
      }
      goto L_088D7E04;
    }
L_088D7E04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    goto L_088D7E08;
L_088D7E08:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[31] = (0x088D7E28u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 83u, 0x088CD6DCu>(ctx, &aot_mem) && ctx.pc == 0x088D7E28u) goto L_088D7E28;
    return;
L_088D7E28:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088D7E3Cu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 83u, 0x088CD6DCu>(ctx, &aot_mem) && ctx.pc == 0x088D7E3Cu) goto L_088D7E3C;
    return;
L_088D7E3C:
    aot_gpr[4] = (aot_gpr[20] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1948)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    aot_gpr[9] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088D7E64u);
    aot_gpr[10] = (0u | 0u);
    goto L_088D78E4;
L_088D7E64:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[10] = (0u | 1u);
    aot_gpr[31] = (0x088D7E88u);
    aot_gpr[11] = (0u | 1u);
    goto L_088D79B8;
L_088D7E88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
        goto L_088D7E08;
    }
    goto L_088D7E9C;
L_088D7E9C:
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
L_088D7EC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088D7ED8u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D7ED8u) goto L_088D7ED8;
    return;
L_088D7ED8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[10] = (aot_gpr[5] << 4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(876)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[4] + aot_gpr[10]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(14)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[8] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088D7F74;
      }
      goto L_088D7F18;
    }
L_088D7F18:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088D7F24u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D7F24u) goto L_088D7F24;
    return;
L_088D7F24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[10] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D7F68;
      }
      goto L_088D7F34;
    }
L_088D7F34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(14)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[8] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7F18;
      }
      goto L_088D7F60;
    }
L_088D7F60:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088D7F74;
      }
      goto L_088D7F68;
    }
L_088D7F68:
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_088D7F94;
      }
      goto L_088D7F74;
    }
L_088D7F74:
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(14)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[8] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_088D7F94;
L_088D7F94:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7FA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x088D7FC8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D7FC8u) goto L_088D7FC8;
    return;
L_088D7FC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(876)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[5] << 4u);
    aot_gpr[17] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(14)));
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (0u | 5u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[5];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 1u, 0x088D8000u>(ctx, &aot_mem); return;
      }
      goto L_088D7FFC;
    }
L_088D7FFC:
    aot_gpr[7] = (0u | 3u);
    ctx.pc = 0x088D8000u; return;
}

void recomp_unit_0211(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0211_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_211(Runtime &runtime) {
    runtime.register_generated_unit(211u, 0x088D7000u, 4096u, &recomp_unit_0211, &recomp_unit_0211_entry);
    runtime.register_function(0x088D7004u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7018u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7020u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7028u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7038u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7070u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7090u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7094u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D70A8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D70B4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D70C8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D70CCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D70E8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7104u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7120u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7140u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7160u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7174u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7194u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D71C4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D71D8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7204u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7210u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D721Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7230u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7240u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7248u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7264u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7274u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D727Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7284u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D729Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D72C4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D72F4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7310u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7314u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D733Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7348u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7350u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7358u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7398u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D73B0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D73D8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D73F8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7414u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D741Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D744Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7468u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7474u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7480u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7494u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D74A0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D74B4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D74BCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D74D0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D74DCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7514u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7520u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D752Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7538u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7544u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D754Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7558u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7560u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7568u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7578u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7598u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D75A4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D75C8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D75D0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7608u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7610u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7630u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7634u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D763Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7674u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D767Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D768Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D76A8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D76BCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D76C4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D76ECu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D76F4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7700u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7704u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7718u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D772Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7738u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7748u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7770u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D778Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7790u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D77A4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D77D0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D77F0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7830u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7840u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7848u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7850u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D785Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7864u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D786Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D788Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7894u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D78C0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D78E4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7928u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7930u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7938u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7944u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7974u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7984u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D798Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7994u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D79B8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7A18u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7A2Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7A3Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7A50u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7A5Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7A70u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7A78u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7A80u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7A98u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7AB4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7ABCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7AD4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7ADCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7AE4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7AFCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7B08u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7B1Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7B30u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7B38u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7B48u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7B5Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7B70u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7BBCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7BC4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7C0Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7C14u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7C1Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7C38u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7C44u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7C50u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7C6Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7C74u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7C9Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7CA4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7CD0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7D00u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7D38u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7D40u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7D44u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7D4Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7D64u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7D6Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7D88u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7D90u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7DA8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7DB8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7DC0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7DC8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7DD0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7DD8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7DF0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7E04u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7E08u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7E28u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7E3Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7E64u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7E88u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7E9Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7EC0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7ED8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7F18u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7F24u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7F34u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7F60u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7F68u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7F74u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7F94u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7FA0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7FC8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x088D7FFCu, &recomp_unit_0211, "recomp_unit_0211");
}
} // namespace psprecomp
