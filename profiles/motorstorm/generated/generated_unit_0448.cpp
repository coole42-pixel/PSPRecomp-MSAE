#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0448[1023] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 0, 4, 5, 6, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 9, 0, 0, 10, 0, 0, 11, 0, 0,
    12, 0, 13, 0, 14, 0, 0, 15, 16, 0, 17, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0,
    0, 0, 0, 0, 21, 22, 0, 23, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 26, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0, 0, 33, 0, 34, 0, 0, 0, 35, 36, 0, 0, 37, 0,
    38, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45,
    0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0,
    0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0,
    0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61,
    0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0,
    0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0,
    0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0,
    79, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0,
    0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0,
    95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100,
    0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 104, 0, 0, 105, 0, 106, 0,
    0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 112, 113, 0, 0, 0, 114, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 117, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0,
    0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0,
    0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 133, 134, 0,
    0, 0, 135, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 146, 0, 0, 147, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 151, 0, 0, 0, 0, 152, 0,
    153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 156, 0, 157, 0, 158, 159, 0, 0, 160, 0, 0, 161, 0, 0, 162, 163, 0, 0,
    0, 164, 165, 166, 0, 0, 0, 167, 0, 168, 0, 169, 0, 0, 170, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0,
    0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 177, 0, 178, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0,
    0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0,
    0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 206,
    0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210,
};
void recomp_unit_0448_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089C4004u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0448[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089C4004;
    case 2u: goto L_089C4010;
    case 3u: goto L_089C4024;
    case 4u: goto L_089C402C;
    case 5u: goto L_089C4030;
    case 6u: goto L_089C4034;
    case 7u: goto L_089C4044;
    case 8u: goto L_089C4054;
    case 9u: goto L_089C4060;
    case 10u: goto L_089C406C;
    case 11u: goto L_089C4078;
    case 12u: goto L_089C4084;
    case 13u: goto L_089C408C;
    case 14u: goto L_089C4094;
    case 15u: goto L_089C40A0;
    case 16u: goto L_089C40A4;
    case 17u: goto L_089C40AC;
    case 18u: goto L_089C40B0;
    case 19u: goto L_089C40E4;
    case 20u: goto L_089C40FC;
    case 21u: goto L_089C4114;
    case 22u: goto L_089C4118;
    case 23u: goto L_089C4120;
    case 24u: goto L_089C4138;
    case 25u: goto L_089C4140;
    case 26u: goto L_089C4150;
    case 27u: goto L_089C4158;
    case 28u: goto L_089C4164;
    case 29u: goto L_089C417C;
    case 30u: goto L_089C41AC;
    case 31u: goto L_089C41C0;
    case 32u: goto L_089C41C8;
    case 33u: goto L_089C41D4;
    case 34u: goto L_089C41DC;
    case 35u: goto L_089C41EC;
    case 36u: goto L_089C41F0;
    case 37u: goto L_089C41FC;
    case 38u: goto L_089C4204;
    case 39u: goto L_089C420C;
    case 40u: goto L_089C4214;
    case 41u: goto L_089C423C;
    case 42u: goto L_089C4248;
    case 43u: goto L_089C4250;
    case 44u: goto L_089C4268;
    case 45u: goto L_089C4280;
    case 46u: goto L_089C4298;
    case 47u: goto L_089C42B0;
    case 48u: goto L_089C42C8;
    case 49u: goto L_089C42E0;
    case 50u: goto L_089C42F8;
    case 51u: goto L_089C4310;
    case 52u: goto L_089C4328;
    case 53u: goto L_089C4340;
    case 54u: goto L_089C4358;
    case 55u: goto L_089C4370;
    case 56u: goto L_089C4388;
    case 57u: goto L_089C43A0;
    case 58u: goto L_089C43B8;
    case 59u: goto L_089C43D0;
    case 60u: goto L_089C43E8;
    case 61u: goto L_089C4400;
    case 62u: goto L_089C4418;
    case 63u: goto L_089C4430;
    case 64u: goto L_089C4448;
    case 65u: goto L_089C4460;
    case 66u: goto L_089C4478;
    case 67u: goto L_089C4490;
    case 68u: goto L_089C44A8;
    case 69u: goto L_089C44C0;
    case 70u: goto L_089C44D8;
    case 71u: goto L_089C44F0;
    case 72u: goto L_089C4508;
    case 73u: goto L_089C4520;
    case 74u: goto L_089C4538;
    case 75u: goto L_089C4550;
    case 76u: goto L_089C4558;
    case 77u: goto L_089C456C;
    case 78u: goto L_089C4578;
    case 79u: goto L_089C4584;
    case 80u: goto L_089C4590;
    case 81u: goto L_089C459C;
    case 82u: goto L_089C45C4;
    case 83u: goto L_089C45D4;
    case 84u: goto L_089C45F4;
    case 85u: goto L_089C45FC;
    case 86u: goto L_089C4608;
    case 87u: goto L_089C4624;
    case 88u: goto L_089C4634;
    case 89u: goto L_089C4670;
    case 90u: goto L_089C4678;
    case 91u: goto L_089C4694;
    case 92u: goto L_089C46CC;
    case 93u: goto L_089C46DC;
    case 94u: goto L_089C46FC;
    case 95u: goto L_089C4704;
    case 96u: goto L_089C4710;
    case 97u: goto L_089C472C;
    case 98u: goto L_089C473C;
    case 99u: goto L_089C4778;
    case 100u: goto L_089C4780;
    case 101u: goto L_089C479C;
    case 102u: goto L_089C47D4;
    case 103u: goto L_089C47E0;
    case 104u: goto L_089C47E8;
    case 105u: goto L_089C47F4;
    case 106u: goto L_089C47FC;
    case 107u: goto L_089C4820;
    case 108u: goto L_089C4828;
    case 109u: goto L_089C482C;
    case 110u: goto L_089C4840;
    case 111u: goto L_089C4854;
    case 112u: goto L_089C485C;
    case 113u: goto L_089C4860;
    case 114u: goto L_089C4870;
    case 115u: goto L_089C48C0;
    case 116u: goto L_089C48D4;
    case 117u: goto L_089C48D8;
    case 118u: goto L_089C48E4;
    case 119u: goto L_089C48F0;
    case 120u: goto L_089C48FC;
    case 121u: goto L_089C4908;
    case 122u: goto L_089C4928;
    case 123u: goto L_089C4930;
    case 124u: goto L_089C4958;
    case 125u: goto L_089C4960;
    case 126u: goto L_089C497C;
    case 127u: goto L_089C4988;
    case 128u: goto L_089C4994;
    case 129u: goto L_089C49B0;
    case 130u: goto L_089C49B8;
    case 131u: goto L_089C49D8;
    case 132u: goto L_089C49EC;
    case 133u: goto L_089C49F8;
    case 134u: goto L_089C49FC;
    case 135u: goto L_089C4A0C;
    case 136u: goto L_089C4A18;
    case 137u: goto L_089C4A20;
    case 138u: goto L_089C4A30;
    case 139u: goto L_089C4A5C;
    case 140u: goto L_089C4A7C;
    case 141u: goto L_089C4A84;
    case 142u: goto L_089C4ACC;
    case 143u: goto L_089C4AD8;
    case 144u: goto L_089C4AE0;
    case 145u: goto L_089C4AF0;
    case 146u: goto L_089C4B18;
    case 147u: goto L_089C4B24;
    case 148u: goto L_089C4B28;
    case 149u: goto L_089C4B54;
    case 150u: goto L_089C4B60;
    case 151u: goto L_089C4B68;
    case 152u: goto L_089C4B7C;
    case 153u: goto L_089C4B84;
    case 154u: goto L_089C4B9C;
    case 155u: goto L_089C4BB4;
    case 156u: goto L_089C4BBC;
    case 157u: goto L_089C4BC4;
    case 158u: goto L_089C4BCC;
    case 159u: goto L_089C4BD0;
    case 160u: goto L_089C4BDC;
    case 161u: goto L_089C4BE8;
    case 162u: goto L_089C4BF4;
    case 163u: goto L_089C4BF8;
    case 164u: goto L_089C4C08;
    case 165u: goto L_089C4C0C;
    case 166u: goto L_089C4C10;
    case 167u: goto L_089C4C20;
    case 168u: goto L_089C4C28;
    case 169u: goto L_089C4C30;
    case 170u: goto L_089C4C3C;
    case 171u: goto L_089C4C50;
    case 172u: goto L_089C4C58;
    case 173u: goto L_089C4C6C;
    case 174u: goto L_089C4C74;
    case 175u: goto L_089C4C8C;
    case 176u: goto L_089C4C94;
    case 177u: goto L_089C4CAC;
    case 178u: goto L_089C4CB4;
    case 179u: goto L_089C4CBC;
    case 180u: goto L_089C4CC4;
    case 181u: goto L_089C4CE0;
    case 182u: goto L_089C4CE8;
    case 183u: goto L_089C4D08;
    case 184u: goto L_089C4D20;
    case 185u: goto L_089C4D2C;
    case 186u: goto L_089C4D34;
    case 187u: goto L_089C4D44;
    case 188u: goto L_089C4D58;
    case 189u: goto L_089C4D94;
    case 190u: goto L_089C4DA8;
    case 191u: goto L_089C4DB8;
    case 192u: goto L_089C4DD4;
    case 193u: goto L_089C4DE8;
    case 194u: goto L_089C4DF0;
    case 195u: goto L_089C4E0C;
    case 196u: goto L_089C4E30;
    case 197u: goto L_089C4E90;
    case 198u: goto L_089C4EB8;
    case 199u: goto L_089C4EC4;
    case 200u: goto L_089C4EE8;
    case 201u: goto L_089C4EFC;
    case 202u: goto L_089C4F2C;
    case 203u: goto L_089C4F34;
    case 204u: goto L_089C4F5C;
    case 205u: goto L_089C4F7C;
    case 206u: goto L_089C4F80;
    case 207u: goto L_089C4FA4;
    case 208u: goto L_089C4FD0;
    case 209u: goto L_089C4FF4;
    case 210u: goto L_089C4FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089C4004:
    aot_gpr[2] = (aot_gpr[18] < static_cast<std::uint32_t>(33) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          goto L_089C40E4;
      }
      goto L_089C4010;
    }
