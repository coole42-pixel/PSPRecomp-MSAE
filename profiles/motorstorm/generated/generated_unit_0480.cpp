#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0480[1024] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 6, 0, 0, 0, 0, 7, 0, 0, 0, 8, 9,
    0, 10, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 13, 0, 14, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    17, 0, 0, 0, 18, 19, 0, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0,
    0, 0, 0, 25, 0, 26, 0, 27, 0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 0, 31, 32, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0,
    0, 35, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 39, 0, 0, 0, 40, 0, 41, 0, 0, 0, 42, 0, 43, 0, 0, 0, 44, 0,
    45, 0, 0, 0, 46, 0, 47, 0, 0, 0, 48, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 53, 0, 0, 0, 54, 0, 55, 0,
    0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0,
    63, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 72, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 77, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 81, 0, 0, 82, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0,
    91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97,
    0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 103, 104, 0, 105,
    0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 112, 113, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0, 120, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 129, 0, 0, 0, 130, 0, 131, 0, 0,
    0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 138, 0, 139, 0, 0, 0, 140,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0,
    146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 153,
    0, 154, 0, 0, 155, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 160, 0, 0, 161, 0, 0, 162, 0, 163,
    0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 171, 0, 0,
    0, 0, 172, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 178,
    0, 179, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 182, 0, 183, 0, 184, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 194,
    0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 199, 0, 200, 0, 201, 0, 202, 0, 0, 0, 0,
    0, 203, 0, 0, 0, 0, 204, 0, 205, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 209, 0, 210, 0, 0, 211, 0, 0,
    0, 0, 0, 212, 0, 0, 213, 0, 214, 0, 0, 215, 0, 216, 0, 217, 0, 0, 0, 218, 219, 0, 0, 0, 0, 220, 0, 0, 221, 0, 222, 0,
    223, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 227, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 232,
    0, 0, 0, 0, 233, 0, 234, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 239, 0, 0, 240, 0, 241, 0, 242, 0, 0,
    0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 250, 0, 251, 0,
    0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256,
};
void recomp_unit_0480_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089E4000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0480[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089E4000;
    case 2u: goto L_089E4020;
    case 3u: goto L_089E4028;
    case 4u: goto L_089E4048;
    case 5u: goto L_089E4050;
    case 6u: goto L_089E4054;
    case 7u: goto L_089E4068;
    case 8u: goto L_089E4078;
    case 9u: goto L_089E407C;
    case 10u: goto L_089E4084;
    case 11u: goto L_089E4090;
    case 12u: goto L_089E4098;
    case 13u: goto L_089E40B0;
    case 14u: goto L_089E40B8;
    case 15u: goto L_089E40BC;
    case 16u: goto L_089E40F0;
    case 17u: goto L_089E4100;
    case 18u: goto L_089E4110;
    case 19u: goto L_089E4114;
    case 20u: goto L_089E412C;
    case 21u: goto L_089E4134;
    case 22u: goto L_089E413C;
    case 23u: goto L_089E4160;
    case 24u: goto L_089E4168;
    case 25u: goto L_089E418C;
    case 26u: goto L_089E4194;
    case 27u: goto L_089E419C;
    case 28u: goto L_089E41A4;
    case 29u: goto L_089E41B4;
    case 30u: goto L_089E41BC;
    case 31u: goto L_089E41CC;
    case 32u: goto L_089E41D0;
    case 33u: goto L_089E41D8;
    case 34u: goto L_089E41F4;
    case 35u: goto L_089E4204;
    case 36u: goto L_089E4218;
    case 37u: goto L_089E4220;
    case 38u: goto L_089E4230;
    case 39u: goto L_089E4238;
    case 40u: goto L_089E4248;
    case 41u: goto L_089E4250;
    case 42u: goto L_089E4260;
    case 43u: goto L_089E4268;
    case 44u: goto L_089E4278;
    case 45u: goto L_089E4280;
    case 46u: goto L_089E4290;
    case 47u: goto L_089E4298;
    case 48u: goto L_089E42A8;
    case 49u: goto L_089E42B0;
    case 50u: goto L_089E42C0;
    case 51u: goto L_089E42C8;
    case 52u: goto L_089E42D8;
    case 53u: goto L_089E42E0;
    case 54u: goto L_089E42F0;
    case 55u: goto L_089E42F8;
    case 56u: goto L_089E4308;
    case 57u: goto L_089E4310;
    case 58u: goto L_089E4334;
    case 59u: goto L_089E433C;
    case 60u: goto L_089E4350;
    case 61u: goto L_089E435C;
    case 62u: goto L_089E4378;
    case 63u: goto L_089E4380;
    case 64u: goto L_089E4390;
    case 65u: goto L_089E4398;
    case 66u: goto L_089E43B4;
    case 67u: goto L_089E43BC;
    case 68u: goto L_089E43CC;
    case 69u: goto L_089E43E8;
    case 70u: goto L_089E4420;
    case 71u: goto L_089E442C;
    case 72u: goto L_089E4430;
    case 73u: goto L_089E4444;
    case 74u: goto L_089E444C;
    case 75u: goto L_089E4460;
    case 76u: goto L_089E4468;
    case 77u: goto L_089E4478;
    case 78u: goto L_089E4480;
    case 79u: goto L_089E44A0;
    case 80u: goto L_089E44AC;
    case 81u: goto L_089E44B0;
    case 82u: goto L_089E44BC;
    case 83u: goto L_089E44C0;
    case 84u: goto L_089E44E8;
    case 85u: goto L_089E44F4;
    case 86u: goto L_089E4520;
    case 87u: goto L_089E452C;
    case 88u: goto L_089E453C;
    case 89u: goto L_089E4568;
    case 90u: goto L_089E4570;
    case 91u: goto L_089E4580;
    case 92u: goto L_089E4588;
    case 93u: goto L_089E45BC;
    case 94u: goto L_089E45C4;
    case 95u: goto L_089E45D4;
    case 96u: goto L_089E45F0;
    case 97u: goto L_089E45FC;
    case 98u: goto L_089E4618;
    case 99u: goto L_089E462C;
    case 100u: goto L_089E4634;
    case 101u: goto L_089E465C;
    case 102u: goto L_089E4664;
    case 103u: goto L_089E4670;
    case 104u: goto L_089E4674;
    case 105u: goto L_089E467C;
    case 106u: goto L_089E4684;
    case 107u: goto L_089E46A4;
    case 108u: goto L_089E46B0;
    case 109u: goto L_089E46C0;
    case 110u: goto L_089E46DC;
    case 111u: goto L_089E46EC;
    case 112u: goto L_089E46F4;
    case 113u: goto L_089E46F8;
    case 114u: goto L_089E4724;
    case 115u: goto L_089E4734;
    case 116u: goto L_089E4748;
    case 117u: goto L_089E4758;
    case 118u: goto L_089E4764;
    case 119u: goto L_089E476C;
    case 120u: goto L_089E4774;
    case 121u: goto L_089E47B0;
    case 122u: goto L_089E47E0;
    case 123u: goto L_089E47E8;
    case 124u: goto L_089E4810;
    case 125u: goto L_089E4828;
    case 126u: goto L_089E4830;
    case 127u: goto L_089E4848;
    case 128u: goto L_089E4854;
    case 129u: goto L_089E485C;
    case 130u: goto L_089E486C;
    case 131u: goto L_089E4874;
    case 132u: goto L_089E4884;
    case 133u: goto L_089E4894;
    case 134u: goto L_089E48A4;
    case 135u: goto L_089E48A8;
    case 136u: goto L_089E48D0;
    case 137u: goto L_089E48D8;
    case 138u: goto L_089E48E4;
    case 139u: goto L_089E48EC;
    case 140u: goto L_089E48FC;
    case 141u: goto L_089E4924;
    case 142u: goto L_089E4930;
    case 143u: goto L_089E495C;
    case 144u: goto L_089E4964;
    case 145u: goto L_089E4978;
    case 146u: goto L_089E4980;
    case 147u: goto L_089E49AC;
    case 148u: goto L_089E49C0;
    case 149u: goto L_089E49C8;
    case 150u: goto L_089E49D4;
    case 151u: goto L_089E49E4;
    case 152u: goto L_089E49F4;
    case 153u: goto L_089E49FC;
    case 154u: goto L_089E4A04;
    case 155u: goto L_089E4A10;
    case 156u: goto L_089E4A14;
    case 157u: goto L_089E4A30;
    case 158u: goto L_089E4A40;
    case 159u: goto L_089E4A54;
    case 160u: goto L_089E4A5C;
    case 161u: goto L_089E4A68;
    case 162u: goto L_089E4A74;
    case 163u: goto L_089E4A7C;
    case 164u: goto L_089E4A88;
    case 165u: goto L_089E4AA8;
    case 166u: goto L_089E4AB0;
    case 167u: goto L_089E4AB8;
    case 168u: goto L_089E4AC0;
    case 169u: goto L_089E4AE0;
    case 170u: goto L_089E4AE8;
    case 171u: goto L_089E4AF4;
    case 172u: goto L_089E4B08;
    case 173u: goto L_089E4B10;
    case 174u: goto L_089E4B24;
    case 175u: goto L_089E4B44;
    case 176u: goto L_089E4B60;
    case 177u: goto L_089E4B68;
    case 178u: goto L_089E4B7C;
    case 179u: goto L_089E4B84;
    case 180u: goto L_089E4B94;
    case 181u: goto L_089E4B9C;
    case 182u: goto L_089E4BB4;
    case 183u: goto L_089E4BBC;
    case 184u: goto L_089E4BC4;
    case 185u: goto L_089E4BD0;
    case 186u: goto L_089E4BD8;
    case 187u: goto L_089E4C04;
    case 188u: goto L_089E4C20;
    case 189u: goto L_089E4C28;
    case 190u: goto L_089E4C38;
    case 191u: goto L_089E4C40;
    case 192u: goto L_089E4C6C;
    case 193u: goto L_089E4C74;
    case 194u: goto L_089E4C7C;
    case 195u: goto L_089E4C84;
    case 196u: goto L_089E4CA4;
    case 197u: goto L_089E4CBC;
    case 198u: goto L_089E4CC4;
    case 199u: goto L_089E4CD4;
    case 200u: goto L_089E4CDC;
    case 201u: goto L_089E4CE4;
    case 202u: goto L_089E4CEC;
    case 203u: goto L_089E4D04;
    case 204u: goto L_089E4D18;
    case 205u: goto L_089E4D20;
    case 206u: goto L_089E4D28;
    case 207u: goto L_089E4D40;
    case 208u: goto L_089E4D58;
    case 209u: goto L_089E4D60;
    case 210u: goto L_089E4D68;
    case 211u: goto L_089E4D74;
    case 212u: goto L_089E4D8C;
    case 213u: goto L_089E4D98;
    case 214u: goto L_089E4DA0;
    case 215u: goto L_089E4DAC;
    case 216u: goto L_089E4DB4;
    case 217u: goto L_089E4DBC;
    case 218u: goto L_089E4DCC;
    case 219u: goto L_089E4DD0;
    case 220u: goto L_089E4DE4;
    case 221u: goto L_089E4DF0;
    case 222u: goto L_089E4DF8;
    case 223u: goto L_089E4E00;
    case 224u: goto L_089E4E0C;
    case 225u: goto L_089E4E24;
    case 226u: goto L_089E4E30;
    case 227u: goto L_089E4E38;
    case 228u: goto L_089E4E40;
    case 229u: goto L_089E4E50;
    case 230u: goto L_089E4E68;
    case 231u: goto L_089E4E74;
    case 232u: goto L_089E4E7C;
    case 233u: goto L_089E4E90;
    case 234u: goto L_089E4E98;
    case 235u: goto L_089E4EA0;
    case 236u: goto L_089E4EAC;
    case 237u: goto L_089E4EC4;
    case 238u: goto L_089E4ED0;
    case 239u: goto L_089E4ED8;
    case 240u: goto L_089E4EE4;
    case 241u: goto L_089E4EEC;
    case 242u: goto L_089E4EF4;
    case 243u: goto L_089E4F04;
    case 244u: goto L_089E4F1C;
    case 245u: goto L_089E4F28;
    case 246u: goto L_089E4F30;
    case 247u: goto L_089E4F44;
    case 248u: goto L_089E4F58;
    case 249u: goto L_089E4F60;
    case 250u: goto L_089E4F70;
    case 251u: goto L_089E4F78;
    case 252u: goto L_089E4F94;
    case 253u: goto L_089E4FAC;
    case 254u: goto L_089E4FC4;
    case 255u: goto L_089E4FEC;
    case 256u: goto L_089E4FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089E4000:
    aot_gpr[30] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[9] + 0u);
    aot_gpr[5] = (aot_gpr[30] + static_cast<std::uint32_t>(16176));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[31] = (0x089E4020u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0567_entry, 567u, 276u, 0x08A3BFC0u>(ctx, &aot_mem) && ctx.pc == 0x089E4020u) goto L_089E4020;
    return;
