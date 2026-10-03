#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0432[1019] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 6, 0, 0, 7, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0,
    0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 16, 0, 17, 0, 0, 0, 0, 18, 0, 0,
    19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 22, 0, 23, 0, 0, 24, 0, 0, 25, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28,
    0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 34, 0, 0, 35, 0, 36, 0, 0, 37, 0, 0,
    0, 0, 0, 0, 0, 0, 38, 39, 0, 0, 0, 0, 0, 40, 0, 41, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45,
    0, 46, 0, 47, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 52, 53, 0, 0, 0, 54, 0, 55, 0, 56,
    0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 61, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 64, 0, 65, 0,
    0, 0, 66, 0, 0, 67, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0,
    0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 78, 0, 0, 0, 0, 0, 79, 80, 0, 0,
    81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 87, 88, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 92, 0, 0, 93, 94, 0, 95, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98,
    0, 0, 0, 0, 0, 0, 99, 100, 0, 101, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 106, 107, 0, 108,
    0, 109, 110, 0, 111, 0, 112, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 118, 0, 0,
    0, 119, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 127, 0, 0, 0, 0, 0, 128, 129, 0, 0, 130, 131, 0, 0, 0, 0, 0, 132,
    0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 136, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 141,
    142, 0, 0, 0, 143, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 148, 0, 149, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0,
    0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 160,
    161, 0, 162, 0, 163, 0, 0, 164, 0, 165, 0, 166, 0, 167, 0, 168, 0, 0, 169, 0, 0, 0, 170, 171, 0, 0, 0, 0, 172, 0, 0, 0,
    173, 0, 0, 0, 174, 0, 0, 175, 0, 176, 177, 0, 178, 0, 0, 0, 179, 0, 180, 0, 0, 181, 182, 183, 0, 0, 0, 184, 0, 0, 185, 0,
    0, 0, 186, 0, 187, 188, 0, 189, 0, 190, 191, 0, 192, 0, 193, 0, 194, 0, 0, 195, 0, 0, 196, 0, 197, 0, 0, 198, 0, 199, 0, 0,
    0, 0, 0, 200, 0, 0, 201, 0, 202, 0, 203, 0, 0, 204, 0, 205, 0, 0, 206, 207, 0, 208, 0, 0, 0, 0, 209, 0, 0, 210, 0, 211,
    0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 214, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 219, 0,
    220, 0, 221, 0, 222, 0, 223, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 226, 0, 227, 0, 228, 0, 0, 0, 229, 0, 0, 0,
    0, 230, 0, 0, 0, 231, 0, 232, 233, 0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 237, 0, 238, 239, 0, 240, 0, 0, 0, 241, 0, 242, 0,
    0, 243, 0, 0, 0, 0, 244, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 253, 254, 255,
    256, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 259, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 270, 0, 271, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0,
    274, 0, 275, 0, 0, 0, 276, 0, 0, 277, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281,
    0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 285, 0, 286, 0, 0, 287, 0, 288, 0, 289,
};
void recomp_unit_0432_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089B4000u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0432[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089B4000;
    case 2u: goto L_089B400C;
    case 3u: goto L_089B4014;
    case 4u: goto L_089B4028;
    case 5u: goto L_089B403C;
    case 6u: goto L_089B4040;
    case 7u: goto L_089B404C;
    case 8u: goto L_089B4058;
    case 9u: goto L_089B4064;
    case 10u: goto L_089B4084;
    case 11u: goto L_089B4090;
    case 12u: goto L_089B40A0;
    case 13u: goto L_089B40A8;
    case 14u: goto L_089B40C4;
    case 15u: goto L_089B40CC;
    case 16u: goto L_089B40D8;
    case 17u: goto L_089B40E0;
    case 18u: goto L_089B40F4;
    case 19u: goto L_089B4100;
    case 20u: goto L_089B4110;
    case 21u: goto L_089B4120;
    case 22u: goto L_089B412C;
    case 23u: goto L_089B4134;
    case 24u: goto L_089B4140;
    case 25u: goto L_089B414C;
    case 26u: goto L_089B4154;
    case 27u: goto L_089B4168;
    case 28u: goto L_089B417C;
    case 29u: goto L_089B4188;
    case 30u: goto L_089B4198;
    case 31u: goto L_089B41A0;
    case 32u: goto L_089B41BC;
    case 33u: goto L_089B41C4;
    case 34u: goto L_089B41D4;
    case 35u: goto L_089B41E0;
    case 36u: goto L_089B41E8;
    case 37u: goto L_089B41F4;
    case 38u: goto L_089B4218;
    case 39u: goto L_089B421C;
    case 40u: goto L_089B4234;
    case 41u: goto L_089B423C;
    case 42u: goto L_089B4244;
    case 43u: goto L_089B4254;
    case 44u: goto L_089B4264;
    case 45u: goto L_089B427C;
    case 46u: goto L_089B4284;
    case 47u: goto L_089B428C;
    case 48u: goto L_089B4294;
    case 49u: goto L_089B42A0;
    case 50u: goto L_089B42BC;
    case 51u: goto L_089B42D4;
    case 52u: goto L_089B42D8;
    case 53u: goto L_089B42DC;
    case 54u: goto L_089B42EC;
    case 55u: goto L_089B42F4;
    case 56u: goto L_089B42FC;
    case 57u: goto L_089B4308;
    case 58u: goto L_089B4310;
    case 59u: goto L_089B4334;
    case 60u: goto L_089B4340;
    case 61u: goto L_089B4344;
    case 62u: goto L_089B4348;
    case 63u: goto L_089B436C;
    case 64u: goto L_089B4370;
    case 65u: goto L_089B4378;
    case 66u: goto L_089B4388;
    case 67u: goto L_089B4394;
    case 68u: goto L_089B439C;
    case 69u: goto L_089B43A8;
    case 70u: goto L_089B43C4;
    case 71u: goto L_089B43D0;
    case 72u: goto L_089B43E8;
    case 73u: goto L_089B43F8;
    case 74u: goto L_089B441C;
    case 75u: goto L_089B442C;
    case 76u: goto L_089B4448;
    case 77u: goto L_089B4454;
    case 78u: goto L_089B4458;
    case 79u: goto L_089B4470;
    case 80u: goto L_089B4474;
    case 81u: goto L_089B4480;
    case 82u: goto L_089B4494;
    case 83u: goto L_089B44A8;
    case 84u: goto L_089B44B0;
    case 85u: goto L_089B44D4;
    case 86u: goto L_089B44E4;
    case 87u: goto L_089B44E8;
    case 88u: goto L_089B44EC;
    case 89u: goto L_089B4518;
    case 90u: goto L_089B4520;
    case 91u: goto L_089B4528;
    case 92u: goto L_089B4530;
    case 93u: goto L_089B453C;
    case 94u: goto L_089B4540;
    case 95u: goto L_089B4548;
    case 96u: goto L_089B4550;
    case 97u: goto L_089B4568;
    case 98u: goto L_089B457C;
    case 99u: goto L_089B4598;
    case 100u: goto L_089B459C;
    case 101u: goto L_089B45A4;
    case 102u: goto L_089B45B0;
    case 103u: goto L_089B45B8;
    case 104u: goto L_089B45D4;
    case 105u: goto L_089B45E8;
    case 106u: goto L_089B45F0;
    case 107u: goto L_089B45F4;
    case 108u: goto L_089B45FC;
    case 109u: goto L_089B4604;
    case 110u: goto L_089B4608;
    case 111u: goto L_089B4610;
    case 112u: goto L_089B4618;
    case 113u: goto L_089B461C;
    case 114u: goto L_089B4624;
    case 115u: goto L_089B4648;
    case 116u: goto L_089B4654;
    case 117u: goto L_089B4670;
    case 118u: goto L_089B4674;
    case 119u: goto L_089B4684;
    case 120u: goto L_089B468C;
    case 121u: goto L_089B4698;
    case 122u: goto L_089B46BC;
    case 123u: goto L_089B46E8;
    case 124u: goto L_089B4708;
    case 125u: goto L_089B4714;
    case 126u: goto L_089B4734;
    case 127u: goto L_089B4738;
    case 128u: goto L_089B4750;
    case 129u: goto L_089B4754;
    case 130u: goto L_089B4760;
    case 131u: goto L_089B4764;
    case 132u: goto L_089B477C;
    case 133u: goto L_089B4788;
    case 134u: goto L_089B47A4;
    case 135u: goto L_089B47AC;
    case 136u: goto L_089B47B8;
    case 137u: goto L_089B47C0;
    case 138u: goto L_089B47C8;
    case 139u: goto L_089B47E8;
    case 140u: goto L_089B47F0;
    case 141u: goto L_089B47FC;
    case 142u: goto L_089B4800;
    case 143u: goto L_089B4810;
    case 144u: goto L_089B4818;
    case 145u: goto L_089B4824;
    case 146u: goto L_089B4830;
    case 147u: goto L_089B483C;
    case 148u: goto L_089B4844;
    case 149u: goto L_089B484C;
    case 150u: goto L_089B4850;
    case 151u: goto L_089B486C;
    case 152u: goto L_089B4878;
    case 153u: goto L_089B4890;
    case 154u: goto L_089B489C;
    case 155u: goto L_089B48B4;
    case 156u: goto L_089B48BC;
    case 157u: goto L_089B48C8;
    case 158u: goto L_089B48D8;
    case 159u: goto L_089B48F0;
    case 160u: goto L_089B48FC;
    case 161u: goto L_089B4900;
    case 162u: goto L_089B4908;
    case 163u: goto L_089B4910;
    case 164u: goto L_089B491C;
    case 165u: goto L_089B4924;
    case 166u: goto L_089B492C;
    case 167u: goto L_089B4934;
    case 168u: goto L_089B493C;
    case 169u: goto L_089B4948;
    case 170u: goto L_089B4958;
    case 171u: goto L_089B495C;
    case 172u: goto L_089B4970;
    case 173u: goto L_089B4980;
    case 174u: goto L_089B4990;
    case 175u: goto L_089B499C;
    case 176u: goto L_089B49A4;
    case 177u: goto L_089B49A8;
    case 178u: goto L_089B49B0;
    case 179u: goto L_089B49C0;
    case 180u: goto L_089B49C8;
    case 181u: goto L_089B49D4;
    case 182u: goto L_089B49D8;
    case 183u: goto L_089B49DC;
    case 184u: goto L_089B49EC;
    case 185u: goto L_089B49F8;
    case 186u: goto L_089B4A08;
    case 187u: goto L_089B4A10;
    case 188u: goto L_089B4A14;
    case 189u: goto L_089B4A1C;
    case 190u: goto L_089B4A24;
    case 191u: goto L_089B4A28;
    case 192u: goto L_089B4A30;
    case 193u: goto L_089B4A38;
    case 194u: goto L_089B4A40;
    case 195u: goto L_089B4A4C;
    case 196u: goto L_089B4A58;
    case 197u: goto L_089B4A60;
    case 198u: goto L_089B4A6C;
    case 199u: goto L_089B4A74;
    case 200u: goto L_089B4A8C;
    case 201u: goto L_089B4A98;
    case 202u: goto L_089B4AA0;
    case 203u: goto L_089B4AA8;
    case 204u: goto L_089B4AB4;
    case 205u: goto L_089B4ABC;
    case 206u: goto L_089B4AC8;
    case 207u: goto L_089B4ACC;
    case 208u: goto L_089B4AD4;
    case 209u: goto L_089B4AE8;
    case 210u: goto L_089B4AF4;
    case 211u: goto L_089B4AFC;
    case 212u: goto L_089B4B0C;
    case 213u: goto L_089B4B20;
    case 214u: goto L_089B4B2C;
    case 215u: goto L_089B4B30;
    case 216u: goto L_089B4B4C;
    case 217u: goto L_089B4B58;
    case 218u: goto L_089B4B6C;
    case 219u: goto L_089B4B78;
    case 220u: goto L_089B4B80;
    case 221u: goto L_089B4B88;
    case 222u: goto L_089B4B90;
    case 223u: goto L_089B4B98;
    case 224u: goto L_089B4BB0;
    case 225u: goto L_089B4BB8;
    case 226u: goto L_089B4BD0;
    case 227u: goto L_089B4BD8;
    case 228u: goto L_089B4BE0;
    case 229u: goto L_089B4BF0;
    case 230u: goto L_089B4C04;
    case 231u: goto L_089B4C14;
    case 232u: goto L_089B4C1C;
    case 233u: goto L_089B4C20;
    case 234u: goto L_089B4C38;
    case 235u: goto L_089B4C40;
    case 236u: goto L_089B4C48;
    case 237u: goto L_089B4C4C;
    case 238u: goto L_089B4C54;
    case 239u: goto L_089B4C58;
    case 240u: goto L_089B4C60;
    case 241u: goto L_089B4C70;
    case 242u: goto L_089B4C78;
    case 243u: goto L_089B4C84;
    case 244u: goto L_089B4C98;
    case 245u: goto L_089B4CA0;
    case 246u: goto L_089B4CAC;
    case 247u: goto L_089B4CC4;
    case 248u: goto L_089B4CD4;
    case 249u: goto L_089B4CE8;
    case 250u: goto L_089B4D38;
    case 251u: goto L_089B4D50;
    case 252u: goto L_089B4D68;
    case 253u: goto L_089B4D74;
    case 254u: goto L_089B4D78;
    case 255u: goto L_089B4D7C;
    case 256u: goto L_089B4D80;
    case 257u: goto L_089B4D8C;
    case 258u: goto L_089B4D98;
    case 259u: goto L_089B4DAC;
    case 260u: goto L_089B4DB4;
    case 261u: goto L_089B4DBC;
    case 262u: goto L_089B4DEC;
    case 263u: goto L_089B4DF8;
    case 264u: goto L_089B4E28;
    case 265u: goto L_089B4E30;
    case 266u: goto L_089B4E38;
    case 267u: goto L_089B4E60;
    case 268u: goto L_089B4EB0;
    case 269u: goto L_089B4EB8;
    case 270u: goto L_089B4EC0;
    case 271u: goto L_089B4EC8;
    case 272u: goto L_089B4ED4;
    case 273u: goto L_089B4EDC;
    case 274u: goto L_089B4F00;
    case 275u: goto L_089B4F08;
    case 276u: goto L_089B4F18;
    case 277u: goto L_089B4F24;
    case 278u: goto L_089B4F28;
    case 279u: goto L_089B4F48;
    case 280u: goto L_089B4F6C;
    case 281u: goto L_089B4F7C;
    case 282u: goto L_089B4F88;
    case 283u: goto L_089B4FA4;
    case 284u: goto L_089B4FB4;
    case 285u: goto L_089B4FC4;
    case 286u: goto L_089B4FCC;
    case 287u: goto L_089B4FD8;
    case 288u: goto L_089B4FE0;
    case 289u: goto L_089B4FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089B4000:
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[16]);
    aot_gpr[31] = (0x089B400Cu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 34u, 0x089903A0u>(ctx, &aot_mem) && ctx.pc == 0x089B400Cu) goto L_089B400C;
    return;
