#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0160[1023] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5,
    0, 0, 0, 0, 0, 6, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 10, 0, 11, 0, 12, 0, 13, 0, 0, 14, 0, 15, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0,
    23, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 34, 0, 0,
    0, 35, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 42, 0, 43, 0, 0, 0,
    44, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 49, 0, 50, 0, 51, 0, 52, 0, 0,
    0, 53, 0, 54, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0,
    0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 70, 0, 71, 0, 0, 72, 0, 0, 0, 73, 0, 0,
    0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 80, 0, 0, 81, 0, 0, 0, 0,
    0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 88, 89, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0,
    97, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0,
    108, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 112, 0, 0, 0, 113, 0, 114, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 118,
    0, 119, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 0,
    0, 127, 0, 0, 128, 0, 129, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 133, 0, 0, 0, 134, 0, 0, 135, 0, 136, 0, 137, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 142, 0, 143, 0, 0, 144, 0, 0,
    0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0,
    0, 153, 0, 154, 0, 0, 155, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163,
    0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0,
    0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 182,
    0, 0, 183, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189,
    0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 203, 0, 0, 204,
};
void recomp_unit_0160_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088A4000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0160[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088A4000;
    case 2u: goto L_088A4014;
    case 3u: goto L_088A4024;
    case 4u: goto L_088A402C;
    case 5u: goto L_088A407C;
    case 6u: goto L_088A4094;
    case 7u: goto L_088A4098;
    case 8u: goto L_088A40AC;
    case 9u: goto L_088A40C0;
    case 10u: goto L_088A40CC;
    case 11u: goto L_088A40D4;
    case 12u: goto L_088A40DC;
    case 13u: goto L_088A40E4;
    case 14u: goto L_088A40F0;
    case 15u: goto L_088A40F8;
    case 16u: goto L_088A4110;
    case 17u: goto L_088A4120;
    case 18u: goto L_088A4134;
    case 19u: goto L_088A413C;
    case 20u: goto L_088A4144;
    case 21u: goto L_088A4164;
    case 22u: goto L_088A4174;
    case 23u: goto L_088A4180;
    case 24u: goto L_088A4188;
    case 25u: goto L_088A4198;
    case 26u: goto L_088A41BC;
    case 27u: goto L_088A4214;
    case 28u: goto L_088A4220;
    case 29u: goto L_088A4238;
    case 30u: goto L_088A4244;
    case 31u: goto L_088A4254;
    case 32u: goto L_088A4260;
    case 33u: goto L_088A426C;
    case 34u: goto L_088A4274;
    case 35u: goto L_088A4284;
    case 36u: goto L_088A4298;
    case 37u: goto L_088A42A0;
    case 38u: goto L_088A42B8;
    case 39u: goto L_088A42C4;
    case 40u: goto L_088A42D4;
    case 41u: goto L_088A42E0;
    case 42u: goto L_088A42E8;
    case 43u: goto L_088A42F0;
    case 44u: goto L_088A4300;
    case 45u: goto L_088A430C;
    case 46u: goto L_088A431C;
    case 47u: goto L_088A4344;
    case 48u: goto L_088A434C;
    case 49u: goto L_088A435C;
    case 50u: goto L_088A4364;
    case 51u: goto L_088A436C;
    case 52u: goto L_088A4374;
    case 53u: goto L_088A4384;
    case 54u: goto L_088A438C;
    case 55u: goto L_088A4394;
    case 56u: goto L_088A439C;
    case 57u: goto L_088A43B8;
    case 58u: goto L_088A43D8;
    case 59u: goto L_088A43E0;
    case 60u: goto L_088A43E8;
    case 61u: goto L_088A4408;
    case 62u: goto L_088A4418;
    case 63u: goto L_088A4424;
    case 64u: goto L_088A4434;
    case 65u: goto L_088A4440;
    case 66u: goto L_088A4454;
    case 67u: goto L_088A4478;
    case 68u: goto L_088A44B8;
    case 69u: goto L_088A44CC;
    case 70u: goto L_088A44D0;
    case 71u: goto L_088A44D8;
    case 72u: goto L_088A44E4;
    case 73u: goto L_088A44F4;
    case 74u: goto L_088A4504;
    case 75u: goto L_088A4514;
    case 76u: goto L_088A4528;
    case 77u: goto L_088A4534;
    case 78u: goto L_088A4544;
    case 79u: goto L_088A4558;
    case 80u: goto L_088A4560;
    case 81u: goto L_088A456C;
    case 82u: goto L_088A458C;
    case 83u: goto L_088A4594;
    case 84u: goto L_088A45A8;
    case 85u: goto L_088A45B8;
    case 86u: goto L_088A45C8;
    case 87u: goto L_088A45D8;
    case 88u: goto L_088A45E4;
    case 89u: goto L_088A45E8;
    case 90u: goto L_088A4610;
    case 91u: goto L_088A4628;
    case 92u: goto L_088A4630;
    case 93u: goto L_088A4644;
    case 94u: goto L_088A4654;
    case 95u: goto L_088A465C;
    case 96u: goto L_088A4670;
    case 97u: goto L_088A4680;
    case 98u: goto L_088A4688;
    case 99u: goto L_088A469C;
    case 100u: goto L_088A46AC;
    case 101u: goto L_088A46BC;
    case 102u: goto L_088A46C0;
    case 103u: goto L_088A46EC;
    case 104u: goto L_088A4720;
    case 105u: goto L_088A4744;
    case 106u: goto L_088A4770;
    case 107u: goto L_088A4778;
    case 108u: goto L_088A4780;
    case 109u: goto L_088A4788;
    case 110u: goto L_088A47A0;
    case 111u: goto L_088A47B0;
    case 112u: goto L_088A47B4;
    case 113u: goto L_088A47C4;
    case 114u: goto L_088A47CC;
    case 115u: goto L_088A47D4;
    case 116u: goto L_088A47E4;
    case 117u: goto L_088A47F4;
    case 118u: goto L_088A47FC;
    case 119u: goto L_088A4804;
    case 120u: goto L_088A4808;
    case 121u: goto L_088A4814;
    case 122u: goto L_088A4834;
    case 123u: goto L_088A4848;
    case 124u: goto L_088A4858;
    case 125u: goto L_088A4864;
    case 126u: goto L_088A4874;
    case 127u: goto L_088A4884;
    case 128u: goto L_088A4890;
    case 129u: goto L_088A4898;
    case 130u: goto L_088A48A0;
    case 131u: goto L_088A48B8;
    case 132u: goto L_088A48C4;
    case 133u: goto L_088A48CC;
    case 134u: goto L_088A48DC;
    case 135u: goto L_088A48E8;
    case 136u: goto L_088A48F0;
    case 137u: goto L_088A48F8;
    case 138u: goto L_088A4900;
    case 139u: goto L_088A4920;
    case 140u: goto L_088A4950;
    case 141u: goto L_088A4958;
    case 142u: goto L_088A4960;
    case 143u: goto L_088A4968;
    case 144u: goto L_088A4974;
    case 145u: goto L_088A4994;
    case 146u: goto L_088A49AC;
    case 147u: goto L_088A49CC;
    case 148u: goto L_088A49EC;
    case 149u: goto L_088A4A24;
    case 150u: goto L_088A4A50;
    case 151u: goto L_088A4A6C;
    case 152u: goto L_088A4A74;
    case 153u: goto L_088A4A84;
    case 154u: goto L_088A4A8C;
    case 155u: goto L_088A4A98;
    case 156u: goto L_088A4AA0;
    case 157u: goto L_088A4AB0;
    case 158u: goto L_088A4AF0;
    case 159u: goto L_088A4B08;
    case 160u: goto L_088A4B18;
    case 161u: goto L_088A4B3C;
    case 162u: goto L_088A4B58;
    case 163u: goto L_088A4B7C;
    case 164u: goto L_088A4B94;
    case 165u: goto L_088A4BA4;
    case 166u: goto L_088A4BC8;
    case 167u: goto L_088A4BE4;
    case 168u: goto L_088A4C08;
    case 169u: goto L_088A4C20;
    case 170u: goto L_088A4C30;
    case 171u: goto L_088A4C50;
    case 172u: goto L_088A4C68;
    case 173u: goto L_088A4C70;
    case 174u: goto L_088A4C94;
    case 175u: goto L_088A4CEC;
    case 176u: goto L_088A4D14;
    case 177u: goto L_088A4D24;
    case 178u: goto L_088A4D3C;
    case 179u: goto L_088A4D48;
    case 180u: goto L_088A4D5C;
    case 181u: goto L_088A4D68;
    case 182u: goto L_088A4D7C;
    case 183u: goto L_088A4D88;
    case 184u: goto L_088A4D94;
    case 185u: goto L_088A4DA4;
    case 186u: goto L_088A4DC0;
    case 187u: goto L_088A4DD4;
    case 188u: goto L_088A4DE4;
    case 189u: goto L_088A4DFC;
    case 190u: goto L_088A4E08;
    case 191u: goto L_088A4E30;
    case 192u: goto L_088A4E3C;
    case 193u: goto L_088A4E48;
    case 194u: goto L_088A4EB4;
    case 195u: goto L_088A4EC8;
    case 196u: goto L_088A4EE8;
    case 197u: goto L_088A4EF0;
    case 198u: goto L_088A4F54;
    case 199u: goto L_088A4FB0;
    case 200u: goto L_088A4FBC;
    case 201u: goto L_088A4FD0;
    case 202u: goto L_088A4FDC;
    case 203u: goto L_088A4FEC;
    case 204u: goto L_088A4FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088A4000:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[31] = (0x088A4014u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6408));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 218u, 0x08873CE0u>(ctx, &aot_mem) && ctx.pc == 0x088A4014u) goto L_088A4014;
    return;
