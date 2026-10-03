#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0416[1023] = {
    1, 0, 2, 0, 3, 0, 4, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0,
    0, 11, 0, 12, 0, 0, 13, 0, 14, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0,
    0, 21, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 25, 0, 26, 0, 27, 28, 0, 0, 0, 29, 0, 0, 30, 0, 31, 0, 0, 0,
    0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 37, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0,
    41, 0, 0, 42, 0, 43, 0, 44, 0, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 54, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0,
    0, 59, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0,
    66, 0, 67, 0, 68, 0, 0, 69, 0, 70, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 75,
    0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 79, 80, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0,
    83, 0, 84, 0, 0, 0, 85, 0, 86, 0, 0, 0, 87, 0, 88, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0,
    0, 93, 0, 94, 0, 0, 95, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0,
    0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105,
    0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0,
    0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 121, 0, 122, 0, 0,
    0, 0, 0, 0, 0, 0, 123, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127,
    0, 128, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 133, 0, 134, 0, 0, 135, 0, 136,
    0, 0, 0, 137, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140,
    141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 144, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 149, 0,
    150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 154, 0, 155, 156, 0, 157, 0, 158, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 162, 0, 163, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0,
    174, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 0, 180, 0, 0, 181, 0, 182, 0, 183, 0, 0, 184, 0, 0,
    185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0,
    0, 0, 193, 0, 194, 0, 0, 195, 0, 0, 0, 0, 196, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 200, 0, 0, 201, 0, 202, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 206, 0, 0, 207, 0, 208, 0, 0, 0,
    209, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 215, 0, 216, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0,
    0, 0, 0, 219, 220, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 227, 0, 0,
    0, 228, 0, 0, 229, 0, 0, 0, 230, 231, 0, 232, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 236, 0, 237, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 240, 0, 0, 241, 0, 0, 0, 242, 0, 0, 243, 0, 244, 0, 0, 0, 245, 0, 0, 246,
    0, 247, 0, 0, 248, 0, 249, 0, 0, 250, 251, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255,
    0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260,
};
void recomp_unit_0416_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089A4000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0416[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089A4000;
    case 2u: goto L_089A4008;
    case 3u: goto L_089A4010;
    case 4u: goto L_089A4018;
    case 5u: goto L_089A401C;
    case 6u: goto L_089A4028;
    case 7u: goto L_089A4044;
    case 8u: goto L_089A4050;
    case 9u: goto L_089A4060;
    case 10u: goto L_089A4078;
    case 11u: goto L_089A4084;
    case 12u: goto L_089A408C;
    case 13u: goto L_089A4098;
    case 14u: goto L_089A40A0;
    case 15u: goto L_089A40B4;
    case 16u: goto L_089A40BC;
    case 17u: goto L_089A40CC;
    case 18u: goto L_089A40D4;
    case 19u: goto L_089A40E8;
    case 20u: goto L_089A40F8;
    case 21u: goto L_089A4104;
    case 22u: goto L_089A4110;
    case 23u: goto L_089A4120;
    case 24u: goto L_089A4130;
    case 25u: goto L_089A4138;
    case 26u: goto L_089A4140;
    case 27u: goto L_089A4148;
    case 28u: goto L_089A414C;
    case 29u: goto L_089A415C;
    case 30u: goto L_089A4168;
    case 31u: goto L_089A4170;
    case 32u: goto L_089A418C;
    case 33u: goto L_089A4194;
    case 34u: goto L_089A41AC;
    case 35u: goto L_089A41B8;
    case 36u: goto L_089A41C4;
    case 37u: goto L_089A41CC;
    case 38u: goto L_089A41D4;
    case 39u: goto L_089A41EC;
    case 40u: goto L_089A41F8;
    case 41u: goto L_089A4200;
    case 42u: goto L_089A420C;
    case 43u: goto L_089A4214;
    case 44u: goto L_089A421C;
    case 45u: goto L_089A422C;
    case 46u: goto L_089A4238;
    case 47u: goto L_089A4244;
    case 48u: goto L_089A4250;
    case 49u: goto L_089A4258;
    case 50u: goto L_089A4264;
    case 51u: goto L_089A426C;
    case 52u: goto L_089A42A0;
    case 53u: goto L_089A42B8;
    case 54u: goto L_089A42C0;
    case 55u: goto L_089A42C4;
    case 56u: goto L_089A42DC;
    case 57u: goto L_089A42EC;
    case 58u: goto L_089A42F8;
    case 59u: goto L_089A4304;
    case 60u: goto L_089A4314;
    case 61u: goto L_089A431C;
    case 62u: goto L_089A4330;
    case 63u: goto L_089A4340;
    case 64u: goto L_089A4354;
    case 65u: goto L_089A4374;
    case 66u: goto L_089A4380;
    case 67u: goto L_089A4388;
    case 68u: goto L_089A4390;
    case 69u: goto L_089A439C;
    case 70u: goto L_089A43A4;
    case 71u: goto L_089A43AC;
    case 72u: goto L_089A43C4;
    case 73u: goto L_089A43DC;
    case 74u: goto L_089A43F8;
    case 75u: goto L_089A43FC;
    case 76u: goto L_089A4414;
    case 77u: goto L_089A4428;
    case 78u: goto L_089A4438;
    case 79u: goto L_089A444C;
    case 80u: goto L_089A4450;
    case 81u: goto L_089A4458;
    case 82u: goto L_089A4474;
    case 83u: goto L_089A4480;
    case 84u: goto L_089A4488;
    case 85u: goto L_089A4498;
    case 86u: goto L_089A44A0;
    case 87u: goto L_089A44B0;
    case 88u: goto L_089A44B8;
    case 89u: goto L_089A44C0;
    case 90u: goto L_089A44C8;
    case 91u: goto L_089A44E4;
    case 92u: goto L_089A44F0;
    case 93u: goto L_089A4504;
    case 94u: goto L_089A450C;
    case 95u: goto L_089A4518;
    case 96u: goto L_089A4520;
    case 97u: goto L_089A452C;
    case 98u: goto L_089A4568;
    case 99u: goto L_089A4588;
    case 100u: goto L_089A45B0;
    case 101u: goto L_089A45C0;
    case 102u: goto L_089A45CC;
    case 103u: goto L_089A45DC;
    case 104u: goto L_089A45EC;
    case 105u: goto L_089A45FC;
    case 106u: goto L_089A460C;
    case 107u: goto L_089A461C;
    case 108u: goto L_089A4638;
    case 109u: goto L_089A4640;
    case 110u: goto L_089A464C;
    case 111u: goto L_089A466C;
    case 112u: goto L_089A46B4;
    case 113u: goto L_089A46E8;
    case 114u: goto L_089A4704;
    case 115u: goto L_089A471C;
    case 116u: goto L_089A4728;
    case 117u: goto L_089A4734;
    case 118u: goto L_089A4740;
    case 119u: goto L_089A475C;
    case 120u: goto L_089A4764;
    case 121u: goto L_089A476C;
    case 122u: goto L_089A4774;
    case 123u: goto L_089A4798;
    case 124u: goto L_089A479C;
    case 125u: goto L_089A47D0;
    case 126u: goto L_089A47D8;
    case 127u: goto L_089A47FC;
    case 128u: goto L_089A4804;
    case 129u: goto L_089A4814;
    case 130u: goto L_089A481C;
    case 131u: goto L_089A484C;
    case 132u: goto L_089A4858;
    case 133u: goto L_089A4860;
    case 134u: goto L_089A4868;
    case 135u: goto L_089A4874;
    case 136u: goto L_089A487C;
    case 137u: goto L_089A488C;
    case 138u: goto L_089A4890;
    case 139u: goto L_089A48AC;
    case 140u: goto L_089A48FC;
    case 141u: goto L_089A4900;
    case 142u: goto L_089A4928;
    case 143u: goto L_089A4930;
    case 144u: goto L_089A4938;
    case 145u: goto L_089A4940;
    case 146u: goto L_089A4958;
    case 147u: goto L_089A4964;
    case 148u: goto L_089A4970;
    case 149u: goto L_089A4978;
    case 150u: goto L_089A4980;
    case 151u: goto L_089A49A0;
    case 152u: goto L_089A49A8;
    case 153u: goto L_089A49CC;
    case 154u: goto L_089A49D0;
    case 155u: goto L_089A49D8;
    case 156u: goto L_089A49DC;
    case 157u: goto L_089A49E4;
    case 158u: goto L_089A49EC;
    case 159u: goto L_089A4A18;
    case 160u: goto L_089A4A30;
    case 161u: goto L_089A4A38;
    case 162u: goto L_089A4A4C;
    case 163u: goto L_089A4A54;
    case 164u: goto L_089A4A5C;
    case 165u: goto L_089A4A68;
    case 166u: goto L_089A4A74;
    case 167u: goto L_089A4A9C;
    case 168u: goto L_089A4AAC;
    case 169u: goto L_089A4AB8;
    case 170u: goto L_089A4AC4;
    case 171u: goto L_089A4AD4;
    case 172u: goto L_089A4AE0;
    case 173u: goto L_089A4AEC;
    case 174u: goto L_089A4B00;
    case 175u: goto L_089A4B0C;
    case 176u: goto L_089A4B18;
    case 177u: goto L_089A4B24;
    case 178u: goto L_089A4B30;
    case 179u: goto L_089A4B3C;
    case 180u: goto L_089A4B4C;
    case 181u: goto L_089A4B58;
    case 182u: goto L_089A4B60;
    case 183u: goto L_089A4B68;
    case 184u: goto L_089A4B74;
    case 185u: goto L_089A4B80;
    case 186u: goto L_089A4BA8;
    case 187u: goto L_089A4BB0;
    case 188u: goto L_089A4BC8;
    case 189u: goto L_089A4BD0;
    case 190u: goto L_089A4BDC;
    case 191u: goto L_089A4BE8;
    case 192u: goto L_089A4BF4;
    case 193u: goto L_089A4C08;
    case 194u: goto L_089A4C10;
    case 195u: goto L_089A4C1C;
    case 196u: goto L_089A4C30;
    case 197u: goto L_089A4C38;
    case 198u: goto L_089A4C44;
    case 199u: goto L_089A4C50;
    case 200u: goto L_089A4C88;
    case 201u: goto L_089A4C94;
    case 202u: goto L_089A4C9C;
    case 203u: goto L_089A4CA0;
    case 204u: goto L_089A4CC8;
    case 205u: goto L_089A4CD4;
    case 206u: goto L_089A4CDC;
    case 207u: goto L_089A4CE8;
    case 208u: goto L_089A4CF0;
    case 209u: goto L_089A4D00;
    case 210u: goto L_089A4D08;
    case 211u: goto L_089A4D14;
    case 212u: goto L_089A4D20;
    case 213u: goto L_089A4D3C;
    case 214u: goto L_089A4D44;
    case 215u: goto L_089A4D4C;
    case 216u: goto L_089A4D54;
    case 217u: goto L_089A4D60;
    case 218u: goto L_089A4D68;
    case 219u: goto L_089A4D8C;
    case 220u: goto L_089A4D90;
    case 221u: goto L_089A4DA8;
    case 222u: goto L_089A4DB0;
    case 223u: goto L_089A4DBC;
    case 224u: goto L_089A4DC8;
    case 225u: goto L_089A4DE4;
    case 226u: goto L_089A4DEC;
    case 227u: goto L_089A4DF4;
    case 228u: goto L_089A4E04;
    case 229u: goto L_089A4E10;
    case 230u: goto L_089A4E20;
    case 231u: goto L_089A4E24;
    case 232u: goto L_089A4E2C;
    case 233u: goto L_089A4E34;
    case 234u: goto L_089A4E44;
    case 235u: goto L_089A4E5C;
    case 236u: goto L_089A4E64;
    case 237u: goto L_089A4E6C;
    case 238u: goto L_089A4E98;
    case 239u: goto L_089A4EA8;
    case 240u: goto L_089A4EB0;
    case 241u: goto L_089A4EBC;
    case 242u: goto L_089A4ECC;
    case 243u: goto L_089A4ED8;
    case 244u: goto L_089A4EE0;
    case 245u: goto L_089A4EF0;
    case 246u: goto L_089A4EFC;
    case 247u: goto L_089A4F04;
    case 248u: goto L_089A4F10;
    case 249u: goto L_089A4F18;
    case 250u: goto L_089A4F24;
    case 251u: goto L_089A4F28;
    case 252u: goto L_089A4F44;
    case 253u: goto L_089A4F4C;
    case 254u: goto L_089A4F74;
    case 255u: goto L_089A4F7C;
    case 256u: goto L_089A4FA0;
    case 257u: goto L_089A4FC8;
    case 258u: goto L_089A4FD0;
    case 259u: goto L_089A4FE8;
    case 260u: goto L_089A4FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089A4000:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[5] & 65535u);
      if (branch_taken) {
          goto L_089A4170;
      }
      goto L_089A4008;
    }
