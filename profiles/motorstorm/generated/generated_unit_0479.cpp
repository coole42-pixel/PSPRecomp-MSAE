#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0479[1021] = {
    1, 0, 2, 0, 3, 0, 0, 0, 0, 0, 4, 0, 5, 0, 6, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 9, 10, 0, 0, 11, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0,
    0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 26, 0, 0, 27, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0,
    0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 38,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 48, 0, 49,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 54,
    0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 62, 0,
    0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 65, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 70, 0,
    0, 0, 71, 72, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0, 0, 79,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 83, 0, 0, 84, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0,
    88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0,
    95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 98, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0,
    0, 0, 111, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0,
    0, 0, 0, 117, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 123, 0,
    0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 129, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0,
    132, 0, 0, 133, 0, 134, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 137, 138, 0, 139, 140, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 145, 146, 0, 147, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 153, 0,
    0, 154, 0, 155, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 169, 0, 170, 0, 0,
    0, 171, 0, 172, 0, 0, 173, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176,
    0, 177, 0, 178, 0, 179, 0, 180, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0,
    0, 187, 0, 0, 0, 0, 188, 189, 0, 190, 0, 191, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0,
    0, 0, 196, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 201, 0, 202, 0, 0, 203, 0, 0, 0,
    204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209,
};
void recomp_unit_0479_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089E3004u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0479[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089E3004;
    case 2u: goto L_089E300C;
    case 3u: goto L_089E3014;
    case 4u: goto L_089E302C;
    case 5u: goto L_089E3034;
    case 6u: goto L_089E303C;
    case 7u: goto L_089E3044;
    case 8u: goto L_089E305C;
    case 9u: goto L_089E3098;
    case 10u: goto L_089E309C;
    case 11u: goto L_089E30A8;
    case 12u: goto L_089E30B0;
    case 13u: goto L_089E30B8;
    case 14u: goto L_089E30D8;
    case 15u: goto L_089E30E0;
    case 16u: goto L_089E30EC;
    case 17u: goto L_089E3118;
    case 18u: goto L_089E3134;
    case 19u: goto L_089E313C;
    case 20u: goto L_089E3144;
    case 21u: goto L_089E316C;
    case 22u: goto L_089E3190;
    case 23u: goto L_089E31A4;
    case 24u: goto L_089E31D4;
    case 25u: goto L_089E31DC;
    case 26u: goto L_089E31E4;
    case 27u: goto L_089E31F0;
    case 28u: goto L_089E321C;
    case 29u: goto L_089E3224;
    case 30u: goto L_089E3240;
    case 31u: goto L_089E3248;
    case 32u: goto L_089E327C;
    case 33u: goto L_089E3288;
    case 34u: goto L_089E3298;
    case 35u: goto L_089E32D4;
    case 36u: goto L_089E32F0;
    case 37u: goto L_089E32F8;
    case 38u: goto L_089E3300;
    case 39u: goto L_089E3330;
    case 40u: goto L_089E335C;
    case 41u: goto L_089E3364;
    case 42u: goto L_089E3390;
    case 43u: goto L_089E3398;
    case 44u: goto L_089E33B8;
    case 45u: goto L_089E33C0;
    case 46u: goto L_089E33D8;
    case 47u: goto L_089E33E0;
    case 48u: goto L_089E33F8;
    case 49u: goto L_089E3400;
    case 50u: goto L_089E342C;
    case 51u: goto L_089E3434;
    case 52u: goto L_089E3460;
    case 53u: goto L_089E3468;
    case 54u: goto L_089E3480;
    case 55u: goto L_089E3488;
    case 56u: goto L_089E34A4;
    case 57u: goto L_089E34AC;
    case 58u: goto L_089E34BC;
    case 59u: goto L_089E34CC;
    case 60u: goto L_089E34E4;
    case 61u: goto L_089E34EC;
    case 62u: goto L_089E34FC;
    case 63u: goto L_089E3510;
    case 64u: goto L_089E3528;
    case 65u: goto L_089E3530;
    case 66u: goto L_089E3538;
    case 67u: goto L_089E3548;
    case 68u: goto L_089E3560;
    case 69u: goto L_089E3570;
    case 70u: goto L_089E357C;
    case 71u: goto L_089E358C;
    case 72u: goto L_089E3590;
    case 73u: goto L_089E35A0;
    case 74u: goto L_089E35AC;
    case 75u: goto L_089E35C0;
    case 76u: goto L_089E35E4;
    case 77u: goto L_089E35EC;
    case 78u: goto L_089E35F4;
    case 79u: goto L_089E3600;
    case 80u: goto L_089E3614;
    case 81u: goto L_089E362C;
    case 82u: goto L_089E3638;
    case 83u: goto L_089E3640;
    case 84u: goto L_089E364C;
    case 85u: goto L_089E3650;
    case 86u: goto L_089E365C;
    case 87u: goto L_089E3678;
    case 88u: goto L_089E3684;
    case 89u: goto L_089E368C;
    case 90u: goto L_089E36AC;
    case 91u: goto L_089E36B4;
    case 92u: goto L_089E36D4;
    case 93u: goto L_089E36DC;
    case 94u: goto L_089E36FC;
    case 95u: goto L_089E3704;
    case 96u: goto L_089E3714;
    case 97u: goto L_089E3740;
    case 98u: goto L_089E3744;
    case 99u: goto L_089E3748;
    case 100u: goto L_089E376C;
    case 101u: goto L_089E3774;
    case 102u: goto L_089E378C;
    case 103u: goto L_089E37C8;
    case 104u: goto L_089E3804;
    case 105u: goto L_089E380C;
    case 106u: goto L_089E3828;
    case 107u: goto L_089E383C;
    case 108u: goto L_089E3844;
    case 109u: goto L_089E3860;
    case 110u: goto L_089E386C;
    case 111u: goto L_089E388C;
    case 112u: goto L_089E3894;
    case 113u: goto L_089E38A4;
    case 114u: goto L_089E38B8;
    case 115u: goto L_089E38F4;
    case 116u: goto L_089E38FC;
    case 117u: goto L_089E3910;
    case 118u: goto L_089E3918;
    case 119u: goto L_089E3920;
    case 120u: goto L_089E3940;
    case 121u: goto L_089E395C;
    case 122u: goto L_089E3970;
    case 123u: goto L_089E397C;
    case 124u: goto L_089E3988;
    case 125u: goto L_089E3998;
    case 126u: goto L_089E39B0;
    case 127u: goto L_089E39BC;
    case 128u: goto L_089E39C8;
    case 129u: goto L_089E39D0;
    case 130u: goto L_089E39DC;
    case 131u: goto L_089E39F0;
    case 132u: goto L_089E3A04;
    case 133u: goto L_089E3A10;
    case 134u: goto L_089E3A18;
    case 135u: goto L_089E3A24;
    case 136u: goto L_089E3A2C;
    case 137u: goto L_089E3A94;
    case 138u: goto L_089E3A98;
    case 139u: goto L_089E3AA0;
    case 140u: goto L_089E3AA4;
    case 141u: goto L_089E3AAC;
    case 142u: goto L_089E3AB8;
    case 143u: goto L_089E3AD4;
    case 144u: goto L_089E3AE4;
    case 145u: goto L_089E3AEC;
    case 146u: goto L_089E3AF0;
    case 147u: goto L_089E3AF8;
    case 148u: goto L_089E3B2C;
    case 149u: goto L_089E3B38;
    case 150u: goto L_089E3B58;
    case 151u: goto L_089E3B68;
    case 152u: goto L_089E3B78;
    case 153u: goto L_089E3B7C;
    case 154u: goto L_089E3B88;
    case 155u: goto L_089E3B90;
    case 156u: goto L_089E3B98;
    case 157u: goto L_089E3BA0;
    case 158u: goto L_089E3BBC;
    case 159u: goto L_089E3BC4;
    case 160u: goto L_089E3BCC;
    case 161u: goto L_089E3BD8;
    case 162u: goto L_089E3BF0;
    case 163u: goto L_089E3C14;
    case 164u: goto L_089E3C24;
    case 165u: goto L_089E3C30;
    case 166u: goto L_089E3C3C;
    case 167u: goto L_089E3C5C;
    case 168u: goto L_089E3C64;
    case 169u: goto L_089E3C70;
    case 170u: goto L_089E3C78;
    case 171u: goto L_089E3C88;
    case 172u: goto L_089E3C90;
    case 173u: goto L_089E3C9C;
    case 174u: goto L_089E3CA4;
    case 175u: goto L_089E3CB0;
    case 176u: goto L_089E3D00;
    case 177u: goto L_089E3D08;
    case 178u: goto L_089E3D10;
    case 179u: goto L_089E3D18;
    case 180u: goto L_089E3D20;
    case 181u: goto L_089E3D24;
    case 182u: goto L_089E3D60;
    case 183u: goto L_089E3D68;
    case 184u: goto L_089E3DB0;
    case 185u: goto L_089E3DF4;
    case 186u: goto L_089E3DFC;
    case 187u: goto L_089E3E08;
    case 188u: goto L_089E3E1C;
    case 189u: goto L_089E3E20;
    case 190u: goto L_089E3E28;
    case 191u: goto L_089E3E30;
    case 192u: goto L_089E3E38;
    case 193u: goto L_089E3E44;
    case 194u: goto L_089E3E74;
    case 195u: goto L_089E3E7C;
    case 196u: goto L_089E3E8C;
    case 197u: goto L_089E3E94;
    case 198u: goto L_089E3EA8;
    case 199u: goto L_089E3EC4;
    case 200u: goto L_089E3ECC;
    case 201u: goto L_089E3EE0;
    case 202u: goto L_089E3EE8;
    case 203u: goto L_089E3EF4;
    case 204u: goto L_089E3F04;
    case 205u: goto L_089E3F18;
    case 206u: goto L_089E3F4C;
    case 207u: goto L_089E3F80;
    case 208u: goto L_089E3FC8;
    case 209u: goto L_089E3FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089E3004:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0478_entry, 478u, 162u, 0x089E2A6Cu>(ctx, &aot_mem); return;
      }
      goto L_089E300C;
    }
