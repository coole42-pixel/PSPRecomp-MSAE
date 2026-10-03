#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0077[1013] = {
    1, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0,
    0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 15, 16, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0,
    20, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0,
    0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0,
    0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 33, 0, 0, 34, 0, 35, 0, 0, 36, 0, 37, 0, 38, 0, 39, 0, 0, 40, 0, 41, 0, 0,
    42, 0, 43, 0, 0, 44, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0,
    54, 0, 55, 0, 0, 0, 56, 0, 0, 57, 0, 58, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 65, 0, 66, 0,
    0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0,
    73, 0, 0, 74, 0, 75, 0, 76, 0, 0, 0, 77, 0, 78, 79, 0, 0, 0, 80, 0, 81, 0, 82, 83, 0, 84, 0, 85, 0, 0, 0, 0,
    86, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 91, 0, 0, 0, 92, 0, 93, 94, 95, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99,
    0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0,
    0, 0, 0, 0, 121, 0, 122, 123, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 130, 131, 132, 0, 0,
    0, 0, 133, 0, 0, 0, 134, 0, 135, 0, 136, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 0,
    0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 146, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0,
    0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 160, 0, 0, 161, 0, 162,
    0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 165, 0, 0, 166, 0, 0, 0, 167, 0, 168, 0, 169, 0, 0, 0, 0, 0,
    170, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0,
    0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0,
    0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 192,
    0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0,
    201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0,
    0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0,
    216, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225,
    0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0,
    233, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 238, 0, 0, 239, 0, 0, 240,
};
void recomp_unit_0077_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08851004u;
        entry_id = (entry_delta < 4052u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0077[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08851004;
    case 2u: goto L_0885100C;
    case 3u: goto L_08851018;
    case 4u: goto L_08851028;
    case 5u: goto L_08851038;
    case 6u: goto L_08851048;
    case 7u: goto L_08851050;
    case 8u: goto L_0885105C;
    case 9u: goto L_0885106C;
    case 10u: goto L_0885107C;
    case 11u: goto L_0885108C;
    case 12u: goto L_08851094;
    case 13u: goto L_088510AC;
    case 14u: goto L_088510B4;
    case 15u: goto L_088510C4;
    case 16u: goto L_088510C8;
    case 17u: goto L_088510D8;
    case 18u: goto L_088510E4;
    case 19u: goto L_088510F4;
    case 20u: goto L_08851104;
    case 21u: goto L_08851114;
    case 22u: goto L_0885111C;
    case 23u: goto L_08851150;
    case 24u: goto L_0885117C;
    case 25u: goto L_08851188;
    case 26u: goto L_088511A4;
    case 27u: goto L_088511BC;
    case 28u: goto L_088511D4;
    case 29u: goto L_088511E8;
    case 30u: goto L_088511FC;
    case 31u: goto L_08851210;
    case 32u: goto L_0885121C;
    case 33u: goto L_0885122C;
    case 34u: goto L_08851238;
    case 35u: goto L_08851240;
    case 36u: goto L_0885124C;
    case 37u: goto L_08851254;
    case 38u: goto L_0885125C;
    case 39u: goto L_08851264;
    case 40u: goto L_08851270;
    case 41u: goto L_08851278;
    case 42u: goto L_08851284;
    case 43u: goto L_0885128C;
    case 44u: goto L_08851298;
    case 45u: goto L_0885129C;
    case 46u: goto L_088512BC;
    case 47u: goto L_088512DC;
    case 48u: goto L_08851328;
    case 49u: goto L_08851338;
    case 50u: goto L_08851344;
    case 51u: goto L_08851358;
    case 52u: goto L_08851368;
    case 53u: goto L_08851374;
    case 54u: goto L_08851384;
    case 55u: goto L_0885138C;
    case 56u: goto L_0885139C;
    case 57u: goto L_088513A8;
    case 58u: goto L_088513B0;
    case 59u: goto L_088513C0;
    case 60u: goto L_088513CC;
    case 61u: goto L_088513F0;
    case 62u: goto L_0885143C;
    case 63u: goto L_08851460;
    case 64u: goto L_08851468;
    case 65u: goto L_08851474;
    case 66u: goto L_0885147C;
    case 67u: goto L_08851490;
    case 68u: goto L_088514A0;
    case 69u: goto L_088514B4;
    case 70u: goto L_088514D0;
    case 71u: goto L_088514E8;
    case 72u: goto L_088514F0;
    case 73u: goto L_08851504;
    case 74u: goto L_08851510;
    case 75u: goto L_08851518;
    case 76u: goto L_08851520;
    case 77u: goto L_08851530;
    case 78u: goto L_08851538;
    case 79u: goto L_0885153C;
    case 80u: goto L_0885154C;
    case 81u: goto L_08851554;
    case 82u: goto L_0885155C;
    case 83u: goto L_08851560;
    case 84u: goto L_08851568;
    case 85u: goto L_08851570;
    case 86u: goto L_08851584;
    case 87u: goto L_0885158C;
    case 88u: goto L_088515A4;
    case 89u: goto L_088515B0;
    case 90u: goto L_088515BC;
    case 91u: goto L_088515C4;
    case 92u: goto L_088515D4;
    case 93u: goto L_088515DC;
    case 94u: goto L_088515E0;
    case 95u: goto L_088515E4;
    case 96u: goto L_08851620;
    case 97u: goto L_08851658;
    case 98u: goto L_08851670;
    case 99u: goto L_08851680;
    case 100u: goto L_0885168C;
    case 101u: goto L_088516A8;
    case 102u: goto L_088516B0;
    case 103u: goto L_088516BC;
    case 104u: goto L_088516D0;
    case 105u: goto L_088516E8;
    case 106u: goto L_088516F0;
    case 107u: goto L_08851730;
    case 108u: goto L_08851738;
    case 109u: goto L_08851740;
    case 110u: goto L_08851748;
    case 111u: goto L_08851750;
    case 112u: goto L_0885176C;
    case 113u: goto L_08851784;
    case 114u: goto L_0885179C;
    case 115u: goto L_088517AC;
    case 116u: goto L_088517B8;
    case 117u: goto L_088517C4;
    case 118u: goto L_088517D0;
    case 119u: goto L_088517F4;
    case 120u: goto L_088517FC;
    case 121u: goto L_08851814;
    case 122u: goto L_0885181C;
    case 123u: goto L_08851820;
    case 124u: goto L_08851828;
    case 125u: goto L_08851834;
    case 126u: goto L_08851840;
    case 127u: goto L_0885184C;
    case 128u: goto L_08851858;
    case 129u: goto L_08851868;
    case 130u: goto L_08851870;
    case 131u: goto L_08851874;
    case 132u: goto L_08851878;
    case 133u: goto L_0885188C;
    case 134u: goto L_0885189C;
    case 135u: goto L_088518A4;
    case 136u: goto L_088518AC;
    case 137u: goto L_088518B0;
    case 138u: goto L_088518CC;
    case 139u: goto L_088518DC;
    case 140u: goto L_088518EC;
    case 141u: goto L_088518F8;
    case 142u: goto L_08851914;
    case 143u: goto L_08851924;
    case 144u: goto L_08851934;
    case 145u: goto L_08851944;
    case 146u: goto L_08851950;
    case 147u: goto L_08851958;
    case 148u: goto L_08851960;
    case 149u: goto L_08851984;
    case 150u: goto L_088519A0;
    case 151u: goto L_088519B0;
    case 152u: goto L_088519C4;
    case 153u: goto L_088519D4;
    case 154u: goto L_088519E4;
    case 155u: goto L_088519EC;
    case 156u: goto L_08851A10;
    case 157u: goto L_08851A34;
    case 158u: goto L_08851A58;
    case 159u: goto L_08851A64;
    case 160u: goto L_08851A6C;
    case 161u: goto L_08851A78;
    case 162u: goto L_08851A80;
    case 163u: goto L_08851AA4;
    case 164u: goto L_08851AB8;
    case 165u: goto L_08851AC0;
    case 166u: goto L_08851ACC;
    case 167u: goto L_08851ADC;
    case 168u: goto L_08851AE4;
    case 169u: goto L_08851AEC;
    case 170u: goto L_08851B04;
    case 171u: goto L_08851B0C;
    case 172u: goto L_08851B28;
    case 173u: goto L_08851B38;
    case 174u: goto L_08851B48;
    case 175u: goto L_08851B58;
    case 176u: goto L_08851B64;
    case 177u: goto L_08851B6C;
    case 178u: goto L_08851B98;
    case 179u: goto L_08851BB8;
    case 180u: goto L_08851BEC;
    case 181u: goto L_08851C08;
    case 182u: goto L_08851C14;
    case 183u: goto L_08851C2C;
    case 184u: goto L_08851C6C;
    case 185u: goto L_08851C88;
    case 186u: goto L_08851CAC;
    case 187u: goto L_08851CC4;
    case 188u: goto L_08851CD0;
    case 189u: goto L_08851CDC;
    case 190u: goto L_08851CE8;
    case 191u: goto L_08851CF4;
    case 192u: goto L_08851D00;
    case 193u: goto L_08851D10;
    case 194u: goto L_08851D1C;
    case 195u: goto L_08851D34;
    case 196u: goto L_08851D40;
    case 197u: goto L_08851D48;
    case 198u: goto L_08851D54;
    case 199u: goto L_08851D6C;
    case 200u: goto L_08851D78;
    case 201u: goto L_08851D84;
    case 202u: goto L_08851D9C;
    case 203u: goto L_08851DAC;
    case 204u: goto L_08851DB4;
    case 205u: goto L_08851DC0;
    case 206u: goto L_08851DCC;
    case 207u: goto L_08851DDC;
    case 208u: goto L_08851DE8;
    case 209u: goto L_08851E08;
    case 210u: goto L_08851E18;
    case 211u: goto L_08851E28;
    case 212u: goto L_08851E48;
    case 213u: goto L_08851E60;
    case 214u: goto L_08851E6C;
    case 215u: goto L_08851E78;
    case 216u: goto L_08851E84;
    case 217u: goto L_08851E90;
    case 218u: goto L_08851E9C;
    case 219u: goto L_08851EA8;
    case 220u: goto L_08851EB4;
    case 221u: goto L_08851EC0;
    case 222u: goto L_08851ECC;
    case 223u: goto L_08851ED8;
    case 224u: goto L_08851EF0;
    case 225u: goto L_08851F00;
    case 226u: goto L_08851F08;
    case 227u: goto L_08851F14;
    case 228u: goto L_08851F20;
    case 229u: goto L_08851F38;
    case 230u: goto L_08851F44;
    case 231u: goto L_08851F64;
    case 232u: goto L_08851F6C;
    case 233u: goto L_08851F84;
    case 234u: goto L_08851F90;
    case 235u: goto L_08851F9C;
    case 236u: goto L_08851FA8;
    case 237u: goto L_08851FB4;
    case 238u: goto L_08851FBC;
    case 239u: goto L_08851FC8;
    case 240u: goto L_08851FD4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08851004:
    aot_gpr[31] = (0x0885100Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x0885100Cu) goto L_0885100C;
    return;
L_0885100C:
    aot_gpr[4] = (0u | 231u);
    aot_gpr[31] = (0x08851018u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08851018u) goto L_08851018;
    return;
L_08851018:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08851028u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08851028u) goto L_08851028;
    return;
L_08851028:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08851038u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08851038u) goto L_08851038;
    return;