L_089E4020:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E40BC;
      }
      goto L_089E4028;
    }
L_089E4028:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(16180));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(7));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u + 0u);
    aot_gpr[31] = (0x089E4048u);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 172u, 0x089E3C90u>(ctx, &aot_mem) && ctx.pc == 0x089E4048u) goto L_089E4048;
    return;
L_089E4048:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[22] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089E40BC;
      }
      goto L_089E4050;
    }
L_089E4050:
    aot_gpr[2] = (aot_gpr[18] + static_cast<std::uint32_t>(9));
    goto L_089E4054;
L_089E4054:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(10));
    aot_gpr[31] = (0x089E4068u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 83u, 0x08A3646Cu>(ctx, &aot_mem) && ctx.pc == 0x089E4068u) goto L_089E4068;
    return;
L_089E4068:
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_gpr[2]))));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(200));
    { const bool branch_taken = aot_gpr[22] != aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[22]);
      if (branch_taken) {
          goto L_089E40BC;
      }
      goto L_089E4078;
    }
L_089E4078:
    aot_gpr[4] = (0u + 0u);
    goto L_089E407C;
L_089E407C:
    aot_gpr[31] = (0x089E4084u);
    aot_gpr[5] = (aot_gpr[30] + static_cast<std::uint32_t>(16176));
    if (rt.invoke_chained_direct<&recomp_unit_0567_entry, 567u, 276u, 0x08A3BFC0u>(ctx, &aot_mem) && ctx.pc == 0x089E4084u) goto L_089E4084;
    return;
