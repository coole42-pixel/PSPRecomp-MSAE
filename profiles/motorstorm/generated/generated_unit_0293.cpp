#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0293[1022] = {
    1, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0,
    8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0,
    19, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0,
    31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 36, 0, 37, 0,
    38, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 0, 44, 0, 45, 0, 46, 0, 0, 47, 0, 0,
    48, 0, 49, 0, 50, 0, 51, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0, 55, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63,
    0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 71,
    0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 76, 0, 0, 77,
    0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0,
    0, 0, 0, 85, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0,
    0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 98, 0, 0,
    0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0,
    0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 106, 0, 0, 107, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0,
    111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0,
    0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 122, 0, 0, 123, 0, 124,
    0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 131,
    0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 138, 139,
    0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0,
    0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0, 0,
    152, 0, 0, 0, 0, 153, 0, 154, 0, 155, 0, 0, 0, 156, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159,
    0, 0, 160, 0, 161, 0, 162, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0,
    167, 0, 168, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0,
    177, 0, 0, 178, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0,
    186, 187, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 194, 0, 195, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 199, 0, 200, 0, 0, 0, 201, 0,
    0, 202, 0, 203, 0, 204, 0, 0, 0, 205, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 210, 0, 211, 0, 0, 0, 212, 0,
    0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0,
    221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226,
};
void recomp_unit_0293_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08929000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0293[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08929000;
    case 2u: goto L_08929010;
    case 3u: goto L_08929018;
    case 4u: goto L_08929030;
    case 5u: goto L_0892904C;
    case 6u: goto L_08929054;
    case 7u: goto L_08929064;
    case 8u: goto L_08929080;
    case 9u: goto L_08929088;
    case 10u: goto L_089290B4;
    case 11u: goto L_089290E0;
    case 12u: goto L_08929118;
    case 13u: goto L_08929128;
    case 14u: goto L_08929138;
    case 15u: goto L_08929148;
    case 16u: goto L_0892914C;
    case 17u: goto L_0892916C;
    case 18u: goto L_08929174;
    case 19u: goto L_08929180;
    case 20u: goto L_0892918C;
    case 21u: goto L_0892919C;
    case 22u: goto L_089291E8;
    case 23u: goto L_089291F4;
    case 24u: goto L_08929228;
    case 25u: goto L_08929234;
    case 26u: goto L_08929240;
    case 27u: goto L_0892924C;
    case 28u: goto L_08929254;
    case 29u: goto L_0892925C;
    case 30u: goto L_08929278;
    case 31u: goto L_08929280;
    case 32u: goto L_08929294;
    case 33u: goto L_089292A8;
    case 34u: goto L_089292DC;
    case 35u: goto L_089292E8;
    case 36u: goto L_089292F0;
    case 37u: goto L_089292F8;
    case 38u: goto L_08929300;
    case 39u: goto L_08929308;
    case 40u: goto L_08929314;
    case 41u: goto L_08929330;
    case 42u: goto L_0892933C;
    case 43u: goto L_08929348;
    case 44u: goto L_08929358;
    case 45u: goto L_08929360;
    case 46u: goto L_08929368;
    case 47u: goto L_08929374;
    case 48u: goto L_08929380;
    case 49u: goto L_08929388;
    case 50u: goto L_08929390;
    case 51u: goto L_08929398;
    case 52u: goto L_089293AC;
    case 53u: goto L_089293B4;
    case 54u: goto L_089293BC;
    case 55u: goto L_089293C4;
    case 56u: goto L_089293C8;
    case 57u: goto L_089293D0;
    case 58u: goto L_08929414;
    case 59u: goto L_08929424;
    case 60u: goto L_0892942C;
    case 61u: goto L_0892944C;
    case 62u: goto L_08929458;
    case 63u: goto L_0892947C;
    case 64u: goto L_08929490;
    case 65u: goto L_089294A0;
    case 66u: goto L_089294B4;
    case 67u: goto L_089294C0;
    case 68u: goto L_089294CC;
    case 69u: goto L_089294E4;
    case 70u: goto L_089294EC;
    case 71u: goto L_089294FC;
    case 72u: goto L_08929520;
    case 73u: goto L_0892953C;
    case 74u: goto L_08929558;
    case 75u: goto L_0892956C;
    case 76u: goto L_08929570;
    case 77u: goto L_0892957C;
    case 78u: goto L_08929584;
    case 79u: goto L_08929590;
    case 80u: goto L_089295A8;
    case 81u: goto L_089295B0;
    case 82u: goto L_089295C0;
    case 83u: goto L_089295E4;
    case 84u: goto L_089295F8;
    case 85u: goto L_0892960C;
    case 86u: goto L_0892961C;
    case 87u: goto L_08929624;
    case 88u: goto L_08929644;
    case 89u: goto L_08929650;
    case 90u: goto L_08929674;
    case 91u: goto L_08929688;
    case 92u: goto L_08929698;
    case 93u: goto L_089296AC;
    case 94u: goto L_089296B8;
    case 95u: goto L_089296C4;
    case 96u: goto L_089296DC;
    case 97u: goto L_089296E4;
    case 98u: goto L_089296F4;
    case 99u: goto L_08929718;
    case 100u: goto L_08929734;
    case 101u: goto L_08929768;
    case 102u: goto L_08929778;
    case 103u: goto L_0892978C;
    case 104u: goto L_089297A8;
    case 105u: goto L_089297BC;
    case 106u: goto L_089297C0;
    case 107u: goto L_089297CC;
    case 108u: goto L_089297D4;
    case 109u: goto L_089297E0;
    case 110u: goto L_089297F8;
    case 111u: goto L_08929800;
    case 112u: goto L_08929810;
    case 113u: goto L_08929834;
    case 114u: goto L_08929848;
    case 115u: goto L_089298B8;
    case 116u: goto L_089298F8;
    case 117u: goto L_08929904;
    case 118u: goto L_08929914;
    case 119u: goto L_08929934;
    case 120u: goto L_08929950;
    case 121u: goto L_08929964;
    case 122u: goto L_08929968;
    case 123u: goto L_08929974;
    case 124u: goto L_0892997C;
    case 125u: goto L_08929988;
    case 126u: goto L_089299A0;
    case 127u: goto L_089299A8;
    case 128u: goto L_089299B8;
    case 129u: goto L_089299DC;
    case 130u: goto L_089299F0;
    case 131u: goto L_089299FC;
    case 132u: goto L_08929A18;
    case 133u: goto L_08929A30;
    case 134u: goto L_08929A44;
    case 135u: goto L_08929A54;
    case 136u: goto L_08929A5C;
    case 137u: goto L_08929A64;
    case 138u: goto L_08929A78;
    case 139u: goto L_08929A7C;
    case 140u: goto L_08929A88;
    case 141u: goto L_08929A94;
    case 142u: goto L_08929AB4;
    case 143u: goto L_08929AC8;
    case 144u: goto L_08929AEC;
    case 145u: goto L_08929B08;
    case 146u: goto L_08929B2C;
    case 147u: goto L_08929B40;
    case 148u: goto L_08929B50;
    case 149u: goto L_08929B58;
    case 150u: goto L_08929B64;
    case 151u: goto L_08929B74;
    case 152u: goto L_08929B80;
    case 153u: goto L_08929B94;
    case 154u: goto L_08929B9C;
    case 155u: goto L_08929BA4;
    case 156u: goto L_08929BB4;
    case 157u: goto L_08929BB8;
    case 158u: goto L_08929BC4;
    case 159u: goto L_08929BFC;
    case 160u: goto L_08929C08;
    case 161u: goto L_08929C10;
    case 162u: goto L_08929C18;
    case 163u: goto L_08929C28;
    case 164u: goto L_08929C34;
    case 165u: goto L_08929C50;
    case 166u: goto L_08929C78;
    case 167u: goto L_08929C80;
    case 168u: goto L_08929C88;
    case 169u: goto L_08929C90;
    case 170u: goto L_08929C9C;
    case 171u: goto L_08929CA8;
    case 172u: goto L_08929CB4;
    case 173u: goto L_08929CBC;
    case 174u: goto L_08929CC4;
    case 175u: goto L_08929CD8;
    case 176u: goto L_08929CF8;
    case 177u: goto L_08929D00;
    case 178u: goto L_08929D0C;
    case 179u: goto L_08929D14;
    case 180u: goto L_08929D24;
    case 181u: goto L_08929D40;
    case 182u: goto L_08929D4C;
    case 183u: goto L_08929D54;
    case 184u: goto L_08929D64;
    case 185u: goto L_08929D74;
    case 186u: goto L_08929D80;
    case 187u: goto L_08929D84;
    case 188u: goto L_08929D8C;
    case 189u: goto L_08929D9C;
    case 190u: goto L_08929DAC;
    case 191u: goto L_08929DBC;
    case 192u: goto L_08929DDC;
    case 193u: goto L_08929DE8;
    case 194u: goto L_08929DF0;
    case 195u: goto L_08929DF8;
    case 196u: goto L_08929E00;
    case 197u: goto L_08929E50;
    case 198u: goto L_08929E5C;
    case 199u: goto L_08929E60;
    case 200u: goto L_08929E68;
    case 201u: goto L_08929E78;
    case 202u: goto L_08929E84;
    case 203u: goto L_08929E8C;
    case 204u: goto L_08929E94;
    case 205u: goto L_08929EA4;
    case 206u: goto L_08929EA8;
    case 207u: goto L_08929EB0;
    case 208u: goto L_08929ED0;
    case 209u: goto L_08929ED8;
    case 210u: goto L_08929EE0;
    case 211u: goto L_08929EE8;
    case 212u: goto L_08929EF8;
    case 213u: goto L_08929F14;
    case 214u: goto L_08929F28;
    case 215u: goto L_08929F38;
    case 216u: goto L_08929F48;
    case 217u: goto L_08929F50;
    case 218u: goto L_08929F58;
    case 219u: goto L_08929F68;
    case 220u: goto L_08929F78;
    case 221u: goto L_08929F80;
    case 222u: goto L_08929F88;
    case 223u: goto L_08929FBC;
    case 224u: goto L_08929FC8;
    case 225u: goto L_08929FD8;
    case 226u: goto L_08929FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08929000:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 171u, 0x08928FF4u>(ctx, &aot_mem); return;
      }
      goto L_08929010;
    }
