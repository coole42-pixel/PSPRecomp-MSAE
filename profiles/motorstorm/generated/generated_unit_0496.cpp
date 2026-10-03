#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0496[1024] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0,
    4, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 8, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22,
    0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 26, 0, 0, 27, 0, 28, 0, 0, 0, 29, 0, 30, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 35, 0, 0, 36, 0, 37, 0, 38, 0, 39, 0, 0, 0, 40, 0, 41, 0, 42, 0, 43, 0,
    0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 55, 0, 56,
    0, 0, 57, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 0, 0, 65, 0, 66, 0, 67, 68, 69, 0, 70,
    0, 0, 71, 72, 0, 0, 73, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 78, 0, 79, 0, 0, 80, 81,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 84, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 0, 94, 0,
    95, 0, 96, 0, 0, 97, 0, 98, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 102, 0, 0, 103, 0, 104, 0, 105, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 109, 0, 110, 0,
    0, 111, 112, 0, 0, 113, 0, 114, 0, 115, 0, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 0, 121, 0, 122, 0, 123, 0, 124, 0, 125,
    0, 0, 126, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 131, 0, 132, 0, 133, 0, 0, 134, 0, 0, 135,
    0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 146, 0, 0, 147, 0, 0, 148, 0, 149, 0,
    150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 154, 0, 155, 0, 0, 156, 0, 0,
    0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163,
    0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174,
    175, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 179, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0,
    184, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 192, 0, 0,
    0, 193, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0,
    0, 0, 0, 201, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206,
    207, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 211, 0, 0, 0, 0, 212, 0, 213, 0, 214, 0, 0, 0, 215, 0, 216, 0, 217,
    0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 220, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 224,
    0, 0, 0, 0, 0, 0, 225, 226, 0, 0, 227, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0,
    0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 244, 0, 0, 0, 0, 245, 0, 246, 0, 0, 247, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 252, 0, 0, 0, 0, 253, 0, 254, 0, 0, 255, 0, 0, 0, 0, 256,
};
void recomp_unit_0496_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089F4000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0496[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089F4000;
    case 2u: goto L_089F4044;
    case 3u: goto L_089F4070;
    case 4u: goto L_089F4080;
    case 5u: goto L_089F408C;
    case 6u: goto L_089F4098;
    case 7u: goto L_089F40A4;
    case 8u: goto L_089F40AC;
    case 9u: goto L_089F40B8;
    case 10u: goto L_089F40CC;
    case 11u: goto L_089F40E4;
    case 12u: goto L_089F40EC;
    case 13u: goto L_089F4100;
    case 14u: goto L_089F4114;
    case 15u: goto L_089F412C;
    case 16u: goto L_089F4138;
    case 17u: goto L_089F4144;
    case 18u: goto L_089F414C;
    case 19u: goto L_089F415C;
    case 20u: goto L_089F4190;
    case 21u: goto L_089F41E8;
    case 22u: goto L_089F41FC;
    case 23u: goto L_089F4210;
    case 24u: goto L_089F4218;
    case 25u: goto L_089F4220;
    case 26u: goto L_089F4228;
    case 27u: goto L_089F4234;
    case 28u: goto L_089F423C;
    case 29u: goto L_089F424C;
    case 30u: goto L_089F4254;
    case 31u: goto L_089F425C;
    case 32u: goto L_089F4268;
    case 33u: goto L_089F429C;
    case 34u: goto L_089F42A4;
    case 35u: goto L_089F42AC;
    case 36u: goto L_089F42B8;
    case 37u: goto L_089F42C0;
    case 38u: goto L_089F42C8;
    case 39u: goto L_089F42D0;
    case 40u: goto L_089F42E0;
    case 41u: goto L_089F42E8;
    case 42u: goto L_089F42F0;
    case 43u: goto L_089F42F8;
    case 44u: goto L_089F4310;
    case 45u: goto L_089F431C;
    case 46u: goto L_089F4328;
    case 47u: goto L_089F4344;
    case 48u: goto L_089F4350;
    case 49u: goto L_089F4358;
    case 50u: goto L_089F438C;
    case 51u: goto L_089F43AC;
    case 52u: goto L_089F43C0;
    case 53u: goto L_089F43D4;
    case 54u: goto L_089F43E8;
    case 55u: goto L_089F43F4;
    case 56u: goto L_089F43FC;
    case 57u: goto L_089F4408;
    case 58u: goto L_089F4414;
    case 59u: goto L_089F441C;
    case 60u: goto L_089F442C;
    case 61u: goto L_089F4434;
    case 62u: goto L_089F443C;
    case 63u: goto L_089F4444;
    case 64u: goto L_089F444C;
    case 65u: goto L_089F445C;
    case 66u: goto L_089F4464;
    case 67u: goto L_089F446C;
    case 68u: goto L_089F4470;
    case 69u: goto L_089F4474;
    case 70u: goto L_089F447C;
    case 71u: goto L_089F4488;
    case 72u: goto L_089F448C;
    case 73u: goto L_089F4498;
    case 74u: goto L_089F44A8;
    case 75u: goto L_089F44B4;
    case 76u: goto L_089F44D0;
    case 77u: goto L_089F44DC;
    case 78u: goto L_089F44E4;
    case 79u: goto L_089F44EC;
    case 80u: goto L_089F44F8;
    case 81u: goto L_089F44FC;
    case 82u: goto L_089F4530;
    case 83u: goto L_089F4590;
    case 84u: goto L_089F4598;
    case 85u: goto L_089F45A0;
    case 86u: goto L_089F45AC;
    case 87u: goto L_089F45B8;
    case 88u: goto L_089F45C4;
    case 89u: goto L_089F45CC;
    case 90u: goto L_089F45D4;
    case 91u: goto L_089F45DC;
    case 92u: goto L_089F45E4;
    case 93u: goto L_089F45EC;
    case 94u: goto L_089F45F8;
    case 95u: goto L_089F4600;
    case 96u: goto L_089F4608;
    case 97u: goto L_089F4614;
    case 98u: goto L_089F461C;
    case 99u: goto L_089F4624;
    case 100u: goto L_089F462C;
    case 101u: goto L_089F4654;
    case 102u: goto L_089F4658;
    case 103u: goto L_089F4664;
    case 104u: goto L_089F466C;
    case 105u: goto L_089F4674;
    case 106u: goto L_089F469C;
    case 107u: goto L_089F46D0;
    case 108u: goto L_089F46E8;
    case 109u: goto L_089F46F0;
    case 110u: goto L_089F46F8;
    case 111u: goto L_089F4704;
    case 112u: goto L_089F4708;
    case 113u: goto L_089F4714;
    case 114u: goto L_089F471C;
    case 115u: goto L_089F4724;
    case 116u: goto L_089F4730;
    case 117u: goto L_089F4738;
    case 118u: goto L_089F4740;
    case 119u: goto L_089F4748;
    case 120u: goto L_089F4750;
    case 121u: goto L_089F475C;
    case 122u: goto L_089F4764;
    case 123u: goto L_089F476C;
    case 124u: goto L_089F4774;
    case 125u: goto L_089F477C;
    case 126u: goto L_089F4788;
    case 127u: goto L_089F478C;
    case 128u: goto L_089F479C;
    case 129u: goto L_089F47C0;
    case 130u: goto L_089F47C8;
    case 131u: goto L_089F47D4;
    case 132u: goto L_089F47DC;
    case 133u: goto L_089F47E4;
    case 134u: goto L_089F47F0;
    case 135u: goto L_089F47FC;
    case 136u: goto L_089F4804;
    case 137u: goto L_089F4820;
    case 138u: goto L_089F4840;
    case 139u: goto L_089F4850;
    case 140u: goto L_089F485C;
    case 141u: goto L_089F4870;
    case 142u: goto L_089F4898;
    case 143u: goto L_089F48A8;
    case 144u: goto L_089F48B0;
    case 145u: goto L_089F48D4;
    case 146u: goto L_089F48D8;
    case 147u: goto L_089F48E4;
    case 148u: goto L_089F48F0;
    case 149u: goto L_089F48F8;
    case 150u: goto L_089F4900;
    case 151u: goto L_089F4910;
    case 152u: goto L_089F4934;
    case 153u: goto L_089F495C;
    case 154u: goto L_089F4960;
    case 155u: goto L_089F4968;
    case 156u: goto L_089F4974;
    case 157u: goto L_089F498C;
    case 158u: goto L_089F49A4;
    case 159u: goto L_089F49B4;
    case 160u: goto L_089F49C0;
    case 161u: goto L_089F49C8;
    case 162u: goto L_089F49E8;
    case 163u: goto L_089F49FC;
    case 164u: goto L_089F4A0C;
    case 165u: goto L_089F4A18;
    case 166u: goto L_089F4A28;
    case 167u: goto L_089F4A34;
    case 168u: goto L_089F4A80;
    case 169u: goto L_089F4AA0;
    case 170u: goto L_089F4AB0;
    case 171u: goto L_089F4AC0;
    case 172u: goto L_089F4AD4;
    case 173u: goto L_089F4AEC;
    case 174u: goto L_089F4AFC;
    case 175u: goto L_089F4B00;
    case 176u: goto L_089F4B0C;
    case 177u: goto L_089F4B24;
    case 178u: goto L_089F4B34;
    case 179u: goto L_089F4B3C;
    case 180u: goto L_089F4B44;
    case 181u: goto L_089F4B54;
    case 182u: goto L_089F4B68;
    case 183u: goto L_089F4B70;
    case 184u: goto L_089F4B80;
    case 185u: goto L_089F4B94;
    case 186u: goto L_089F4B9C;
    case 187u: goto L_089F4BAC;
    case 188u: goto L_089F4BC0;
    case 189u: goto L_089F4BC8;
    case 190u: goto L_089F4BD8;
    case 191u: goto L_089F4BEC;
    case 192u: goto L_089F4BF4;
    case 193u: goto L_089F4C04;
    case 194u: goto L_089F4C18;
    case 195u: goto L_089F4C20;
    case 196u: goto L_089F4C34;
    case 197u: goto L_089F4C3C;
    case 198u: goto L_089F4C4C;
    case 199u: goto L_089F4C60;
    case 200u: goto L_089F4C78;
    case 201u: goto L_089F4C8C;
    case 202u: goto L_089F4C90;
    case 203u: goto L_089F4C98;
    case 204u: goto L_089F4CC8;
    case 205u: goto L_089F4CE8;
    case 206u: goto L_089F4CFC;
    case 207u: goto L_089F4D00;
    case 208u: goto L_089F4D08;
    case 209u: goto L_089F4D24;
    case 210u: goto L_089F4D2C;
    case 211u: goto L_089F4D38;
    case 212u: goto L_089F4D4C;
    case 213u: goto L_089F4D54;
    case 214u: goto L_089F4D5C;
    case 215u: goto L_089F4D6C;
    case 216u: goto L_089F4D74;
    case 217u: goto L_089F4D7C;
    case 218u: goto L_089F4D94;
    case 219u: goto L_089F4DB0;
    case 220u: goto L_089F4DB4;
    case 221u: goto L_089F4DBC;
    case 222u: goto L_089F4DD8;
    case 223u: goto L_089F4DE0;
    case 224u: goto L_089F4DFC;
    case 225u: goto L_089F4E18;
    case 226u: goto L_089F4E1C;
    case 227u: goto L_089F4E28;
    case 228u: goto L_089F4E30;
    case 229u: goto L_089F4E3C;
    case 230u: goto L_089F4E54;
    case 231u: goto L_089F4E6C;
    case 232u: goto L_089F4E88;
    case 233u: goto L_089F4E90;
    case 234u: goto L_089F4EAC;
    case 235u: goto L_089F4EB4;
    case 236u: goto L_089F4EBC;
    case 237u: goto L_089F4EC4;
    case 238u: goto L_089F4EDC;
    case 239u: goto L_089F4EF0;
    case 240u: goto L_089F4F0C;
    case 241u: goto L_089F4F14;
    case 242u: goto L_089F4F28;
    case 243u: goto L_089F4F40;
    case 244u: goto L_089F4F44;
    case 245u: goto L_089F4F58;
    case 246u: goto L_089F4F60;
    case 247u: goto L_089F4F6C;
    case 248u: goto L_089F4F80;
    case 249u: goto L_089F4F94;
    case 250u: goto L_089F4FA4;
    case 251u: goto L_089F4FBC;
    case 252u: goto L_089F4FC0;
    case 253u: goto L_089F4FD4;
    case 254u: goto L_089F4FDC;
    case 255u: goto L_089F4FE8;
    case 256u: goto L_089F4FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089F4000:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[31] = (0x089F4044u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089F4044u) goto L_089F4044;
    return;
L_089F4044:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[22] = (2215u << 16u);
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[30] = (2215u << 16u);
    aot_gpr[17] = (aot_gpr[23] | 0u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-10160));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-10148));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-10144));
    goto L_089F4070;
