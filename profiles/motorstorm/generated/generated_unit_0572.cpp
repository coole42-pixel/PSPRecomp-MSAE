#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0572[1022] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0,
    0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 13, 14, 0, 15, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 20,
    0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 27,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 31,
    0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 35, 36, 37, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 41,
    0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 45, 0, 46, 0, 0, 47, 48, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 49, 0, 0, 50, 0, 51, 0, 0, 52, 53, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 58, 59, 0,
    60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 68, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73,
    74, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0,
    80, 0, 0, 0, 81, 0, 0, 0, 82, 83, 0, 84, 0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 88, 0, 0, 89, 0, 0, 90, 0, 91, 0,
    0, 92, 93, 0, 94, 0, 95, 0, 96, 97, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 102, 0, 103, 104, 0, 105, 0, 106, 0, 107, 0, 0, 0, 108, 109, 110, 0, 111, 0, 0, 0, 112, 113, 0, 114, 0, 0, 0, 0, 0, 115,
    0, 0, 116, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 121, 0,
    0, 0, 122, 0, 0, 0, 0, 123, 124, 0, 0, 0, 125, 126, 127, 0, 0, 0, 128, 0, 129, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 132,
    0, 133, 134, 0, 135, 0, 0, 136, 137, 0, 138, 0, 0, 139, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 150, 0, 151, 0, 152, 0, 153, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 156, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 162, 163, 0, 0, 164, 0, 0, 0, 165, 0, 0, 166, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 173, 0, 0,
    0, 174, 175, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180,
    0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 186, 0, 187, 0,
    0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 194, 0, 0, 0,
    0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199,
    0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0, 205, 0, 0, 0, 206, 0,
    207, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 210, 0, 211, 0, 0, 212, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 215, 0, 0, 216, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 222, 0, 223, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 231, 0, 0, 232, 0, 0, 0, 233,
    0, 0, 234, 0, 235, 0, 236, 0, 237, 0, 238, 0, 239, 0, 240, 0, 241, 0, 242, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245,
};
void recomp_unit_0572_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A40000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0572[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A40000;
    case 2u: goto L_08A40010;
    case 3u: goto L_08A4001C;
    case 4u: goto L_08A40044;
    case 5u: goto L_08A40050;
    case 6u: goto L_08A40074;
    case 7u: goto L_08A400BC;
    case 8u: goto L_08A400C8;
    case 9u: goto L_08A400EC;
    case 10u: goto L_08A400F4;
    case 11u: goto L_08A40118;
    case 12u: goto L_08A40120;
    case 13u: goto L_08A40130;
    case 14u: goto L_08A40134;
    case 15u: goto L_08A4013C;
    case 16u: goto L_08A40144;
    case 17u: goto L_08A40150;
    case 18u: goto L_08A4016C;
    case 19u: goto L_08A40174;
    case 20u: goto L_08A4017C;
    case 21u: goto L_08A40188;
    case 22u: goto L_08A40194;
    case 23u: goto L_08A401B8;
    case 24u: goto L_08A401C4;
    case 25u: goto L_08A401E4;
    case 26u: goto L_08A401F8;
    case 27u: goto L_08A401FC;
    case 28u: goto L_08A40258;
    case 29u: goto L_08A40264;
    case 30u: goto L_08A40270;
    case 31u: goto L_08A4027C;
    case 32u: goto L_08A4028C;
    case 33u: goto L_08A402A0;
    case 34u: goto L_08A402A8;
    case 35u: goto L_08A402C0;
    case 36u: goto L_08A402C4;
    case 37u: goto L_08A402C8;
    case 38u: goto L_08A402D0;
    case 39u: goto L_08A402EC;
    case 40u: goto L_08A402F4;
    case 41u: goto L_08A402FC;
    case 42u: goto L_08A40318;
    case 43u: goto L_08A40324;
    case 44u: goto L_08A40338;
    case 45u: goto L_08A40344;
    case 46u: goto L_08A4034C;
    case 47u: goto L_08A40358;
    case 48u: goto L_08A4035C;
    case 49u: goto L_08A40384;
    case 50u: goto L_08A40390;
    case 51u: goto L_08A40398;
    case 52u: goto L_08A403A4;
    case 53u: goto L_08A403A8;
    case 54u: goto L_08A403BC;
    case 55u: goto L_08A403C4;
    case 56u: goto L_08A403D4;
    case 57u: goto L_08A403F0;
    case 58u: goto L_08A403F4;
    case 59u: goto L_08A403F8;
    case 60u: goto L_08A40400;
    case 61u: goto L_08A40410;
    case 62u: goto L_08A40428;
    case 63u: goto L_08A40434;
    case 64u: goto L_08A4043C;
    case 65u: goto L_08A40458;
    case 66u: goto L_08A40464;
    case 67u: goto L_08A40490;
    case 68u: goto L_08A4049C;
    case 69u: goto L_08A404A0;
    case 70u: goto L_08A404A8;
    case 71u: goto L_08A404D4;
    case 72u: goto L_08A404E0;
    case 73u: goto L_08A404FC;
    case 74u: goto L_08A40500;
    case 75u: goto L_08A4050C;
    case 76u: goto L_08A40518;
    case 77u: goto L_08A4054C;
    case 78u: goto L_08A40558;
    case 79u: goto L_08A40574;
    case 80u: goto L_08A40580;
    case 81u: goto L_08A40590;
    case 82u: goto L_08A405A0;
    case 83u: goto L_08A405A4;
    case 84u: goto L_08A405AC;
    case 85u: goto L_08A405B4;
    case 86u: goto L_08A405C0;
    case 87u: goto L_08A405D0;
    case 88u: goto L_08A405D8;
    case 89u: goto L_08A405E4;
    case 90u: goto L_08A405F0;
    case 91u: goto L_08A405F8;
    case 92u: goto L_08A40604;
    case 93u: goto L_08A40608;
    case 94u: goto L_08A40610;
    case 95u: goto L_08A40618;
    case 96u: goto L_08A40620;
    case 97u: goto L_08A40624;
    case 98u: goto L_08A40630;
    case 99u: goto L_08A40644;
    case 100u: goto L_08A4065C;
    case 101u: goto L_08A40670;
    case 102u: goto L_08A40684;
    case 103u: goto L_08A4068C;
    case 104u: goto L_08A40690;
    case 105u: goto L_08A40698;
    case 106u: goto L_08A406A0;
    case 107u: goto L_08A406A8;
    case 108u: goto L_08A406B8;
    case 109u: goto L_08A406BC;
    case 110u: goto L_08A406C0;
    case 111u: goto L_08A406C8;
    case 112u: goto L_08A406D8;
    case 113u: goto L_08A406DC;
    case 114u: goto L_08A406E4;
    case 115u: goto L_08A406FC;
    case 116u: goto L_08A40708;
    case 117u: goto L_08A4070C;
    case 118u: goto L_08A40758;
    case 119u: goto L_08A40764;
    case 120u: goto L_08A40770;
    case 121u: goto L_08A40778;
    case 122u: goto L_08A40788;
    case 123u: goto L_08A4079C;
    case 124u: goto L_08A407A0;
    case 125u: goto L_08A407B0;
    case 126u: goto L_08A407B4;
    case 127u: goto L_08A407B8;
    case 128u: goto L_08A407C8;
    case 129u: goto L_08A407D0;
    case 130u: goto L_08A407D8;
    case 131u: goto L_08A407E0;
    case 132u: goto L_08A407FC;
    case 133u: goto L_08A40804;
    case 134u: goto L_08A40808;
    case 135u: goto L_08A40810;
    case 136u: goto L_08A4081C;
    case 137u: goto L_08A40820;
    case 138u: goto L_08A40828;
    case 139u: goto L_08A40834;
    case 140u: goto L_08A40840;
    case 141u: goto L_08A40848;
    case 142u: goto L_08A408A8;
    case 143u: goto L_08A408CC;
    case 144u: goto L_08A408F4;
    case 145u: goto L_08A40930;
    case 146u: goto L_08A4096C;
    case 147u: goto L_08A40998;
    case 148u: goto L_08A409A0;
    case 149u: goto L_08A409A8;
    case 150u: goto L_08A409B0;
    case 151u: goto L_08A409B8;
    case 152u: goto L_08A409C0;
    case 153u: goto L_08A409C8;
    case 154u: goto L_08A409CC;
    case 155u: goto L_08A409D4;
    case 156u: goto L_08A40A04;
    case 157u: goto L_08A40A1C;
    case 158u: goto L_08A40A24;
    case 159u: goto L_08A40A54;
    case 160u: goto L_08A40A5C;
    case 161u: goto L_08A40A80;
    case 162u: goto L_08A40A90;
    case 163u: goto L_08A40A94;
    case 164u: goto L_08A40AA0;
    case 165u: goto L_08A40AB0;
    case 166u: goto L_08A40ABC;
    case 167u: goto L_08A40AC4;
    case 168u: goto L_08A40ACC;
    case 169u: goto L_08A40AD4;
    case 170u: goto L_08A40ADC;
    case 171u: goto L_08A40AE4;
    case 172u: goto L_08A40AEC;
    case 173u: goto L_08A40AF4;
    case 174u: goto L_08A40B04;
    case 175u: goto L_08A40B08;
    case 176u: goto L_08A40B0C;
    case 177u: goto L_08A40B24;
    case 178u: goto L_08A40B44;
    case 179u: goto L_08A40B4C;
    case 180u: goto L_08A40B7C;
    case 181u: goto L_08A40B88;
    case 182u: goto L_08A40BA8;
    case 183u: goto L_08A40BB0;
    case 184u: goto L_08A40BDC;
    case 185u: goto L_08A40BE8;
    case 186u: goto L_08A40BF0;
    case 187u: goto L_08A40BF8;
    case 188u: goto L_08A40C0C;
    case 189u: goto L_08A40C18;
    case 190u: goto L_08A40C2C;
    case 191u: goto L_08A40C38;
    case 192u: goto L_08A40C5C;
    case 193u: goto L_08A40C6C;
    case 194u: goto L_08A40C70;
    case 195u: goto L_08A40C8C;
    case 196u: goto L_08A40C98;
    case 197u: goto L_08A40CB0;
    case 198u: goto L_08A40CF0;
    case 199u: goto L_08A40CFC;
    case 200u: goto L_08A40D1C;
    case 201u: goto L_08A40D28;
    case 202u: goto L_08A40D4C;
    case 203u: goto L_08A40D54;
    case 204u: goto L_08A40D5C;
    case 205u: goto L_08A40D68;
    case 206u: goto L_08A40D78;
    case 207u: goto L_08A40D80;
    case 208u: goto L_08A40D90;
    case 209u: goto L_08A40D9C;
    case 210u: goto L_08A40DAC;
    case 211u: goto L_08A40DB4;
    case 212u: goto L_08A40DC0;
    case 213u: goto L_08A40DD0;
    case 214u: goto L_08A40DDC;
    case 215u: goto L_08A40DEC;
    case 216u: goto L_08A40DF8;
    case 217u: goto L_08A40E20;
    case 218u: goto L_08A40E38;
    case 219u: goto L_08A40E44;
    case 220u: goto L_08A40E58;
    case 221u: goto L_08A40E80;
    case 222u: goto L_08A40E8C;
    case 223u: goto L_08A40E94;
    case 224u: goto L_08A40E9C;
    case 225u: goto L_08A40EAC;
    case 226u: goto L_08A40EBC;
    case 227u: goto L_08A40F14;
    case 228u: goto L_08A40F20;
    case 229u: goto L_08A40F4C;
    case 230u: goto L_08A40F5C;
    case 231u: goto L_08A40F60;
    case 232u: goto L_08A40F6C;
    case 233u: goto L_08A40F7C;
    case 234u: goto L_08A40F88;
    case 235u: goto L_08A40F90;
    case 236u: goto L_08A40F98;
    case 237u: goto L_08A40FA0;
    case 238u: goto L_08A40FA8;
    case 239u: goto L_08A40FB0;
    case 240u: goto L_08A40FB8;
    case 241u: goto L_08A40FC0;
    case 242u: goto L_08A40FC8;
    case 243u: goto L_08A40FD4;
    case 244u: goto L_08A40FE4;
    case 245u: goto L_08A40FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A40000:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[31] = (0x08A40010u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_08A401C4;
L_08A40010:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4001C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    aot_gpr[31] = (0x08A40044u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_08A401C4;
L_08A40044:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40050:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    aot_gpr[3] = (aot_gpr[5] + 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    aot_gpr[31] = (0x08A40074u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    goto L_08A40464;
L_08A40074:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(0));
    aot_gpr[2] = (16383u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[9] & aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[8] & aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[9] << 2u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] >> 30u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[6]);
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[8]);
    aot_gpr[31] = (0x08A400BCu);
    aot_gpr[7] = (aot_gpr[2] + 0u);
    goto L_08A40194;
L_08A400BC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A400C8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (127u << 16u);
    aot_gpr[3] = (aot_gpr[3] | 65535u);
    aot_gpr[6] = (aot_gpr[2] >> 23u);
    aot_gpr[4] = (aot_gpr[2] >> 31u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[7] = (aot_gpr[2] & aot_gpr[3]);
      if (branch_taken) {
          goto L_08A40144;
      }
      goto L_08A400EC;
    }
L_08A400EC:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A4013C;
      }
      goto L_08A400F4;
    }