L_088A4014:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (0x088A4024u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7504));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 218u, 0x08873CE0u>(ctx, &aot_mem) && ctx.pc == 0x088A4024u) goto L_088A4024;
    return;
L_088A4024:
    aot_gpr[31] = (0x088A402Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 101u, 0x088A1A7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A402Cu) goto L_088A402C;
    return;
L_088A402C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(105))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 8u);
    aot_gpr[6] = (0u - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(716))))));
    aot_gpr[5] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    aot_gpr[18] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088A4098;
      }
      goto L_088A407C;
    }
L_088A407C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(31001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A4098;
      }
      goto L_088A4094;
    }
L_088A4094:
    aot_gpr[4] = (0u | 1u);
    goto L_088A4098;
L_088A4098:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A42E0;
      }
      goto L_088A40AC;
    }
L_088A40AC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 6 ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 7 ? 1u : 0u);
        goto L_088A40D4;
    }
    goto L_088A40C0;
L_088A40C0:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A4274;
      }
      goto L_088A40CC;
    }
L_088A40CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A40E4;
      }
      goto L_088A40D4;
    }
L_088A40D4:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A4174;
      }
      goto L_088A40DC;
    }
L_088A40DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4274;
      }
      goto L_088A40E4;
    }
L_088A40E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A413C;
      }
      goto L_088A40F0;
    }