L_089F4070:
    aot_gpr[16] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
        goto L_089F4138;
    }
    goto L_089F4080;
L_089F4080:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
        goto L_089F4138;
    }
    goto L_089F408C;
L_089F408C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F40A4;
      }
      goto L_089F4098;
    }
L_089F4098:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
        goto L_089F4138;
    }
    goto L_089F40A4;
L_089F40A4:
    if (aot_gpr[17] != aot_gpr[23]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[30]);
        goto L_089F40E4;
    }
    goto L_089F40AC;
L_089F40AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[30]);
    aot_gpr[31] = (0x089F40B8u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F40B8u) goto L_089F40B8;
    return;
L_089F40B8:
    aot_gpr[30] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x089F40CCu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x089F40CCu) goto L_089F40CC;
    return;
L_089F40CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[30]);
    aot_gpr[18] = (aot_gpr[18] - aot_gpr[30]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089F4114;
      }
      goto L_089F40E4;
    }
L_089F40E4:
    aot_gpr[31] = (0x089F40ECu);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F40ECu) goto L_089F40EC;
    return;
L_089F40EC:
    aot_gpr[30] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x089F4100u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x089F4100u) goto L_089F4100;
    return;
L_089F4100:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[30]);
    aot_gpr[18] = (aot_gpr[18] - aot_gpr[30]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089F4114;
L_089F4114:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x089F412Cu);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x089F412Cu) goto L_089F412C;
    return;