L_089E300C:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0478_entry, 478u, 10u, 0x089E2094u>(ctx, &aot_mem); return;
L_089E3014:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(13));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089E302Cu);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 202u, 0x089DAC44u>(ctx, &aot_mem) && ctx.pc == 0x089E302Cu) goto L_089E302C;
    return;
L_089E302C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0478_entry, 478u, 9u, 0x089E2090u>(ctx, &aot_mem); return;
      }
      goto L_089E3034;
    }
L_089E3034:
    aot_gpr[17] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0478_entry, 478u, 17u, 0x089E211Cu>(ctx, &aot_mem); return;
L_089E303C:
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[17] = (0u | 54005u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0478_entry, 478u, 180u, 0x089E2B44u>(ctx, &aot_mem); return;
      }
      goto L_089E3044;
    }
L_089E3044:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(120));
    aot_gpr[7] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (aot_gpr[6] & 3u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_089E31F0;
      }
      goto L_089E305C;
    }
L_089E305C:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089E305C;
      }
      goto L_089E3098;
    }
L_089E3098:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_089E309C;
L_089E309C:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089E30A8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089E30A8u) goto L_089E30A8;
    return;
L_089E30A8:
    aot_gpr[31] = (0x089E30B0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 224u, 0x089DFD80u>(ctx, &aot_mem) && ctx.pc == 0x089E30B0u) goto L_089E30B0;
    return;
