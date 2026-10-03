#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0592[1023] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 7, 0, 8, 0, 0, 0, 0, 0, 0,
    9, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 14, 15, 0, 0, 0,
    0, 16, 0, 17, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 23, 0, 24, 0, 25,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0,
    0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 36, 37, 0, 38, 0, 0, 39, 0,
    40, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 46, 0, 47, 0, 48, 0, 0, 0,
    0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0,
    0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 60,
    0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 68,
    0, 69, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    80, 81, 0, 82, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 89, 0, 90,
    0, 0, 91, 0, 92, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100, 0, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0,
    106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 117, 118, 0, 0, 0, 0, 119, 0, 120, 0, 121, 0, 0, 0,
    0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 126, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0,
    0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 139, 140, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 0, 0, 0, 144, 0,
    0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 148, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152,
    0, 0, 0, 153, 0, 0, 0, 154, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 161, 162, 0, 0, 0, 0, 163, 0, 164, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 167,
    0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0,
    175, 0, 0, 0, 176, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 181, 0, 0, 182, 0, 0, 0, 0, 183, 184, 0, 0, 0, 0, 185, 0, 186, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 0, 190, 0, 191, 0, 0, 0, 192, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0,
    0, 198, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0,
    0, 204, 0, 0, 0, 0, 205, 206, 0, 0, 0, 0, 207, 0, 208, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0,
    212, 0, 213, 0, 0, 0, 214, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 221,
    0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0,
    0, 0, 0, 227, 228, 0, 0, 0, 0, 229, 0, 230, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 235,
    0, 0, 0, 236, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 242, 243, 0, 244,
};
void recomp_unit_0592_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A54004u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0592[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A54004;
    case 2u: goto L_08A5400C;
    case 3u: goto L_08A54028;
    case 4u: goto L_08A5403C;
    case 5u: goto L_08A5404C;
    case 6u: goto L_08A5405C;
    case 7u: goto L_08A54060;
    case 8u: goto L_08A54068;
    case 9u: goto L_08A54084;
    case 10u: goto L_08A54088;
    case 11u: goto L_08A540A8;
    case 12u: goto L_08A540D0;
    case 13u: goto L_08A540DC;
    case 14u: goto L_08A540F0;
    case 15u: goto L_08A540F4;
    case 16u: goto L_08A54108;
    case 17u: goto L_08A54110;
    case 18u: goto L_08A54118;
    case 19u: goto L_08A5412C;
    case 20u: goto L_08A5413C;
    case 21u: goto L_08A54158;
    case 22u: goto L_08A54160;
    case 23u: goto L_08A54170;
    case 24u: goto L_08A54178;
    case 25u: goto L_08A54180;
    case 26u: goto L_08A5419C;
    case 27u: goto L_08A541B0;
    case 28u: goto L_08A541C0;
    case 29u: goto L_08A541D0;
    case 30u: goto L_08A541D4;
    case 31u: goto L_08A541DC;
    case 32u: goto L_08A541FC;
    case 33u: goto L_08A5421C;
    case 34u: goto L_08A54244;
    case 35u: goto L_08A54250;
    case 36u: goto L_08A54264;
    case 37u: goto L_08A54268;
    case 38u: goto L_08A54270;
    case 39u: goto L_08A5427C;
    case 40u: goto L_08A54284;
    case 41u: goto L_08A5428C;
    case 42u: goto L_08A542A0;
    case 43u: goto L_08A542B0;
    case 44u: goto L_08A542CC;
    case 45u: goto L_08A542D4;
    case 46u: goto L_08A542E4;
    case 47u: goto L_08A542EC;
    case 48u: goto L_08A542F4;
    case 49u: goto L_08A54310;
    case 50u: goto L_08A54324;
    case 51u: goto L_08A54334;
    case 52u: goto L_08A54344;
    case 53u: goto L_08A54348;
    case 54u: goto L_08A54350;
    case 55u: goto L_08A54370;
    case 56u: goto L_08A54390;
    case 57u: goto L_08A543D0;
    case 58u: goto L_08A543E4;
    case 59u: goto L_08A543EC;
    case 60u: goto L_08A54400;
    case 61u: goto L_08A54418;
    case 62u: goto L_08A54430;
    case 63u: goto L_08A54434;
    case 64u: goto L_08A54454;
    case 65u: goto L_08A54484;
    case 66u: goto L_08A544E4;
    case 67u: goto L_08A544F8;
    case 68u: goto L_08A54500;
    case 69u: goto L_08A54508;
    case 70u: goto L_08A5451C;
    case 71u: goto L_08A54528;
    case 72u: goto L_08A5453C;
    case 73u: goto L_08A54548;
    case 74u: goto L_08A54550;
    case 75u: goto L_08A54560;
    case 76u: goto L_08A5458C;
    case 77u: goto L_08A545BC;
    case 78u: goto L_08A545D4;
    case 79u: goto L_08A545DC;
    case 80u: goto L_08A54604;
    case 81u: goto L_08A54608;
    case 82u: goto L_08A54610;
    case 83u: goto L_08A54618;
    case 84u: goto L_08A5462C;
    case 85u: goto L_08A5463C;
    case 86u: goto L_08A54644;
    case 87u: goto L_08A54658;
    case 88u: goto L_08A54670;
    case 89u: goto L_08A54678;
    case 90u: goto L_08A54680;
    case 91u: goto L_08A5468C;
    case 92u: goto L_08A54694;
    case 93u: goto L_08A5469C;
    case 94u: goto L_08A546A4;
    case 95u: goto L_08A546AC;
    case 96u: goto L_08A546B4;
    case 97u: goto L_08A546BC;
    case 98u: goto L_08A546C4;
    case 99u: goto L_08A546CC;
    case 100u: goto L_08A546D4;
    case 101u: goto L_08A546DC;
    case 102u: goto L_08A546E4;
    case 103u: goto L_08A546EC;
    case 104u: goto L_08A546F4;
    case 105u: goto L_08A546FC;
    case 106u: goto L_08A54704;
    case 107u: goto L_08A54714;
    case 108u: goto L_08A54724;
    case 109u: goto L_08A54734;
    case 110u: goto L_08A54744;
    case 111u: goto L_08A54754;
    case 112u: goto L_08A54764;
    case 113u: goto L_08A54774;
    case 114u: goto L_08A54784;
    case 115u: goto L_08A547AC;
    case 116u: goto L_08A547B8;
    case 117u: goto L_08A547CC;
    case 118u: goto L_08A547D0;
    case 119u: goto L_08A547E4;
    case 120u: goto L_08A547EC;
    case 121u: goto L_08A547F4;
    case 122u: goto L_08A54808;
    case 123u: goto L_08A54818;
    case 124u: goto L_08A54834;
    case 125u: goto L_08A5483C;
    case 126u: goto L_08A5484C;
    case 127u: goto L_08A54854;
    case 128u: goto L_08A5485C;
    case 129u: goto L_08A54878;
    case 130u: goto L_08A5488C;
    case 131u: goto L_08A5489C;
    case 132u: goto L_08A548AC;
    case 133u: goto L_08A548B0;
    case 134u: goto L_08A548B8;
    case 135u: goto L_08A548D8;
    case 136u: goto L_08A548F8;
    case 137u: goto L_08A54920;
    case 138u: goto L_08A5492C;
    case 139u: goto L_08A54940;
    case 140u: goto L_08A54944;
    case 141u: goto L_08A54958;
    case 142u: goto L_08A54960;
    case 143u: goto L_08A54968;
    case 144u: goto L_08A5497C;
    case 145u: goto L_08A5498C;
    case 146u: goto L_08A549A8;
    case 147u: goto L_08A549B0;
    case 148u: goto L_08A549C0;
    case 149u: goto L_08A549C8;
    case 150u: goto L_08A549D0;
    case 151u: goto L_08A549EC;
    case 152u: goto L_08A54A00;
    case 153u: goto L_08A54A10;
    case 154u: goto L_08A54A20;
    case 155u: goto L_08A54A24;
    case 156u: goto L_08A54A2C;
    case 157u: goto L_08A54A4C;
    case 158u: goto L_08A54A6C;
    case 159u: goto L_08A54A94;
    case 160u: goto L_08A54AA0;
    case 161u: goto L_08A54AB4;
    case 162u: goto L_08A54AB8;
    case 163u: goto L_08A54ACC;
    case 164u: goto L_08A54AD4;
    case 165u: goto L_08A54ADC;
    case 166u: goto L_08A54AF0;
    case 167u: goto L_08A54B00;
    case 168u: goto L_08A54B1C;
    case 169u: goto L_08A54B24;
    case 170u: goto L_08A54B34;
    case 171u: goto L_08A54B3C;
    case 172u: goto L_08A54B44;
    case 173u: goto L_08A54B60;
    case 174u: goto L_08A54B74;
    case 175u: goto L_08A54B84;
    case 176u: goto L_08A54B94;
    case 177u: goto L_08A54B98;
    case 178u: goto L_08A54BA0;
    case 179u: goto L_08A54BC0;
    case 180u: goto L_08A54BE0;
    case 181u: goto L_08A54C08;
    case 182u: goto L_08A54C14;
    case 183u: goto L_08A54C28;
    case 184u: goto L_08A54C2C;
    case 185u: goto L_08A54C40;
    case 186u: goto L_08A54C48;
    case 187u: goto L_08A54C50;
    case 188u: goto L_08A54C64;
    case 189u: goto L_08A54C74;
    case 190u: goto L_08A54C90;
    case 191u: goto L_08A54C98;
    case 192u: goto L_08A54CA8;
    case 193u: goto L_08A54CB0;
    case 194u: goto L_08A54CB8;
    case 195u: goto L_08A54CD4;
    case 196u: goto L_08A54CE8;
    case 197u: goto L_08A54CF8;
    case 198u: goto L_08A54D08;
    case 199u: goto L_08A54D0C;
    case 200u: goto L_08A54D14;
    case 201u: goto L_08A54D34;
    case 202u: goto L_08A54D54;
    case 203u: goto L_08A54D7C;
    case 204u: goto L_08A54D88;
    case 205u: goto L_08A54D9C;
    case 206u: goto L_08A54DA0;
    case 207u: goto L_08A54DB4;
    case 208u: goto L_08A54DBC;
    case 209u: goto L_08A54DC4;
    case 210u: goto L_08A54DD8;
    case 211u: goto L_08A54DE8;
    case 212u: goto L_08A54E04;
    case 213u: goto L_08A54E0C;
    case 214u: goto L_08A54E1C;
    case 215u: goto L_08A54E24;
    case 216u: goto L_08A54E2C;
    case 217u: goto L_08A54E48;
    case 218u: goto L_08A54E5C;
    case 219u: goto L_08A54E6C;
    case 220u: goto L_08A54E7C;
    case 221u: goto L_08A54E80;
    case 222u: goto L_08A54E88;
    case 223u: goto L_08A54EA8;
    case 224u: goto L_08A54EC8;
    case 225u: goto L_08A54EF0;
    case 226u: goto L_08A54EFC;
    case 227u: goto L_08A54F10;
    case 228u: goto L_08A54F14;
    case 229u: goto L_08A54F28;
    case 230u: goto L_08A54F30;
    case 231u: goto L_08A54F38;
    case 232u: goto L_08A54F4C;
    case 233u: goto L_08A54F5C;
    case 234u: goto L_08A54F78;
    case 235u: goto L_08A54F80;
    case 236u: goto L_08A54F90;
    case 237u: goto L_08A54F98;
    case 238u: goto L_08A54FA0;
    case 239u: goto L_08A54FBC;
    case 240u: goto L_08A54FD0;
    case 241u: goto L_08A54FE0;
    case 242u: goto L_08A54FF0;
    case 243u: goto L_08A54FF4;
    case 244u: goto L_08A54FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A54004:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54028;
      }
      goto L_08A5400C;
    }
