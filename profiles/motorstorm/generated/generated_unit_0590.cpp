#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0590[1022] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0,
    0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 12, 13, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18,
    0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36,
    0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    0, 42, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 47, 0, 0, 48, 0, 49, 0,
    0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 60, 0,
    0, 0, 0, 61, 0, 62, 0, 0, 63, 0, 64, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0,
    75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0, 90, 0, 0,
    0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114,
    0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0,
    0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 134, 0, 135, 0,
    136, 0, 137, 0, 138, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0,
    144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0,
    0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162,
    0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 170, 0, 0, 171, 0, 0,
    0, 172, 0, 0, 173, 0, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 0, 177, 178, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181,
    0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187,
    0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193,
    0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0,
    200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 203, 0, 204, 0, 205, 0, 206, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 0,
    0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216,
};
void recomp_unit_0590_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A52000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0590[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A52000;
    case 2u: goto L_08A5201C;
    case 3u: goto L_08A5202C;
    case 4u: goto L_08A52038;
    case 5u: goto L_08A52040;
    case 6u: goto L_08A5204C;
    case 7u: goto L_08A5206C;
    case 8u: goto L_08A52084;
    case 9u: goto L_08A5208C;
    case 10u: goto L_08A520D8;
    case 11u: goto L_08A520EC;
    case 12u: goto L_08A520F4;
    case 13u: goto L_08A520F8;
    case 14u: goto L_08A52128;
    case 15u: goto L_08A52130;
    case 16u: goto L_08A5214C;
    case 17u: goto L_08A52174;
    case 18u: goto L_08A5217C;
    case 19u: goto L_08A5218C;
    case 20u: goto L_08A52194;
    case 21u: goto L_08A521C4;
    case 22u: goto L_08A521F0;
    case 23u: goto L_08A52230;
    case 24u: goto L_08A52254;
    case 25u: goto L_08A5226C;
    case 26u: goto L_08A52274;
    case 27u: goto L_08A52280;
    case 28u: goto L_08A522A0;
    case 29u: goto L_08A522DC;
    case 30u: goto L_08A522E8;
    case 31u: goto L_08A52328;
    case 32u: goto L_08A52338;
    case 33u: goto L_08A52348;
    case 34u: goto L_08A52354;
    case 35u: goto L_08A5235C;
    case 36u: goto L_08A5237C;
    case 37u: goto L_08A5238C;
    case 38u: goto L_08A523AC;
    case 39u: goto L_08A523B0;
    case 40u: goto L_08A523C0;
    case 41u: goto L_08A523E0;
    case 42u: goto L_08A52404;
    case 43u: goto L_08A52418;
    case 44u: goto L_08A52424;
    case 45u: goto L_08A52454;
    case 46u: goto L_08A5245C;
    case 47u: goto L_08A52464;
    case 48u: goto L_08A52470;
    case 49u: goto L_08A52478;
    case 50u: goto L_08A52484;
    case 51u: goto L_08A5248C;
    case 52u: goto L_08A5249C;
    case 53u: goto L_08A524A8;
    case 54u: goto L_08A524C8;
    case 55u: goto L_08A524EC;
    case 56u: goto L_08A52538;
    case 57u: goto L_08A52540;
    case 58u: goto L_08A52568;
    case 59u: goto L_08A52570;
    case 60u: goto L_08A52578;
    case 61u: goto L_08A5258C;
    case 62u: goto L_08A52594;
    case 63u: goto L_08A525A0;
    case 64u: goto L_08A525A8;
    case 65u: goto L_08A525B0;
    case 66u: goto L_08A525B8;
    case 67u: goto L_08A525C0;
    case 68u: goto L_08A525C8;
    case 69u: goto L_08A525D0;
    case 70u: goto L_08A525D8;
    case 71u: goto L_08A525E0;
    case 72u: goto L_08A525E8;
    case 73u: goto L_08A525F0;
    case 74u: goto L_08A525F8;
    case 75u: goto L_08A52600;
    case 76u: goto L_08A52614;
    case 77u: goto L_08A52630;
    case 78u: goto L_08A52654;
    case 79u: goto L_08A52678;
    case 80u: goto L_08A526AC;
    case 81u: goto L_08A526B8;
    case 82u: goto L_08A526C0;
    case 83u: goto L_08A526DC;
    case 84u: goto L_08A52700;
    case 85u: goto L_08A5273C;
    case 86u: goto L_08A52744;
    case 87u: goto L_08A52750;
    case 88u: goto L_08A5275C;
    case 89u: goto L_08A5276C;
    case 90u: goto L_08A52774;
    case 91u: goto L_08A52788;
    case 92u: goto L_08A52798;
    case 93u: goto L_08A527A8;
    case 94u: goto L_08A527B0;
    case 95u: goto L_08A527C0;
    case 96u: goto L_08A527CC;
    case 97u: goto L_08A527D8;
    case 98u: goto L_08A52808;
    case 99u: goto L_08A52830;
    case 100u: goto L_08A52840;
    case 101u: goto L_08A5284C;
    case 102u: goto L_08A52864;
    case 103u: goto L_08A5289C;
    case 104u: goto L_08A528AC;
    case 105u: goto L_08A528C0;
    case 106u: goto L_08A528C8;
    case 107u: goto L_08A528D4;
    case 108u: goto L_08A528EC;
    case 109u: goto L_08A52910;
    case 110u: goto L_08A52930;
    case 111u: goto L_08A5293C;
    case 112u: goto L_08A52954;
    case 113u: goto L_08A52964;
    case 114u: goto L_08A5297C;
    case 115u: goto L_08A5298C;
    case 116u: goto L_08A529AC;
    case 117u: goto L_08A529BC;
    case 118u: goto L_08A529C4;
    case 119u: goto L_08A529D0;
    case 120u: goto L_08A529DC;
    case 121u: goto L_08A529E8;
    case 122u: goto L_08A52A08;
    case 123u: goto L_08A52A14;
    case 124u: goto L_08A52A20;
    case 125u: goto L_08A52A28;
    case 126u: goto L_08A52A30;
    case 127u: goto L_08A52A38;
    case 128u: goto L_08A52A40;
    case 129u: goto L_08A52A48;
    case 130u: goto L_08A52A50;
    case 131u: goto L_08A52A58;
    case 132u: goto L_08A52A60;
    case 133u: goto L_08A52A68;
    case 134u: goto L_08A52A70;
    case 135u: goto L_08A52A78;
    case 136u: goto L_08A52A80;
    case 137u: goto L_08A52A88;
    case 138u: goto L_08A52A90;
    case 139u: goto L_08A52A98;
    case 140u: goto L_08A52AA8;
    case 141u: goto L_08A52AC4;
    case 142u: goto L_08A52AE8;
    case 143u: goto L_08A52AF8;
    case 144u: goto L_08A52B00;
    case 145u: goto L_08A52B0C;
    case 146u: goto L_08A52B2C;
    case 147u: goto L_08A52B40;
    case 148u: goto L_08A52B50;
    case 149u: goto L_08A52B6C;
    case 150u: goto L_08A52B90;
    case 151u: goto L_08A52BA0;
    case 152u: goto L_08A52BA8;
    case 153u: goto L_08A52BB4;
    case 154u: goto L_08A52BD4;
    case 155u: goto L_08A52BE8;
    case 156u: goto L_08A52BF8;
    case 157u: goto L_08A52C14;
    case 158u: goto L_08A52C38;
    case 159u: goto L_08A52C48;
    case 160u: goto L_08A52C50;
    case 161u: goto L_08A52C5C;
    case 162u: goto L_08A52C7C;
    case 163u: goto L_08A52C90;
    case 164u: goto L_08A52C98;
    case 165u: goto L_08A52CA8;
    case 166u: goto L_08A52CB4;
    case 167u: goto L_08A52CC4;
    case 168u: goto L_08A52CD0;
    case 169u: goto L_08A52CD8;
    case 170u: goto L_08A52CE8;
    case 171u: goto L_08A52CF4;
    case 172u: goto L_08A52D04;
    case 173u: goto L_08A52D10;
    case 174u: goto L_08A52D20;
    case 175u: goto L_08A52D2C;
    case 176u: goto L_08A52D38;
    case 177u: goto L_08A52D48;
    case 178u: goto L_08A52D4C;
    case 179u: goto L_08A52D54;
    case 180u: goto L_08A52D60;
    case 181u: goto L_08A52D7C;
    case 182u: goto L_08A52D94;
    case 183u: goto L_08A52DA0;
    case 184u: goto L_08A52DC0;
    case 185u: goto L_08A52DD4;
    case 186u: goto L_08A52DE0;
    case 187u: goto L_08A52DFC;
    case 188u: goto L_08A52E14;
    case 189u: goto L_08A52E20;
    case 190u: goto L_08A52E40;
    case 191u: goto L_08A52E54;
    case 192u: goto L_08A52E60;
    case 193u: goto L_08A52E7C;
    case 194u: goto L_08A52E94;
    case 195u: goto L_08A52EA0;
    case 196u: goto L_08A52EC0;
    case 197u: goto L_08A52ED4;
    case 198u: goto L_08A52EE0;
    case 199u: goto L_08A52EF0;
    case 200u: goto L_08A52F00;
    case 201u: goto L_08A52F24;
    case 202u: goto L_08A52F30;
    case 203u: goto L_08A52F38;
    case 204u: goto L_08A52F40;
    case 205u: goto L_08A52F48;
    case 206u: goto L_08A52F50;
    case 207u: goto L_08A52F58;
    case 208u: goto L_08A52F68;
    case 209u: goto L_08A52F74;
    case 210u: goto L_08A52F88;
    case 211u: goto L_08A52F94;
    case 212u: goto L_08A52FA0;
    case 213u: goto L_08A52FC0;
    case 214u: goto L_08A52FCC;
    case 215u: goto L_08A52FE0;
    case 216u: goto L_08A52FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A52000:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
      if (branch_taken) {
          goto L_08A5202C;
      }
      goto L_08A5201C;
    }