L_08A400F4:
    aot_gpr[2] = (16383u << 16u);
    aot_gpr[7] = (aot_gpr[7] << 7u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-126));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[7] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A40134;
      }
      goto L_08A40118;
    }
L_08A40118:
    aot_gpr[4] = (16383u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 65535u);
    goto L_08A40120;
L_08A40120:
    aot_gpr[7] = (aot_gpr[7] << 1u);
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A40120;
      }
      goto L_08A40130;
    }
L_08A40130:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    goto L_08A40134;
L_08A40134:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4013C:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40144:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[7] << 7u);
      if (branch_taken) {
          goto L_08A4016C;
      }
      goto L_08A40150;
    }
L_08A40150:
    aot_gpr[3] = (16384u << 16u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(-127));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08A4013C;
L_08A4016C:
    if (aot_gpr[7] != 0u) {
    aot_gpr[2] = (16u << 16u);
        goto L_08A4017C;
    }
    goto L_08A40174;
L_08A40174:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    goto L_08A4013C;
L_08A4017C:
    aot_gpr[2] = (aot_gpr[7] & aot_gpr[2]);
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
        goto L_08A40134;
    }
    goto L_08A40188;
L_08A40188:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08A40134;
L_08A40194:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[31] = (0x08A401B8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    goto L_08A406E4;
L_08A401B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A401C4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[9] = (0u + 0u);
      if (branch_taken) {
          goto L_08A40258;
      }
      goto L_08A401E4;
    }