L_088A40F0:
    aot_gpr[31] = (0x088A40F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088A40F8u) goto L_088A40F8;
    return;
L_088A40F8:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(64), 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088A4110u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 40u, 0x0882C3D8u>(ctx, &aot_mem) && ctx.pc == 0x088A4110u) goto L_088A4110;
    return;
L_088A4110:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1900)));
    aot_gpr[31] = (0x088A4120u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 21u, 0x088BC15Cu>(ctx, &aot_mem) && ctx.pc == 0x088A4120u) goto L_088A4120;
    return;
L_088A4120:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 6u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088A4134u);
    aot_gpr[7] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 23u, 0x088A2158u>(ctx, &aot_mem) && ctx.pc == 0x088A4134u) goto L_088A4134;
    return;
L_088A4134:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4164;
      }
      goto L_088A413C;
    }
L_088A413C:
    aot_gpr[31] = (0x088A4144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088A4144u) goto L_088A4144;
    return;
L_088A4144:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 6u);
    aot_gpr[31] = (0x088A4164u);
    aot_gpr[7] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 23u, 0x088A2158u>(ctx, &aot_mem) && ctx.pc == 0x088A4164u) goto L_088A4164;
    return;
L_088A4164:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27444)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_088A4274;
      }
      goto L_088A4174;
    }
L_088A4174:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A426C;
      }
      goto L_088A4180;
    }
L_088A4180:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A426C;
      }
      goto L_088A4188;
    }
L_088A4188:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4254;
      }
      goto L_088A4198;
    }
L_088A4198:
    aot_gpr[5] = (aot_gpr[4] << 8u);
    aot_gpr[7] = (0u - aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(716))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    aot_gpr[5] = (aot_gpr[4] << 8u);
      if (branch_taken) {
          goto L_088A4244;
      }
      goto L_088A41BC;
    }