L_089E4084:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E40BC;
      }
      goto L_089E4090;
    }
L_089E4090:
    { const bool branch_taken = aot_gpr[20] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_089E40F0;
      }
      goto L_089E4098;
    }
L_089E4098:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(16180));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(7));
    aot_gpr[31] = (0x089E40B0u);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(200));
    if (rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 172u, 0x089E3C90u>(ctx, &aot_mem) && ctx.pc == 0x089E40B0u) goto L_089E40B0;
    return;
L_089E40B0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[18] + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_089E4054;
      }
      goto L_089E40B8;
    }
L_089E40B8:
    aot_gpr[22] = (aot_gpr[16] + 0u);
    goto L_089E40BC;
L_089E40BC:
    aot_gpr[2] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E40F0:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16064));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089E4100u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 99u, 0x089926F4u>(ctx, &aot_mem) && ctx.pc == 0x089E4100u) goto L_089E4100;
    return;
L_089E4100:
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(8161));
    goto L_089E4114;
L_089E4110:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_089E4114;
L_089E4114:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] & 8u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E4110;
      }
      goto L_089E412C;
    }
L_089E412C:
    aot_gpr[31] = (0x089E4134u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089E4134u) goto L_089E4134;
    return;
L_089E4134:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089E418C;
      }
      goto L_089E413C;
    }
L_089E413C:
    aot_gpr[5] = (aot_gpr[18] + aot_gpr[3]);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8161));
    aot_gpr[7] = (aot_gpr[3] + 0u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] & 8u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089E418C;
      }
      goto L_089E4160;
    }
L_089E4160:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) <= 0;
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089E418C;
      }
      goto L_089E4168;
    }
L_089E4168:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8161));
    aot_gpr[5] = (aot_gpr[6] + 0u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (aot_gpr[3] & 8u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089E4160;
      }
      goto L_089E418C;
    }