L_08A401E4:
    aot_gpr[3] = (8u << 16u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(0));
    aot_gpr[10] = (aot_gpr[10] | aot_gpr[2]);
    aot_gpr[11] = (aot_gpr[11] | aot_gpr[3]);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(2047));
    goto L_08A401F8;
L_08A401F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08A401FC;
L_08A401FC:
    aot_gpr[6] = (15u << 16u);
    aot_gpr[3] = (65520u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 65535u);
    aot_gpr[6] = (aot_gpr[11] & aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[3]);
    aot_gpr[4] = (32783u << 16u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[9] & 2047u);
    aot_gpr[4] = (aot_gpr[4] | 65535u);
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] << 20u);
    aot_gpr[3] = (32767u << 16u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[3] | 65535u);
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[12] << 31u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40258:
    aot_gpr[2] = (aot_gpr[3] ^ 4u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(2047));
        goto L_08A403C4;
    }
    goto L_08A40264;
L_08A40264:
    aot_gpr[2] = (aot_gpr[3] ^ 2u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A403C4;
      }
      goto L_08A40270;
    }
L_08A40270:
    aot_gpr[2] = (aot_gpr[10] | aot_gpr[11]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A401FC;
      }
      goto L_08A4027C;
    }
L_08A4027C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[4]) < -1022 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[4]) < 1024 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A403BC;
      }
      goto L_08A4028C;
    }
L_08A4028C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1022));
    aot_gpr[13] = (aot_gpr[2] - aot_gpr[4]);
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[13]) < 57 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40324;
      }
      goto L_08A402A0;
    }
L_08A402A0:
    aot_gpr[10] = (0u + 0u);
    aot_gpr[11] = (0u + 0u);
    goto L_08A402A8;
L_08A402A8:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(0));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(255));
    aot_gpr[2] = (aot_gpr[10] & aot_gpr[2]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    aot_gpr[3] = (aot_gpr[11] & aot_gpr[3]);
      if (branch_taken) {
          goto L_08A402F4;
      }
      goto L_08A402C0;
    }
L_08A402C0:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(127));
    goto L_08A402C4;
L_08A402C4:
    aot_gpr[2] = (aot_gpr[10] < static_cast<std::uint32_t>(127) ? 1u : 0u);
    goto L_08A402C8;
L_08A402C8:
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[2]);
    aot_gpr[2] = (4095u << 16u);
    goto L_08A402D0;
L_08A402D0:
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[11] ? 1u : 0u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[10] >> 8u);
    aot_gpr[4] = (aot_gpr[11] << 24u);
    if (aot_gpr[2] != 0u) aot_gpr[9] = (aot_gpr[3]);
    aot_gpr[10] = (aot_gpr[10] | aot_gpr[4]);
    goto L_08A402EC;
L_08A402EC:
    aot_gpr[11] = (aot_gpr[11] >> 8u);
    goto L_08A401F8;
L_08A402F4:
    if (aot_gpr[3] != 0u) {
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(127));
        goto L_08A402C4;
    }
    goto L_08A402FC;
L_08A402FC:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(0));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[2] = (aot_gpr[10] & aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[11] & aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (4095u << 16u);
        goto L_08A402D0;
    }
    goto L_08A40318;
L_08A40318:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(128));
    aot_gpr[2] = (aot_gpr[10] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    goto L_08A402C8;
L_08A40324:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(0));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[13] << 26u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A40344;
      }
      goto L_08A40338;
    }
L_08A40338:
    aot_gpr[3] = (aot_gpr[4] << (aot_gpr[13] & 31u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_08A4035C;
      }
      goto L_08A40344;
    }
L_08A40344:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[3] = (aot_gpr[5] << (aot_gpr[13] & 31u));
      if (branch_taken) {
          goto L_08A40358;
      }
      goto L_08A4034C;
    }
L_08A4034C:
    aot_gpr[6] = (0u - aot_gpr[13]);
    aot_gpr[6] = (aot_gpr[4] >> (aot_gpr[6] & 31u));
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[6]);
    goto L_08A40358;