L_08A5400C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A54028u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54028u) goto L_08A54028;
    return;
L_08A54028:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0591_entry, 591u, 210u, 0x08A53F80u>(ctx, &aot_mem); return;
      }
      goto L_08A5403C;
    }
L_08A5403C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A54060;
      }
      goto L_08A5404C;
    }
L_08A5404C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08A5405Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08A5405Cu) goto L_08A5405C;
    return;
L_08A5405C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_08A54060;
L_08A54060:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A54088;
      }
      goto L_08A54068;
    }
L_08A54068:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A54088u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54088u) goto L_08A54088;
    return;
L_08A54084:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    goto L_08A54088;
L_08A54088:
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
L_08A540A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A541FC;
      }
      goto L_08A540D0;
    }
L_08A540D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A541D4;
      }
      goto L_08A540DC;
    }
L_08A540DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A541B0;
      }
      goto L_08A540F0;
    }
L_08A540F0:
    aot_gpr[19] = (0u | 0u);
    goto L_08A540F4;
L_08A540F4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[19]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5419C;
      }
      goto L_08A54108;
    }
L_08A54108:
    aot_gpr[31] = (0x08A54110u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0591_entry, 591u, 21u, 0x08A53158u>(ctx, &aot_mem) && ctx.pc == 0x08A54110u) goto L_08A54110;
    return;
