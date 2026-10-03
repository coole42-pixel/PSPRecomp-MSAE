#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0464[1023] = {
    1, 0, 2, 0, 3, 0, 4, 0, 0, 5, 0, 6, 0, 7, 8, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11,
    0, 12, 0, 13, 0, 14, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21,
    22, 0, 23, 24, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0, 0, 0, 0, 0, 28, 0, 29, 0, 30, 0, 0, 0, 31, 0, 0, 0,
    32, 0, 0, 33, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 39, 0, 40, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0,
    0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 49, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 56, 57, 0,
    58, 0, 0, 59, 0, 60, 0, 61, 0, 0, 62, 0, 0, 63, 0, 64, 0, 0, 65, 0, 66, 0, 0, 67, 0, 68, 0, 0, 0, 0, 69, 0,
    0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 72, 0, 73, 74, 0, 75, 76, 0, 77, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0,
    0, 0, 80, 0, 0, 0, 81, 82, 0, 0, 0, 0, 83, 0, 0, 84, 85, 0, 86, 0, 0, 87, 0, 0, 0, 88, 89, 0, 0, 0, 90, 0,
    91, 0, 92, 0, 93, 0, 94, 0, 95, 0, 96, 0, 0, 97, 98, 0, 0, 0, 0, 99, 0, 100, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0,
    0, 103, 0, 0, 104, 0, 0, 0, 105, 106, 0, 107, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0,
    0, 111, 0, 112, 0, 113, 0, 114, 115, 0, 0, 0, 116, 0, 0, 117, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 123,
    0, 124, 0, 0, 0, 125, 126, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 130, 0, 0, 131, 0, 132, 0, 133, 0, 134, 0, 135, 0, 136,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 139, 0, 0, 140, 0, 0, 0, 141, 0, 142, 0, 143, 144, 145, 0, 0, 0, 0, 0,
    146, 0, 147, 0, 148, 0, 149, 0, 0, 0, 0, 0, 150, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 155, 0, 156, 0, 0,
    0, 157, 158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 163, 0, 164, 0, 165, 0, 0, 0, 0, 166, 0, 167, 0, 168, 0, 0, 0, 0, 169, 0,
    170, 0, 171, 0, 0, 0, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 177, 0, 0, 0, 0,
    0, 0, 178, 0, 179, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0,
    0, 187, 0, 188, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196,
    0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0, 205, 0, 206, 0, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0, 210,
    211, 0, 0, 212, 0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 218, 0, 219, 220, 0, 0, 0, 0, 0, 221, 222, 0, 0, 0, 0, 223, 0,
    224, 0, 0, 0, 0, 0, 0, 225, 0, 226, 227, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0,
    0, 0, 0, 231, 0, 0, 232, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 236, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0,
    240, 0, 241, 0, 0, 242, 243, 0, 0, 244, 0, 0, 0, 0, 245, 0, 246, 0, 0, 247, 248, 0, 0, 249, 0, 0, 0, 0, 250, 0, 251, 0,
    0, 252, 253, 0, 0, 254, 0, 0, 0, 0, 255, 0, 256, 0, 0, 257, 258, 0, 0, 259, 0, 0, 0, 0, 260, 0, 261, 0, 0, 262, 263,
};
void recomp_unit_0464_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089D4000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0464[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089D4000;
    case 2u: goto L_089D4008;
    case 3u: goto L_089D4010;
    case 4u: goto L_089D4018;
    case 5u: goto L_089D4024;
    case 6u: goto L_089D402C;
    case 7u: goto L_089D4034;
    case 8u: goto L_089D4038;
    case 9u: goto L_089D4048;
    case 10u: goto L_089D4050;
    case 11u: goto L_089D407C;
    case 12u: goto L_089D4084;
    case 13u: goto L_089D408C;
    case 14u: goto L_089D4094;
    case 15u: goto L_089D40A0;
    case 16u: goto L_089D40A8;
    case 17u: goto L_089D40C0;
    case 18u: goto L_089D40D0;
    case 19u: goto L_089D40D4;
    case 20u: goto L_089D40DC;
    case 21u: goto L_089D40FC;
    case 22u: goto L_089D4100;
    case 23u: goto L_089D4108;
    case 24u: goto L_089D410C;
    case 25u: goto L_089D4128;
    case 26u: goto L_089D4130;
    case 27u: goto L_089D4138;
    case 28u: goto L_089D4150;
    case 29u: goto L_089D4158;
    case 30u: goto L_089D4160;
    case 31u: goto L_089D4170;
    case 32u: goto L_089D4180;
    case 33u: goto L_089D418C;
    case 34u: goto L_089D4198;
    case 35u: goto L_089D41A0;
    case 36u: goto L_089D44E8;
    case 37u: goto L_089D4510;
    case 38u: goto L_089D4518;
    case 39u: goto L_089D4528;
    case 40u: goto L_089D4530;
    case 41u: goto L_089D4538;
    case 42u: goto L_089D4550;
    case 43u: goto L_089D456C;
    case 44u: goto L_089D4574;
    case 45u: goto L_089D4594;
    case 46u: goto L_089D459C;
    case 47u: goto L_089D45D4;
    case 48u: goto L_089D45E8;
    case 49u: goto L_089D45EC;
    case 50u: goto L_089D4618;
    case 51u: goto L_089D4620;
    case 52u: goto L_089D4628;
    case 53u: goto L_089D4644;
    case 54u: goto L_089D4650;
    case 55u: goto L_089D465C;
    case 56u: goto L_089D4674;
    case 57u: goto L_089D4678;
    case 58u: goto L_089D4680;
    case 59u: goto L_089D468C;
    case 60u: goto L_089D4694;
    case 61u: goto L_089D469C;
    case 62u: goto L_089D46A8;
    case 63u: goto L_089D46B4;
    case 64u: goto L_089D46BC;
    case 65u: goto L_089D46C8;
    case 66u: goto L_089D46D0;
    case 67u: goto L_089D46DC;
    case 68u: goto L_089D46E4;
    case 69u: goto L_089D46F8;
    case 70u: goto L_089D470C;
    case 71u: goto L_089D4728;
    case 72u: goto L_089D472C;
    case 73u: goto L_089D4734;
    case 74u: goto L_089D4738;
    case 75u: goto L_089D4740;
    case 76u: goto L_089D4744;
    case 77u: goto L_089D474C;
    case 78u: goto L_089D4754;
    case 79u: goto L_089D4768;
    case 80u: goto L_089D4788;
    case 81u: goto L_089D4798;
    case 82u: goto L_089D479C;
    case 83u: goto L_089D47B0;
    case 84u: goto L_089D47BC;
    case 85u: goto L_089D47C0;
    case 86u: goto L_089D47C8;
    case 87u: goto L_089D47D4;
    case 88u: goto L_089D47E4;
    case 89u: goto L_089D47E8;
    case 90u: goto L_089D47F8;
    case 91u: goto L_089D4800;
    case 92u: goto L_089D4808;
    case 93u: goto L_089D4810;
    case 94u: goto L_089D4818;
    case 95u: goto L_089D4820;
    case 96u: goto L_089D4828;
    case 97u: goto L_089D4834;
    case 98u: goto L_089D4838;
    case 99u: goto L_089D484C;
    case 100u: goto L_089D4854;
    case 101u: goto L_089D485C;
    case 102u: goto L_089D486C;
    case 103u: goto L_089D4884;
    case 104u: goto L_089D4890;
    case 105u: goto L_089D48A0;
    case 106u: goto L_089D48A4;
    case 107u: goto L_089D48AC;
    case 108u: goto L_089D48B0;
    case 109u: goto L_089D48E8;
    case 110u: goto L_089D48F0;
    case 111u: goto L_089D4904;
    case 112u: goto L_089D490C;
    case 113u: goto L_089D4914;
    case 114u: goto L_089D491C;
    case 115u: goto L_089D4920;
    case 116u: goto L_089D4930;
    case 117u: goto L_089D493C;
    case 118u: goto L_089D4944;
    case 119u: goto L_089D4950;
    case 120u: goto L_089D495C;
    case 121u: goto L_089D4968;
    case 122u: goto L_089D4974;
    case 123u: goto L_089D497C;
    case 124u: goto L_089D4984;
    case 125u: goto L_089D4994;
    case 126u: goto L_089D4998;
    case 127u: goto L_089D49A0;
    case 128u: goto L_089D49B0;
    case 129u: goto L_089D49C0;
    case 130u: goto L_089D49C8;
    case 131u: goto L_089D49D4;
    case 132u: goto L_089D49DC;
    case 133u: goto L_089D49E4;
    case 134u: goto L_089D49EC;
    case 135u: goto L_089D49F4;
    case 136u: goto L_089D49FC;
    case 137u: goto L_089D4A24;
    case 138u: goto L_089D4A30;
    case 139u: goto L_089D4A34;
    case 140u: goto L_089D4A40;
    case 141u: goto L_089D4A50;
    case 142u: goto L_089D4A58;
    case 143u: goto L_089D4A60;
    case 144u: goto L_089D4A64;
    case 145u: goto L_089D4A68;
    case 146u: goto L_089D4A80;
    case 147u: goto L_089D4A88;
    case 148u: goto L_089D4A90;
    case 149u: goto L_089D4A98;
    case 150u: goto L_089D4AB0;
    case 151u: goto L_089D4AB8;
    case 152u: goto L_089D4AC0;
    case 153u: goto L_089D4ADC;
    case 154u: goto L_089D4AE4;
    case 155u: goto L_089D4AEC;
    case 156u: goto L_089D4AF4;
    case 157u: goto L_089D4B04;
    case 158u: goto L_089D4B08;
    case 159u: goto L_089D4B10;
    case 160u: goto L_089D4B18;
    case 161u: goto L_089D4B20;
    case 162u: goto L_089D4B28;
    case 163u: goto L_089D4B30;
    case 164u: goto L_089D4B38;
    case 165u: goto L_089D4B40;
    case 166u: goto L_089D4B54;
    case 167u: goto L_089D4B5C;
    case 168u: goto L_089D4B64;
    case 169u: goto L_089D4B78;
    case 170u: goto L_089D4B80;
    case 171u: goto L_089D4B88;
    case 172u: goto L_089D4B9C;
    case 173u: goto L_089D4BA4;
    case 174u: goto L_089D4BAC;
    case 175u: goto L_089D4BDC;
    case 176u: goto L_089D4BE4;
    case 177u: goto L_089D4BEC;
    case 178u: goto L_089D4C08;
    case 179u: goto L_089D4C10;
    case 180u: goto L_089D4C18;
    case 181u: goto L_089D4C28;
    case 182u: goto L_089D4C34;
    case 183u: goto L_089D4C4C;
    case 184u: goto L_089D4C54;
    case 185u: goto L_089D4C5C;
    case 186u: goto L_089D4C78;
    case 187u: goto L_089D4C84;
    case 188u: goto L_089D4C8C;
    case 189u: goto L_089D4CA4;
    case 190u: goto L_089D4CAC;
    case 191u: goto L_089D4CD4;
    case 192u: goto L_089D4CDC;
    case 193u: goto L_089D4CE4;
    case 194u: goto L_089D4CEC;
    case 195u: goto L_089D4CF4;
    case 196u: goto L_089D4CFC;
    case 197u: goto L_089D4D04;
    case 198u: goto L_089D4D0C;
    case 199u: goto L_089D4D14;
    case 200u: goto L_089D4D1C;
    case 201u: goto L_089D4D24;
    case 202u: goto L_089D4D2C;
    case 203u: goto L_089D4D34;
    case 204u: goto L_089D4D3C;
    case 205u: goto L_089D4D44;
    case 206u: goto L_089D4D4C;
    case 207u: goto L_089D4D5C;
    case 208u: goto L_089D4D64;
    case 209u: goto L_089D4D74;
    case 210u: goto L_089D4D7C;
    case 211u: goto L_089D4D80;
    case 212u: goto L_089D4D8C;
    case 213u: goto L_089D4D94;
    case 214u: goto L_089D4D9C;
    case 215u: goto L_089D4DA4;
    case 216u: goto L_089D4DAC;
    case 217u: goto L_089D4DB4;
    case 218u: goto L_089D4DBC;
    case 219u: goto L_089D4DC4;
    case 220u: goto L_089D4DC8;
    case 221u: goto L_089D4DE0;
    case 222u: goto L_089D4DE4;
    case 223u: goto L_089D4DF8;
    case 224u: goto L_089D4E00;
    case 225u: goto L_089D4E1C;
    case 226u: goto L_089D4E24;
    case 227u: goto L_089D4E28;
    case 228u: goto L_089D4E38;
    case 229u: goto L_089D4E40;
    case 230u: goto L_089D4E70;
    case 231u: goto L_089D4E8C;
    case 232u: goto L_089D4E98;
    case 233u: goto L_089D4E9C;
    case 234u: goto L_089D4EB8;
    case 235u: goto L_089D4EC4;
    case 236u: goto L_089D4EC8;
    case 237u: goto L_089D4ED4;
    case 238u: goto L_089D4EE0;
    case 239u: goto L_089D4EEC;
    case 240u: goto L_089D4F00;
    case 241u: goto L_089D4F08;
    case 242u: goto L_089D4F14;
    case 243u: goto L_089D4F18;
    case 244u: goto L_089D4F24;
    case 245u: goto L_089D4F38;
    case 246u: goto L_089D4F40;
    case 247u: goto L_089D4F4C;
    case 248u: goto L_089D4F50;
    case 249u: goto L_089D4F5C;
    case 250u: goto L_089D4F70;
    case 251u: goto L_089D4F78;
    case 252u: goto L_089D4F84;
    case 253u: goto L_089D4F88;
    case 254u: goto L_089D4F94;
    case 255u: goto L_089D4FA8;
    case 256u: goto L_089D4FB0;
    case 257u: goto L_089D4FBC;
    case 258u: goto L_089D4FC0;
    case 259u: goto L_089D4FCC;
    case 260u: goto L_089D4FE0;
    case 261u: goto L_089D4FE8;
    case 262u: goto L_089D4FF4;
    case 263u: goto L_089D4FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089D4000:
    aot_gpr[18] = (0u + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    goto L_089D4008;
L_089D4008:
    aot_gpr[31] = (0x089D4010u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 65u, 0x0898644Cu>(ctx, &aot_mem) && ctx.pc == 0x089D4010u) goto L_089D4010;
    return;
L_089D4010:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D4034;
      }
      goto L_089D4018;
    }
