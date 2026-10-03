#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0179[1019] = {
    1, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16,
    17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 20, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0,
    26, 0, 27, 0, 0, 28, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 33, 0, 0,
    34, 0, 0, 0, 0, 35, 0, 0, 36, 0, 37, 0, 0, 38, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0,
    0, 42, 0, 43, 0, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 55, 0, 56, 57, 0, 58, 0, 0,
    0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 62, 0, 63, 0, 64, 0, 0, 0, 65, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68,
    0, 69, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76,
    0, 77, 0, 78, 0, 79, 0, 80, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90,
    0, 0, 91, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 97,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 0,
    103, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0,
    0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 117, 0, 0, 0,
    118, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 123, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    139, 0, 0, 0, 140, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147,
    0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155,
    0, 0, 0, 156, 0, 0, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 163, 0, 164, 0, 165, 0, 166, 0, 167, 0, 168, 169, 0,
    170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 173, 0, 174, 0, 175, 0, 0, 176, 0, 177, 0, 0, 0, 178,
    0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 183, 0, 184, 185, 0, 0, 186, 0, 187, 0, 0, 0, 188, 0, 189, 0, 0,
    190, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 194, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 200, 0, 201, 0, 202, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 209, 0, 210, 0,
    211, 0, 212, 213, 0, 0, 0, 0, 214, 0, 215, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 220, 221,
    0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0,
    0, 0, 0, 224, 0, 225, 0, 226, 0, 227, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 235,
    0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240,
};
void recomp_unit_0179_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088B7000u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0179[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088B7000;
    case 2u: goto L_088B7008;
    case 3u: goto L_088B7014;
    case 4u: goto L_088B7038;
    case 5u: goto L_088B7054;
    case 6u: goto L_088B7060;
    case 7u: goto L_088B7064;
    case 8u: goto L_088B7098;
    case 9u: goto L_088B70AC;
    case 10u: goto L_088B70D0;
    case 11u: goto L_088B70F8;
    case 12u: goto L_088B7138;
    case 13u: goto L_088B7140;
    case 14u: goto L_088B7144;
    case 15u: goto L_088B7174;
    case 16u: goto L_088B717C;
    case 17u: goto L_088B7180;
    case 18u: goto L_088B71A0;
    case 19u: goto L_088B71A8;
    case 20u: goto L_088B71AC;
    case 21u: goto L_088B71B8;
    case 22u: goto L_088B71C8;
    case 23u: goto L_088B71E4;
    case 24u: goto L_088B71EC;
    case 25u: goto L_088B71F4;
    case 26u: goto L_088B7200;
    case 27u: goto L_088B7208;
    case 28u: goto L_088B7214;
    case 29u: goto L_088B7218;
    case 30u: goto L_088B7248;
    case 31u: goto L_088B7260;
    case 32u: goto L_088B726C;
    case 33u: goto L_088B7274;
    case 34u: goto L_088B7280;
    case 35u: goto L_088B7294;
    case 36u: goto L_088B72A0;
    case 37u: goto L_088B72A8;
    case 38u: goto L_088B72B4;
    case 39u: goto L_088B72B8;
    case 40u: goto L_088B72E8;
    case 41u: goto L_088B72F8;
    case 42u: goto L_088B7304;
    case 43u: goto L_088B730C;
    case 44u: goto L_088B7318;
    case 45u: goto L_088B7320;
    case 46u: goto L_088B7328;
    case 47u: goto L_088B7350;
    case 48u: goto L_088B7370;
    case 49u: goto L_088B738C;
    case 50u: goto L_088B739C;
    case 51u: goto L_088B73A8;
    case 52u: goto L_088B73B4;
    case 53u: goto L_088B73C4;
    case 54u: goto L_088B73CC;
    case 55u: goto L_088B73E0;
    case 56u: goto L_088B73E8;
    case 57u: goto L_088B73EC;
    case 58u: goto L_088B73F4;
    case 59u: goto L_088B740C;
    case 60u: goto L_088B741C;
    case 61u: goto L_088B7428;
    case 62u: goto L_088B7430;
    case 63u: goto L_088B7438;
    case 64u: goto L_088B7440;
    case 65u: goto L_088B7450;
    case 66u: goto L_088B7454;
    case 67u: goto L_088B745C;
    case 68u: goto L_088B747C;
    case 69u: goto L_088B7484;
    case 70u: goto L_088B7494;
    case 71u: goto L_088B749C;
    case 72u: goto L_088B74B0;
    case 73u: goto L_088B74C4;
    case 74u: goto L_088B74D4;
    case 75u: goto L_088B74F0;
    case 76u: goto L_088B74FC;
    case 77u: goto L_088B7504;
    case 78u: goto L_088B750C;
    case 79u: goto L_088B7514;
    case 80u: goto L_088B751C;
    case 81u: goto L_088B7524;
    case 82u: goto L_088B7530;
    case 83u: goto L_088B7574;
    case 84u: goto L_088B757C;
    case 85u: goto L_088B7590;
    case 86u: goto L_088B75A8;
    case 87u: goto L_088B75B0;
    case 88u: goto L_088B75C8;
    case 89u: goto L_088B75D0;
    case 90u: goto L_088B75FC;
    case 91u: goto L_088B7608;
    case 92u: goto L_088B7610;
    case 93u: goto L_088B7624;
    case 94u: goto L_088B763C;
    case 95u: goto L_088B7668;
    case 96u: goto L_088B7674;
    case 97u: goto L_088B767C;
    case 98u: goto L_088B7690;
    case 99u: goto L_088B76A8;
    case 100u: goto L_088B76D8;
    case 101u: goto L_088B76E8;
    case 102u: goto L_088B76F4;
    case 103u: goto L_088B7700;
    case 104u: goto L_088B7708;
    case 105u: goto L_088B771C;
    case 106u: goto L_088B7738;
    case 107u: goto L_088B7758;
    case 108u: goto L_088B7764;
    case 109u: goto L_088B7788;
    case 110u: goto L_088B7790;
    case 111u: goto L_088B7798;
    case 112u: goto L_088B77A8;
    case 113u: goto L_088B77B4;
    case 114u: goto L_088B77BC;
    case 115u: goto L_088B77E0;
    case 116u: goto L_088B77E8;
    case 117u: goto L_088B77F0;
    case 118u: goto L_088B7800;
    case 119u: goto L_088B780C;
    case 120u: goto L_088B7814;
    case 121u: goto L_088B7838;
    case 122u: goto L_088B7840;
    case 123u: goto L_088B7850;
    case 124u: goto L_088B785C;
    case 125u: goto L_088B7864;
    case 126u: goto L_088B788C;
    case 127u: goto L_088B7898;
    case 128u: goto L_088B78AC;
    case 129u: goto L_088B78CC;
    case 130u: goto L_088B78D8;
    case 131u: goto L_088B78E8;
    case 132u: goto L_088B7984;
    case 133u: goto L_088B79A4;
    case 134u: goto L_088B79AC;
    case 135u: goto L_088B79B4;
    case 136u: goto L_088B79C8;
    case 137u: goto L_088B79D8;
    case 138u: goto L_088B79F0;
    case 139u: goto L_088B7A00;
    case 140u: goto L_088B7A10;
    case 141u: goto L_088B7A14;
    case 142u: goto L_088B7A24;
    case 143u: goto L_088B7A34;
    case 144u: goto L_088B7A3C;
    case 145u: goto L_088B7A4C;
    case 146u: goto L_088B7A6C;
    case 147u: goto L_088B7A7C;
    case 148u: goto L_088B7A8C;
    case 149u: goto L_088B7A9C;
    case 150u: goto L_088B7AAC;
    case 151u: goto L_088B7ABC;
    case 152u: goto L_088B7ACC;
    case 153u: goto L_088B7ADC;
    case 154u: goto L_088B7AEC;
    case 155u: goto L_088B7AFC;
    case 156u: goto L_088B7B0C;
    case 157u: goto L_088B7B1C;
    case 158u: goto L_088B7B24;
    case 159u: goto L_088B7B2C;
    case 160u: goto L_088B7B34;
    case 161u: goto L_088B7B3C;
    case 162u: goto L_088B7B44;
    case 163u: goto L_088B7B4C;
    case 164u: goto L_088B7B54;
    case 165u: goto L_088B7B5C;
    case 166u: goto L_088B7B64;
    case 167u: goto L_088B7B6C;
    case 168u: goto L_088B7B74;
    case 169u: goto L_088B7B78;
    case 170u: goto L_088B7B80;
    case 171u: goto L_088B7BB0;
    case 172u: goto L_088B7BC0;
    case 173u: goto L_088B7BC8;
    case 174u: goto L_088B7BD0;
    case 175u: goto L_088B7BD8;
    case 176u: goto L_088B7BE4;
    case 177u: goto L_088B7BEC;
    case 178u: goto L_088B7BFC;
    case 179u: goto L_088B7C04;
    case 180u: goto L_088B7C10;
    case 181u: goto L_088B7C2C;
    case 182u: goto L_088B7C34;
    case 183u: goto L_088B7C3C;
    case 184u: goto L_088B7C44;
    case 185u: goto L_088B7C48;
    case 186u: goto L_088B7C54;
    case 187u: goto L_088B7C5C;
    case 188u: goto L_088B7C6C;
    case 189u: goto L_088B7C74;
    case 190u: goto L_088B7C80;
    case 191u: goto L_088B7C9C;
    case 192u: goto L_088B7CA4;
    case 193u: goto L_088B7CAC;
    case 194u: goto L_088B7CB4;
    case 195u: goto L_088B7CB8;
    case 196u: goto L_088B7CE0;
    case 197u: goto L_088B7D0C;
    case 198u: goto L_088B7D20;
    case 199u: goto L_088B7D2C;
    case 200u: goto L_088B7D3C;
    case 201u: goto L_088B7D44;
    case 202u: goto L_088B7D4C;
    case 203u: goto L_088B7D50;
    case 204u: goto L_088B7D64;
    case 205u: goto L_088B7D7C;
    case 206u: goto L_088B7DA4;
    case 207u: goto L_088B7DD0;
    case 208u: goto L_088B7DE8;
    case 209u: goto L_088B7DF0;
    case 210u: goto L_088B7DF8;
    case 211u: goto L_088B7E00;
    case 212u: goto L_088B7E08;
    case 213u: goto L_088B7E0C;
    case 214u: goto L_088B7E20;
    case 215u: goto L_088B7E28;
    case 216u: goto L_088B7E30;
    case 217u: goto L_088B7E40;
    case 218u: goto L_088B7E54;
    case 219u: goto L_088B7E5C;
    case 220u: goto L_088B7E78;
    case 221u: goto L_088B7E7C;
    case 222u: goto L_088B7E84;
    case 223u: goto L_088B7EE8;
    case 224u: goto L_088B7F0C;
    case 225u: goto L_088B7F14;
    case 226u: goto L_088B7F1C;
    case 227u: goto L_088B7F24;
    case 228u: goto L_088B7F28;
    case 229u: goto L_088B7F30;
    case 230u: goto L_088B7F54;
    case 231u: goto L_088B7F5C;
    case 232u: goto L_088B7F64;
    case 233u: goto L_088B7F6C;
    case 234u: goto L_088B7F74;
    case 235u: goto L_088B7F7C;
    case 236u: goto L_088B7F88;
    case 237u: goto L_088B7F90;
    case 238u: goto L_088B7FB0;
    case 239u: goto L_088B7FC4;
    case 240u: goto L_088B7FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088B7000:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(148), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    goto L_088B7008;
L_088B7008:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27944)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088B7038;
      }
      goto L_088B7014;
    }