L_08851038:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08851048u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08851048u) goto L_08851048;
    return;
L_08851048:
    aot_gpr[31] = (0x08851050u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08851050u) goto L_08851050;
    return;
L_08851050:
    aot_gpr[4] = (0u | 232u);
    aot_gpr[31] = (0x0885105Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0885105Cu) goto L_0885105C;
    return;
L_0885105C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0885106Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x0885106Cu) goto L_0885106C;
    return;
L_0885106C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0885107Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0885107Cu) goto L_0885107C;
    return;
L_0885107C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x0885108Cu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x0885108Cu) goto L_0885108C;
    return;
L_0885108C:
    aot_gpr[31] = (0x08851094u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08851094u) goto L_08851094;
    return;
L_08851094:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4288)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088510D8;
      }
      goto L_088510AC;
    }
L_088510AC:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(25244)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(5532));
    goto L_088510B4;
L_088510B4:
    aot_gpr[6] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088510C8;
      }
      goto L_088510C4;
    }
L_088510C4:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_088510C8;
L_088510C8:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088510B4;
      }
      goto L_088510D8;
    }
L_088510D8:
    aot_gpr[4] = (0u | 233u);
    aot_gpr[31] = (0x088510E4u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088510E4u) goto L_088510E4;
    return;
L_088510E4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088510F4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x088510F4u) goto L_088510F4;
    return;