L_089D4018:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1084)));
        goto L_089D4038;
    }
    goto L_089D4024;
L_089D4024:
    if (aot_gpr[18] == aot_gpr[23]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1084)));
        goto L_089D4038;
    }
    goto L_089D402C;
L_089D402C:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), 0u);
    goto L_089D4034;
L_089D4034:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1084)));
    goto L_089D4038;
L_089D4038:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089D4008;
      }
      goto L_089D4048;
    }
L_089D4048:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2800)));
    (void)rt.invoke_chained_direct<&recomp_unit_0463_entry, 463u, 194u, 0x089D3E6Cu>(ctx, &aot_mem); return;
L_089D4050:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[2] = (aot_gpr[5] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_089D4108;
      }
      goto L_089D407C;
    }
L_089D407C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089D410C;
      }
      goto L_089D4084;
    }
L_089D4084:
    aot_gpr[31] = (0x089D408Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 11u, 0x089D9100u>(ctx, &aot_mem) && ctx.pc == 0x089D408Cu) goto L_089D408C;
    return;
L_089D408C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D418C;
      }
      goto L_089D4094;
    }
L_089D4094:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089D40A0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 65u, 0x0898644Cu>(ctx, &aot_mem) && ctx.pc == 0x089D40A0u) goto L_089D40A0;
    return;