L_089E418C:
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[16] = (aot_gpr[23] + 0u);
      if (branch_taken) {
          goto L_089E41F4;
      }
      goto L_089E4194;
    }
L_089E4194:
    aot_gpr[19] = (0u + 0u);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    goto L_089E419C;
L_089E419C:
    aot_gpr[31] = (0x089E41A4u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089E41A4u) goto L_089E41A4;
    return;
L_089E41A4:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E41B4u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 172u, 0x089E3C90u>(ctx, &aot_mem) && ctx.pc == 0x089E41B4u) goto L_089E41B4;
    return;
L_089E41B4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[19] < static_cast<std::uint32_t>(10) ? 1u : 0u);
      if (branch_taken) {
          goto L_089E41D0;
      }
      goto L_089E41BC;
    }
L_089E41BC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E419C;
      }
      goto L_089E41CC;
    }
L_089E41CC:
    aot_gpr[2] = (aot_gpr[19] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    goto L_089E41D0;
L_089E41D0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089E407C;
      }
      goto L_089E41D8;
    }
L_089E41D8:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[19] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-12108));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E41F4:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16188));
    aot_gpr[31] = (0x089E4204u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 99u, 0x089926F4u>(ctx, &aot_mem) && ctx.pc == 0x089E4204u) goto L_089E4204;
    return;
L_089E4204:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16192));
    aot_gpr[31] = (0x089E4218u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 172u, 0x089E3C90u>(ctx, &aot_mem) && ctx.pc == 0x089E4218u) goto L_089E4218;
    return;
L_089E4218:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089E407C;
      }
      goto L_089E4220;
    }
L_089E4220:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089E4230u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 83u, 0x08A3646Cu>(ctx, &aot_mem) && ctx.pc == 0x089E4230u) goto L_089E4230;
    return;
L_089E4230:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_089E4078;
L_089E4238:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089E4248u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E4248u) goto L_089E4248;
    return;
L_089E4248:
    aot_gpr[4] = (0u + 0u);
    goto L_089E407C;
L_089E4250:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(1036));
    aot_gpr[31] = (0x089E4260u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E4260u) goto L_089E4260;
    return;
L_089E4260:
    aot_gpr[4] = (0u + 0u);
    goto L_089E407C;
L_089E4268:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(2572));
    aot_gpr[31] = (0x089E4278u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E4278u) goto L_089E4278;
    return;
L_089E4278:
    aot_gpr[4] = (0u + 0u);
    goto L_089E407C;
L_089E4280:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(2060));
    aot_gpr[31] = (0x089E4290u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E4290u) goto L_089E4290;
    return;
L_089E4290:
    aot_gpr[4] = (0u + 0u);
    goto L_089E407C;
L_089E4298:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(3596));
    aot_gpr[31] = (0x089E42A8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E42A8u) goto L_089E42A8;
    return;
L_089E42A8:
    aot_gpr[4] = (0u + 0u);
    goto L_089E407C;
L_089E42B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089E42C0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 83u, 0x08A3646Cu>(ctx, &aot_mem) && ctx.pc == 0x089E42C0u) goto L_089E42C0;
    return;
L_089E42C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_089E4078;
L_089E42C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(1548));
    aot_gpr[31] = (0x089E42D8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E42D8u) goto L_089E42D8;
    return;
L_089E42D8:
    aot_gpr[4] = (0u + 0u);
    goto L_089E407C;
L_089E42E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(524));
    aot_gpr[31] = (0x089E42F0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E42F0u) goto L_089E42F0;
    return;
L_089E42F0:
    aot_gpr[4] = (0u + 0u);
    goto L_089E407C;
L_089E42F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(3084));
    aot_gpr[31] = (0x089E4308u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E4308u) goto L_089E4308;
    return;
L_089E4308:
    aot_gpr[4] = (0u + 0u);
    goto L_089E407C;
L_089E4310:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[3] = (aot_gpr[5] + 0u);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
      if (branch_taken) {
          goto L_089E435C;
      }
      goto L_089E4334;
    }
L_089E4334:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4096));
      if (branch_taken) {
          goto L_089E435C;
      }
      goto L_089E433C;
    }
L_089E433C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16200));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(4100));
      if (branch_taken) {
          goto L_089E4378;
      }
      goto L_089E4350;
    }
L_089E4350:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2048));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(3076));
      if (branch_taken) {
          goto L_089E4378;
      }
      goto L_089E435C;
    }
L_089E435C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4378:
    aot_gpr[31] = (0x089E4380u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 172u, 0x089E3C90u>(ctx, &aot_mem) && ctx.pc == 0x089E4380u) goto L_089E4380;
    return;
L_089E4380:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2048));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089E43B4;
      }
      goto L_089E4390;
    }
L_089E4390:
    aot_gpr[31] = (0x089E4398u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E4398u) goto L_089E4398;
    return;
L_089E4398:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E43B4:
    aot_gpr[31] = (0x089E43BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E43BCu) goto L_089E43BC;
    return;
L_089E43BC:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E43CCu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2048));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 243u, 0x08A3AC74u>(ctx, &aot_mem) && ctx.pc == 0x089E43CCu) goto L_089E43CC;
    return;
L_089E43CC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E43E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (aot_gpr[5] & 4096u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(4356));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
      if (branch_taken) {
          goto L_089E4430;
      }
      goto L_089E4420;
    }
L_089E4420:
    aot_gpr[2] = (aot_gpr[5] & 2048u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E44C0;
      }
      goto L_089E442C;
    }
