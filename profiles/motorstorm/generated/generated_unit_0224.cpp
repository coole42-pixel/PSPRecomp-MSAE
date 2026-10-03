#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0224[1023] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 14,
    15, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 25, 0, 26, 0, 0, 27, 0, 28, 0, 0, 29, 30, 0, 31, 0,
    0, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0,
    0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    0, 47, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0,
    0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 58, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0,
    0, 62, 0, 63, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 72, 0, 0, 0, 0,
    0, 73, 0, 0, 74, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 77, 78, 0, 0, 0, 79, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 0, 0, 0,
    94, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101,
    0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0,
    0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 113, 0, 0, 114, 115, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123,
    0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 129, 0, 0, 130, 0, 0, 0, 131,
    0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 136, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0,
    0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 0, 148, 0, 0,
    149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0,
    0, 0, 153, 154, 0, 0, 155, 0, 0, 0, 156, 0, 0, 157, 0, 158, 0, 0, 0, 159, 0, 160, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 167, 168, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 176, 177, 0, 178, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0,
    0, 0, 183, 184, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 188, 189, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 198, 199, 0, 0,
    0, 200, 201, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 208,
    0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 216,
};
void recomp_unit_0224_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088E4000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0224[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088E4000;
    case 2u: goto L_088E4008;
    case 3u: goto L_088E4020;
    case 4u: goto L_088E402C;
    case 5u: goto L_088E4048;
    case 6u: goto L_088E4058;
    case 7u: goto L_088E4064;
    case 8u: goto L_088E4074;
    case 9u: goto L_088E4090;
    case 10u: goto L_088E40AC;
    case 11u: goto L_088E40D0;
    case 12u: goto L_088E40E0;
    case 13u: goto L_088E40F0;
    case 14u: goto L_088E40FC;
    case 15u: goto L_088E4100;
    case 16u: goto L_088E4108;
    case 17u: goto L_088E4118;
    case 18u: goto L_088E412C;
    case 19u: goto L_088E4140;
    case 20u: goto L_088E4150;
    case 21u: goto L_088E4170;
    case 22u: goto L_088E4178;
    case 23u: goto L_088E41A4;
    case 24u: goto L_088E41B0;
    case 25u: goto L_088E41C4;
    case 26u: goto L_088E41CC;
    case 27u: goto L_088E41D8;
    case 28u: goto L_088E41E0;
    case 29u: goto L_088E41EC;
    case 30u: goto L_088E41F0;
    case 31u: goto L_088E41F8;
    case 32u: goto L_088E4208;
    case 33u: goto L_088E4214;
    case 34u: goto L_088E4224;
    case 35u: goto L_088E4230;
    case 36u: goto L_088E4240;
    case 37u: goto L_088E4250;
    case 38u: goto L_088E425C;
    case 39u: goto L_088E4268;
    case 40u: goto L_088E4278;
    case 41u: goto L_088E4284;
    case 42u: goto L_088E4290;
    case 43u: goto L_088E42AC;
    case 44u: goto L_088E42C8;
    case 45u: goto L_088E42D8;
    case 46u: goto L_088E42F0;
    case 47u: goto L_088E4304;
    case 48u: goto L_088E4314;
    case 49u: goto L_088E4320;
    case 50u: goto L_088E4334;
    case 51u: goto L_088E4350;
    case 52u: goto L_088E4360;
    case 53u: goto L_088E436C;
    case 54u: goto L_088E4378;
    case 55u: goto L_088E438C;
    case 56u: goto L_088E4398;
    case 57u: goto L_088E43AC;
    case 58u: goto L_088E43BC;
    case 59u: goto L_088E43C0;
    case 60u: goto L_088E43D0;
    case 61u: goto L_088E43F8;
    case 62u: goto L_088E4404;
    case 63u: goto L_088E440C;
    case 64u: goto L_088E4410;
    case 65u: goto L_088E4430;
    case 66u: goto L_088E443C;
    case 67u: goto L_088E44BC;
    case 68u: goto L_088E44C8;
    case 69u: goto L_088E44FC;
    case 70u: goto L_088E4554;
    case 71u: goto L_088E4568;
    case 72u: goto L_088E456C;
    case 73u: goto L_088E4584;
    case 74u: goto L_088E4590;
    case 75u: goto L_088E45A4;
    case 76u: goto L_088E45AC;
    case 77u: goto L_088E45C0;
    case 78u: goto L_088E45C4;
    case 79u: goto L_088E45D4;
    case 80u: goto L_088E45D8;
    case 81u: goto L_088E45E8;
    case 82u: goto L_088E4628;
    case 83u: goto L_088E4630;
    case 84u: goto L_088E464C;
    case 85u: goto L_088E4658;
    case 86u: goto L_088E4670;
    case 87u: goto L_088E4680;
    case 88u: goto L_088E46A8;
    case 89u: goto L_088E46CC;
    case 90u: goto L_088E46D4;
    case 91u: goto L_088E46DC;
    case 92u: goto L_088E46E4;
    case 93u: goto L_088E46EC;
    case 94u: goto L_088E4700;
    case 95u: goto L_088E4704;
    case 96u: goto L_088E472C;
    case 97u: goto L_088E4738;
    case 98u: goto L_088E4740;
    case 99u: goto L_088E4748;
    case 100u: goto L_088E476C;
    case 101u: goto L_088E477C;
    case 102u: goto L_088E4790;
    case 103u: goto L_088E47BC;
    case 104u: goto L_088E47D4;
    case 105u: goto L_088E47F8;
    case 106u: goto L_088E4804;
    case 107u: goto L_088E4820;
    case 108u: goto L_088E4834;
    case 109u: goto L_088E4850;
    case 110u: goto L_088E4858;
    case 111u: goto L_088E487C;
    case 112u: goto L_088E48A4;
    case 113u: goto L_088E48A8;
    case 114u: goto L_088E48B4;
    case 115u: goto L_088E48B8;
    case 116u: goto L_088E48C0;
    case 117u: goto L_088E48D0;
    case 118u: goto L_088E4908;
    case 119u: goto L_088E4924;
    case 120u: goto L_088E492C;
    case 121u: goto L_088E4938;
    case 122u: goto L_088E4960;
    case 123u: goto L_088E497C;
    case 124u: goto L_088E498C;
    case 125u: goto L_088E49AC;
    case 126u: goto L_088E49B8;
    case 127u: goto L_088E49C8;
    case 128u: goto L_088E49D8;
    case 129u: goto L_088E49E0;
    case 130u: goto L_088E49EC;
    case 131u: goto L_088E49FC;
    case 132u: goto L_088E4A04;
    case 133u: goto L_088E4A14;
    case 134u: goto L_088E4A68;
    case 135u: goto L_088E4A70;
    case 136u: goto L_088E4A78;
    case 137u: goto L_088E4A80;
    case 138u: goto L_088E4AB0;
    case 139u: goto L_088E4AE0;
    case 140u: goto L_088E4AEC;
    case 141u: goto L_088E4B04;
    case 142u: goto L_088E4B20;
    case 143u: goto L_088E4B2C;
    case 144u: goto L_088E4B40;
    case 145u: goto L_088E4B4C;
    case 146u: goto L_088E4B58;
    case 147u: goto L_088E4B64;
    case 148u: goto L_088E4B74;
    case 149u: goto L_088E4B80;
    case 150u: goto L_088E4B90;
    case 151u: goto L_088E4BC8;
    case 152u: goto L_088E4BF4;
    case 153u: goto L_088E4C08;
    case 154u: goto L_088E4C0C;
    case 155u: goto L_088E4C18;
    case 156u: goto L_088E4C28;
    case 157u: goto L_088E4C34;
    case 158u: goto L_088E4C3C;
    case 159u: goto L_088E4C4C;
    case 160u: goto L_088E4C54;
    case 161u: goto L_088E4C5C;
    case 162u: goto L_088E4C64;
    case 163u: goto L_088E4C8C;
    case 164u: goto L_088E4C94;
    case 165u: goto L_088E4CA8;
    case 166u: goto L_088E4CB0;
    case 167u: goto L_088E4CC0;
    case 168u: goto L_088E4CC4;
    case 169u: goto L_088E4CCC;
    case 170u: goto L_088E4CD4;
    case 171u: goto L_088E4D04;
    case 172u: goto L_088E4D18;
    case 173u: goto L_088E4D38;
    case 174u: goto L_088E4D9C;
    case 175u: goto L_088E4DA4;
    case 176u: goto L_088E4DB4;
    case 177u: goto L_088E4DB8;
    case 178u: goto L_088E4DC0;
    case 179u: goto L_088E4DC8;
    case 180u: goto L_088E4DDC;
    case 181u: goto L_088E4DEC;
    case 182u: goto L_088E4DF8;
    case 183u: goto L_088E4E08;
    case 184u: goto L_088E4E0C;
    case 185u: goto L_088E4E14;
    case 186u: goto L_088E4E24;
    case 187u: goto L_088E4E38;
    case 188u: goto L_088E4E40;
    case 189u: goto L_088E4E44;
    case 190u: goto L_088E4E54;
    case 191u: goto L_088E4E5C;
    case 192u: goto L_088E4E84;
    case 193u: goto L_088E4E9C;
    case 194u: goto L_088E4EA8;
    case 195u: goto L_088E4EC4;
    case 196u: goto L_088E4ED8;
    case 197u: goto L_088E4EE8;
    case 198u: goto L_088E4EF0;
    case 199u: goto L_088E4EF4;
    case 200u: goto L_088E4F04;
    case 201u: goto L_088E4F08;
    case 202u: goto L_088E4F14;
    case 203u: goto L_088E4F28;
    case 204u: goto L_088E4F40;
    case 205u: goto L_088E4F48;
    case 206u: goto L_088E4F5C;
    case 207u: goto L_088E4F68;
    case 208u: goto L_088E4F7C;
    case 209u: goto L_088E4F90;
    case 210u: goto L_088E4FA0;
    case 211u: goto L_088E4FA8;
    case 212u: goto L_088E4FBC;
    case 213u: goto L_088E4FCC;
    case 214u: goto L_088E4FD8;
    case 215u: goto L_088E4FE4;
    case 216u: goto L_088E4FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088E4000:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(860)));
      if (branch_taken) {
          goto L_088E402C;
      }
      goto L_088E4008;
    }