L_089A4008:
    aot_gpr[31] = (0x089A4010u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 172u, 0x089A3AA4u>(ctx, &aot_mem) && ctx.pc == 0x089A4010u) goto L_089A4010;
    return;
L_089A4010:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 237u, 0x089A3F58u>(ctx, &aot_mem); return;
      }
      goto L_089A4018;
    }
L_089A4018:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(64)));
    goto L_089A401C;
L_089A401C:
    aot_gpr[2] = (aot_gpr[17] < static_cast<std::uint32_t>(1604) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 236u, 0x089A3F54u>(ctx, &aot_mem); return;
      }
      goto L_089A4028;
    }
L_089A4028:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(140)));
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(92));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[30] = (aot_gpr[2] + static_cast<std::uint32_t>(140));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[16] = (aot_gpr[2] + static_cast<std::uint32_t>(152));
      if (branch_taken) {
          goto L_089A41D4;
      }
      goto L_089A4044;
    }
L_089A4044:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          goto L_089A4354;
      }
      goto L_089A4050;
    }
L_089A4050:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089A4060;
L_089A4060:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(7));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1604) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
        (void)rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 237u, 0x089A3F58u>(ctx, &aot_mem); return;
    }
    goto L_089A4078;
L_089A4078:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089A4084u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 135u, 0x089A38C4u>(ctx, &aot_mem) && ctx.pc == 0x089A4084u) goto L_089A4084;
    return;