L_089E30B0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (0u + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0478_entry, 478u, 175u, 0x089E2B18u>(ctx, &aot_mem); return;
      }
      goto L_089E30B8;
    }
L_089E30B8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(204)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(208)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[16] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E30D8u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(64));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E30D8u) goto L_089E30D8;
    return;
L_089E30D8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (0u + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0478_entry, 478u, 175u, 0x089E2B18u>(ctx, &aot_mem); return;
      }
      goto L_089E30E0;
    }
L_089E30E0:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(184));
    aot_gpr[7] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    goto L_089E30EC;
L_089E30EC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[17];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089E30EC;
      }
      goto L_089E3118;
    }
L_089E3118:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(140)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(144)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(212)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E3134u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E3134u) goto L_089E3134;
    return;
L_089E3134:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0478_entry, 478u, 199u, 0x089E2C20u>(ctx, &aot_mem); return;
L_089E313C:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(14476)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0478_entry, 478u, 240u, 0x089E2F30u>(ctx, &aot_mem); return;
      }
      goto L_089E3144;
    }
L_089E3144:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(120));
    aot_gpr[18] = (aot_gpr[19] + static_cast<std::uint32_t>(185));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[17] = (aot_gpr[19] + static_cast<std::uint32_t>(169));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[19] + static_cast<std::uint32_t>(152));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089E316Cu);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E316Cu) goto L_089E316C;
    return;
L_089E316C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1024));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(212), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1024));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(140)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E3190u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(144)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E3190u) goto L_089E3190;
    return;
L_089E3190:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(28));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(156)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[17] + static_cast<std::uint32_t>(3), aot_gpr[2]));
        goto L_089E3300;
    }
    goto L_089E31A4;
L_089E31A4:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[18] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[18] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[18] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[18] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    goto L_089E31D4;
L_089E31D4:
    aot_gpr[31] = (0x089E31DCu);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 224u, 0x089DFD80u>(ctx, &aot_mem) && ctx.pc == 0x089E31DCu) goto L_089E31DC;
    return;
L_089E31DC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(14476)));
      if (branch_taken) {
          goto L_089E3224;
      }
      goto L_089E31E4;
    }
L_089E31E4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0478_entry, 478u, 162u, 0x089E2A6Cu>(ctx, &aot_mem); return;
L_089E31F0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089E31F0;
      }
      goto L_089E321C;
    }
L_089E321C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_089E309C;
L_089E3224:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(204)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(208)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (aot_gpr[16] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E3240u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E3240u) goto L_089E3240;
    return;
L_089E3240:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E31E4;
      }
      goto L_089E3248;
    }
L_089E3248:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u | 53248u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[8] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(404), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(408), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(344), aot_gpr[2]);
    aot_gpr[31] = (0x089E327Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(340), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 237u, 0x089DFE88u>(ctx, &aot_mem) && ctx.pc == 0x089E327Cu) goto L_089E327C;
    return;
L_089E327C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E3288u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 112u, 0x089DF600u>(ctx, &aot_mem) && ctx.pc == 0x089E3288u) goto L_089E3288;
    return;