L_089B400C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0431_entry, 431u, 219u, 0x089B3EE8u>(ctx, &aot_mem); return;
      }
      goto L_089B4014;
    }
L_089B4014:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0431_entry, 431u, 218u, 0x089B3EE4u>(ctx, &aot_mem); return;
      }
      goto L_089B4028;
    }
L_089B4028:
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[20] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089B4084;
      }
      goto L_089B403C;
    }
L_089B403C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    goto L_089B4040;
L_089B4040:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0431_entry, 431u, 220u, 0x089B3EECu>(ctx, &aot_mem); return;
      }
      goto L_089B404C;
    }
L_089B404C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0431_entry, 431u, 219u, 0x089B3EE8u>(ctx, &aot_mem); return;
L_089B4058:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        (void)rt.invoke_chained_direct<&recomp_unit_0431_entry, 431u, 219u, 0x089B3EE8u>(ctx, &aot_mem); return;
    }
    goto L_089B4064;
L_089B4064:
    aot_gpr[2] = (aot_gpr[22] + aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_089B403C;
L_089B4084:
    aot_gpr[17] = (aot_gpr[22] + aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(6));
    aot_gpr[18] = (0u + 0u);
    goto L_089B4090;
L_089B4090:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B40A0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 42u, 0x0899040Cu>(ctx, &aot_mem) && ctx.pc == 0x089B40A0u) goto L_089B40A0;
    return;