L_089F412C:
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[18] = (aot_gpr[18] - aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089F4138;
L_089F4138:
    aot_gpr[4] = (aot_gpr[20] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089F4070;
      }
      goto L_089F4144;
    }
L_089F4144:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[23];
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_089F415C;
      }
      goto L_089F414C;
    }
L_089F414C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F415Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10136));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x089F415Cu) goto L_089F415C;
    return;
L_089F415C:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F4190:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[5] | 0u);
    aot_gpr[23] = (aot_gpr[4] | 0u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-10188));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    aot_gpr[21] = (aot_gpr[6] | 0u);
    aot_gpr[22] = (aot_gpr[7] | 0u);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 417u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[31] = (0x089F41E8u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x089F41E8u) goto L_089F41E8;
    return;
L_089F41E8:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089F41FCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10136));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x089F41FCu) goto L_089F41FC;
    return;
L_089F41FC:
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-10132));
    if (aot_gpr[4] != 0u) {
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_089F4210;
    }
    goto L_089F4210;
L_089F4210:
    aot_gpr[31] = (0x089F4218u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 138u, 0x089EF918u>(ctx, &aot_mem) && ctx.pc == 0x089F4218u) goto L_089F4218;
    return;
L_089F4218:
    aot_gpr[31] = (0x089F4220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F4220u) goto L_089F4220;
    return;
L_089F4220:
    aot_gpr[31] = (0x089F4228u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F4228u) goto L_089F4228;
    return;
L_089F4228:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089F4234u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089F4234u) goto L_089F4234;
    return;
L_089F4234:
    aot_gpr[31] = (0x089F423Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F423Cu) goto L_089F423C;
    return;
L_089F423C:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F424Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089F424Cu) goto L_089F424C;
    return;
L_089F424C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F4268;
      }
      goto L_089F4254;
    }