L_08929010:
    aot_gpr[5] = (aot_gpr[7] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    goto L_08929018;
L_08929018:
    aot_gpr[7] = (aot_gpr[8] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[8] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892904C;
      }
      goto L_08929030;
    }
L_08929030:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[8] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08929030;
      }
      goto L_0892904C;
    }
L_0892904C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929080;
      }
      goto L_08929054;
    }
L_08929054:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929080;
      }
      goto L_08929064;
    }
L_08929064:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08929064;
      }
      goto L_08929080;
    }
L_08929080:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929088:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[6] = (aot_gpr[6] << 7u);
    aot_gpr[4] = (aot_gpr[4] << 21u);
    aot_gpr[5] = (aot_gpr[5] << 14u);
    aot_gpr[2] = (aot_gpr[6] | aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089290B4:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[6] = (aot_gpr[6] << 8u);
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[5] = (aot_gpr[5] << 16u);
    aot_gpr[2] = (aot_gpr[6] | aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089290E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08929118u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08929118u) goto L_08929118;
    return;
L_08929118:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(10)));
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08929280;
      }
      goto L_08929128;
    }
L_08929128:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(11)));
    aot_gpr[7] = (0u | 255u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0892914C;
      }
      goto L_08929138;
    }
L_08929138:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (0u | 254u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0892914C;
      }
      goto L_08929148;
    }