L_088A41BC:
    aot_gpr[7] = (0u - aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(716))))));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[7] = (aot_gpr[5] << 5u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(116)));
    aot_gpr[5] = (20224u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[5] = (20224u << 16u);
      if (branch_taken) {
          goto L_088A4220;
      }
      goto L_088A4214;
    }
L_088A4214:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088A4238;
      }
      goto L_088A4220;
    }
L_088A4220:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[5] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    goto L_088A4238;
L_088A4238:
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    goto L_088A4244;
L_088A4244:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A4198;
      }
      goto L_088A4254;
    }
L_088A4254:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (0x088A4260u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 176u, 0x088A2C00u>(ctx, &aot_mem) && ctx.pc == 0x088A4260u) goto L_088A4260;
    return;
L_088A4260:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088A426Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1900)));
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 33u, 0x088BC22Cu>(ctx, &aot_mem) && ctx.pc == 0x088A426Cu) goto L_088A426C;
    return;
L_088A426C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4274;
      }
      goto L_088A4274;
    }
L_088A4274:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26496)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A42D4;
      }
      goto L_088A4284;
    }
L_088A4284:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (0u | 6u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A42B8;
      }
      goto L_088A4298;
    }
L_088A4298:
    aot_gpr[31] = (0x088A42A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088A42A0u) goto L_088A42A0;
    return;
L_088A42A0:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(104));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A42D4;
      }
      goto L_088A42B8;
    }
L_088A42B8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088A42C4u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 237u, 0x088A2F90u>(ctx, &aot_mem) && ctx.pc == 0x088A42C4u) goto L_088A42C4;
    return;
L_088A42C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088A42D4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 22u, 0x088A3178u>(ctx, &aot_mem) && ctx.pc == 0x088A42D4u) goto L_088A42D4;
    return;
L_088A42D4:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088A42E0;
L_088A42E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A439C;
      }
      goto L_088A42E8;
    }
L_088A42E8:
    aot_gpr[31] = (0x088A42F0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 101u, 0x088A1A7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A42F0u) goto L_088A42F0;
    return;
L_088A42F0:
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[7]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_088A435C;
      }
      goto L_088A4300;
    }
L_088A4300:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088A430Cu);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 189u, 0x088A0C6Cu>(ctx, &aot_mem) && ctx.pc == 0x088A430Cu) goto L_088A430C;
    return;
L_088A430C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(720)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (aot_gpr[7] << 5u);
      if (branch_taken) {
          goto L_088A434C;
      }
      goto L_088A431C;
    }
L_088A431C:
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A434C;
      }
      goto L_088A4344;
    }
L_088A4344:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088A435C;
      }
      goto L_088A434C;
    }
L_088A434C:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[7]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A4300;
      }
      goto L_088A435C;
    }
L_088A435C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A438C;
      }
      goto L_088A4364;
    }
L_088A4364:
    aot_gpr[31] = (0x088A436Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 231u, 0x0889AD54u>(ctx, &aot_mem) && ctx.pc == 0x088A436Cu) goto L_088A436C;
    return;
L_088A436C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A438C;
      }
      goto L_088A4374;
    }
L_088A4374:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[31] = (0x088A4384u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088A4384u) goto L_088A4384;
    return;
L_088A4384:
    aot_gpr[4] = (0u | 6u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088A438C;
L_088A438C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A439C;
      }
      goto L_088A4394;
    }
L_088A4394:
    aot_gpr[31] = (0x088A439Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 101u, 0x088A1A7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A439Cu) goto L_088A439C;
    return;
L_088A439C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A43B8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26704), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A43D8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A43E0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A43E8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26712), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4408:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088A4418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 60u, 0x089623E8u>(ctx, &aot_mem) && ctx.pc == 0x088A4418u) goto L_088A4418;
    return;
L_088A4418:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4424:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088A4434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x088A4434u) goto L_088A4434;
    return;
L_088A4434:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4440:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088A4454u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 77u, 0x089F13FCu>(ctx, &aot_mem) && ctx.pc == 0x088A4454u) goto L_088A4454;
    return;
L_088A4454:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5776));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(388), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4478:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-192));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[20]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[20] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[18] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[31]);
    aot_gpr[31] = (0x088A44B8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 239u, 0x089F0D4Cu>(ctx, &aot_mem) && ctx.pc == 0x088A44B8u) goto L_088A44B8;
    return;
L_088A44B8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (0u | 47u);
    aot_gpr[21] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[22] = (aot_gpr[16] + static_cast<std::uint32_t>(132));
      if (branch_taken) {
          goto L_088A44D0;
      }
      goto L_088A44CC;
    }