L_089E3288:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(408)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089E32D4;
      }
      goto L_089E3298;
    }
L_089E3298:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(340), aot_gpr[17]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(408)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(344), aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(408)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(404)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(408), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(404), aot_gpr[2]);
    goto L_089E32D4;
L_089E32D4:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(28));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(340));
    aot_gpr[7] = (0u | 34816u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[31] = (0x089E32F0u);
    aot_gpr[10] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0471_entry, 471u, 178u, 0x089DB964u>(ctx, &aot_mem) && ctx.pc == 0x089E32F0u) goto L_089E32F0;
    return;
L_089E32F0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0478_entry, 478u, 162u, 0x089E2A6Cu>(ctx, &aot_mem); return;
      }
      goto L_089E32F8;
    }
L_089E32F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(118)));
    (void)rt.invoke_chained_direct<&recomp_unit_0478_entry, 478u, 135u, 0x089E28A8u>(ctx, &aot_mem); return;
L_089E3300:
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[17] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[17] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[17] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    goto L_089E31D4;
L_089E3330:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089E3330;
      }
      goto L_089E335C;
    }
L_089E335C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    (void)rt.invoke_chained_direct<&recomp_unit_0478_entry, 478u, 50u, 0x089E2328u>(ctx, &aot_mem); return;
L_089E3364:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089E3364;
      }
      goto L_089E3390;
    }
L_089E3390:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    (void)rt.invoke_chained_direct<&recomp_unit_0478_entry, 478u, 75u, 0x089E24ECu>(ctx, &aot_mem); return;
L_089E3398:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(204)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(208)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[17] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(64));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E33B8u);
    aot_gpr[16] = (2217u << 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E33B8u) goto L_089E33B8;
    return;
L_089E33B8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0478_entry, 478u, 79u, 0x089E250Cu>(ctx, &aot_mem); return;
      }
      goto L_089E33C0;
    }
L_089E33C0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(140)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(144)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E33D8u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E33D8u) goto L_089E33D8;
    return;
L_089E33D8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(14476)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0478_entry, 478u, 198u, 0x089E2C1Cu>(ctx, &aot_mem); return;
      }
      goto L_089E33E0;
    }
L_089E33E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(140)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(144)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(212)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E33F8u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E33F8u) goto L_089E33F8;
    return;
L_089E33F8:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0478_entry, 478u, 199u, 0x089E2C20u>(ctx, &aot_mem); return;
L_089E3400:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089E3400;
      }
      goto L_089E342C;
    }
L_089E342C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    (void)rt.invoke_chained_direct<&recomp_unit_0478_entry, 478u, 100u, 0x089E267Cu>(ctx, &aot_mem); return;
L_089E3434:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089E3434;
      }
      goto L_089E3460;
    }
L_089E3460:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    (void)rt.invoke_chained_direct<&recomp_unit_0478_entry, 478u, 147u, 0x089E2990u>(ctx, &aot_mem); return;
L_089E3468:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(140)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(144)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(76)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E3480u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E3480u) goto L_089E3480;
    return;
L_089E3480:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0478_entry, 478u, 151u, 0x089E29E4u>(ctx, &aot_mem); return;
L_089E3488:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[9] = (aot_gpr[6] + 0u);
    aot_gpr[10] = (aot_gpr[7] + 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E34EC;
      }
      goto L_089E34A4;
    }
L_089E34A4:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E34FC;
      }
      goto L_089E34AC;
    }
L_089E34AC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[11] = (2217u << 16u);
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089E34FC;
      }
      goto L_089E34BC;
    }
L_089E34BC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(14476)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (aot_gpr[9] + 0u);
      if (branch_taken) {
          goto L_089E34EC;
      }
      goto L_089E34CC;
    }
L_089E34CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(212), aot_gpr[10]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(14476)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(144)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E34E4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(140)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E34E4u) goto L_089E34E4;
    return;
L_089E34E4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u | 50500u);
      if (branch_taken) {
          goto L_089E34FC;
      }
      goto L_089E34EC;
    }
L_089E34EC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E34FC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3510:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[8] = (aot_gpr[5] + 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[6] + 0u);
      if (branch_taken) {
          goto L_089E358C;
      }
      goto L_089E3528;
    }
L_089E3528:
    if (aot_gpr[6] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_089E3590;
    }
    goto L_089E3530;
L_089E3530:
    if (aot_gpr[7] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_089E3590;
    }
    goto L_089E3538;
L_089E3538:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089E35A0;
      }
      goto L_089E3548;
    }
L_089E3548:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(212)));
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089E357C;
      }
      goto L_089E3560;
    }
L_089E3560:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(140)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E3570u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(144)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E3570u) goto L_089E3570;
    return;
L_089E3570:
    aot_gpr[3] = (0u | 50500u);
    aot_gpr[4] = (0u + 0u);
    if (aot_gpr[2] != 0u) aot_gpr[4] = (aot_gpr[3]);
    goto L_089E357C;
