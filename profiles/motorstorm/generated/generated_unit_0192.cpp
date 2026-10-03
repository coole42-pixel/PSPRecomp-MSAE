#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0192[1011] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0,
    0, 4, 0, 5, 0, 6, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 11, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0,
    0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 17, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 22,
    0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 26, 0, 27, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 32, 0, 0, 0, 33, 34, 0, 35, 0, 0, 36,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 41, 0, 0, 0,
    42, 0, 0, 0, 43, 44, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48,
    0, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 54, 0, 55, 0, 0,
    0, 0, 56, 0, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61, 0, 0, 0, 0, 62, 0, 0, 63, 0, 64, 0, 0, 65, 0, 0, 0, 0, 66,
    0, 0, 67, 0, 68, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0,
    0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 75, 0, 76, 0, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0,
    0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 85, 0, 86, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89,
    0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0,
    0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 109, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 114, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117,
    0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 121, 0, 122, 0, 0, 0, 0, 0, 123,
    0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130,
    0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 139, 0,
    140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 147, 0,
    148, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0,
    0, 0, 161, 0, 0, 162, 163, 0, 164, 0, 165, 0, 0, 166, 0, 0, 167, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0,
    171, 0, 172, 0, 173, 0, 174, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0, 179, 0, 180, 0, 181, 0, 182, 0, 0, 0, 183, 0,
    184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 211,
    0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0, 0, 216, 0, 0, 217,
};
void recomp_unit_0192_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088C4000u;
        entry_id = (entry_delta < 4044u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0192[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088C4000;
    case 2u: goto L_088C403C;
    case 3u: goto L_088C4070;
    case 4u: goto L_088C4084;
    case 5u: goto L_088C408C;
    case 6u: goto L_088C4094;
    case 7u: goto L_088C409C;
    case 8u: goto L_088C40AC;
    case 9u: goto L_088C40BC;
    case 10u: goto L_088C40CC;
    case 11u: goto L_088C40D4;
    case 12u: goto L_088C40DC;
    case 13u: goto L_088C40E8;
    case 14u: goto L_088C4108;
    case 15u: goto L_088C4118;
    case 16u: goto L_088C4128;
    case 17u: goto L_088C4130;
    case 18u: goto L_088C4138;
    case 19u: goto L_088C4148;
    case 20u: goto L_088C416C;
    case 21u: goto L_088C4174;
    case 22u: goto L_088C417C;
    case 23u: goto L_088C4190;
    case 24u: goto L_088C4198;
    case 25u: goto L_088C41A0;
    case 26u: goto L_088C41A8;
    case 27u: goto L_088C41B0;
    case 28u: goto L_088C41B8;
    case 29u: goto L_088C41CC;
    case 30u: goto L_088C423C;
    case 31u: goto L_088C424C;
    case 32u: goto L_088C4254;
    case 33u: goto L_088C4264;
    case 34u: goto L_088C4268;
    case 35u: goto L_088C4270;
    case 36u: goto L_088C427C;
    case 37u: goto L_088C42A4;
    case 38u: goto L_088C42C4;
    case 39u: goto L_088C42E0;
    case 40u: goto L_088C42E8;
    case 41u: goto L_088C42F0;
    case 42u: goto L_088C4300;
    case 43u: goto L_088C4310;
    case 44u: goto L_088C4314;
    case 45u: goto L_088C4318;
    case 46u: goto L_088C433C;
    case 47u: goto L_088C4360;
    case 48u: goto L_088C437C;
    case 49u: goto L_088C4388;
    case 50u: goto L_088C4398;
    case 51u: goto L_088C43A4;
    case 52u: goto L_088C43D0;
    case 53u: goto L_088C43E0;
    case 54u: goto L_088C43EC;
    case 55u: goto L_088C43F4;
    case 56u: goto L_088C4408;
    case 57u: goto L_088C4414;
    case 58u: goto L_088C441C;
    case 59u: goto L_088C4424;
    case 60u: goto L_088C442C;
    case 61u: goto L_088C4434;
    case 62u: goto L_088C4448;
    case 63u: goto L_088C4454;
    case 64u: goto L_088C445C;
    case 65u: goto L_088C4468;
    case 66u: goto L_088C447C;
    case 67u: goto L_088C4488;
    case 68u: goto L_088C4490;
    case 69u: goto L_088C44A4;
    case 70u: goto L_088C44B0;
    case 71u: goto L_088C44EC;
    case 72u: goto L_088C44F8;
    case 73u: goto L_088C4518;
    case 74u: goto L_088C4530;
    case 75u: goto L_088C4538;
    case 76u: goto L_088C4540;
    case 77u: goto L_088C454C;
    case 78u: goto L_088C4560;
    case 79u: goto L_088C4568;
    case 80u: goto L_088C4578;
    case 81u: goto L_088C4594;
    case 82u: goto L_088C45A0;
    case 83u: goto L_088C45B8;
    case 84u: goto L_088C45C4;
    case 85u: goto L_088C45CC;
    case 86u: goto L_088C45D4;
    case 87u: goto L_088C45DC;
    case 88u: goto L_088C45EC;
    case 89u: goto L_088C45FC;
    case 90u: goto L_088C4604;
    case 91u: goto L_088C4610;
    case 92u: goto L_088C4628;
    case 93u: goto L_088C4648;
    case 94u: goto L_088C4650;
    case 95u: goto L_088C4658;
    case 96u: goto L_088C4660;
    case 97u: goto L_088C4668;
    case 98u: goto L_088C4670;
    case 99u: goto L_088C4678;
    case 100u: goto L_088C4690;
    case 101u: goto L_088C46B0;
    case 102u: goto L_088C46B8;
    case 103u: goto L_088C46C0;
    case 104u: goto L_088C46D4;
    case 105u: goto L_088C46E8;
    case 106u: goto L_088C46F8;
    case 107u: goto L_088C471C;
    case 108u: goto L_088C4724;
    case 109u: goto L_088C4784;
    case 110u: goto L_088C4788;
    case 111u: goto L_088C4794;
    case 112u: goto L_088C47B4;
    case 113u: goto L_088C47BC;
    case 114u: goto L_088C47C4;
    case 115u: goto L_088C47CC;
    case 116u: goto L_088C47E0;
    case 117u: goto L_088C47FC;
    case 118u: goto L_088C480C;
    case 119u: goto L_088C483C;
    case 120u: goto L_088C4854;
    case 121u: goto L_088C485C;
    case 122u: goto L_088C4864;
    case 123u: goto L_088C487C;
    case 124u: goto L_088C4888;
    case 125u: goto L_088C4890;
    case 126u: goto L_088C48A8;
    case 127u: goto L_088C48BC;
    case 128u: goto L_088C48D0;
    case 129u: goto L_088C48DC;
    case 130u: goto L_088C48FC;
    case 131u: goto L_088C490C;
    case 132u: goto L_088C4918;
    case 133u: goto L_088C4938;
    case 134u: goto L_088C499C;
    case 135u: goto L_088C49A4;
    case 136u: goto L_088C49B0;
    case 137u: goto L_088C49E4;
    case 138u: goto L_088C49F0;
    case 139u: goto L_088C49F8;
    case 140u: goto L_088C4A00;
    case 141u: goto L_088C4A18;
    case 142u: goto L_088C4A28;
    case 143u: goto L_088C4A30;
    case 144u: goto L_088C4A4C;
    case 145u: goto L_088C4A60;
    case 146u: goto L_088C4A70;
    case 147u: goto L_088C4A78;
    case 148u: goto L_088C4A80;
    case 149u: goto L_088C4A88;
    case 150u: goto L_088C4A90;
    case 151u: goto L_088C4AB4;
    case 152u: goto L_088C4AC0;
    case 153u: goto L_088C4AC8;
    case 154u: goto L_088C4AE8;
    case 155u: goto L_088C4B1C;
    case 156u: goto L_088C4B34;
    case 157u: goto L_088C4B48;
    case 158u: goto L_088C4B54;
    case 159u: goto L_088C4B64;
    case 160u: goto L_088C4B70;
    case 161u: goto L_088C4B88;
    case 162u: goto L_088C4B94;
    case 163u: goto L_088C4B98;
    case 164u: goto L_088C4BA0;
    case 165u: goto L_088C4BA8;
    case 166u: goto L_088C4BB4;
    case 167u: goto L_088C4BC0;
    case 168u: goto L_088C4BC8;
    case 169u: goto L_088C4BD0;
    case 170u: goto L_088C4BEC;
    case 171u: goto L_088C4C00;
    case 172u: goto L_088C4C08;
    case 173u: goto L_088C4C10;
    case 174u: goto L_088C4C18;
    case 175u: goto L_088C4C20;
    case 176u: goto L_088C4C2C;
    case 177u: goto L_088C4C3C;
    case 178u: goto L_088C4C48;
    case 179u: goto L_088C4C50;
    case 180u: goto L_088C4C58;
    case 181u: goto L_088C4C60;
    case 182u: goto L_088C4C68;
    case 183u: goto L_088C4C78;
    case 184u: goto L_088C4C80;
    case 185u: goto L_088C4C88;
    case 186u: goto L_088C4C90;
    case 187u: goto L_088C4C98;
    case 188u: goto L_088C4CA0;
    case 189u: goto L_088C4CB0;
    case 190u: goto L_088C4CC0;
    case 191u: goto L_088C4CE4;
    case 192u: goto L_088C4CF0;
    case 193u: goto L_088C4D10;
    case 194u: goto L_088C4D34;
    case 195u: goto L_088C4D84;
    case 196u: goto L_088C4D90;
    case 197u: goto L_088C4DD4;
    case 198u: goto L_088C4DE0;
    case 199u: goto L_088C4E20;
    case 200u: goto L_088C4E2C;
    case 201u: goto L_088C4E6C;
    case 202u: goto L_088C4E9C;
    case 203u: goto L_088C4EBC;
    case 204u: goto L_088C4ED8;
    case 205u: goto L_088C4F0C;
    case 206u: goto L_088C4F34;
    case 207u: goto L_088C4F3C;
    case 208u: goto L_088C4F44;
    case 209u: goto L_088C4F58;
    case 210u: goto L_088C4F6C;
    case 211u: goto L_088C4F7C;
    case 212u: goto L_088C4F88;
    case 213u: goto L_088C4F94;
    case 214u: goto L_088C4FA0;
    case 215u: goto L_088C4FAC;
    case 216u: goto L_088C4FBC;
    case 217u: goto L_088C4FC8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088C4000:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[20] = (aot_gpr[30] | 0u);
    aot_gpr[6] = (aot_gpr[9] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(9));
    aot_gpr[7] = (aot_gpr[20] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 180u, 0x088C3D04u>(ctx, &aot_mem); return;
      }
      goto L_088C403C;
    }
L_088C403C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4070:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088C4084u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 197u, 0x08810D44u>(ctx, &aot_mem) && ctx.pc == 0x088C4084u) goto L_088C4084;
    return;