L_089E442C:
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(3332));
    goto L_089E4430;
L_089E4430:
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[21] + static_cast<std::uint32_t>(16200));
    aot_gpr[31] = (0x089E4444u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 172u, 0x089E3C90u>(ctx, &aot_mem) && ctx.pc == 0x089E4444u) goto L_089E4444;
    return;
L_089E4444:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089E44E8;
      }
      goto L_089E444C;
    }
L_089E444C:
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[21] + static_cast<std::uint32_t>(16200));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089E4460u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 172u, 0x089E3C90u>(ctx, &aot_mem) && ctx.pc == 0x089E4460u) goto L_089E4460;
    return;
L_089E4460:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089E4520;
      }
      goto L_089E4468;
    }
L_089E4468:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089E4478u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_089E4310;
L_089E4478:
    aot_gpr[31] = (0x089E4480u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089E4480u) goto L_089E4480;
    return;
L_089E4480:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(47));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089E44C0;
      }
      goto L_089E44A0;
    }
L_089E44A0:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr[2] == aot_gpr[7]) {
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
        goto L_089E4568;
    }
    goto L_089E44AC;
L_089E44AC:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    goto L_089E44B0;
L_089E44B0:
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E44A0;
      }
      goto L_089E44BC;
    }
L_089E44BC:
    aot_gpr[3] = (0u + 0u);
    goto L_089E44C0;
L_089E44C0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
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
L_089E44E8:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089E44F4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2048));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E44F4u) goto L_089E44F4;
    return;
L_089E44F4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4520:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089E452Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2048));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E452Cu) goto L_089E452C;
    return;
L_089E452C:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089E453Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2048));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 243u, 0x08A3AC74u>(ctx, &aot_mem) && ctx.pc == 0x089E453Cu) goto L_089E453C;
    return;
L_089E453C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4568:
    if (aot_gpr[6] != aot_gpr[8]) {
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
        goto L_089E44B0;
    }
    goto L_089E4570;
L_089E4570:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2048));
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[3]);
    aot_gpr[31] = (0x089E4580u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E4580u) goto L_089E4580;
    return;
L_089E4580:
    aot_gpr[3] = (0u + 0u);
    goto L_089E44C0;
L_089E4588:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2048));
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089E45BCu);
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(8312));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 101u, 0x0898E724u>(ctx, &aot_mem) && ctx.pc == 0x089E45BCu) goto L_089E45BC;
    return;
L_089E45BC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E45F0;
      }
      goto L_089E45C4;
    }
L_089E45C4:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (0u | 50006u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_089E4684;
      }
      goto L_089E45D4;
    }
L_089E45D4:
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
L_089E45F0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_089E46A4;
    }
    goto L_089E45FC;
L_089E45FC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(8312), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8248)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(8312));
      if (branch_taken) {
          goto L_089E46DC;
      }
      goto L_089E4618;
    }
L_089E4618:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E462Cu);
    aot_gpr[7] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 56u, 0x089E937Cu>(ctx, &aot_mem) && ctx.pc == 0x089E462Cu) goto L_089E462C;
    return;
L_089E462C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E45D4;
      }
      goto L_089E4634;
    }
L_089E4634:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8264)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8264), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8264)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4144)));
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_089E4674;
    }
    goto L_089E465C;
L_089E465C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) <= 0;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E4670;
      }
      goto L_089E4664;
    }
L_089E4664:
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089E45D4;
L_089E4670:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_089E4674;
L_089E4674:
    aot_gpr[31] = (0x089E467Cu);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 59u, 0x089E93A0u>(ctx, &aot_mem) && ctx.pc == 0x089E467Cu) goto L_089E467C;
    return;
L_089E467C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E45D4;
      }
      goto L_089E4684;
    }
L_089E4684:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E46A4:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089E46B0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 172u, 0x08992B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089E46B0u) goto L_089E46B0;
    return;
L_089E46B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u | 55001u);
      if (branch_taken) {
          goto L_089E4684;
      }
      goto L_089E46C0;
    }
L_089E46C0:
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
L_089E46DC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16208));
    aot_gpr[31] = (0x089E46ECu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x089E46ECu) goto L_089E46EC;
    return;
L_089E46EC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_089E4758;
      }
      goto L_089E46F4;
    }
L_089E46F4:
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_089E46F8;
L_089E46F8:
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(512));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(8312));
    aot_gpr[2] = (aot_gpr[17] - aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11384));
    aot_gpr[31] = (0x089E4724u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E4724u) goto L_089E4724;
    return;
L_089E4724:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4136));
    aot_gpr[31] = (0x089E4734u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11384));
    if (rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 207u, 0x089E3F80u>(ctx, &aot_mem) && ctx.pc == 0x089E4734u) goto L_089E4734;
    return;
L_089E4734:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(200));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4136)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[3] = (0u | 55004u);
      if (branch_taken) {
          goto L_089E45D4;
      }
      goto L_089E4748;
    }
L_089E4748:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8248), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_089E4618;
L_089E4758:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E4764u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16216));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x089E4764u) goto L_089E4764;
    return;
L_089E4764:
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_089E46F8;
    }
    goto L_089E476C;
L_089E476C:
    aot_gpr[3] = (0u | 55004u);
    goto L_089E45D4;
L_089E4774:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-2144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2124), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2112), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2136), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2132), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2128), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2116), aot_gpr[17]);
    aot_gpr[17] = (2217u << 16u);
    aot_gpr[31] = (0x089E47B0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2120), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 103u, 0x0898F630u>(ctx, &aot_mem) && ctx.pc == 0x089E47B0u) goto L_089E47B0;
    return;