L_08929148:
    aot_gpr[5] = (0u | 0u);
    goto L_0892914C;
L_0892914C:
    aot_gpr[11] = (aot_gpr[18] + static_cast<std::uint32_t>(-3));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(13));
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(14));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (0u | 1u);
    aot_gpr[10] = (0u | 15u);
    goto L_0892916C;
L_0892916C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (aot_gpr[18] << 8u);
      if (branch_taken) {
          goto L_08929180;
      }
      goto L_08929174;
    }
L_08929174:
    aot_gpr[18] = (aot_gpr[2] | aot_gpr[8]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] & 65535u);
      if (branch_taken) {
          goto L_0892918C;
      }
      goto L_08929180;
    }
L_08929180:
    aot_gpr[8] = (aot_gpr[8] << 8u);
    aot_gpr[18] = (aot_gpr[18] | aot_gpr[8]);
    aot_gpr[18] = (aot_gpr[18] & 65535u);
    goto L_0892918C;
L_0892918C:
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[8]) < 2048 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[18] & 61440u);
      if (branch_taken) {
          goto L_089291E8;
      }
      goto L_0892919C;
    }
L_0892919C:
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[3]) >> 12u));
    aot_gpr[8] = (aot_gpr[18] & 4032u);
    aot_gpr[3] = (aot_gpr[3] & 65535u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[8]) >> 6u));
    aot_gpr[3] = (aot_gpr[3] | 224u);
    aot_gpr[6] = (aot_gpr[17] + aot_gpr[6]);
    aot_gpr[8] = (aot_gpr[8] & 65535u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[6] = (aot_gpr[8] | 128u);
    aot_gpr[8] = (aot_gpr[17] + aot_gpr[9]);
    aot_gpr[2] = (aot_gpr[18] & 63u);
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[2] | 128u);
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
      if (branch_taken) {
          goto L_08929234;
      }
      goto L_089291E8;
    }