L_089A4084:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 237u, 0x089A3F58u>(ctx, &aot_mem); return;
      }
      goto L_089A408C;
    }
L_089A408C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x089A4098u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 33u, 0x08A4317Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4098u) goto L_089A4098;
    return;
L_089A4098:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 237u, 0x089A3F58u>(ctx, &aot_mem); return;
      }
      goto L_089A40A0;
    }
L_089A40A0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (aot_gpr[2] + aot_gpr[3]);
      if (branch_taken) {
          goto L_089A4428;
      }
      goto L_089A40B4;
    }
L_089A40B4:
    aot_gpr[31] = (0x089A40BCu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A40BCu) goto L_089A40BC;
    return;
L_089A40BC:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[2] = (aot_gpr[2] << 3u);
      if (branch_taken) {
          goto L_089A40F8;
      }
      goto L_089A40CC;
    }
L_089A40CC:
    aot_gpr[16] = (aot_gpr[19] + aot_gpr[2]);
    aot_gpr[18] = (0u + 0u);
    goto L_089A40D4;
L_089A40D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089A40E8u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089A40E8u) goto L_089A40E8;
    return;
L_089A40E8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = aot_gpr[20] != aot_gpr[18];
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[3]);
      if (branch_taken) {
          goto L_089A40D4;
      }
      goto L_089A40F8;
    }
L_089A40F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089A4104;
L_089A4104:
    aot_gpr[2] = (aot_gpr[23] & 128u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 237u, 0x089A3F58u>(ctx, &aot_mem); return;
      }
      goto L_089A4110;
    }
L_089A4110:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089A4414;
      }
      goto L_089A4120;
    }
L_089A4120:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(96)));
    aot_gpr[3] = (0u | 65535u);
    if (aot_gpr[2] == aot_gpr[3]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_089A4414;
    }
    goto L_089A4130;
L_089A4130:
    if (aot_gpr[22] == aot_gpr[2]) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_089A414C;
    }
    goto L_089A4138;
L_089A4138:
    { const bool branch_taken = aot_gpr[22] == aot_gpr[3];
    aot_gpr[2] = (0u | 65534u);
      if (branch_taken) {
          goto L_089A4148;
      }
      goto L_089A4140;
    }
L_089A4140:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(96), aot_gpr[2]);
    goto L_089A4148;
L_089A4148:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089A414C;
L_089A414C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(92), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 237u, 0x089A3F58u>(ctx, &aot_mem); return;
L_089A415C:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 245u, 0x089A3FD4u>(ctx, &aot_mem); return;
      }
      goto L_089A4168;
    }
L_089A4168:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[5] & 65535u);
    goto L_089A4170;
L_089A4170:
    aot_gpr[3] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(69));
    aot_gpr[3] = ((aot_gpr[3] & ~0x0000003Fu) | ((0u & 0x0000003Fu) << 0u));
    aot_gpr[2] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(1401) ? 1u : 0u);
      if (branch_taken) {
          goto L_089A4008;
      }
      goto L_089A418C;
    }
L_089A418C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4008;
      }
      goto L_089A4194;
    }
L_089A4194:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(152));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(152), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), 0u);
    goto L_089A4018;
L_089A41AC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(86)));
    { const bool branch_taken = aot_gpr[22] != aot_gpr[2];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 247u, 0x089A3FF4u>(ctx, &aot_mem); return;
      }
      goto L_089A41B8;
    }
L_089A41B8:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(1401) ? 1u : 0u);
      if (branch_taken) {
          goto L_089A4008;
      }
      goto L_089A41C4;
    }
L_089A41C4:
    if (aot_gpr[2] != 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(64)));
        goto L_089A401C;
    }
    goto L_089A41CC;
L_089A41CC:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[3] ? 1u : 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 248u, 0x089A3FF8u>(ctx, &aot_mem); return;
L_089A41D4:
    aot_gpr[2] = (aot_gpr[20] + static_cast<std::uint32_t>(-51));
    aot_gpr[3] = (aot_gpr[17] & 65535u);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[3]));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089A43C4;
      }
      goto L_089A41EC;
    }