L_089E357C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E358C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089E3590;
L_089E3590:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E35A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x089E35ACu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089E35ACu) goto L_089E35AC;
    return;
L_089E35AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E35C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
      if (branch_taken) {
          goto L_089E36D4;
      }
      goto L_089E35E4;
    }
L_089E35E4:
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
        goto L_089E365C;
    }
    goto L_089E35EC;
L_089E35EC:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_089E36D4;
      }
      goto L_089E35F4;
    }
L_089E35F4:
    aot_gpr[4] = (aot_gpr[5] + 0u);
    aot_gpr[31] = (0x089E3600u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089E3600u) goto L_089E3600;
    return;
L_089E3600:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089E365C;
      }
      goto L_089E3614;
    }
L_089E3614:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1024));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(2788)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(14476)));
      if (branch_taken) {
          goto L_089E364C;
      }
      goto L_089E362C;
    }
L_089E362C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(152)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E3638u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E3638u) goto L_089E3638;
    return;
L_089E3638:
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_089E3650;
    }
    goto L_089E3640;
L_089E3640:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] | 512u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089E364C;
L_089E364C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089E3650;
L_089E3650:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089E3678;
      }
      goto L_089E365C;
    }
L_089E365C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3678:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089E36AC;
      }
      goto L_089E3684;
    }
L_089E3684:
    aot_gpr[31] = (0x089E368Cu);
    aot_gpr[4] = (16384u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 141u, 0x0898F8CCu>(ctx, &aot_mem) && ctx.pc == 0x089E368Cu) goto L_089E368C;
    return;
L_089E368C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E36AC:
    aot_gpr[31] = (0x089E36B4u);
    aot_gpr[4] = (49152u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 141u, 0x0898F8CCu>(ctx, &aot_mem) && ctx.pc == 0x089E36B4u) goto L_089E36B4;
    return;
L_089E36B4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E36D4:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
    goto L_089E365C;
L_089E36DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2788)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[17] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089E380C;
      }
      goto L_089E36FC;
    }
L_089E36FC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (aot_gpr[5] & 3u);
      if (branch_taken) {
          goto L_089E3828;
      }
      goto L_089E3704;
    }
L_089E3704:
    aot_gpr[6] = (aot_gpr[5] + 0u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[8] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_089E378C;
      }
      goto L_089E3714;
    }
L_089E3714:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089E3714;
      }
      goto L_089E3740;
    }
L_089E3740:
    aot_gpr[16] = (2217u << 16u);
    goto L_089E3744;
L_089E3744:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(14476)));
    goto L_089E3748;
L_089E3748:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(140)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = ((aot_gpr[4] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    aot_gpr[3] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[3]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1024));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E376Cu);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E376Cu) goto L_089E376C;
    return;
L_089E376C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089E380C;
      }
      goto L_089E3774;
    }
L_089E3774:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E378C:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089E3740;
      }
      goto L_089E37C8;
    }
L_089E37C8:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089E378C;
      }
      goto L_089E3804;
    }
L_089E3804:
    aot_gpr[16] = (2217u << 16u);
    goto L_089E3744;
L_089E380C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3828:
    aot_gpr[16] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(14476)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(92)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E383Cu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E383Cu) goto L_089E383C;
    return;
L_089E383C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(14476)));
    goto L_089E3748;
L_089E3844:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[7] = (aot_gpr[4] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2788)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089E38A4;
      }
      goto L_089E3860;
    }
L_089E3860:
    aot_gpr[6] = (aot_gpr[5] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089E38A4;
      }
      goto L_089E386C;
    }
L_089E386C:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(140)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[3] = ((aot_gpr[3] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    aot_gpr[4] = (16384u << 16u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E388Cu);
    aot_gpr[4] = (aot_gpr[3] | aot_gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E388Cu) goto L_089E388C;
    return;
L_089E388C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089E38A4;
      }
      goto L_089E3894;
    }
L_089E3894:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E38A4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E38B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (2217u << 16u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(456));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[19] + static_cast<std::uint32_t>(22956));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (0u + 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
      if (branch_taken) {
          goto L_089E3920;
      }
      goto L_089E38F4;
    }
L_089E38F4:
    aot_gpr[31] = (0x089E38FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089E38FCu) goto L_089E38FC;
    return;
L_089E38FC:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E3910u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0474_entry, 474u, 269u, 0x089DEDE0u>(ctx, &aot_mem) && ctx.pc == 0x089E3910u) goto L_089E3910;
    return;
L_089E3910:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E3920;
      }
      goto L_089E3918;
    }
L_089E3918:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(22956)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089E3920;
L_089E3920:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3940:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(22956)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089E395Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0471_entry, 471u, 221u, 0x089DBCD0u>(ctx, &aot_mem) && ctx.pc == 0x089E395Cu) goto L_089E395C;
    return;