L_088B7014:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[5] = (48896u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (0u | 1u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(27944), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27948), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088B7038;
L_088B7038:
    aot_gpr[4] = (2214u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(29768)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_088B7060;
      }
      goto L_088B7054;
    }
L_088B7054:
    aot_gpr[21] = (2214u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(29768));
      if (branch_taken) {
          goto L_088B7064;
      }
      goto L_088B7060;
    }
L_088B7060:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(64));
    goto L_088B7064;
L_088B7064:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2214u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(29768)));
    aot_fpr[13] = aot_fpr[13] / aot_fpr[14];
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[4] = (2214u << 16u);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[16];
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(29772)));
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(27948)));
      if (branch_taken) {
          goto L_088B70AC;
      }
      goto L_088B7098;
    }
L_088B7098:
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
        goto L_088B70AC;
    }
    goto L_088B70AC;
L_088B70AC:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6928));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_fpr[15] = aot_fpr[13] + aot_fpr[15];
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-6828)));
    if (aot_gpr[5] != aot_gpr[4]) {
    aot_fpr[15] = __builtin_bit_cast(float, 0u);
        goto L_088B70D0;
    }
    goto L_088B70D0;
L_088B70D0:
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6928));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-6828)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[5] != aot_gpr[4]) {
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
        goto L_088B70F8;
    }
    goto L_088B70F8;