L_089B40A0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0431_entry, 431u, 218u, 0x089B3EE4u>(ctx, &aot_mem); return;
      }
      goto L_089B40A8;
    }
L_089B40A8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[20] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B4090;
      }
      goto L_089B40C4;
    }
L_089B40C4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    goto L_089B4040;
L_089B40CC:
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[16]);
    aot_gpr[31] = (0x089B40D8u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 34u, 0x089903A0u>(ctx, &aot_mem) && ctx.pc == 0x089B40D8u) goto L_089B40D8;
    return;
L_089B40D8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0431_entry, 431u, 219u, 0x089B3EE8u>(ctx, &aot_mem); return;
      }
      goto L_089B40E0;
    }
L_089B40E0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0431_entry, 431u, 219u, 0x089B3EE8u>(ctx, &aot_mem); return;
      }
      goto L_089B40F4;
    }
L_089B40F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B4100u);
    aot_gpr[5] = (aot_gpr[22] + aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089B4100u) goto L_089B4100;
    return;
L_089B4100:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    goto L_089B403C;
L_089B4110:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0431_entry, 431u, 219u, 0x089B3EE8u>(ctx, &aot_mem); return;
      }
      goto L_089B4120;
    }
L_089B4120:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B412Cu);
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 34u, 0x089903A0u>(ctx, &aot_mem) && ctx.pc == 0x089B412Cu) goto L_089B412C;
    return;