L_08A40358:
    aot_gpr[2] = (aot_gpr[4] << (aot_gpr[13] & 31u));
    goto L_08A4035C;
L_08A4035C:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[2] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[10] & aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[11] & aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[13] << 26u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[8]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A40390;
      }
      goto L_08A40384;
    }
L_08A40384:
    aot_gpr[6] = (aot_gpr[11] >> (aot_gpr[13] & 31u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08A403A8;
      }
      goto L_08A40390;
    }
L_08A40390:
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[6] = (aot_gpr[10] >> (aot_gpr[13] & 31u));
      if (branch_taken) {
          goto L_08A403A4;
      }
      goto L_08A40398;
    }
L_08A40398:
    aot_gpr[8] = (0u - aot_gpr[13]);
    aot_gpr[8] = (aot_gpr[11] << (aot_gpr[8] & 31u));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    goto L_08A403A4;
L_08A403A4:
    aot_gpr[7] = (aot_gpr[11] >> (aot_gpr[13] & 31u));
    goto L_08A403A8;
L_08A403A8:
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[10] = (aot_gpr[6] | aot_gpr[2]);
    aot_gpr[11] = (aot_gpr[7] | aot_gpr[5]);
    goto L_08A402A8;
L_08A403BC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(2047));
      if (branch_taken) {
          goto L_08A403D4;
      }
      goto L_08A403C4;
    }
L_08A403C4:
    aot_gpr[10] = (0u + 0u);
    aot_gpr[11] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08A401FC;
L_08A403D4:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(0));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(255));
    aot_gpr[6] = (aot_gpr[10] & aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(128));
    aot_gpr[7] = (aot_gpr[11] & aot_gpr[3]);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[9] = (aot_gpr[4] + static_cast<std::uint32_t>(1023));
      if (branch_taken) {
          goto L_08A40434;
      }
      goto L_08A403F0;
    }
L_08A403F0:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(127));
    goto L_08A403F4;
L_08A403F4:
    aot_gpr[2] = (aot_gpr[10] < static_cast<std::uint32_t>(127) ? 1u : 0u);
    goto L_08A403F8;
L_08A403F8:
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[2]);
    aot_gpr[2] = (8191u << 16u);
    goto L_08A40400;
L_08A40400:
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[11] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[10] = (aot_gpr[10] >> 8u);
        goto L_08A40428;
    }
    goto L_08A40410;
L_08A40410:
    aot_gpr[2] = (aot_gpr[11] << 31u);
    aot_gpr[10] = (aot_gpr[10] >> 1u);
    aot_gpr[10] = (aot_gpr[10] | aot_gpr[2]);
    aot_gpr[11] = (aot_gpr[11] >> 1u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[10] >> 8u);
    goto L_08A40428;
L_08A40428:
    aot_gpr[2] = (aot_gpr[11] << 24u);
    aot_gpr[10] = (aot_gpr[10] | aot_gpr[2]);
    goto L_08A402EC;
L_08A40434:
    if (aot_gpr[7] != 0u) {
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(127));
        goto L_08A403F4;
    }
    goto L_08A4043C;
L_08A4043C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(0));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[2] = (aot_gpr[10] & aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[11] & aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (8191u << 16u);
        goto L_08A40400;
    }
    goto L_08A40458;
L_08A40458:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(128));
    aot_gpr[2] = (aot_gpr[10] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    goto L_08A403F8;
L_08A40464:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (15u << 16u);
    aot_gpr[10] = (aot_gpr[5] + 0u);
    aot_gpr[7] = (aot_gpr[2] >> 20u);
    aot_gpr[5] = (aot_gpr[2] >> 31u);
    aot_gpr[3] = (aot_gpr[3] | 65535u);
    aot_gpr[7] = (aot_gpr[7] & 2047u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[2] & aot_gpr[3]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A4050C;
      }
      goto L_08A40490;
    }
L_08A40490:
    aot_gpr[2] = (aot_gpr[8] | aot_gpr[9]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[8] >> 24u);
      if (branch_taken) {
          goto L_08A404A8;
      }
      goto L_08A4049C;
    }
L_08A4049C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    goto L_08A404A0;
L_08A404A0:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A404A8:
    aot_gpr[4] = (4095u << 16u);
    aot_gpr[9] = (aot_gpr[9] << 8u);
    aot_gpr[9] = (aot_gpr[9] | aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] | 65535u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1022));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[9] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] << 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[3]);
      if (branch_taken) {
          goto L_08A40500;
      }
      goto L_08A404D4;
    }
L_08A404D4:
    aot_gpr[5] = (4095u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 65535u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1022));
    goto L_08A404E0;
L_08A404E0:
    aot_gpr[3] = (aot_gpr[8] >> 31u);
    aot_gpr[9] = (aot_gpr[9] << 1u);
    aot_gpr[9] = (aot_gpr[9] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[9] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] << 1u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A404E0;
      }
      goto L_08A404FC;
    }
L_08A404FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08A40500;
L_08A40500:
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4050C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2047));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[2];
    aot_gpr[6] = (aot_gpr[8] >> 24u);
      if (branch_taken) {
          goto L_08A4054C;
      }
      goto L_08A40518;
    }
L_08A40518:
    aot_gpr[3] = (aot_gpr[9] << 8u);
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[6]);
    aot_gpr[5] = (4096u << 16u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(0));
    aot_gpr[2] = (aot_gpr[8] << 8u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(-1023));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    goto L_08A404A0;
L_08A4054C:
    aot_gpr[2] = (aot_gpr[8] | aot_gpr[9]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A404A0;
      }
      goto L_08A40558;
    }
L_08A40558:
    aot_gpr[3] = (8u << 16u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(0));
    aot_gpr[2] = (aot_gpr[8] & aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[9] & aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), 0u);
        goto L_08A40500;
    }
    goto L_08A40574;
L_08A40574:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08A40500;
L_08A40580:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A405A0;
      }
      goto L_08A40590;
    }
L_08A40590:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (aot_gpr[3] ^ 4u);
        goto L_08A405AC;
    }
    goto L_08A405A0;
L_08A405A0:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    goto L_08A405A4;
L_08A405A4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A405AC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] ^ 4u);
      if (branch_taken) {
          goto L_08A405D0;
      }
      goto L_08A405B4;
    }