L_088A44CC:
    aot_gpr[19] = (0u | 1u);
    goto L_088A44D0;
L_088A44D0:
    aot_gpr[31] = (0x088A44D8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 239u, 0x089F0D4Cu>(ctx, &aot_mem) && ctx.pc == 0x088A44D8u) goto L_088A44D8;
    return;
L_088A44D8:
    aot_gpr[5] = (aot_gpr[2] + aot_gpr[19]);
    aot_gpr[31] = (0x088A44E4u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088A44E4u) goto L_088A44E4;
    return;
L_088A44E4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_gpr[5] = (0u | 51u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A4594;
      }
      goto L_088A44F4;
    }
L_088A44F4:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(133))))));
    aot_gpr[4] = (0u | 46u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A4594;
      }
      goto L_088A4504;
    }
L_088A4504:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(5))))));
    aot_gpr[6] = (0u | 80u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088A4560;
      }
      goto L_088A4514;
    }
L_088A4514:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(6))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(7))))));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-64));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(405), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_088A4534;
      }
      goto L_088A4528;
    }
L_088A4528:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(135))))));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(406), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088A4534;
L_088A4534:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088A4544u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17384));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088A4544u) goto L_088A4544;
    return;
L_088A4544:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088A4558u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17396));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088A4558u) goto L_088A4558;
    return;
L_088A4558:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A45A8;
      }
      goto L_088A4560;
    }
L_088A4560:
    aot_gpr[4] = (0u | 83u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A45A8;
      }
      goto L_088A456C;
    }
L_088A456C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(6))))));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(406), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17396));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088A458Cu);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088A458Cu) goto L_088A458C;
    return;
L_088A458C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A45A8;
      }
      goto L_088A4594;
    }
L_088A4594:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088A45A8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17396));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088A45A8u) goto L_088A45A8;
    return;
L_088A45A8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088A45B8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17420));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088A45B8u) goto L_088A45B8;
    return;
L_088A45B8:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088A45C8u);
    aot_gpr[6] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 243u, 0x08A3AC74u>(ctx, &aot_mem) && ctx.pc == 0x088A45C8u) goto L_088A45C8;
    return;
L_088A45C8:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(387), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088A45D8u);
    aot_gpr[5] = (0u | 63u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 271u, 0x08A3ADD8u>(ctx, &aot_mem) && ctx.pc == 0x088A45D8u) goto L_088A45D8;
    return;
L_088A45D8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A45E8;
      }
      goto L_088A45E4;
    }
L_088A45E4:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_088A45E8;
L_088A45E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[31] = (0x088A4610u);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 255u, 0x08876EA0u>(ctx, &aot_mem) && ctx.pc == 0x088A4610u) goto L_088A4610;
    return;
L_088A4610:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(388), aot_gpr[2]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088A4628u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17424));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x088A4628u) goto L_088A4628;
    return;
L_088A4628:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4644;
      }
      goto L_088A4630;
    }
L_088A4630:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (0u | 1u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088A46C0;
      }
      goto L_088A4644;
    }
L_088A4644:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088A4654u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17432));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x088A4654u) goto L_088A4654;
    return;
L_088A4654:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4670;
      }
      goto L_088A465C;
    }
L_088A465C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (0u | 2u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088A46C0;
      }
      goto L_088A4670;
    }
L_088A4670:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088A4680u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17440));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x088A4680u) goto L_088A4680;
    return;
L_088A4680:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A469C;
      }
      goto L_088A4688;
    }
L_088A4688:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (0u | 4u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088A46C0;
      }
      goto L_088A469C;
    }
L_088A469C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088A46ACu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17448));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x088A46ACu) goto L_088A46AC;
    return;
L_088A46AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088A46C0;
      }
      goto L_088A46BC;
    }
L_088A46BC:
    aot_gpr[19] = (0u | 5u);
    goto L_088A46C0;
L_088A46C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[19]);
    aot_gpr[5] = (0u | 200u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(132));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088A46ECu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A46ECu) goto L_088A46EC;
    return;
L_088A46EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(400)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(400), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(396)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(388)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x088A4720u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A4720u) goto L_088A4720;
    return;
L_088A4720:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    aot_gpr[6] = (0u | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088A4744u);
    aot_gpr[7] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A4744u) goto L_088A4744;
    return;