L_089B412C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0431_entry, 431u, 218u, 0x089B3EE4u>(ctx, &aot_mem); return;
      }
      goto L_089B4134;
    }
L_089B4134:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_089B403C;
L_089B4140:
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[16]);
    aot_gpr[31] = (0x089B414Cu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 34u, 0x089903A0u>(ctx, &aot_mem) && ctx.pc == 0x089B414Cu) goto L_089B414C;
    return;
L_089B414C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0431_entry, 431u, 219u, 0x089B3EE8u>(ctx, &aot_mem); return;
      }
      goto L_089B4154;
    }
L_089B4154:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0431_entry, 431u, 218u, 0x089B3EE4u>(ctx, &aot_mem); return;
      }
      goto L_089B4168;
    }
L_089B4168:
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[20] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089B403C;
      }
      goto L_089B417C;
    }
L_089B417C:
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[17] = (aot_gpr[22] + aot_gpr[5]);
    aot_gpr[16] = (0u + 0u);
    goto L_089B4188;
L_089B4188:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B4198u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 34u, 0x089903A0u>(ctx, &aot_mem) && ctx.pc == 0x089B4198u) goto L_089B4198;
    return;
L_089B4198:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0431_entry, 431u, 218u, 0x089B3EE4u>(ctx, &aot_mem); return;
      }
      goto L_089B41A0;
    }
L_089B41A0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[18]);
    aot_gpr[2] = (aot_gpr[20] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089B4188;
      }
      goto L_089B41BC;
    }
L_089B41BC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    goto L_089B4040;
L_089B41C4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0431_entry, 431u, 219u, 0x089B3EE8u>(ctx, &aot_mem); return;
      }
      goto L_089B41D4;
    }
L_089B41D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B41E0u);
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 42u, 0x0899040Cu>(ctx, &aot_mem) && ctx.pc == 0x089B41E0u) goto L_089B41E0;
    return;
L_089B41E0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0431_entry, 431u, 218u, 0x089B3EE4u>(ctx, &aot_mem); return;
      }
      goto L_089B41E8;
    }
L_089B41E8:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_089B403C;
L_089B41F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
      if (branch_taken) {
          goto L_089B4234;
      }
      goto L_089B4218;
    }
L_089B4218:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089B421C;
L_089B421C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4234:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089B421C;
      }
      goto L_089B423C;
    }
L_089B423C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B4218;
      }
      goto L_089B4244;
    }
L_089B4244:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[5] = (ctx.lo);
    aot_gpr[31] = (0x089B4254u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089B4254u) goto L_089B4254;
    return;
L_089B4254:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-22));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089B421C;
      }
      goto L_089B4264;
    }
L_089B4264:
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    goto L_089B421C;
L_089B427C:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem); return;
L_089B4284:
    if (aot_gpr[4] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_089B4294;
    }
    goto L_089B428C;
L_089B428C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4294:
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B428C;
      }
      goto L_089B42A0;
    }
L_089B42A0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    ctx.lo = aot_gpr[3];
    rt.unsupported(0x089B42B0u, 0x00A2001Cu, "special? not lowered yet"); return;
L_089B42BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B42EC;
      }
      goto L_089B42D4;
    }
L_089B42D4:
    aot_gpr[3] = (0u + 0u);
    goto L_089B42D8;
L_089B42D8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089B42DC;
L_089B42DC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B42EC:
    aot_gpr[31] = (0x089B42F4u);
    // nop
    goto L_089B4284;
L_089B42F4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B42D8;
      }
      goto L_089B42FC;
    }
L_089B42FC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] != aot_gpr[16]) {
    aot_gpr[3] = (0u + 0u);
        goto L_089B42D8;
    }
    goto L_089B4308;
L_089B4308:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089B42DC;
L_089B4310:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
      if (branch_taken) {
          goto L_089B4340;
      }
      goto L_089B4334;
    }
L_089B4334:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[20] != 0u;
    aot_gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_089B436C;
      }
      goto L_089B4340;
    }
L_089B4340:
    aot_gpr[5] = (0u + 0u);
    goto L_089B4344;
L_089B4344:
    aot_gpr[3] = (0u + 0u);
    goto L_089B4348;
L_089B4348:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B436C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_089B4370;
L_089B4370:
    aot_gpr[31] = (0x089B4378u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    goto L_089B4284;
L_089B4378:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089B439C;
    }
    goto L_089B4388;
L_089B4388:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    if (aot_gpr[17] != aot_gpr[20]) {
    aot_gpr[4] = (aot_gpr[16] + 0u);
        goto L_089B4370;
    }
    goto L_089B4394;
L_089B4394:
    aot_gpr[5] = (0u + 0u);
    goto L_089B4344;