L_088E4008:
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088E4020u);
    aot_gpr[9] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 9u, 0x088E70BCu>(ctx, &aot_mem) && ctx.pc == 0x088E4020u) goto L_088E4020;
    return;
L_088E4020:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(860)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(204)));
    goto L_088E402C;
L_088E402C:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088E4048u);
    aot_gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 58u, 0x088E73ECu>(ctx, &aot_mem) && ctx.pc == 0x088E4048u) goto L_088E4048;
    return;
L_088E4048:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(204)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0223_entry, 223u, 191u, 0x088E3FD4u>(ctx, &aot_mem); return;
      }
      goto L_088E4058;
    }
L_088E4058:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088E4140;
      }
      goto L_088E4064;
    }
L_088E4064:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4108;
      }
      goto L_088E4074;
    }
L_088E4074:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[17]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4100;
      }
      goto L_088E4090;
    }
L_088E4090:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(860)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x088E40ACu);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 9u, 0x088E70BCu>(ctx, &aot_mem) && ctx.pc == 0x088E40ACu) goto L_088E40AC;
    return;
L_088E40AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(860)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(204)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (0u | 5u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x088E40D0u);
    aot_gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 58u, 0x088E73ECu>(ctx, &aot_mem) && ctx.pc == 0x088E40D0u) goto L_088E40D0;
    return;