L_08A405B4:
    aot_gpr[2] = (aot_gpr[6] ^ 4u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (aot_gpr[3] ^ 4u);
        goto L_08A405D0;
    }
    goto L_08A405C0;
L_08A405C0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[3] - aot_gpr[2]);
    goto L_08A405A4;
L_08A405D0:
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
        goto L_08A40624;
    }
    goto L_08A405D8;
L_08A405D8:
    aot_gpr[2] = (aot_gpr[6] ^ 4u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08A40608;
    }
    goto L_08A405E4;
L_08A405E4:
    aot_gpr[2] = (aot_gpr[3] ^ 2u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[6] ^ 2u);
      if (branch_taken) {
          goto L_08A40618;
      }
      goto L_08A405F0;
    }
L_08A405F0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_08A405A4;
      }
      goto L_08A405F8;
    }
L_08A405F8:
    aot_gpr[2] = (aot_gpr[3] ^ 2u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (aot_gpr[6] ^ 2u);
        goto L_08A40618;
    }
    goto L_08A40604;
L_08A40604:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08A40608;
L_08A40608:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A40610;
L_08A40610:
    if (aot_gpr[3] == 0u) aot_gpr[4] = (aot_gpr[2]);
    goto L_08A405A4;
L_08A40618:
    if (aot_gpr[2] != 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
        goto L_08A40630;
    }
    goto L_08A40620;
L_08A40620:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    goto L_08A40624;
L_08A40624:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_08A40610;
L_08A40630:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[3];
    if (aot_gpr[6] == 0u) aot_gpr[4] = (aot_gpr[2]);
      if (branch_taken) {
          goto L_08A405A4;
      }
      goto L_08A40644;
    }
L_08A40644:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    if (aot_gpr[6] == 0u) aot_gpr[4] = (aot_gpr[2]);
      if (branch_taken) {
          goto L_08A405A4;
      }
      goto L_08A4065C;
    }
L_08A4065C:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    if (aot_gpr[6] == 0u) aot_gpr[4] = (aot_gpr[2]);
      if (branch_taken) {
          goto L_08A405A4;
      }
      goto L_08A40670;
    }
L_08A40670:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[8] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08A406DC;
    }
    goto L_08A40684;
L_08A40684:
    if (aot_gpr[8] == aot_gpr[4]) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
        goto L_08A406C8;
    }
    goto L_08A4068C;
L_08A4068C:
    aot_gpr[2] = (aot_gpr[8] < aot_gpr[4] ? 1u : 0u);
    goto L_08A40690;
L_08A40690:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
        goto L_08A406BC;
    }
    goto L_08A40698;
L_08A40698:
    if (aot_gpr[4] == aot_gpr[8]) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
        goto L_08A406A8;
    }
    goto L_08A406A0;
L_08A406A0:
    aot_gpr[4] = (0u + 0u);
    goto L_08A405A4;
L_08A406A8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (0u + 0u);
        goto L_08A405A4;
    }
    goto L_08A406B8;
L_08A406B8:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    goto L_08A406BC;
L_08A406BC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A406C0;
L_08A406C0:
    if (aot_gpr[6] == 0u) aot_gpr[4] = (aot_gpr[2]);
    goto L_08A405A4;
L_08A406C8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (aot_gpr[8] < aot_gpr[4] ? 1u : 0u);
        goto L_08A40690;
    }
    goto L_08A406D8;
L_08A406D8:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A406DC;
L_08A406DC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_08A406C0;
L_08A406E4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08A40758;
      }
      goto L_08A406FC;
    }
L_08A406FC:
    aot_gpr[2] = (16u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[2]);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(255));
    goto L_08A40708;
L_08A40708:
    aot_gpr[3] = (127u << 16u);
    goto L_08A4070C;
L_08A4070C:
    aot_gpr[2] = (65408u << 16u);
    aot_gpr[3] = (aot_gpr[3] | 65535u);
    aot_gpr[3] = (aot_gpr[5] & aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[2]);
    aot_gpr[5] = (32895u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[7] & 255u);
    aot_gpr[5] = (aot_gpr[5] | 65535u);
    aot_gpr[4] = (aot_gpr[4] << 23u);
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[5]);
    aot_gpr[2] = (32767u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[3] = (aot_gpr[8] << 31u);
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[3]);
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[6]);
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40758:
    aot_gpr[2] = (aot_gpr[3] ^ 4u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(255));
        goto L_08A40808;
    }
    goto L_08A40764;
L_08A40764:
    aot_gpr[2] = (aot_gpr[3] ^ 2u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (0u + 0u);
        goto L_08A40708;
    }
    goto L_08A40770;
L_08A40770:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (127u << 16u);
      if (branch_taken) {
          goto L_08A4070C;
      }
      goto L_08A40778;
    }
L_08A40778:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[4]) < -126 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[4]) < 128 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A407FC;
      }
      goto L_08A40788;
    }
L_08A40788:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-126));
    aot_gpr[4] = (aot_gpr[2] - aot_gpr[4]);
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[4]) < 26 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A407E0;
      }
      goto L_08A4079C;
    }
L_08A4079C:
    aot_gpr[5] = (0u + 0u);
    goto L_08A407A0;
L_08A407A0:
    aot_gpr[3] = (aot_gpr[5] & 127u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[2] = (aot_gpr[5] & 128u);
        goto L_08A407D0;
    }
    goto L_08A407B0;
L_08A407B0:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(63));
    goto L_08A407B4;
L_08A407B4:
    aot_gpr[2] = (16383u << 16u);
    goto L_08A407B8;
L_08A407B8:
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[2] != 0u) aot_gpr[7] = (aot_gpr[3]);
    goto L_08A407C8;
L_08A407C8:
    aot_gpr[5] = (aot_gpr[5] >> 7u);
    goto L_08A40708;
L_08A407D0:
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
        goto L_08A407B4;
    }
    goto L_08A407D8;
L_08A407D8:
    aot_gpr[2] = (16383u << 16u);
    goto L_08A407B8;
L_08A407E0:
    aot_gpr[2] = (aot_gpr[2] << (aot_gpr[4] & 31u));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[5] & aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[5] >> (aot_gpr[4] & 31u));
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[3] | aot_gpr[2]);
    goto L_08A407A0;
