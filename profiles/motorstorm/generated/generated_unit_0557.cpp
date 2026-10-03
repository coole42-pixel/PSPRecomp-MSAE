#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0557[1022] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 6, 0, 7, 8, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 15, 0,
    0, 0, 0, 0, 0, 16, 17, 0, 0, 0, 18, 0, 0, 19, 0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 24, 25, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0,
    0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 40, 0, 0, 0, 0, 0, 0, 41, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48,
    0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0,
    0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0,
    0, 0, 73, 0, 0, 0, 74, 0, 75, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 92,
    0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 98, 0, 0, 99, 0, 0,
    0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0,
    0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 107, 0, 0, 0, 0, 108, 0, 109, 0, 110, 0,
    0, 111, 0, 112, 0, 0, 0, 0, 113, 0, 114, 0, 115, 0, 116, 0, 0, 117, 118, 0, 0, 0, 119, 120, 0, 0, 121, 0, 0, 0, 122, 0,
    0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0,
    135, 0, 136, 0, 0, 0, 0, 0, 137, 138, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 142, 0, 0, 143, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 148, 0, 0, 0, 149, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 152,
    0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 157, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 160, 0, 161, 162, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 165, 0, 166, 0, 167, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 169, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 175,
};
void recomp_unit_0557_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A31000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0557[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A31000;
    case 2u: goto L_08A310AC;
    case 3u: goto L_08A310BC;
    case 4u: goto L_08A310C4;
    case 5u: goto L_08A310F8;
    case 6u: goto L_08A31108;
    case 7u: goto L_08A31110;
    case 8u: goto L_08A31114;
    case 9u: goto L_08A31118;
    case 10u: goto L_08A31128;
    case 11u: goto L_08A31184;
    case 12u: goto L_08A31260;
    case 13u: goto L_08A31268;
    case 14u: goto L_08A31270;
    case 15u: goto L_08A31278;
    case 16u: goto L_08A31294;
    case 17u: goto L_08A31298;
    case 18u: goto L_08A312A8;
    case 19u: goto L_08A312B4;
    case 20u: goto L_08A312BC;
    case 21u: goto L_08A312C8;
    case 22u: goto L_08A312D8;
    case 23u: goto L_08A312E0;
    case 24u: goto L_08A312F4;
    case 25u: goto L_08A312F8;
    case 26u: goto L_08A31308;
    case 27u: goto L_08A31384;
    case 28u: goto L_08A313B8;
    case 29u: goto L_08A313C4;
    case 30u: goto L_08A313E0;
    case 31u: goto L_08A313F4;
    case 32u: goto L_08A31404;
    case 33u: goto L_08A31414;
    case 34u: goto L_08A31428;
    case 35u: goto L_08A31430;
    case 36u: goto L_08A3144C;
    case 37u: goto L_08A31488;
    case 38u: goto L_08A31490;
    case 39u: goto L_08A314D8;
    case 40u: goto L_08A314DC;
    case 41u: goto L_08A314F8;
    case 42u: goto L_08A31540;
    case 43u: goto L_08A31570;
    case 44u: goto L_08A31584;
    case 45u: goto L_08A3159C;
    case 46u: goto L_08A315B8;
    case 47u: goto L_08A315DC;
    case 48u: goto L_08A315FC;
    case 49u: goto L_08A31618;
    case 50u: goto L_08A3162C;
    case 51u: goto L_08A31630;
    case 52u: goto L_08A31648;
    case 53u: goto L_08A31660;
    case 54u: goto L_08A31668;
    case 55u: goto L_08A31688;
    case 56u: goto L_08A316B8;
    case 57u: goto L_08A316DC;
    case 58u: goto L_08A316E4;
    case 59u: goto L_08A31714;
    case 60u: goto L_08A31734;
    case 61u: goto L_08A3173C;
    case 62u: goto L_08A31744;
    case 63u: goto L_08A3174C;
    case 64u: goto L_08A31754;
    case 65u: goto L_08A31764;
    case 66u: goto L_08A31798;
    case 67u: goto L_08A317A8;
    case 68u: goto L_08A317B4;
    case 69u: goto L_08A317C0;
    case 70u: goto L_08A317C8;
    case 71u: goto L_08A317E0;
    case 72u: goto L_08A317E8;
    case 73u: goto L_08A31808;
    case 74u: goto L_08A31818;
    case 75u: goto L_08A31820;
    case 76u: goto L_08A31830;
    case 77u: goto L_08A3183C;
    case 78u: goto L_08A3184C;
    case 79u: goto L_08A31870;
    case 80u: goto L_08A31880;
    case 81u: goto L_08A318EC;
    case 82u: goto L_08A318FC;
    case 83u: goto L_08A31934;
    case 84u: goto L_08A31960;
    case 85u: goto L_08A31994;
    case 86u: goto L_08A3199C;
    case 87u: goto L_08A31A24;
    case 88u: goto L_08A31A3C;
    case 89u: goto L_08A31A50;
    case 90u: goto L_08A31A60;
    case 91u: goto L_08A31A68;
    case 92u: goto L_08A31A7C;
    case 93u: goto L_08A31A88;
    case 94u: goto L_08A31A90;
    case 95u: goto L_08A31AA8;
    case 96u: goto L_08A31ACC;
    case 97u: goto L_08A31AE0;
    case 98u: goto L_08A31AE8;
    case 99u: goto L_08A31AF4;
    case 100u: goto L_08A31B14;
    case 101u: goto L_08A31B48;
    case 102u: goto L_08A31B50;
    case 103u: goto L_08A31B64;
    case 104u: goto L_08A31B88;
    case 105u: goto L_08A31BC0;
    case 106u: goto L_08A31BC8;
    case 107u: goto L_08A31BD4;
    case 108u: goto L_08A31BE8;
    case 109u: goto L_08A31BF0;
    case 110u: goto L_08A31BF8;
    case 111u: goto L_08A31C04;
    case 112u: goto L_08A31C0C;
    case 113u: goto L_08A31C20;
    case 114u: goto L_08A31C28;
    case 115u: goto L_08A31C30;
    case 116u: goto L_08A31C38;
    case 117u: goto L_08A31C44;
    case 118u: goto L_08A31C48;
    case 119u: goto L_08A31C58;
    case 120u: goto L_08A31C5C;
    case 121u: goto L_08A31C68;
    case 122u: goto L_08A31C78;
    case 123u: goto L_08A31C90;
    case 124u: goto L_08A31C98;
    case 125u: goto L_08A31CA8;
    case 126u: goto L_08A31CB0;
    case 127u: goto L_08A31CC0;
    case 128u: goto L_08A31CD4;
    case 129u: goto L_08A31D04;
    case 130u: goto L_08A31D18;
    case 131u: goto L_08A31D28;
    case 132u: goto L_08A31D4C;
    case 133u: goto L_08A31D6C;
    case 134u: goto L_08A31D74;
    case 135u: goto L_08A31D80;
    case 136u: goto L_08A31D88;
    case 137u: goto L_08A31DA0;
    case 138u: goto L_08A31DA4;
    case 139u: goto L_08A31DAC;
    case 140u: goto L_08A31DC8;
    case 141u: goto L_08A31DD8;
    case 142u: goto L_08A31DDC;
    case 143u: goto L_08A31DE8;
    case 144u: goto L_08A31DF0;
    case 145u: goto L_08A31E10;
    case 146u: goto L_08A31E34;
    case 147u: goto L_08A31E3C;
    case 148u: goto L_08A31E40;
    case 149u: goto L_08A31E50;
    case 150u: goto L_08A31E5C;
    case 151u: goto L_08A31E64;
    case 152u: goto L_08A31E7C;
    case 153u: goto L_08A31EA0;
    case 154u: goto L_08A31EA8;
    case 155u: goto L_08A31EBC;
    case 156u: goto L_08A31ECC;
    case 157u: goto L_08A31ED4;
    case 158u: goto L_08A31EDC;
    case 159u: goto L_08A31EF0;
    case 160u: goto L_08A31F04;
    case 161u: goto L_08A31F0C;
    case 162u: goto L_08A31F10;
    case 163u: goto L_08A31F24;
    case 164u: goto L_08A31F2C;
    case 165u: goto L_08A31F44;
    case 166u: goto L_08A31F4C;
    case 167u: goto L_08A31F54;
    case 168u: goto L_08A31F58;
    case 169u: goto L_08A31F8C;
    case 170u: goto L_08A31F94;
    case 171u: goto L_08A31FA4;
    case 172u: goto L_08A31FC0;
    case 173u: goto L_08A31FD8;
    case 174u: goto L_08A31FEC;
    case 175u: goto L_08A31FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A31000:
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20748)));
    aot_fpr[2] = aot_fpr[2] + aot_fpr[0];
    { const float fs = aot_fpr[4]; const float ft = aot_fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[4] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[4] = fs * ft; }
    aot_fpr[4] = aot_fpr[4] + aot_fpr[11];
    aot_fpr[1] = aot_fpr[4] + aot_fpr[7];
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000FFFu) | ((0u & 0x00000FFFu) << 0u));
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[10] = aot_fpr[0] - aot_fpr[10];
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[3] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[3] = fs * ft; }
    { const float fs = aot_fpr[6]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[6] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[6] = fs * ft; }
    aot_fpr[10] = aot_fpr[10] - aot_fpr[13];
    aot_fpr[4] = aot_fpr[4] - aot_fpr[10];
    { const float fs = aot_fpr[8]; const float ft = aot_fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[8] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[8] = fs * ft; }
    aot_fpr[3] = aot_fpr[3] + aot_fpr[8];
    aot_fpr[0] = aot_fpr[6] + aot_fpr[3];
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000FFFu) | ((0u & 0x00000FFFu) << 0u));
    aot_fpr[4] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20760)));
    aot_fpr[6] = aot_fpr[4] - aot_fpr[6];
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20756)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[3] = aot_fpr[3] - aot_fpr[6];
    { const float fs = aot_fpr[4]; const float ft = aot_fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    { const float fs = aot_fpr[4]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[4] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[4] = fs * ft; }
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20764)));
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[3] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[3] = fs * ft; }
    aot_fpr[2] = aot_fpr[2] + aot_fpr[3];
    aot_fpr[2] = aot_fpr[2] + aot_fpr[12];
    aot_fpr[0] = aot_fpr[4] + aot_fpr[2];
    aot_fpr[0] = aot_fpr[0] + aot_fpr[14];
    aot_fpr[1] = aot_fpr[5] + aot_fpr[0];
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000FFFu) | ((0u & 0x00000FFFu) << 0u));
    aot_fpr[6] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[5] = aot_fpr[6] - aot_fpr[5];
    aot_fpr[5] = aot_fpr[5] - aot_fpr[14];
    aot_fpr[5] = aot_fpr[5] - aot_fpr[4];
    aot_fpr[0] = aot_fpr[2] - aot_fpr[5];
    goto L_08A310AC;