L_088C4084:
    aot_gpr[31] = (0x088C408Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 110u, 0x088798BCu>(ctx, &aot_mem) && ctx.pc == 0x088C408Cu) goto L_088C408C;
    return;
L_088C408C:
    aot_gpr[31] = (0x088C4094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 9u, 0x0886E088u>(ctx, &aot_mem) && ctx.pc == 0x088C4094u) goto L_088C4094;
    return;
L_088C4094:
    aot_gpr[31] = (0x088C409Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 173u, 0x088C3BF8u>(ctx, &aot_mem) && ctx.pc == 0x088C409Cu) goto L_088C409C;
    return;
L_088C409C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C40AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C40BCu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 163u, 0x0886DB64u>(ctx, &aot_mem) && ctx.pc == 0x088C40BCu) goto L_088C40BC;
    return;
L_088C40BC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C40D4;
      }
      goto L_088C40CC;
    }
L_088C40CC:
    aot_gpr[31] = (0x088C40D4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 55u, 0x088933C0u>(ctx, &aot_mem) && ctx.pc == 0x088C40D4u) goto L_088C40D4;
    return;
L_088C40D4:
    aot_gpr[31] = (0x088C40DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 222u, 0x08810F24u>(ctx, &aot_mem) && ctx.pc == 0x088C40DCu) goto L_088C40DC;
    return;