L_088E40D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[30]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E40FC;
      }
      goto L_088E40E0;
    }
L_088E40E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(856)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x088E40F0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 159u, 0x088DDC3Cu>(ctx, &aot_mem) && ctx.pc == 0x088E40F0u) goto L_088E40F0;
    return;
L_088E40F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(196)));
    aot_gpr[4] = (aot_gpr[4] | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(196), aot_gpr[4]);
    goto L_088E40FC;
L_088E40FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(204)));
    goto L_088E4100;
L_088E4100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4150;
      }
      goto L_088E4108;
    }
L_088E4108:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[30]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E4150;
      }
      goto L_088E4118;
    }
L_088E4118:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x088E412Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(856)));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 159u, 0x088DDC3Cu>(ctx, &aot_mem) && ctx.pc == 0x088E412Cu) goto L_088E412C;
    return;
L_088E412C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(196)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(204)));
    aot_gpr[4] = (aot_gpr[4] | 32u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(196), aot_gpr[4]);
      if (branch_taken) {
          goto L_088E4150;
      }
      goto L_088E4140;
    }
L_088E4140:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(196)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(196), aot_gpr[4]);
    goto L_088E4150;
L_088E4150:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[17] << 5u);
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E4208;
      }
      goto L_088E4170;
    }
L_088E4170:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4208;
      }
      goto L_088E4178;
    }
L_088E4178:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(868)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(24))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), aot_gpr[5]);
    aot_gpr[20] = (aot_gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[20] & 255u);
    aot_gpr[19] = (0u | 1u);
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_088E41A4;
L_088E41A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E41F8;
      }
      goto L_088E41B0;
    }
L_088E41B0:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(868)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088E41C4u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 83u, 0x088DE674u>(ctx, &aot_mem) && ctx.pc == 0x088E41C4u) goto L_088E41C4;
    return;
L_088E41C4:
    { const bool branch_taken = aot_gpr[21] != aot_gpr[19];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(868)));
      if (branch_taken) {
          goto L_088E41E0;
      }
      goto L_088E41CC;
    }
L_088E41CC:
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x088E41D8u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 91u, 0x088DE718u>(ctx, &aot_mem) && ctx.pc == 0x088E41D8u) goto L_088E41D8;
    return;
L_088E41D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(868)));
      if (branch_taken) {
          goto L_088E41F0;
      }
      goto L_088E41E0;
    }
L_088E41E0:
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x088E41ECu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 91u, 0x088DE718u>(ctx, &aot_mem) && ctx.pc == 0x088E41ECu) goto L_088E41EC;
    return;
L_088E41EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(868)));
    goto L_088E41F0;
L_088E41F0:
    aot_gpr[31] = (0x088E41F8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 100u, 0x088DE784u>(ctx, &aot_mem) && ctx.pc == 0x088E41F8u) goto L_088E41F8;
    return;
L_088E41F8:
    aot_gpr[16] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E41A4;
      }
      goto L_088E4208;
    }
L_088E4208:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_088E4250;
      }
      goto L_088E4214;
    }
L_088E4214:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4250;
      }
      goto L_088E4224;
    }
L_088E4224:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(876)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4250;
      }
      goto L_088E4230;
    }
L_088E4230:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088E4240u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 102u, 0x088CEA18u>(ctx, &aot_mem) && ctx.pc == 0x088E4240u) goto L_088E4240;
    return;
L_088E4240:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088E4250u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0223_entry, 223u, 21u, 0x088E316Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4250u) goto L_088E4250;
    return;
L_088E4250:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(204)));
      if (branch_taken) {
          goto L_088E4350;
      }
      goto L_088E425C;
    }
L_088E425C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(21))))));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4350;
      }
      goto L_088E4268;
    }
L_088E4268:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4350;
      }
      goto L_088E4278;
    }
L_088E4278:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E4350;
      }
      goto L_088E4284;
    }
L_088E4284:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(876)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4350;
      }
      goto L_088E4290;
    }
L_088E4290:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088E4350;
      }
      goto L_088E42AC;
    }
L_088E42AC:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(21))))));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[17]);
      if (branch_taken) {
          goto L_088E4334;
      }
      goto L_088E42C8;
    }
L_088E42C8:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[18] + aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    goto L_088E42D8;
L_088E42D8:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(24)));
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[8]);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[10] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = aot_gpr[10] != aot_gpr[11];
    // nop
      if (branch_taken) {
          goto L_088E4320;
      }
      goto L_088E42F0;
    }