L_088510F4:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08851104u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08851104u) goto L_08851104;
    return;
L_08851104:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08851114u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08851114u) goto L_08851114;
    return;
L_08851114:
    aot_gpr[31] = (0x0885111Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x0885111Cu) goto L_0885111C;
    return;
L_0885111C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851150:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0885117Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x0885117Cu) goto L_0885117C;
    return;
L_0885117C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x08851188u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 33u, 0x0888A274u>(ctx, &aot_mem) && ctx.pc == 0x08851188u) goto L_08851188;
    return;
L_08851188:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(328));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088511A4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(340));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088511A4u) goto L_088511A4;
    return;
L_088511A4:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088511BCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(352));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088511BCu) goto L_088511BC;
    return;
L_088511BC:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088511D4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(364));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088511D4u) goto L_088511D4;
    return;
L_088511D4:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088511E8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(384));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088511E8u) goto L_088511E8;
    return;
L_088511E8:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088511FCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(404));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088511FCu) goto L_088511FC;
    return;
L_088511FC:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08851210u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(420));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08851210u) goto L_08851210;
    return;
L_08851210:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0885121Cu);
    aot_gpr[5] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0885121Cu) goto L_0885121C;
    return;
L_0885121C:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0885129C;
      }
      goto L_0885122C;
    }
L_0885122C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08851254;
      }
      goto L_08851238;
    }
L_08851238:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0885128C;
      }
      goto L_08851240;
    }
L_08851240:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885124Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 237u, 0x0884FF34u>(ctx, &aot_mem) && ctx.pc == 0x0885124Cu) goto L_0885124C;
    return;
L_0885124C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851298;
      }
      goto L_08851254;
    }
L_08851254:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08851278;
      }
      goto L_0885125C;
    }
L_0885125C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885128C;
      }
      goto L_08851264;
    }
L_08851264:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08851270u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 112u, 0x0885064Cu>(ctx, &aot_mem) && ctx.pc == 0x08851270u) goto L_08851270;
    return;
L_08851270:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851298;
      }
      goto L_08851278;
    }
L_08851278:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08851284u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 45u, 0x08850238u>(ctx, &aot_mem) && ctx.pc == 0x08851284u) goto L_08851284;
    return;