L_089F4254:
    aot_gpr[31] = (0x089F425Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F425Cu) goto L_089F425C;
    return;
L_089F425C:
    aot_gpr[17] = (aot_gpr[30] + aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_089F429C;
      }
      goto L_089F4268;
    }
L_089F4268:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F429C:
    aot_gpr[31] = (0x089F42A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 97u, 0x089F057Cu>(ctx, &aot_mem) && ctx.pc == 0x089F42A4u) goto L_089F42A4;
    return;
L_089F42A4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089F42B8;
      }
      goto L_089F42AC;
    }
L_089F42AC:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_089F429C;
      }
      goto L_089F42B8;
    }
L_089F42B8:
    aot_gpr[5] = (0u | 61u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    goto L_089F42C0;
L_089F42C0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F42E0;
      }
      goto L_089F42C8;
    }
L_089F42C8:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089F42E0;
      }
      goto L_089F42D0;
    }
L_089F42D0:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_089F42C0;
      }
      goto L_089F42E0;
    }
L_089F42E0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F4358;
      }
      goto L_089F42E8;
    }
L_089F42E8:
    aot_gpr[31] = (0x089F42F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F42F0u) goto L_089F42F0;
    return;
L_089F42F0:
    aot_gpr[31] = (0x089F42F8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F42F8u) goto L_089F42F8;
    return;
L_089F42F8:
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 451u);
    aot_gpr[31] = (0x089F4310u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x089F4310u) goto L_089F4310;
    return;
L_089F4310:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_089F4358;
      }
      goto L_089F431C;
    }
L_089F431C:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F4328u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F4328u) goto L_089F4328;
    return;
L_089F4328:
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[19]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F4344u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 196u, 0x089F3D04u>(ctx, &aot_mem) && ctx.pc == 0x089F4344u) goto L_089F4344;
    return;
L_089F4344:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
        goto L_089F438C;
    }
    goto L_089F4350;
L_089F4350:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F44FC;
      }
      goto L_089F4358;
    }
L_089F4358:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F438C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x089F43ACu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10120));
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 196u, 0x089F3D04u>(ctx, &aot_mem) && ctx.pc == 0x089F43ACu) goto L_089F43AC;
    return;
L_089F43AC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x089F43C0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10112));
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 196u, 0x089F3D04u>(ctx, &aot_mem) && ctx.pc == 0x089F43C0u) goto L_089F43C0;
    return;
L_089F43C0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x089F43D4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10104));
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 196u, 0x089F3D04u>(ctx, &aot_mem) && ctx.pc == 0x089F43D4u) goto L_089F43D4;
    return;
L_089F43D4:
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-10096));
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x089F43E8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x089F43E8u) goto L_089F43E8;
    return;
L_089F43E8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
        goto L_089F4474;
    }
    goto L_089F43F4;
L_089F43F4:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[30];
    aot_gpr[30] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_089F4470;
      }
      goto L_089F43FC;
    }
L_089F43FC:
    aot_gpr[16] = (aot_gpr[30] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x089F4408u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F4408u) goto L_089F4408;
    return;
L_089F4408:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x089F4414u);
    aot_gpr[17] = (aot_gpr[30] + aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 97u, 0x089F057Cu>(ctx, &aot_mem) && ctx.pc == 0x089F4414u) goto L_089F4414;
    return;
L_089F4414:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F443C;
      }
      goto L_089F441C;
    }
L_089F441C:
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (0u | 59u);
    { const bool branch_taken = aot_gpr[16] == aot_gpr[4];
    aot_gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_089F443C;
      }
      goto L_089F442C;
    }
L_089F442C:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[4];
    aot_gpr[4] = (0u | 13u);
      if (branch_taken) {
          goto L_089F443C;
      }
      goto L_089F4434;
    }
L_089F4434:
    if (aot_gpr[16] != aot_gpr[4]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
        goto L_089F4474;
    }
    goto L_089F443C;
L_089F443C:
    aot_gpr[31] = (0x089F4444u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 97u, 0x089F057Cu>(ctx, &aot_mem) && ctx.pc == 0x089F4444u) goto L_089F4444;
    return;
L_089F4444:
    if (aot_gpr[2] != 0u) {
    aot_gpr[19] = (0u | 1u);
        goto L_089F4470;
    }
    goto L_089F444C;
L_089F444C:
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (0u | 59u);
    { const bool branch_taken = aot_gpr[17] == aot_gpr[4];
    aot_gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_089F446C;
      }
      goto L_089F445C;
    }
L_089F445C:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[4];
    aot_gpr[4] = (0u | 13u);
      if (branch_taken) {
          goto L_089F446C;
      }
      goto L_089F4464;
    }
L_089F4464:
    if (aot_gpr[17] != aot_gpr[4]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
        goto L_089F4474;
    }
    goto L_089F446C;
L_089F446C:
    aot_gpr[19] = (0u | 1u);
    goto L_089F4470;
L_089F4470:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_089F4474;
L_089F4474:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_089F448C;
      }
      goto L_089F447C;
    }
L_089F447C:
    aot_gpr[5] = (0u | 494u);
    aot_gpr[31] = (0x089F4488u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x089F4488u) goto L_089F4488;
    return;
L_089F4488:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_089F448C;
L_089F448C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[8] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F44B4;
      }
      goto L_089F4498;
    }
L_089F4498:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 499u);
    aot_gpr[31] = (0x089F44A8u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x089F44A8u) goto L_089F44A8;
    return;
L_089F44A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[8] = (aot_gpr[4] | 0u);
    goto L_089F44B4;