L_089E47B0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(23708));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8244), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8248), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8264), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x089E47E0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8312));
    goto L_089E43E8;
L_089E47E0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E4810;
      }
      goto L_089E47E8;
    }
L_089E47E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2136)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2132)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2128)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2124)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2120)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2116)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2112)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(2144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4810:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(10360));
    aot_gpr[31] = (0x089E4828u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8312));
    if (rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 184u, 0x089E3DB0u>(ctx, &aot_mem) && ctx.pc == 0x089E4828u) goto L_089E4828;
    return;
L_089E4828:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E47E8;
      }
      goto L_089E4830;
    }
L_089E4830:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(23708)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[5] & aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u | 55005u);
      if (branch_taken) {
          goto L_089E47E8;
      }
      goto L_089E4848;
    }
L_089E4848:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4096));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[5] & 2048u);
      if (branch_taken) {
          goto L_089E485C;
      }
      goto L_089E4854;
    }
L_089E4854:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E47E8;
      }
      goto L_089E485C;
    }
L_089E485C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089E486Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 15u, 0x089E90D8u>(ctx, &aot_mem) && ctx.pc == 0x089E486Cu) goto L_089E486C;
    return;
L_089E486C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E47E8;
      }
      goto L_089E4874;
    }
L_089E4874:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089E47E8;
      }
      goto L_089E4884;
    }
L_089E4884:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4096));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_089E4964;
      }
      goto L_089E4894;
    }
L_089E4894:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11384));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16236));
    aot_gpr[31] = (0x089E48A4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E48A4u) goto L_089E48A4;
    return;
L_089E48A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_089E48A8;
L_089E48A8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2048));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[31] = (0x089E48D0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 29u, 0x0898E1CCu>(ctx, &aot_mem) && ctx.pc == 0x089E48D0u) goto L_089E48D0;
    return;
L_089E48D0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E48EC;
      }
      goto L_089E48D8;
    }
L_089E48D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E48E4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 7u, 0x089E907Cu>(ctx, &aot_mem) && ctx.pc == 0x089E48E4u) goto L_089E48E4;
    return;
L_089E48E4:
    aot_gpr[3] = (aot_gpr[17] + 0u);
    goto L_089E47E8;
L_089E48EC:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(44));
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089E48FCu);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 108u, 0x0898F6C8u>(ctx, &aot_mem) && ctx.pc == 0x089E48FCu) goto L_089E48FC;
    return;
L_089E48FC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(60));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16256));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(11384));
    aot_gpr[8] = (aot_gpr[21] + 0u);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    aot_gpr[9] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089E4924u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089E4924u) goto L_089E4924;
    return;
L_089E4924:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E4930u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089E4930u) goto L_089E4930;
    return;
L_089E4930:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8312));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(10360));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16504));
    aot_gpr[7] = (aot_gpr[18] + 0u);
    aot_gpr[9] = (aot_gpr[2] + 0u);
    aot_gpr[10] = (aot_gpr[16] + static_cast<std::uint32_t>(11384));
    aot_gpr[11] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089E495Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089E495Cu) goto L_089E495C;
    return;
L_089E495C:
    aot_gpr[3] = (0u + 0u);
    goto L_089E47E8;
L_089E4964:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11384));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16220));
    aot_gpr[31] = (0x089E4978u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E4978u) goto L_089E4978;
    return;
L_089E4978:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_089E48A8;
L_089E4980:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089E4A10;
      }
      goto L_089E49AC;
    }
L_089E49AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E49C0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 193u, 0x0898DD8Cu>(ctx, &aot_mem) && ctx.pc == 0x089E49C0u) goto L_089E49C0;
    return;
L_089E49C0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E4AA8;
      }
      goto L_089E49C8;
    }
L_089E49C8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(56)));
        goto L_089E4A30;
    }
    goto L_089E49D4;
L_089E49D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089E49E4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 172u, 0x08992B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089E49E4u) goto L_089E49E4;
    return;
L_089E49E4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(5001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089E4A14;
      }
      goto L_089E49F4;
    }
L_089E49F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (0u | 55001u);
    goto L_089E49FC;
L_089E49FC:
    aot_gpr[31] = (0x089E4A04u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 6u, 0x0898E048u>(ctx, &aot_mem) && ctx.pc == 0x089E4A04u) goto L_089E4A04;
    return;
L_089E4A04:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E4A10u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 7u, 0x089E907Cu>(ctx, &aot_mem) && ctx.pc == 0x089E4A10u) goto L_089E4A10;
    return;
L_089E4A10:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    goto L_089E4A14;
L_089E4A14:
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
L_089E4A30:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(8312));
    aot_gpr[31] = (0x089E4A40u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089E4A40u) goto L_089E4A40;
    return;
L_089E4A40:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E4A54u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 86u, 0x0898F508u>(ctx, &aot_mem) && ctx.pc == 0x089E4A54u) goto L_089E4A54;
    return;
L_089E4A54:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E4AB0;
      }
      goto L_089E4A5C;
    }
L_089E4A5C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E4A68u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8312));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089E4A68u) goto L_089E4A68;
    return;
L_089E4A68:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E4AB8;
      }
      goto L_089E4A74;
    }
L_089E4A74:
    aot_gpr[31] = (0x089E4A7Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 6u, 0x0898E048u>(ctx, &aot_mem) && ctx.pc == 0x089E4A7Cu) goto L_089E4A7C;
    return;