L_088C40DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C40E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4130;
      }
      goto L_088C4108;
    }
L_088C4108:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C4130;
      }
      goto L_088C4118;
    }
L_088C4118:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[31] = (0x088C4128u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C4128u) goto L_088C4128;
    return;
L_088C4128:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C41B8;
      }
      goto L_088C4130;
    }
L_088C4130:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C41B8;
      }
      goto L_088C4138;
    }
L_088C4138:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C41B8;
      }
      goto L_088C4148;
    }
L_088C4148:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2852)));
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(24760));
      if (branch_taken) {
          goto L_088C4190;
      }
      goto L_088C416C;
    }
L_088C416C:
    aot_gpr[31] = (0x088C4174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088C4174u) goto L_088C4174;
    return;
L_088C4174:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4190;
      }
      goto L_088C417C;
    }
L_088C417C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2696));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (0u | 0u);
    goto L_088C4190;
L_088C4190:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C41B0;
      }
      goto L_088C4198;
    }
L_088C4198:
    aot_gpr[31] = (0x088C41A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 54u, 0x0886232Cu>(ctx, &aot_mem) && ctx.pc == 0x088C41A0u) goto L_088C41A0;
    return;
L_088C41A0:
    aot_gpr[31] = (0x088C41A8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C41A8u) goto L_088C41A8;
    return;
L_088C41A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C41B8;
      }
      goto L_088C41B0;
    }
L_088C41B0:
    aot_gpr[31] = (0x088C41B8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C41B8u) goto L_088C41B8;
    return;
L_088C41B8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C41CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-2852)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    aot_gpr[20] = (0u | 4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31736));
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[21] = (2218u << 16u);
    aot_gpr[22] = (2215u << 16u);
    aot_gpr[23] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[30] = (2215u << 16u);
      if (branch_taken) {
          goto L_088C4254;
      }
      goto L_088C423C;
    }
L_088C423C:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x088C424Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31708));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088C424Cu) goto L_088C424C;
    return;
L_088C424C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088C4268;
      }
      goto L_088C4254;
    }
L_088C4254:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x088C4264u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31748));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4264u) goto L_088C4264;
    return;
L_088C4264:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_088C4268;
L_088C4268:
    aot_gpr[31] = (0x088C4270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x088C4270u) goto L_088C4270;
    return;
L_088C4270:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[31] = (0x088C427Cu);
    aot_gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 70u, 0x0881764Cu>(ctx, &aot_mem) && ctx.pc == 0x088C427Cu) goto L_088C427C;
    return;
L_088C427C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(424), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-6476), aot_gpr[4]);
    aot_gpr[31] = (0x088C42A4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(27496), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 49u, 0x088B0344u>(ctx, &aot_mem) && ctx.pc == 0x088C42A4u) goto L_088C42A4;
    return;
L_088C42A4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[7] = (0u | 3u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4444)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4808));
      if (branch_taken) {
          goto L_088C42E8;
      }
      goto L_088C42C4;
    }
L_088C42C4:
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(2416)));
    aot_gpr[7] = (aot_gpr[7] ^ 1u);
    aot_gpr[7] = (aot_gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C42E8;
      }
      goto L_088C42E0;
    }
L_088C42E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088C4314;
      }
      goto L_088C42E8;
    }
L_088C42E8:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[20];
    aot_gpr[8] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088C4318;
      }
      goto L_088C42F0;
    }
L_088C42F0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-2852)));
    aot_gpr[7] = (0u | 2u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[7];
    aot_gpr[7] = (2218u << 16u);
      if (branch_taken) {
          goto L_088C4310;
      }
      goto L_088C4300;
    }
L_088C4300:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-2072)));
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[6];
    aot_gpr[8] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088C4318;
      }
      goto L_088C4310;
    }
L_088C4310:
    aot_gpr[4] = (0u | 1u);
    goto L_088C4314;