L_08A5201C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_08A5202C;
L_08A5202C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A52038;
L_08A52038:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52040:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5206C;
      }
      goto L_08A5204C;
    }
L_08A5204C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A52084;
      }
      goto L_08A5206C;
    }
L_08A5206C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A52084;
L_08A52084:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5208C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[20] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A52128;
      }
      goto L_08A520D8;
    }
L_08A520D8:
    aot_gpr[4] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    jump_target = aot_gpr[20];
    aot_gpr[31] = (0x08A520ECu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A520ECu) goto L_08A520EC;
    return;
L_08A520EC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A520F8;
      }
      goto L_08A520F4;
    }
L_08A520F4:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08A520F8;
L_08A520F8:
    aot_gpr[4] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A520D8;
      }
      goto L_08A52128;
    }
L_08A52128:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A5214C;
      }
      goto L_08A52130;
    }
L_08A52130:
    aot_gpr[4] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08A5214C;
L_08A5214C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (aot_gpr[4] << 2u);
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 1u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[18]);
    goto L_08A52174;
L_08A52174:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (aot_gpr[17] << 2u);
      if (branch_taken) {
          goto L_08A521C4;
      }
      goto L_08A5217C;
    }
L_08A5217C:
    aot_gpr[22] = (aot_gpr[16] + aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[20];
    aot_gpr[31] = (0x08A5218Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5218Cu) goto L_08A5218C;
    return;
L_08A5218C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A521C4;
      }
      goto L_08A52194;
    }