L_088E42F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[31] = (0x088E4304u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    if (rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 61u, 0x088CE70Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4304u) goto L_088E4304;
    return;
L_088E4304:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088E4314u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 70u, 0x088CE7B0u>(ctx, &aot_mem) && ctx.pc == 0x088E4314u) goto L_088E4314;
    return;
L_088E4314:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(876)));
      if (branch_taken) {
          goto L_088E4334;
      }
      goto L_088E4320;
    }
L_088E4320:
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(21))))));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[10]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E42D8;
      }
      goto L_088E4334;
    }
L_088E4334:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088E42AC;
      }
      goto L_088E4350;
    }
L_088E4350:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(60));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E44BC;
      }
      goto L_088E4360;
    }
L_088E4360:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E44BC;
      }
      goto L_088E436C;
    }
L_088E436C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E44BC;
      }
      goto L_088E4378;
    }
L_088E4378:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(60));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088E438Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-3948)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088E438Cu) goto L_088E438C;
    return;
L_088E438C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E43C0;
      }
      goto L_088E4398;
    }
L_088E4398:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(204)));
    aot_gpr[4] = (0u | 4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(60));
    aot_gpr[31] = (0x088E43ACu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 158u, 0x08872BF0u>(ctx, &aot_mem) && ctx.pc == 0x088E43ACu) goto L_088E43AC;
    return;
L_088E43AC:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088E43BCu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0223_entry, 223u, 107u, 0x088E3874u>(ctx, &aot_mem) && ctx.pc == 0x088E43BCu) goto L_088E43BC;
    return;
L_088E43BC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_088E43C0;
L_088E43C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(880), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088E44BC;
      }
      goto L_088E43D0;
    }
L_088E43D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088E43F8u);
    aot_gpr[6] = (0u | 92u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E43F8u) goto L_088E43F8;
    return;
L_088E43F8:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4410;
      }
      goto L_088E4404;
    }
L_088E4404:
    aot_gpr[31] = (0x088E440Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x088E440Cu) goto L_088E440C;
    return;
L_088E440C:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_088E4410;
L_088E4410:
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(884), aot_gpr[17]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(884)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(72), aot_gpr[16]);
      if (branch_taken) {
          goto L_088E443C;
      }
      goto L_088E4430;
    }
L_088E4430:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(88)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    goto L_088E443C;
L_088E443C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(884)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(884)));
    aot_gpr[5] = (65280u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(884)));
    aot_gpr[5] = (4u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2056));
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[5] = (48588u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(884)));
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(884)));
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(884)));
    aot_gpr[6] = (0u | 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(884)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(884)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(884)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), 0u);
    goto L_088E44BC;
L_088E44BC:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x088E44C8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0223_entry, 223u, 125u, 0x088E3A04u>(ctx, &aot_mem) && ctx.pc == 0x088E44C8u) goto L_088E44C8;
    return;
L_088E44C8:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E44FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(204)));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(23)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (0u < aot_gpr[7] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[20]);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[6]);
      if (branch_taken) {
          goto L_088E4B90;
      }
      goto L_088E4554;
    }
L_088E4554:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(192))))));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088E45E8;
      }
      goto L_088E4568;
    }
L_088E4568:
    aot_gpr[17] = (aot_gpr[20] | 0u);
    goto L_088E456C;
L_088E456C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(868)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E45D8;
      }
      goto L_088E4584;
    }
L_088E4584:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[18];
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E45AC;
      }
      goto L_088E4590;
    }
L_088E4590:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x088E45A4u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 91u, 0x088DE718u>(ctx, &aot_mem) && ctx.pc == 0x088E45A4u) goto L_088E45A4;
    return;
L_088E45A4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(868)));
      if (branch_taken) {
          goto L_088E45C4;
      }
      goto L_088E45AC;
    }
L_088E45AC:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x088E45C0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 91u, 0x088DE718u>(ctx, &aot_mem) && ctx.pc == 0x088E45C0u) goto L_088E45C0;
    return;
L_088E45C0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(868)));
    goto L_088E45C4;
L_088E45C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E4584;
      }
      goto L_088E45D4;
    }
L_088E45D4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(192))))));
    goto L_088E45D8;
L_088E45D8:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E456C;
      }
      goto L_088E45E8;
    }
L_088E45E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(868)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4670;
      }
      goto L_088E4628;
    }
L_088E4628:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(204)));
    goto L_088E4630;
L_088E4630:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    aot_gpr[9] = (aot_gpr[8] + aot_gpr[6]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[6]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(21)));
    { const bool branch_taken = aot_gpr[9] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_088E4658;
      }
      goto L_088E464C;
    }
L_088E464C:
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[5]);
      if (branch_taken) {
          goto L_088E4670;
      }
      goto L_088E4658;
    }
L_088E4658:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E4630;
      }
      goto L_088E4670;
    }
L_088E4670:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[5]);
      if (branch_taken) {
          goto L_088E4B20;
      }
      goto L_088E4680;
    }
L_088E4680:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[4]);
    aot_gpr[4] = (16384u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[30]);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    goto L_088E46A8;
L_088E46A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088E46CCu);
    aot_gpr[7] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 176u, 0x088DEE14u>(ctx, &aot_mem) && ctx.pc == 0x088E46CCu) goto L_088E46CC;
    return;
L_088E46CC:
    aot_gpr[31] = (0x088E46D4u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 109u, 0x088DE830u>(ctx, &aot_mem) && ctx.pc == 0x088E46D4u) goto L_088E46D4;
    return;