L_08A310AC:
    aot_gpr[2] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[9] | aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20696)));
      if (branch_taken) {
          goto L_08A310C4;
      }
      goto L_08A310BC;
    }
L_08A310BC:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20768)));
    goto L_08A310C4;
L_08A310C4:
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[21]));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[3] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[3] = fs * ft; }
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000FFFu) | ((0u & 0x00000FFFu) << 0u));
    aot_fpr[1] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[0] = aot_fpr[21] - aot_fpr[1];
    { const float fs = aot_fpr[6]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[4] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[4] = fs * ft; }
    { const float fs = aot_fpr[6]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[3] = aot_fpr[0] + aot_fpr[3];
    aot_fpr[2] = aot_fpr[3] + aot_fpr[4];
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    aot_gpr[3] = ((aot_gpr[3] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
      if (branch_taken) {
          goto L_08A312C8;
      }
      goto L_08A310F8;
    }
L_08A310F8:
    aot_gpr[4] = (17152u << 16u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A31298;
      }
      goto L_08A31108;
    }
L_08A31108:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[4];
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A31278;
      }
      goto L_08A31110;
    }
L_08A31110:
    aot_gpr[2] = (16128u << 16u);
    goto L_08A31114;
L_08A31114:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    goto L_08A31118;
L_08A31118:
    aot_gpr[4] = (0u + 0u);
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[3]) >> 23u));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_08A31184;
      }
      goto L_08A31128;
    }