L_089B439C:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_089B43C4;
      }
      goto L_089B43A8;
    }
L_089B43A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_089B4348;
L_089B43C4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089B43A8;
L_089B43D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089B43E8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089B4284;
L_089B43E8:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089B441C;
      }
      goto L_089B43F8;
    }
L_089B43F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem); return;
L_089B441C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B442C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_089B4458;
      }
      goto L_089B4448;
    }
L_089B4448:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          goto L_089B4470;
      }
      goto L_089B4454;
    }
L_089B4454:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    goto L_089B4458;
L_089B4458:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4470:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_089B4474;
L_089B4474:
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089B4480u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089B4284;
L_089B4480:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B4494u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4494u) goto L_089B4494;
    return;
L_089B4494:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[18] < aot_gpr[3] ? 1u : 0u);
    if (aot_gpr[3] != 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_089B4474;
    }
    goto L_089B44A8;
L_089B44A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    goto L_089B4458;
L_089B44B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_089B44E4;
      }
      goto L_089B44D4;
    }
L_089B44D4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089B4518;
      }
      goto L_089B44E4;
    }
L_089B44E4:
    aot_gpr[5] = (0u + 0u);
    goto L_089B44E8;
L_089B44E8:
    aot_gpr[2] = (0u + 0u);
    goto L_089B44EC;
L_089B44EC:
    aot_gpr[19] = (aot_gpr[2] + 0u);
    aot_gpr[3] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4518:
    aot_gpr[20] = (aot_gpr[3] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    goto L_089B4520;
L_089B4520:
    aot_gpr[31] = (0x089B4528u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089B4284;
L_089B4528:
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
        goto L_089B4540;
    }
    goto L_089B4530;
L_089B4530:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089B44EC;
      }
      goto L_089B453C;
    }
L_089B453C:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089B4540;
L_089B4540:
    if (aot_gpr[20] != aot_gpr[16]) {
    aot_gpr[5] = (aot_gpr[16] + 0u);
        goto L_089B4520;
    }
    goto L_089B4548;
L_089B4548:
    aot_gpr[5] = (0u + 0u);
    goto L_089B44E8;
L_089B4550:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[31] = (0x089B4568u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    goto L_089B44B0;
L_089B4568:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B457C:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-14876)));
    aot_gpr[7] = (aot_gpr[2] + static_cast<std::uint32_t>(-14876));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[4];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089B45A4;
      }
      goto L_089B4598;
    }
L_089B4598:
    aot_gpr[6] = (0u + 0u);
    goto L_089B459C;
L_089B459C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B45A4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[5] != aot_gpr[2]) {
    aot_gpr[6] = (0u + 0u);
        goto L_089B459C;
    }
    goto L_089B45B0;
L_089B45B0:
    // nop
    goto L_089B459C;
L_089B45B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B45D4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089B44B0;
L_089B45D4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B45E8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089B45F4;
      }
      goto L_089B45F0;
    }
L_089B45F0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_089B45F4;
L_089B45F4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B45FC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089B4608;
      }
      goto L_089B4604;
    }
L_089B4604:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_089B4608;
L_089B4608:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4610:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089B461C;
      }
      goto L_089B4618;
    }
L_089B4618:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_089B461C;
L_089B461C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4624:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_089B468C;
      }
      goto L_089B4648;
    }
L_089B4648:
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089B468C;
      }
      goto L_089B4654;
    }
L_089B4654:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-4)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    aot_gpr[16] = (aot_gpr[6] - aot_gpr[16]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    { const std::uint32_t dividend = aot_gpr[16]; const std::uint32_t divisor = aot_gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089B4674;
      }
      goto L_089B4670;
    }
L_089B4670:
    rt.unsupported(0x089B4670u, 0x000001CDu, "special? not lowered yet"); return;
L_089B4674:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[16] = (ctx.lo);
    aot_gpr[31] = (0x089B4684u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    goto L_089B42BC;
L_089B4684:
    { const bool branch_taken = aot_gpr[20] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089B4698;
      }
      goto L_089B468C;
    }
L_089B468C:
    aot_gpr[16] = (0u + 0u);
    aot_gpr[17] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089B4698;
L_089B4698:
    aot_gpr[3] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
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
L_089B46BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_089B4788;
      }
      goto L_089B46E8;
    }
L_089B46E8:
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(12));
    aot_gpr[16] = (aot_gpr[6] & 65535u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (ctx.lo);
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (0x089B4708u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089B4708u) goto L_089B4708;
    return;
L_089B4708:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089B477C;
      }
      goto L_089B4714;
    }
L_089B4714:
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(28));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) <= 0;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089B4764;
      }
      goto L_089B4734;
    }
L_089B4734:
    aot_gpr[5] = (0u + 0u);
    goto L_089B4738;
L_089B4738:
    aot_gpr[2] = (aot_gpr[18] + aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_089B4754;
      }
      goto L_089B4750;
    }
L_089B4750:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    goto L_089B4754;
L_089B4754:
    aot_gpr[4] = (aot_gpr[3] + 0u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[16];
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089B4738;
      }
      goto L_089B4760;
    }
L_089B4760:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089B4764;
L_089B4764:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089B477C;
L_089B477C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-22));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    if (aot_gpr[4] != 0u) aot_gpr[2] = (0u);
    goto L_089B4788;
L_089B4788:
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
L_089B47A4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B47C0;
      }
      goto L_089B47AC;
    }
L_089B47AC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B47C0;
      }
      goto L_089B47B8;
    }
L_089B47B8:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem); return;
L_089B47C0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B47C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089B47FC;
      }
      goto L_089B47E8;
    }
L_089B47E8:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089B4800;
      }
      goto L_089B47F0;
    }