L_088C4314:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    goto L_088C4318;
L_088C4318:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(25353)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(25360)));
    aot_gpr[6] = (aot_gpr[6] << 8u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (aot_gpr[8] != 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
        goto L_088C433C;
    }
    goto L_088C433C;
L_088C433C:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(200)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(208)));
    aot_gpr[5] = (aot_gpr[8] | 0u);
    aot_gpr[8] = (aot_gpr[9] | 0u);
    aot_gpr[10] = (aot_gpr[16] + static_cast<std::uint32_t>(212));
    aot_gpr[31] = (0x088C4360u);
    aot_gpr[9] = (aot_gpr[11] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 81u, 0x08873568u>(ctx, &aot_mem) && ctx.pc == 0x088C4360u) goto L_088C4360;
    return;
L_088C4360:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (0u | 5u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4444)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4808));
      if (branch_taken) {
          goto L_088C4388;
      }
      goto L_088C437C;
    }
L_088C437C:
    aot_gpr[6] = (0u | 6u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C43E0;
      }
      goto L_088C4388;
    }
L_088C4388:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088C43E0;
      }
      goto L_088C4398;
    }
L_088C4398:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26496)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C43E0;
      }
      goto L_088C43A4;
    }
L_088C43A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(25353)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(25360)));
    aot_gpr[6] = (aot_gpr[6] << 8u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[4]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x088C43D0u);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 98u, 0x08873680u>(ctx, &aot_mem) && ctx.pc == 0x088C43D0u) goto L_088C43D0;
    return;
L_088C43D0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(25244)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4444)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4808));
    goto L_088C43E0;
L_088C43E0:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088C43ECu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 112u, 0x08873760u>(ctx, &aot_mem) && ctx.pc == 0x088C43ECu) goto L_088C43EC;
    return;
L_088C43EC:
    aot_gpr[31] = (0x088C43F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 176u, 0x08863EA0u>(ctx, &aot_mem) && ctx.pc == 0x088C43F4u) goto L_088C43F4;
    return;
L_088C43F4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-2));
    aot_gpr[4] = (aot_gpr[16] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C44B0;
      }
      goto L_088C4408;
    }
L_088C4408:
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088C445C;
      }
      goto L_088C4414;
    }
L_088C4414:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088C445C;
      }
      goto L_088C441C;
    }
L_088C441C:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C445C;
      }
      goto L_088C4424;
    }
L_088C4424:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_088C445C;
      }
      goto L_088C442C;
    }
L_088C442C:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_088C4490;
      }
      goto L_088C4434;
    }
L_088C4434:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31764));
    aot_gpr[31] = (0x088C4448u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088C4448u) goto L_088C4448;
    return;
L_088C4448:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088C4454u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 84u, 0x08893684u>(ctx, &aot_mem) && ctx.pc == 0x088C4454u) goto L_088C4454;
    return;
L_088C4454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C44B0;
      }
      goto L_088C445C;
    }
L_088C445C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088C4468u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6464)));
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 141u, 0x0887DC1Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4468u) goto L_088C4468;
    return;
L_088C4468:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31780));
    aot_gpr[31] = (0x088C447Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088C447Cu) goto L_088C447C;
    return;
L_088C447C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088C4488u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 84u, 0x08893684u>(ctx, &aot_mem) && ctx.pc == 0x088C4488u) goto L_088C4488;
    return;
L_088C4488:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C44B0;
      }
      goto L_088C4490;
    }
L_088C4490:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31748));
    aot_gpr[31] = (0x088C44A4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088C44A4u) goto L_088C44A4;
    return;
L_088C44A4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088C44B0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 84u, 0x08893684u>(ctx, &aot_mem) && ctx.pc == 0x088C44B0u) goto L_088C44B0;
    return;
L_088C44B0:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(5248), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C44EC:
    aot_gpr[4] = (2218u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(5248), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C44F8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28504), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4518:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088C4530u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 210u, 0x08873C64u>(ctx, &aot_mem) && ctx.pc == 0x088C4530u) goto L_088C4530;
    return;
L_088C4530:
    aot_gpr[31] = (0x088C4538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 197u, 0x08810D44u>(ctx, &aot_mem) && ctx.pc == 0x088C4538u) goto L_088C4538;
    return;
L_088C4538:
    aot_gpr[31] = (0x088C4540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 110u, 0x088798BCu>(ctx, &aot_mem) && ctx.pc == 0x088C4540u) goto L_088C4540;
    return;
L_088C4540:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4560;
      }
      goto L_088C454C;
    }
L_088C454C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6936)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[31] = (0x088C4560u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7652)));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 92u, 0x08826864u>(ctx, &aot_mem) && ctx.pc == 0x088C4560u) goto L_088C4560;
    return;
L_088C4560:
    aot_gpr[31] = (0x088C4568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 9u, 0x0886E088u>(ctx, &aot_mem) && ctx.pc == 0x088C4568u) goto L_088C4568;
    return;
L_088C4568:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C45DC;
      }
      goto L_088C4578;
    }
L_088C4578:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C45DC;
      }
      goto L_088C4594;
    }
L_088C4594:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x088C45A0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27484)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 13u, 0x088B2118u>(ctx, &aot_mem) && ctx.pc == 0x088C45A0u) goto L_088C45A0;
    return;
L_088C45A0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6976));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(37))))));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C45D4;
      }
      goto L_088C45B8;
    }
L_088C45B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088C45D4;
      }
      goto L_088C45C4;
    }
L_088C45C4:
    aot_gpr[31] = (0x088C45CCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6936)));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 100u, 0x088268F8u>(ctx, &aot_mem) && ctx.pc == 0x088C45CCu) goto L_088C45CC;
    return;
L_088C45CC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C45DC;
      }
      goto L_088C45D4;
    }