L_088B70F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[20] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(29784)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088B7140;
      }
      goto L_088B7138;
    }
L_088B7138:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[29] | 0u);
      if (branch_taken) {
          goto L_088B7144;
      }
      goto L_088B7140;
    }
L_088B7140:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    goto L_088B7144;
L_088B7144:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(29776)));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_088B717C;
      }
      goto L_088B7174;
    }
L_088B7174:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088B7180;
      }
      goto L_088B717C;
    }
L_088B717C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    goto L_088B7180;
L_088B7180:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(29780)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (2214u << 16u);
      if (branch_taken) {
          goto L_088B71A8;
      }
      goto L_088B71A0;
    }
L_088B71A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088B71AC;
      }
      goto L_088B71A8;
    }
L_088B71A8:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(29780));
    goto L_088B71AC;
L_088B71AC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[18] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088B7318;
      }
      goto L_088B71B8;
    }
L_088B71B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(48)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(472)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088B71E4;
      }
      goto L_088B71C8;
    }
L_088B71C8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(480)));
    aot_gpr[4] = (16320u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          goto L_088B71EC;
      }
      goto L_088B71E4;
    }
L_088B71E4:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[5] & 255u);
    goto L_088B71EC;
L_088B71EC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7260;
      }
      goto L_088B71F4;
    }
L_088B71F4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x088B7200u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27480)));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 210u, 0x088B1E94u>(ctx, &aot_mem) && ctx.pc == 0x088B7200u) goto L_088B7200;
    return;
L_088B7200:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088B7218;
      }
      goto L_088B7208;
    }
L_088B7208:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x088B7214u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27480)));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 206u, 0x088B1E48u>(ctx, &aot_mem) && ctx.pc == 0x088B7214u) goto L_088B7214;
    return;
L_088B7214:
    aot_gpr[4] = (2218u << 16u);
    goto L_088B7218;
L_088B7218:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-3951)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(27480)));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (4096u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7280;
      }
      goto L_088B7248;
    }
L_088B7248:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(468), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(469), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(470), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B7280;
      }
      goto L_088B7260;
    }
L_088B7260:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x088B726Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27480)));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 209u, 0x088B1E88u>(ctx, &aot_mem) && ctx.pc == 0x088B726Cu) goto L_088B726C;
    return;
L_088B726C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7280;
      }
      goto L_088B7274;
    }