L_089B47F0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089B4810;
      }
      goto L_089B47FC;
    }
L_089B47FC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_089B4800;
L_089B4800:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4810:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_089B4850;
    }
    goto L_089B4818;
L_089B4818:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_089B4850;
    }
    goto L_089B4824;
L_089B4824:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B483C;
      }
      goto L_089B4830;
    }
L_089B4830:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_089B483C;
L_089B483C:
    if (aot_gpr[16] == aot_gpr[2]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[3]);
        goto L_089B484C;
    }
    goto L_089B4844;
L_089B4844:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    goto L_089B484C;
L_089B484C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089B4850;
L_089B4850:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089B486Cu);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089B486Cu) goto L_089B486C;
    return;
L_089B486C:
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_089B47FC;
      }
      goto L_089B4878;
    }
L_089B4878:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[3]);
      if (branch_taken) {
          goto L_089B489C;
      }
      goto L_089B4890;
    }
L_089B4890:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_089B489C;
L_089B489C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B48B4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_089B48D8;
      }
      goto L_089B48BC;
    }
L_089B48BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089B48D8;
      }
      goto L_089B48C8;
    }
L_089B48C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = aot_gpr[31];
    aot_gpr[3] = (aot_gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B48D8:
    aot_gpr[4] = (0u + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    aot_gpr[3] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B48F0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089B4908;
      }
      goto L_089B48FC;
    }
L_089B48FC:
    aot_gpr[3] = (0u + 0u);
    goto L_089B4900;
L_089B4900:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4908:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089B48FC;
      }
      goto L_089B4910;
    }
L_089B4910:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[2] != aot_gpr[6]) {
    aot_gpr[3] = (0u + 0u);
        goto L_089B4900;
    }
    goto L_089B491C;
L_089B491C:
    // nop
    goto L_089B4900;
L_089B4924:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_089B4958;
      }
      goto L_089B492C;
    }
L_089B492C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-12));
      if (branch_taken) {
          goto L_089B4958;
      }
      goto L_089B4934;
    }
L_089B4934:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (0u + 0u);
        goto L_089B495C;
    }
    goto L_089B493C;
L_089B493C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (0u + 0u);
        goto L_089B495C;
    }
    goto L_089B4948;
L_089B4948:
    aot_gpr[2] = (aot_gpr[4] + 0u);
    aot_gpr[3] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4958:
    aot_gpr[4] = (0u + 0u);
    goto L_089B495C;
L_089B495C:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    aot_gpr[3] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4970:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (2215u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089B49A4;
      }
      goto L_089B4980;
    }
L_089B4980:
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(-14816));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-14816)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089B49A4;
      }
      goto L_089B4990;
    }
L_089B4990:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[2] == aot_gpr[5]) {
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
        goto L_089B49A8;
    }
    goto L_089B499C;
L_089B499C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B49A4:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    goto L_089B49A8;
L_089B49A8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B49B0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089B49D4;
      }
      goto L_089B49C0;
    }
L_089B49C0:
    if (aot_gpr[3] == 0u) {
    aot_gpr[5] = (0u + 0u);
        goto L_089B49D8;
    }
    goto L_089B49C8;
L_089B49C8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[5];
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089B49EC;
      }
      goto L_089B49D4;
    }
L_089B49D4:
    aot_gpr[5] = (0u + 0u);
    goto L_089B49D8;
L_089B49D8:
    aot_gpr[4] = (0u + 0u);
    goto L_089B49DC;
L_089B49DC:
    aot_gpr[2] = (aot_gpr[5] + 0u);
    aot_gpr[3] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B49EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089B49DC;
      }
      goto L_089B49F8;
    }
L_089B49F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = aot_gpr[31];
    aot_gpr[3] = (aot_gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4A08:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089B4A14;
      }
      goto L_089B4A10;
    }
L_089B4A10:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_089B4A14;
L_089B4A14:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4A1C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089B4A28;
      }
      goto L_089B4A24;
    }
L_089B4A24:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_089B4A28;
L_089B4A28:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4A30:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4A38:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4ACC;
      }
      goto L_089B4A40;
    }
L_089B4A40:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089B4AC8;
      }
      goto L_089B4A4C;
    }
L_089B4A4C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
      if (branch_taken) {
          goto L_089B4A60;
      }
      goto L_089B4A58;
    }
L_089B4A58:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089B4A60;
L_089B4A60:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    goto L_089B4A6C;
L_089B4A6C:
    if (aot_gpr[7] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_089B4AA0;
    }
    goto L_089B4A74;
L_089B4A74:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089B4A98;
      }
      goto L_089B4A8C;
    }
L_089B4A8C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    goto L_089B4A98;
L_089B4A98:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_089B4AA0;
L_089B4AA0:
    if (aot_gpr[3] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
        goto L_089B4ACC;
    }
    goto L_089B4AA8;
L_089B4AA8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_089B4ABC;
      }
      goto L_089B4AB4;
    }
L_089B4AB4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089B4ABC;
L_089B4ABC:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    goto L_089B4A6C;
L_089B4AC8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    goto L_089B4ACC;
L_089B4ACC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4AD4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[3] = (0u + 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089B4B58;
      }
      goto L_089B4AE8;
    }
L_089B4AE8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
      if (branch_taken) {
          goto L_089B4AFC;
      }
      goto L_089B4AF4;
    }
L_089B4AF4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089B4AFC;
L_089B4AFC:
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_089B4B30;
      }
      goto L_089B4B0C;
    }
L_089B4B0C:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089B4B2C;
      }
      goto L_089B4B20;
    }
L_089B4B20:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_089B4B2C;
L_089B4B2C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    goto L_089B4B30;
L_089B4B30:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
      if (branch_taken) {
          goto L_089B4B6C;
      }
      goto L_089B4B4C;
    }