L_089C4010:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[7] << 1u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[31] = (0x089C4024u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4024u) goto L_089C4024;
    return;
L_089C4024:
    if (aot_gpr[18] != 0u) {
    aot_gpr[2] = (21845u << 16u);
        goto L_089C40FC;
    }
    goto L_089C402C;
L_089C402C:
    aot_gpr[4] = (0u + 0u);
    goto L_089C4030;
L_089C4030:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089C4034;
L_089C4034:
    aot_gpr[2] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
      if (branch_taken) {
          goto L_089C40B0;
      }
      goto L_089C4044;
    }
L_089C4044:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[8] = (aot_gpr[21] + 0u);
    aot_gpr[10] = (aot_gpr[21] + static_cast<std::uint32_t>(6));
    aot_gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089C4054;
L_089C4054:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr[7] == aot_gpr[11]) {
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[7]));
        goto L_089C40A0;
    }
    goto L_089C4060;
L_089C4060:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[9] == 0u) {
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(2));
        goto L_089C40A4;
    }
    goto L_089C406C;
L_089C406C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[4] = (0u + 0u);
    goto L_089C4078;
L_089C4078:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
        goto L_089C4094;
    }
    goto L_089C4084;
L_089C4084:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[7];
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C420C;
      }
      goto L_089C408C;
    }