L_08A31128:
    aot_gpr[5] = (128u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-126));
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> (aot_gpr[3] & 31u)));
    aot_gpr[3] = (aot_gpr[6] + aot_gpr[3]);
    aot_gpr[4] = ((aot_gpr[3] >> 23u) & 0x000000FFu);
    aot_gpr[2] = (127u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-127));
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> (aot_gpr[4] & 31u)));
    aot_gpr[2] = (~(0u | aot_gpr[2]));
    aot_gpr[2] = (aot_gpr[3] & aot_gpr[2]);
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_gpr[3] = ((aot_gpr[3] & ~0xFF800000u) | ((0u & 0x000001FFu) << 23u));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(23));
    aot_fpr[4] = aot_fpr[4] - aot_fpr[0];
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[3]) >> (aot_gpr[2] & 31u)));
    aot_fpr[2] = aot_fpr[3] + aot_fpr[4];
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[6]) < 0 ? 1u : 0u);
    aot_gpr[2] = (0u - aot_gpr[4]);
    if (aot_gpr[3] != 0u) aot_gpr[4] = (aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[4] << 23u);
    goto L_08A31184;
L_08A31184:
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    aot_fpr[6] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20696)));
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000FFFu) | ((0u & 0x00000FFFu) << 0u));
    aot_fpr[2] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20792)));
    aot_fpr[4] = aot_fpr[2] - aot_fpr[4];
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20784)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[4] = aot_fpr[3] - aot_fpr[4];
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20788)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[4]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[4] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[4] = fs * ft; }
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20796)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[4] = aot_fpr[4] + aot_fpr[1];
    aot_fpr[5] = aot_fpr[2] + aot_fpr[4];
    { const float fs = aot_fpr[5]; const float ft = aot_fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[2] = aot_fpr[5] - aot_fpr[2];
    { const float fs = aot_fpr[1]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[4] = aot_fpr[4] - aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20800)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = aot_fpr[0] - aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20804)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[5]; const float ft = aot_fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[3] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[3] = fs * ft; }
    { const float fs = aot_fpr[1]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[4] = aot_fpr[4] + aot_fpr[3];
    aot_fpr[0] = aot_fpr[0] + aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20808)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[1]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] - aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20812)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[1]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] + aot_fpr[2];
    { const float fs = aot_fpr[1]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20816)));
    aot_fpr[1] = aot_fpr[5] - aot_fpr[1];
    aot_fpr[0] = aot_fpr[1] - aot_fpr[0];
    { const float fs = aot_fpr[5]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[1] = aot_fpr[1] / aot_fpr[0];
    aot_fpr[1] = aot_fpr[1] - aot_fpr[4];
    aot_fpr[1] = aot_fpr[1] - aot_fpr[5];
    aot_fpr[12] = aot_fpr[6] - aot_fpr[1];
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[3] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[3]) >> 23u));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[3]);
      if (branch_taken) {
          goto L_08A31268;
      }
      goto L_08A31260;
    }
L_08A31260:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[21] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[21] = fs * ft; }
    (void)rt.invoke_chained_direct<&recomp_unit_0556_entry, 556u, 131u, 0x08A30C38u>(ctx, &aot_mem); return;
L_08A31268:
    aot_gpr[31] = (0x08A31270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 76u, 0x08A32794u>(ctx, &aot_mem) && ctx.pc == 0x08A31270u) goto L_08A31270;
    return;
L_08A31270:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[21] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[21] = fs * ft; }
    (void)rt.invoke_chained_direct<&recomp_unit_0556_entry, 556u, 131u, 0x08A30C38u>(ctx, &aot_mem); return;
L_08A31278:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20776)));
    aot_fpr[1] = aot_fpr[2] - aot_fpr[4];
    aot_fpr[0] = aot_fpr[3] + aot_fpr[0];
    ctx.set_fpu_condition((aot_fpr[1] < aot_fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[2] = (16128u << 16u);
      if (branch_taken) {
          goto L_08A31114;
      }
      goto L_08A31294;
    }
L_08A31294:
    aot_gpr[2] = (2215u << 16u);
    goto L_08A31298;
L_08A31298:
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20772)));
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[21] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[21] = fs * ft; }
    (void)rt.invoke_chained_direct<&recomp_unit_0556_entry, 556u, 131u, 0x08A30C38u>(ctx, &aot_mem); return;
L_08A312A8:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A31308;
      }
      goto L_08A312B4;
    }
L_08A312B4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) <= 0;
    aot_fpr[21] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0556_entry, 556u, 131u, 0x08A30C38u>(ctx, &aot_mem); return;
      }
      goto L_08A312BC;
    }
L_08A312BC:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[21] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20700)));
    (void)rt.invoke_chained_direct<&recomp_unit_0556_entry, 556u, 131u, 0x08A30C38u>(ctx, &aot_mem); return;
L_08A312C8:
    aot_gpr[4] = (17174u << 16u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (2215u << 16u);
        goto L_08A312F8;
    }
    goto L_08A312D8;
L_08A312D8:
    { const bool branch_taken = aot_gpr[3] != aot_gpr[4];
    aot_gpr[2] = (16128u << 16u);
      if (branch_taken) {
          goto L_08A31114;
      }
      goto L_08A312E0;
    }
L_08A312E0:
    aot_fpr[0] = aot_fpr[2] - aot_fpr[4];
    ctx.set_fpu_condition((aot_fpr[3] <= aot_fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A31118;
      }
      goto L_08A312F4;
    }
L_08A312F4:
    aot_gpr[2] = (2215u << 16u);
    goto L_08A312F8;
L_08A312F8:
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20780)));
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[21] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[21] = fs * ft; }
    (void)rt.invoke_chained_direct<&recomp_unit_0556_entry, 556u, 131u, 0x08A30C38u>(ctx, &aot_mem); return;
L_08A31308:
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20696)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[2] = aot_fpr[0] - aot_fpr[2];
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20712)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20716)));
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[3] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20708)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = aot_fpr[0] + aot_fpr[1];
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20720)));
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[4] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[4] = fs * ft; }
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[3] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[3] = fs * ft; }
    aot_fpr[1] = aot_fpr[1] - aot_fpr[0];
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20704)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[4]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[4] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[4] = fs * ft; }
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20724)));
    { const float fs = aot_fpr[4]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[4] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[4] = fs * ft; }
    aot_fpr[3] = aot_fpr[3] + aot_fpr[4];
    aot_fpr[0] = aot_fpr[2] + aot_fpr[3];
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000FFFu) | ((0u & 0x00000FFFu) << 0u));
    aot_fpr[6] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[2] = aot_fpr[6] - aot_fpr[2];
    aot_fpr[0] = aot_fpr[3] - aot_fpr[2];
    goto L_08A310AC;