L_088B7274:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x088B7280u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27480)));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 208u, 0x088B1E7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B7280u) goto L_088B7280;
    return;
L_088B7280:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(228)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(91) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B72F8;
      }
      goto L_088B7294;
    }
L_088B7294:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x088B72A0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27484)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 17u, 0x088B2164u>(ctx, &aot_mem) && ctx.pc == 0x088B72A0u) goto L_088B72A0;
    return;
L_088B72A0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088B72B8;
      }
      goto L_088B72A8;
    }
L_088B72A8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x088B72B4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27484)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 13u, 0x088B2118u>(ctx, &aot_mem) && ctx.pc == 0x088B72B4u) goto L_088B72B4;
    return;
L_088B72B4:
    aot_gpr[4] = (2218u << 16u);
    goto L_088B72B8;
L_088B72B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-3951)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(27484)));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7318;
      }
      goto L_088B72E8;
    }
L_088B72E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(471), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_088B7318;
      }
      goto L_088B72F8;
    }
L_088B72F8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x088B7304u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27484)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 16u, 0x088B2158u>(ctx, &aot_mem) && ctx.pc == 0x088B7304u) goto L_088B7304;
    return;
L_088B7304:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7318;
      }
      goto L_088B730C;
    }
L_088B730C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x088B7318u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27484)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 15u, 0x088B214Cu>(ctx, &aot_mem) && ctx.pc == 0x088B7318u) goto L_088B7318;
    return;
L_088B7318:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7328;
      }
      goto L_088B7320;
    }
L_088B7320:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7320;
      }
      goto L_088B7328;
    }
L_088B7328:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7350:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27944), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7370:
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(27976)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(27972)));
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B73E8;
      }
      goto L_088B738C;
    }
L_088B738C:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[8] = (2219u << 16u);
      if (branch_taken) {
          goto L_088B73E0;
      }
      goto L_088B739C;
    }
L_088B739C:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-23968));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[8]);
    goto L_088B73A8;
L_088B73A8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B73CC;
      }
      goto L_088B73B4;
    }
L_088B73B4:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088B73A8;
      }
      goto L_088B73C4;
    }
L_088B73C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B73E0;
      }
      goto L_088B73CC;
    }
L_088B73CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(27976)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(27976), aot_gpr[4]);
      if (branch_taken) {
          goto L_088B73EC;
      }
      goto L_088B73E0;
    }
L_088B73E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B73EC;
      }
      goto L_088B73E8;
    }
L_088B73E8:
    aot_gpr[2] = (0u | 0u);
    goto L_088B73EC;
L_088B73EC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B73F4:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(27972)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_088B7450;
      }
      goto L_088B740C;
    }
L_088B740C:
    aot_gpr[8] = (2219u << 16u);
    aot_gpr[2] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-23968));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[8]);
    goto L_088B741C;
L_088B741C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7440;
      }
      goto L_088B7428;
    }
L_088B7428:
    { const bool branch_taken = aot_gpr[7] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088B7438;
      }
      goto L_088B7430;
    }
L_088B7430:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088B7440;
      }
      goto L_088B7438;
    }
L_088B7438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7454;
      }
      goto L_088B7440;
    }
L_088B7440:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088B741C;
      }
      goto L_088B7450;
    }
L_088B7450:
    aot_gpr[2] = (0u | 0u);
    goto L_088B7454;
L_088B7454:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B745C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[10] = (2218u << 16u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(3024)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[10]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7494;
      }
      goto L_088B747C;
    }
L_088B747C:
    aot_gpr[31] = (0x088B7484u);
    aot_gpr[4] = (0u | 1u);
    goto L_088B7370;
L_088B7484:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[10]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B747C;
      }
      goto L_088B7494;
    }
L_088B7494:
    aot_gpr[31] = (0x088B749Cu);
    aot_gpr[4] = (0u | 0u);
    goto L_088B73F4;
L_088B749C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B74B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[9] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088B74C4u);
    aot_gpr[4] = (0u | 1u);
    goto L_088B7370;
L_088B74C4:
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B74D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_088B7504;
      }
      goto L_088B74F0;
    }
L_088B74F0:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B751C;
      }
      goto L_088B74FC;
    }
L_088B74FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B750C;
      }
      goto L_088B7504;
    }
L_088B7504:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088B751C;
      }
      goto L_088B750C;
    }
L_088B750C:
    aot_gpr[31] = (0x088B7514u);
    // nop
    goto L_088B745C;
L_088B7514:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7524;
      }
      goto L_088B751C;
    }
L_088B751C:
    aot_gpr[31] = (0x088B7524u);
    // nop
    goto L_088B74B0;
L_088B7524:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7530:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(27980), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27976), 0u);
    aot_gpr[4] = (0u | 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(27972), aot_gpr[4]);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-23968));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    goto L_088B7574;
L_088B7574:
    aot_gpr[31] = (0x088B757Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 87u, 0x088B68D8u>(ctx, &aot_mem) && ctx.pc == 0x088B757Cu) goto L_088B757C;
    return;
L_088B757C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(27972)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088B7574;
      }
      goto L_088B7590;
    }