L_089D40A0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          goto L_089D4108;
      }
      goto L_089D40A8;
    }
L_089D40A8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[19] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089D40C0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0463_entry, 463u, 152u, 0x089D3B18u>(ctx, &aot_mem) && ctx.pc == 0x089D40C0u) goto L_089D40C0;
    return;
L_089D40C0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[20] = (aot_gpr[18] << 2u);
      if (branch_taken) {
          goto L_089D4128;
      }
      goto L_089D40D0;
    }
L_089D40D0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(320)));
    goto L_089D40D4;
L_089D40D4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089D4100;
      }
      goto L_089D40DC;
    }
L_089D40DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(324)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(320)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089D40FCu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D40FCu) goto L_089D40FC;
    return;
L_089D40FC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089D4100;
L_089D4100:
    aot_gpr[31] = (0x089D4108u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 43u, 0x089D92D0u>(ctx, &aot_mem) && ctx.pc == 0x089D4108u) goto L_089D4108;
    return;
L_089D4108:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089D410C;
L_089D410C:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
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
L_089D4128:
    aot_gpr[16] = (0u + 0u);
    goto L_089D4150;
L_089D4130:
    if (aot_gpr[4] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(68)));
        goto L_089D4180;
    }
    goto L_089D4138;
L_089D4138:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2800)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(248)));
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(320)));
        goto L_089D40D4;
    }
    goto L_089D4150;
L_089D4150:
    aot_gpr[31] = (0x089D4158u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 202u, 0x089D1FF8u>(ctx, &aot_mem) && ctx.pc == 0x089D4158u) goto L_089D4158;
    return;
L_089D4158:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D4138;
      }
      goto L_089D4160;
    }
L_089D4160:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1028)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[4] != aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
        goto L_089D4130;
    }
    goto L_089D4170;
L_089D4170:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (aot_gpr[20] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    goto L_089D4138;
L_089D4180:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    goto L_089D4138;
L_089D418C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089D4198u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 18u, 0x089D914Cu>(ctx, &aot_mem) && ctx.pc == 0x089D4198u) goto L_089D4198;
    return;