L_089F44B4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F44D0u);
    aot_gpr[10] = (aot_gpr[19] | 0u);
    goto L_089F4530;
L_089F44D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089F44FC;
      }
      goto L_089F44DC;
    }
L_089F44DC:
    aot_gpr[31] = (0x089F44E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F44E4u) goto L_089F44E4;
    return;
L_089F44E4:
    aot_gpr[31] = (0x089F44ECu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F44ECu) goto L_089F44EC;
    return;
L_089F44EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089F44F8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089F44F8u) goto L_089F44F8;
    return;
L_089F44F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    goto L_089F44FC;
L_089F44FC:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F4530:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[17] = (aot_gpr[30] + aot_gpr[17]);
    aot_gpr[23] = (aot_gpr[5] | 0u);
    aot_gpr[22] = (aot_gpr[7] | 0u);
    aot_gpr[21] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    goto L_089F4590;
L_089F4590:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F4664;
      }
      goto L_089F4598;
    }
L_089F4598:
    { const bool branch_taken = aot_gpr[20] != 0u;
    aot_gpr[16] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F469C;
      }
      goto L_089F45A0;
    }
L_089F45A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F45D4;
      }
      goto L_089F45AC;
    }
L_089F45AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F45D4;
      }
      goto L_089F45B8;
    }
L_089F45B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F45D4;
      }
      goto L_089F45C4;
    }
L_089F45C4:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F45D4;
      }
      goto L_089F45CC;
    }
L_089F45CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F4654;
      }
      goto L_089F45D4;
    }
L_089F45D4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F4654;
      }
      goto L_089F45DC;
    }
L_089F45DC:
    aot_gpr[31] = (0x089F45E4u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x089F45E4u) goto L_089F45E4;
    return;
L_089F45E4:
    if (aot_gpr[2] != 0u) {
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
        goto L_089F4658;
    }
    goto L_089F45EC;
L_089F45EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F4654;
      }
      goto L_089F45F8;
    }
L_089F45F8:
    aot_gpr[31] = (0x089F4600u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x089F4600u) goto L_089F4600;
    return;
L_089F4600:
    if (aot_gpr[2] != 0u) {
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
        goto L_089F4658;
    }
    goto L_089F4608;
L_089F4608:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F4654;
      }
      goto L_089F4614;
    }
L_089F4614:
    aot_gpr[31] = (0x089F461Cu);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x089F461Cu) goto L_089F461C;
    return;
L_089F461C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[30] | 0u);
      if (branch_taken) {
          goto L_089F4654;
      }
      goto L_089F4624;
    }
L_089F4624:
    aot_gpr[31] = (0x089F462Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_089F46D0;
L_089F462C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[20] = (0u | 1u);
    goto L_089F4654;
L_089F4654:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089F4658;
L_089F4658:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[18] < static_cast<std::uint32_t>(32) ? 1u : 0u);
      if (branch_taken) {
          goto L_089F4590;
      }
      goto L_089F4664;
    }
L_089F4664:
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F469C;
      }
      goto L_089F466C;
    }
L_089F466C:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F469C;
      }
      goto L_089F4674;
    }
L_089F4674:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(12), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[20] = (0u | 1u);
    goto L_089F469C;
L_089F469C:
    aot_gpr[2] = (aot_gpr[20] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F46D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F4708;
      }
      goto L_089F46E8;
    }
L_089F46E8:
    aot_gpr[31] = (0x089F46F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F46F0u) goto L_089F46F0;
    return;
L_089F46F0:
    aot_gpr[31] = (0x089F46F8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F46F8u) goto L_089F46F8;
    return;
L_089F46F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F4704u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089F4704u) goto L_089F4704;
    return;
L_089F4704:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_089F4708;
L_089F4708:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_089F4738;
    }
    goto L_089F4714;
L_089F4714:
    aot_gpr[31] = (0x089F471Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F471Cu) goto L_089F471C;
    return;
L_089F471C:
    aot_gpr[31] = (0x089F4724u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F4724u) goto L_089F4724;
    return;
L_089F4724:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089F4730u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089F4730u) goto L_089F4730;
    return;
L_089F4730:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_089F4738;
L_089F4738:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_089F4764;
    }
    goto L_089F4740;
L_089F4740:
    aot_gpr[31] = (0x089F4748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F4748u) goto L_089F4748;
    return;
L_089F4748:
    aot_gpr[31] = (0x089F4750u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F4750u) goto L_089F4750;
    return;
L_089F4750:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x089F475Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089F475Cu) goto L_089F475C;
    return;
L_089F475C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_089F4764;
L_089F4764:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F478C;
      }
      goto L_089F476C;
    }
L_089F476C:
    aot_gpr[31] = (0x089F4774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F4774u) goto L_089F4774;
    return;
L_089F4774:
    aot_gpr[31] = (0x089F477Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F477Cu) goto L_089F477C;
    return;
L_089F477C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089F4788u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089F4788u) goto L_089F4788;
    return;
L_089F4788:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    goto L_089F478C;
L_089F478C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F479C:
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
          goto L_089F4804;
      }
      goto L_089F47C0;
    }
L_089F47C0:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[17] | 0u);
    goto L_089F47C8;
L_089F47C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
        goto L_089F47E4;
    }
    goto L_089F47D4;
L_089F47D4:
    aot_gpr[31] = (0x089F47DCu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 227u, 0x089F3ED8u>(ctx, &aot_mem) && ctx.pc == 0x089F47DCu) goto L_089F47DC;
    return;