L_089A41EC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(54));
    { const bool branch_taken = aot_gpr[20] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_089A43C4;
      }
      goto L_089A41F8;
    }
L_089A41F8:
    { const bool branch_taken = aot_gpr[20] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
      if (branch_taken) {
          goto L_089A43C4;
      }
      goto L_089A4200;
    }
L_089A4200:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[20] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(51));
      if (branch_taken) {
          goto L_089A43DC;
      }
      goto L_089A420C;
    }
L_089A420C:
    { const bool branch_taken = aot_gpr[20] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(27));
      if (branch_taken) {
          goto L_089A43DC;
      }
      goto L_089A4214;
    }
L_089A4214:
    { const bool branch_taken = aot_gpr[20] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_089A43DC;
      }
      goto L_089A421C;
    }
L_089A421C:
    aot_gpr[2] = (aot_gpr[18] + static_cast<std::uint32_t>(7));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1604) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
        (void)rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 237u, 0x089A3F58u>(ctx, &aot_mem); return;
    }
    goto L_089A422C;
L_089A422C:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089A4238u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 135u, 0x089A38C4u>(ctx, &aot_mem) && ctx.pc == 0x089A4238u) goto L_089A4238;
    return;
L_089A4238:
    aot_gpr[17] = (aot_gpr[18] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 237u, 0x089A3F58u>(ctx, &aot_mem); return;
      }
      goto L_089A4244;
    }
L_089A4244:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x089A4250u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 78u, 0x08A43404u>(ctx, &aot_mem) && ctx.pc == 0x089A4250u) goto L_089A4250;
    return;
L_089A4250:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 237u, 0x089A3F58u>(ctx, &aot_mem); return;
      }
      goto L_089A4258;
    }
L_089A4258:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x089A4264u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 33u, 0x08A4317Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4264u) goto L_089A4264;
    return;
L_089A4264:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 237u, 0x089A3F58u>(ctx, &aot_mem); return;
      }
      goto L_089A426C;
    }
L_089A426C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(3));
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000003u) | ((0u & 0x00000003u) << 0u));
    aot_gpr[5] = (aot_gpr[2] - aot_gpr[3]);
    if (aot_gpr[5] == 0u) {
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
        goto L_089A42C4;
    }
    goto L_089A42A0;
L_089A42A0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[31] = (0x089A42B8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 33u, 0x08A4317Cu>(ctx, &aot_mem) && ctx.pc == 0x089A42B8u) goto L_089A42B8;
    return;
L_089A42B8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 237u, 0x089A3F58u>(ctx, &aot_mem); return;
      }
      goto L_089A42C0;
    }
L_089A42C0:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    goto L_089A42C4;
L_089A42C4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (aot_gpr[20] & 255u);
    aot_gpr[5] = (aot_gpr[2] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[31] = (0x089A42DCu);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A42DCu) goto L_089A42DC;
    return;
L_089A42DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089A42ECu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A42ECu) goto L_089A42EC;
    return;
L_089A42EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[21] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089A4474;
      }
      goto L_089A42F8;
    }
L_089A42F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089A4488;
      }
      goto L_089A4304;
    }
L_089A4304:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[2] = (aot_gpr[2] << 3u);
      if (branch_taken) {
          goto L_089A4340;
      }
      goto L_089A4314;
    }
L_089A4314:
    aot_gpr[16] = (aot_gpr[19] + aot_gpr[2]);
    aot_gpr[19] = (0u + 0u);
    goto L_089A431C;
L_089A431C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089A4330u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089A4330u) goto L_089A4330;
    return;
L_089A4330:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = aot_gpr[20] != aot_gpr[19];
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
      if (branch_taken) {
          goto L_089A431C;
      }
      goto L_089A4340;
    }
L_089A4340:
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[18]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089A4104;
L_089A4354:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[17]));
    aot_gpr[2] = (aot_gpr[20] + static_cast<std::uint32_t>(-51));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(aot_gpr[20]));
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(86), static_cast<std::uint16_t>(aot_gpr[22]));
      if (branch_taken) {
          goto L_089A43F8;
      }
      goto L_089A4374;
    }
L_089A4374:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(54));
    { const bool branch_taken = aot_gpr[20] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_089A43F8;
      }
      goto L_089A4380;
    }
L_089A4380:
    if (aot_gpr[20] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_089A43FC;
    }
    goto L_089A4388;
L_089A4388:
    aot_gpr[17] = (aot_gpr[3] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    goto L_089A4390;
L_089A4390:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[20] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(51));
      if (branch_taken) {
          goto L_089A43AC;
      }
      goto L_089A439C;
    }
L_089A439C:
    { const bool branch_taken = aot_gpr[20] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(27));
      if (branch_taken) {
          goto L_089A43AC;
      }
      goto L_089A43A4;
    }
L_089A43A4:
    { const bool branch_taken = aot_gpr[20] != aot_gpr[2];
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          goto L_089A4060;
      }
      goto L_089A43AC;
    }
L_089A43AC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(2));
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089A4060;
L_089A43C4:
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_089A4200;
L_089A43DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089A421C;
L_089A43F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_089A43FC;
L_089A43FC:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089A4390;
L_089A4414:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(96), aot_gpr[22]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(92), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 237u, 0x089A3F58u>(ctx, &aot_mem); return;
L_089A4428:
    aot_gpr[20] = (aot_gpr[20] & 255u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089A4438u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A4438u) goto L_089A4438;
    return;
L_089A4438:
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089A44B8;
      }
      goto L_089A444C;
    }
L_089A444C:
    aot_gpr[21] = (aot_gpr[4] + 0u);
    goto L_089A4450;
L_089A4450:
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089A44A0;
      }
      goto L_089A4458;
    }
L_089A4458:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(aot_gpr[20]));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089A40B4;
L_089A4474:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089A4480u);
    aot_gpr[5] = (aot_gpr[23] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A4480u) goto L_089A4480;
    return;
L_089A4480:
    aot_gpr[17] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
    goto L_089A42F8;
L_089A4488:
    aot_gpr[5] = (aot_gpr[22] & 65535u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089A4498u);
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(86), static_cast<std::uint16_t>(aot_gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A4498u) goto L_089A4498;
    return;