L_089291E8:
    aot_gpr[2] = (aot_gpr[18] < static_cast<std::uint32_t>(129) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929228;
      }
      goto L_089291F4;
    }
L_089291F4:
    aot_gpr[8] = (aot_gpr[18] & 192u);
    aot_gpr[8] = (aot_gpr[8] >> 6u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[8] = (aot_gpr[8] | 192u);
    aot_gpr[6] = (aot_gpr[17] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[2] = (aot_gpr[18] & 63u);
    aot_gpr[8] = (aot_gpr[17] + aot_gpr[9]);
    aot_gpr[2] = (aot_gpr[2] | 128u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_08929234;
      }
      goto L_08929228;
    }
L_08929228:
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[9] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    goto L_08929234;
L_08929234:
    aot_gpr[8] = (aot_gpr[10] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08929254;
      }
      goto L_08929240;
    }
L_08929240:
    aot_gpr[2] = (aot_gpr[10] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[9] = (aot_gpr[9] < aot_gpr[11] ? 1u : 0u);
      if (branch_taken) {
          goto L_08929254;
      }
      goto L_0892924C;
    }
L_0892924C:
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892925C;
      }
      goto L_08929254;
    }
L_08929254:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929278;
      }
      goto L_0892925C;
    }
L_0892925C:
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[10]);
    aot_gpr[2] = (aot_gpr[8] | 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (aot_gpr[2] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0892916C;
      }
      goto L_08929278;
    }
L_08929278:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929314;
      }
      goto L_08929280;
    }
L_08929280:
    aot_gpr[8] = (aot_gpr[18] + static_cast<std::uint32_t>(-2));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 11u);
    aot_gpr[18] = (0u | 12u);
    aot_gpr[7] = (0u | 1u);
    goto L_08929294;
L_08929294:
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[6]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[9] < static_cast<std::uint32_t>(129) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[6] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_089292DC;
      }
      goto L_089292A8;
    }
L_089292A8:
    aot_gpr[10] = (aot_gpr[9] & 192u);
    aot_gpr[10] = (aot_gpr[10] >> 6u);
    aot_gpr[10] = (aot_gpr[10] & 255u);
    aot_gpr[10] = (aot_gpr[10] | 192u);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[10]));
    aot_gpr[11] = (aot_gpr[9] & 63u);
    aot_gpr[10] = (aot_gpr[17] + aot_gpr[7]);
    aot_gpr[11] = (aot_gpr[11] | 128u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[7] | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[11]));
      if (branch_taken) {
          goto L_089292E8;
      }
      goto L_089292DC;
    }
L_089292DC:
    aot_gpr[10] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[9]));
    goto L_089292E8;
L_089292E8:
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[9] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08929300;
      }
      goto L_089292F0;
    }
L_089292F0:
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[7] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
      if (branch_taken) {
          goto L_08929300;
      }
      goto L_089292F8;
    }
L_089292F8:
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929308;
      }
      goto L_08929300;
    }
L_08929300:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929314;
      }
      goto L_08929308;
    }
L_08929308:
    aot_gpr[18] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08929294;
      }
      goto L_08929314;
    }
L_08929314:
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
L_08929330:
    aot_gpr[8] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[7]);
      if (branch_taken) {
          goto L_08929348;
      }
      goto L_0892933C;
    }
L_0892933C:
    aot_gpr[8] = (aot_gpr[4] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929360;
      }
      goto L_08929348;
    }
L_08929348:
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[8] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[7]);
      if (branch_taken) {
          goto L_08929368;
      }
      goto L_08929358;
    }
L_08929358:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929374;
      }
      goto L_08929360;
    }
L_08929360:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089293C8;
      }
      goto L_08929368;
    }
L_08929368:
    aot_gpr[8] = (aot_gpr[5] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929388;
      }
      goto L_08929374;
    }
L_08929374:
    aot_gpr[8] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[8] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08929390;
      }
      goto L_08929380;
    }
L_08929380:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929398;
      }
      goto L_08929388;
    }
L_08929388:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089293C8;
      }
      goto L_08929390;
    }
L_08929390:
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089293BC;
      }
      goto L_08929398;
    }
L_08929398:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_089293B4;
      }
      goto L_089293AC;
    }