L_08A31384:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[2] = (16201u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 4056u);
    aot_gpr[16] = ((aot_gpr[16] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
      if (branch_taken) {
          goto L_08A313E0;
      }
      goto L_08A313B8;
    }
L_08A313B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A313C4;
L_08A313C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A313E0:
    aot_gpr[2] = (16406u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 52195u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (17225u << 16u);
      if (branch_taken) {
          goto L_08A31428;
      }
      goto L_08A313F4;
    }
L_08A313F4:
    aot_gpr[2] = (aot_gpr[2] | 3968u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (32639u << 16u);
      if (branch_taken) {
          goto L_08A31488;
      }
      goto L_08A31404;
    }
L_08A31404:
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[16]) >> 23u));
      if (branch_taken) {
          goto L_08A315DC;
      }
      goto L_08A31414;
    }
L_08A31414:
    aot_fpr[0] = aot_fpr[12] - aot_fpr[12];
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08A313C4;
L_08A31428:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) <= 0;
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A3159C;
      }
      goto L_08A31430;
    }
L_08A31430:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20820)));
    aot_gpr[3] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (16329u << 16u);
    aot_gpr[3] = ((aot_gpr[3] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    aot_gpr[2] = (aot_gpr[2] | 4048u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_fpr[12] = aot_fpr[12] - aot_fpr[0];
      if (branch_taken) {
          goto L_08A31688;
      }
      goto L_08A3144C;
    }
L_08A3144C:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20824)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    aot_fpr[1] = aot_fpr[12] - aot_fpr[2];
    aot_fpr[0] = aot_fpr[12] - aot_fpr[1];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    aot_fpr[0] = aot_fpr[0] - aot_fpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
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
L_08A31488:
    aot_gpr[31] = (0x08A31490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 43u, 0x08A2F3C4u>(ctx, &aot_mem) && ctx.pc == 0x08A31490u) goto L_08A31490;
    return;
L_08A31490:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20836)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20840)));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = aot_fpr[1] + aot_fpr[2];
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20844)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[1]));
    aot_fpr[5] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[1])));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20824)));
    { const float fs = aot_fpr[5]; const float ft = aot_fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[5]) < 32 ? 1u : 0u);
    { const float fs = aot_fpr[5]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[3] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[3] = fs * ft; }
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_fpr[4] = aot_fpr[0] + aot_fpr[2];
      if (branch_taken) {
          goto L_08A316B8;
      }
      goto L_08A314D8;
    }
L_08A314D8:
    aot_fpr[0] = aot_fpr[4] - aot_fpr[3];
    goto L_08A314DC;
L_08A314DC:
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[16]) >> 23u));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[2] = ((aot_gpr[4] >> 23u) & 0x000000FFu);
    aot_gpr[2] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_08A31570;
      }
      goto L_08A314F8;
    }
L_08A314F8:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20828)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20832)));
    { const float fs = aot_fpr[5]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    { const float fs = aot_fpr[5]; const float ft = aot_fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    aot_fpr[6] = aot_fpr[4] - aot_fpr[1];
    aot_fpr[0] = aot_fpr[4] - aot_fpr[6];
    aot_fpr[4] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[6]));
    aot_fpr[0] = aot_fpr[0] - aot_fpr[1];
    aot_fpr[3] = aot_fpr[2] - aot_fpr[0];
    aot_fpr[1] = aot_fpr[6] - aot_fpr[3];
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    aot_gpr[2] = ((aot_gpr[4] >> 23u) & 0x000000FFu);
    aot_gpr[2] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < 26 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
      if (branch_taken) {
          goto L_08A31570;
      }
      goto L_08A31540;
    }
L_08A31540:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20848)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20852)));
    { const float fs = aot_fpr[5]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    { const float fs = aot_fpr[5]; const float ft = aot_fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    aot_fpr[4] = aot_fpr[6] - aot_fpr[1];
    aot_fpr[0] = aot_fpr[6] - aot_fpr[4];
    aot_fpr[0] = aot_fpr[0] - aot_fpr[1];
    aot_fpr[3] = aot_fpr[2] - aot_fpr[0];
    aot_fpr[1] = aot_fpr[4] - aot_fpr[3];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    goto L_08A31570;
L_08A31570:
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[0] = aot_fpr[4] - aot_fpr[2];
    aot_fpr[1] = aot_fpr[0] - aot_fpr[3];
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) >= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
      if (branch_taken) {
          goto L_08A313C4;
      }
      goto L_08A31584;
    }
L_08A31584:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[2]) ^ 0x80000000u);
    aot_fpr[1] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[1]) ^ 0x80000000u);
    aot_gpr[5] = (0u - aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    goto L_08A313C4;
L_08A3159C:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20820)));
    aot_gpr[3] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (16329u << 16u);
    aot_gpr[3] = ((aot_gpr[3] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    aot_gpr[2] = (aot_gpr[2] | 4048u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_fpr[12] = aot_fpr[12] + aot_fpr[0];
      if (branch_taken) {
          goto L_08A316E4;
      }
      goto L_08A315B8;
    }
L_08A315B8:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20824)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_fpr[1] = aot_fpr[12] + aot_fpr[2];
    aot_fpr[0] = aot_fpr[12] - aot_fpr[1];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    aot_fpr[0] = aot_fpr[0] + aot_fpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08A313C4;
L_08A315DC:
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(-134));
    aot_gpr[2] = (aot_gpr[6] << 23u);
    aot_gpr[16] = (aot_gpr[16] - aot_gpr[2]);
    aot_fpr[2] = __builtin_bit_cast(float, aot_gpr[16]);
    aot_gpr[3] = (2215u << 16u);
    aot_fpr[3] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20856)));
    aot_gpr[2] = (aot_gpr[29] + 0u);
    aot_gpr[3] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    goto L_08A315FC;
L_08A315FC:
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[2]));
    aot_fpr[1] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[0])));
    aot_fpr[2] = aot_fpr[2] - aot_fpr[1];
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[3];
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
      if (branch_taken) {
          goto L_08A315FC;
      }
      goto L_08A31618;
    }
L_08A31618:
    aot_fpr[1] = __builtin_bit_cast(float, 0u);
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    goto L_08A31630;
L_08A3162C:
    aot_gpr[7] = (aot_gpr[2] + 0u);
    goto L_08A31630;