L_089E395C:
    aot_gpr[17] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(22956));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089E3970u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(456));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089E3970u) goto L_089E3970;
    return;
L_089E3970:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (49152u << 16u);
      if (branch_taken) {
          goto L_089E3998;
      }
      goto L_089E397C;
    }
L_089E397C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(108)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E3988u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E3988u) goto L_089E3988;
    return;
L_089E3988:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(14476)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(108)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E3998u);
    aot_gpr[4] = (16384u << 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E3998u) goto L_089E3998;
    return;
L_089E3998:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E39B0:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[12] == 0u;
    aot_gpr[13] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089E3AA0;
      }
      goto L_089E39BC;
    }
L_089E39BC:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[11] == 0u) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
        goto L_089E3AA4;
    }
    goto L_089E39C8;
L_089E39C8:
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
        goto L_089E3AA4;
    }
    goto L_089E39D0;
L_089E39D0:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[10] = (2217u << 16u);
      if (branch_taken) {
          goto L_089E3AA0;
      }
      goto L_089E39DC;
    }
L_089E39DC:
    aot_gpr[3] = (aot_gpr[10] + static_cast<std::uint32_t>(22956));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(452)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[14] = (2217u << 16u);
      if (branch_taken) {
          goto L_089E3A94;
      }
      goto L_089E39F0;
    }
L_089E39F0:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (0u + 0u);
    aot_gpr[6] = (aot_gpr[14] + static_cast<std::uint32_t>(22960));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_089E3A04;
L_089E3A04:
    aot_gpr[5] = (aot_gpr[3] ^ aot_gpr[8]);
    { const bool branch_taken = aot_gpr[9] == aot_gpr[2];
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089E3A94;
      }
      goto L_089E3A10;
    }
L_089E3A10:
    if (aot_gpr[2] == 0u) {
    if (aot_gpr[5] == 0u) aot_gpr[3] = (aot_gpr[7]);
        goto L_089E3A18;
    }
    goto L_089E3A18;
L_089E3A18:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    if (aot_gpr[7] != aot_gpr[8]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_089E3A04;
    }
    goto L_089E3A24;
L_089E3A24:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[7];
    aot_gpr[5] = (0u | 54017u);
      if (branch_taken) {
          goto L_089E3A98;
      }
      goto L_089E3A2C;
    }
L_089E3A2C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[4] = (aot_gpr[14] + static_cast<std::uint32_t>(22960));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[10] + static_cast<std::uint32_t>(22956));
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(22956)));
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(452)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(452), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3A94:
    aot_gpr[5] = (0u | 54017u);
    goto L_089E3A98;
L_089E3A98:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3AA0:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    goto L_089E3AA4;
L_089E3AA4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3AAC:
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
        goto L_089E3AF0;
    }
    goto L_089E3AB8;
L_089E3AB8:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(22960));
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(22956));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[6] + 0u);
    goto L_089E3AD4;
L_089E3AD4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089E3AF8;
      }
      goto L_089E3AE4;
    }
L_089E3AE4:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[8];
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089E3AD4;
      }
      goto L_089E3AEC;
    }
L_089E3AEC:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
    goto L_089E3AF0;
L_089E3AF0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3AF8:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[4] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(452)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(452), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3B2C:
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E3BBC;
      }
      goto L_089E3B38;
    }
L_089E3B38:
    aot_gpr[12] = (2217u << 16u);
    aot_gpr[8] = (aot_gpr[12] + static_cast<std::uint32_t>(22960));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (0u + 0u);
    aot_gpr[11] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[10] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_089E3B88;
L_089E3B58:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[6] & 65535u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089E3BC4;
      }
      goto L_089E3B68;
    }
L_089E3B68:
    aot_gpr[2] = (aot_gpr[6] & 65535u);
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089E3B7C;
      }
      goto L_089E3B78;
    }
L_089E3B78:
    if (aot_gpr[9] == 0u) aot_gpr[3] = (aot_gpr[7]);
    goto L_089E3B7C;
L_089E3B7C:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[11];
    // nop
      if (branch_taken) {
          goto L_089E3B98;
      }
      goto L_089E3B88;
    }
L_089E3B88:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[9] = (aot_gpr[3] ^ aot_gpr[11]);
      if (branch_taken) {
          goto L_089E3B58;
      }
      goto L_089E3B90;
    }
L_089E3B90:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    goto L_089E3B68;
L_089E3B98:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[7];
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089E3BBC;
      }
      goto L_089E3BA0;
    }
L_089E3BA0:
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[12] + static_cast<std::uint32_t>(22960));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (0u + 0u);
    goto L_089E3BBC;
L_089E3BBC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3BC4:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3BCC:
    aot_gpr[9] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E3C5C;
      }
      goto L_089E3BD8;
    }
L_089E3BD8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[10] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(-19168)));
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089E3C5C;
      }
      goto L_089E3BF0;
    }