L_089A4498:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(2));
    goto L_089A4304;
L_089A44A0:
    aot_gpr[5] = (aot_gpr[22] & 65535u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089A44B0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(86), static_cast<std::uint16_t>(aot_gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A44B0u) goto L_089A44B0;
    return;
L_089A44B0:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(2));
    goto L_089A4458;
L_089A44B8:
    aot_gpr[31] = (0x089A44C0u);
    aot_gpr[5] = (aot_gpr[23] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A44C0u) goto L_089A44C0;
    return;
L_089A44C0:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
    goto L_089A4450;
L_089A44C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    aot_gpr[3] = (aot_gpr[7] + 0u);
    aot_gpr[10] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[31]);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[8] = (aot_gpr[9] + 0u);
      if (branch_taken) {
          goto L_089A4518;
      }
      goto L_089A44E4;
    }
L_089A44E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), 0u);
      if (branch_taken) {
          goto L_089A4504;
      }
      goto L_089A44F0;
    }
L_089A44F0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[10]);
    goto L_089A4504;
L_089A4504:
    aot_gpr[31] = (0x089A450Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 234u, 0x089A3F00u>(ctx, &aot_mem) && ctx.pc == 0x089A450Cu) goto L_089A450C;
    return;
L_089A450C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4518:
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A44E4;
      }
      goto L_089A4520;
    }
L_089A4520:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A452C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (2217u << 16u);
    aot_gpr[6] = (aot_gpr[19] + static_cast<std::uint32_t>(16272));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A4588;
      }
      goto L_089A4568;
    }
L_089A4568:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4588:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(16272), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[31] = (0x089A45B0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A45B0u) goto L_089A45B0;
    return;
L_089A45B0:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089A45CC;
      }
      goto L_089A45C0;
    }
L_089A45C0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(156)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A45CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A45CCu) goto L_089A45CC;
    return;
L_089A45CC:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16276));
    aot_gpr[31] = (0x089A45DCu);
    aot_gpr[5] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A45DCu) goto L_089A45DC;
    return;
L_089A45DC:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16280));
    aot_gpr[31] = (0x089A45ECu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 110u, 0x0898F700u>(ctx, &aot_mem) && ctx.pc == 0x089A45ECu) goto L_089A45EC;
    return;
L_089A45EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[31] = (0x089A45FCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16296));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A45FCu) goto L_089A45FC;
    return;
L_089A45FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[31] = (0x089A460Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16298));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A460Cu) goto L_089A460C;
    return;
L_089A460C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[31] = (0x089A461Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16300));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A461Cu) goto L_089A461C;
    return;
L_089A461C:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[7] = (aot_gpr[19] + static_cast<std::uint32_t>(16272));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(22));
    aot_gpr[6] = (0u | 65535u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089A4638u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(192));
    goto L_089A44C8;
L_089A4638:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A4568;
      }
      goto L_089A4640;
    }
L_089A4640:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089A464Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem) && ctx.pc == 0x089A464Cu) goto L_089A464C;
    return;
L_089A464C:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A466C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_089A46E8;
      }
      goto L_089A46B4;
    }
L_089A46B4:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A46E8:
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(102));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089A4704u);
    aot_gpr[20] = (2217u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A4704u) goto L_089A4704;
    return;
L_089A4704:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(14476)));
    aot_gpr[18] = (aot_gpr[29] + 0u);
    aot_gpr[22] = (aot_gpr[19] + static_cast<std::uint32_t>(72));
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089A4728;
      }
      goto L_089A471C;
    }
L_089A471C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(156)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A4728u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A4728u) goto L_089A4728;
    return;
L_089A4728:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089A4734u);
    aot_gpr[5] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A4734u) goto L_089A4734;
    return;
L_089A4734:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[7] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089A4804;
      }
      goto L_089A4740;
    }
L_089A4740:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 65535u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = ((aot_gpr[4] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A475Cu);
    aot_gpr[6] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A475Cu) goto L_089A475C;
    return;
L_089A475C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u | 52016u);
      if (branch_taken) {
          goto L_089A46B4;
      }
      goto L_089A4764;
    }
L_089A4764:
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_089A4774;
      }
      goto L_089A476C;
    }
L_089A476C:
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[5] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089A47D0;
      }
      goto L_089A4774;
    }
L_089A4774:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(21));
    if (aot_gpr[2] == 0u) aot_gpr[5] = (0u);
    aot_gpr[7] = (aot_gpr[18] + 0u);
    aot_gpr[8] = (aot_gpr[22] + 0u);
    aot_gpr[6] = (0u | 65535u);
    aot_gpr[31] = (0x089A4798u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(192));
    goto L_089A44C8;
L_089A4798:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_089A479C;
L_089A479C:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A47D0:
    aot_gpr[31] = (0x089A47D8u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089A47D8u) goto L_089A47D8;
    return;
L_089A47D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(21));
    if (aot_gpr[2] == 0u) aot_gpr[5] = (0u);
    aot_gpr[7] = (aot_gpr[18] + 0u);
    aot_gpr[8] = (aot_gpr[22] + 0u);
    aot_gpr[6] = (0u | 65535u);
    aot_gpr[31] = (0x089A47FCu);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(192));
    goto L_089A44C8;
L_089A47FC:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_089A479C;
L_089A4804:
    aot_gpr[4] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089A4814u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4814u) goto L_089A4814;
    return;
L_089A4814:
    // nop
    goto L_089A4764;
L_089A481C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x089A484Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem) && ctx.pc == 0x089A484Cu) goto L_089A484C;
    return;
L_089A484C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (aot_gpr[3] + static_cast<std::uint32_t>(92));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_089A4858;
L_089A4858:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089A4890;
      }
      goto L_089A4860;
    }
L_089A4860:
    aot_gpr[31] = (0x089A4868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 80u, 0x089A3534u>(ctx, &aot_mem) && ctx.pc == 0x089A4868u) goto L_089A4868;
    return;
L_089A4868:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089A4890;
      }
      goto L_089A4874;
    }
L_089A4874:
    aot_gpr[31] = (0x089A487Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 172u, 0x08992B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A487Cu) goto L_089A487C;
    return;