L_08851284:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851298;
      }
      goto L_0885128C;
    }
L_0885128C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08851298u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 161u, 0x08850924u>(ctx, &aot_mem) && ctx.pc == 0x08851298u) goto L_08851298;
    return;
L_08851298:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    goto L_0885129C;
L_0885129C:
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
L_088512BC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24032), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088512DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (2214u << 16u);
    aot_gpr[19] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u | 32768u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(520));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(540));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    aot_gpr[17] = (1u << 16u);
      if (branch_taken) {
          goto L_08851358;
      }
      goto L_08851328;
    }
L_08851328:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08851338u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08851338u) goto L_08851338;
    return;
L_08851338:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08851344u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x08851344u) goto L_08851344;
    return;
L_08851344:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[4] < aot_gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_08851384;
      }
      goto L_08851358;
    }
L_08851358:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08851368u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08851368u) goto L_08851368;
    return;
L_08851368:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08851374u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 254u, 0x0888BFBCu>(ctx, &aot_mem) && ctx.pc == 0x08851374u) goto L_08851374;
    return;
L_08851374:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (aot_gpr[4] < aot_gpr[16] ? 1u : 0u);
    goto L_08851384;
L_08851384:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088513B0;
      }
      goto L_0885138C;
    }
L_0885138C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0885139Cu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0885139Cu) goto L_0885139C;
    return;
L_0885139C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088513A8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x088513A8u) goto L_088513A8;
    return;
L_088513A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088513CC;
      }
      goto L_088513B0;
    }
L_088513B0:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088513C0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088513C0u) goto L_088513C0;
    return;
L_088513C0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088513CCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 254u, 0x0888BFBCu>(ctx, &aot_mem) && ctx.pc == 0x088513CCu) goto L_088513CC;
    return;
L_088513CC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088513F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1072));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1036), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1048), aot_gpr[22]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[22] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1004), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1012), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1016), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1020), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1024), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1028), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1032), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1040), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1044), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1052), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1056), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1060), aot_gpr[31]);
    aot_gpr[31] = (0x0885143Cu);
    aot_gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0885143Cu) goto L_0885143C;
    return;
L_0885143C:
    aot_gpr[4] = (20352u << 16u);
    aot_gpr[30] = (aot_gpr[2] | 0u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[18] = (0u | 32u);
    aot_gpr[17] = (0u | 10u);
    aot_gpr[16] = (0u | 13u);
    aot_gpr[23] = (2218u << 16u);
    goto L_08851460;
L_08851460:
    aot_gpr[31] = (0x08851468u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1004)));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08851468u) goto L_08851468;
    return;
L_08851468:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885155C;
      }
      goto L_08851474;
    }
L_08851474:
    aot_gpr[31] = (0x0885147Cu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 12u, 0x0888D0CCu>(ctx, &aot_mem) && ctx.pc == 0x0885147Cu) goto L_0885147C;
    return;
L_0885147C:
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_fpr[20] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[20])));
    if (static_cast<std::int32_t>(aot_gpr[2]) < 0) {
    aot_fpr[20] = aot_fpr[20] + aot_fpr[22];
        goto L_08851490;
    }
    goto L_08851490;
L_08851490:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1008), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + aot_gpr[20]);
    aot_gpr[31] = (0x088514A0u);
    aot_gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x088514A0u) goto L_088514A0;
    return;
L_088514A0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-7028)));
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088514B4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 97u, 0x0888C590u>(ctx, &aot_mem) && ctx.pc == 0x088514B4u) goto L_088514B4;
    return;
L_088514B4:
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088514D0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 101u, 0x0891982Cu>(ctx, &aot_mem) && ctx.pc == 0x088514D0u) goto L_088514D0;
    return;
L_088514D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[20]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1008)));
    goto L_088514E8;
L_088514E8:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08851530;
      }
      goto L_088514F0;
    }
L_088514F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[10] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
      if (branch_taken) {
          goto L_08851530;
      }
      goto L_08851504;
    }
L_08851504:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08851530;
      }
      goto L_08851510;
    }
L_08851510:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08851530;
      }
      goto L_08851518;
    }
L_08851518:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08851530;
      }
      goto L_08851520;
    }
L_08851520:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088514E8;
      }
      goto L_08851530;
    }
L_08851530:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885153C;
      }
      goto L_08851538;
    }
L_08851538:
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[20]);
    goto L_0885153C;
L_0885153C:
    aot_gpr[20] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08851554;
      }
      goto L_0885154C;
    }
L_0885154C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08851560;
      }
      goto L_08851554;
    }
L_08851554:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08851460;
      }
      goto L_0885155C;
    }
L_0885155C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_08851560;
L_08851560:
    { const bool branch_taken = aot_gpr[20] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088515E4;
      }
      goto L_08851568;
    }
L_08851568:
    aot_gpr[31] = (0x08851570u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 216u, 0x0888CF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08851570u) goto L_08851570;
    return;
L_08851570:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[20]);
    aot_gpr[31] = (0x08851584u);
    aot_gpr[6] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x08851584u) goto L_08851584;
    return;