L_088C45D4:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088C45DC;
L_088C45DC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C45EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C45FCu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 163u, 0x0886DB64u>(ctx, &aot_mem) && ctx.pc == 0x088C45FCu) goto L_088C45FC;
    return;
L_088C45FC:
    aot_gpr[31] = (0x088C4604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 222u, 0x08810F24u>(ctx, &aot_mem) && ctx.pc == 0x088C4604u) goto L_088C4604;
    return;
L_088C4604:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4610:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(14)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4678;
      }
      goto L_088C4628;
    }
L_088C4628:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(24760));
      if (branch_taken) {
          goto L_088C4668;
      }
      goto L_088C4648;
    }
L_088C4648:
    aot_gpr[31] = (0x088C4650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 71u, 0x088624CCu>(ctx, &aot_mem) && ctx.pc == 0x088C4650u) goto L_088C4650;
    return;
L_088C4650:
    aot_gpr[31] = (0x088C4658u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 70u, 0x0881764Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4658u) goto L_088C4658;
    return;
L_088C4658:
    aot_gpr[31] = (0x088C4660u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C4660u) goto L_088C4660;
    return;
L_088C4660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C46E8;
      }
      goto L_088C4668;
    }
L_088C4668:
    aot_gpr[31] = (0x088C4670u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C4670u) goto L_088C4670;
    return;
L_088C4670:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C46E8;
      }
      goto L_088C4678;
    }
L_088C4678:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6976));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(22))))));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C46E8;
      }
      goto L_088C4690;
    }
L_088C4690:
    aot_gpr[4] = (0u | 11u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24848), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    aot_gpr[16] = (2215u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(24760));
      if (branch_taken) {
          goto L_088C46C0;
      }
      goto L_088C46B0;
    }
L_088C46B0:
    aot_gpr[31] = (0x088C46B8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C46B8u) goto L_088C46B8;
    return;
L_088C46B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C46E8;
      }
      goto L_088C46C0;
    }
L_088C46C0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088C46D4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31808));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088C46D4u) goto L_088C46D4;
    return;
L_088C46D4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(5252), aot_gpr[2]);
    aot_gpr[31] = (0x088C46E8u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C46E8u) goto L_088C46E8;
    return;
L_088C46E8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C46F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (2218u << 16u);
      if (branch_taken) {
          goto L_088C4864;
      }
      goto L_088C471C;
    }
L_088C471C:
    aot_gpr[31] = (0x088C4724u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 209u, 0x08873C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4724u) goto L_088C4724;
    return;
L_088C4724:
    aot_gpr[17] = (0u | 1u);
    aot_gpr[5] = (16256u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-7292), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-7296), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-7300), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-7291), static_cast<std::uint8_t>(aot_gpr[17]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(28572)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4788;
      }
      goto L_088C4784;
    }
L_088C4784:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    goto L_088C4788;
L_088C4788:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C47C4;
      }
      goto L_088C4794;
    }
L_088C4794:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6936)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(26492)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x088C47B4u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 85u, 0x08826778u>(ctx, &aot_mem) && ctx.pc == 0x088C47B4u) goto L_088C47B4;
    return;
L_088C47B4:
    aot_gpr[31] = (0x088C47BCu);
    aot_gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 70u, 0x0881764Cu>(ctx, &aot_mem) && ctx.pc == 0x088C47BCu) goto L_088C47BC;
    return;
L_088C47BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C47CC;
      }
      goto L_088C47C4;
    }
L_088C47C4:
    aot_gpr[31] = (0x088C47CCu);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 70u, 0x0881764Cu>(ctx, &aot_mem) && ctx.pc == 0x088C47CCu) goto L_088C47CC;
    return;
L_088C47CC:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[31] = (0x088C47E0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 89u, 0x088DC6DCu>(ctx, &aot_mem) && ctx.pc == 0x088C47E0u) goto L_088C47E0;
    return;
L_088C47E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-7484), static_cast<std::uint8_t>(aot_gpr[17]));
      if (branch_taken) {
          goto L_088C4890;
      }
      goto L_088C47FC;
    }
L_088C47FC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(5256)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C485C;
      }
      goto L_088C480C;
    }
L_088C480C:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(5256), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[4] = (0u | 11u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24848), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(5368), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088C483Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31824));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088C483Cu) goto L_088C483C;
    return;
L_088C483C:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(5252), aot_gpr[2]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[31] = (0x088C4854u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C4854u) goto L_088C4854;
    return;
L_088C4854:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4890;
      }
      goto L_088C485C;
    }
L_088C485C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(aot_gpr[17]));
      if (branch_taken) {
          goto L_088C4890;
      }
      goto L_088C4864;
    }
L_088C4864:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4890;
      }
      goto L_088C487C;
    }
L_088C487C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(15)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4890;
      }
      goto L_088C4888;
    }
L_088C4888:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088C4890;
L_088C4890:
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
L_088C48A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C48BCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27484)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 15u, 0x088B214Cu>(ctx, &aot_mem) && ctx.pc == 0x088C48BCu) goto L_088C48BC;
    return;
L_088C48BC:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-7484), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C48D0:
    aot_gpr[5] = (0u | 1u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C48DC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28568), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C48FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C490Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 197u, 0x08810D44u>(ctx, &aot_mem) && ctx.pc == 0x088C490Cu) goto L_088C490C;
    return;
L_088C490C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4918:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[4] = (aot_gpr[9] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088C4938u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 36u, 0x08A4A22Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4938u) goto L_088C4938;
    return;