L_08A52194:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 1u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[18]);
      if (branch_taken) {
          goto L_08A52174;
      }
      goto L_08A521C4;
    }
L_08A521C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[19]);
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
L_08A521F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 2u));
    aot_gpr[7] = (aot_gpr[7] >> 30u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < 2 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A52280;
      }
      goto L_08A52230;
    }
L_08A52230:
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(-2));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[4] = (aot_gpr[4] >> 31u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[19]) >> 1u));
    aot_gpr[18] = (aot_gpr[19] << 2u);
    aot_gpr[18] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A52254;
L_08A52254:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A5226Cu);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A5208C;
L_08A5226C:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A52280;
      }
      goto L_08A52274;
    }
L_08A52274:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A52254;
      }
      goto L_08A52280;
    }
L_08A52280:
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
L_08A522A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4)));
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[7] - aot_gpr[4]);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[10] >> 30u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A522DCu);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    goto L_08A5208C;
L_08A522DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A522E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A52328u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A521F0;
L_08A52328:
    aot_gpr[21] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
      if (branch_taken) {
          goto L_08A5238C;
      }
      goto L_08A52338;
    }
L_08A52338:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    goto L_08A52348;
L_08A52348:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A52354u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A52354u) goto L_08A52354;
    return;
L_08A52354:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5237C;
      }
      goto L_08A5235C;
    }