L_089293AC:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089293C4;
      }
      goto L_089293B4;
    }
L_089293B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089293C8;
      }
      goto L_089293BC;
    }
L_089293BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089293C8;
      }
      goto L_089293C4;
    }
L_089293C4:
    aot_gpr[2] = (0u | 1u);
    goto L_089293C8;
L_089293C8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089293D0:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929414:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_0892944C;
      }
      goto L_08929424;
    }
L_08929424:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_0892944C;
      }
      goto L_0892942C;
    }
L_0892942C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0892944Cu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892944Cu) goto L_0892944C;
    return;
L_0892944C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929458:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08929520;
      }
      goto L_0892947C;
    }
L_0892947C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089294B4;
      }
      goto L_08929490;
    }
L_08929490:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x089294A0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    goto L_08929414;
L_089294A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08929490;
      }
      goto L_089294B4;
    }
L_089294B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
        goto L_089294EC;
    }
    goto L_089294C0;
L_089294C0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
        goto L_089294EC;
    }
    goto L_089294CC;
L_089294CC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089294E4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089294E4u) goto L_089294E4;
    return;
L_089294E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_089294EC;
L_089294EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_08929520;
      }
      goto L_089294FC;
    }
L_089294FC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08929520u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929520u) goto L_08929520;
    return;
L_08929520:
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
L_0892953C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089295E4;
      }
      goto L_08929558;
    }
L_08929558:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0892957C;
      }
      goto L_0892956C;
    }
L_0892956C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08929570;
L_08929570:
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08929570;
      }
      goto L_0892957C;
    }
L_0892957C:
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
        goto L_089295B0;
    }
    goto L_08929584;
L_08929584:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
        goto L_089295B0;
    }
    goto L_08929590;
L_08929590:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089295A8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089295A8u) goto L_089295A8;
    return;
L_089295A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_089295B0;
L_089295B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_089295E4;
      }
      goto L_089295C0;
    }
L_089295C0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089295E4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089295E4u) goto L_089295E4;
    return;
L_089295E4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089295F8:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892960C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08929644;
      }
      goto L_0892961C;
    }
L_0892961C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08929644;
      }
      goto L_08929624;
    }
L_08929624:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08929644u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929644u) goto L_08929644;
    return;
L_08929644:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929650:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08929718;
      }
      goto L_08929674;
    }
L_08929674:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089296AC;
      }
      goto L_08929688;
    }
L_08929688:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x08929698u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    goto L_0892960C;
L_08929698:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_08929688;
      }
      goto L_089296AC;
    }
L_089296AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
        goto L_089296E4;
    }
    goto L_089296B8;
L_089296B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
        goto L_089296E4;
    }
    goto L_089296C4;
L_089296C4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089296DCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089296DCu) goto L_089296DC;
    return;
L_089296DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_089296E4;
L_089296E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_08929718;
      }
      goto L_089296F4;
    }
L_089296F4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08929718u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929718u) goto L_08929718;
    return;
L_08929718:
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
L_08929734:
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (16256u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929768:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08929778u);
    aot_gpr[2] = (aot_gpr[4] | 0u);
    goto L_08929734;
L_08929778:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(84), aot_gpr[4]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892978C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08929834;
      }
      goto L_089297A8;
    }
L_089297A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089297CC;
      }
      goto L_089297BC;
    }
L_089297BC:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089297C0;
L_089297C0:
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089297C0;
      }
      goto L_089297CC;
    }
L_089297CC:
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
        goto L_08929800;
    }
    goto L_089297D4;
L_089297D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
        goto L_08929800;
    }
    goto L_089297E0;
L_089297E0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089297F8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089297F8u) goto L_089297F8;
    return;
L_089297F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_08929800;
L_08929800:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_08929834;
      }
      goto L_08929810;
    }
L_08929810:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08929834u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929834u) goto L_08929834;
    return;
L_08929834:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929848:
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (32639u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (aot_gpr[5] | 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (16128u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[6] = (16384u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-25184)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089298B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089298F8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    goto L_08929848;
L_089298F8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929904:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08929914u);
    aot_gpr[2] = (aot_gpr[4] | 0u);
    goto L_089298B8;
L_08929914:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(96), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(104), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(100), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929934:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089299DC;
      }
      goto L_08929950;
    }
L_08929950:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08929974;
      }
      goto L_08929964;
    }
L_08929964:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08929968;
L_08929968:
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08929968;
      }
      goto L_08929974;
    }
L_08929974:
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
        goto L_089299A8;
    }
    goto L_0892997C;