L_08851584:
    aot_gpr[31] = (0x0885158Cu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 216u, 0x0888CF6Cu>(ctx, &aot_mem) && ctx.pc == 0x0885158Cu) goto L_0885158C;
    return;
L_0885158C:
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(499), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(-6992))))));
    aot_gpr[4] = (0u | 15u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088515E0;
      }
      goto L_088515A4;
    }
L_088515A4:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x088515B0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 216u, 0x0888CF6Cu>(ctx, &aot_mem) && ctx.pc == 0x088515B0u) goto L_088515B0;
    return;
L_088515B0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088515BCu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0279_entry, 279u, 173u, 0x0891BDDCu>(ctx, &aot_mem) && ctx.pc == 0x088515BCu) goto L_088515BC;
    return;
L_088515BC:
    aot_gpr[31] = (0x088515C4u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 216u, 0x0888CF6Cu>(ctx, &aot_mem) && ctx.pc == 0x088515C4u) goto L_088515C4;
    return;
L_088515C4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088515D4u);
    aot_gpr[6] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x088515D4u) goto L_088515D4;
    return;
L_088515D4:
    aot_gpr[31] = (0x088515DCu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 216u, 0x0888CF6Cu>(ctx, &aot_mem) && ctx.pc == 0x088515DCu) goto L_088515DC;
    return;
L_088515DC:
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(499), static_cast<std::uint8_t>(0u));
    goto L_088515E0;
L_088515E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    goto L_088515E4;
L_088515E4:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1012)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1016)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1020)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1024)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1028)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1032)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1036)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1040)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1044)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1048)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1052)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1056)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1060)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851620:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(520));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08851658u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(532));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08851658u) goto L_08851658;
    return;
L_08851658:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08851670u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(540));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08851670u) goto L_08851670;
    return;
L_08851670:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 263u);
    aot_gpr[31] = (0x08851680u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08851680u) goto L_08851680;
    return;
L_08851680:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0885168Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 209u, 0x0888CF00u>(ctx, &aot_mem) && ctx.pc == 0x0885168Cu) goto L_0885168C;
    return;
L_0885168C:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x088516A8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088512DC;
L_088516A8:
    aot_gpr[31] = (0x088516B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 49u, 0x0889B3B0u>(ctx, &aot_mem) && ctx.pc == 0x088516B0u) goto L_088516B0;
    return;
L_088516B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[31] = (0x088516BCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x088516BCu) goto L_088516BC;
    return;
L_088516BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088516D0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    goto L_088513F0;
L_088516D0:
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
L_088516E8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088516F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08851740;
      }
      goto L_08851730;
    }
L_08851730:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08851B6C;
      }
      goto L_08851738;
    }
L_08851738:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851750;
      }
      goto L_08851740;
    }
L_08851740:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08851AEC;
      }
      goto L_08851748;
    }
L_08851748:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851B6C;
      }
      goto L_08851750;
    }
L_08851750:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(520));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0885176Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(540));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0885176Cu) goto L_0885176C;
    return;
L_0885176C:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08851784u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(560));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08851784u) goto L_08851784;
    return;
L_08851784:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0885179Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(532));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0885179Cu) goto L_0885179C;
    return;
L_0885179C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088517ACu);
    aot_gpr[5] = (0u | 31u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088517ACu) goto L_088517AC;
    return;
L_088517AC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088517B8u);
    aot_gpr[5] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088517B8u) goto L_088517B8;
    return;
L_088517B8:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088517C4u);
    aot_gpr[5] = (0u | 35u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088517C4u) goto L_088517C4;
    return;
L_088517C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08851AE4;
      }
      goto L_088517D0;
    }
L_088517D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08851960;
      }
      goto L_088517F4;
    }
L_088517F4:
    aot_gpr[31] = (0x088517FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 49u, 0x0889B3B0u>(ctx, &aot_mem) && ctx.pc == 0x088517FCu) goto L_088517FC;
    return;
L_088517FC:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[21] = (0u | 1u);
    aot_gpr[21] = (aot_gpr[21] & 255u);
    aot_gpr[22] = (0u | 0u);
    aot_gpr[31] = (0x08851814u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08851814u) goto L_08851814;
    return;
L_08851814:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088518B0;
      }
      goto L_0885181C;
    }
L_0885181C:
    aot_gpr[23] = (0u | 0u);
    goto L_08851820;
L_08851820:
    aot_gpr[31] = (0x08851828u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08851828u) goto L_08851828;
    return;
L_08851828:
    aot_gpr[4] = (aot_gpr[23] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088518A4;
      }
      goto L_08851834;
    }
L_08851834:
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[23]);
    { const bool branch_taken = aot_gpr[21] != 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08851874;
      }
      goto L_08851840;
    }
L_08851840:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 97 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (0u | 92u);
      if (branch_taken) {
          goto L_08851868;
      }
      goto L_0885184C;
    }
L_0885184C:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 123 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 92u);
      if (branch_taken) {
          goto L_08851868;
      }
      goto L_08851858;
    }