L_089F47DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089F47E4;
L_089F47E4:
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F47C8;
      }
      goto L_089F47F0;
    }
L_089F47F0:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F4804;
      }
      goto L_089F47FC;
    }
L_089F47FC:
    aot_gpr[31] = (0x089F4804u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x089F4804u) goto L_089F4804;
    return;
L_089F4804:
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
L_089F4820:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28920)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(28924));
      if (branch_taken) {
          goto L_089F485C;
      }
      goto L_089F4840;
    }
L_089F4840:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28920), aot_gpr[5]);
    aot_gpr[31] = (0x089F4850u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089F49C8;
L_089F4850:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x089F485Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-18768));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089F485Cu) goto L_089F485C;
    return;
L_089F485C:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F4870:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F48B0;
      }
      goto L_089F4898;
    }
L_089F4898:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[20] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[16]);
      if (branch_taken) {
          goto L_089F48D4;
      }
      goto L_089F48A8;
    }
L_089F48A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F4910;
      }
      goto L_089F48B0;
    }
L_089F48B0:
    aot_gpr[2] = (0u | 0u);
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
L_089F48D4:
    aot_gpr[17] = (aot_gpr[4] | 0u);
    goto L_089F48D8;
L_089F48D8:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[31] = (0x089F48E4u);
    aot_gpr[4] = (0u | 768u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 232u, 0x089F3F24u>(ctx, &aot_mem) && ctx.pc == 0x089F48E4u) goto L_089F48E4;
    return;
L_089F48E4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (aot_gpr[18] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[19]);
        goto L_089F4900;
    }
    goto L_089F48F0;
L_089F48F0:
    aot_gpr[31] = (0x089F48F8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 225u, 0x089F3EA8u>(ctx, &aot_mem) && ctx.pc == 0x089F48F8u) goto L_089F48F8;
    return;
L_089F48F8:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    goto L_089F4900;
L_089F4900:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F48D8;
      }
      goto L_089F4910;
    }
L_089F4910:
    aot_gpr[2] = (0u | 1u);
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
L_089F4934:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[5] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F498C;
      }
      goto L_089F495C;
    }
L_089F495C:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_089F4960;
L_089F4960:
    aot_gpr[31] = (0x089F4968u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 240u, 0x089F3FA4u>(ctx, &aot_mem) && ctx.pc == 0x089F4968u) goto L_089F4968;
    return;
L_089F4968:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F4974u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 227u, 0x089F3ED8u>(ctx, &aot_mem) && ctx.pc == 0x089F4974u) goto L_089F4974;
    return;
L_089F4974:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F4960;
      }
      goto L_089F498C;
    }
L_089F498C:
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
L_089F49A4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[5] << 2u);
      if (branch_taken) {
          goto L_089F49C0;
      }
      goto L_089F49B4;
    }
L_089F49B4:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F49C0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F49C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089F49E8u);
    aot_gpr[6] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089F49E8u) goto L_089F49E8;
    return;
L_089F49E8:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F49FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089F4A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 32u, 0x089FA23Cu>(ctx, &aot_mem) && ctx.pc == 0x089F4A0Cu) goto L_089F4A0C;
    return;
L_089F4A0C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F4A18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089F4A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F4A28u) goto L_089F4A28;
    return;
L_089F4A28:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F4A34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[16]);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (2215u << 16u);
      if (branch_taken) {
          goto L_089F4C98;
      }
      goto L_089F4A80;
    }
L_089F4A80:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-10088));
    aot_gpr[23] = (2216u << 16u);
    aot_gpr[20] = (0u | 59u);
    aot_gpr[22] = (0u | 38u);
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[7]);
    aot_gpr[21] = (aot_gpr[23] + static_cast<std::uint32_t>(-18728));
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[16]);
    goto L_089F4AA0;
L_089F4AA0:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(8))))));
    aot_gpr[8] = (aot_gpr[8] & 255u);
    { const bool branch_taken = aot_gpr[8] != aot_gpr[22];
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F4B3C;
      }
      goto L_089F4AB0;
    }
L_089F4AB0:
    aot_gpr[9] = (aot_gpr[5] + static_cast<std::uint32_t>(-2));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[9] = (aot_gpr[4] + aot_gpr[19]);
      if (branch_taken) {
          goto L_089F4B3C;
      }
      goto L_089F4AC0;
    }
L_089F4AC0:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(8));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_gpr[10] = (0u | 35u);
    { const bool branch_taken = aot_gpr[9] != aot_gpr[10];
    aot_gpr[9] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089F4B3C;
      }
      goto L_089F4AD4;
    }
L_089F4AD4:
    aot_gpr[9] = (aot_gpr[4] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(8));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_gpr[10] = (0u | 120u);
    { const bool branch_taken = aot_gpr[9] != aot_gpr[10];
    // nop
      if (branch_taken) {
          goto L_089F4B3C;
      }
      goto L_089F4AEC;
    }
L_089F4AEC:
    aot_gpr[8] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F4C90;
      }
      goto L_089F4AFC;
    }
L_089F4AFC:
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    goto L_089F4B00;
L_089F4B00:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F4B0Cu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F4B0Cu) goto L_089F4B0C;
    return;
L_089F4B0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[20];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089F4C8C;
      }
      goto L_089F4B24;
    }
L_089F4B24:
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
        goto L_089F4B00;
    }
    goto L_089F4B34;
L_089F4B34:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089F4C90;
      }
      goto L_089F4B3C;
    }