L_0892997C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
        goto L_089299A8;
    }
    goto L_08929988;
L_08929988:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089299A0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089299A0u) goto L_089299A0;
    return;
L_089299A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_089299A8;
L_089299A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_089299DC;
      }
      goto L_089299B8;
    }
L_089299B8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089299DCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089299DCu) goto L_089299DC;
    return;
L_089299DC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089299F0:
    aot_gpr[4] = (0u << 24u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089299FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08929AB4;
      }
      goto L_08929A18;
    }
L_08929A18:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1856));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929A7C;
      }
      goto L_08929A30;
    }
L_08929A30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929A7C;
      }
      goto L_08929A44;
    }
L_08929A44:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08929A64;
      }
      goto L_08929A54;
    }
L_08929A54:
    aot_gpr[31] = (0x08929A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 141u, 0x08942B24u>(ctx, &aot_mem) && ctx.pc == 0x08929A5Cu) goto L_08929A5C;
    return;
L_08929A5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929A78;
      }
      goto L_08929A64;
    }
L_08929A64:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08929A78u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08929A78u) goto L_08929A78;
    return;
L_08929A78:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), 0u);
    goto L_08929A7C;
L_08929A7C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08929A88u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x08929A88u) goto L_08929A88;
    return;
L_08929A88:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08929AB4;
      }
      goto L_08929A94;
    }
L_08929A94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08929AB4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929AB4u) goto L_08929AB4;
    return;
L_08929AB4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929AC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08929AECu);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x08929AECu) goto L_08929AEC;
    return;
L_08929AEC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1856));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08929B08u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 79u, 0x08A4D668u>(ctx, &aot_mem) && ctx.pc == 0x08929B08u) goto L_08929B08;
    return;
L_08929B08:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_08929B2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08929BB8;
      }
      goto L_08929B40;
    }
L_08929B40:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (0u | 5u);
    { const bool branch_taken = aot_gpr[7] == aot_gpr[6];
    aot_gpr[8] = (0u | 4u);
      if (branch_taken) {
          goto L_08929B58;
      }
      goto L_08929B50;
    }
L_08929B50:
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_08929BB8;
      }
      goto L_08929B58;
    }
L_08929B58:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x08929B64u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    ctx.pc = 0x08A5B044u;
    return;
L_08929B64:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    aot_gpr[6] = (0u | 5u);
      if (branch_taken) {
          goto L_08929B9C;
      }
      goto L_08929B74;
    }
L_08929B74:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08929B9C;
      }
      goto L_08929B80;
    }
L_08929B80:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    aot_gpr[5] = (0u | 7u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (0u | 8u);
        goto L_08929B94;
    }
    goto L_08929B94;
L_08929B94:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_08929BB8;
      }
      goto L_08929B9C;
    }
L_08929B9C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08929BB8;
      }
      goto L_08929BA4;
    }
L_08929BA4:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (0u | 4u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08929BB8;
      }
      goto L_08929BB4;
    }
L_08929BB4:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    goto L_08929BB8;
L_08929BB8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929BC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(5568));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929C28;
      }
      goto L_08929BFC;
    }
L_08929BFC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(5568)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[8]);
    goto L_08929C08;
L_08929C08:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08929C18;
      }
      goto L_08929C10;
    }
L_08929C10:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_08929C28;
      }
      goto L_08929C18;
    }
L_08929C18:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_08929C08;
      }
      goto L_08929C28;
    }
L_08929C28:
    aot_gpr[5] = (0u | 4u);
    aot_gpr[31] = (0x08929C34u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5AFFCu;
    return;
L_08929C34:
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929C50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 255u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_08929C90;
      }
      goto L_08929C78;
    }
L_08929C78:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08929C90;
      }
      goto L_08929C80;
    }
L_08929C80:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_08929C90;
      }
      goto L_08929C88;
    }
L_08929C88:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08929CC4;
      }
      goto L_08929C90;
    }
L_08929C90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x08929C9Cu);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = 0x08A5AFD4u;
    return;
L_08929C9C:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[17] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08929CBC;
      }
      goto L_08929CA8;
    }
L_08929CA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x08929CB4u);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = 0x08A5B0BCu;
    return;
L_08929CB4:
    aot_gpr[31] = (0x08929CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 153u, 0x08943ACCu>(ctx, &aot_mem) && ctx.pc == 0x08929CBCu) goto L_08929CBC;
    return;