L_08851858:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
      if (branch_taken) {
          goto L_08851874;
      }
      goto L_08851868;
    }
L_08851868:
    if (aot_gpr[4] != aot_gpr[5]) {
    aot_gpr[22] = (aot_gpr[22] << 4u);
        goto L_08851878;
    }
    goto L_08851870;
L_08851870:
    aot_gpr[4] = (0u | 47u);
    goto L_08851874;
L_08851874:
    aot_gpr[22] = (aot_gpr[22] << 4u);
    goto L_08851878;
L_08851878:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[4]);
    aot_gpr[4] = (61440u << 16u);
    aot_gpr[4] = (aot_gpr[22] & aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[4] >> 24u);
      if (branch_taken) {
          goto L_0885189C;
      }
      goto L_0885188C;
    }
L_0885188C:
    aot_gpr[22] = (aot_gpr[22] ^ aot_gpr[4]);
    aot_gpr[4] = (4096u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[22] = (aot_gpr[22] & aot_gpr[4]);
    goto L_0885189C;
L_0885189C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08851820;
      }
      goto L_088518A4;
    }
L_088518A4:
    { const bool branch_taken = aot_gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_088518B0;
      }
      goto L_088518AC;
    }
L_088518AC:
    aot_gpr[22] = (0u | 1u);
    goto L_088518B0;
L_088518B0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(7964), aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(-3216)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088518F8;
      }
      goto L_088518CC;
    }
L_088518CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7917)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088518F8;
      }
      goto L_088518DC;
    }
L_088518DC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    aot_gpr[31] = (0x088518ECu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 148u, 0x08888EB4u>(ctx, &aot_mem) && ctx.pc == 0x088518ECu) goto L_088518EC;
    return;
L_088518EC:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08851958;
      }
      goto L_088518F8;
    }
L_088518F8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08851934;
      }
      goto L_08851914;
    }
L_08851914:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08851924u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(568));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08851924u) goto L_08851924;
    return;
L_08851924:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08851950;
      }
      goto L_08851934;
    }
L_08851934:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08851944u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(588));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08851944u) goto L_08851944;
    return;
L_08851944:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_08851950;
L_08851950:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08851958;
L_08851958:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088519EC;
      }
      goto L_08851960;
    }
L_08851960:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088519EC;
      }
      goto L_08851984;
    }
L_08851984:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088519C4;
      }
      goto L_088519A0;
    }
L_088519A0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088519B0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(604));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088519B0u) goto L_088519B0;
    return;
L_088519B0:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088519E4;
      }
      goto L_088519C4;
    }
L_088519C4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088519D4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(620));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088519D4u) goto L_088519D4;
    return;
L_088519D4:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_088519E4;
L_088519E4:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088519EC;
L_088519EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08851A34;
      }
      goto L_08851A10;
    }
L_08851A10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08851AE4;
      }
      goto L_08851A34;
    }
L_08851A34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08851A80;
      }
      goto L_08851A58;
    }
L_08851A58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08851ACC;
      }
      goto L_08851A64;
    }
L_08851A64:
    aot_gpr[31] = (0x08851A6Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08851A6Cu) goto L_08851A6C;
    return;
L_08851A6C:
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08851A78u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08851A78u) goto L_08851A78;
    return;
L_08851A78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851ACC;
      }
      goto L_08851A80;
    }
L_08851A80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08851ACC;
      }
      goto L_08851AA4;
    }
L_08851AA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08851ACC;
      }
      goto L_08851AB8;
    }
L_08851AB8:
    aot_gpr[31] = (0x08851AC0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08851AC0u) goto L_08851AC0;
    return;
L_08851AC0:
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x08851ACCu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08851ACCu) goto L_08851ACC;
    return;
L_08851ACC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08851ADCu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    goto L_088513F0;
L_08851ADC:
    aot_gpr[31] = (0x08851AE4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088512DC;
L_08851AE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851B6C;
      }
      goto L_08851AEC;
    }
L_08851AEC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 14 ? 1u : 0u);
      if (branch_taken) {
          goto L_08851B6C;
      }
      goto L_08851B04;
    }
L_08851B04:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08851B6C;
      }
      goto L_08851B0C;
    }
L_08851B0C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08851B48;
      }
      goto L_08851B28;
    }
L_08851B28:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08851B38u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(568));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08851B38u) goto L_08851B38;
    return;
L_08851B38:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08851B64;
      }
      goto L_08851B48;
    }
L_08851B48:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08851B58u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(588));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08851B58u) goto L_08851B58;
    return;
L_08851B58:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_08851B64;
L_08851B64:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08851B6C;
L_08851B6C:
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
L_08851B98:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24040), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851BB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    aot_gpr[31] = (0x08851BECu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 62u, 0x0884A544u>(ctx, &aot_mem) && ctx.pc == 0x08851BECu) goto L_08851BEC;
    return;
L_08851BEC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[18] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(640));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08851C08u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08851C08u) goto L_08851C08;
    return;
L_08851C08:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08851C14u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x08851C14u) goto L_08851C14;
    return;