L_088C4938:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(0u));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (65280u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[8]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (0u | 480u);
    aot_gpr[10] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    aot_gpr[8] = (0u | 272u);
    PSPRECOMP_AOT_STORE16(aot_gpr[10] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE16(aot_gpr[10] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[8]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE16(aot_gpr[10] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[31] = (0x088C499Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 51u, 0x0892F518u>(ctx, &aot_mem) && ctx.pc == 0x088C499Cu) goto L_088C499C;
    return;
L_088C499C:
    aot_gpr[31] = (0x088C49A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 222u, 0x08810F24u>(ctx, &aot_mem) && ctx.pc == 0x088C49A4u) goto L_088C49A4;
    return;
L_088C49A4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C49B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[5] = (aot_gpr[5] ^ 1u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (0u | 13u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[16] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24852)));
        goto L_088C49E4;
    }
    goto L_088C49E4;
L_088C49E4:
    aot_gpr[5] = (0u | 13u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C4A00;
      }
      goto L_088C49F0;
    }
L_088C49F0:
    aot_gpr[31] = (0x088C49F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 71u, 0x088624CCu>(ctx, &aot_mem) && ctx.pc == 0x088C49F8u) goto L_088C49F8;
    return;
L_088C49F8:
    aot_gpr[31] = (0x088C4A00u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 70u, 0x0881764Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4A00u) goto L_088C4A00;
    return;
L_088C4A00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4A30;
      }
      goto L_088C4A18;
    }
L_088C4A18:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(5256)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4A30;
      }
      goto L_088C4A28;
    }
L_088C4A28:
    aot_gpr[31] = (0x088C4A30u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 36u, 0x0886325Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4A30u) goto L_088C4A30;
    return;
L_088C4A30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24852)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24760));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[31] = (0x088C4A4Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C4A4Cu) goto L_088C4A4C;
    return;
L_088C4A4C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4A60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C4A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 194u, 0x08810CD8u>(ctx, &aot_mem) && ctx.pc == 0x088C4A70u) goto L_088C4A70;
    return;
L_088C4A70:
    aot_gpr[31] = (0x088C4A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 193u, 0x08810CC0u>(ctx, &aot_mem) && ctx.pc == 0x088C4A78u) goto L_088C4A78;
    return;
L_088C4A78:
    aot_gpr[31] = (0x088C4A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 188u, 0x08872DE8u>(ctx, &aot_mem) && ctx.pc == 0x088C4A80u) goto L_088C4A80;
    return;
L_088C4A80:
    aot_gpr[31] = (0x088C4A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 72u, 0x088945DCu>(ctx, &aot_mem) && ctx.pc == 0x088C4A88u) goto L_088C4A88;
    return;
L_088C4A88:
    aot_gpr[31] = (0x088C4A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 218u, 0x08862FD0u>(ctx, &aot_mem) && ctx.pc == 0x088C4A90u) goto L_088C4A90;
    return;
L_088C4A90:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-3951), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088C4AB4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(aot_gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 30u, 0x088111C4u>(ctx, &aot_mem) && ctx.pc == 0x088C4AB4u) goto L_088C4AB4;
    return;
L_088C4AB4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4AC0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4AC8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28576), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4AE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-2852)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[17] = (0u | 8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    aot_gpr[18] = (2218u << 16u);
      if (branch_taken) {
          goto L_088C4BC8;
      }
      goto L_088C4B1C;
    }
L_088C4B1C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(2696));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(307), static_cast<std::uint8_t>(0u));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(49)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088C4B48;
      }
      goto L_088C4B34;
    }
L_088C4B34:
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(307), static_cast<std::uint8_t>(aot_gpr[19]));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(5292), 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[17]);
      if (branch_taken) {
          goto L_088C4BC0;
      }
      goto L_088C4B48;
    }
L_088C4B48:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4B70;
      }
      goto L_088C4B54;
    }
L_088C4B54:
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[31] = (0x088C4B64u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(50));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 62u, 0x0886D3E4u>(ctx, &aot_mem) && ctx.pc == 0x088C4B64u) goto L_088C4B64;
    return;
L_088C4B64:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(5292), aot_gpr[19]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[17]);
      if (branch_taken) {
          goto L_088C4BC0;
      }
      goto L_088C4B70;
    }
L_088C4B70:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2696)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C4B94;
      }
      goto L_088C4B88;
    }
L_088C4B88:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088C4B98;
      }
      goto L_088C4B94;
    }
L_088C4B94:
    aot_gpr[4] = (0u | 0u);
    goto L_088C4B98;
L_088C4B98:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4BB4;
      }
      goto L_088C4BA0;
    }
L_088C4BA0:
    aot_gpr[31] = (0x088C4BA8u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(178));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 62u, 0x0886D3E4u>(ctx, &aot_mem) && ctx.pc == 0x088C4BA8u) goto L_088C4BA8;
    return;
L_088C4BA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(5292), aot_gpr[19]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[17]);
      if (branch_taken) {
          goto L_088C4BC0;
      }
      goto L_088C4BB4;
    }
L_088C4BB4:
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(307), static_cast<std::uint8_t>(aot_gpr[19]));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(5292), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    goto L_088C4BC0;
L_088C4BC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4BD0;
      }
      goto L_088C4BC8;
    }
L_088C4BC8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(5292), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    goto L_088C4BD0;
L_088C4BD0:
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
L_088C4BEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088C4C00u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 218u, 0x08862FD0u>(ctx, &aot_mem) && ctx.pc == 0x088C4C00u) goto L_088C4C00;
    return;