L_089C408C:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_gpr[2]))));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089C4094;
L_089C4094:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C4078;
      }
      goto L_089C40A0;
    }
L_089C40A0:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(2));
    goto L_089C40A4;
L_089C40A4:
    { const bool branch_taken = aot_gpr[10] != aot_gpr[8];
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C4054;
      }
      goto L_089C40AC;
    }
L_089C40AC:
    aot_gpr[4] = (0u + 0u);
    goto L_089C40B0;
L_089C40B0:
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
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C40E4:
    aot_gpr[2] = (aot_gpr[18] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-13048));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C40FC:
    aot_gpr[3] = (26214u << 16u);
    aot_gpr[22] = (aot_gpr[2] | 21846u);
    aot_gpr[23] = (aot_gpr[3] | 26215u);
    aot_gpr[20] = (0u + 0u);
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    goto L_089C4120;
L_089C4114:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089C4118;
L_089C4118:
    if (aot_gpr[18] == aot_gpr[20]) {
    aot_gpr[4] = (0u + 0u);
        goto L_089C4030;
    }
    goto L_089C4120;
L_089C4120:
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_gpr[20]))));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089C4138u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 190u, 0x089C3EA4u>(ctx, &aot_mem) && ctx.pc == 0x089C4138u) goto L_089C4138;
    return;
L_089C4138:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C4030;
      }
      goto L_089C4140;
    }
L_089C4140:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < 2 ? 1u : 0u);
    if (aot_gpr[8] == 0u) {
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
        goto L_089C4118;
    }
    goto L_089C4150;
L_089C4150:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) <= 0;
    aot_gpr[2] = (aot_gpr[17] ^ 1u);
      if (branch_taken) {
          goto L_089C4114;
      }
      goto L_089C4158;
    }
L_089C4158:
    aot_gpr[2] = (aot_gpr[2] & 1u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[23])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
      if (branch_taken) {
          goto L_089C4214;
      }
      goto L_089C4164;
    }
L_089C4164:
    aot_gpr[2] = (aot_gpr[17] >> 31u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> 1u));
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 2u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[3]));
    goto L_089C417C;
L_089C417C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(2))))));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (aot_gpr[5] << 1u);
    aot_gpr[2] = (aot_gpr[6] << 1u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
      if (branch_taken) {
          goto L_089C41EC;
      }
      goto L_089C41AC;
    }
L_089C41AC:
    aot_gpr[11] = (0u + 0u);
    aot_gpr[10] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    goto L_089C41C0;