L_08A407FC:
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (aot_gpr[5] & 127u);
        goto L_08A40810;
    }
    goto L_08A40804;
L_08A40804:
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(255));
    goto L_08A40808;
L_08A40808:
    aot_gpr[5] = (0u + 0u);
    goto L_08A40708;
L_08A40810:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(127));
      if (branch_taken) {
          goto L_08A40834;
      }
      goto L_08A4081C;
    }
L_08A4081C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(63));
    goto L_08A40820;
L_08A40820:
    if (static_cast<std::int32_t>(aot_gpr[5]) >= 0) {
    aot_gpr[5] = (aot_gpr[5] >> 7u);
        goto L_08A40708;
    }
    goto L_08A40828;
L_08A40828:
    aot_gpr[5] = (aot_gpr[5] >> 1u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A407C8;
L_08A40834:
    aot_gpr[2] = (aot_gpr[5] & 128u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
        goto L_08A40820;
    }
    goto L_08A40840;
L_08A40840:
    // nop
    goto L_08A40820;
L_08A40848:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<14u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<15u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 3u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<15u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<14u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<14u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = std::fabs(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<15u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<15u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<14u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = std::fabs(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<14u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[14] = aot_fpr[17] + aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A409C0;
      }
      goto L_08A408A8;
    }
L_08A408A8:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_fpr[13] = aot_fpr[15] + aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[18] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A409B8;
      }
      goto L_08A408CC;
    }
L_08A408CC:
    aot_fpr[18] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[18] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[18] = fs * ft; }
    aot_fpr[18] = aot_fpr[13] + aot_fpr[18];
    ctx.set_fpu_condition((aot_fpr[19] <= aot_fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A409B0;
      }
      goto L_08A408F4;
    }
L_08A408F4:
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[3] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[3] = fs * ft; }
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[5] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[5] = fs * ft; }
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    { const float fs = aot_fpr[19]; const float ft = aot_fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[4] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[4] = fs * ft; }
    aot_fpr[3] = aot_fpr[3] + aot_fpr[5];
    aot_fpr[1] = aot_fpr[1] - aot_fpr[4];
    aot_fpr[1] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[1]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((aot_fpr[1] <= aot_fpr[3]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A409A8;
      }
      goto L_08A40930;
    }
L_08A40930:
    aot_fpr[1] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[3] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = aot_fpr[1]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    { const float fs = aot_fpr[19]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[19] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[19] = fs * ft; }
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[3] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[3] = fs * ft; }
    aot_fpr[19] = aot_fpr[19] - aot_fpr[0];
    aot_fpr[1] = aot_fpr[1] + aot_fpr[3];
    aot_fpr[19] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[19]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((aot_fpr[19] <= aot_fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A409A0;
      }
      goto L_08A4096C;
    }
L_08A4096C:
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] - aot_fpr[15];
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A409C8;
      }
      goto L_08A40998;
    }
L_08A40998:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A409CC;
      }
      goto L_08A409A0;
    }
L_08A409A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A409CC;
      }
      goto L_08A409A8;
    }
L_08A409A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A409CC;
      }
      goto L_08A409B0;
    }
L_08A409B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A409CC;
      }
      goto L_08A409B8;
    }
L_08A409B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A409CC;
      }
      goto L_08A409C0;
    }
L_08A409C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A409CC;
      }
      goto L_08A409C8;
    }
L_08A409C8:
    aot_gpr[2] = (0u | 1u);
    goto L_08A409CC;
L_08A409CC:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A409D4:
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<12u, 15u, 14u, 3u>();
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<12u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (46470u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 14269u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (13702u << 16u);
      if (branch_taken) {
          goto L_08A40A24;
      }
      goto L_08A40A04;
    }
L_08A40A04:
    aot_gpr[5] = (aot_gpr[5] | 14269u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A40A24;
      }
      goto L_08A40A1C;
    }
L_08A40A1C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A40A54;
      }
      goto L_08A40A24;
    }
L_08A40A24:
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<12u, 15u, 14u, 3u>();
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<12u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<12u, 15u, 14u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<12u>());
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    aot_fpr[12] = aot_fpr[13] / aot_fpr[12];
    aot_gpr[2] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08A40A54;
L_08A40A54:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40A5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[16] = (0u | 2u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-14756)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A40B0C;
      }
      goto L_08A40A80;
    }
L_08A40A80:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-14756)));
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(-14756));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[17] = (aot_gpr[8] | 0u);
    goto L_08A40A90;
L_08A40A90:
    aot_gpr[25] = (aot_gpr[6] | 0u);
    goto L_08A40A94;
L_08A40A94:
    { const std::uint32_t ll_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      ctx.ll_address = ll_address;
      ctx.ll_reserved = true;
      aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(ll_address)); }
    { const bool branch_taken = aot_gpr[8] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A40AB0;
      }
      goto L_08A40AA0;
    }
L_08A40AA0:
    aot_gpr[24] = (aot_gpr[25] | 0u);
    { const std::uint32_t sc_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      const bool sc_reserved = ctx.ll_reserved && ctx.ll_address == sc_address;
      if (sc_reserved) PSPRECOMP_AOT_STORE32(sc_address, aot_gpr[24]);
      ctx.ll_reserved = false;
      aot_gpr[24] = (sc_reserved ? 1u : 0u); }
    { const bool branch_taken = aot_gpr[24] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40A94;
      }
      goto L_08A40AB0;
    }
L_08A40AB0:
    rt.memory().memory_barrier();
    if (aot_gpr[17] != aot_gpr[8]) {
    aot_gpr[17] = (aot_gpr[8] | 0u);
        goto L_08A40A90;
    }
    goto L_08A40ABC;
L_08A40ABC:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A40ACC;
      }
      goto L_08A40AC4;
    }
L_08A40AC4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-14756), aot_gpr[16]);
      if (branch_taken) {
          goto L_08A40B0C;
      }
      goto L_08A40ACC;
    }
L_08A40ACC:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A40AF4;
      }
      goto L_08A40AD4;
    }
L_08A40AD4:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A40B0C;
      }
      goto L_08A40ADC;
    }
L_08A40ADC:
    aot_gpr[31] = (0x08A40AE4u);
    aot_gpr[4] = (0u | 1u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_08A40AE4:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A40ADC;
      }
      goto L_08A40AEC;
    }
L_08A40AEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40B0C;
      }
      goto L_08A40AF4;
    }