L_089D4198:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089D4094;
L_089D41A0:
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(12668));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(22284), aot_gpr[2]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(22284));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(12828));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(17820));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(15276));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(11844));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(11284));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(14564));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-28616));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(16464));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(8184));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(15396));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(8772));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(9188));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(8992));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30156));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(8800));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(10316));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-28416));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-28480));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-28340));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-28216));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(76), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-28060));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(80), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-28172));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-27964));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-30544));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(92), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-30436));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(96), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-28944));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(100), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-28716));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(104), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-28864));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(108), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(10340));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(112), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(21080));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(116), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(25856));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(120), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(17640));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(124), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(9684));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(128), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(11980));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(132), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(25424));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(136), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(31484));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(144), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(13192));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(140), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(27072));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(152), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(10180));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(148), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(14376));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(160), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-32656));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(156), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(30520));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(168), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(29780));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(164), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-31940));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(176), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(27420));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(172), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(32152));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(184), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(28324));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(180), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(27456));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(192), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(29108));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(188), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(28680));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(200), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(29988));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(196), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(31272));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(208), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-27952));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(204), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(25384));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(220), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(32636));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(216), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(32604));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(228), aot_gpr[2]);
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(19628));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(224), aot_gpr[3]);
    aot_gpr[3] = (2205u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(18940));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(236), aot_gpr[2]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(232), aot_gpr[3]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4096));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(280), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(296), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(300), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(316), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(324), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(328), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(332), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(284), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(288), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(2800), aot_gpr[4]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2048));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(248), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(252), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(256), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(260), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(240), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(244), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(336), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(352), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(356), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(360), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(364), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(368), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(372), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D44E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(22588)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089D4594;
      }
      goto L_089D4510;
    }
L_089D4510:
    aot_gpr[31] = (0x089D4518u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1028)));
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 11u, 0x089D9100u>(ctx, &aot_mem) && ctx.pc == 0x089D4518u) goto L_089D4518;
    return;
L_089D4518:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(19));
      if (branch_taken) {
          goto L_089D4550;
      }
      goto L_089D4528;
    }
L_089D4528:
    aot_gpr[31] = (0x089D4530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 202u, 0x089D1FF8u>(ctx, &aot_mem) && ctx.pc == 0x089D4530u) goto L_089D4530;
    return;
L_089D4530:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_089D4550;
      }
      goto L_089D4538;
    }
L_089D4538:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1028)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(34));
      if (branch_taken) {
          goto L_089D456C;
      }
      goto L_089D4550;
    }
L_089D4550:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D456C:
    aot_gpr[31] = (0x089D4574u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 43u, 0x089D92D0u>(ctx, &aot_mem) && ctx.pc == 0x089D4574u) goto L_089D4574;
    return;
L_089D4574:
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4594:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(10));
    goto L_089D4550;
L_089D459C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
      if (branch_taken) {
          goto L_089D45E8;
      }
      goto L_089D45D4;
    }
L_089D45D4:
    aot_gpr[23] = (2217u << 16u);
    aot_gpr[2] = (aot_gpr[23] + static_cast<std::uint32_t>(22284));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D4618;
      }
      goto L_089D45E8;
    }
L_089D45E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_089D45EC;
L_089D45EC:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4618:
    aot_gpr[31] = (0x089D4620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 65u, 0x0898644Cu>(ctx, &aot_mem) && ctx.pc == 0x089D4620u) goto L_089D4620;
    return;
L_089D4620:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D45E8;
      }
      goto L_089D4628;
    }
L_089D4628:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[31] = (0x089D4644u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 44u, 0x089D2260u>(ctx, &aot_mem) && ctx.pc == 0x089D4644u) goto L_089D4644;
    return;
L_089D4644:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[19] != aot_gpr[3];
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089D4744;
      }
      goto L_089D4650;
    }
L_089D4650:
    aot_gpr[2] = (aot_gpr[19] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (4095u << 16u);
      if (branch_taken) {
          goto L_089D45E8;
      }
      goto L_089D465C;
    }
L_089D465C:
    aot_gpr[21] = (aot_gpr[2] | 65535u);
    aot_gpr[16] = (0u + 0u);
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(256));
    goto L_089D4680;
L_089D4674:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089D4678;
L_089D4678:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[17];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_089D46C8;
      }
      goto L_089D4680;
    }
L_089D4680:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[19] == aot_gpr[16];
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089D4674;
      }
      goto L_089D468C;
    }
L_089D468C:
    aot_gpr[31] = (0x089D4694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 65u, 0x0898644Cu>(ctx, &aot_mem) && ctx.pc == 0x089D4694u) goto L_089D4694;
    return;
L_089D4694:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D4674;
      }
      goto L_089D469C;
    }
L_089D469C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[2] != aot_gpr[20]) {
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
        goto L_089D4678;
    }
    goto L_089D46A8;
L_089D46A8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] < aot_gpr[21] ? 1u : 0u);
      if (branch_taken) {
          goto L_089D4674;
      }
      goto L_089D46B4;
    }
L_089D46B4:
    if (aot_gpr[3] == 0u) {
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
        goto L_089D4678;
    }
    goto L_089D46BC;
L_089D46BC:
    aot_gpr[21] = (aot_gpr[2] + 0u);
    aot_gpr[22] = (aot_gpr[16] + 0u);
    goto L_089D4674;
L_089D46C8:
    { const bool branch_taken = aot_gpr[22] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_089D4738;
      }
      goto L_089D46D0;
    }
L_089D46D0:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089D46DCu);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 65u, 0x0898644Cu>(ctx, &aot_mem) && ctx.pc == 0x089D46DCu) goto L_089D46DC;
    return;
L_089D46DC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D45E8;
      }
      goto L_089D46E4;
    }
L_089D46E4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089D46F8u);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 132u, 0x089D284Cu>(ctx, &aot_mem) && ctx.pc == 0x089D46F8u) goto L_089D46F8;
    return;
L_089D46F8:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(328)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1084)));
        goto L_089D472C;
    }
    goto L_089D470C;
L_089D470C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[22]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(332)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(328)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089D4728u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D4728u) goto L_089D4728;
    return;
L_089D4728:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1084)));
    goto L_089D472C;
L_089D472C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) > 0;
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_089D4914;
      }
      goto L_089D4734;
    }
L_089D4734:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
    goto L_089D4738;
L_089D4738:
    { const bool branch_taken = aot_gpr[22] == aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089D45EC;
      }
      goto L_089D4740;
    }