L_08929CBC:
    aot_gpr[4] = (0u | 7u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08929CC4;
L_08929CC4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929CD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08929D00;
      }
      goto L_08929CF8;
    }
L_08929CF8:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08929D14;
      }
      goto L_08929D00;
    }
L_08929D00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x08929D0Cu);
    aot_gpr[5] = (0u | 2u);
    ctx.pc = 0x08A5AFD4u;
    return;
L_08929D0C:
    aot_gpr[4] = (0u | 6u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08929D14;
L_08929D14:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929D24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (0u | 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08929D54;
      }
      goto L_08929D40;
    }
L_08929D40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x08929D4Cu);
    aot_gpr[5] = (0u | 4u);
    ctx.pc = 0x08A5AFD4u;
    return;
L_08929D4C:
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08929D54;
L_08929D54:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929D64:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08929D80;
      }
      goto L_08929D74;
    }
L_08929D74:
    aot_gpr[6] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08929D84;
      }
      goto L_08929D80;
    }
L_08929D80:
    aot_gpr[5] = (0u | 1u);
    goto L_08929D84;
L_08929D84:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929D8C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (aot_gpr[4] ^ 6u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929D9C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (aot_gpr[4] ^ 3u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929DAC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (aot_gpr[4] ^ 7u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929DBC:
    aot_gpr[4] = (aot_gpr[4] << 12u);
    aot_gpr[4] = (0u + aot_gpr[4]);
    aot_gpr[5] = (0u | 44100u);
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[2] = (ctx.lo);
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(4097) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929DF0;
      }
      goto L_08929DDC;
    }
L_08929DDC:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929DF8;
      }
      goto L_08929DE8;
    }
L_08929DE8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08929DF8;
      }
      goto L_08929DF0;
    }
L_08929DF0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 4096u);
      if (branch_taken) {
          goto L_08929DF8;
      }
      goto L_08929DF8;
    }
L_08929DF8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929E00:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (2u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    aot_gpr[20] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[19] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-8476)));
      if (branch_taken) {
          goto L_08929E68;
      }
      goto L_08929E50;
    }
L_08929E50:
    aot_gpr[6] = (aot_gpr[6] & 1u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929E60;
      }
      goto L_08929E5C;
    }
L_08929E5C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    goto L_08929E60;
L_08929E60:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08929EA8;
      }
      goto L_08929E68;
    }
L_08929E68:
    aot_gpr[8] = (2219u << 16u);
    aot_gpr[7] = (0u | 2u);
    aot_gpr[18] = (0u | 1u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-10796)));
    goto L_08929E78;
L_08929E78:
    aot_gpr[9] = (aot_gpr[6] & aot_gpr[7]);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[9] = (aot_gpr[8] & aot_gpr[7]);
      if (branch_taken) {
          goto L_08929E94;
      }
      goto L_08929E84;
    }
L_08929E84:
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929E94;
      }
      goto L_08929E8C;
    }
L_08929E8C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[18]);
      if (branch_taken) {
          goto L_08929EA8;
      }
      goto L_08929E94;
    }
L_08929E94:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[18]) < 28 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[7] = (aot_gpr[7] << 1u);
      if (branch_taken) {
          goto L_08929E78;
      }
      goto L_08929EA4;
    }
L_08929EA4:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08929EA8;
L_08929EA8:
    { const bool branch_taken = aot_gpr[18] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08929ED8;
      }
      goto L_08929EB0;
    }
L_08929EB0:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[6] = (aot_gpr[19] & 512u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[8];
    aot_gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08929EE0;
      }
      goto L_08929ED0;
    }
L_08929ED0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929EE8;
      }
      goto L_08929ED8;
    }
L_08929ED8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 26u, 0x0892A1E0u>(ctx, &aot_mem); return;
      }
      goto L_08929EE0;
    }
L_08929EE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08929EE8;
L_08929EE8:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_08929F14;
      }
      goto L_08929EF8;
    }
L_08929EF8:
    aot_gpr[4] = (2219u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-10832)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    goto L_08929F14;
L_08929F14:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
      if (branch_taken) {
          goto L_08929F58;
      }
      goto L_08929F28;
    }
L_08929F28:
    aot_gpr[5] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[19] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2219u << 16u);
      if (branch_taken) {
          goto L_08929F48;
      }
      goto L_08929F38;
    }
L_08929F38:
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4528)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08929F50;
      }
      goto L_08929F48;
    }
L_08929F48:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-10828)));
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    goto L_08929F50;
L_08929F50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929F80;
      }
      goto L_08929F58;
    }