L_088E46D4:
    aot_gpr[31] = (0x088E46DCu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 104u, 0x088DE7B8u>(ctx, &aot_mem) && ctx.pc == 0x088E46DCu) goto L_088E46DC;
    return;
L_088E46DC:
    aot_gpr[31] = (0x088E46E4u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 119u, 0x088DE93Cu>(ctx, &aot_mem) && ctx.pc == 0x088E46E4u) goto L_088E46E4;
    return;
L_088E46E4:
    aot_gpr[31] = (0x088E46ECu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 114u, 0x088DE8C0u>(ctx, &aot_mem) && ctx.pc == 0x088E46ECu) goto L_088E46EC;
    return;
L_088E46EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(68)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (2216u << 16u);
      if (branch_taken) {
          goto L_088E4790;
      }
      goto L_088E4700;
    }
L_088E4700:
    aot_gpr[17] = (aot_gpr[20] | 0u);
    goto L_088E4704;
L_088E4704:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088E472Cu);
    aot_gpr[6] = (0u | 56u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E472Cu) goto L_088E472C;
    return;
L_088E472C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_088E4748;
    }
    goto L_088E4738;
L_088E4738:
    aot_gpr[31] = (0x088E4740u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 10u, 0x08944134u>(ctx, &aot_mem) && ctx.pc == 0x088E4740u) goto L_088E4740;
    return;
L_088E4740:
    aot_gpr[18] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_088E4748;
L_088E4748:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(42)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (0x088E476Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 191u, 0x08943E00u>(ctx, &aot_mem) && ctx.pc == 0x088E476Cu) goto L_088E476C;
    return;
L_088E476C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088E477Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 100u, 0x088DE784u>(ctx, &aot_mem) && ctx.pc == 0x088E477Cu) goto L_088E477C;
    return;
L_088E477C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(68)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E4704;
      }
      goto L_088E4790;
    }
L_088E4790:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(204)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[18] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x088E47BCu);
    aot_gpr[7] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 176u, 0x088DEE14u>(ctx, &aot_mem) && ctx.pc == 0x088E47BCu) goto L_088E47BC;
    return;
L_088E47BC:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(204)));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(24))))));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[18]);
      if (branch_taken) {
          goto L_088E4B04;
      }
      goto L_088E47D4;
    }
L_088E47D4:
    aot_gpr[4] = (aot_gpr[23] ^ 1u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[23]);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (aot_gpr[23] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    aot_gpr[18] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[5]);
    goto L_088E47F8;
L_088E47F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088E4804u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0220_entry, 220u, 9u, 0x088E00CCu>(ctx, &aot_mem) && ctx.pc == 0x088E4804u) goto L_088E4804;
    return;
L_088E4804:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[16]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088E4820u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 83u, 0x088CD6DCu>(ctx, &aot_mem) && ctx.pc == 0x088E4820u) goto L_088E4820;
    return;
L_088E4820:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088E4834u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 83u, 0x088CD6DCu>(ctx, &aot_mem) && ctx.pc == 0x088E4834u) goto L_088E4834;
    return;
L_088E4834:
    aot_gpr[21] = (aot_gpr[22] + aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[30] = (aot_gpr[2] | 0u);
    aot_gpr[21] = (aot_gpr[17] + aot_gpr[21]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[17] + aot_gpr[22]);
      if (branch_taken) {
          goto L_088E49AC;
      }
      goto L_088E4850;
    }
L_088E4850:
    { const bool branch_taken = aot_gpr[16] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088E48A8;
      }
      goto L_088E4858;
    }
L_088E4858:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(102)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x088E487Cu);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 192u, 0x088DEF58u>(ctx, &aot_mem) && ctx.pc == 0x088E487Cu) goto L_088E487C;
    return;
L_088E487C:
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(292), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(292)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088E48A4u);
    aot_gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 177u, 0x088DFD70u>(ctx, &aot_mem) && ctx.pc == 0x088E48A4u) goto L_088E48A4;
    return;
L_088E48A4:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_088E48A8;
L_088E48A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088E48B8;
      }
      goto L_088E48B4;
    }
L_088E48B4:
    aot_gpr[5] = (0u | 2u);
    goto L_088E48B8;
L_088E48B8:
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E492C;
      }
      goto L_088E48C0;
    }
L_088E48C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4924;
      }
      goto L_088E48D0;
    }
L_088E48D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[19]);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(116)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(112)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(104)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(108)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(292)));
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[31] = (0x088E4908u);
    aot_gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 137u, 0x088DFA20u>(ctx, &aot_mem) && ctx.pc == 0x088E4908u) goto L_088E4908;
    return;
L_088E4908:
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(124), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(124)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_088E492C;
      }
      goto L_088E4924;
    }
L_088E4924:
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    goto L_088E492C;
L_088E492C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E49AC;
      }
      goto L_088E4938;
    }
L_088E4938:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (aot_gpr[29] + aot_gpr[22]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(36));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x088E4960u);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 192u, 0x088DEF58u>(ctx, &aot_mem) && ctx.pc == 0x088E4960u) goto L_088E4960;
    return;
L_088E4960:
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(128), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_088E49AC;
      }
      goto L_088E497C;
    }
L_088E497C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088E498Cu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 83u, 0x088CD6DCu>(ctx, &aot_mem) && ctx.pc == 0x088E498Cu) goto L_088E498C;
    return;