L_088A4744:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4770:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4778:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4780:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4788:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(388)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088A47B4;
      }
      goto L_088A47A0;
    }
L_088A47A0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088A47B0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(388));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088A47B0u) goto L_088A47B0;
    return;
L_088A47B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(388), 0u);
    goto L_088A47B4;
L_088A47B4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A47C4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A47CC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A47D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A4804;
      }
      goto L_088A47E4;
    }
L_088A47E4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (0u | 5u);
    aot_gpr[31] = (0x088A47F4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17456));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x088A47F4u) goto L_088A47F4;
    return;
L_088A47F4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A4804;
      }
      goto L_088A47FC;
    }
L_088A47FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088A4808;
      }
      goto L_088A4804;
    }
L_088A4804:
    aot_gpr[2] = (0u | 0u);
    goto L_088A4808;
L_088A4808:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4814:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26720), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4834:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5696));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4848:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088A4858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 78u, 0x0889B530u>(ctx, &aot_mem) && ctx.pc == 0x088A4858u) goto L_088A4858;
    return;
L_088A4858:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4864:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088A4874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 9u, 0x08964068u>(ctx, &aot_mem) && ctx.pc == 0x088A4874u) goto L_088A4874;
    return;
L_088A4874:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 40u);
    aot_gpr[31] = (0x088A4884u);
    aot_gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0382_entry, 382u, 234u, 0x08982F30u>(ctx, &aot_mem) && ctx.pc == 0x088A4884u) goto L_088A4884;
    return;
L_088A4884:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4890:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4898:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A48A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088A48B8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 36u, 0x088A3334u>(ctx, &aot_mem) && ctx.pc == 0x088A48B8u) goto L_088A48B8;
    return;
L_088A48B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A48C4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A48CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088A48DCu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 80u, 0x0889B550u>(ctx, &aot_mem) && ctx.pc == 0x088A48DCu) goto L_088A48DC;
    return;
L_088A48DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A48E8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A48F0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A48F8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4900:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26728), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4920:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[31]);
    aot_gpr[31] = (0x088A4950u);
    aot_gpr[19] = (aot_gpr[7] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x088A4950u) goto L_088A4950;
    return;
L_088A4950:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A4960;
      }
      goto L_088A4958;
    }
L_088A4958:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A49AC;
      }
      goto L_088A4960;
    }
L_088A4960:
    aot_gpr[31] = (0x088A4968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x088A4968u) goto L_088A4968;
    return;
L_088A4968:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x088A4974u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 154u, 0x0898380Cu>(ctx, &aot_mem) && ctx.pc == 0x088A4974u) goto L_088A4974;
    return;
L_088A4974:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[19]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x088A4994u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 38u, 0x08985364u>(ctx, &aot_mem) && ctx.pc == 0x088A4994u) goto L_088A4994;
    return;
L_088A4994:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(76));
    aot_gpr[31] = (0x088A49ACu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 158u, 0x08983858u>(ctx, &aot_mem) && ctx.pc == 0x088A49ACu) goto L_088A49AC;
    return;
L_088A49AC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A49CC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26736), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A49EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(212), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(720), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(216), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(217), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(232));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088A4A24u);
    aot_gpr[6] = (0u | 476u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088A4A24u) goto L_088A4A24;
    return;
L_088A4A24:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(708), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (16256u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(220), static_cast<std::uint8_t>(0u));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(224), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(218), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4A50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(724));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088A4A6Cu);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x088A4A6Cu) goto L_088A4A6C;
    return;
L_088A4A6C:
    aot_gpr[5] = (0u | 31u);
    aot_gpr[4] = (0u | 32u);
    goto L_088A4A74;
L_088A4A74:
    aot_gpr[7] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(724))))));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A4A8C;
      }
      goto L_088A4A84;
    }
L_088A4A84:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A4AA0;
      }
      goto L_088A4A8C;
    }
L_088A4A8C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(724), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088A4A74;
      }
      goto L_088A4A98;
    }
L_088A4A98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4AA0;
      }
      goto L_088A4AA0;
    }
L_088A4AA0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4AB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(112)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]) & 0x7FFFFFFFu);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(96)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) & 0x7FFFFFFFu);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25184)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4B58;
      }
      goto L_088A4AF0;
    }
L_088A4AF0:
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[16] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4B58;
      }
      goto L_088A4B08;
    }
L_088A4B08:
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[13] + aot_fpr[15];
        goto L_088A4B3C;
    }
    goto L_088A4B18;