L_089E4A7C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E4A88u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 7u, 0x089E907Cu>(ctx, &aot_mem) && ctx.pc == 0x089E4A88u) goto L_089E4A88;
    return;
L_089E4A88:
    aot_gpr[2] = (aot_gpr[17] + 0u);
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
L_089E4AA8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(56)));
    goto L_089E49FC;
L_089E4AB0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(56)));
    goto L_089E4A74;
L_089E4AB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089E4A10;
L_089E4AC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x089E4AE0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_089E4588;
L_089E4AE0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E4AF4;
      }
      goto L_089E4AE8;
    }
L_089E4AE8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089E4B68;
      }
      goto L_089E4AF4;
    }
L_089E4AF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(200));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4136)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089E4B7C;
      }
      goto L_089E4B08;
    }
L_089E4B08:
    aot_gpr[31] = (0x089E4B10u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 7u, 0x089E907Cu>(ctx, &aot_mem) && ctx.pc == 0x089E4B10u) goto L_089E4B10;
    return;
L_089E4B10:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E4B24u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 6u, 0x0898E048u>(ctx, &aot_mem) && ctx.pc == 0x089E4B24u) goto L_089E4B24;
    return;
L_089E4B24:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8284)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E4B44u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E4B44u) goto L_089E4B44;
    return;
L_089E4B44:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4108));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8284), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E4B60u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4136));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089E4B60u) goto L_089E4B60;
    return;
L_089E4B60:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[2] = (aot_gpr[17] + 0u);
    goto L_089E4B68;
L_089E4B68:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4B7C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4B08;
      }
      goto L_089E4B84;
    }
L_089E4B84:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[3] & 4096u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] & 2048u);
      if (branch_taken) {
          goto L_089E4C04;
      }
      goto L_089E4B94;
    }
L_089E4B94:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_089E4B08;
      }
      goto L_089E4B9C;
    }
L_089E4B9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12068));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089E4BB4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 56u, 0x089E937Cu>(ctx, &aot_mem) && ctx.pc == 0x089E4BB4u) goto L_089E4BB4;
    return;
L_089E4BB4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_089E4BC4;
    }
    goto L_089E4BBC;
L_089E4BBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_089E4B08;
L_089E4BC4:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089E4BD0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 65u, 0x089E93F8u>(ctx, &aot_mem) && ctx.pc == 0x089E4BD0u) goto L_089E4BD0;
    return;
L_089E4BD0:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_089E4B08;
    }
    goto L_089E4BD8;
L_089E4BD8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(23420), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(23700), aot_gpr[4]);
    aot_gpr[3] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(23412), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_089E4B08;
L_089E4C04:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12068));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089E4C20u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 56u, 0x089E937Cu>(ctx, &aot_mem) && ctx.pc == 0x089E4C20u) goto L_089E4C20;
    return;
L_089E4C20:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_089E4B08;
    }
    goto L_089E4C28;
L_089E4C28:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089E4C38u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 65u, 0x089E93F8u>(ctx, &aot_mem) && ctx.pc == 0x089E4C38u) goto L_089E4C38;
    return;
L_089E4C38:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_089E4B08;
    }
    goto L_089E4C40;
L_089E4C40:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(23424), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(23704), aot_gpr[4]);
    aot_gpr[3] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(23416), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_089E4B08;
L_089E4C6C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4CBC;
      }
      goto L_089E4C74;
    }
L_089E4C74:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[6] & 4096u);
      if (branch_taken) {
          goto L_089E4CC4;
      }
      goto L_089E4C7C;
    }
L_089E4C7C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089E4CA4;
      }
      goto L_089E4C84;
    }
L_089E4C84:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(23440), 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8256), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4CA4:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(23440), 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_089E4CBC;
L_089E4CBC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4CC4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4CD4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4D18;
      }
      goto L_089E4CDC;
    }
L_089E4CDC:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[2] = (aot_gpr[6] & 4096u);
      if (branch_taken) {
          goto L_089E4D04;
      }
      goto L_089E4CE4;
    }
L_089E4CE4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[6] & 2048u);
      if (branch_taken) {
          goto L_089E4D20;
      }
      goto L_089E4CEC;
    }
L_089E4CEC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8256), 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4D04:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_089E4D18;
L_089E4D18:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4D20:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_089E4D40;
      }
      goto L_089E4D28;
    }
L_089E4D28:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4D40:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8256), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4D58:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4D98;
      }
      goto L_089E4D60;
    }
L_089E4D60:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_089E4DA0;
      }
      goto L_089E4D68;
    }
L_089E4D68:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8256)));
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[5]);
        goto L_089E4D8C;
    }
    goto L_089E4D74;
L_089E4D74:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8256), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4D8C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_089E4D98;
L_089E4D98:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4DA0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4DAC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4DF0;
      }
      goto L_089E4DB4;
    }
L_089E4DB4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E4DF8;
      }
      goto L_089E4DBC;
    }
L_089E4DBC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8256)));
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[5]);
        goto L_089E4DE4;
    }
    goto L_089E4DCC;
L_089E4DCC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_089E4DD0;
L_089E4DD0:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8256), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4DE4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_089E4DF0;
L_089E4DF0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4DF8:
    { const bool branch_taken = aot_gpr[7] == aot_gpr[2];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_089E4E24;
      }
      goto L_089E4E00;
    }
L_089E4E00:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8256)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E4DD0;
      }
      goto L_089E4E0C;
    }
L_089E4E0C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4E24:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4E30:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4E74;
      }
      goto L_089E4E38;
    }
L_089E4E38:
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
        goto L_089E4E7C;
    }
    goto L_089E4E40;