L_089A487C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[18] < aot_gpr[3] ? 1u : 0u);
    if (aot_gpr[3] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
        goto L_089A4858;
    }
    goto L_089A488C;
L_089A488C:
    aot_gpr[2] = (0u | 52005u);
    goto L_089A4890;
L_089A4890:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
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
L_089A48AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] & 127u);
    aot_gpr[6] = ((aot_gpr[6] >> 7u) & 0x00000001u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_089A4928;
      }
      goto L_089A48FC;
    }
L_089A48FC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_089A4900;
L_089A4900:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4928:
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[2] = (aot_gpr[19] < static_cast<std::uint32_t>(61) ? 1u : 0u);
      if (branch_taken) {
          goto L_089A49DC;
      }
      goto L_089A4930;
    }
L_089A4930:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089A49DC;
      }
      goto L_089A4938;
    }
L_089A4938:
    aot_gpr[31] = (0x089A4940u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089A4940u) goto L_089A4940;
    return;
L_089A4940:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[21] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[7] = (0u | 52016u);
      if (branch_taken) {
          goto L_089A48FC;
      }
      goto L_089A4958;
    }
L_089A4958:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (0u | 52017u);
      if (branch_taken) {
          goto L_089A48FC;
      }
      goto L_089A4964;
    }
L_089A4964:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(51));
      if (branch_taken) {
          goto L_089A49A8;
      }
      goto L_089A4970;
    }
L_089A4970:
    { const bool branch_taken = aot_gpr[19] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(27));
      if (branch_taken) {
          goto L_089A49A8;
      }
      goto L_089A4978;
    }
L_089A4978:
    { const bool branch_taken = aot_gpr[19] == aot_gpr[2];
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089A49A8;
      }
      goto L_089A4980;
    }
L_089A4980:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 65535u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = ((aot_gpr[4] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    aot_gpr[7] = (aot_gpr[21] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A49A0u);
    aot_gpr[8] = (aot_gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A49A0u) goto L_089A49A0;
    return;
L_089A49A0:
    aot_gpr[7] = (0u | 50500u);
    goto L_089A49D0;
L_089A49A8:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[17] + static_cast<std::uint32_t>(6));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = ((aot_gpr[4] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    aot_gpr[5] = (0u | 65535u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A49CCu);
    aot_gpr[8] = (aot_gpr[20] + static_cast<std::uint32_t>(-2));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A49CCu) goto L_089A49CC;
    return;
L_089A49CC:
    aot_gpr[7] = (0u | 50500u);
    goto L_089A49D0;
L_089A49D0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089A48FC;
      }
      goto L_089A49D8;
    }
L_089A49D8:
    aot_gpr[2] = (aot_gpr[19] < static_cast<std::uint32_t>(61) ? 1u : 0u);
    goto L_089A49DC;
L_089A49DC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          goto L_089A4A18;
      }
      goto L_089A49E4;
    }
L_089A49E4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_089A49EC;
L_089A49EC:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4A18:
    aot_gpr[2] = (aot_gpr[19] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-16528));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4A30:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(19536));
    goto L_089A4A38;
L_089A4A38:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A4A4Cu);
    aot_gpr[7] = (aot_gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A4A4Cu) goto L_089A4A4C;
    return;
L_089A4A4C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_089A49EC;
      }
      goto L_089A4A54;
    }
L_089A4A54:
    aot_gpr[7] = (0u + 0u);
    goto L_089A48FC;
L_089A4A5C:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(20584));
    goto L_089A4A38;
L_089A4A68:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(10036));
    goto L_089A4A38;
L_089A4A74:
    aot_gpr[16] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(14476)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A4A9Cu);
    aot_gpr[4] = ((aot_gpr[4] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A4A9Cu) goto L_089A4A9C;
    return;
L_089A4A9C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(14476)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A4AACu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(184)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A4AACu) goto L_089A4AAC;
    return;
L_089A4AAC:
    aot_gpr[7] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(188), aot_gpr[2]);
    goto L_089A48FC;
L_089A4AB8:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(21284));
    goto L_089A4A38;
L_089A4AC4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_089A48FC;
      }
      goto L_089A4AD4;
    }
L_089A4AD4:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(20076));
    goto L_089A4A38;
L_089A4AE0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_089A48FC;
      }
      goto L_089A4AEC;
    }
L_089A4AEC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    goto L_089A48FC;
L_089A4B00:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(9184));
    goto L_089A4A38;
L_089A4B0C:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(11312));
    goto L_089A4A38;
L_089A4B18:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(9780));
    goto L_089A4A38;
L_089A4B24:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-312));
    goto L_089A4A38;
L_089A4B30:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(8616));
    goto L_089A4A38;
L_089A4B3C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_089A48FC;
      }
      goto L_089A4B4C;
    }
L_089A4B4C:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(10236));
    goto L_089A4A38;
L_089A4B58:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_089A48FC;
      }
      goto L_089A4B60;
    }
L_089A4B60:
    aot_gpr[21] = (0u + 0u);
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    goto L_089A4B68;
L_089A4B68:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089A4B74u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4B74u) goto L_089A4B74;
    return;
L_089A4B74:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089A4B80u);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A4B80u) goto L_089A4B80;
    return;
L_089A4B80:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(3));
    aot_gpr[2] = (aot_gpr[21] + static_cast<std::uint32_t>(3));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[19] + 0u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089A4BA8u);
    aot_gpr[17] = (aot_gpr[2] & 65535u);
    goto L_089A48AC;
L_089A4BA8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_089A49EC;
      }
      goto L_089A4BB0;
    }
L_089A4BB0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[3] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[21] = (aot_gpr[3] & 65535u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[19] + aot_gpr[2]);
      if (branch_taken) {
          goto L_089A4B68;
      }
      goto L_089A4BC8;
    }
L_089A4BC8:
    aot_gpr[7] = (0u + 0u);
    goto L_089A4900;
L_089A4BD0:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(20384));
    goto L_089A4A38;
L_089A4BDC:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(21048));
    goto L_089A4A38;
L_089A4BE8:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-380));
    goto L_089A4A38;