L_088C4C00:
    aot_gpr[31] = (0x088C4C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0296_entry, 296u, 174u, 0x0892CC70u>(ctx, &aot_mem) && ctx.pc == 0x088C4C08u) goto L_088C4C08;
    return;
L_088C4C08:
    aot_gpr[31] = (0x088C4C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0296_entry, 296u, 122u, 0x0892C8E4u>(ctx, &aot_mem) && ctx.pc == 0x088C4C10u) goto L_088C4C10;
    return;
L_088C4C10:
    aot_gpr[31] = (0x088C4C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0298_entry, 298u, 22u, 0x0892E160u>(ctx, &aot_mem) && ctx.pc == 0x088C4C18u) goto L_088C4C18;
    return;
L_088C4C18:
    aot_gpr[31] = (0x088C4C20u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088C4AE8;
L_088C4C20:
    aot_gpr[4] = (0u | 222u);
    aot_gpr[31] = (0x088C4C2Cu);
    aot_gpr[5] = (0u | 111u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 149u, 0x08943A90u>(ctx, &aot_mem) && ctx.pc == 0x088C4C2Cu) goto L_088C4C2C;
    return;
L_088C4C2C:
    aot_gpr[4] = (16879u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 49807u);
    aot_gpr[31] = (0x088C4C3Cu);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0279_entry, 279u, 192u, 0x0891BF0Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4C3Cu) goto L_088C4C3C;
    return;
L_088C4C3C:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-29080), aot_gpr[4]);
    goto L_088C4C48;
L_088C4C48:
    aot_gpr[31] = (0x088C4C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 33u, 0x08933178u>(ctx, &aot_mem) && ctx.pc == 0x088C4C50u) goto L_088C4C50;
    return;
L_088C4C50:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4C68;
      }
      goto L_088C4C58;
    }
L_088C4C58:
    aot_gpr[31] = (0x088C4C60u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 121u, 0x08932AB8u>(ctx, &aot_mem) && ctx.pc == 0x088C4C60u) goto L_088C4C60;
    return;
L_088C4C60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4C48;
      }
      goto L_088C4C68;
    }
L_088C4C68:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28792)));
    aot_gpr[31] = (0x088C4C78u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 55u, 0x08945B58u>(ctx, &aot_mem) && ctx.pc == 0x088C4C78u) goto L_088C4C78;
    return;
L_088C4C78:
    aot_gpr[31] = (0x088C4C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 197u, 0x08810D44u>(ctx, &aot_mem) && ctx.pc == 0x088C4C80u) goto L_088C4C80;
    return;
L_088C4C80:
    aot_gpr[31] = (0x088C4C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 222u, 0x08810F24u>(ctx, &aot_mem) && ctx.pc == 0x088C4C88u) goto L_088C4C88;
    return;
L_088C4C88:
    aot_gpr[31] = (0x088C4C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 197u, 0x08810D44u>(ctx, &aot_mem) && ctx.pc == 0x088C4C90u) goto L_088C4C90;
    return;
L_088C4C90:
    aot_gpr[31] = (0x088C4C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 222u, 0x08810F24u>(ctx, &aot_mem) && ctx.pc == 0x088C4C98u) goto L_088C4C98;
    return;
L_088C4C98:
    aot_gpr[31] = (0x088C4CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 2u, 0x08873008u>(ctx, &aot_mem) && ctx.pc == 0x088C4CA0u) goto L_088C4CA0;
    return;
L_088C4CA0:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(3492), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x088C4CB0u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 33u, 0x08811228u>(ctx, &aot_mem) && ctx.pc == 0x088C4CB0u) goto L_088C4CB0;
    return;
L_088C4CB0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4CC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24760));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C4CE4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C4CE4u) goto L_088C4CE4;
    return;
L_088C4CE4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4CF0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28584), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4D10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[31]);
    aot_gpr[31] = (0x088C4D34u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(31840));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 31u, 0x088111ECu>(ctx, &aot_mem) && ctx.pc == 0x088C4D34u) goto L_088C4D34;
    return;
L_088C4D34:
    aot_gpr[2] = (2218u << 16u);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(-6992))))));
    aot_gpr[11] = (24948u << 16u);
    aot_gpr[10] = (28787u << 16u);
    aot_gpr[9] = (30068u << 16u);
    aot_gpr[8] = (26950u << 16u);
    aot_gpr[7] = (23667u << 16u);
    aot_gpr[6] = (28271u << 16u);
    aot_gpr[5] = (25710u << 16u);
    aot_gpr[4] = (28271u << 16u);
    aot_gpr[3] = (0u | 9u);
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(24932));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(28767));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(21340));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(26214));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(25964));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(29254));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17780));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(18015));
      if (branch_taken) {
          goto L_088C4D90;
      }
      goto L_088C4D84;
    }
L_088C4D84:
    aot_gpr[3] = (0u | 13u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[3];
    // nop
      if (branch_taken) {
          goto L_088C4DD4;
      }
      goto L_088C4D90;
    }
L_088C4D90:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (21842u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(29556));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (29486u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21063));
    aot_gpr[5] = (0u | 26228u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[5]);
      if (branch_taken) {
          goto L_088C4E9C;
      }
      goto L_088C4DD4;
    }
L_088C4DD4:
    aot_gpr[3] = (0u | 15u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[3];
    // nop
      if (branch_taken) {
          goto L_088C4E20;
      }
      goto L_088C4DE0;
    }
L_088C4DE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (20554u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(29556));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (26228u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(29486));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088C4E9C;
      }
      goto L_088C4E20;
    }