L_08A54110:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5419C;
      }
      goto L_08A54118;
    }
L_08A54118:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A54160;
      }
      goto L_08A5412C;
    }
L_08A5412C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A5419C;
      }
      goto L_08A5413C;
    }
L_08A5413C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A54158u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54158u) goto L_08A54158;
    return;
L_08A54158:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5419C;
      }
      goto L_08A54160;
    }
L_08A54160:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54178;
      }
      goto L_08A54170;
    }
L_08A54170:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A5419C;
      }
      goto L_08A54178;
    }
L_08A54178:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5419C;
      }
      goto L_08A54180;
    }
L_08A54180:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A5419Cu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5419Cu) goto L_08A5419C;
    return;
L_08A5419C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A540F4;
      }
      goto L_08A541B0;
    }
L_08A541B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A541D4;
      }
      goto L_08A541C0;
    }
L_08A541C0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08A541D0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08A541D0u) goto L_08A541D0;
    return;
L_08A541D0:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_08A541D4;
L_08A541D4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A541FC;
      }
      goto L_08A541DC;
    }
L_08A541DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A541FCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A541FCu) goto L_08A541FC;
    return;
L_08A541FC:
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
L_08A5421C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A54370;
      }
      goto L_08A54244;
    }
L_08A54244:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A54348;
      }
      goto L_08A54250;
    }