L_089E3BF0:
    aot_gpr[8] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (aot_gpr[6] << 5u);
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(22956));
    aot_gpr[2] = (aot_gpr[7] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[3] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089E3C3C;
      }
      goto L_089E3C14;
    }
L_089E3C14:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    if (aot_gpr[6] == aot_gpr[2]) {
    aot_gpr[3] = (0u + 0u);
        goto L_089E3C64;
    }
    goto L_089E3C24;
L_089E3C24:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089E3C14;
      }
      goto L_089E3C30;
    }
L_089E3C30:
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(-19168), aot_gpr[6]);
    aot_gpr[8] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (aot_gpr[6] << 5u);
    goto L_089E3C3C;
L_089E3C3C:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(22960));
    aot_gpr[2] = (aot_gpr[7] - aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(-19168), aot_gpr[4]);
    goto L_089E3C5C;
L_089E3C5C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3C64:
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(-19168), aot_gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3C70:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3C88;
      }
      goto L_089E3C78;
    }
L_089E3C78:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(-19168), 0u);
    goto L_089E3BCC;
L_089E3C88:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3C90:
    aot_gpr[10] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[11] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089E3D60;
      }
      goto L_089E3C9C;
    }
L_089E3C9C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[15] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089E3D68;
      }
      goto L_089E3CA4;
    }
L_089E3CA4:
    aot_gpr[9] = (0u + 0u);
    aot_gpr[24] = (2215u << 16u);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    goto L_089E3CB0;
L_089E3CB0:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[24] + static_cast<std::uint32_t>(8161));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_gpr[13]))));
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_gpr[12]))));
    aot_gpr[7] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    aot_gpr[6] = (aot_gpr[6] & 1u);
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(32));
    aot_gpr[7] = (aot_gpr[4] + 0u);
    if (aot_gpr[5] != 0u) aot_gpr[4] = (aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[3] + 0u);
    if (aot_gpr[6] != 0u) aot_gpr[3] = (aot_gpr[2]);
    aot_gpr[14] = (aot_gpr[15] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[3];
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E3D24;
      }
      goto L_089E3D00;
    }
L_089E3D00:
    { const bool branch_taken = aot_gpr[15] == aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_089E3D60;
      }
      goto L_089E3D08;
    }
L_089E3D08:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E3D60;
      }
      goto L_089E3D10;
    }
L_089E3D10:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3D60;
      }
      goto L_089E3D18;
    }
L_089E3D18:
    { const bool branch_taken = aot_gpr[14] != aot_gpr[9];
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089E3CB0;
      }
      goto L_089E3D20;
    }
L_089E3D20:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    goto L_089E3D24;
L_089E3D24:
    aot_gpr[6] = (aot_gpr[13] & 255u);
    aot_gpr[5] = (aot_gpr[12] & 255u);
    aot_gpr[2] = (aot_gpr[24] + static_cast<std::uint32_t>(8161));
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    aot_gpr[3] = (aot_gpr[3] & 1u);
    aot_gpr[4] = (aot_gpr[4] & 1u);
    if (aot_gpr[3] != 0u) aot_gpr[6] = (aot_gpr[8]);
    if (aot_gpr[4] != 0u) aot_gpr[5] = (aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] - aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3D60:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3D68:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_gpr[24] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[13] & 255u);
    aot_gpr[5] = (aot_gpr[12] & 255u);
    aot_gpr[2] = (aot_gpr[24] + static_cast<std::uint32_t>(8161));
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    aot_gpr[3] = (aot_gpr[3] & 1u);
    aot_gpr[4] = (aot_gpr[4] & 1u);
    if (aot_gpr[3] != 0u) aot_gpr[6] = (aot_gpr[8]);
    if (aot_gpr[4] != 0u) aot_gpr[5] = (aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] - aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3DB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089E3F4C;
      }
      goto L_089E3DF4;
    }
L_089E3DF4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E3F4C;
      }
      goto L_089E3DFC;
    }
L_089E3DFC:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089E3E08u);
    aot_gpr[17] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089E3E08u) goto L_089E3E08;
    return;
L_089E3E08:
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[19] = (0u + 0u);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(47));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[30] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E3E44;
      }
      goto L_089E3E1C;
    }
L_089E3E1C:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(-1))))));
    goto L_089E3E20;
L_089E3E20:
    if (aot_gpr[2] == aot_gpr[20]) {
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
        goto L_089E3E74;
    }
    goto L_089E3E28;
L_089E3E28:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089E3E30;
L_089E3E30:
    aot_gpr[31] = (0x089E3E38u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089E3E38u) goto L_089E3E38;
    return;
L_089E3E38:
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(-1))))));
        goto L_089E3E20;
    }
    goto L_089E3E44;
L_089E3E44:
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
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3E74:
    { const bool branch_taken = aot_gpr[19] == aot_gpr[30];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089E3EF4;
      }
      goto L_089E3E7C;
    }