L_088B7590:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(7919)));
    aot_gpr[31] = (0x088B75A8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(7918)));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 169u, 0x08881EA4u>(ctx, &aot_mem) && ctx.pc == 0x088B75A8u) goto L_088B75A8;
    return;
L_088B75A8:
    aot_gpr[31] = (0x088B75B0u);
    // nop
    goto L_088B74D4;
L_088B75B0:
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
L_088B75C8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B75D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(27972)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_088B7624;
      }
      goto L_088B75FC;
    }
L_088B75FC:
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-23968));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    goto L_088B7608;
L_088B7608:
    aot_gpr[31] = (0x088B7610u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 158u, 0x088B6DA8u>(ctx, &aot_mem) && ctx.pc == 0x088B7610u) goto L_088B7610;
    return;
L_088B7610:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(27972)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088B7608;
      }
      goto L_088B7624;
    }
L_088B7624:
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
L_088B763C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(27972)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_088B7690;
      }
      goto L_088B7668;
    }
L_088B7668:
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-23968));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    goto L_088B7674;
L_088B7674:
    aot_gpr[31] = (0x088B767Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 89u, 0x088B6904u>(ctx, &aot_mem) && ctx.pc == 0x088B767Cu) goto L_088B767C;
    return;
L_088B767C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(27972)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088B7674;
      }
      goto L_088B7690;
    }
L_088B7690:
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
L_088B76A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(27972)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_088B771C;
      }
      goto L_088B76D8;
    }
L_088B76D8:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-23968));
    aot_gpr[16] = (0u | 1u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[4]);
    goto L_088B76E8;
L_088B76E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7708;
      }
      goto L_088B76F4;
    }
L_088B76F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_088B7708;
      }
      goto L_088B7700;
    }
L_088B7700:
    aot_gpr[31] = (0x088B7708u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 90u, 0x088B690Cu>(ctx, &aot_mem) && ctx.pc == 0x088B7708u) goto L_088B7708;
    return;
L_088B7708:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(27972)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088B76E8;
      }
      goto L_088B771C;
    }
L_088B771C:
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
L_088B7738:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27968), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7758:
    aot_gpr[2] = (8464u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(24));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7764:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[7] = (aot_gpr[7] >> 31u);
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[8] & 1u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[8]) >= 0;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(8440)));
      if (branch_taken) {
          goto L_088B7790;
      }
      goto L_088B7788;
    }
L_088B7788:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (0u - aot_gpr[7]);
      if (branch_taken) {
          goto L_088B7790;
      }
      goto L_088B7790;
    }
L_088B7790:
    if (aot_gpr[7] != 0u) {
    aot_gpr[4] = (aot_gpr[4] & 15u);
        goto L_088B77A8;
    }
    goto L_088B7798;
L_088B7798:
    aot_gpr[4] = (aot_gpr[4] & 240u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088B77B4;
      }
      goto L_088B77A8;
    }
L_088B77A8:
    aot_gpr[6] = (aot_gpr[6] << 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_088B77B4;
L_088B77B4:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(8440), static_cast<std::uint8_t>(aot_gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B77BC:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[7] = (aot_gpr[7] >> 31u);
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[8] & 1u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[8]) >= 0;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(8453)));
      if (branch_taken) {
          goto L_088B77E8;
      }
      goto L_088B77E0;
    }
L_088B77E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (0u - aot_gpr[7]);
      if (branch_taken) {
          goto L_088B77E8;
      }
      goto L_088B77E8;
    }
L_088B77E8:
    if (aot_gpr[7] != 0u) {
    aot_gpr[4] = (aot_gpr[4] & 15u);
        goto L_088B7800;
    }
    goto L_088B77F0;
L_088B77F0:
    aot_gpr[4] = (aot_gpr[4] & 240u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088B780C;
      }
      goto L_088B7800;
    }
L_088B7800:
    aot_gpr[6] = (aot_gpr[6] << 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_088B780C;
L_088B780C:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(8453), static_cast<std::uint8_t>(aot_gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7814:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(7980)));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088B7838u);
    aot_gpr[6] = (0u | 8464u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088B7838u) goto L_088B7838;
    return;
L_088B7838:
    aot_gpr[31] = (0x088B7840u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(7980), aot_gpr[17]);
    goto L_088B7758;
L_088B7840:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (0u | 72u);
    aot_gpr[31] = (0x088B7850u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088B7850u) goto L_088B7850;
    return;
L_088B7850:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x088B785Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088B785Cu) goto L_088B785C;
    return;
L_088B785C:
    aot_gpr[31] = (0x088B7864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 37u, 0x0886327Cu>(ctx, &aot_mem) && ctx.pc == 0x088B7864u) goto L_088B7864;
    return;
L_088B7864:
    aot_gpr[4] = (16672u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[4] = (20224u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[9] = (0u | 1u);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088B7898;
      }
      goto L_088B788C;
    }
L_088B788C:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088B78AC;
      }
      goto L_088B7898;
    }
L_088B7898:
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    aot_gpr[5] = (32768u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    goto L_088B78AC;
L_088B78AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(7908), aot_gpr[5]);
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4528)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[12] - aot_fpr[14];
        goto L_088B78D8;
    }
    goto L_088B78CC;