L_08851C14:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[31] = (0x08851C2Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(660));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08851C2Cu) goto L_08851C2C;
    return;
L_08851C2C:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(752));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (2214u << 16u);
    aot_gpr[21] = (2214u << 16u);
    aot_gpr[30] = (2214u << 16u);
    aot_gpr[23] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(700));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(740));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(772));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(784));
    aot_gpr[19] = (2215u << 16u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[22] = (2215u << 16u);
      if (branch_taken) {
          goto L_08851E08;
      }
      goto L_08851C6C;
    }
L_08851C6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[22]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[22] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08851C88u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(676));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08851C88u) goto L_08851C88;
    return;
L_08851C88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[23] = (aot_gpr[4] + static_cast<std::uint32_t>(688));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08851CACu);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08851CACu) goto L_08851CAC;
    return;
L_08851CAC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x08851CC4u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08851CC4u) goto L_08851CC4;
    return;
L_08851CC4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08851CD0u);
    aot_gpr[5] = (0u | 16384u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x08851CD0u) goto L_08851CD0;
    return;
L_08851CD0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08851CDCu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08851CDCu) goto L_08851CDC;
    return;
L_08851CDC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08851CE8u);
    aot_gpr[5] = (0u | 8192u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x08851CE8u) goto L_08851CE8;
    return;
L_08851CE8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08851CF4u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08851CF4u) goto L_08851CF4;
    return;
L_08851CF4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08851D00u);
    aot_gpr[5] = (0u | 16384u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x08851D00u) goto L_08851D00;
    return;
L_08851D00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(25236)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08851D48;
      }
      goto L_08851D10;
    }
L_08851D10:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08851D1Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08851D1Cu) goto L_08851D1C;
    return;
L_08851D1C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08851D34u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(716));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08851D34u) goto L_08851D34;
    return;
L_08851D34:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08851D40u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 58u, 0x0888A3D0u>(ctx, &aot_mem) && ctx.pc == 0x08851D40u) goto L_08851D40;
    return;
L_08851D40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851D78;
      }
      goto L_08851D48;
    }
L_08851D48:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08851D54u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08851D54u) goto L_08851D54;
    return;
L_08851D54:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08851D6Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(728));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08851D6Cu) goto L_08851D6C;
    return;
L_08851D6C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08851D78u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 58u, 0x0888A3D0u>(ctx, &aot_mem) && ctx.pc == 0x08851D78u) goto L_08851D78;
    return;
L_08851D78:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08851D84u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08851D84u) goto L_08851D84;
    return;
L_08851D84:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x08851D9Cu);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08851D9Cu) goto L_08851D9C;
    return;
L_08851D9C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08851DACu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08851DACu) goto L_08851DAC;
    return;
L_08851DAC:
    aot_gpr[31] = (0x08851DB4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 51u, 0x0888C28Cu>(ctx, &aot_mem) && ctx.pc == 0x08851DB4u) goto L_08851DB4;
    return;
L_08851DB4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08851DC0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x08851DC0u) goto L_08851DC0;
    return;
L_08851DC0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08851DCCu);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08851DCCu) goto L_08851DCC;
    return;
L_08851DCC:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08851DDCu);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 75u, 0x0888C414u>(ctx, &aot_mem) && ctx.pc == 0x08851DDCu) goto L_08851DDC;
    return;
L_08851DDC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08851DE8u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08851DE8u) goto L_08851DE8;
    return;
L_08851DE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (4096u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(25244)));
      if (branch_taken) {
          goto L_08851F64;
      }
      goto L_08851E08;
    }
L_08851E08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(25236)));
    aot_gpr[16] = (57344u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08851ECC;
      }
      goto L_08851E18;
    }
L_08851E18:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08851E28u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(676));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08851E28u) goto L_08851E28;
    return;
L_08851E28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(688));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08851E48u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08851E48u) goto L_08851E48;
    return;
L_08851E48:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x08851E60u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08851E60u) goto L_08851E60;
    return;
L_08851E60:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08851E6Cu);
    aot_gpr[5] = (0u | 16384u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 254u, 0x0888BFBCu>(ctx, &aot_mem) && ctx.pc == 0x08851E6Cu) goto L_08851E6C;
    return;
L_08851E6C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08851E78u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08851E78u) goto L_08851E78;
    return;
L_08851E78:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08851E84u);
    aot_gpr[5] = (0u | 8192u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 254u, 0x0888BFBCu>(ctx, &aot_mem) && ctx.pc == 0x08851E84u) goto L_08851E84;
    return;
L_08851E84:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08851E90u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08851E90u) goto L_08851E90;
    return;
L_08851E90:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08851E9Cu);
    aot_gpr[5] = (0u | 16384u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 254u, 0x0888BFBCu>(ctx, &aot_mem) && ctx.pc == 0x08851E9Cu) goto L_08851E9C;
    return;
L_08851E9C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08851EA8u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08851EA8u) goto L_08851EA8;
    return;
L_08851EA8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08851EB4u);
    aot_gpr[5] = (0u | 8192u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x08851EB4u) goto L_08851EB4;
    return;