L_08A5235C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A5237Cu);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A5208C;
L_08A5237C:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A52348;
      }
      goto L_08A5238C;
    }
L_08A5238C:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A523E0;
      }
      goto L_08A523AC;
    }
L_08A523AC:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A523B0;
L_08A523B0:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-4));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A523C0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A522A0;
L_08A523C0:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A523B0;
      }
      goto L_08A523E0;
    }
L_08A523E0:
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
L_08A52404:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A52418u);
    aot_gpr[7] = (0u | 0u);
    goto L_08A522E8;
L_08A52418:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52424:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    goto L_08A52454;
L_08A52454:
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A5245Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5245Cu) goto L_08A5245C;
    return;
L_08A5245C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52470;
      }
      goto L_08A52464;
    }
L_08A52464:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A52454;
      }
      goto L_08A52470;
    }
L_08A52470:
    aot_gpr[18] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A52478;
L_08A52478:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A52484u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A52484u) goto L_08A52484;
    return;
L_08A52484:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5249C;
      }
      goto L_08A5248C;
    }
L_08A5248C:
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
    aot_gpr[18] = (aot_gpr[20] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A52478;
      }
      goto L_08A5249C;
    }
L_08A5249C:
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A524C8;
      }
      goto L_08A524A8;
    }
L_08A524A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A52454;
      }
      goto L_08A524C8;
    }
L_08A524C8:
    aot_gpr[2] = (aot_gpr[19] | 0u);
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
L_08A524EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] - aot_gpr[16]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    aot_gpr[4] = (aot_gpr[4] >> 30u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 17 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[19] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A52654;
      }
      goto L_08A52538;
    }
L_08A52538:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 3u));
      if (branch_taken) {
          goto L_08A52578;
      }
      goto L_08A52540;
    }
L_08A52540:
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[20] = (aot_gpr[4] << 2u);
    aot_gpr[20] = (aot_gpr[16] + aot_gpr[20]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A52568u);
    aot_gpr[21] = (aot_gpr[17] + static_cast<std::uint32_t>(-4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A52568u) goto L_08A52568;
    return;
L_08A52568:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A52594;
      }
      goto L_08A52570;
    }
L_08A52570:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A525D0;
      }
      goto L_08A52578;
    }
L_08A52578:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A5258Cu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    goto L_08A52404;
L_08A5258C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52654;
      }
      goto L_08A52594;
    }
L_08A52594:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A525A0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A525A0u) goto L_08A525A0;
    return;
L_08A525A0:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08A525B0;
    }
    goto L_08A525A8;
L_08A525A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A52600;
      }
      goto L_08A525B0;
    }
L_08A525B0:
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A525B8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A525B8u) goto L_08A525B8;
    return;
L_08A525B8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A525C8;
      }
      goto L_08A525C0;
    }
L_08A525C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A52600;
      }
      goto L_08A525C8;
    }
L_08A525C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A52600;
      }
      goto L_08A525D0;
    }
L_08A525D0:
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A525D8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A525D8u) goto L_08A525D8;
    return;
L_08A525D8:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08A525E8;
    }
    goto L_08A525E0;
L_08A525E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A52600;
      }
      goto L_08A525E8;
    }
L_08A525E8:
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A525F0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A525F0u) goto L_08A525F0;
    return;
L_08A525F0:
    if (aot_gpr[2] == 0u) {
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08A52600;
    }
    goto L_08A525F8;
L_08A525F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A52600;
      }
      goto L_08A52600;
    }
L_08A52600:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A52614u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    goto L_08A52424;
L_08A52614:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A52630u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    goto L_08A524EC;
L_08A52630:
    aot_gpr[4] = (aot_gpr[20] - aot_gpr[16]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[17] = (aot_gpr[20] | 0u);
    aot_gpr[20] = (aot_gpr[5] >> 30u);
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52538;
      }
      goto L_08A52654;
    }
L_08A52654:
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
L_08A52678:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    goto L_08A526AC;
L_08A526AC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A526B8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A526B8u) goto L_08A526B8;
    return;
L_08A526B8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A526DC;
      }
      goto L_08A526C0;
    }
L_08A526C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[19] | 0u);
    aot_gpr[19] = (aot_gpr[20] + static_cast<std::uint32_t>(-4));
    aot_gpr[20] = (aot_gpr[19] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A526AC;
      }
      goto L_08A526DC;
    }