L_088A4B18:
    aot_fpr[12] = aot_fpr[13] - aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(96)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25184)));
    aot_fpr[14] = aot_fpr[16] + aot_fpr[14];
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25184)));
      if (branch_taken) {
          goto L_088A4B58;
      }
      goto L_088A4B3C;
    }
L_088A4B3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(96)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25184)));
    aot_fpr[14] = aot_fpr[16] - aot_fpr[14];
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25184)));
    goto L_088A4B58;
L_088A4B58:
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(116)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]) & 0x7FFFFFFFu);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(100)));
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) & 0x7FFFFFFFu);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[16];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4BE4;
      }
      goto L_088A4B7C;
    }
L_088A4B7C:
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[16] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4BE4;
      }
      goto L_088A4B94;
    }
L_088A4B94:
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[13] + aot_fpr[15];
        goto L_088A4BC8;
    }
    goto L_088A4BA4;
L_088A4BA4:
    aot_fpr[12] = aot_fpr[13] - aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(100)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25184)));
    aot_fpr[14] = aot_fpr[16] + aot_fpr[14];
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25184)));
      if (branch_taken) {
          goto L_088A4BE4;
      }
      goto L_088A4BC8;
    }
L_088A4BC8:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(100)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25184)));
    aot_fpr[14] = aot_fpr[16] - aot_fpr[14];
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25184)));
    goto L_088A4BE4;
L_088A4BE4:
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(120)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]) & 0x7FFFFFFFu);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(104)));
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) & 0x7FFFFFFFu);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[16];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4C68;
      }
      goto L_088A4C08;
    }
L_088A4C08:
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[16] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4C68;
      }
      goto L_088A4C20;
    }
L_088A4C20:
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[13] + aot_fpr[15];
        goto L_088A4C50;
    }
    goto L_088A4C30;
L_088A4C30:
    aot_fpr[12] = aot_fpr[13] - aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(104)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25184)));
    aot_fpr[14] = aot_fpr[16] + aot_fpr[14];
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088A4C68;
      }
      goto L_088A4C50;
    }
L_088A4C50:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(104)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25184)));
    aot_fpr[14] = aot_fpr[16] - aot_fpr[14];
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088A4C68;
L_088A4C68:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4C70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(218)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_088A4DC0;
      }
      goto L_088A4C94;
    }
L_088A4C94:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(218), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(219), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(152), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(160), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(164), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(168), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x088A4CECu);
    aot_gpr[7] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 65u, 0x088847E8u>(ctx, &aot_mem) && ctx.pc == 0x088A4CECu) goto L_088A4CEC;
    return;
L_088A4CEC:
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(176);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(56));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(192), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(196), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(200), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[4] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_088A4D24;
    }
    goto L_088A4D14;
L_088A4D14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(209)));
    aot_gpr[4] = (aot_gpr[4] | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_088A4D24;
L_088A4D24:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4D48;
      }
      goto L_088A4D3C;
    }
L_088A4D3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(209)));
    aot_gpr[4] = (aot_gpr[4] | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088A4D48;
L_088A4D48:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4D68;
      }
      goto L_088A4D5C;
    }
L_088A4D5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(209)));
    aot_gpr[4] = (aot_gpr[4] | 4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088A4D68;
L_088A4D68:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4D88;
      }
      goto L_088A4D7C;
    }
L_088A4D7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(209)));
    aot_gpr[4] = (aot_gpr[4] | 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088A4D88;
L_088A4D88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(33)));
    if (aot_gpr[4] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_088A4DA4;
    }
    goto L_088A4D94;
L_088A4D94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(209)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088A4DA4;
L_088A4DA4:
    aot_gpr[4] = (17150u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(210), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 20u, 0x088A5128u>(ctx, &aot_mem); return;
      }
      goto L_088A4DC0;
    }
L_088A4DC0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[7] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 20u, 0x088A5128u>(ctx, &aot_mem); return;
      }
      goto L_088A4DD4;
    }
L_088A4DD4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[7] = (2215u << 16u);
      if (branch_taken) {
          goto L_088A4E30;
      }
      goto L_088A4DE4;
    }
L_088A4DE4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_088A4E08;
      }
      goto L_088A4DFC;
    }
L_088A4DFC:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_088A4E08;
L_088A4E08:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(152), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088A4E30;
L_088A4E30:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_088A4E48;
      }
      goto L_088A4E3C;
    }