L_089B4B4C:
    aot_gpr[2] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[6] + 0u);
    goto L_089B4B58;
L_089B4B58:
    aot_gpr[9] = (aot_gpr[2] + 0u);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[3] = (aot_gpr[9] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4B6C:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    goto L_089B4B4C;
L_089B4B78:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4B88;
      }
      goto L_089B4B80;
    }
L_089B4B80:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4B88:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4B80;
      }
      goto L_089B4B90;
    }
L_089B4B90:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089B4B80;
      }
      goto L_089B4B98;
    }
L_089B4B98:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4BB0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089B4BD0;
      }
      goto L_089B4BB8;
    }
L_089B4BB8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_089B4BD0;
L_089B4BD0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4BD8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 65535u);
      if (branch_taken) {
          goto L_089B4C4C;
      }
      goto L_089B4BE0;
    }
L_089B4BE0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089B4C04;
      }
      goto L_089B4BF0;
    }
L_089B4BF0:
    aot_gpr[5] = (0u | 65535u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[2]));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4C04:
    aot_gpr[6] = (aot_gpr[7] >> (aot_gpr[3] & 31u));
    aot_gpr[2] = (aot_gpr[6] & 1u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_089B4C54;
      }
      goto L_089B4C14;
    }
L_089B4C14:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 65535u);
      if (branch_taken) {
          goto L_089B4C4C;
      }
      goto L_089B4C1C;
    }
L_089B4C1C:
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    goto L_089B4C20;
L_089B4C20:
    aot_gpr[3] = (aot_gpr[2] & 65535u);
    aot_gpr[8] = (aot_gpr[7] >> (aot_gpr[3] & 31u));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[5] = (aot_gpr[3] + 0u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[6] = (aot_gpr[8] & 1u);
      if (branch_taken) {
          goto L_089B4BF0;
      }
      goto L_089B4C38;
    }
L_089B4C38:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[2] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089B4C58;
      }
      goto L_089B4C40;
    }
L_089B4C40:
    if (aot_gpr[8] != 0u) {
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
        goto L_089B4C20;
    }
    goto L_089B4C48;
L_089B4C48:
    aot_gpr[5] = (0u | 65535u);
    goto L_089B4C4C;
L_089B4C4C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4C54:
    aot_gpr[2] = (aot_gpr[5] + 0u);
    goto L_089B4C58;
L_089B4C58:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4C60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u | 65535u);
      if (branch_taken) {
          goto L_089B4C78;
      }
      goto L_089B4C70;
    }
L_089B4C70:
    aot_gpr[31] = (0x089B4C78u);
    // nop
    goto L_089B4BD8;
L_089B4C78:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4C84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
      if (branch_taken) {
          goto L_089B4CD4;
      }
      goto L_089B4C98;
    }
L_089B4C98:
    aot_gpr[31] = (0x089B4CA0u);
    // nop
    goto L_089B4BD8;
L_089B4CA0:
    aot_gpr[3] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[4] = (aot_gpr[2] << 2u);
      if (branch_taken) {
          goto L_089B4CD4;
      }
      goto L_089B4CAC;
    }
L_089B4CAC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089B4CD4;
      }
      goto L_089B4CC4;
    }
L_089B4CC4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4CD4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4CE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[21] + static_cast<std::uint32_t>(-14744));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[30] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B4D38u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4D38u) goto L_089B4D38;
    return;
L_089B4D38:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4), aot_gpr[29]);
      if (branch_taken) {
          goto L_089B4DF8;
      }
      goto L_089B4D50;
    }
L_089B4D50:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          goto L_089B4E28;
      }
      goto L_089B4D68;
    }
L_089B4D68:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[17] != 0u;
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089B4D78;
      }
      goto L_089B4D74;
    }
L_089B4D74:
    rt.unsupported(0x089B4D74u, 0x000001CDu, "special? not lowered yet"); return;
L_089B4D78:
    aot_gpr[19] = (ctx.lo);
    goto L_089B4D7C;
L_089B4D7C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    goto L_089B4D80;
L_089B4D80:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B4D8Cu);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4D8Cu) goto L_089B4D8C;
    return;
L_089B4D8C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[19]);
      if (branch_taken) {
          goto L_089B4DF8;
      }
      goto L_089B4D98;
    }
L_089B4D98:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B4DACu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4DACu) goto L_089B4DAC;
    return;
L_089B4DAC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[21] + static_cast<std::uint32_t>(-14744));
      if (branch_taken) {
          goto L_089B4DEC;
      }
      goto L_089B4DB4;
    }
L_089B4DB4:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[18];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B4D7C;
      }
      goto L_089B4DBC;
    }
L_089B4DBC:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4DEC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B4DF8u);
    aot_gpr[4] = (aot_gpr[30] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4DF8u) goto L_089B4DF8;
    return;
L_089B4DF8:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4E28:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) <= 0;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089B4DBC;
      }
      goto L_089B4E30;
    }
L_089B4E30:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    goto L_089B4D80;
L_089B4E38:
    aot_gpr[2] = (21845u << 16u);
    aot_gpr[3] = (13107u << 16u);
    aot_gpr[5] = (aot_gpr[2] | 21845u);
    aot_gpr[6] = (aot_gpr[3] | 13107u);
    aot_gpr[2] = (3855u << 16u);
    aot_gpr[3] = (255u << 16u);
    aot_gpr[7] = (aot_gpr[2] | 3855u);
    aot_gpr[8] = (aot_gpr[3] | 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089B4EB0;
      }
      goto L_089B4E60;
    }