L_089A4BF4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089A4C08u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 78u, 0x089A059Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4C08u) goto L_089A4C08;
    return;
L_089A4C08:
    // nop
    goto L_089A4A4C;
L_089A4C10:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-516));
    goto L_089A4A38;
L_089A4C1C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089A4C30u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(31));
    if (rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 75u, 0x089A0534u>(ctx, &aot_mem) && ctx.pc == 0x089A4C30u) goto L_089A4C30;
    return;
L_089A4C30:
    // nop
    goto L_089A4A4C;
L_089A4C38:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(22196));
    goto L_089A4A38;
L_089A4C44:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(26992));
    goto L_089A4A38;
L_089A4C50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
      if (branch_taken) {
          goto L_089A4D54;
      }
      goto L_089A4C88;
    }
L_089A4C88:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[2];
    aot_gpr[3] = (0u | 52000u);
      if (branch_taken) {
          goto L_089A4CA0;
      }
      goto L_089A4C94;
    }
L_089A4C94:
    if (aot_gpr[7] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_089A4CC8;
    }
    goto L_089A4C9C;
L_089A4C9C:
    aot_gpr[3] = (0u | 52000u);
    goto L_089A4CA0;
L_089A4CA0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4CC8:
    aot_gpr[17] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089A4CD4u);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0414_entry, 414u, 203u, 0x089A2BB0u>(ctx, &aot_mem) && ctx.pc == 0x089A4CD4u) goto L_089A4CD4;
    return;
L_089A4CD4:
    aot_gpr[21] = (aot_gpr[2] + 0u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    goto L_089A4CDC;
L_089A4CDC:
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089A4C9C;
      }
      goto L_089A4CE8;
    }
L_089A4CE8:
    aot_gpr[31] = (0x089A4CF0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A4CF0u) goto L_089A4CF0;
    return;
L_089A4CF0:
    aot_gpr[3] = (aot_gpr[20] + static_cast<std::uint32_t>(18));
    aot_gpr[3] = (aot_gpr[18] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A4C9C;
      }
      goto L_089A4D00;
    }
L_089A4D00:
    aot_gpr[31] = (0x089A4D08u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(108));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 112u, 0x0898F738u>(ctx, &aot_mem) && ctx.pc == 0x089A4D08u) goto L_089A4D08;
    return;
L_089A4D08:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[3];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(11));
      if (branch_taken) {
          goto L_089A4DF4;
      }
      goto L_089A4D14;
    }
L_089A4D14:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
      if (branch_taken) {
          goto L_089A4D4C;
      }
      goto L_089A4D20;
    }
L_089A4D20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (0u + 0u);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089A4D3Cu);
    aot_gpr[6] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A4D3Cu) goto L_089A4D3C;
    return;
L_089A4D3C:
    aot_gpr[31] = (0x089A4D44u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0414_entry, 414u, 31u, 0x089A2168u>(ctx, &aot_mem) && ctx.pc == 0x089A4D44u) goto L_089A4D44;
    return;
L_089A4D44:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u | 52003u);
      if (branch_taken) {
          goto L_089A4CA0;
      }
      goto L_089A4D4C;
    }
L_089A4D4C:
    aot_gpr[3] = (0u + 0u);
    goto L_089A4CA0;
L_089A4D54:
    aot_gpr[2] = (aot_gpr[7] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[6] + 0u);
      if (branch_taken) {
          goto L_089A4C9C;
      }
      goto L_089A4D60;
    }
L_089A4D60:
    aot_gpr[31] = (0x089A4D68u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A4D68u) goto L_089A4D68;
    return;
L_089A4D68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(65)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (aot_gpr[4] & 4u);
    aot_gpr[20] = (aot_gpr[17] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[3]));
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_089A4DE4;
      }
      goto L_089A4D8C;
    }
L_089A4D8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
    goto L_089A4D90;
L_089A4D90:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(33));
    aot_gpr[6] = (0u | 65535u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089A4DA8u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(192));
    goto L_089A44C8;
L_089A4DA8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A4CA0;
      }
      goto L_089A4DB0;
    }
L_089A4DB0:
    aot_gpr[2] = (aot_gpr[18] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (0u | 52000u);
        goto L_089A4CA0;
    }
    goto L_089A4DBC;
L_089A4DBC:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089A4DC8u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089A4DC8u) goto L_089A4DC8;
    return;
L_089A4DC8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(6));
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(6));
    aot_gpr[21] = (0u + 0u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(7));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(104), aot_gpr[2]);
    goto L_089A4CDC;
L_089A4DE4:
    aot_gpr[31] = (0x089A4DECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 19u, 0x0899312Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4DECu) goto L_089A4DEC;
    return;
L_089A4DEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
    goto L_089A4D90;
L_089A4DF4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(116), aot_gpr[2]);
      if (branch_taken) {
          goto L_089A4E10;
      }
      goto L_089A4E04;
    }
L_089A4E04:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(116), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), 0u);
    goto L_089A4E10;
L_089A4E10:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(180)));
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[17];
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089A4E44;
      }
      goto L_089A4E20;
    }
L_089A4E20:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_089A4E24;
L_089A4E24:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089A4E64;
      }
      goto L_089A4E2C;
    }
L_089A4E2C:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[17];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A4CA0;
      }
      goto L_089A4E34;
    }
L_089A4E34:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_089A4CA0;
L_089A4E44:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(100)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A4E5Cu);
    aot_gpr[4] = ((aot_gpr[4] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A4E5Cu) goto L_089A4E5C;
    return;
L_089A4E5C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_089A4E24;
L_089A4E64:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    goto L_089A4CA0;
L_089A4E6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089A4F24;
      }
      goto L_089A4E98;
    }
L_089A4E98:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (aot_gpr[7] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_089A4F24;
      }
      goto L_089A4EA8;
    }
L_089A4EA8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u | 52000u);
      if (branch_taken) {
          goto L_089A4F28;
      }
      goto L_089A4EB0;
    }
L_089A4EB0:
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[31] = (0x089A4EBCu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A4EBCu) goto L_089A4EBC;
    return;
L_089A4EBC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A4F24;
      }
      goto L_089A4ECC;
    }