L_08A31630:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[0]) || std::isnan(aot_fpr[1])) && aot_fpr[0] == aot_fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A3162C;
      }
      goto L_08A31648;
    }
L_08A31648:
    aot_gpr[9] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(5908));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x08A31660u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(2));
    goto L_08A3199C;
L_08A31660:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) >= 0;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A313C4;
      }
      goto L_08A31668;
    }
L_08A31668:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u - aot_gpr[2]);
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]) ^ 0x80000000u);
    aot_fpr[1] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[1]) ^ 0x80000000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    goto L_08A313C4;
L_08A31688:
    aot_gpr[3] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20828)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20832)));
    aot_fpr[0] = aot_fpr[12] - aot_fpr[0];
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_fpr[1] = aot_fpr[0] - aot_fpr[2];
    aot_fpr[0] = aot_fpr[0] - aot_fpr[1];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    aot_fpr[0] = aot_fpr[0] - aot_fpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08A313C4;
L_08A316B8:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(6700));
    aot_gpr[3] = (aot_gpr[5] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-4)));
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[2] = ((aot_gpr[2] & ~0x000000FFu) | ((0u & 0x000000FFu) << 0u));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    aot_fpr[0] = aot_fpr[4] - aot_fpr[3];
      if (branch_taken) {
          goto L_08A314DC;
      }
      goto L_08A316DC;
    }
L_08A316DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08A31570;
L_08A316E4:
    aot_gpr[3] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20828)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20832)));
    aot_fpr[0] = aot_fpr[12] + aot_fpr[0];
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_fpr[1] = aot_fpr[0] + aot_fpr[2];
    aot_fpr[0] = aot_fpr[0] - aot_fpr[1];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    aot_fpr[0] = aot_fpr[0] + aot_fpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08A313C4;
L_08A31714:
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[2] = (32639u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[3] = ((aot_gpr[3] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08A31744;
      }
      goto L_08A31734;
    }
L_08A31734:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[0];
    goto L_08A3173C;
L_08A3173C:
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A31744:
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3173C;
      }
      goto L_08A3174C;
    }
L_08A3174C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[2] = (127u << 16u);
      if (branch_taken) {
          goto L_08A3183C;
      }
      goto L_08A31754;
    }
L_08A31754:
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 23u));
      if (branch_taken) {
          goto L_08A31808;
      }
      goto L_08A31764;
    }
L_08A31764:
    aot_gpr[6] = ((aot_gpr[6] & ~0xFF800000u) | ((0u & 0x000001FFu) << 23u));
    aot_gpr[2] = (128u << 16u);
    aot_gpr[2] = (aot_gpr[6] | aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[3] + static_cast<std::uint32_t>(-127));
    aot_gpr[4] = (aot_gpr[5] & 1u);
    aot_gpr[3] = (aot_gpr[2] << 1u);
    if (aot_gpr[4] != 0u) aot_gpr[2] = (aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[2] << 1u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[9] = (0u + 0u);
    aot_gpr[10] = (0u + 0u);
    aot_gpr[7] = (256u << 16u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(25));
    goto L_08A31798;
L_08A31798:
    aot_gpr[3] = (aot_gpr[9] + aot_gpr[7]);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A317B4;
      }
      goto L_08A317A8;
    }
L_08A317A8:
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[3]);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[7]);
    aot_gpr[9] = (aot_gpr[3] + aot_gpr[7]);
    goto L_08A317B4;
L_08A317B4:
    aot_gpr[6] = (aot_gpr[6] << 1u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] >> 1u);
      if (branch_taken) {
          goto L_08A31798;
      }
      goto L_08A317C0;
    }
L_08A317C0:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[2] = (aot_gpr[10] & 1u);
      if (branch_taken) {
          goto L_08A317E8;
      }
      goto L_08A317C8;
    }
L_08A317C8:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[10]) >> 1u));
    aot_gpr[3] = (16128u << 16u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[4] << 23u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[2]);
    goto L_08A317E0;
L_08A317E0:
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A317E8:
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[2]);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[10]) >> 1u));
    aot_gpr[3] = (16128u << 16u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[4] << 23u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[2]);
    goto L_08A317E0;
L_08A31808:
    aot_gpr[2] = (128u << 16u);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_08A31830;
      }
      goto L_08A31818;
    }
L_08A31818:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[4] = (128u << 16u);
    goto L_08A31820;
L_08A31820:
    aot_gpr[6] = (aot_gpr[6] << 1u);
    aot_gpr[2] = (aot_gpr[6] & aot_gpr[4]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A31820;
      }
      goto L_08A31830;
    }
L_08A31830:
    aot_gpr[2] = (aot_gpr[3] - aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08A31764;
L_08A3183C:
    aot_fpr[0] = aot_fpr[12] - aot_fpr[12];
    aot_fpr[12] = aot_fpr[0] / aot_fpr[0];
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3184C:
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[3] = (12799u << 16u);
    aot_gpr[3] = (aot_gpr[3] | 65535u);
    aot_gpr[4] = ((aot_gpr[4] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    aot_gpr[2] = (16025u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 39321u);
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A31880;
      }
      goto L_08A31870;
    }
L_08A31870:
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A31994;
      }
      goto L_08A31880;
    }
L_08A31880:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[3] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[3] = fs * ft; }
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20864)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20868)));
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (16200u << 16u);
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    aot_fpr[0] = aot_fpr[0] + aot_fpr[1];
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20872)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] - aot_fpr[1];
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20876)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] + aot_fpr[1];
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20880)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] - aot_fpr[1];
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20884)));
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] + aot_fpr[1];
    { const bool branch_taken = aot_gpr[5] == 0u;
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
      if (branch_taken) {
          goto L_08A31934;
      }
      goto L_08A318EC;
    }
L_08A318EC:
    aot_gpr[2] = (65280u << 16u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_fpr[4] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_08A31960;
      }
      goto L_08A318FC;
    }