L_089B4E60:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (aot_gpr[2] >> 1u);
    aot_gpr[3] = (aot_gpr[3] & aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[2] >> 2u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[2] >> 4u);
    aot_gpr[3] = (aot_gpr[3] & aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[2] >> 8u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[2] >> 16u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    goto L_089B4EB0;
L_089B4EB0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4EB8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(20));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4EC0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4ED4;
      }
      goto L_089B4EC8;
    }
L_089B4EC8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_089B4ED4;
L_089B4ED4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4EDC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
      if (branch_taken) {
          goto L_089B4F48;
      }
      goto L_089B4F00;
    }
L_089B4F00:
    aot_gpr[31] = (0x089B4F08u);
    // nop
    goto L_089B4BD8;
L_089B4F08:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_089B4F28;
      }
      goto L_089B4F18;
    }
L_089B4F18:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_089B4F6C;
      }
      goto L_089B4F24;
    }
L_089B4F24:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_089B4F28;
L_089B4F28:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4F48:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4F6C:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-14708)));
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[20] = (0u | 65535u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089B4F7C;
L_089B4F7C:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x089B4F88u);
    aot_gpr[6] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4F88u) goto L_089B4F88;
    return;
L_089B4F88:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[31] = (0x089B4FA4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    goto L_089B4CE8;
L_089B4FA4:
    aot_gpr[3] = (aot_gpr[19] << (aot_gpr[17] & 31u));
    aot_gpr[3] = (~(0u | aot_gpr[3]));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089B4F48;
      }
      goto L_089B4FB4;
    }
L_089B4FB4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[3]);
    aot_gpr[31] = (0x089B4FC4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_089B4BD8;
L_089B4FC4:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[20];
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089B4F24;
      }
      goto L_089B4FCC;
    }
L_089B4FCC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_089B4F7C;
    }
    goto L_089B4FD8;
L_089B4FD8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_089B4F28;
L_089B4FE0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-20));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4FE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    ctx.pc = 0x089B5000u; return;
}

void recomp_unit_0432(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0432_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_432(Runtime &runtime) {
    runtime.register_generated_unit(432u, 0x089B4000u, 4096u, &recomp_unit_0432, &recomp_unit_0432_entry);
    runtime.register_function(0x089B4000u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B400Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4014u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4028u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B403Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4040u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B404Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4058u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4064u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4084u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4090u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B40A0u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B40A8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B40C4u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B40CCu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B40D8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B40E0u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B40F4u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4100u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4110u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4120u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B412Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4134u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4140u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B414Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4154u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4168u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B417Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4188u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4198u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B41A0u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B41BCu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B41C4u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B41D4u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B41E0u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B41E8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B41F4u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4218u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B421Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4234u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B423Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4244u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4254u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4264u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B427Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4284u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B428Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4294u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B42A0u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B42BCu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B42D4u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B42D8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B42DCu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B42ECu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B42F4u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B42FCu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4308u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4310u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4334u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4340u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4344u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4348u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B436Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4370u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4378u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4388u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4394u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B439Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B43A8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B43C4u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B43D0u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B43E8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B43F8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B441Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B442Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4448u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4454u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4458u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4470u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4474u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4480u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4494u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B44A8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B44B0u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B44D4u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B44E4u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B44E8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B44ECu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4518u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4520u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4528u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4530u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B453Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4540u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4548u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4550u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4568u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B457Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4598u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B459Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B45A4u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B45B0u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B45B8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B45D4u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B45E8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B45F0u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B45F4u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B45FCu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4604u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4608u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4610u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4618u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B461Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4624u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4648u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4654u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4670u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4674u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4684u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B468Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4698u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B46BCu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B46E8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4708u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4714u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4734u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4738u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4750u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4754u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4760u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4764u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B477Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4788u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B47A4u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B47ACu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B47B8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B47C0u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B47C8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B47E8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B47F0u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B47FCu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4800u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4810u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4818u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4824u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4830u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B483Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4844u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B484Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4850u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B486Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4878u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4890u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B489Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B48B4u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B48BCu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B48C8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B48D8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B48F0u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B48FCu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4900u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4908u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4910u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B491Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4924u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B492Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4934u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B493Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4948u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4958u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B495Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4970u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4980u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4990u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B499Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B49A4u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B49A8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B49B0u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B49C0u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B49C8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B49D4u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B49D8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B49DCu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B49ECu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B49F8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4A08u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4A10u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4A14u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4A1Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4A24u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4A28u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4A30u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4A38u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4A40u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4A4Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4A58u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4A60u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4A6Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4A74u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4A8Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4A98u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4AA0u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4AA8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4AB4u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4ABCu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4AC8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4ACCu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4AD4u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4AE8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4AF4u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4AFCu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4B0Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4B20u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4B2Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4B30u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4B4Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4B58u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4B6Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4B78u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4B80u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4B88u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4B90u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4B98u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4BB0u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4BB8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4BD0u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4BD8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4BE0u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4BF0u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4C04u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4C14u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4C1Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4C20u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4C38u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4C40u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4C48u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4C4Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4C54u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4C58u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4C60u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4C70u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4C78u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4C84u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4C98u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4CA0u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4CACu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4CC4u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4CD4u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4CE8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4D38u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4D50u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4D68u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4D74u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4D78u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4D7Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4D80u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4D8Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4D98u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4DACu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4DB4u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4DBCu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4DECu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4DF8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4E28u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4E30u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4E38u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4E60u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4EB0u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4EB8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4EC0u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4EC8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4ED4u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4EDCu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4F00u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4F08u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4F18u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4F24u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4F28u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4F48u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4F6Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4F7Cu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4F88u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4FA4u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4FB4u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4FC4u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4FCCu, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4FD8u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4FE0u, &recomp_unit_0432, "recomp_unit_0432");
    runtime.register_function(0x089B4FE8u, &recomp_unit_0432, "recomp_unit_0432");
}
} // namespace psprecomp