L_089A4ECC:
    aot_gpr[2] = (aot_gpr[17] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u | 52000u);
      if (branch_taken) {
          goto L_089A4F28;
      }
      goto L_089A4ED8;
    }
L_089A4ED8:
    aot_gpr[31] = (0x089A4EE0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089A4EE0u) goto L_089A4EE0;
    return;
L_089A4EE0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(104)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_089A4F24;
      }
      goto L_089A4EF0;
    }
L_089A4EF0:
    aot_gpr[2] = (aot_gpr[17] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u | 52000u);
      if (branch_taken) {
          goto L_089A4F28;
      }
      goto L_089A4EFC;
    }
L_089A4EFC:
    aot_gpr[31] = (0x089A4F04u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A4F04u) goto L_089A4F04;
    return;
L_089A4F04:
    aot_gpr[3] = (aot_gpr[17] < static_cast<std::uint32_t>(24) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089A4F24;
      }
      goto L_089A4F10;
    }
L_089A4F10:
    aot_gpr[31] = (0x089A4F18u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(108));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 112u, 0x0898F738u>(ctx, &aot_mem) && ctx.pc == 0x089A4F18u) goto L_089A4F18;
    return;
L_089A4F18:
    aot_gpr[3] = (aot_gpr[17] < static_cast<std::uint32_t>(26) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089A4F44;
      }
      goto L_089A4F24;
    }
L_089A4F24:
    aot_gpr[3] = (0u | 52000u);
    goto L_089A4F28;
L_089A4F28:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4F44:
    aot_gpr[31] = (0x089A4F4Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A4F4Cu) goto L_089A4F4C;
    return;
L_089A4F4C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(23));
    aot_gpr[6] = (0u | 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
    aot_gpr[31] = (0x089A4F74u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(192));
    goto L_089A44C8;
L_089A4F74:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A4F28;
      }
      goto L_089A4F7C;
    }
L_089A4F7C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[3] + 0u);
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
L_089A4FA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[7] = (aot_gpr[7] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[3] = (0u | 52000u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 4u, 0x089A501Cu>(ctx, &aot_mem); return;
      }
      goto L_089A4FC8;
    }
L_089A4FC8:
    aot_gpr[31] = (0x089A4FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A4FD0u) goto L_089A4FD0;
    return;
L_089A4FD0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(116), aot_gpr[3]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 5u, 0x089A5034u>(ctx, &aot_mem); return;
      }
      goto L_089A4FE8;
    }
L_089A4FE8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0417_entry, 417u, 6u, 0x089A504Cu>(ctx, &aot_mem); return;
      }
      goto L_089A4FF8;
    }
L_089A4FF8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(116)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.pc = 0x089A5000u; return;
}

void recomp_unit_0416(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0416_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_416(Runtime &runtime) {
    runtime.register_generated_unit(416u, 0x089A4000u, 4096u, &recomp_unit_0416, &recomp_unit_0416_entry);
    runtime.register_function(0x089A4000u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4008u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4010u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4018u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A401Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4028u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4044u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4050u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4060u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4078u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4084u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A408Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4098u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A40A0u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A40B4u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A40BCu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A40CCu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A40D4u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A40E8u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A40F8u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4104u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4110u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4120u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4130u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4138u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4140u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4148u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A414Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A415Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4168u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4170u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A418Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4194u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A41ACu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A41B8u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A41C4u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A41CCu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A41D4u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A41ECu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A41F8u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4200u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A420Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4214u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A421Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A422Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4238u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4244u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4250u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4258u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4264u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A426Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A42A0u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A42B8u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A42C0u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A42C4u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A42DCu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A42ECu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A42F8u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4304u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4314u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A431Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4330u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4340u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4354u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4374u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4380u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4388u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4390u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A439Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A43A4u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A43ACu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A43C4u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A43DCu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A43F8u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A43FCu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4414u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4428u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4438u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A444Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4450u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4458u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4474u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4480u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4488u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4498u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A44A0u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A44B0u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A44B8u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A44C0u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A44C8u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A44E4u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A44F0u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4504u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A450Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4518u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4520u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A452Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4568u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4588u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A45B0u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A45C0u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A45CCu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A45DCu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A45ECu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A45FCu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A460Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A461Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4638u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4640u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A464Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A466Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A46B4u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A46E8u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4704u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A471Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4728u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4734u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4740u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A475Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4764u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A476Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4774u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4798u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A479Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A47D0u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A47D8u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A47FCu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4804u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4814u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A481Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A484Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4858u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4860u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4868u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4874u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A487Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A488Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4890u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A48ACu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A48FCu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4900u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4928u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4930u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4938u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4940u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4958u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4964u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4970u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4978u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4980u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A49A0u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A49A8u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A49CCu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A49D0u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A49D8u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A49DCu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A49E4u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A49ECu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4A18u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4A30u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4A38u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4A4Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4A54u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4A5Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4A68u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4A74u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4A9Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4AACu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4AB8u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4AC4u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4AD4u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4AE0u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4AECu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4B00u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4B0Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4B18u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4B24u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4B30u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4B3Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4B4Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4B58u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4B60u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4B68u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4B74u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4B80u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4BA8u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4BB0u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4BC8u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4BD0u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4BDCu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4BE8u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4BF4u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4C08u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4C10u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4C1Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4C30u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4C38u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4C44u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4C50u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4C88u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4C94u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4C9Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4CA0u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4CC8u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4CD4u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4CDCu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4CE8u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4CF0u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4D00u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4D08u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4D14u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4D20u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4D3Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4D44u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4D4Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4D54u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4D60u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4D68u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4D8Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4D90u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4DA8u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4DB0u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4DBCu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4DC8u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4DE4u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4DECu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4DF4u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4E04u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4E10u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4E20u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4E24u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4E2Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4E34u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4E44u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4E5Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4E64u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4E6Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4E98u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4EA8u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4EB0u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4EBCu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4ECCu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4ED8u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4EE0u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4EF0u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4EFCu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4F04u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4F10u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4F18u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4F24u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4F28u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4F44u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4F4Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4F74u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4F7Cu, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4FA0u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4FC8u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4FD0u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4FE8u, &recomp_unit_0416, "recomp_unit_0416");
    runtime.register_function(0x089A4FF8u, &recomp_unit_0416, "recomp_unit_0416");
}
} // namespace psprecomp