L_089C41C0:
    aot_gpr[2] = (0u + 0u);
    aot_gpr[5] = (aot_gpr[11] + aot_gpr[30]);
    goto L_089C41C8;
L_089C41C8:
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[6];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C4558;
      }
      goto L_089C41D4;
    }
L_089C41D4:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[9];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C41C8;
      }
      goto L_089C41DC;
    }
L_089C41DC:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[7]) < 2 ? 1u : 0u);
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C423C;
      }
      goto L_089C41EC;
    }
L_089C41EC:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    goto L_089C41F0;
L_089C41F0:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C41FCu);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 190u, 0x089C3EA4u>(ctx, &aot_mem) && ctx.pc == 0x089C41FCu) goto L_089C41FC;
    return;
L_089C41FC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C4114;
      }
      goto L_089C4204;
    }
L_089C4204:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089C4034;
L_089C420C:
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_089C40A0;
L_089C4214:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 31u));
    aot_gpr[2] = (ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> 1u));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[3] = (ctx.hi);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[3]));
    goto L_089C417C;
L_089C423C:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[11]) < 2 ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
        goto L_089C41C0;
    }
    goto L_089C4248;
L_089C4248:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    goto L_089C41F0;
L_089C4250:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-14704));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C4268:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-14608));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C4280:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-14512));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C4298:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-14420));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C42B0:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-14332));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C42C8:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-14248));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C42E0:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-14164));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C42F8:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-14084));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C4310:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-14008));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C4328:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13936));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C4340:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13864));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C4358:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13796));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C4370:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13732));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C4388:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13672));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C43A0:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13612));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C43B8:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13556));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C43D0:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13504));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C43E8:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13456));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C4400:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13408));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C4418:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13364));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C4430:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13324));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C4448:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13288));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C4460:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13252));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C4478:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13220));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C4490:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13192));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C44A8:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13168));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C44C0:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13144));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C44D8:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13124));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C44F0:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13108));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C4508:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13096));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C4520:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13084));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C4538:
    aot_gpr[3] = (aot_gpr[16] << 1u);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13076));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089C4044;
L_089C4550:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(4));
    goto L_089C40B0;
L_089C4558:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[12] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[3] = (aot_gpr[2] + aot_gpr[3]);
    goto L_089C456C;
L_089C456C:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr[2] == aot_gpr[8]) {
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
        goto L_089C4590;
    }
    goto L_089C4578;
L_089C4578:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[12];
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C456C;
      }
      goto L_089C4584;
    }
L_089C4584:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    goto L_089C41DC;
L_089C4590:
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    goto L_089C41DC;
L_089C459C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[8] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_089C4608;
      }
      goto L_089C45C4;
    }
L_089C45C4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (0u | 54502u);
      if (branch_taken) {
          goto L_089C4608;
      }
      goto L_089C45D4;
    }
L_089C45D4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (aot_gpr[5] & 65535u);
    aot_gpr[9] = (aot_gpr[6] + 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(10));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[17];
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_089C4608;
      }
      goto L_089C45F4;
    }
L_089C45F4:
    aot_gpr[31] = (0x089C45FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 24u, 0x08994140u>(ctx, &aot_mem) && ctx.pc == 0x089C45FCu) goto L_089C45FC;
    return;
L_089C45FC:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(13));
      if (branch_taken) {
          goto L_089C4624;
      }
      goto L_089C4608;
    }
L_089C4608:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C4624:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089C4634u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089C4634u) goto L_089C4634;
    return;
L_089C4634:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr[3] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[3]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089C4670u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4670u) goto L_089C4670;
    return;
L_089C4670:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_089C4608;
      }
      goto L_089C4678;
    }
L_089C4678:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C4694:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-624));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(616), aot_gpr[18]);
    aot_gpr[3] = (aot_gpr[7] + 0u);
    aot_gpr[12] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(612), aot_gpr[17]);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[17] = (aot_gpr[11] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(608), aot_gpr[16]);
    aot_gpr[11] = (aot_gpr[9] + 0u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(620), aot_gpr[31]);
    aot_gpr[9] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_089C4710;
      }
      goto L_089C46CC;
    }
L_089C46CC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (0u | 54502u);
      if (branch_taken) {
          goto L_089C4710;
      }
      goto L_089C46DC;
    }
L_089C46DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (aot_gpr[8] & 255u);
    aot_gpr[10] = (aot_gpr[3] + 0u);
    aot_gpr[8] = (aot_gpr[5] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(98));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[17];
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(510));
      if (branch_taken) {
          goto L_089C4710;
      }
      goto L_089C46FC;
    }
L_089C46FC:
    aot_gpr[31] = (0x089C4704u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 40u, 0x0899424Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4704u) goto L_089C4704;
    return;