L_08851EB4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08851EC0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08851EC0u) goto L_08851EC0;
    return;
L_08851EC0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08851ECCu);
    aot_gpr[5] = (0u | 16384u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x08851ECCu) goto L_08851ECC;
    return;
L_08851ECC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08851ED8u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08851ED8u) goto L_08851ED8;
    return;
L_08851ED8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x08851EF0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08851EF0u) goto L_08851EF0;
    return;
L_08851EF0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08851F00u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08851F00u) goto L_08851F00;
    return;
L_08851F00:
    aot_gpr[31] = (0x08851F08u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 51u, 0x0888C28Cu>(ctx, &aot_mem) && ctx.pc == 0x08851F08u) goto L_08851F08;
    return;
L_08851F08:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08851F14u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 254u, 0x0888BFBCu>(ctx, &aot_mem) && ctx.pc == 0x08851F14u) goto L_08851F14;
    return;
L_08851F14:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08851F20u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08851F20u) goto L_08851F20;
    return;
L_08851F20:
    aot_gpr[5] = (49440u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (16704u << 16u);
    aot_gpr[31] = (0x08851F38u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 75u, 0x0888C414u>(ctx, &aot_mem) && ctx.pc == 0x08851F38u) goto L_08851F38;
    return;
L_08851F38:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08851F44u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08851F44u) goto L_08851F44;
    return;
L_08851F44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (61440u << 16u);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(25244)));
    goto L_08851F64;
L_08851F64:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08851F84;
      }
      goto L_08851F6C;
    }
L_08851F6C:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(-3216)));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(7917), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(25244)));
    goto L_08851F84;
L_08851F84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7917)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_08851FBC;
      }
      goto L_08851F90;
    }
L_08851F90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-3216)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08851FBC;
      }
      goto L_08851F9C;
    }
L_08851F9C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08851FA8u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08851FA8u) goto L_08851FA8;
    return;
L_08851FA8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08851FB4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08851FB4u) goto L_08851FB4;
    return;
L_08851FB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851FD4;
      }
      goto L_08851FBC;
    }
L_08851FBC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08851FC8u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08851FC8u) goto L_08851FC8;
    return;
L_08851FC8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08851FD4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08851FD4u) goto L_08851FD4;
    return;
L_08851FD4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0077(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0077_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_77(Runtime &runtime) {
    runtime.register_generated_unit(77u, 0x08851000u, 4096u, &recomp_unit_0077, &recomp_unit_0077_entry);
    runtime.register_function(0x08851004u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885100Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851018u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851028u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851038u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851048u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851050u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885105Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885106Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885107Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885108Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851094u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088510ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088510B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088510C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088510C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088510D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088510E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088510F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851104u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851114u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885111Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851150u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885117Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851188u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088511A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088511BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088511D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088511E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088511FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851210u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885121Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885122Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851238u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851240u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885124Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851254u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885125Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851264u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851270u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851278u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851284u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885128Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851298u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885129Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088512BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088512DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851328u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851338u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851344u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851358u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851368u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851374u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851384u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885138Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885139Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088513A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088513B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088513C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088513CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088513F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885143Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851460u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851468u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851474u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885147Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851490u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088514A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088514B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088514D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088514E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088514F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851504u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851510u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851518u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851520u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851530u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851538u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885153Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885154Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851554u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885155Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851560u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851568u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851570u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851584u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885158Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088515A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088515B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088515BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088515C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088515D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088515DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088515E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088515E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851620u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851658u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851670u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851680u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885168Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088516A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088516B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088516BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088516D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088516E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088516F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851730u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851738u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851740u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851748u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851750u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885176Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851784u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885179Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088517ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088517B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088517C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088517D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088517F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088517FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851814u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885181Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851820u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851828u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851834u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851840u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885184Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851858u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851868u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851870u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851874u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851878u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885188Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0885189Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088518A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088518ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088518B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088518CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088518DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088518ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088518F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851914u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851924u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851934u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851944u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851950u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851958u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851960u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851984u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088519A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088519B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088519C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088519D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088519E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x088519ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851A10u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851A34u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851A58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851A64u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851A6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851A78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851A80u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851AA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851AB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851AC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851ACCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851ADCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851AE4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851AECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851B04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851B0Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851B28u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851B38u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851B48u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851B58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851B64u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851B6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851B98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851BB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851BECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851C08u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851C14u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851C2Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851C6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851C88u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851CACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851CC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851CD0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851CDCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851CE8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851CF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851D00u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851D10u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851D1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851D34u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851D40u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851D48u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851D54u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851D6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851D78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851D84u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851D9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851DACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851DB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851DC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851DCCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851DDCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851DE8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851E08u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851E18u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851E28u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851E48u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851E60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851E6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851E78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851E84u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851E90u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851E9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851EA8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851EB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851EC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851ECCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851ED8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851EF0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851F00u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851F08u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851F14u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851F20u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851F38u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851F44u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851F64u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851F6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851F84u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851F90u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851F9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851FA8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851FB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851FBCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851FC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08851FD4u, &recomp_unit_0077, "recomp_unit_0077");
}
} // namespace psprecomp