L_089D4740:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    goto L_089D4744;
L_089D4744:
    aot_gpr[31] = (0x089D474Cu);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 11u, 0x089D9100u>(ctx, &aot_mem) && ctx.pc == 0x089D474Cu) goto L_089D474C;
    return;
L_089D474C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[20] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D45E8;
      }
      goto L_089D4754;
    }
L_089D4754:
    aot_gpr[21] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D4788;
      }
      goto L_089D4768;
    }
L_089D4768:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(324)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(320)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089D4788u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D4788u) goto L_089D4788;
    return;
L_089D4788:
    aot_gpr[2] = (aot_gpr[23] + static_cast<std::uint32_t>(22284));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) > 0;
    aot_gpr[22] = (aot_gpr[19] << 2u);
      if (branch_taken) {
          goto L_089D4828;
      }
      goto L_089D4798;
    }
L_089D4798:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2800)));
    goto L_089D479C;
L_089D479C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(260)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (aot_gpr[18] + 0u);
        goto L_089D4800;
    }
    goto L_089D47B0;
L_089D47B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (aot_gpr[18] + 0u);
        goto L_089D4800;
    }
    goto L_089D47BC;
L_089D47BC:
    aot_gpr[17] = (0u + 0u);
    goto L_089D47C0;
L_089D47C0:
    aot_gpr[31] = (0x089D47C8u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 42u, 0x089D2244u>(ctx, &aot_mem) && ctx.pc == 0x089D47C8u) goto L_089D47C8;
    return;
L_089D47C8:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D47E8;
      }
      goto L_089D47D4;
    }
L_089D47D4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2)));
        goto L_089D4810;
    }
    goto L_089D47E4;
L_089D47E4:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_089D47E8;
L_089D47E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (aot_gpr[18] + 0u);
        goto L_089D4800;
    }
    goto L_089D47F8;
L_089D47F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16)));
    goto L_089D47C0;
L_089D4800:
    aot_gpr[31] = (0x089D4808u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 24u, 0x089D91C8u>(ctx, &aot_mem) && ctx.pc == 0x089D4808u) goto L_089D4808;
    return;
L_089D4808:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_089D45EC;
L_089D4810:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089D47E4;
      }
      goto L_089D4818;
    }
L_089D4818:
    aot_gpr[31] = (0x089D4820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x089D4820u) goto L_089D4820;
    return;
L_089D4820:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_089D47E8;
L_089D4828:
    aot_gpr[17] = (0u + 0u);
    aot_gpr[30] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089D484C;
L_089D4834:
    aot_gpr[3] = (aot_gpr[23] + static_cast<std::uint32_t>(22284));
    goto L_089D4838;
L_089D4838:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(280)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2800)));
      if (branch_taken) {
          goto L_089D479C;
      }
      goto L_089D484C;
    }
L_089D484C:
    aot_gpr[31] = (0x089D4854u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 202u, 0x089D1FF8u>(ctx, &aot_mem) && ctx.pc == 0x089D4854u) goto L_089D4854;
    return;
L_089D4854:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D4834;
      }
      goto L_089D485C;
    }
L_089D485C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[3] = (aot_gpr[23] + static_cast<std::uint32_t>(22284));
      if (branch_taken) {
          goto L_089D4838;
      }
      goto L_089D486C;
    }
L_089D486C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[19] == aot_gpr[3]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(10)));
        goto L_089D48F0;
    }
    goto L_089D4884;
L_089D4884:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[19] != aot_gpr[2]) {
    aot_gpr[3] = (aot_gpr[23] + static_cast<std::uint32_t>(22284));
        goto L_089D4838;
    }
    goto L_089D4890;
L_089D4890:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[30]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1028)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D49DC;
      }
      goto L_089D48A0;
    }
L_089D48A0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1248)));
    goto L_089D48A4;
L_089D48A4:
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_089D49C8;
    }
    goto L_089D48AC;
L_089D48AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    goto L_089D48B0;
L_089D48B0:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1252)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089D48E8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D48E8u) goto L_089D48E8;
    return;
L_089D48E8:
    aot_gpr[3] = (aot_gpr[23] + static_cast<std::uint32_t>(22284));
    goto L_089D4838;
L_089D48F0:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-3));
    aot_gpr[2] = (aot_gpr[2] & 255u);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089D497C;
      }
      goto L_089D4904;
    }
L_089D4904:
    aot_gpr[31] = (0x089D490Cu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 62u, 0x089D23E4u>(ctx, &aot_mem) && ctx.pc == 0x089D490Cu) goto L_089D490C;
    return;
L_089D490C:
    aot_gpr[3] = (aot_gpr[23] + static_cast<std::uint32_t>(22284));
    goto L_089D4838;
L_089D4914:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(3));
    goto L_089D4930;
L_089D491C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1084)));
    goto L_089D4920;
L_089D4920:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_089D4738;
      }
      goto L_089D4930;
    }
L_089D4930:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D493Cu);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 65u, 0x0898644Cu>(ctx, &aot_mem) && ctx.pc == 0x089D493Cu) goto L_089D493C;
    return;
L_089D493C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D491C;
      }
      goto L_089D4944;
    }
L_089D4944:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1084)));
        goto L_089D4920;
    }
    goto L_089D4950;
L_089D4950:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[2] != aot_gpr[17]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1084)));
        goto L_089D4920;
    }
    goto L_089D495C;
L_089D495C:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[16] == aot_gpr[22];
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089D491C;
      }
      goto L_089D4968;
    }
L_089D4968:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x089D4974u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0467_entry, 467u, 115u, 0x089D7738u>(ctx, &aot_mem) && ctx.pc == 0x089D4974u) goto L_089D4974;
    return;
L_089D4974:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1084)));
    goto L_089D4920;
L_089D497C:
    aot_gpr[31] = (0x089D4984u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 44u, 0x089D2260u>(ctx, &aot_mem) && ctx.pc == 0x089D4984u) goto L_089D4984;
    return;
L_089D4984:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1028)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D49EC;
      }
      goto L_089D4994;
    }
L_089D4994:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_089D4998;
L_089D4998:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[2];
    aot_gpr[3] = (aot_gpr[23] + static_cast<std::uint32_t>(22284));
      if (branch_taken) {
          goto L_089D4838;
      }
      goto L_089D49A0;
    }