L_08A40AF4:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-14760)));
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40B08;
      }
      goto L_08A40B04;
    }
L_08A40B04:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-14760), aot_gpr[4]);
    goto L_08A40B08;
L_08A40B08:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-14756), aot_gpr[16]);
    goto L_08A40B0C;
L_08A40B0C:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40B24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-14760)));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A40B4C;
      }
      goto L_08A40B44;
    }
L_08A40B44:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A40B7C;
      }
      goto L_08A40B4C;
    }
L_08A40B4C:
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (0u | 3u);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    jump_target = aot_gpr[10];
    aot_gpr[31] = (0x08A40B7Cu);
    aot_gpr[8] = (aot_gpr[9] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A40B7Cu) goto L_08A40B7C;
    return;
L_08A40B7C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40B88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-14760)));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A40BDC;
      }
      goto L_08A40BA8;
    }
L_08A40BA8:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[8] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A40BDC;
      }
      goto L_08A40BB0;
    }
L_08A40BB0:
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (0u | 3u);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    jump_target = aot_gpr[10];
    aot_gpr[31] = (0x08A40BDCu);
    aot_gpr[8] = (aot_gpr[9] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A40BDCu) goto L_08A40BDC;
    return;
L_08A40BDC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40BE8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40BF0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40BF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[31] = (0x08A40C0Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27664));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 164u, 0x08A4291Cu>(ctx, &aot_mem) && ctx.pc == 0x08A40C0Cu) goto L_08A40C0C;
    return;
L_08A40C0C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40C18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[31] = (0x08A40C2Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27664));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 166u, 0x08A42978u>(ctx, &aot_mem) && ctx.pc == 0x08A40C2Cu) goto L_08A40C2C;
    return;
L_08A40C2C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40C38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-272));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[31]);
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A40C5Cu);
    aot_gpr[5] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 61u, 0x08A392BCu>(ctx, &aot_mem) && ctx.pc == 0x08A40C5Cu) goto L_08A40C5C;
    return;
L_08A40C5C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 257 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40C70;
      }
      goto L_08A40C6C;
    }
L_08A40C6C:
    aot_gpr[16] = (0u | 256u);
    goto L_08A40C70;
L_08A40C70:
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-16724)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A40C8Cu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 223u, 0x08A46DB0u>(ctx, &aot_mem) && ctx.pc == 0x08A40C8Cu) goto L_08A40C8C;
    return;
L_08A40C8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-16724)));
    aot_gpr[31] = (0x08A40C98u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 103u, 0x08A37910u>(ctx, &aot_mem) && ctx.pc == 0x08A40C98u) goto L_08A40C98;
    return;
L_08A40C98:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40CB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[11]);
    aot_gpr[5] = (0u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08A40CF0u);
    // nop
    goto L_08A40C38;
L_08A40CF0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40CFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08A40D1Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10880));
    goto L_08A40CB0;
L_08A40D1C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40D28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A40D78;
      }
      goto L_08A40D4C;
    }
L_08A40D4C:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A40D78;
      }
      goto L_08A40D54;
    }
L_08A40D54:
    aot_gpr[31] = (0x08A40D5Cu);
    // nop
    ctx.pc = 0x08A5B0D4u;
    return;
L_08A40D5C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A40D78;
      }
      goto L_08A40D68;
    }
L_08A40D68:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10472));
    aot_gpr[31] = (0x08A40D78u);
    aot_gpr[5] = (0u | 70u);
    goto L_08A40CFC;
L_08A40D78:
    aot_gpr[31] = (0x08A40D80u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 47u, 0x08A4229Cu>(ctx, &aot_mem) && ctx.pc == 0x08A40D80u) goto L_08A40D80;
    return;
L_08A40D80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08A40D90u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5B14Cu;
    return;
L_08A40D90:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A40DAC;
      }
      goto L_08A40D9C;
    }
L_08A40D9C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10472));
    aot_gpr[31] = (0x08A40DACu);
    aot_gpr[5] = (0u | 74u);
    goto L_08A40CFC;
L_08A40DAC:
    aot_gpr[31] = (0x08A40DB4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08A5B014u;
    return;
L_08A40DB4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A40DD0;
      }
      goto L_08A40DC0;
    }
L_08A40DC0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10472));
    aot_gpr[31] = (0x08A40DD0u);
    aot_gpr[5] = (0u | 76u);
    goto L_08A40CFC;
L_08A40DD0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40DEC;
      }
      goto L_08A40DDC;
    }
L_08A40DDC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A40DECu);
    aot_gpr[6] = (0u | 0u);
    goto L_08A40B88;
L_08A40DEC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40DF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A40E20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A40E20u) goto L_08A40E20;
    return;
L_08A40E20:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(79), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40E44;
      }
      goto L_08A40E38;
    }
L_08A40E38:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A40E44u);
    aot_gpr[5] = (0u | 1u);
    goto L_08A40D28;
L_08A40E44:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40E58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10492));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x08A40E80u);
    aot_gpr[8] = (0u | 0u);
    ctx.pc = 0x08A5AFC4u;
    return;
L_08A40E80:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A40E94;
      }
      goto L_08A40E8C;
    }
L_08A40E8C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A40EAC;
      }
      goto L_08A40E94;
    }
L_08A40E94:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A40EAC;
      }
      goto L_08A40E9C;
    }
L_08A40E9C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10472));
    aot_gpr[31] = (0x08A40EACu);
    aot_gpr[5] = (0u | 176u);
    goto L_08A40CFC;
L_08A40EAC:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(216));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A40EBCu);
    aot_gpr[6] = (0u | 192u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A40EBCu) goto L_08A40EBC;
    return;
L_08A40EBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(212), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(77))))));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(79), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(82));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A40F14u);
    aot_gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A40F14u) goto L_08A40F14;
    return;
L_08A40F14:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A40F20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[17] = (0u | 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-14740)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0573_entry, 573u, 4u, 0x08A41050u>(ctx, &aot_mem); return;
      }
      goto L_08A40F4C;
    }
L_08A40F4C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-14740)));
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(-14740));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_08A40F5C;
L_08A40F5C:
    aot_gpr[25] = (aot_gpr[4] | 0u);
    goto L_08A40F60;