L_089F4B3C:
    { const bool branch_taken = aot_gpr[8] != aot_gpr[22];
    aot_gpr[4] = (0u | 60u);
      if (branch_taken) {
          goto L_089F4B68;
      }
      goto L_089F4B44;
    }
L_089F4B44:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-18728)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089F4B54u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F4B54u) goto L_089F4B54;
    return;
L_089F4B54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089F4C90;
      }
      goto L_089F4B68;
    }
L_089F4B68:
    { const bool branch_taken = aot_gpr[8] != aot_gpr[4];
    aot_gpr[4] = (0u | 62u);
      if (branch_taken) {
          goto L_089F4B94;
      }
      goto L_089F4B70;
    }
L_089F4B70:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x089F4B80u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F4B80u) goto L_089F4B80;
    return;
L_089F4B80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089F4C90;
      }
      goto L_089F4B94;
    }
L_089F4B94:
    { const bool branch_taken = aot_gpr[8] != aot_gpr[4];
    aot_gpr[4] = (0u | 34u);
      if (branch_taken) {
          goto L_089F4BC0;
      }
      goto L_089F4B9C;
    }
L_089F4B9C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x089F4BACu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F4BACu) goto L_089F4BAC;
    return;
L_089F4BAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089F4C90;
      }
      goto L_089F4BC0;
    }
L_089F4BC0:
    { const bool branch_taken = aot_gpr[8] != aot_gpr[4];
    aot_gpr[4] = (0u | 39u);
      if (branch_taken) {
          goto L_089F4BEC;
      }
      goto L_089F4BC8;
    }
L_089F4BC8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x089F4BD8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F4BD8u) goto L_089F4BD8;
    return;
L_089F4BD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089F4C90;
      }
      goto L_089F4BEC;
    }
L_089F4BEC:
    { const bool branch_taken = aot_gpr[8] != aot_gpr[4];
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[8]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_089F4C18;
      }
      goto L_089F4BF4;
    }
L_089F4BF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(48)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (0x089F4C04u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F4C04u) goto L_089F4C04;
    return;
L_089F4C04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089F4C90;
      }
      goto L_089F4C18;
    }
L_089F4C18:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[8] << 24u);
      if (branch_taken) {
          goto L_089F4C60;
      }
      goto L_089F4C20;
    }
L_089F4C20:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[7] = (aot_gpr[8] & 255u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089F4C34u);
    aot_gpr[5] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 23u, 0x08A38140u>(ctx, &aot_mem) && ctx.pc == 0x089F4C34u) goto L_089F4C34;
    return;
L_089F4C34:
    aot_gpr[31] = (0x089F4C3Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F4C3Cu) goto L_089F4C3C;
    return;
L_089F4C3C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089F4C4Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F4C4Cu) goto L_089F4C4C;
    return;
L_089F4C4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089F4C90;
      }
      goto L_089F4C60;
    }
L_089F4C60:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x089F4C78u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F4C78u) goto L_089F4C78;
    return;
L_089F4C78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089F4C90;
      }
      goto L_089F4C8C;
    }
L_089F4C8C:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    goto L_089F4C90;
L_089F4C90:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[16]);
      if (branch_taken) {
          goto L_089F4AA0;
      }
      goto L_089F4C98;
    }
L_089F4C98:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F4CC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F4D7C;
      }
      goto L_089F4CE8;
    }
L_089F4CE8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10032));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_089F4D2C;
      }
      goto L_089F4CFC;
    }
L_089F4CFC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_089F4D00;
L_089F4D00:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_089F4D24;
      }
      goto L_089F4D08;
    }
L_089F4D08:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089F4D24u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F4D24u) goto L_089F4D24;
    return;
L_089F4D24:
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_089F4D00;
      }
      goto L_089F4D2C;
    }
L_089F4D2C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F4D54;
      }
      goto L_089F4D38;
    }
L_089F4D38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-18744));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089F4D54;
      }
      goto L_089F4D4C;
    }
L_089F4D4C:
    aot_gpr[31] = (0x089F4D54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F4D54u) goto L_089F4D54;
    return;
L_089F4D54:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_089F4D6C;
      }
      goto L_089F4D5C;
    }
L_089F4D5C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26144));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_089F4D6C;
L_089F4D6C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F4D7C;
      }
      goto L_089F4D74;
    }
L_089F4D74:
    aot_gpr[31] = (0x089F4D7Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F4A18;
L_089F4D7C:
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
L_089F4D94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F4DE0;
      }
      goto L_089F4DB0;
    }
L_089F4DB0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F4DB4;
L_089F4DB4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_089F4DD8;
      }
      goto L_089F4DBC;
    }
L_089F4DBC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089F4DD8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F4DD8u) goto L_089F4DD8;
    return;
L_089F4DD8:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F4DB4;
      }
      goto L_089F4DE0;
    }
L_089F4DE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F4DFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F4E3C;
      }
      goto L_089F4E18;
    }
L_089F4E18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    goto L_089F4E1C;
L_089F4E1C:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F4E28u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F4E28u) goto L_089F4E28;
    return;
L_089F4E28:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F4E54;
      }
      goto L_089F4E30;
    }
L_089F4E30:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    if (aot_gpr[17] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
        goto L_089F4E1C;
    }
    goto L_089F4E3C;
L_089F4E3C:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F4E54:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F4E6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[2] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F4EF0;
      }
      goto L_089F4E88;
    }
L_089F4E88:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F4EAC;
      }
      goto L_089F4E90;
    }