L_08A54250:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A54324;
      }
      goto L_08A54264;
    }
L_08A54264:
    aot_gpr[19] = (0u | 0u);
    goto L_08A54268;
L_08A54268:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[19]);
    goto L_08A54270;
L_08A54270:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54310;
      }
      goto L_08A5427C;
    }
L_08A5427C:
    aot_gpr[31] = (0x08A54284u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0591_entry, 591u, 204u, 0x08A53F1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A54284u) goto L_08A54284;
    return;
L_08A54284:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54310;
      }
      goto L_08A5428C;
    }
L_08A5428C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A542D4;
      }
      goto L_08A542A0;
    }
L_08A542A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A54310;
      }
      goto L_08A542B0;
    }
L_08A542B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A542CCu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A542CCu) goto L_08A542CC;
    return;
L_08A542CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54310;
      }
      goto L_08A542D4;
    }
L_08A542D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A542EC;
      }
      goto L_08A542E4;
    }
L_08A542E4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A54310;
      }
      goto L_08A542EC;
    }
L_08A542EC:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54310;
      }
      goto L_08A542F4;
    }
L_08A542F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A54310u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54310u) goto L_08A54310;
    return;
L_08A54310:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A54268;
      }
      goto L_08A54324;
    }
L_08A54324:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A54348;
      }
      goto L_08A54334;
    }
L_08A54334:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08A54344u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08A54344u) goto L_08A54344;
    return;
L_08A54344:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_08A54348;
L_08A54348:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A54370;
      }
      goto L_08A54350;
    }
L_08A54350:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A54370u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54370u) goto L_08A54370;
    return;
L_08A54370:
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
L_08A54390:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[8] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x08A543D0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0591_entry, 591u, 205u, 0x08A53F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A543D0u) goto L_08A543D0;
    return;
L_08A543D0:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A543EC;
      }
      goto L_08A543E4;
    }
L_08A543E4:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08A543EC;
L_08A543EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54454;
      }
      goto L_08A54400;
    }