L_089D49A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[30]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1248)));
    if (aot_gpr[5] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
        goto L_089D48B0;
    }
    goto L_089D49B0;
L_089D49B0:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089D49C0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 54u, 0x089D2320u>(ctx, &aot_mem) && ctx.pc == 0x089D49C0u) goto L_089D49C0;
    return;
L_089D49C0:
    aot_gpr[3] = (aot_gpr[23] + static_cast<std::uint32_t>(22284));
    goto L_089D4838;
L_089D49C8:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089D49D4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 54u, 0x089D2320u>(ctx, &aot_mem) && ctx.pc == 0x089D49D4u) goto L_089D49D4;
    return;
L_089D49D4:
    aot_gpr[3] = (aot_gpr[23] + static_cast<std::uint32_t>(22284));
    goto L_089D4838;
L_089D49DC:
    aot_gpr[31] = (0x089D49E4u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 4u, 0x089D202Cu>(ctx, &aot_mem) && ctx.pc == 0x089D49E4u) goto L_089D49E4;
    return;
L_089D49E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1248)));
    goto L_089D48A4;
L_089D49EC:
    aot_gpr[31] = (0x089D49F4u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 4u, 0x089D202Cu>(ctx, &aot_mem) && ctx.pc == 0x089D49F4u) goto L_089D49F4;
    return;
L_089D49F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_089D4998;
L_089D49FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089D4A30;
      }
      goto L_089D4A24;
    }
L_089D4A24:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[5] << 2u);
      if (branch_taken) {
          goto L_089D4B28;
      }
      goto L_089D4A30;
    }
L_089D4A30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2800)));
    goto L_089D4A34;
L_089D4A34:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[5] << 2u);
      if (branch_taken) {
          goto L_089D4ADC;
      }
      goto L_089D4A40;
    }
L_089D4A40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2800)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(252)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[5] << 2u);
      if (branch_taken) {
          goto L_089D4B08;
      }
      goto L_089D4A50;
    }
L_089D4A50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2800)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(256)));
    goto L_089D4A58;
L_089D4A58:
    if (aot_gpr[5] != 0u) {
    aot_gpr[5] = (aot_gpr[5] << 2u);
        goto L_089D4A80;
    }
    goto L_089D4A60;
L_089D4A60:
    aot_gpr[3] = (0u + 0u);
    goto L_089D4A64;
L_089D4A64:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_089D4A68;
L_089D4A68:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4A80:
    aot_gpr[31] = (0x089D4A88u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(364));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089D4A88u) goto L_089D4A88;
    return;
L_089D4A88:
    aot_gpr[31] = (0x089D4A90u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D4A90u) goto L_089D4A90;
    return;
L_089D4A90:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D4A64;
      }
      goto L_089D4A98;
    }
L_089D4A98:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(256)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(368));
    aot_gpr[31] = (0x089D4AB0u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089D4AB0u) goto L_089D4AB0;
    return;
L_089D4AB0:
    aot_gpr[31] = (0x089D4AB8u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D4AB8u) goto L_089D4AB8;
    return;
L_089D4AB8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D4A60;
      }
      goto L_089D4AC0;
    }
L_089D4AC0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4ADC:
    aot_gpr[31] = (0x089D4AE4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(372));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089D4AE4u) goto L_089D4AE4;
    return;
L_089D4AE4:
    aot_gpr[31] = (0x089D4AECu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D4AECu) goto L_089D4AEC;
    return;
L_089D4AEC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D4A64;
      }
      goto L_089D4AF4;
    }
L_089D4AF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2800)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(252)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(256)));
        goto L_089D4A58;
    }
    goto L_089D4B04;
L_089D4B04:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    goto L_089D4B08;
L_089D4B08:
    aot_gpr[31] = (0x089D4B10u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(352));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089D4B10u) goto L_089D4B10;
    return;
L_089D4B10:
    aot_gpr[31] = (0x089D4B18u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D4B18u) goto L_089D4B18;
    return;
L_089D4B18:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D4A50;
      }
      goto L_089D4B20;
    }
L_089D4B20:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_089D4A68;
L_089D4B28:
    aot_gpr[31] = (0x089D4B30u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(336));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089D4B30u) goto L_089D4B30;
    return;
L_089D4B30:
    aot_gpr[31] = (0x089D4B38u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D4B38u) goto L_089D4B38;
    return;
L_089D4B38:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D4A64;
      }
      goto L_089D4B40;
    }
L_089D4B40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(240)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(340));
    aot_gpr[31] = (0x089D4B54u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089D4B54u) goto L_089D4B54;
    return;
L_089D4B54:
    aot_gpr[31] = (0x089D4B5Cu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D4B5Cu) goto L_089D4B5C;
    return;
L_089D4B5C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D4A64;
      }
      goto L_089D4B64;
    }
L_089D4B64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(240)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(344));
    aot_gpr[31] = (0x089D4B78u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089D4B78u) goto L_089D4B78;
    return;
L_089D4B78:
    aot_gpr[31] = (0x089D4B80u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D4B80u) goto L_089D4B80;
    return;
L_089D4B80:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D4A64;
      }
      goto L_089D4B88;
    }
L_089D4B88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(240)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(348));
    aot_gpr[31] = (0x089D4B9Cu);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089D4B9Cu) goto L_089D4B9C;
    return;
L_089D4B9C:
    aot_gpr[31] = (0x089D4BA4u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D4BA4u) goto L_089D4BA4;
    return;
L_089D4BA4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D4A64;
      }
      goto L_089D4BAC;
    }
L_089D4BAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(244)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(240)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(356));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (ctx.lo);
    aot_gpr[6] = (aot_gpr[2] << 2u);
    aot_gpr[5] = (aot_gpr[2] << 4u);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[2]);
    aot_gpr[31] = (0x089D4BDCu);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089D4BDCu) goto L_089D4BDC;
    return;
L_089D4BDC:
    aot_gpr[31] = (0x089D4BE4u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D4BE4u) goto L_089D4BE4;
    return;
L_089D4BE4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D4A64;
      }
      goto L_089D4BEC;
    }