L_08A526DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[17]);
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
L_08A52700:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A52744;
      }
      goto L_08A5273C;
    }
L_08A5273C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A527D8;
      }
      goto L_08A52744;
    }
L_08A52744:
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A527D8;
      }
      goto L_08A52750;
    }
L_08A52750:
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(5))))));
    aot_gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(3))))));
    goto L_08A5275C;
L_08A5275C:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x08A5276Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5276Cu) goto L_08A5276C;
    return;
L_08A5276C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[30] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A527B0;
      }
      goto L_08A52774;
    }
L_08A52774:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x08A52788u);
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(4))))));
    goto L_08A52A14;
L_08A52788:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[19] = (aot_gpr[19] - aot_gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) <= 0;
    aot_gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(8))))));
      if (branch_taken) {
          goto L_08A527A8;
      }
      goto L_08A52798;
    }
L_08A52798:
    aot_gpr[4] = (aot_gpr[30] - aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A527A8u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 166u, 0x08A3A878u>(ctx, &aot_mem) && ctx.pc == 0x08A527A8u) goto L_08A527A8;
    return;
L_08A527A8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[20]);
      if (branch_taken) {
          goto L_08A527C0;
      }
      goto L_08A527B0;
    }
L_08A527B0:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A527C0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_08A52678;
L_08A527C0:
    aot_gpr[19] = (aot_gpr[30] | 0u);
    { const bool branch_taken = aot_gpr[19] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A5275C;
      }
      goto L_08A527CC;
    }
L_08A527CC:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[21]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[22]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[23]));
    goto L_08A527D8;
L_08A527D8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52808:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[18] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A5284C;
      }
      goto L_08A52830;
    }
L_08A52830:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A52840u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A52678;
L_08A52840:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A52830;
      }
      goto L_08A5284C;
    }
L_08A5284C:
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
L_08A52864:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 2u));
    aot_gpr[8] = (aot_gpr[8] >> 30u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < 17 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A528C8;
      }
      goto L_08A5289C;
    }
L_08A5289C:
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A528ACu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A52700;
L_08A528AC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A528C0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_08A52808;
L_08A528C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A528D4;
      }
      goto L_08A528C8;
    }
L_08A528C8:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A528D4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A52700;
L_08A528D4:
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
L_08A528EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A52964;
      }
      goto L_08A52910;
    }
L_08A52910:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5293C;
      }
      goto L_08A52930;
    }
L_08A52930:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 1u));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A52930;
      }
      goto L_08A5293C;
    }
L_08A5293C:
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A52954u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A524EC;
L_08A52954:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A52964u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A52864;
L_08A52964:
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
L_08A5297C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A52A08;
      }
      goto L_08A5298C;
    }
L_08A5298C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1368));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1224));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A529BC;
      }
      goto L_08A529AC;
    }
L_08A529AC:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24816));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    aot_gpr[6] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-7760), 0u);
    goto L_08A529BC;
L_08A529BC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A529DC;
      }
      goto L_08A529C4;
    }
L_08A529C4:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3104));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A529DC;
      }
      goto L_08A529D0;
    }
L_08A529D0:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3152));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08A529DC;
L_08A529DC:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A52A08;
      }
      goto L_08A529E8;
    }
L_08A529E8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A52A08u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A52A08u) goto L_08A52A08;
    return;
L_08A52A08:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52A14:
    aot_gpr[4] = (0u << 24u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52A20:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52A28:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52A30:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52A38:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52A40:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52A48:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52A50:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52A58:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52A60:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52A68:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52A70:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52A78:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52A80:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52A88:
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52A90:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52A98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3056));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52AA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A52B2C;
      }
      goto L_08A52AC4;
    }
L_08A52AC4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-576));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3020), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-416));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3024), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(3024));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A52AF8;
      }
      goto L_08A52AE8;
    }
L_08A52AE8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3152));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3024), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A52AF8;
L_08A52AF8:
    aot_gpr[31] = (0x08A52B00u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 125u, 0x088E9C84u>(ctx, &aot_mem) && ctx.pc == 0x08A52B00u) goto L_08A52B00;
    return;
L_08A52B00:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A52B2C;
      }
      goto L_08A52B0C;
    }
L_08A52B0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A52B2Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A52B2Cu) goto L_08A52B2C;
    return;