L_08A54400:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[22]);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[23] = (aot_gpr[23] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54434;
      }
      goto L_08A54418;
    }
L_08A54418:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A54430u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 158u, 0x0891EA20u>(ctx, &aot_mem) && ctx.pc == 0x08A54430u) goto L_08A54430;
    return;
L_08A54430:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    goto L_08A54434;
L_08A54434:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A54400;
      }
      goto L_08A54454;
    }
L_08A54454:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54484:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[20] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54560;
      }
      goto L_08A544E4;
    }
L_08A544E4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A544F8u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0591_entry, 591u, 204u, 0x08A53F1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A544F8u) goto L_08A544F8;
    return;
L_08A544F8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5451C;
      }
      goto L_08A54500;
    }
L_08A54500:
    aot_gpr[31] = (0x08A54508u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 25u, 0x0891C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08A54508u) goto L_08A54508;
    return;
L_08A54508:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A54550;
      }
      goto L_08A5451C;
    }
L_08A5451C:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54548;
      }
      goto L_08A54528;
    }
L_08A54528:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A5453Cu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 126u, 0x08935E0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5453Cu) goto L_08A5453C;
    return;
L_08A5453C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    goto L_08A54548;
L_08A54548:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A54550;
L_08A54550:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A544E4;
      }
      goto L_08A54560;
    }
L_08A54560:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A5458C:
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(15));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54604;
      }
      goto L_08A545BC;
    }
L_08A545BC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08A545DC;
    }
    goto L_08A545D4;
L_08A545D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08A545DC;
L_08A545DC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A54608;
      }
      goto L_08A54604;
    }
L_08A54604:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A54608;
L_08A54608:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54610:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54618:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5462C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A54680;
      }
      goto L_08A5463C;
    }
L_08A5463C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54680;
      }
      goto L_08A54644;
    }
L_08A54644:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54678;
      }
      goto L_08A54658;
    }
L_08A54658:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A54670u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54670u) goto L_08A54670;
    return;
L_08A54670:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54680;
      }
      goto L_08A54678;
    }
L_08A54678:
    aot_gpr[31] = (0x08A54680u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A54680u) goto L_08A54680;
    return;
L_08A54680:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5468C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54694:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5469C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A546A4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A546AC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A546B4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A546BC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A546C4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A546CC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A546D4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A546DC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A546E4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A546EC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A546F4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A546FC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54704:
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54714:
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54724:
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54734:
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54744:
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54754:
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54764:
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54774:
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54784:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A548D8;
      }
      goto L_08A547AC;
    }
L_08A547AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A548B0;
      }
      goto L_08A547B8;
    }
L_08A547B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5488C;
      }
      goto L_08A547CC;
    }
L_08A547CC:
    aot_gpr[19] = (0u | 0u);
    goto L_08A547D0;
L_08A547D0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[19]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54878;
      }
      goto L_08A547E4;
    }
L_08A547E4:
    aot_gpr[31] = (0x08A547ECu);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    goto L_08A54704;
L_08A547EC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54878;
      }
      goto L_08A547F4;
    }
L_08A547F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A5483C;
      }
      goto L_08A54808;
    }
L_08A54808:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A54878;
      }
      goto L_08A54818;
    }
L_08A54818:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A54834u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54834u) goto L_08A54834;
    return;
L_08A54834:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54878;
      }
      goto L_08A5483C;
    }
L_08A5483C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54854;
      }
      goto L_08A5484C;
    }
L_08A5484C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A54878;
      }
      goto L_08A54854;
    }
L_08A54854:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54878;
      }
      goto L_08A5485C;
    }
L_08A5485C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A54878u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54878u) goto L_08A54878;
    return;
L_08A54878:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A547D0;
      }
      goto L_08A5488C;
    }
L_08A5488C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A548B0;
      }
      goto L_08A5489C;
    }
L_08A5489C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08A548ACu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08A548ACu) goto L_08A548AC;
    return;
L_08A548AC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_08A548B0;
L_08A548B0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A548D8;
      }
      goto L_08A548B8;
    }
L_08A548B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A548D8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A548D8u) goto L_08A548D8;
    return;
L_08A548D8:
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
L_08A548F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A54A4C;
      }
      goto L_08A54920;
    }