L_088E498C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(128)));
    aot_gpr[7] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x088E49ACu);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 199u, 0x088DFF4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E49ACu) goto L_088E49AC;
    return;
L_088E49AC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_088E49C8;
      }
      goto L_088E49B8;
    }
L_088E49B8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[20] = aot_fpr[12] - aot_fpr[20];
    goto L_088E49C8;
L_088E49C8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088E49D8u);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 83u, 0x088CD6DCu>(ctx, &aot_mem) && ctx.pc == 0x088E49D8u) goto L_088E49D8;
    return;
L_088E49D8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_088E49EC;
      }
      goto L_088E49E0;
    }
L_088E49E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(312)));
    aot_fpr[20] = aot_fpr[12] - aot_fpr[20];
    goto L_088E49EC;
L_088E49EC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088E49FCu);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 83u, 0x088CD6DCu>(ctx, &aot_mem) && ctx.pc == 0x088E49FCu) goto L_088E49FC;
    return;
L_088E49FC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(84)));
        goto L_088E4A14;
    }
    goto L_088E4A04;
L_088E4A04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(316)));
    aot_fpr[20] = aot_fpr[12] - aot_fpr[20];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(84)));
    goto L_088E4A14;
L_088E4A14:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(144))))));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(128)));
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(150))))));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(120)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(104)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(108)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[2] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (0x088E4A68u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0220_entry, 220u, 137u, 0x088E0B90u>(ctx, &aot_mem) && ctx.pc == 0x088E4A68u) goto L_088E4A68;
    return;
L_088E4A68:
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088E4A78;
      }
      goto L_088E4A70;
    }
L_088E4A70:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088E4A80;
      }
      goto L_088E4A78;
    }
L_088E4A78:
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    goto L_088E4A80;
L_088E4A80:
    aot_gpr[10] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(204)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[23]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(76)));
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[22]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(84)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(80)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088E4AB0u);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0220_entry, 220u, 82u, 0x088E0744u>(ctx, &aot_mem) && ctx.pc == 0x088E4AB0u) goto L_088E4AB0;
    return;
L_088E4AB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(204)));
    aot_gpr[5] = (aot_gpr[19] << 5u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (aot_gpr[19] << 2u);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-3948)));
    aot_gpr[31] = (0x088E4AE0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088E4AE0u) goto L_088E4AE0;
    return;
L_088E4AE0:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088E4AECu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 24u, 0x088C61B8u>(ctx, &aot_mem) && ctx.pc == 0x088E4AECu) goto L_088E4AEC;
    return;
L_088E4AEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(24))))));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E47F8;
      }
      goto L_088E4B04;
    }
L_088E4B04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(192))))));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[23]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[4]);
      if (branch_taken) {
          goto L_088E46A8;
      }
      goto L_088E4B20;
    }
L_088E4B20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4B4C;
      }
      goto L_088E4B2C;
    }
L_088E4B2C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-3948)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088E4B40u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088E4B40u) goto L_088E4B40;
    return;
L_088E4B40:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088E4B4Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 24u, 0x088C61B8u>(ctx, &aot_mem) && ctx.pc == 0x088E4B4Cu) goto L_088E4B4C;
    return;
L_088E4B4C:
    aot_gpr[16] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[29] | 0u);
    aot_gpr[18] = (2218u << 16u);
    goto L_088E4B58;
L_088E4B58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4B80;
      }
      goto L_088E4B64;
    }
L_088E4B64:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-3948)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088E4B74u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088E4B74u) goto L_088E4B74;
    return;
L_088E4B74:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088E4B80u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 24u, 0x088C61B8u>(ctx, &aot_mem) && ctx.pc == 0x088E4B80u) goto L_088E4B80;
    return;
L_088E4B80:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E4B58;
      }
      goto L_088E4B90;
    }
L_088E4B90:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4BC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(200)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4D18;
      }
      goto L_088E4BF4;
    }
L_088E4BF4:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(14))))));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (0u | 1000u);
      if (branch_taken) {
          goto L_088E4D18;
      }
      goto L_088E4C08;
    }
L_088E4C08:
    aot_gpr[17] = (0u | 100u);
    goto L_088E4C0C;
L_088E4C0C:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[31] = (0x088E4C18u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 119u, 0x088CF92Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4C18u) goto L_088E4C18;
    return;
L_088E4C18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 13 ? 1u : 0u);
      if (branch_taken) {
          goto L_088E4C54;
      }
      goto L_088E4C28;
    }
L_088E4C28:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 11 ? 1u : 0u);
      if (branch_taken) {
          goto L_088E4CC4;
      }
      goto L_088E4C34;
    }
L_088E4C34:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(204)));
      if (branch_taken) {
          goto L_088E4CB0;
      }
      goto L_088E4C3C;
    }
L_088E4C3C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (0u | 10u);
    aot_gpr[31] = (0x088E4C4Cu);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(2))))));
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 158u, 0x08872BF0u>(ctx, &aot_mem) && ctx.pc == 0x088E4C4Cu) goto L_088E4C4C;
    return;
L_088E4C4C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E4CC4;
      }
      goto L_088E4C54;
    }
L_088E4C54:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 14 ? 1u : 0u);
      if (branch_taken) {
          goto L_088E4C94;
      }
      goto L_088E4C5C;
    }
L_088E4C5C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4CC4;
      }
      goto L_088E4C64;
    }