L_08A318FC:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[4] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20892)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20888)));
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_gpr[3] = (2215u << 16u);
    aot_fpr[5] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20896)));
    aot_fpr[1] = aot_fpr[1] - aot_fpr[2];
    aot_fpr[0] = aot_fpr[0] - aot_fpr[4];
    aot_fpr[0] = aot_fpr[0] - aot_fpr[1];
    jump_target = aot_gpr[31];
    aot_fpr[0] = aot_fpr[5] - aot_fpr[0];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A31934:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = aot_fpr[1] - aot_fpr[0];
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20888)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] - aot_fpr[1];
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20860)));
    jump_target = aot_gpr[31];
    aot_fpr[0] = aot_fpr[1] - aot_fpr[0];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A31960:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20860)));
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[5] = aot_fpr[0] - aot_fpr[4];
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20888)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[1] = aot_fpr[1] - aot_fpr[2];
    aot_fpr[0] = aot_fpr[0] - aot_fpr[4];
    aot_fpr[0] = aot_fpr[0] - aot_fpr[1];
    jump_target = aot_gpr[31];
    aot_fpr[0] = aot_fpr[5] - aot_fpr[0];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A31994:
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20860)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3199C:
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(-3));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[2]) < 0 ? 1u : 0u);
    aot_gpr[10] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    if (aot_gpr[3] != 0u) aot_gpr[2] = (aot_gpr[6]);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-400));
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> 3u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), aot_gpr[2]);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(6872));
    aot_gpr[3] = (aot_gpr[8] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(344), aot_gpr[18]);
    aot_gpr[6] = (aot_gpr[2] << 3u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(364), aot_gpr[23]);
    aot_gpr[2] = (0u - aot_gpr[6]);
    aot_gpr[23] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(340), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(372), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(368), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(360), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(356), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(352), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(348), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(336), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(384), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(328), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(324), aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(332), aot_gpr[9]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 17u, 0x08A32170u>(ctx, &aot_mem); return;
      }
      goto L_08A31A24;
    }
L_08A31A24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    aot_gpr[30] = (aot_gpr[10] + aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[18] + aot_gpr[17]);
    aot_gpr[19] = (aot_gpr[30] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) < 0;
    aot_gpr[3] = (aot_gpr[4] - aot_gpr[17]);
      if (branch_taken) {
          goto L_08A31A7C;
      }
      goto L_08A31A3C;
    }
L_08A31A3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(332)));
    aot_gpr[2] = (aot_gpr[3] << 2u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    goto L_08A31A50;
L_08A31A50:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) < 0;
    aot_fpr[0] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_08A31A68;
      }
      goto L_08A31A60;
    }
L_08A31A60:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_fpr[0] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[0])));
    goto L_08A31A68;
L_08A31A68:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A31A50;
      }
      goto L_08A31A7C;
    }
L_08A31A7C:
    aot_gpr[6] = (0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
      if (branch_taken) {
          goto L_08A31AE0;
      }
      goto L_08A31A88;
    }
L_08A31A88:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) < 0;
    aot_fpr[2] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_08A31ACC;
      }
      goto L_08A31A90;
    }
L_08A31A90:
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[3] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[23] + 0u);
    aot_gpr[4] = (0u + 0u);
    goto L_08A31AA8;
L_08A31AA8:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_fpr[2] = aot_fpr[2] + aot_fpr[0];
      if (branch_taken) {
          goto L_08A31AA8;
      }
      goto L_08A31ACC;
    }
L_08A31ACC:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A31A88;
      }
      goto L_08A31AE0;
    }
L_08A31AE0:
    aot_gpr[16] = (aot_gpr[18] + 0u);
    aot_gpr[20] = (aot_gpr[16] << 2u);
    goto L_08A31AE8;
L_08A31AE8:
    aot_gpr[2] = (aot_gpr[20] + aot_gpr[29]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) <= 0;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(240)));
      if (branch_taken) {
          goto L_08A31B48;
      }
      goto L_08A31AF4;
    }
L_08A31AF4:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[5] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20900)));
    aot_gpr[3] = (aot_gpr[29] + aot_gpr[20]);
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[4] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20904)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(236));
    aot_gpr[4] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[29] + 0u);
    goto L_08A31B14;
L_08A31B14:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[3] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-4));
    aot_fpr[1] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[0]));
    aot_fpr[2] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[1])));
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[0] = aot_fpr[12] + aot_fpr[0];
    aot_fpr[12] = aot_fpr[2] + aot_fpr[3];
    aot_fpr[1] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[0]));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[16];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A31B14;
      }
      goto L_08A31B48;
    }
L_08A31B48:
    aot_gpr[31] = (0x08A31B50u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 76u, 0x08A32794u>(ctx, &aot_mem) && ctx.pc == 0x08A31B50u) goto L_08A31B50;
    return;
L_08A31B50:
    aot_gpr[3] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20908)));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[31] = (0x08A31B64u);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 44u, 0x08A2F3D4u>(ctx, &aot_mem) && ctx.pc == 0x08A31B64u) goto L_08A31B64;
    return;
L_08A31B64:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20912)));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[20] = aot_fpr[20] + aot_fpr[0];
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[20]));
    aot_gpr[21] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_fpr[0] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[0])));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) <= 0;
    aot_fpr[20] = aot_fpr[20] - aot_fpr[0];
      if (branch_taken) {
          goto L_08A31F8C;
      }
      goto L_08A31B88;
    }
L_08A31B88:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[29]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[19]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> (aot_gpr[3] & 31u)));
    aot_gpr[3] = (aot_gpr[6] << (aot_gpr[3] & 31u));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[19]);
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> (aot_gpr[2] & 31u)));
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08A31BC0;
L_08A31BC0:
    if (static_cast<std::int32_t>(aot_gpr[22]) <= 0) {
    aot_fpr[0] = __builtin_bit_cast(float, 0u);
        goto L_08A31C48;
    }
    goto L_08A31BC8;
L_08A31BC8:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) <= 0;
    aot_gpr[8] = (0u + 0u);
      if (branch_taken) {
          goto L_08A31C20;
      }
      goto L_08A31BD4;
    }
L_08A31BD4:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[3] = (aot_gpr[29] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(255));
    goto L_08A31C04;
L_08A31BE8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[7] - aot_gpr[2]);
      if (branch_taken) {
          goto L_08A31BF8;
      }
      goto L_08A31BF0;
    }
L_08A31BF0:
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08A31BF8;
L_08A31BF8:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[16];
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A31C20;
      }
      goto L_08A31C04;
    }
L_08A31C04:
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A31BE8;
      }
      goto L_08A31C0C;
    }
L_08A31C0C:
    aot_gpr[2] = (aot_gpr[6] - aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[16];
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A31C04;
      }
      goto L_08A31C20;
    }