L_088C4E20:
    aot_gpr[3] = (0u | 14u);
    if (aot_gpr[2] != aot_gpr[3]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[11]);
        goto L_088C4E6C;
    }
    goto L_088C4E2C;
L_088C4E2C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (20299u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(29556));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (26228u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(29486));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088C4E9C;
      }
      goto L_088C4E6C;
    }
L_088C4E6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (29486u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(29556));
    aot_gpr[5] = (0u | 26228u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    goto L_088C4E9C;
L_088C4E9C:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[16] = (0u | 1u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[31] = (0x088C4EBCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(31856));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 184u, 0x08877D80u>(ctx, &aot_mem) && ctx.pc == 0x088C4EBCu) goto L_088C4EBC;
    return;
L_088C4EBC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x088C4ED8u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 184u, 0x08877D80u>(ctx, &aot_mem) && ctx.pc == 0x088C4ED8u) goto L_088C4ED8;
    return;
L_088C4ED8:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5112));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7268), aot_gpr[17]);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(25548), static_cast<std::uint8_t>(aot_gpr[16]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4F0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(5112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4F3C;
      }
      goto L_088C4F34;
    }
L_088C4F34:
    aot_gpr[31] = (0x088C4F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 216u, 0x08877F7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4F3Cu) goto L_088C4F3C;
    return;
L_088C4F3C:
    aot_gpr[31] = (0x088C4F44u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 216u, 0x08877F7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4F44u) goto L_088C4F44;
    return;
L_088C4F44:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7268), 0u);
    aot_gpr[31] = (0x088C4F58u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 33u, 0x08811228u>(ctx, &aot_mem) && ctx.pc == 0x088C4F58u) goto L_088C4F58;
    return;
L_088C4F58:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4F6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C4F7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 100u, 0x0881B774u>(ctx, &aot_mem) && ctx.pc == 0x088C4F7Cu) goto L_088C4F7C;
    return;
L_088C4F7C:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[31] = (0x088C4F88u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(31888));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 111u, 0x0881B8F0u>(ctx, &aot_mem) && ctx.pc == 0x088C4F88u) goto L_088C4F88;
    return;
L_088C4F88:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[31] = (0x088C4F94u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(31904));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 111u, 0x0881B8F0u>(ctx, &aot_mem) && ctx.pc == 0x088C4F94u) goto L_088C4F94;
    return;
L_088C4F94:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[31] = (0x088C4FA0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(31920));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 111u, 0x0881B8F0u>(ctx, &aot_mem) && ctx.pc == 0x088C4FA0u) goto L_088C4FA0;
    return;
L_088C4FA0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4FAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C4FBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 105u, 0x0881B854u>(ctx, &aot_mem) && ctx.pc == 0x088C4FBCu) goto L_088C4FBC;
    return;
L_088C4FBC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4FC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = 0x088C5000u; return;
}

void recomp_unit_0192(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0192_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_192(Runtime &runtime) {
    runtime.register_generated_unit(192u, 0x088C4000u, 4096u, &recomp_unit_0192, &recomp_unit_0192_entry);
    runtime.register_function(0x088C4000u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C403Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4070u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4084u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C408Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4094u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C409Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C40ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C40BCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C40CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C40D4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C40DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C40E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4108u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4118u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4128u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4130u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4138u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4148u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C416Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4174u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C417Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4190u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4198u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C41A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C41A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C41B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C41B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C41CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C423Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C424Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4254u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4264u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4268u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4270u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C427Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C42A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C42C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C42E0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C42E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C42F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4300u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4310u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4314u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4318u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C433Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4360u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C437Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4388u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4398u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C43A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C43D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C43E0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C43ECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C43F4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4408u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4414u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C441Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4424u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C442Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4434u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4448u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4454u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C445Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4468u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C447Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4488u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4490u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C44A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C44B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C44ECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C44F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4518u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4530u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4538u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4540u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C454Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4560u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4568u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4578u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4594u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C45A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C45B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C45C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C45CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C45D4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C45DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C45ECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C45FCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4604u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4610u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4628u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4648u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4650u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4658u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4660u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4668u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4670u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4678u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4690u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C46B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C46B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C46C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C46D4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C46E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C46F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C471Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4724u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4784u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4788u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4794u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C47B4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C47BCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C47C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C47CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C47E0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C47FCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C480Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C483Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4854u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C485Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4864u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C487Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4888u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4890u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C48A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C48BCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C48D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C48DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C48FCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C490Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4918u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4938u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C499Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C49A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C49B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C49E4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C49F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C49F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4A00u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4A18u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4A28u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4A30u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4A4Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4A60u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4A70u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4A78u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4A80u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4A88u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4A90u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4AB4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4AC0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4AC8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4AE8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4B1Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4B34u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4B48u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4B54u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4B64u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4B70u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4B88u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4B94u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4B98u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4BA0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4BA8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4BB4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4BC0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4BC8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4BD0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4BECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4C00u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4C08u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4C10u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4C18u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4C20u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4C2Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4C3Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4C48u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4C50u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4C58u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4C60u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4C68u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4C78u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4C80u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4C88u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4C90u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4C98u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4CA0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4CB0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4CC0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4CE4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4CF0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4D10u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4D34u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4D84u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4D90u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4DD4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4DE0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4E20u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4E2Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4E6Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4E9Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4EBCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4ED8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4F0Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4F34u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4F3Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4F44u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4F58u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4F6Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4F7Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4F88u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4F94u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4FA0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4FACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4FBCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x088C4FC8u, &recomp_unit_0192, "recomp_unit_0192");
}
} // namespace psprecomp