L_088E4C64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(20))))));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (aot_gpr[5] << 3u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2))))));
    aot_gpr[31] = (0x088E4C8Cu);
    aot_gpr[4] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 158u, 0x08872BF0u>(ctx, &aot_mem) && ctx.pc == 0x088E4C8Cu) goto L_088E4C8C;
    return;
L_088E4C8C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E4CC4;
      }
      goto L_088E4C94;
    }
L_088E4C94:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr[4] = (0u | 10u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x088E4CA8u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(2))))));
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 158u, 0x08872BF0u>(ctx, &aot_mem) && ctx.pc == 0x088E4CA8u) goto L_088E4CA8;
    return;
L_088E4CA8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E4CC4;
      }
      goto L_088E4CB0;
    }
L_088E4CB0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (0u | 10u);
    aot_gpr[31] = (0x088E4CC0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(2))))));
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 158u, 0x08872BF0u>(ctx, &aot_mem) && ctx.pc == 0x088E4CC0u) goto L_088E4CC0;
    return;
L_088E4CC0:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_088E4CC4;
L_088E4CC4:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(200)));
      if (branch_taken) {
          goto L_088E4D04;
      }
      goto L_088E4CCC;
    }
L_088E4CCC:
    aot_gpr[31] = (0x088E4CD4u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 119u, 0x088CF92Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4CD4u) goto L_088E4CD4;
    return;
L_088E4CD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(132)));
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.lo);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(159), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(200)));
    goto L_088E4D04;
L_088E4D04:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(14))))));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E4C0C;
      }
      goto L_088E4D18;
    }
L_088E4D18:
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
L_088E4D38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[5] & 255u);
    aot_gpr[4] = (aot_gpr[6] & 2u);
    aot_gpr[5] = (aot_gpr[6] & 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[8] & 255u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[8] = (aot_gpr[4] & 255u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(192))))));
      if (branch_taken) {
          goto L_088E4DB4;
      }
      goto L_088E4D9C;
    }
L_088E4D9C:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[8] = (aot_gpr[6] & 32u);
      if (branch_taken) {
          goto L_088E4DB4;
      }
      goto L_088E4DA4;
    }
L_088E4DA4:
    aot_gpr[8] = (0u < aot_gpr[8] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4DB8;
      }
      goto L_088E4DB4;
    }
L_088E4DB4:
    aot_gpr[20] = (0u | 1u);
    goto L_088E4DB8;
L_088E4DB8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4DC8;
      }
      goto L_088E4DC0;
    }
L_088E4DC0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(204), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    goto L_088E4DC8;
L_088E4DC8:
    aot_gpr[5] = (aot_gpr[6] & 2u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_088E4E08;
      }
      goto L_088E4DDC;
    }
L_088E4DDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5104)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4E08;
      }
      goto L_088E4DEC;
    }
L_088E4DEC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4E08;
      }
      goto L_088E4DF8;
    }
L_088E4DF8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(968), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(968)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(204), aot_gpr[5]);
      if (branch_taken) {
          goto L_088E4E0C;
      }
      goto L_088E4E08;
    }
L_088E4E08:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(968), 0u);
    goto L_088E4E0C;
L_088E4E0C:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4E24;
      }
      goto L_088E4E14;
    }
L_088E4E14:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(160)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(184), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_088E4E38;
      }
      goto L_088E4E24;
    }
L_088E4E24:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(168)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(172)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(184), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(188), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    goto L_088E4E38;
L_088E4E38:
    { const bool branch_taken = aot_gpr[20] != 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_088E4E44;
      }
      goto L_088E4E40;
    }
L_088E4E40:
    aot_gpr[21] = (0u | 1u);
    goto L_088E4E44;
L_088E4E44:
    aot_gpr[22] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[30] = (aot_gpr[18] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_088E4EC4;
      }
      goto L_088E4E54;
    }
L_088E4E54:
    aot_gpr[30] = (aot_gpr[30] & 255u);
    aot_gpr[23] = (aot_gpr[16] | 0u);
    goto L_088E4E5C;
L_088E4E5C:
    aot_gpr[4] = (aot_gpr[5] & 32u);
    aot_gpr[9] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(176)));
    aot_gpr[9] = (aot_gpr[9] & 255u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[7] = (aot_gpr[22] | 0u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x088E4E84u);
    aot_gpr[10] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0223_entry, 223u, 133u, 0x088E3AB0u>(ctx, &aot_mem) && ctx.pc == 0x088E4E84u) goto L_088E4E84;
    return;
L_088E4E84:
    aot_gpr[7] = (aot_gpr[22] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088E4E9Cu);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0222_entry, 222u, 149u, 0x088E2A54u>(ctx, &aot_mem) && ctx.pc == 0x088E4E9Cu) goto L_088E4E9C;
    return;
L_088E4E9C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088E4EA8u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0222_entry, 222u, 219u, 0x088E2FD0u>(ctx, &aot_mem) && ctx.pc == 0x088E4EA8u) goto L_088E4EA8;
    return;
L_088E4EA8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(192))))));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_088E4E5C;
      }
      goto L_088E4EC4;
    }
L_088E4EC4:
    aot_gpr[6] = (aot_gpr[5] & 64u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] & 32u);
      if (branch_taken) {
          goto L_088E4F08;
      }
      goto L_088E4ED8;
    }
L_088E4ED8:
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E4F08;
      }
      goto L_088E4EE8;
    }
L_088E4EE8:
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E4EF4;
      }
      goto L_088E4EF0;
    }
L_088E4EF0:
    aot_gpr[21] = (0u | 1u);
    goto L_088E4EF4;