L_089C4704:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(13));
      if (branch_taken) {
          goto L_089C472C;
      }
      goto L_089C4710;
    }
L_089C4710:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(620)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(616)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(612)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(608)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(624));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C472C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089C473Cu);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089C473Cu) goto L_089C473C;
    return;
L_089C473C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr[3] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[3]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[3]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[2]));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089C4778u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4778u) goto L_089C4778;
    return;
L_089C4778:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(620)));
      if (branch_taken) {
          goto L_089C4710;
      }
      goto L_089C4780;
    }
L_089C4780:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(616)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(612)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(608)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(624));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C479C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-256));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(244), aot_gpr[30]);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[16]);
    aot_gpr[11] = (aot_gpr[8] + 0u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(248), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (aot_gpr[6] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(20), 0u);
    { const bool branch_taken = aot_gpr[10] == aot_gpr[2];
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_089C497C;
      }
      goto L_089C47D4;
    }
L_089C47D4:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_089C47E8;
      }
      goto L_089C47E0;
    }
L_089C47E0:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(13));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(13));
    goto L_089C47E8;
L_089C47E8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_089C4840;
      }
      goto L_089C47F4;
    }
L_089C47F4:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C4840;
      }
      goto L_089C47FC;
    }
L_089C47FC:
    aot_gpr[8] = (aot_gpr[9] + 0u);
    aot_gpr[10] = (aot_gpr[4] + 0u);
    aot_gpr[9] = (aot_gpr[11] & 255u);
    aot_gpr[4] = (aot_gpr[30] + static_cast<std::uint32_t>(98));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(133));
    aot_gpr[6] = (aot_gpr[30] + static_cast<std::uint32_t>(20));
    aot_gpr[11] = (aot_gpr[30] + static_cast<std::uint32_t>(18));
    aot_gpr[31] = (0x089C4820u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 40u, 0x0899424Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4820u) goto L_089C4820;
    return;
L_089C4820:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089C4860;
      }
      goto L_089C4828;
    }
L_089C4828:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_089C482C;
L_089C482C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(248)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(244)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C4840:
    aot_gpr[9] = (aot_gpr[5] + 0u);
    aot_gpr[4] = (aot_gpr[30] + static_cast<std::uint32_t>(98));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(133));
    aot_gpr[31] = (0x089C4854u);
    aot_gpr[6] = (aot_gpr[30] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 24u, 0x08994140u>(ctx, &aot_mem) && ctx.pc == 0x089C4854u) goto L_089C4854;
    return;
L_089C4854:
    if (aot_gpr[2] != 0u) {
    aot_gpr[29] = (aot_gpr[30] + 0u);
        goto L_089C482C;
    }
    goto L_089C485C;
L_089C485C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(20)));
    goto L_089C4860;
L_089C4860:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(13));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089C4870u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089C4870u) goto L_089C4870;
    return;
L_089C4870:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[5] = (aot_gpr[7] & 65535u);
    aot_gpr[3] = (aot_gpr[5] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(30));
    aot_gpr[3] = (aot_gpr[3] >> 4u);
    aot_gpr[3] = (aot_gpr[3] << 4u);
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[3]);
    aot_gpr[3] = (aot_gpr[30] + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(24), aot_gpr[3]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(92), aot_gpr[3]);
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089C4960;
      }
      goto L_089C48C0;
    }
L_089C48C0:
    aot_gpr[4] = (0u + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[8] = (aot_gpr[10] + 0u);
    goto L_089C48E4;
L_089C48D4:
    aot_gpr[2] = (aot_gpr[7] & 65535u);
    goto L_089C48D8;
L_089C48D8:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089C4928;
      }
      goto L_089C48E4;
    }
L_089C48E4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[9];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C48D4;
      }
      goto L_089C48F0;
    }
L_089C48F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (aot_gpr[7] & 65535u);
      if (branch_taken) {
          goto L_089C48D8;
      }
      goto L_089C48FC;
    }
L_089C48FC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[7] & 65535u);
      if (branch_taken) {
          goto L_089C48D8;
      }
      goto L_089C4908;
    }
L_089C4908:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[7] & 65535u);
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089C48E4;
      }
      goto L_089C4928;
    }
L_089C4928:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089C4960;
      }
      goto L_089C4930;
    }
L_089C4930:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[10] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(76)));
    aot_gpr[7] = (0u | 61440u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[10] = (aot_gpr[30] + static_cast<std::uint32_t>(24));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C4958u);
    aot_gpr[11] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4958u) goto L_089C4958;
    return;
L_089C4958:
    if (aot_gpr[2] != 0u) {
    aot_gpr[29] = (aot_gpr[30] + 0u);
        goto L_089C482C;
    }
    goto L_089C4960;