L_08A54920:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A54A24;
      }
      goto L_08A5492C;
    }
L_08A5492C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A54A00;
      }
      goto L_08A54940;
    }
L_08A54940:
    aot_gpr[19] = (0u | 0u);
    goto L_08A54944;
L_08A54944:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[19]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A549EC;
      }
      goto L_08A54958;
    }
L_08A54958:
    aot_gpr[31] = (0x08A54960u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    goto L_08A54714;
L_08A54960:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A549EC;
      }
      goto L_08A54968;
    }
L_08A54968:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A549B0;
      }
      goto L_08A5497C;
    }
L_08A5497C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A549EC;
      }
      goto L_08A5498C;
    }
L_08A5498C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A549A8u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A549A8u) goto L_08A549A8;
    return;
L_08A549A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A549EC;
      }
      goto L_08A549B0;
    }
L_08A549B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A549C8;
      }
      goto L_08A549C0;
    }
L_08A549C0:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A549EC;
      }
      goto L_08A549C8;
    }
L_08A549C8:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A549EC;
      }
      goto L_08A549D0;
    }
L_08A549D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A549ECu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A549ECu) goto L_08A549EC;
    return;
L_08A549EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A54944;
      }
      goto L_08A54A00;
    }
L_08A54A00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A54A24;
      }
      goto L_08A54A10;
    }
L_08A54A10:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08A54A20u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08A54A20u) goto L_08A54A20;
    return;
L_08A54A20:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_08A54A24;
L_08A54A24:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A54A4C;
      }
      goto L_08A54A2C;
    }
L_08A54A2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A54A4Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54A4Cu) goto L_08A54A4C;
    return;
L_08A54A4C:
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
L_08A54A6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A54BC0;
      }
      goto L_08A54A94;
    }
L_08A54A94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A54B98;
      }
      goto L_08A54AA0;
    }
L_08A54AA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A54B74;
      }
      goto L_08A54AB4;
    }
L_08A54AB4:
    aot_gpr[19] = (0u | 0u);
    goto L_08A54AB8;
L_08A54AB8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[19]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54B60;
      }
      goto L_08A54ACC;
    }
L_08A54ACC:
    aot_gpr[31] = (0x08A54AD4u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    goto L_08A54724;
L_08A54AD4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54B60;
      }
      goto L_08A54ADC;
    }
L_08A54ADC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A54B24;
      }
      goto L_08A54AF0;
    }
L_08A54AF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A54B60;
      }
      goto L_08A54B00;
    }
L_08A54B00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A54B1Cu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54B1Cu) goto L_08A54B1C;
    return;
L_08A54B1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54B60;
      }
      goto L_08A54B24;
    }
L_08A54B24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54B3C;
      }
      goto L_08A54B34;
    }
L_08A54B34:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A54B60;
      }
      goto L_08A54B3C;
    }
L_08A54B3C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54B60;
      }
      goto L_08A54B44;
    }
L_08A54B44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A54B60u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54B60u) goto L_08A54B60;
    return;
L_08A54B60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A54AB8;
      }
      goto L_08A54B74;
    }
L_08A54B74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A54B98;
      }
      goto L_08A54B84;
    }
L_08A54B84:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08A54B94u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08A54B94u) goto L_08A54B94;
    return;
L_08A54B94:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_08A54B98;
L_08A54B98:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A54BC0;
      }
      goto L_08A54BA0;
    }
L_08A54BA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A54BC0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54BC0u) goto L_08A54BC0;
    return;
L_08A54BC0:
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
L_08A54BE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A54D34;
      }
      goto L_08A54C08;
    }
L_08A54C08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A54D0C;
      }
      goto L_08A54C14;
    }
L_08A54C14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A54CE8;
      }
      goto L_08A54C28;
    }
L_08A54C28:
    aot_gpr[19] = (0u | 0u);
    goto L_08A54C2C;
L_08A54C2C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[19]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54CD4;
      }
      goto L_08A54C40;
    }
L_08A54C40:
    aot_gpr[31] = (0x08A54C48u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    goto L_08A54734;
L_08A54C48:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54CD4;
      }
      goto L_08A54C50;
    }