L_08A31C20:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) <= 0;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A31C38;
      }
      goto L_08A31C28;
    }
L_08A31C28:
    { const bool branch_taken = aot_gpr[19] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A31FA4;
      }
      goto L_08A31C30;
    }
L_08A31C30:
    if (aot_gpr[19] == aot_gpr[2]) {
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
        goto L_08A31FC0;
    }
    goto L_08A31C38;
L_08A31C38:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[22] == aot_gpr[2];
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A31D74;
      }
      goto L_08A31C44;
    }
L_08A31C44:
    aot_fpr[0] = __builtin_bit_cast(float, 0u);
    goto L_08A31C48;
L_08A31C48:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[20]) || std::isnan(aot_fpr[0])) && aot_fpr[20] == aot_fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_08A31DA4;
      }
      goto L_08A31C58;
    }
L_08A31C58:
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    goto L_08A31C5C;
L_08A31C5C:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (aot_gpr[18] << 2u);
        goto L_08A31C98;
    }
    goto L_08A31C68;
L_08A31C68:
    aot_gpr[8] = (aot_gpr[7] << 2u);
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (0u + 0u);
    goto L_08A31C78;
L_08A31C78:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[2]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A31C78;
      }
      goto L_08A31C90;
    }
L_08A31C90:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[18] << 2u);
      if (branch_taken) {
          goto L_08A31FF4;
      }
      goto L_08A31C98;
    }
L_08A31C98:
    aot_gpr[2] = (aot_gpr[5] + aot_gpr[29]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A31CC0;
      }
      goto L_08A31CA8;
    }
L_08A31CA8:
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(-8));
    aot_gpr[3] = (aot_gpr[29] + aot_gpr[2]);
    goto L_08A31CB0;
L_08A31CB0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A31CB0;
      }
      goto L_08A31CC0;
    }
L_08A31CC0:
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[20] = (aot_gpr[16] << 2u);
        goto L_08A31AE8;
    }
    goto L_08A31CD4;
L_08A31CD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    aot_gpr[6] = (aot_gpr[17] + aot_gpr[7]);
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[7] << 2u);
    aot_gpr[10] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(332)));
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[11] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    aot_gpr[5] = (aot_gpr[6] << 2u);
    aot_gpr[9] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[11] + aot_gpr[5]);
    goto L_08A31D04;
L_08A31D04:
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_fpr[2] = __builtin_bit_cast(float, 0u);
    aot_fpr[0] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[1])));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_08A31D4C;
      }
      goto L_08A31D18;
    }
L_08A31D18:
    aot_gpr[2] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[11] + aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[23] + 0u);
    aot_gpr[5] = (0u + 0u);
    goto L_08A31D28;
L_08A31D28:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_fpr[2] = aot_fpr[2] + aot_fpr[0];
      if (branch_taken) {
          goto L_08A31D28;
      }
      goto L_08A31D4C;
    }
L_08A31D4C:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A31D04;
      }
      goto L_08A31D6C;
    }
L_08A31D6C:
    aot_gpr[20] = (aot_gpr[16] << 2u);
    goto L_08A31AE8;
L_08A31D74:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20920)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_fpr[20] = aot_fpr[12] - aot_fpr[20];
      if (branch_taken) {
          goto L_08A31C44;
      }
      goto L_08A31D80;
    }
L_08A31D80:
    aot_gpr[31] = (0x08A31D88u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 76u, 0x08A32794u>(ctx, &aot_mem) && ctx.pc == 0x08A31D88u) goto L_08A31D88;
    return;
L_08A31D88:
    aot_fpr[20] = aot_fpr[20] - aot_fpr[0];
    aot_fpr[0] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[20]) || std::isnan(aot_fpr[0])) && aot_fpr[20] == aot_fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A31C5C;
      }
      goto L_08A31DA0;
    }
L_08A31DA0:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08A31DA4;
L_08A31DA4:
    aot_gpr[31] = (0x08A31DACu);
    aot_gpr[4] = (0u - aot_gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 76u, 0x08A32794u>(ctx, &aot_mem) && ctx.pc == 0x08A31DACu) goto L_08A31DAC;
    return;
L_08A31DAC:
    aot_fpr[4] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20924)));
    ctx.set_fpu_condition((aot_fpr[0] <= aot_fpr[4]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 16u, 0x08A3212Cu>(ctx, &aot_mem); return;
      }
      goto L_08A31DC8;
    }
L_08A31DC8:
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[4]));
    aot_gpr[2] = (aot_gpr[20] + aot_gpr[29]);
    aot_gpr[30] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08A31DD8;
L_08A31DD8:
    aot_gpr[3] = (2215u << 16u);
    goto L_08A31DDC;
L_08A31DDC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20920)));
    aot_gpr[31] = (0x08A31DE8u);
    aot_gpr[4] = (aot_gpr[30] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 76u, 0x08A32794u>(ctx, &aot_mem) && ctx.pc == 0x08A31DE8u) goto L_08A31DE8;
    return;
L_08A31DE8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) < 0;
    aot_fpr[2] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_08A31EBC;
      }
      goto L_08A31DF0;
    }
L_08A31DF0:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[20] = (aot_gpr[16] << 2u);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    aot_fpr[3] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20900)));
    aot_gpr[3] = (aot_gpr[9] + aot_gpr[20]);
    aot_gpr[2] = (aot_gpr[29] + aot_gpr[20]);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A31E10;
L_08A31E10:
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-4));
    aot_fpr[0] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[1])));
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[4];
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A31E10;
      }
      goto L_08A31E34;
    }
L_08A31E34:
    aot_gpr[7] = (0u + 0u);
    goto L_08A31E50;
L_08A31E3C:
    aot_gpr[2] = (aot_gpr[7] << 2u);
    goto L_08A31E40;
L_08A31E40:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(160), __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
      if (branch_taken) {
          goto L_08A31EBC;
      }
      goto L_08A31E50;
    }
L_08A31E50:
    aot_gpr[2] = (aot_gpr[16] - aot_gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    aot_fpr[2] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_08A31E3C;
      }
      goto L_08A31E5C;
    }
L_08A31E5C:
    if (static_cast<std::int32_t>(aot_gpr[7]) < 0) {
    aot_gpr[2] = (aot_gpr[7] << 2u);
        goto L_08A31E40;
    }
    goto L_08A31E64;