L_089C4960:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(248)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(244)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C497C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_089C47E8;
      }
      goto L_089C4988;
    }
L_089C4988:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(11));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(11));
    goto L_089C47E8;
L_089C4994:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_089C49FC;
      }
      goto L_089C49B0;
    }
L_089C49B0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C49FC;
      }
      goto L_089C49B8;
    }
L_089C49B8:
    aot_gpr[3] = (aot_gpr[5] << 6u);
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[5] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[7] = (aot_gpr[2] << 3u);
      if (branch_taken) {
          goto L_089C49FC;
      }
      goto L_089C49D8;
    }
L_089C49D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(436)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[8] = (0u + 0u);
        goto L_089C49FC;
    }
    goto L_089C49EC;
L_089C49EC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[6] + 0u);
      if (branch_taken) {
          goto L_089C4A0C;
      }
      goto L_089C49F8;
    }
L_089C49F8:
    aot_gpr[8] = (0u + 0u);
    goto L_089C49FC;
L_089C49FC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[8] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C4A0C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(220)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C4A18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4A18u) goto L_089C4A18;
    return;
L_089C4A18:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C49F8;
      }
      goto L_089C4A20;
    }
L_089C4A20:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[8] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C4A30:
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[7] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[5] << 6u);
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[2] << 3u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C4A7C;
      }
      goto L_089C4A5C;
    }
L_089C4A5C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(492));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(10)));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_089C4A7C;
L_089C4A7C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C4A84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (2217u << 16u);
    aot_gpr[20] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2792)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089C4B28;
      }
      goto L_089C4ACC;
    }
L_089C4ACC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u | 65534u);
      if (branch_taken) {
          goto L_089C4B24;
      }
      goto L_089C4AD8;
    }
L_089C4AD8:
    if (aot_gpr[5] == aot_gpr[2]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_089C4BC4;
    }
    goto L_089C4AE0;
L_089C4AE0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C4B28;
      }
      goto L_089C4AF0;
    }
L_089C4AF0:
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[3] = (aot_gpr[5] << 6u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(436)));
    if (aot_gpr[16] == 0u) {
    aot_gpr[3] = (0u + 0u);
        goto L_089C4B28;
    }
    goto L_089C4B18;
L_089C4B18:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(440)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(224)));
        goto L_089C4B54;
    }
    goto L_089C4B24;
L_089C4B24:
    aot_gpr[3] = (0u + 0u);
    goto L_089C4B28;
L_089C4B28:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
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
L_089C4B54:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C4B60u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4B60u) goto L_089C4B60;
    return;
L_089C4B60:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C4B28;
      }
      goto L_089C4B68;
    }
L_089C4B68:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(228)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C4B7Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4B7Cu) goto L_089C4B7C;
    return;
L_089C4B7C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C4B28;
      }
      goto L_089C4B84;
    }
L_089C4B84:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[18]);
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (0u + 0u);
        goto L_089C4B28;
    }
    goto L_089C4B9C;
L_089C4B9C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(232)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C4BB4u);
    aot_gpr[6] = (aot_gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4BB4u) goto L_089C4BB4;
    return;
L_089C4BB4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C4B28;
      }
      goto L_089C4BBC;
    }
L_089C4BBC:
    aot_gpr[3] = (0u + 0u);
    goto L_089C4B28;
L_089C4BC4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089C4B24;
      }
      goto L_089C4BCC;
    }
L_089C4BCC:
    aot_gpr[21] = (0u + 0u);
    goto L_089C4BD0;
L_089C4BD0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(444)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C4C0C;
      }
      goto L_089C4BDC;
    }
L_089C4BDC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(448)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089C4BF8;
    }
    goto L_089C4BE8;
L_089C4BE8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[21] = (aot_gpr[3] & 65535u);
        goto L_089C4C10;
    }
    goto L_089C4BF4;
L_089C4BF4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089C4BF8;
L_089C4BF8:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-3));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(436)));
        goto L_089C4C28;
    }
    goto L_089C4C08;
L_089C4C08:
    aot_gpr[3] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    goto L_089C4C0C;
L_089C4C0C:
    aot_gpr[21] = (aot_gpr[3] & 65535u);
    goto L_089C4C10;
L_089C4C10:
    aot_gpr[2] = (aot_gpr[4] & 65535u);
    aot_gpr[2] = (aot_gpr[21] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089C4BD0;
      }
      goto L_089C4C20;
    }
L_089C4C20:
    aot_gpr[3] = (0u + 0u);
    goto L_089C4B28;
L_089C4C28:
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[3] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C4C0C;
      }
      goto L_089C4C30;
    }