L_088B78CC:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088B78E8;
      }
      goto L_088B78D8;
    }
L_088B78D8:
    aot_gpr[5] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    goto L_088B78E8;
L_088B78E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(7912), aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(7916), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(7917), static_cast<std::uint8_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(7918), static_cast<std::uint8_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(7919), static_cast<std::uint8_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(7920), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[5] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(7924), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(7928), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(7932), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(7964), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(7921), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(7922), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(7968), aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(7978), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(7976), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(7972), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(7984), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(7988), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(7992), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(7996), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(8001), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(8000), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(7923), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(8002), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3104), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3304), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3372), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3504), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3572), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4088), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4220), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4480), 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_088B7984;
L_088B7984:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(544), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(1056), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(1568), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(2080), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[5] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B7984;
      }
      goto L_088B79A4;
    }
L_088B79A4:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    goto L_088B79AC;
L_088B79AC:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[16] + aot_gpr[7]);
    goto L_088B79B4;
L_088B79B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(2592), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[6] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_088B79B4;
      }
      goto L_088B79C8;
    }
L_088B79C8:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B79AC;
      }
      goto L_088B79D8;
    }
L_088B79D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4676), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(8003), static_cast<std::uint8_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8436), 0u);
    aot_gpr[10] = (2215u << 16u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(25336)));
    goto L_088B79F0;
L_088B79F0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x088B7A00u);
    aot_gpr[6] = (0u | 0u);
    goto L_088B7764;
L_088B7A00:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[9]) < 25 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B79F0;
      }
      goto L_088B7A10;
    }
L_088B7A10:
    aot_gpr[9] = (0u | 0u);
    goto L_088B7A14;
L_088B7A14:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x088B7A24u);
    aot_gpr[6] = (0u | 0u);
    goto L_088B77BC;
L_088B7A24:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[9]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B7A14;
      }
      goto L_088B7A34;
    }
L_088B7A34:
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7A4C;
      }
      goto L_088B7A3C;
    }
L_088B7A3C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[31] = (0x088B7A4Cu);
    aot_gpr[6] = (0u | 3u);
    goto L_088B77BC;
L_088B7A4C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(8457), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8460), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(7979), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7A6C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7908)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088B7B6C;
      }
      goto L_088B7A7C;
    }
L_088B7A7C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7912)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088B7B64;
      }
      goto L_088B7A8C;
    }
L_088B7A8C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7917)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088B7B5C;
      }
      goto L_088B7A9C;
    }
L_088B7A9C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7918)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(19)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088B7B54;
      }
      goto L_088B7AAC;
    }
L_088B7AAC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7919)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088B7B4C;
      }
      goto L_088B7ABC;
    }
L_088B7ABC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7920)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(21)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088B7B44;
      }
      goto L_088B7ACC;
    }
L_088B7ACC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7984)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088B7B3C;
      }
      goto L_088B7ADC;
    }
L_088B7ADC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7988)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088B7B34;
      }
      goto L_088B7AEC;
    }
L_088B7AEC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7992)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088B7B2C;
      }
      goto L_088B7AFC;
    }
L_088B7AFC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7996)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088B7B24;
      }
      goto L_088B7B0C;
    }
L_088B7B0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(8000)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088B7B74;
      }
      goto L_088B7B1C;
    }
L_088B7B1C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B7B78;
      }
      goto L_088B7B24;
    }
L_088B7B24:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B7B78;
      }
      goto L_088B7B2C;
    }
L_088B7B2C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B7B78;
      }
      goto L_088B7B34;
    }
L_088B7B34:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B7B78;
      }
      goto L_088B7B3C;
    }
L_088B7B3C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B7B78;
      }
      goto L_088B7B44;
    }
L_088B7B44:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B7B78;
      }
      goto L_088B7B4C;
    }
L_088B7B4C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B7B78;
      }
      goto L_088B7B54;
    }
L_088B7B54:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B7B78;
      }
      goto L_088B7B5C;
    }
L_088B7B5C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B7B78;
      }
      goto L_088B7B64;
    }
L_088B7B64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B7B78;
      }
      goto L_088B7B6C;
    }
L_088B7B6C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B7B78;
      }
      goto L_088B7B74;
    }
L_088B7B74:
    aot_gpr[2] = (0u | 0u);
    goto L_088B7B78;
L_088B7B78:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7B80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[7] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[31]);
    aot_gpr[31] = (0x088B7BB0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088B7BB0u) goto L_088B7BB0;
    return;
L_088B7BB0:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088B7BC0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088B7BC0u) goto L_088B7BC0;
    return;
L_088B7BC0:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7BD8;
      }
      goto L_088B7BC8;
    }
L_088B7BC8:
    aot_gpr[31] = (0x088B7BD0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0568_entry, 568u, 15u, 0x08A3C09Cu>(ctx, &aot_mem) && ctx.pc == 0x088B7BD0u) goto L_088B7BD0;
    return;
L_088B7BD0:
    aot_gpr[31] = (0x088B7BD8u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0568_entry, 568u, 15u, 0x08A3C09Cu>(ctx, &aot_mem) && ctx.pc == 0x088B7BD8u) goto L_088B7BD8;
    return;