L_08A54C50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A54C98;
      }
      goto L_08A54C64;
    }
L_08A54C64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A54CD4;
      }
      goto L_08A54C74;
    }
L_08A54C74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A54C90u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54C90u) goto L_08A54C90;
    return;
L_08A54C90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54CD4;
      }
      goto L_08A54C98;
    }
L_08A54C98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54CB0;
      }
      goto L_08A54CA8;
    }
L_08A54CA8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A54CD4;
      }
      goto L_08A54CB0;
    }
L_08A54CB0:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54CD4;
      }
      goto L_08A54CB8;
    }
L_08A54CB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A54CD4u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54CD4u) goto L_08A54CD4;
    return;
L_08A54CD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A54C2C;
      }
      goto L_08A54CE8;
    }
L_08A54CE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A54D0C;
      }
      goto L_08A54CF8;
    }
L_08A54CF8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08A54D08u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08A54D08u) goto L_08A54D08;
    return;
L_08A54D08:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_08A54D0C;
L_08A54D0C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A54D34;
      }
      goto L_08A54D14;
    }
L_08A54D14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A54D34u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54D34u) goto L_08A54D34;
    return;
L_08A54D34:
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
L_08A54D54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A54EA8;
      }
      goto L_08A54D7C;
    }
L_08A54D7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A54E80;
      }
      goto L_08A54D88;
    }
L_08A54D88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A54E5C;
      }
      goto L_08A54D9C;
    }
L_08A54D9C:
    aot_gpr[19] = (0u | 0u);
    goto L_08A54DA0;
L_08A54DA0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[19]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54E48;
      }
      goto L_08A54DB4;
    }
L_08A54DB4:
    aot_gpr[31] = (0x08A54DBCu);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    goto L_08A54744;
L_08A54DBC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54E48;
      }
      goto L_08A54DC4;
    }
L_08A54DC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A54E0C;
      }
      goto L_08A54DD8;
    }
L_08A54DD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A54E48;
      }
      goto L_08A54DE8;
    }
L_08A54DE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A54E04u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54E04u) goto L_08A54E04;
    return;
L_08A54E04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54E48;
      }
      goto L_08A54E0C;
    }
L_08A54E0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54E24;
      }
      goto L_08A54E1C;
    }
L_08A54E1C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A54E48;
      }
      goto L_08A54E24;
    }
L_08A54E24:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54E48;
      }
      goto L_08A54E2C;
    }
L_08A54E2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A54E48u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54E48u) goto L_08A54E48;
    return;
L_08A54E48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A54DA0;
      }
      goto L_08A54E5C;
    }
L_08A54E5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A54E80;
      }
      goto L_08A54E6C;
    }
L_08A54E6C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08A54E7Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08A54E7Cu) goto L_08A54E7C;
    return;
L_08A54E7C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_08A54E80;
L_08A54E80:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A54EA8;
      }
      goto L_08A54E88;
    }
L_08A54E88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A54EA8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54EA8u) goto L_08A54EA8;
    return;
L_08A54EA8:
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
L_08A54EC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 2u, 0x08A5501Cu>(ctx, &aot_mem); return;
      }
      goto L_08A54EF0;
    }
L_08A54EF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A54FF4;
      }
      goto L_08A54EFC;
    }
L_08A54EFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A54FD0;
      }
      goto L_08A54F10;
    }
L_08A54F10:
    aot_gpr[19] = (0u | 0u);
    goto L_08A54F14;
L_08A54F14:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[19]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54FBC;
      }
      goto L_08A54F28;
    }
L_08A54F28:
    aot_gpr[31] = (0x08A54F30u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    goto L_08A54754;
L_08A54F30:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54FBC;
      }
      goto L_08A54F38;
    }
L_08A54F38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A54F80;
      }
      goto L_08A54F4C;
    }
L_08A54F4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A54FBC;
      }
      goto L_08A54F5C;
    }
L_08A54F5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A54F78u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54F78u) goto L_08A54F78;
    return;
L_08A54F78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54FBC;
      }
      goto L_08A54F80;
    }
L_08A54F80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54F98;
      }
      goto L_08A54F90;
    }
L_08A54F90:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A54FBC;
      }
      goto L_08A54F98;
    }