L_089C4C30:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(440)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[21] = (aot_gpr[3] & 65535u);
        goto L_089C4C10;
    }
    goto L_089C4C3C;
L_089C4C3C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(224)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C4C50u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4C50u) goto L_089C4C50;
    return;
L_089C4C50:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C4B28;
      }
      goto L_089C4C58;
    }
L_089C4C58:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(228)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C4C6Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4C6Cu) goto L_089C4C6C;
    return;
L_089C4C6C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C4B28;
      }
      goto L_089C4C74;
    }
L_089C4C74:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[18] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089C4C94;
      }
      goto L_089C4C8C;
    }
L_089C4C8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_089C4C08;
L_089C4C94:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(232)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C4CACu);
    aot_gpr[6] = (aot_gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4CACu) goto L_089C4CAC;
    return;
L_089C4CAC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_089C4C08;
    }
    goto L_089C4CB4;
L_089C4CB4:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_089C4B28;
L_089C4CBC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C4CC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_089C4D34;
      }
      goto L_089C4CE0;
    }
L_089C4CE0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C4D34;
      }
      goto L_089C4CE8;
    }
L_089C4CE8:
    aot_gpr[3] = (aot_gpr[5] << 6u);
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[5] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[8] = (aot_gpr[2] << 3u);
      if (branch_taken) {
          goto L_089C4D34;
      }
      goto L_089C4D08;
    }
L_089C4D08:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[6] + 0u);
    aot_gpr[2] = (aot_gpr[8] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_089C4D44;
      }
      goto L_089C4D20;
    }
L_089C4D20:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(236)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C4D2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4D2Cu) goto L_089C4D2C;
    return;
L_089C4D2C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C4D44;
      }
      goto L_089C4D34;
    }
L_089C4D34:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C4D44:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C4D58:
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[3] = (aot_gpr[5] << 6u);
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[9] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[10] = (aot_gpr[2] << 3u);
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[6] << 5u);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[5] = (aot_gpr[2] - aot_gpr[6]);
    aot_gpr[3] = (aot_gpr[8] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C4DE8;
      }
      goto L_089C4D94;
    }
L_089C4D94:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[10]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(492));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
      if (branch_taken) {
          goto L_089C4DF0;
      }
      goto L_089C4DA8;
    }
L_089C4DA8:
    aot_gpr[2] = (aot_gpr[8] >> 1u);
    aot_gpr[8] = (aot_gpr[8] & 1u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) < 0;
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[2]);
      if (branch_taken) {
          goto L_089C4E0C;
      }
      goto L_089C4DB8;
    }
L_089C4DB8:
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[3]);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_fpr[2] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[0])));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[1] = aot_fpr[1] + aot_fpr[0];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    goto L_089C4DD4;
L_089C4DD4:
    aot_fpr[2] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[2] = (0u + 0u);
    aot_fpr[0] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[2])));
    aot_fpr[0] = aot_fpr[1] - aot_fpr[0];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_089C4DE8;
L_089C4DE8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C4DF0:
    aot_fpr[2] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + 0u);
    aot_fpr[0] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[2])));
    aot_fpr[0] = aot_fpr[1] - aot_fpr[0];
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C4E0C:
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_fpr[2] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[0])));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[2] = aot_fpr[2] + aot_fpr[2];
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[1] = aot_fpr[1] + aot_fpr[0];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    goto L_089C4DD4;
L_089C4E30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[7] + 0u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] & 65535u);
    aot_gpr[9] = (aot_gpr[16] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[8] = (aot_gpr[5] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[10] = (aot_gpr[9] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[20] + 0u);
      if (branch_taken) {
          goto L_089C4F7C;
      }
      goto L_089C4E90;
    }
L_089C4E90:
    aot_gpr[3] = (aot_gpr[9] << 6u);
    aot_gpr[2] = (aot_gpr[9] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[2] << 3u);
    aot_gpr[3] = (aot_gpr[17] << 2u);
    aot_gpr[2] = (aot_gpr[17] << 5u);
    aot_gpr[3] = (aot_gpr[2] - aot_gpr[3]);
    { const bool branch_taken = aot_gpr[10] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[17]));
      if (branch_taken) {
          goto L_089C4FA4;
      }
      goto L_089C4EB8;
    }
L_089C4EB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), 0u);
    aot_gpr[31] = (0x089C4EC4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0455_entry, 455u, 207u, 0x089CBF70u>(ctx, &aot_mem) && ctx.pc == 0x089C4EC4u) goto L_089C4EC4;
    return;
L_089C4EC4:
    aot_gpr[19] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[10] = (0u + 0u);
      if (branch_taken) {
          goto L_089C4F7C;
      }
      goto L_089C4EE8;
    }