L_089E4E40:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8256)));
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[5]);
        goto L_089E4E68;
    }
    goto L_089E4E50;
L_089E4E50:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8256), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4E68:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_089E4E74;
L_089E4E74:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4E7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8260), 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4E90:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4ED0;
      }
      goto L_089E4E98;
    }
L_089E4E98:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_089E4ED8;
      }
      goto L_089E4EA0;
    }
L_089E4EA0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8256)));
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[5]);
        goto L_089E4EC4;
    }
    goto L_089E4EAC;
L_089E4EAC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8256), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4EC4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_089E4ED0;
L_089E4ED0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4ED8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4EE4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4F28;
      }
      goto L_089E4EEC;
    }
L_089E4EEC:
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
        goto L_089E4F30;
    }
    goto L_089E4EF4;
L_089E4EF4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8256)));
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[5]);
        goto L_089E4F1C;
    }
    goto L_089E4F04;
L_089E4F04:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8256), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4F1C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_089E4F28;
L_089E4F28:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4F30:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4F44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
      if (branch_taken) {
          goto L_089E4F60;
      }
      goto L_089E4F58;
    }
L_089E4F58:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089E4F70;
      }
      goto L_089E4F60;
    }
L_089E4F60:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4F70:
    aot_gpr[31] = (0x089E4F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 103u, 0x0898F630u>(ctx, &aot_mem) && ctx.pc == 0x089E4F78u) goto L_089E4F78;
    return;
L_089E4F78:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4F94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089E4FACu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089E4FACu) goto L_089E4FAC;
    return;
L_089E4FAC:
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4FC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[17] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0481_entry, 481u, 3u, 0x089E5028u>(ctx, &aot_mem); return;
      }
      goto L_089E4FEC;
    }
L_089E4FEC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8308)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089E4FFCu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E4FFCu) goto L_089E4FFC;
    return;
L_089E4FFC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.pc = 0x089E5000u; return;
}

void recomp_unit_0480(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0480_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_480(Runtime &runtime) {
    runtime.register_generated_unit(480u, 0x089E4000u, 4096u, &recomp_unit_0480, &recomp_unit_0480_entry);
    runtime.register_function(0x089E4000u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4020u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4028u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4048u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4050u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4054u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4068u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4078u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E407Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4084u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4090u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4098u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E40B0u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E40B8u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E40BCu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E40F0u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4100u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4110u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4114u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E412Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4134u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E413Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4160u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4168u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E418Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4194u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E419Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E41A4u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E41B4u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E41BCu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E41CCu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E41D0u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E41D8u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E41F4u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4204u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4218u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4220u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4230u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4238u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4248u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4250u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4260u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4268u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4278u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4280u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4290u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4298u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E42A8u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E42B0u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E42C0u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E42C8u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E42D8u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E42E0u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E42F0u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E42F8u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4308u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4310u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4334u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E433Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4350u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E435Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4378u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4380u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4390u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4398u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E43B4u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E43BCu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E43CCu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E43E8u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4420u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E442Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4430u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4444u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E444Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4460u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4468u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4478u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4480u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E44A0u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E44ACu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E44B0u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E44BCu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E44C0u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E44E8u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E44F4u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4520u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E452Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E453Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4568u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4570u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4580u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4588u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E45BCu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E45C4u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E45D4u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E45F0u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E45FCu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4618u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E462Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4634u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E465Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4664u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4670u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4674u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E467Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4684u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E46A4u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E46B0u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E46C0u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E46DCu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E46ECu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E46F4u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E46F8u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4724u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4734u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4748u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4758u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4764u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E476Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4774u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E47B0u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E47E0u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E47E8u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4810u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4828u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4830u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4848u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4854u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E485Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E486Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4874u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4884u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4894u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E48A4u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E48A8u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E48D0u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E48D8u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E48E4u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E48ECu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E48FCu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4924u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4930u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E495Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4964u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4978u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4980u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E49ACu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E49C0u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E49C8u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E49D4u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E49E4u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E49F4u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E49FCu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4A04u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4A10u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4A14u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4A30u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4A40u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4A54u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4A5Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4A68u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4A74u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4A7Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4A88u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4AA8u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4AB0u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4AB8u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4AC0u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4AE0u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4AE8u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4AF4u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4B08u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4B10u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4B24u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4B44u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4B60u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4B68u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4B7Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4B84u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4B94u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4B9Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4BB4u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4BBCu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4BC4u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4BD0u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4BD8u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4C04u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4C20u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4C28u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4C38u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4C40u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4C6Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4C74u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4C7Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4C84u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4CA4u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4CBCu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4CC4u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4CD4u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4CDCu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4CE4u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4CECu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4D04u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4D18u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4D20u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4D28u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4D40u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4D58u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4D60u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4D68u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4D74u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4D8Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4D98u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4DA0u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4DACu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4DB4u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4DBCu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4DCCu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4DD0u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4DE4u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4DF0u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4DF8u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4E00u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4E0Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4E24u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4E30u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4E38u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4E40u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4E50u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4E68u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4E74u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4E7Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4E90u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4E98u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4EA0u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4EACu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4EC4u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4ED0u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4ED8u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4EE4u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4EECu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4EF4u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4F04u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4F1Cu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4F28u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4F30u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4F44u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4F58u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4F60u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4F70u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4F78u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4F94u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4FACu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4FC4u, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4FECu, &recomp_unit_0480, "recomp_unit_0480");
    runtime.register_function(0x089E4FFCu, &recomp_unit_0480, "recomp_unit_0480");
}
} // namespace psprecomp