L_08929F58:
    aot_gpr[5] = (4u << 16u);
    aot_gpr[5] = (aot_gpr[19] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_08929F78;
      }
      goto L_08929F68;
    }
L_08929F68:
    aot_gpr[5] = (2219u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-10824)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08929F80;
      }
      goto L_08929F78;
    }
L_08929F78:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4528)));
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    goto L_08929F80;
L_08929F80:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) < 0;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 4u, 0x0892A038u>(ctx, &aot_mem); return;
      }
      goto L_08929F88;
    }
L_08929F88:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5392)));
    aot_gpr[7] = (aot_gpr[7] << 7u);
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[8] = (17792u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(112)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[5] = (20224u << 16u);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
        goto L_08929FC8;
    }
    goto L_08929FBC;
L_08929FBC:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08929FD8;
      }
      goto L_08929FC8;
    }
L_08929FC8:
    aot_gpr[5] = (32768u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[8] + aot_gpr[5]);
    goto L_08929FD8;
L_08929FD8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(116)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[12] - aot_fpr[14];
        (void)rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 1u, 0x0892A000u>(ctx, &aot_mem); return;
    }
    goto L_08929FF4;
L_08929FF4:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 2u, 0x0892A010u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 1u, 0x0892A000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0293(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0293_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_293(Runtime &runtime) {
    runtime.register_generated_unit(293u, 0x08929000u, 4096u, &recomp_unit_0293, &recomp_unit_0293_entry);
    runtime.register_function(0x08929000u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929010u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929018u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929030u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x0892904Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929054u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929064u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929080u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929088u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089290B4u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089290E0u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929118u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929128u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929138u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929148u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x0892914Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x0892916Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929174u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929180u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x0892918Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x0892919Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089291E8u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089291F4u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929228u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929234u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929240u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x0892924Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929254u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x0892925Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929278u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929280u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929294u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089292A8u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089292DCu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089292E8u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089292F0u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089292F8u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929300u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929308u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929314u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929330u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x0892933Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929348u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929358u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929360u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929368u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929374u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929380u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929388u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929390u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929398u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089293ACu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089293B4u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089293BCu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089293C4u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089293C8u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089293D0u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929414u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929424u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x0892942Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x0892944Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929458u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x0892947Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929490u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089294A0u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089294B4u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089294C0u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089294CCu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089294E4u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089294ECu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089294FCu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929520u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x0892953Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929558u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x0892956Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929570u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x0892957Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929584u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929590u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089295A8u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089295B0u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089295C0u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089295E4u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089295F8u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x0892960Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x0892961Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929624u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929644u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929650u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929674u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929688u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929698u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089296ACu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089296B8u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089296C4u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089296DCu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089296E4u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089296F4u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929718u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929734u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929768u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929778u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x0892978Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089297A8u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089297BCu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089297C0u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089297CCu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089297D4u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089297E0u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089297F8u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929800u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929810u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929834u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929848u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089298B8u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089298F8u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929904u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929914u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929934u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929950u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929964u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929968u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929974u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x0892997Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929988u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089299A0u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089299A8u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089299B8u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089299DCu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089299F0u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x089299FCu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929A18u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929A30u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929A44u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929A54u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929A5Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929A64u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929A78u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929A7Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929A88u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929A94u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929AB4u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929AC8u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929AECu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929B08u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929B2Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929B40u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929B50u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929B58u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929B64u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929B74u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929B80u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929B94u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929B9Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929BA4u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929BB4u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929BB8u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929BC4u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929BFCu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929C08u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929C10u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929C18u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929C28u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929C34u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929C50u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929C78u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929C80u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929C88u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929C90u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929C9Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929CA8u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929CB4u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929CBCu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929CC4u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929CD8u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929CF8u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929D00u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929D0Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929D14u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929D24u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929D40u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929D4Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929D54u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929D64u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929D74u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929D80u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929D84u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929D8Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929D9Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929DACu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929DBCu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929DDCu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929DE8u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929DF0u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929DF8u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929E00u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929E50u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929E5Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929E60u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929E68u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929E78u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929E84u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929E8Cu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929E94u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929EA4u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929EA8u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929EB0u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929ED0u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929ED8u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929EE0u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929EE8u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929EF8u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929F14u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929F28u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929F38u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929F48u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929F50u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929F58u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929F68u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929F78u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929F80u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929F88u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929FBCu, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929FC8u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929FD8u, &recomp_unit_0293, "recomp_unit_0293");
    runtime.register_function(0x08929FF4u, &recomp_unit_0293, "recomp_unit_0293");
}
} // namespace psprecomp