L_08A54F98:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54FBC;
      }
      goto L_08A54FA0;
    }
L_08A54FA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A54FBCu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54FBCu) goto L_08A54FBC;
    return;
L_08A54FBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A54F14;
      }
      goto L_08A54FD0;
    }
L_08A54FD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A54FF4;
      }
      goto L_08A54FE0;
    }
L_08A54FE0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08A54FF0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08A54FF0u) goto L_08A54FF0;
    return;
L_08A54FF0:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_08A54FF4;
L_08A54FF4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 2u, 0x08A5501Cu>(ctx, &aot_mem); return;
      }
      goto L_08A54FFC;
    }
L_08A54FFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    ctx.pc = 0x08A55000u; return;
}

void recomp_unit_0592(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0592_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_592(Runtime &runtime) {
    runtime.register_generated_unit(592u, 0x08A54000u, 4096u, &recomp_unit_0592, &recomp_unit_0592_entry);
    runtime.register_function(0x08A54004u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A5400Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54028u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A5403Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A5404Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A5405Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54060u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54068u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54084u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54088u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A540A8u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A540D0u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A540DCu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A540F0u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A540F4u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54108u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54110u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54118u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A5412Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A5413Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54158u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54160u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54170u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54178u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54180u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A5419Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A541B0u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A541C0u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A541D0u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A541D4u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A541DCu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A541FCu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A5421Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54244u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54250u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54264u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54268u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54270u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A5427Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54284u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A5428Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A542A0u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A542B0u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A542CCu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A542D4u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A542E4u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A542ECu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A542F4u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54310u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54324u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54334u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54344u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54348u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54350u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54370u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54390u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A543D0u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A543E4u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A543ECu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54400u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54418u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54430u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54434u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54454u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54484u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A544E4u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A544F8u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54500u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54508u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A5451Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54528u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A5453Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54548u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54550u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54560u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A5458Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A545BCu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A545D4u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A545DCu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54604u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54608u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54610u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54618u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A5462Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A5463Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54644u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54658u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54670u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54678u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54680u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A5468Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54694u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A5469Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A546A4u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A546ACu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A546B4u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A546BCu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A546C4u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A546CCu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A546D4u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A546DCu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A546E4u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A546ECu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A546F4u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A546FCu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54704u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54714u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54724u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54734u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54744u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54754u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54764u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54774u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54784u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A547ACu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A547B8u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A547CCu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A547D0u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A547E4u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A547ECu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A547F4u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54808u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54818u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54834u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A5483Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A5484Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54854u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A5485Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54878u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A5488Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A5489Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A548ACu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A548B0u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A548B8u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A548D8u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A548F8u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54920u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A5492Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54940u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54944u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54958u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54960u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54968u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A5497Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A5498Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A549A8u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A549B0u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A549C0u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A549C8u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A549D0u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A549ECu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54A00u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54A10u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54A20u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54A24u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54A2Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54A4Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54A6Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54A94u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54AA0u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54AB4u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54AB8u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54ACCu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54AD4u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54ADCu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54AF0u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54B00u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54B1Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54B24u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54B34u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54B3Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54B44u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54B60u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54B74u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54B84u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54B94u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54B98u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54BA0u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54BC0u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54BE0u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54C08u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54C14u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54C28u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54C2Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54C40u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54C48u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54C50u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54C64u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54C74u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54C90u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54C98u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54CA8u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54CB0u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54CB8u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54CD4u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54CE8u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54CF8u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54D08u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54D0Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54D14u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54D34u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54D54u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54D7Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54D88u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54D9Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54DA0u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54DB4u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54DBCu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54DC4u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54DD8u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54DE8u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54E04u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54E0Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54E1Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54E24u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54E2Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54E48u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54E5Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54E6Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54E7Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54E80u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54E88u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54EA8u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54EC8u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54EF0u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54EFCu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54F10u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54F14u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54F28u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54F30u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54F38u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54F4Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54F5Cu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54F78u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54F80u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54F90u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54F98u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54FA0u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54FBCu, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54FD0u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54FE0u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54FF0u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54FF4u, &recomp_unit_0592, "recomp_unit_0592");
    runtime.register_function(0x08A54FFCu, &recomp_unit_0592, "recomp_unit_0592");
}
} // namespace psprecomp