L_088A4E3C:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_088A4E48;
L_088A4E48:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(144)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(148)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(152)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(192)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(196)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(200)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4EC8;
      }
      goto L_088A4EB4;
    }
L_088A4EB4:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(0u));
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088A4EC8;
L_088A4EC8:
    aot_gpr[4] = (2214u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(17464)));
    aot_fpr[13] = aot_fpr[12] / aot_fpr[14];
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4EF0;
      }
      goto L_088A4EE8;
    }
L_088A4EE8:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    goto L_088A4EF0;
L_088A4EF0:
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<22u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<23u, 3u>(vfpu_d); }
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<23u, 23u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<23u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<22u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<22u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<23u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<22u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<22u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(128);
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
      ctx.write_vfpu_vector_ct<23u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<22u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<23u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<22u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<22u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<23u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<22u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (0x088A4F54u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088A4AB0;
L_088A4F54:
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(176);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<21u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(176);
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
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<21u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(176);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-25184)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(176)));
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.set_fpu_condition((aot_fpr[16] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(184)));
      if (branch_taken) {
          goto L_088A4FBC;
      }
      goto L_088A4FB0;
    }
L_088A4FB0:
    aot_fpr[16] = aot_fpr[16] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(176), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-25184)));
    goto L_088A4FBC;
L_088A4FBC:
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
    ctx.set_fpu_condition((aot_fpr[16] < aot_fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4FDC;
      }
      goto L_088A4FD0;
    }
L_088A4FD0:
    aot_fpr[13] = aot_fpr[16] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(176), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-25184)));
    goto L_088A4FDC;
L_088A4FDC:
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4FF8;
      }
      goto L_088A4FEC;
    }
L_088A4FEC:
    aot_fpr[15] = aot_fpr[15] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(180), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-25184)));
    goto L_088A4FF8;
L_088A4FF8:
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[16]));
    ctx.pc = 0x088A5000u; return;
}

void recomp_unit_0160(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0160_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_160(Runtime &runtime) {
    runtime.register_generated_unit(160u, 0x088A4000u, 4096u, &recomp_unit_0160, &recomp_unit_0160_entry);
    runtime.register_function(0x088A4000u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4014u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4024u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A402Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A407Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4094u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4098u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A40ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A40C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A40CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A40D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A40DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A40E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A40F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A40F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4110u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4120u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4134u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A413Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4144u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4164u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4174u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4180u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4188u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4198u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A41BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4214u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4220u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4238u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4244u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4254u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4260u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A426Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4274u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4284u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4298u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A42A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A42B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A42C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A42D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A42E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A42E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A42F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4300u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A430Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A431Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4344u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A434Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A435Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4364u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A436Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4374u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4384u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A438Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4394u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A439Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A43B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A43D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A43E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A43E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4408u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4418u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4424u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4434u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4440u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4454u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4478u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A44B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A44CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A44D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A44D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A44E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A44F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4504u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4514u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4528u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4534u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4544u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4558u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4560u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A456Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A458Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4594u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A45A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A45B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A45C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A45D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A45E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A45E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4610u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4628u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4630u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4644u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4654u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A465Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4670u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4680u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4688u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A469Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A46ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A46BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A46C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A46ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4720u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4744u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4770u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4778u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4780u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4788u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A47A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A47B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A47B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A47C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A47CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A47D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A47E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A47F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A47FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4804u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4808u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4814u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4834u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4848u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4858u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4864u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4874u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4884u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4890u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4898u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A48A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A48B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A48C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A48CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A48DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A48E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A48F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A48F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4900u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4920u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4950u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4958u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4960u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4968u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4974u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4994u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A49ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A49CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A49ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4A24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4A50u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4A6Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4A74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4A84u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4A8Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4A98u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4AA0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4AB0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4AF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4B08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4B18u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4B3Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4B58u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4B7Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4B94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4BA4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4BC8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4BE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4C08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4C20u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4C30u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4C50u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4C68u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4C70u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4C94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4CECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4D14u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4D24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4D3Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4D48u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4D5Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4D68u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4D7Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4D88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4D94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4DA4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4DC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4DD4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4DE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4DFCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4E08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4E30u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4E3Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4E48u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4EB4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4EC8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4EE8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4EF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4F54u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4FB0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4FBCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4FD0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4FDCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4FECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x088A4FF8u, &recomp_unit_0160, "recomp_unit_0160");
}
} // namespace psprecomp