L_089E3E7C:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(512));
    { const bool branch_taken = aot_gpr[19] != aot_gpr[2];
    aot_gpr[4] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089E3E28;
      }
      goto L_089E3E8C;
    }
L_089E3E8C:
    aot_gpr[31] = (0x089E3E94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E3E94u) goto L_089E3E94;
    return;
L_089E3E94:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(16064));
    aot_gpr[31] = (0x089E3EA8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 99u, 0x089926F4u>(ctx, &aot_mem) && ctx.pc == 0x089E3EA8u) goto L_089E3EA8;
    return;
L_089E3EA8:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-48));
    aot_gpr[3] = (aot_gpr[3] & 255u);
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[22] + 0u);
      if (branch_taken) {
          goto L_089E3F18;
      }
      goto L_089E3EC4;
    }
L_089E3EC4:
    aot_gpr[31] = (0x089E3ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 112u, 0x0898F738u>(ctx, &aot_mem) && ctx.pc == 0x089E3ECCu) goto L_089E3ECC;
    return;
L_089E3ECC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_089E3F04;
      }
      goto L_089E3EE0;
    }
L_089E3EE0:
    aot_gpr[31] = (0x089E3EE8u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 83u, 0x08A3646Cu>(ctx, &aot_mem) && ctx.pc == 0x089E3EE8u) goto L_089E3EE8;
    return;
L_089E3EE8:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089E3E30;
L_089E3EF4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089E3E30;
L_089E3F04:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(80));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089E3E30;
L_089E3F18:
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
    aot_gpr[2] = (0u | 55004u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3F4C:
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
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3F80:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(-12152));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[21]);
    aot_gpr[9] = (aot_gpr[4] + 0u);
    aot_gpr[21] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[31]);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_089E3FC8;
L_089E3FC8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089E3FC8;
      }
      goto L_089E3FF4;
    }
L_089E3FF4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x089E4000u; return;
}

void recomp_unit_0479(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0479_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_479(Runtime &runtime) {
    runtime.register_generated_unit(479u, 0x089E3000u, 4096u, &recomp_unit_0479, &recomp_unit_0479_entry);
    runtime.register_function(0x089E3004u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E300Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3014u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E302Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3034u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E303Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3044u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E305Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3098u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E309Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E30A8u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E30B0u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E30B8u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E30D8u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E30E0u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E30ECu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3118u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3134u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E313Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3144u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E316Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3190u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E31A4u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E31D4u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E31DCu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E31E4u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E31F0u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E321Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3224u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3240u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3248u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E327Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3288u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3298u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E32D4u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E32F0u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E32F8u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3300u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3330u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E335Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3364u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3390u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3398u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E33B8u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E33C0u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E33D8u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E33E0u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E33F8u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3400u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E342Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3434u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3460u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3468u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3480u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3488u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E34A4u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E34ACu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E34BCu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E34CCu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E34E4u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E34ECu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E34FCu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3510u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3528u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3530u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3538u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3548u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3560u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3570u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E357Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E358Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3590u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E35A0u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E35ACu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E35C0u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E35E4u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E35ECu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E35F4u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3600u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3614u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E362Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3638u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3640u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E364Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3650u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E365Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3678u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3684u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E368Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E36ACu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E36B4u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E36D4u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E36DCu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E36FCu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3704u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3714u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3740u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3744u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3748u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E376Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3774u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E378Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E37C8u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3804u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E380Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3828u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E383Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3844u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3860u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E386Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E388Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3894u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E38A4u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E38B8u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E38F4u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E38FCu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3910u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3918u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3920u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3940u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E395Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3970u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E397Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3988u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3998u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E39B0u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E39BCu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E39C8u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E39D0u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E39DCu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E39F0u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3A04u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3A10u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3A18u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3A24u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3A2Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3A94u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3A98u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3AA0u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3AA4u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3AACu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3AB8u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3AD4u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3AE4u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3AECu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3AF0u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3AF8u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3B2Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3B38u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3B58u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3B68u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3B78u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3B7Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3B88u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3B90u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3B98u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3BA0u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3BBCu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3BC4u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3BCCu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3BD8u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3BF0u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3C14u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3C24u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3C30u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3C3Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3C5Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3C64u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3C70u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3C78u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3C88u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3C90u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3C9Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3CA4u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3CB0u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3D00u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3D08u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3D10u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3D18u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3D20u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3D24u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3D60u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3D68u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3DB0u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3DF4u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3DFCu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3E08u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3E1Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3E20u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3E28u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3E30u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3E38u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3E44u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3E74u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3E7Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3E8Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3E94u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3EA8u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3EC4u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3ECCu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3EE0u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3EE8u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3EF4u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3F04u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3F18u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3F4Cu, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3F80u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3FC8u, &recomp_unit_0479, "recomp_unit_0479");
    runtime.register_function(0x089E3FF4u, &recomp_unit_0479, "recomp_unit_0479");
}
} // namespace psprecomp