L_089F4E90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089F4EACu);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F4EACu) goto L_089F4EAC;
    return;
L_089F4EAC:
    aot_gpr[31] = (0x089F4EB4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089F4FA4;
L_089F4EB4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F4EDC;
      }
      goto L_089F4EBC;
    }
L_089F4EBC:
    aot_gpr[31] = (0x089F4EC4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089F4FA4;
L_089F4EC4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x089F4EDCu);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0500_entry, 500u, 214u, 0x089F8F70u>(ctx, &aot_mem) && ctx.pc == 0x089F4EDCu) goto L_089F4EDC;
    return;
L_089F4EDC:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F4EF0:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
        goto L_089F4F14;
    }
    goto L_089F4F0C;
L_089F4F0C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[2]);
      if (branch_taken) {
          goto L_089F4F14;
      }
      goto L_089F4F14;
    }
L_089F4F14:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F4F28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F4F6C;
      }
      goto L_089F4F40;
    }
L_089F4F40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_089F4F44;
L_089F4F44:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089F4F58u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F4F58u) goto L_089F4F58;
    return;
L_089F4F58:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_089F4F80;
    }
    goto L_089F4F60;
L_089F4F60:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    if (aot_gpr[16] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_089F4F44;
    }
    goto L_089F4F6C;
L_089F4F6C:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F4F80:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089F4F94u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F4F94u) goto L_089F4F94;
    return;
L_089F4F94:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F4FA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F4FE8;
      }
      goto L_089F4FBC;
    }
L_089F4FBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_089F4FC0;
L_089F4FC0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089F4FD4u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F4FD4u) goto L_089F4FD4;
    return;
L_089F4FD4:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_089F4FFC;
    }
    goto L_089F4FDC;
L_089F4FDC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[16] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_089F4FC0;
    }
    goto L_089F4FE8;
L_089F4FE8:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F4FFC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    ctx.pc = 0x089F5000u; return;
}

void recomp_unit_0496(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0496_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_496(Runtime &runtime) {
    runtime.register_generated_unit(496u, 0x089F4000u, 4096u, &recomp_unit_0496, &recomp_unit_0496_entry);
    runtime.register_function(0x089F4000u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4044u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4070u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4080u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F408Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4098u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F40A4u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F40ACu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F40B8u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F40CCu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F40E4u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F40ECu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4100u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4114u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F412Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4138u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4144u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F414Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F415Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4190u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F41E8u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F41FCu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4210u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4218u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4220u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4228u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4234u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F423Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F424Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4254u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F425Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4268u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F429Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F42A4u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F42ACu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F42B8u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F42C0u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F42C8u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F42D0u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F42E0u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F42E8u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F42F0u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F42F8u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4310u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F431Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4328u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4344u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4350u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4358u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F438Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F43ACu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F43C0u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F43D4u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F43E8u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F43F4u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F43FCu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4408u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4414u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F441Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F442Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4434u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F443Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4444u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F444Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F445Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4464u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F446Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4470u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4474u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F447Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4488u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F448Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4498u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F44A8u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F44B4u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F44D0u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F44DCu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F44E4u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F44ECu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F44F8u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F44FCu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4530u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4590u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4598u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F45A0u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F45ACu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F45B8u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F45C4u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F45CCu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F45D4u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F45DCu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F45E4u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F45ECu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F45F8u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4600u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4608u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4614u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F461Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4624u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F462Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4654u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4658u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4664u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F466Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4674u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F469Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F46D0u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F46E8u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F46F0u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F46F8u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4704u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4708u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4714u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F471Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4724u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4730u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4738u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4740u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4748u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4750u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F475Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4764u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F476Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4774u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F477Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4788u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F478Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F479Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F47C0u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F47C8u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F47D4u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F47DCu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F47E4u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F47F0u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F47FCu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4804u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4820u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4840u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4850u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F485Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4870u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4898u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F48A8u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F48B0u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F48D4u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F48D8u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F48E4u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F48F0u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F48F8u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4900u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4910u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4934u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F495Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4960u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4968u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4974u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F498Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F49A4u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F49B4u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F49C0u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F49C8u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F49E8u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F49FCu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4A0Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4A18u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4A28u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4A34u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4A80u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4AA0u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4AB0u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4AC0u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4AD4u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4AECu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4AFCu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4B00u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4B0Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4B24u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4B34u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4B3Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4B44u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4B54u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4B68u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4B70u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4B80u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4B94u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4B9Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4BACu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4BC0u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4BC8u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4BD8u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4BECu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4BF4u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4C04u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4C18u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4C20u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4C34u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4C3Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4C4Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4C60u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4C78u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4C8Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4C90u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4C98u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4CC8u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4CE8u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4CFCu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4D00u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4D08u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4D24u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4D2Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4D38u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4D4Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4D54u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4D5Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4D6Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4D74u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4D7Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4D94u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4DB0u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4DB4u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4DBCu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4DD8u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4DE0u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4DFCu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4E18u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4E1Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4E28u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4E30u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4E3Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4E54u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4E6Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4E88u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4E90u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4EACu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4EB4u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4EBCu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4EC4u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4EDCu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4EF0u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4F0Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4F14u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4F28u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4F40u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4F44u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4F58u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4F60u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4F6Cu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4F80u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4F94u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4FA4u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4FBCu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4FC0u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4FD4u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4FDCu, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4FE8u, &recomp_unit_0496, "recomp_unit_0496");
    runtime.register_function(0x089F4FFCu, &recomp_unit_0496, "recomp_unit_0496");
}
} // namespace psprecomp