L_08A52B2C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52B40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3120));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52B50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A52BD4;
      }
      goto L_08A52B6C;
    }
L_08A52B6C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-368));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3020), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-208));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3024), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(3024));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A52BA0;
      }
      goto L_08A52B90;
    }
L_08A52B90:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3152));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3024), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A52BA0;
L_08A52BA0:
    aot_gpr[31] = (0x08A52BA8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 125u, 0x088E9C84u>(ctx, &aot_mem) && ctx.pc == 0x08A52BA8u) goto L_08A52BA8;
    return;
L_08A52BA8:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A52BD4;
      }
      goto L_08A52BB4;
    }
L_08A52BB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A52BD4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A52BD4u) goto L_08A52BD4;
    return;
L_08A52BD4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52BE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3072));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52BF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A52C7C;
      }
      goto L_08A52C14;
    }
L_08A52C14:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-160));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3020), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(0));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3024), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(3024));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A52C48;
      }
      goto L_08A52C38;
    }
L_08A52C38:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3152));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3024), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A52C48;
L_08A52C48:
    aot_gpr[31] = (0x08A52C50u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 125u, 0x088E9C84u>(ctx, &aot_mem) && ctx.pc == 0x08A52C50u) goto L_08A52C50;
    return;
L_08A52C50:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A52C7C;
      }
      goto L_08A52C5C;
    }
L_08A52C5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A52C7Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A52C7Cu) goto L_08A52C7C;
    return;
L_08A52C7C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52C90:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52C98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A52CA8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 102u, 0x088CB6C4u>(ctx, &aot_mem) && ctx.pc == 0x08A52CA8u) goto L_08A52CA8;
    return;
L_08A52CA8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52CB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A52CC4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 112u, 0x088CB788u>(ctx, &aot_mem) && ctx.pc == 0x08A52CC4u) goto L_08A52CC4;
    return;
L_08A52CC4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52CD0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52CD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A52CE8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 48u, 0x088CC49Cu>(ctx, &aot_mem) && ctx.pc == 0x08A52CE8u) goto L_08A52CE8;
    return;
L_08A52CE8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52CF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A52D04u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 52u, 0x088CC4FCu>(ctx, &aot_mem) && ctx.pc == 0x08A52D04u) goto L_08A52D04;
    return;
L_08A52D04:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52D10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A52D20u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 69u, 0x088CC6D4u>(ctx, &aot_mem) && ctx.pc == 0x08A52D20u) goto L_08A52D20;
    return;
L_08A52D20:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52D2C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A52D4C;
      }
      goto L_08A52D38;
    }
L_08A52D38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A52D4C;
      }
      goto L_08A52D48;
    }
L_08A52D48:
    aot_gpr[5] = (0u | 1u);
    goto L_08A52D4C;
L_08A52D4C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52D54:
    aot_gpr[2] = (2215u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-28784));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52D60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A52DC0;
      }
      goto L_08A52D7C;
    }
L_08A52D7C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(328));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A52D94u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 76u, 0x08918630u>(ctx, &aot_mem) && ctx.pc == 0x08A52D94u) goto L_08A52D94;
    return;
L_08A52D94:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A52DC0;
      }
      goto L_08A52DA0;
    }
L_08A52DA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A52DC0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A52DC0u) goto L_08A52DC0;
    return;
L_08A52DC0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52DD4:
    aot_gpr[2] = (2215u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-28760));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52DE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A52E40;
      }
      goto L_08A52DFC;
    }
L_08A52DFC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(368));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A52E14u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 76u, 0x08918630u>(ctx, &aot_mem) && ctx.pc == 0x08A52E14u) goto L_08A52E14;
    return;
L_08A52E14:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A52E40;
      }
      goto L_08A52E20;
    }
L_08A52E20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A52E40u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A52E40u) goto L_08A52E40;
    return;
L_08A52E40:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52E54:
    aot_gpr[2] = (2215u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-28720));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52E60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A52EC0;
      }
      goto L_08A52E7C;
    }
L_08A52E7C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(408));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A52E94u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 76u, 0x08918630u>(ctx, &aot_mem) && ctx.pc == 0x08A52E94u) goto L_08A52E94;
    return;
L_08A52E94:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A52EC0;
      }
      goto L_08A52EA0;
    }
L_08A52EA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A52EC0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A52EC0u) goto L_08A52EC0;
    return;