L_089D4BEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(240)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(360));
    aot_gpr[2] = (aot_gpr[5] << 6u);
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[31] = (0x089D4C08u);
    aot_gpr[5] = (aot_gpr[2] - aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089D4C08u) goto L_089D4C08;
    return;
L_089D4C08:
    aot_gpr[31] = (0x089D4C10u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D4C10u) goto L_089D4C10;
    return;
L_089D4C10:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D4A64;
      }
      goto L_089D4C18;
    }
L_089D4C18:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(240)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2800)));
        goto L_089D4A34;
    }
    goto L_089D4C28;
L_089D4C28:
    aot_gpr[18] = (0u + 0u);
    aot_gpr[16] = (0u + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(360)));
    goto L_089D4C34;
L_089D4C34:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(244)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (0x089D4C4Cu);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089D4C4Cu) goto L_089D4C4C;
    return;
L_089D4C4C:
    aot_gpr[31] = (0x089D4C54u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D4C54u) goto L_089D4C54;
    return;
L_089D4C54:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D4A64;
      }
      goto L_089D4C5C;
    }
L_089D4C5C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2800)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(244)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(44));
    aot_gpr[31] = (0x089D4C78u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089D4C78u) goto L_089D4C78;
    return;
L_089D4C78:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089D4C84u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D4C84u) goto L_089D4C84;
    return;
L_089D4C84:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D4A64;
      }
      goto L_089D4C8C;
    }
L_089D4C8C:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(240)));
    aot_gpr[2] = (aot_gpr[18] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(360)));
        goto L_089D4C34;
    }
    goto L_089D4CA4;
L_089D4CA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2800)));
    goto L_089D4A34;
L_089D4CAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(336)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(340)));
        goto L_089D4CE4;
    }
    goto L_089D4CD4;
L_089D4CD4:
    aot_gpr[31] = (0x089D4CDCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(336));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089D4CDCu) goto L_089D4CDC;
    return;
L_089D4CDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(340)));
    goto L_089D4CE4;
L_089D4CE4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(344)));
        goto L_089D4CFC;
    }
    goto L_089D4CEC;
L_089D4CEC:
    aot_gpr[31] = (0x089D4CF4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(340));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089D4CF4u) goto L_089D4CF4;
    return;
L_089D4CF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(344)));
    goto L_089D4CFC;
L_089D4CFC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(348)));
        goto L_089D4D14;
    }
    goto L_089D4D04;
L_089D4D04:
    aot_gpr[31] = (0x089D4D0Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(344));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089D4D0Cu) goto L_089D4D0C;
    return;
L_089D4D0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(348)));
    goto L_089D4D14;
L_089D4D14:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(356)));
        goto L_089D4D2C;
    }
    goto L_089D4D1C;
L_089D4D1C:
    aot_gpr[31] = (0x089D4D24u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(348));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089D4D24u) goto L_089D4D24;
    return;
L_089D4D24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(356)));
    goto L_089D4D2C;
L_089D4D2C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
        goto L_089D4D44;
    }
    goto L_089D4D34;
L_089D4D34:
    aot_gpr[31] = (0x089D4D3Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(356));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089D4D3Cu) goto L_089D4D3C;
    return;
L_089D4D3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2800)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    goto L_089D4D44;
L_089D4D44:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089D4D64;
      }
      goto L_089D4D4C;
    }
L_089D4D4C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(240)));
    aot_gpr[17] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_089D4DE4;
      }
      goto L_089D4D5C;
    }
L_089D4D5C:
    aot_gpr[31] = (0x089D4D64u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089D4D64u) goto L_089D4D64;
    return;
L_089D4D64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(372)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (2217u << 16u);
      if (branch_taken) {
          goto L_089D4D80;
      }
      goto L_089D4D74;
    }
L_089D4D74:
    aot_gpr[31] = (0x089D4D7Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(372));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089D4D7Cu) goto L_089D4D7C;
    return;
L_089D4D7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2800)));
    goto L_089D4D80;
L_089D4D80:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(352)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(364)));
        goto L_089D4D9C;
    }
    goto L_089D4D8C;
L_089D4D8C:
    aot_gpr[31] = (0x089D4D94u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(352));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089D4D94u) goto L_089D4D94;
    return;
L_089D4D94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(364)));
    goto L_089D4D9C;
L_089D4D9C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(368)));
        goto L_089D4DB4;
    }
    goto L_089D4DA4;
L_089D4DA4:
    aot_gpr[31] = (0x089D4DACu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(364));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089D4DACu) goto L_089D4DAC;
    return;
L_089D4DAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(368)));
    goto L_089D4DB4;
L_089D4DB4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089D4DC8;
      }
      goto L_089D4DBC;
    }
L_089D4DBC:
    aot_gpr[31] = (0x089D4DC4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089D4DC4u) goto L_089D4DC4;
    return;
L_089D4DC4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_089D4DC8;
L_089D4DC8:
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
L_089D4DE0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(360)));
    goto L_089D4DE4;
L_089D4DE4:
    aot_gpr[4] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089D4E00;
      }
      goto L_089D4DF8;
    }
L_089D4DF8:
    aot_gpr[31] = (0x089D4E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089D4E00u) goto L_089D4E00;
    return;
L_089D4E00:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2800)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_089D4E28;
      }
      goto L_089D4E1C;
    }
L_089D4E1C:
    aot_gpr[31] = (0x089D4E24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089D4E24u) goto L_089D4E24;
    return;
L_089D4E24:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2800)));
    goto L_089D4E28;
L_089D4E28:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(240)));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_089D4DE0;
      }
      goto L_089D4E38;
    }
L_089D4E38:
    // nop
    goto L_089D4D5C;
L_089D4E40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089D4E98;
      }
      goto L_089D4E70;
    }
L_089D4E70:
    aot_gpr[2] = (aot_gpr[3] << 2u);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-12548));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4E8C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x089D4E98u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089D4E98u) goto L_089D4E98;
    return;
L_089D4E98:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089D4E9C;
L_089D4E9C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4EB8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089D4E9C;
      }
      goto L_089D4EC4;
    }
L_089D4EC4:
    aot_gpr[19] = (0u + 0u);
    goto L_089D4EC8;