L_08A40F60:
    { const std::uint32_t ll_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      ctx.ll_address = ll_address;
      ctx.ll_reserved = true;
      aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(ll_address)); }
    { const bool branch_taken = aot_gpr[6] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A40F7C;
      }
      goto L_08A40F6C;
    }
L_08A40F6C:
    aot_gpr[24] = (aot_gpr[25] | 0u);
    { const std::uint32_t sc_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      const bool sc_reserved = ctx.ll_reserved && ctx.ll_address == sc_address;
      if (sc_reserved) PSPRECOMP_AOT_STORE32(sc_address, aot_gpr[24]);
      ctx.ll_reserved = false;
      aot_gpr[24] = (sc_reserved ? 1u : 0u); }
    { const bool branch_taken = aot_gpr[24] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A40F60;
      }
      goto L_08A40F7C;
    }
L_08A40F7C:
    rt.memory().memory_barrier();
    if (aot_gpr[16] != aot_gpr[6]) {
    aot_gpr[16] = (aot_gpr[6] | 0u);
        goto L_08A40F5C;
    }
    goto L_08A40F88;
L_08A40F88:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A40F98;
      }
      goto L_08A40F90;
    }
L_08A40F90:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-14740), aot_gpr[17]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0573_entry, 573u, 4u, 0x08A41050u>(ctx, &aot_mem); return;
      }
      goto L_08A40F98;
    }
L_08A40F98:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A40FC0;
      }
      goto L_08A40FA0;
    }
L_08A40FA0:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[17];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0573_entry, 573u, 4u, 0x08A41050u>(ctx, &aot_mem); return;
      }
      goto L_08A40FA8;
    }
L_08A40FA8:
    aot_gpr[31] = (0x08A40FB0u);
    aot_gpr[4] = (0u | 1u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_08A40FB0:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A40FA8;
      }
      goto L_08A40FB8;
    }
L_08A40FB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0573_entry, 573u, 4u, 0x08A41050u>(ctx, &aot_mem); return;
      }
      goto L_08A40FC0;
    }
L_08A40FC0:
    aot_gpr[31] = (0x08A40FC8u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 77u, 0x08A42478u>(ctx, &aot_mem) && ctx.pc == 0x08A40FC8u) goto L_08A40FC8;
    return;
L_08A40FC8:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A40FD4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 99u, 0x08A425F4u>(ctx, &aot_mem) && ctx.pc == 0x08A40FD4u) goto L_08A40FD4;
    return;
L_08A40FD4:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27664));
    aot_gpr[31] = (0x08A40FE4u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 78u, 0x08A4249Cu>(ctx, &aot_mem) && ctx.pc == 0x08A40FE4u) goto L_08A40FE4;
    return;
L_08A40FE4:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27816));
    aot_gpr[31] = (0x08A40FF4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 78u, 0x08A4249Cu>(ctx, &aot_mem) && ctx.pc == 0x08A40FF4u) goto L_08A40FF4;
    return;
L_08A40FF4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-26492));
    aot_gpr[19] = (2216u << 16u);
    ctx.pc = 0x08A41000u; return;
}

void recomp_unit_0572(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0572_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_572(Runtime &runtime) {
    runtime.register_generated_unit(572u, 0x08A40000u, 4096u, &recomp_unit_0572, &recomp_unit_0572_entry);
    runtime.register_function(0x08A40000u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40010u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A4001Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40044u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40050u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40074u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A400BCu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A400C8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A400ECu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A400F4u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40118u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40120u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40130u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40134u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A4013Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40144u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40150u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A4016Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40174u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A4017Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40188u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40194u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A401B8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A401C4u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A401E4u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A401F8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A401FCu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40258u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40264u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40270u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A4027Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A4028Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A402A0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A402A8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A402C0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A402C4u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A402C8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A402D0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A402ECu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A402F4u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A402FCu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40318u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40324u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40338u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40344u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A4034Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40358u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A4035Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40384u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40390u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40398u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A403A4u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A403A8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A403BCu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A403C4u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A403D4u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A403F0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A403F4u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A403F8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40400u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40410u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40428u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40434u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A4043Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40458u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40464u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40490u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A4049Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A404A0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A404A8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A404D4u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A404E0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A404FCu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40500u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A4050Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40518u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A4054Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40558u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40574u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40580u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40590u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A405A0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A405A4u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A405ACu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A405B4u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A405C0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A405D0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A405D8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A405E4u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A405F0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A405F8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40604u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40608u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40610u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40618u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40620u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40624u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40630u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40644u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A4065Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40670u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40684u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A4068Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40690u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40698u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A406A0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A406A8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A406B8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A406BCu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A406C0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A406C8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A406D8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A406DCu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A406E4u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A406FCu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40708u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A4070Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40758u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40764u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40770u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40778u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40788u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A4079Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A407A0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A407B0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A407B4u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A407B8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A407C8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A407D0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A407D8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A407E0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A407FCu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40804u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40808u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40810u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A4081Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40820u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40828u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40834u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40840u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40848u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A408A8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A408CCu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A408F4u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40930u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A4096Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40998u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A409A0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A409A8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A409B0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A409B8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A409C0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A409C8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A409CCu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A409D4u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40A04u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40A1Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40A24u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40A54u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40A5Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40A80u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40A90u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40A94u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40AA0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40AB0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40ABCu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40AC4u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40ACCu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40AD4u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40ADCu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40AE4u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40AECu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40AF4u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40B04u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40B08u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40B0Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40B24u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40B44u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40B4Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40B7Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40B88u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40BA8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40BB0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40BDCu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40BE8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40BF0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40BF8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40C0Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40C18u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40C2Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40C38u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40C5Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40C6Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40C70u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40C8Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40C98u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40CB0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40CF0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40CFCu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40D1Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40D28u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40D4Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40D54u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40D5Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40D68u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40D78u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40D80u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40D90u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40D9Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40DACu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40DB4u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40DC0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40DD0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40DDCu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40DECu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40DF8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40E20u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40E38u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40E44u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40E58u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40E80u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40E8Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40E94u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40E9Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40EACu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40EBCu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40F14u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40F20u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40F4Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40F5Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40F60u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40F6Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40F7Cu, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40F88u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40F90u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40F98u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40FA0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40FA8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40FB0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40FB8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40FC0u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40FC8u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40FD4u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40FE4u, &recomp_unit_0572, "recomp_unit_0572");
    runtime.register_function(0x08A40FF4u, &recomp_unit_0572, "recomp_unit_0572");
}
} // namespace psprecomp