L_08A31E64:
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[9] + aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(6828));
    aot_gpr[4] = (0u + 0u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_08A31E7C;
L_08A31E7C:
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_fpr[2] = aot_fpr[2] + aot_fpr[0];
      if (branch_taken) {
          goto L_08A31E3C;
      }
      goto L_08A31EA0;
    }
L_08A31EA0:
    if (aot_gpr[6] == 0u) {
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
        goto L_08A31E7C;
    }
    goto L_08A31EA8;
L_08A31EA8:
    aot_gpr[2] = (aot_gpr[7] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(160), __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
      if (branch_taken) {
          goto L_08A31E50;
      }
      goto L_08A31EBC;
    }
L_08A31EBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(328)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(328)));
        (void)rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 5u, 0x08A3202Cu>(ctx, &aot_mem); return;
    }
    goto L_08A31ECC;
L_08A31ECC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 18u, 0x08A3217Cu>(ctx, &aot_mem); return;
      }
      goto L_08A31ED4;
    }
L_08A31ED4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) < 0;
    aot_fpr[1] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_08A31F04;
      }
      goto L_08A31EDC;
    }
L_08A31EDC:
    aot_gpr[3] = (aot_gpr[16] << 2u);
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (0u + 0u);
    goto L_08A31EF0;
L_08A31EF0:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[3];
    aot_fpr[1] = aot_fpr[1] + aot_fpr[0];
      if (branch_taken) {
          goto L_08A31EF0;
      }
      goto L_08A31F04;
    }
L_08A31F04:
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_fpr[2] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
      if (branch_taken) {
          goto L_08A31F10;
      }
      goto L_08A31F0C;
    }
L_08A31F0C:
    aot_fpr[2] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[1]) ^ 0x80000000u);
    goto L_08A31F10;
L_08A31F10:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    aot_fpr[1] = aot_fpr[0] - aot_fpr[1];
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) <= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
      if (branch_taken) {
          goto L_08A31F44;
      }
      goto L_08A31F24;
    }
L_08A31F24:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[29] + static_cast<std::uint32_t>(164));
    goto L_08A31F2C;
L_08A31F2C:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    aot_fpr[1] = aot_fpr[1] + aot_fpr[0];
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A31F2C;
      }
      goto L_08A31F44;
    }
L_08A31F44:
    if (aot_gpr[22] != 0u) {
    aot_fpr[1] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[1]) ^ 0x80000000u);
        goto L_08A31F4C;
    }
    goto L_08A31F4C;
L_08A31F4C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    goto L_08A31F54;
L_08A31F54:
    aot_gpr[2] = (aot_gpr[21] & 7u);
    goto L_08A31F58;
L_08A31F58:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(372)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(368)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(364)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(360)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(356)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(352)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(348)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(340)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(336)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(384)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A31F8C:
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A31FD8;
      }
      goto L_08A31F94;
    }
L_08A31F94:
    aot_gpr[2] = (aot_gpr[20] + aot_gpr[29]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-4)));
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[3]) >> 8u));
    goto L_08A31BC0;
L_08A31FA4:
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[29]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] & 127u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08A31C38;
L_08A31FC0:
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[29]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] & 63u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08A31C38;
L_08A31FD8:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20916)));
    ctx.set_fpu_condition((aot_fpr[0] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[22] = (0u + 0u);
      if (branch_taken) {
          goto L_08A31C44;
      }
      goto L_08A31FEC;
    }
L_08A31FEC:
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(2));
    goto L_08A31BC8;
L_08A31FF4:
    aot_gpr[2] = (aot_gpr[8] + aot_gpr[29]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-16));
    ctx.pc = 0x08A32000u; return;
}

void recomp_unit_0557(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0557_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_557(Runtime &runtime) {
    runtime.register_generated_unit(557u, 0x08A31000u, 4096u, &recomp_unit_0557, &recomp_unit_0557_entry);
    runtime.register_function(0x08A31000u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A310ACu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A310BCu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A310C4u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A310F8u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31108u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31110u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31114u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31118u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31128u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31184u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31260u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31268u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31270u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31278u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31294u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31298u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A312A8u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A312B4u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A312BCu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A312C8u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A312D8u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A312E0u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A312F4u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A312F8u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31308u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31384u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A313B8u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A313C4u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A313E0u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A313F4u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31404u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31414u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31428u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31430u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A3144Cu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31488u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31490u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A314D8u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A314DCu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A314F8u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31540u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31570u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31584u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A3159Cu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A315B8u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A315DCu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A315FCu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31618u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A3162Cu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31630u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31648u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31660u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31668u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31688u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A316B8u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A316DCu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A316E4u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31714u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31734u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A3173Cu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31744u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A3174Cu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31754u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31764u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31798u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A317A8u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A317B4u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A317C0u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A317C8u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A317E0u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A317E8u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31808u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31818u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31820u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31830u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A3183Cu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A3184Cu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31870u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31880u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A318ECu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A318FCu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31934u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31960u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31994u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A3199Cu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31A24u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31A3Cu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31A50u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31A60u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31A68u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31A7Cu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31A88u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31A90u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31AA8u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31ACCu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31AE0u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31AE8u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31AF4u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31B14u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31B48u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31B50u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31B64u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31B88u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31BC0u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31BC8u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31BD4u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31BE8u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31BF0u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31BF8u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31C04u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31C0Cu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31C20u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31C28u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31C30u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31C38u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31C44u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31C48u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31C58u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31C5Cu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31C68u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31C78u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31C90u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31C98u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31CA8u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31CB0u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31CC0u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31CD4u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31D04u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31D18u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31D28u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31D4Cu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31D6Cu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31D74u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31D80u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31D88u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31DA0u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31DA4u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31DACu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31DC8u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31DD8u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31DDCu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31DE8u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31DF0u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31E10u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31E34u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31E3Cu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31E40u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31E50u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31E5Cu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31E64u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31E7Cu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31EA0u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31EA8u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31EBCu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31ECCu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31ED4u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31EDCu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31EF0u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31F04u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31F0Cu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31F10u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31F24u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31F2Cu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31F44u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31F4Cu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31F54u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31F58u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31F8Cu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31F94u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31FA4u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31FC0u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31FD8u, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31FECu, &recomp_unit_0557, "recomp_unit_0557");
    runtime.register_function(0x08A31FF4u, &recomp_unit_0557, "recomp_unit_0557");
}
} // namespace psprecomp