L_088E4EF4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088E4F04u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    goto L_088E44FC;
L_088E4F04:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(192))))));
    goto L_088E4F08;
L_088E4F08:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E4F28;
      }
      goto L_088E4F14;
    }
L_088E4F14:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(172)));
    aot_gpr[31] = (0x088E4F28u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0222_entry, 222u, 205u, 0x088E2E88u>(ctx, &aot_mem) && ctx.pc == 0x088E4F28u) goto L_088E4F28;
    return;
L_088E4F28:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[5] & 2u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[31] = (0x088E4F40u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0223_entry, 223u, 16u, 0x088E3108u>(ctx, &aot_mem) && ctx.pc == 0x088E4F40u) goto L_088E4F40;
    return;
L_088E4F40:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4F7C;
      }
      goto L_088E4F48;
    }
L_088E4F48:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(192))))));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088E4F7C;
      }
      goto L_088E4F5C;
    }
L_088E4F5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(176)));
    aot_gpr[31] = (0x088E4F68u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 124u, 0x0891F8E8u>(ctx, &aot_mem) && ctx.pc == 0x088E4F68u) goto L_088E4F68;
    return;
L_088E4F68:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(192))))));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E4F5C;
      }
      goto L_088E4F7C;
    }
L_088E4F7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(812)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0225_entry, 225u, 2u, 0x088E500Cu>(ctx, &aot_mem); return;
      }
      goto L_088E4F90;
    }
L_088E4F90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(816)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(176)));
    aot_gpr[31] = (0x088E4FA0u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0251_entry, 251u, 23u, 0x088FF214u>(ctx, &aot_mem) && ctx.pc == 0x088E4FA0u) goto L_088E4FA0;
    return;
L_088E4FA0:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4FF8;
      }
      goto L_088E4FA8;
    }
L_088E4FA8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(192))))));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088E4FF8;
      }
      goto L_088E4FBC;
    }
L_088E4FBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(860)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088E4FCCu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E4FCCu) goto L_088E4FCC;
    return;
L_088E4FCC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4FE4;
      }
      goto L_088E4FD8;
    }
L_088E4FD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x088E4FE4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 124u, 0x0891F8E8u>(ctx, &aot_mem) && ctx.pc == 0x088E4FE4u) goto L_088E4FE4;
    return;
L_088E4FE4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(192))))));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E4FBC;
      }
      goto L_088E4FF8;
    }
L_088E4FF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(812)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    ctx.pc = 0x088E5000u; return;
}

void recomp_unit_0224(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0224_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_224(Runtime &runtime) {
    runtime.register_generated_unit(224u, 0x088E4000u, 4096u, &recomp_unit_0224, &recomp_unit_0224_entry);
    runtime.register_function(0x088E4000u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4008u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4020u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E402Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4048u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4058u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4064u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4074u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4090u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E40ACu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E40D0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E40E0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E40F0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E40FCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4100u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4108u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4118u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E412Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4140u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4150u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4170u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4178u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E41A4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E41B0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E41C4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E41CCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E41D8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E41E0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E41ECu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E41F0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E41F8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4208u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4214u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4224u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4230u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4240u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4250u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E425Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4268u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4278u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4284u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4290u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E42ACu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E42C8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E42D8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E42F0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4304u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4314u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4320u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4334u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4350u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4360u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E436Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4378u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E438Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4398u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E43ACu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E43BCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E43C0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E43D0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E43F8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4404u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E440Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4410u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4430u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E443Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E44BCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E44C8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E44FCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4554u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4568u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E456Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4584u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4590u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E45A4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E45ACu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E45C0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E45C4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E45D4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E45D8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E45E8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4628u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4630u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E464Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4658u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4670u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4680u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E46A8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E46CCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E46D4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E46DCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E46E4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E46ECu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4700u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4704u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E472Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4738u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4740u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4748u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E476Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E477Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4790u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E47BCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E47D4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E47F8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4804u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4820u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4834u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4850u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4858u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E487Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E48A4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E48A8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E48B4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E48B8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E48C0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E48D0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4908u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4924u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E492Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4938u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4960u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E497Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E498Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E49ACu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E49B8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E49C8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E49D8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E49E0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E49ECu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E49FCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4A04u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4A14u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4A68u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4A70u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4A78u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4A80u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4AB0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4AE0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4AECu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4B04u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4B20u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4B2Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4B40u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4B4Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4B58u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4B64u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4B74u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4B80u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4B90u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4BC8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4BF4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4C08u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4C0Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4C18u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4C28u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4C34u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4C3Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4C4Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4C54u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4C5Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4C64u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4C8Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4C94u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4CA8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4CB0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4CC0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4CC4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4CCCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4CD4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4D04u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4D18u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4D38u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4D9Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4DA4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4DB4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4DB8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4DC0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4DC8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4DDCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4DECu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4DF8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4E08u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4E0Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4E14u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4E24u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4E38u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4E40u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4E44u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4E54u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4E5Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4E84u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4E9Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4EA8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4EC4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4ED8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4EE8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4EF0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4EF4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4F04u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4F08u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4F14u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4F28u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4F40u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4F48u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4F5Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4F68u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4F7Cu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4F90u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4FA0u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4FA8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4FBCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4FCCu, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4FD8u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4FE4u, &recomp_unit_0224, "recomp_unit_0224");
    runtime.register_function(0x088E4FF8u, &recomp_unit_0224, "recomp_unit_0224");
}
} // namespace psprecomp