L_088B7BD8:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[31] = (0x088B7BE4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x088B7BE4u) goto L_088B7BE4;
    return;
L_088B7BE4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7C48;
      }
      goto L_088B7BEC;
    }
L_088B7BEC:
    aot_gpr[16] = (4096u << 16u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    aot_gpr[17] = (61440u << 16u);
    goto L_088B7BFC;
L_088B7BFC:
    aot_gpr[31] = (0x088B7C04u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x088B7C04u) goto L_088B7C04;
    return;
L_088B7C04:
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7C3C;
      }
      goto L_088B7C10;
    }
L_088B7C10:
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[20]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[18] = (aot_gpr[18] << 4u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[18] & aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[4] >> 24u);
      if (branch_taken) {
          goto L_088B7C34;
      }
      goto L_088B7C2C;
    }
L_088B7C2C:
    aot_gpr[18] = (aot_gpr[18] ^ aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[18] & aot_gpr[16]);
    goto L_088B7C34;
L_088B7C34:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088B7BFC;
      }
      goto L_088B7C3C;
    }
L_088B7C3C:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B7C48;
      }
      goto L_088B7C44;
    }
L_088B7C44:
    aot_gpr[18] = (0u | 1u);
    goto L_088B7C48;
L_088B7C48:
    aot_gpr[21] = (0u | 0u);
    aot_gpr[31] = (0x088B7C54u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x088B7C54u) goto L_088B7C54;
    return;
L_088B7C54:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7CB8;
      }
      goto L_088B7C5C;
    }
L_088B7C5C:
    aot_gpr[16] = (4096u << 16u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    aot_gpr[17] = (61440u << 16u);
    goto L_088B7C6C;
L_088B7C6C:
    aot_gpr[31] = (0x088B7C74u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x088B7C74u) goto L_088B7C74;
    return;
L_088B7C74:
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7CAC;
      }
      goto L_088B7C80;
    }
L_088B7C80:
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[20]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(64))))));
    aot_gpr[21] = (aot_gpr[21] << 4u);
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[21] & aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[4] >> 24u);
      if (branch_taken) {
          goto L_088B7CA4;
      }
      goto L_088B7C9C;
    }
L_088B7C9C:
    aot_gpr[21] = (aot_gpr[21] ^ aot_gpr[4]);
    aot_gpr[21] = (aot_gpr[21] & aot_gpr[16]);
    goto L_088B7CA4;
L_088B7CA4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088B7C6C;
      }
      goto L_088B7CAC;
    }
L_088B7CAC:
    { const bool branch_taken = aot_gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B7CB8;
      }
      goto L_088B7CB4;
    }
L_088B7CB4:
    aot_gpr[21] = (0u | 1u);
    goto L_088B7CB8;
L_088B7CB8:
    aot_gpr[2] = (aot_gpr[18] ^ aot_gpr[21]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7CE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088B7D0Cu);
    aot_gpr[7] = (0u | 1u);
    goto L_088B7B80;
L_088B7D0C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(8001)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088B7D4C;
      }
      goto L_088B7D20;
    }
L_088B7D20:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8004)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088B7D44;
      }
      goto L_088B7D2C;
    }
L_088B7D2C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B7D20;
      }
      goto L_088B7D3C;
    }
L_088B7D3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7D4C;
      }
      goto L_088B7D44;
    }
L_088B7D44:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_088B7D50;
      }
      goto L_088B7D4C;
    }
L_088B7D4C:
    aot_gpr[2] = (0u | 0u);
    goto L_088B7D50;
L_088B7D50:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7D64:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088B7D7Cu);
    aot_gpr[7] = (0u | 0u);
    goto L_088B7B80;
L_088B7D7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(8001)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8004), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(8001), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7DA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088B7DD0u);
    aot_gpr[7] = (0u | 0u);
    goto L_088B7B80;
L_088B7DD0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(8001)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[8] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088B7E20;
      }
      goto L_088B7DE8;
    }
L_088B7DE8:
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[10] = (aot_gpr[16] + static_cast<std::uint32_t>(-4));
    goto L_088B7DF0;
L_088B7DF0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8004)));
      if (branch_taken) {
          goto L_088B7E00;
      }
      goto L_088B7DF8;
    }
L_088B7DF8:
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(8004), aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8004)));
    goto L_088B7E00;
L_088B7E00:
    { const bool branch_taken = aot_gpr[9] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088B7E0C;
      }
      goto L_088B7E08;
    }
L_088B7E08:
    aot_gpr[5] = (0u | 1u);
    goto L_088B7E0C;
L_088B7E0C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B7DF0;
      }
      goto L_088B7E20;
    }
L_088B7E20:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7E30;
      }
      goto L_088B7E28;
    }
L_088B7E28:
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(8001), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088B7E30;
L_088B7E30:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7E40:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(7988), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(7992), 0u);
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(7996), 0u);
      if (branch_taken) {
          goto L_088B7E7C;
      }
      goto L_088B7E54;
    }
L_088B7E54:
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7984)));
    goto L_088B7E5C;
L_088B7E5C:
    aot_gpr[8] = (aot_gpr[6] << (aot_gpr[5] & 31u));
    aot_gpr[8] = (~(aot_gpr[8] | 0u));
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[5] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B7E5C;
      }
      goto L_088B7E78;
    }