L_089C4EE8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[3] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[29]);
      if (branch_taken) {
          goto L_089C4F2C;
      }
      goto L_089C4EFC;
    }
L_089C4EFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[20]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[11]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[2]);
    goto L_089C4F2C;
L_089C4F2C:
    aot_gpr[31] = (0x089C4F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 104u, 0x089C367Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4F34u) goto L_089C4F34;
    return;
L_089C4F34:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[3] = (aot_gpr[16] << 6u);
    aot_gpr[2] = (aot_gpr[16] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[2] << 3u);
    aot_gpr[3] = (aot_gpr[17] << 5u);
    aot_gpr[2] = (aot_gpr[17] << 2u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
      if (branch_taken) {
          goto L_089C4FFC;
      }
      goto L_089C4F5C;
    }
L_089C4F5C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(504)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(504), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_089C4F7C;
L_089C4F7C:
    aot_gpr[2] = (aot_gpr[19] + 0u);
    goto L_089C4F80;
L_089C4F80:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C4FA4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[9]);
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(502)));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(502)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(502), static_cast<std::uint16_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), 0u);
    aot_gpr[31] = (0x089C4FD0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0455_entry, 455u, 207u, 0x089CBF70u>(ctx, &aot_mem) && ctx.pc == 0x089C4FD0u) goto L_089C4FD0;
    return;
L_089C4FD0:
    aot_gpr[19] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[10] = (0u + 0u);
      if (branch_taken) {
          goto L_089C4EE8;
      }
      goto L_089C4FF4;
    }
L_089C4FF4:
    aot_gpr[2] = (aot_gpr[19] + 0u);
    goto L_089C4F80;
L_089C4FFC:
    aot_gpr[19] = (aot_gpr[5] + 0u);
    ctx.pc = 0x089C5000u; return;
}

void recomp_unit_0448(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0448_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_448(Runtime &runtime) {
    runtime.register_generated_unit(448u, 0x089C4000u, 4096u, &recomp_unit_0448, &recomp_unit_0448_entry);
    runtime.register_function(0x089C4004u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4010u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4024u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C402Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4030u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4034u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4044u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4054u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4060u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C406Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4078u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4084u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C408Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4094u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C40A0u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C40A4u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C40ACu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C40B0u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C40E4u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C40FCu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4114u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4118u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4120u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4138u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4140u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4150u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4158u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4164u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C417Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C41ACu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C41C0u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C41C8u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C41D4u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C41DCu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C41ECu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C41F0u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C41FCu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4204u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C420Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4214u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C423Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4248u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4250u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4268u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4280u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4298u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C42B0u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C42C8u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C42E0u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C42F8u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4310u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4328u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4340u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4358u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4370u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4388u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C43A0u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C43B8u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C43D0u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C43E8u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4400u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4418u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4430u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4448u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4460u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4478u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4490u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C44A8u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C44C0u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C44D8u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C44F0u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4508u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4520u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4538u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4550u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4558u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C456Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4578u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4584u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4590u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C459Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C45C4u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C45D4u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C45F4u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C45FCu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4608u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4624u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4634u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4670u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4678u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4694u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C46CCu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C46DCu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C46FCu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4704u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4710u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C472Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C473Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4778u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4780u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C479Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C47D4u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C47E0u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C47E8u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C47F4u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C47FCu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4820u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4828u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C482Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4840u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4854u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C485Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4860u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4870u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C48C0u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C48D4u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C48D8u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C48E4u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C48F0u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C48FCu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4908u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4928u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4930u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4958u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4960u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C497Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4988u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4994u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C49B0u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C49B8u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C49D8u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C49ECu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C49F8u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C49FCu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4A0Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4A18u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4A20u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4A30u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4A5Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4A7Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4A84u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4ACCu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4AD8u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4AE0u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4AF0u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4B18u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4B24u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4B28u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4B54u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4B60u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4B68u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4B7Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4B84u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4B9Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4BB4u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4BBCu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4BC4u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4BCCu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4BD0u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4BDCu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4BE8u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4BF4u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4BF8u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4C08u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4C0Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4C10u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4C20u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4C28u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4C30u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4C3Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4C50u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4C58u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4C6Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4C74u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4C8Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4C94u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4CACu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4CB4u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4CBCu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4CC4u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4CE0u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4CE8u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4D08u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4D20u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4D2Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4D34u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4D44u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4D58u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4D94u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4DA8u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4DB8u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4DD4u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4DE8u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4DF0u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4E0Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4E30u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4E90u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4EB8u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4EC4u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4EE8u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4EFCu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4F2Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4F34u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4F5Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4F7Cu, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4F80u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4FA4u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4FD0u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4FF4u, &recomp_unit_0448, "recomp_unit_0448");
    runtime.register_function(0x089C4FFCu, &recomp_unit_0448, "recomp_unit_0448");
}
} // namespace psprecomp