L_089D4EC8:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D4ED4u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 210u, 0x08990F38u>(ctx, &aot_mem) && ctx.pc == 0x089D4ED4u) goto L_089D4ED4;
    return;
L_089D4ED4:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089D4EE0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 210u, 0x08990F38u>(ctx, &aot_mem) && ctx.pc == 0x089D4EE0u) goto L_089D4EE0;
    return;
L_089D4EE0:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x089D4EECu);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 210u, 0x08990F38u>(ctx, &aot_mem) && ctx.pc == 0x089D4EECu) goto L_089D4EEC;
    return;
L_089D4EEC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089D4EC8;
      }
      goto L_089D4F00;
    }
L_089D4F00:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089D4E9C;
L_089D4F08:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089D4E9C;
      }
      goto L_089D4F14;
    }
L_089D4F14:
    aot_gpr[19] = (0u + 0u);
    goto L_089D4F18;
L_089D4F18:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D4F24u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089D4F24u) goto L_089D4F24;
    return;
L_089D4F24:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089D4F18;
      }
      goto L_089D4F38;
    }
L_089D4F38:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089D4E9C;
L_089D4F40:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089D4E9C;
      }
      goto L_089D4F4C;
    }
L_089D4F4C:
    aot_gpr[19] = (0u + 0u);
    goto L_089D4F50;
L_089D4F50:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D4F5Cu);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089D4F5Cu) goto L_089D4F5C;
    return;
L_089D4F5C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089D4F50;
      }
      goto L_089D4F70;
    }
L_089D4F70:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089D4E9C;
L_089D4F78:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089D4E9C;
      }
      goto L_089D4F84;
    }
L_089D4F84:
    aot_gpr[19] = (0u + 0u);
    goto L_089D4F88;
L_089D4F88:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D4F94u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089D4F94u) goto L_089D4F94;
    return;
L_089D4F94:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089D4F88;
      }
      goto L_089D4FA8;
    }
L_089D4FA8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089D4E9C;
L_089D4FB0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089D4E9C;
      }
      goto L_089D4FBC;
    }
L_089D4FBC:
    aot_gpr[19] = (0u + 0u);
    goto L_089D4FC0;
L_089D4FC0:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D4FCCu);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089D4FCCu) goto L_089D4FCC;
    return;
L_089D4FCC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089D4FC0;
      }
      goto L_089D4FE0;
    }
L_089D4FE0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089D4E9C;
L_089D4FE8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089D4E9C;
      }
      goto L_089D4FF4;
    }
L_089D4FF4:
    aot_gpr[19] = (0u + 0u);
    goto L_089D4FF8;
L_089D4FF8:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D5004u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0464(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0464_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_464(Runtime &runtime) {
    runtime.register_generated_unit(464u, 0x089D4000u, 4096u, &recomp_unit_0464, &recomp_unit_0464_entry);
    runtime.register_function(0x089D4000u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4008u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4010u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4018u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4024u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D402Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4034u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4038u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4048u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4050u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D407Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4084u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D408Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4094u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D40A0u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D40A8u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D40C0u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D40D0u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D40D4u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D40DCu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D40FCu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4100u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4108u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D410Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4128u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4130u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4138u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4150u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4158u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4160u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4170u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4180u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D418Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4198u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D41A0u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D44E8u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4510u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4518u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4528u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4530u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4538u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4550u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D456Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4574u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4594u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D459Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D45D4u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D45E8u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D45ECu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4618u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4620u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4628u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4644u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4650u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D465Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4674u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4678u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4680u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D468Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4694u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D469Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D46A8u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D46B4u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D46BCu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D46C8u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D46D0u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D46DCu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D46E4u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D46F8u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D470Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4728u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D472Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4734u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4738u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4740u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4744u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D474Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4754u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4768u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4788u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4798u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D479Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D47B0u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D47BCu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D47C0u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D47C8u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D47D4u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D47E4u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D47E8u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D47F8u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4800u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4808u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4810u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4818u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4820u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4828u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4834u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4838u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D484Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4854u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D485Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D486Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4884u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4890u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D48A0u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D48A4u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D48ACu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D48B0u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D48E8u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D48F0u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4904u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D490Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4914u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D491Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4920u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4930u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D493Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4944u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4950u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D495Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4968u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4974u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D497Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4984u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4994u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4998u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D49A0u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D49B0u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D49C0u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D49C8u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D49D4u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D49DCu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D49E4u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D49ECu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D49F4u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D49FCu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4A24u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4A30u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4A34u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4A40u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4A50u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4A58u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4A60u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4A64u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4A68u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4A80u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4A88u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4A90u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4A98u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4AB0u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4AB8u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4AC0u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4ADCu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4AE4u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4AECu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4AF4u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4B04u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4B08u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4B10u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4B18u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4B20u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4B28u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4B30u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4B38u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4B40u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4B54u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4B5Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4B64u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4B78u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4B80u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4B88u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4B9Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4BA4u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4BACu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4BDCu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4BE4u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4BECu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4C08u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4C10u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4C18u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4C28u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4C34u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4C4Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4C54u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4C5Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4C78u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4C84u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4C8Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4CA4u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4CACu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4CD4u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4CDCu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4CE4u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4CECu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4CF4u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4CFCu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4D04u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4D0Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4D14u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4D1Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4D24u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4D2Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4D34u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4D3Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4D44u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4D4Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4D5Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4D64u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4D74u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4D7Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4D80u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4D8Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4D94u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4D9Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4DA4u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4DACu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4DB4u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4DBCu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4DC4u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4DC8u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4DE0u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4DE4u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4DF8u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4E00u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4E1Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4E24u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4E28u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4E38u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4E40u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4E70u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4E8Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4E98u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4E9Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4EB8u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4EC4u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4EC8u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4ED4u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4EE0u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4EECu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4F00u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4F08u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4F14u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4F18u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4F24u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4F38u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4F40u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4F4Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4F50u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4F5Cu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4F70u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4F78u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4F84u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4F88u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4F94u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4FA8u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4FB0u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4FBCu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4FC0u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4FCCu, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4FE0u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4FE8u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4FF4u, &recomp_unit_0464, "recomp_unit_0464");
    runtime.register_function(0x089D4FF8u, &recomp_unit_0464, "recomp_unit_0464");
}
} // namespace psprecomp