L_088B7E78:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(7984), aot_gpr[7]);
    goto L_088B7E7C;
L_088B7E7C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7E84:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7908)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7912)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7917)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7918)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7919)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7920)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7924)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7984)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7988)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7992)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7996)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(8000)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7EE8:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 1u));
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 1u));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[6] & 1u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(8453)));
      if (branch_taken) {
          goto L_088B7F14;
      }
      goto L_088B7F0C;
    }
L_088B7F0C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u - aot_gpr[5]);
      if (branch_taken) {
          goto L_088B7F14;
      }
      goto L_088B7F14;
    }
L_088B7F14:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 4u));
      if (branch_taken) {
          goto L_088B7F24;
      }
      goto L_088B7F1C;
    }
L_088B7F1C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[4] & 15u);
      if (branch_taken) {
          goto L_088B7F28;
      }
      goto L_088B7F24;
    }
L_088B7F24:
    aot_gpr[2] = (aot_gpr[2] & 255u);
    goto L_088B7F28;
L_088B7F28:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7F30:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 1u));
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 1u));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[6] & 1u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(8440)));
      if (branch_taken) {
          goto L_088B7F5C;
      }
      goto L_088B7F54;
    }
L_088B7F54:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u - aot_gpr[5]);
      if (branch_taken) {
          goto L_088B7F5C;
      }
      goto L_088B7F5C;
    }
L_088B7F5C:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B7F6C;
      }
      goto L_088B7F64;
    }
L_088B7F64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[4] & 15u);
      if (branch_taken) {
          goto L_088B7F74;
      }
      goto L_088B7F6C;
    }
L_088B7F6C:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 4u));
    aot_gpr[2] = (aot_gpr[2] & 255u);
    goto L_088B7F74;
L_088B7F74:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7F7C:
    aot_gpr[5] = (aot_gpr[5] & 255u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(8457), static_cast<std::uint8_t>(aot_gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7F88:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(8457)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7F90:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27984), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7FB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088B7FC4u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 159u, 0x08A4CA64u>(ctx, &aot_mem) && ctx.pc == 0x088B7FC4u) goto L_088B7FC4;
    return;
L_088B7FC4:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[2] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7FE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 4u, 0x088B803Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 1u, 0x088B8004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0179(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0179_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_179(Runtime &runtime) {
    runtime.register_generated_unit(179u, 0x088B7000u, 4096u, &recomp_unit_0179, &recomp_unit_0179_entry);
    runtime.register_function(0x088B7000u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7008u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7014u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7038u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7054u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7060u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7064u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7098u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B70ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B70D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B70F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7138u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7140u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7144u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7174u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B717Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7180u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B71A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B71A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B71ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B71B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B71C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B71E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B71ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B71F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7200u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7208u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7214u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7218u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7248u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7260u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B726Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7274u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7280u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7294u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B72A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B72A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B72B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B72B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B72E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B72F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7304u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B730Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7318u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7320u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7328u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7350u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7370u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B738Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B739Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B73A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B73B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B73C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B73CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B73E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B73E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B73ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B73F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B740Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B741Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7428u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7430u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7438u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7440u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7450u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7454u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B745Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B747Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7484u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7494u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B749Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B74B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B74C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B74D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B74F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B74FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7504u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B750Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7514u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B751Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7524u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7530u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7574u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B757Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7590u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B75A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B75B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B75C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B75D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B75FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7608u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7610u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7624u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B763Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7668u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7674u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B767Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7690u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B76A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B76D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B76E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B76F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7700u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7708u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B771Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7738u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7758u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7764u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7788u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7790u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7798u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B77A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B77B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B77BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B77E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B77E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B77F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7800u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B780Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7814u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7838u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7840u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7850u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B785Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7864u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B788Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7898u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B78ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B78CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B78D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B78E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7984u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B79A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B79ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B79B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B79C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B79D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B79F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7A00u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7A10u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7A14u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7A24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7A34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7A3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7A4Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7A6Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7A7Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7A8Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7A9Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7AACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7ABCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7ACCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7ADCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7AECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7AFCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7B0Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7B1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7B24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7B2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7B34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7B3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7B44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7B4Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7B54u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7B5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7B64u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7B6Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7B74u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7B78u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7B80u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7BB0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7BC0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7BC8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7BD0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7BD8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7BE4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7BECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7BFCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7C04u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7C10u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7C2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7C34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7C3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7C44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7C48u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7C54u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7C5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7C6Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7C74u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7C80u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7C9Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7CA4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7CACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7CB4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7CB8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7CE0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7D0Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7D20u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7D2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7D3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7D44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7D4Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7D50u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7D64u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7D7Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7DA4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7DD0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7DE8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7DF0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7DF8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7E00u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7E08u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7E0Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7E20u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7E28u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7E30u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7E40u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7E54u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7E5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7E78u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7E7Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7E84u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7EE8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7F0Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7F14u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7F1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7F24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7F28u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7F30u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7F54u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7F5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7F64u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7F6Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7F74u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7F7Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7F88u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7F90u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7FB0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7FC4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x088B7FE8u, &recomp_unit_0179, "recomp_unit_0179");
}
} // namespace psprecomp