L_08A52EC0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52ED4:
    aot_gpr[2] = (2215u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-28688));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52EE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A52F24;
      }
      goto L_08A52EF0;
    }
L_08A52EF0:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25296));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A52F24;
      }
      goto L_08A52F00;
    }
L_08A52F00:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A52F24u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A52F24u) goto L_08A52F24;
    return;
L_08A52F24:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52F30:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52F38:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52F40:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52F48:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52F50:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52F58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A52FC0;
      }
      goto L_08A52F68;
    }
L_08A52F68:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2448));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A52F94;
      }
      goto L_08A52F74;
    }
L_08A52F74:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2600));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08A52F94;
      }
      goto L_08A52F88;
    }
L_08A52F88:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25296));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08A52F94;
L_08A52F94:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A52FC0;
      }
      goto L_08A52FA0;
    }
L_08A52FA0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A52FC0u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A52FC0u) goto L_08A52FC0;
    return;
L_08A52FC0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52FCC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A52FE0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0256_entry, 256u, 59u, 0x089049E8u>(ctx, &aot_mem) && ctx.pc == 0x08A52FE0u) goto L_08A52FE0;
    return;
L_08A52FE0:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52FF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    ctx.pc = 0x08A53000u; return;
}

void recomp_unit_0590(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0590_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_590(Runtime &runtime) {
    runtime.register_generated_unit(590u, 0x08A52000u, 4096u, &recomp_unit_0590, &recomp_unit_0590_entry);
    runtime.register_function(0x08A52000u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A5201Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A5202Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52038u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52040u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A5204Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A5206Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52084u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A5208Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A520D8u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A520ECu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A520F4u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A520F8u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52128u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52130u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A5214Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52174u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A5217Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A5218Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52194u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A521C4u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A521F0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52230u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52254u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A5226Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52274u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52280u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A522A0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A522DCu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A522E8u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52328u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52338u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52348u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52354u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A5235Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A5237Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A5238Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A523ACu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A523B0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A523C0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A523E0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52404u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52418u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52424u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52454u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A5245Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52464u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52470u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52478u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52484u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A5248Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A5249Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A524A8u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A524C8u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A524ECu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52538u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52540u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52568u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52570u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52578u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A5258Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52594u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A525A0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A525A8u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A525B0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A525B8u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A525C0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A525C8u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A525D0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A525D8u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A525E0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A525E8u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A525F0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A525F8u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52600u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52614u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52630u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52654u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52678u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A526ACu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A526B8u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A526C0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A526DCu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52700u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A5273Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52744u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52750u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A5275Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A5276Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52774u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52788u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52798u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A527A8u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A527B0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A527C0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A527CCu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A527D8u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52808u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52830u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52840u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A5284Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52864u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A5289Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A528ACu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A528C0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A528C8u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A528D4u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A528ECu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52910u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52930u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A5293Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52954u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52964u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A5297Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A5298Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A529ACu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A529BCu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A529C4u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A529D0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A529DCu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A529E8u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52A08u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52A14u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52A20u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52A28u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52A30u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52A38u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52A40u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52A48u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52A50u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52A58u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52A60u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52A68u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52A70u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52A78u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52A80u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52A88u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52A90u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52A98u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52AA8u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52AC4u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52AE8u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52AF8u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52B00u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52B0Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52B2Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52B40u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52B50u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52B6Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52B90u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52BA0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52BA8u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52BB4u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52BD4u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52BE8u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52BF8u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52C14u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52C38u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52C48u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52C50u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52C5Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52C7Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52C90u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52C98u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52CA8u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52CB4u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52CC4u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52CD0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52CD8u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52CE8u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52CF4u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52D04u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52D10u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52D20u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52D2Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52D38u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52D48u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52D4Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52D54u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52D60u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52D7Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52D94u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52DA0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52DC0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52DD4u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52DE0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52DFCu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52E14u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52E20u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52E40u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52E54u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52E60u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52E7Cu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52E94u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52EA0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52EC0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52ED4u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52EE0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52EF0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52F00u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52F24u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52F30u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52F38u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52F40u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52F48u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52F50u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52F58u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52F68u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52F74u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52F88u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52F94u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52FA0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52FC0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52FCCu, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52FE0u, &recomp_unit_0590, "recomp_unit_0590");
    runtime.register_function(0x08A52FF4u, &recomp_unit_0590, "recomp_unit_0590");
}
} // namespace psprecomp
