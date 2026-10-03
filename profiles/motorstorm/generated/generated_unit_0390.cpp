#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0390[1021] = {
    1, 2, 0, 3, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 8, 9, 0, 10, 0, 11, 0, 12, 0, 0, 13, 0, 0, 14, 0, 15, 0, 16, 0, 17, 0, 18, 0, 0, 0, 19, 0, 0, 20,
    21, 0, 22, 0, 0, 23, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 27, 0, 28, 0, 0, 29, 0,
    0, 30, 0, 31, 0, 32, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 36, 0, 0, 0, 37, 0, 0, 38, 0, 0, 39,
    0, 0, 0, 40, 0, 41, 0, 0, 42, 0, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0,
    0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 56, 0, 57, 0, 0, 58, 0,
    0, 0, 0, 59, 0, 0, 60, 0, 61, 0, 62, 63, 0, 0, 64, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 70, 71, 0, 72, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 75, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 81, 0,
    82, 0, 83, 0, 84, 0, 85, 86, 0, 87, 88, 0, 0, 0, 89, 0, 0, 90, 91, 0, 92, 0, 0, 93, 94, 0, 0, 0, 0, 0, 95, 0,
    0, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100, 0, 101, 0, 102, 0, 0, 103, 0, 104, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0, 0, 108,
    0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0,
    0, 0, 118, 0, 119, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 0, 123, 0, 124, 0, 125, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0,
    0, 0, 128, 129, 0, 130, 0, 0, 131, 0, 0, 132, 133, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 137, 0, 0, 0, 0, 138,
    0, 139, 0, 140, 0, 141, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0,
    152, 0, 0, 153, 0, 154, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    160, 161, 0, 0, 162, 0, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 174, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 180, 181, 0, 182, 0, 183, 0, 0, 0, 184, 185, 0, 0, 186, 0, 187, 0, 0, 188,
    189, 0, 190, 0, 0, 191, 0, 192, 0, 0, 0, 193, 0, 194, 0, 195, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 199, 0, 0, 0, 0, 200, 0, 201, 0, 0, 202, 0, 0, 203, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 212, 213, 0, 214, 0, 215, 0, 216,
    0, 0, 217, 0, 218, 219, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223,
    0, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 227, 228, 0, 229, 230, 0, 231, 0, 0, 232, 0, 233, 0, 0, 234, 0, 0, 235, 0, 236, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 239, 0, 0, 240, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 243,
};
void recomp_unit_0390_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0898A000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0390[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0898A000;
    case 2u: goto L_0898A004;
    case 3u: goto L_0898A00C;
    case 4u: goto L_0898A020;
    case 5u: goto L_0898A02C;
    case 6u: goto L_0898A048;
    case 7u: goto L_0898A050;
    case 8u: goto L_0898A08C;
    case 9u: goto L_0898A090;
    case 10u: goto L_0898A098;
    case 11u: goto L_0898A0A0;
    case 12u: goto L_0898A0A8;
    case 13u: goto L_0898A0B4;
    case 14u: goto L_0898A0C0;
    case 15u: goto L_0898A0C8;
    case 16u: goto L_0898A0D0;
    case 17u: goto L_0898A0D8;
    case 18u: goto L_0898A0E0;
    case 19u: goto L_0898A0F0;
    case 20u: goto L_0898A0FC;
    case 21u: goto L_0898A100;
    case 22u: goto L_0898A108;
    case 23u: goto L_0898A114;
    case 24u: goto L_0898A120;
    case 25u: goto L_0898A130;
    case 26u: goto L_0898A160;
    case 27u: goto L_0898A164;
    case 28u: goto L_0898A16C;
    case 29u: goto L_0898A178;
    case 30u: goto L_0898A184;
    case 31u: goto L_0898A18C;
    case 32u: goto L_0898A194;
    case 33u: goto L_0898A198;
    case 34u: goto L_0898A1C4;
    case 35u: goto L_0898A1CC;
    case 36u: goto L_0898A1D4;
    case 37u: goto L_0898A1E4;
    case 38u: goto L_0898A1F0;
    case 39u: goto L_0898A1FC;
    case 40u: goto L_0898A20C;
    case 41u: goto L_0898A214;
    case 42u: goto L_0898A220;
    case 43u: goto L_0898A22C;
    case 44u: goto L_0898A234;
    case 45u: goto L_0898A23C;
    case 46u: goto L_0898A254;
    case 47u: goto L_0898A264;
    case 48u: goto L_0898A26C;
    case 49u: goto L_0898A2A8;
    case 50u: goto L_0898A2B4;
    case 51u: goto L_0898A2B8;
    case 52u: goto L_0898A2EC;
    case 53u: goto L_0898A30C;
    case 54u: goto L_0898A348;
    case 55u: goto L_0898A358;
    case 56u: goto L_0898A364;
    case 57u: goto L_0898A36C;
    case 58u: goto L_0898A378;
    case 59u: goto L_0898A38C;
    case 60u: goto L_0898A398;
    case 61u: goto L_0898A3A0;
    case 62u: goto L_0898A3A8;
    case 63u: goto L_0898A3AC;
    case 64u: goto L_0898A3B8;
    case 65u: goto L_0898A3C0;
    case 66u: goto L_0898A3C8;
    case 67u: goto L_0898A3D0;
    case 68u: goto L_0898A3D8;
    case 69u: goto L_0898A3E0;
    case 70u: goto L_0898A3E8;
    case 71u: goto L_0898A3EC;
    case 72u: goto L_0898A3F4;
    case 73u: goto L_0898A410;
    case 74u: goto L_0898A41C;
    case 75u: goto L_0898A428;
    case 76u: goto L_0898A42C;
    case 77u: goto L_0898A434;
    case 78u: goto L_0898A458;
    case 79u: goto L_0898A464;
    case 80u: goto L_0898A470;
    case 81u: goto L_0898A478;
    case 82u: goto L_0898A480;
    case 83u: goto L_0898A488;
    case 84u: goto L_0898A490;
    case 85u: goto L_0898A498;
    case 86u: goto L_0898A49C;
    case 87u: goto L_0898A4A4;
    case 88u: goto L_0898A4A8;
    case 89u: goto L_0898A4B8;
    case 90u: goto L_0898A4C4;
    case 91u: goto L_0898A4C8;
    case 92u: goto L_0898A4D0;
    case 93u: goto L_0898A4DC;
    case 94u: goto L_0898A4E0;
    case 95u: goto L_0898A4F8;
    case 96u: goto L_0898A508;
    case 97u: goto L_0898A510;
    case 98u: goto L_0898A518;
    case 99u: goto L_0898A520;
    case 100u: goto L_0898A528;
    case 101u: goto L_0898A530;
    case 102u: goto L_0898A538;
    case 103u: goto L_0898A544;
    case 104u: goto L_0898A54C;
    case 105u: goto L_0898A554;
    case 106u: goto L_0898A560;
    case 107u: goto L_0898A570;
    case 108u: goto L_0898A57C;
    case 109u: goto L_0898A588;
    case 110u: goto L_0898A590;
    case 111u: goto L_0898A5B4;
    case 112u: goto L_0898A630;
    case 113u: goto L_0898A63C;
    case 114u: goto L_0898A648;
    case 115u: goto L_0898A6C0;
    case 116u: goto L_0898A6C8;
    case 117u: goto L_0898A76C;
    case 118u: goto L_0898A788;
    case 119u: goto L_0898A790;
    case 120u: goto L_0898A798;
    case 121u: goto L_0898A7A4;
    case 122u: goto L_0898A7B0;
    case 123u: goto L_0898A7C0;
    case 124u: goto L_0898A7C8;
    case 125u: goto L_0898A7D0;
    case 126u: goto L_0898A7D8;
    case 127u: goto L_0898A7E4;
    case 128u: goto L_0898A808;
    case 129u: goto L_0898A80C;
    case 130u: goto L_0898A814;
    case 131u: goto L_0898A820;
    case 132u: goto L_0898A82C;
    case 133u: goto L_0898A830;
    case 134u: goto L_0898A838;
    case 135u: goto L_0898A848;
    case 136u: goto L_0898A8E4;
    case 137u: goto L_0898A8E8;
    case 138u: goto L_0898A8FC;
    case 139u: goto L_0898A904;
    case 140u: goto L_0898A90C;
    case 141u: goto L_0898A914;
    case 142u: goto L_0898A920;
    case 143u: goto L_0898A930;
    case 144u: goto L_0898A940;
    case 145u: goto L_0898A958;
    case 146u: goto L_0898A968;
    case 147u: goto L_0898A998;
    case 148u: goto L_0898A9A0;
    case 149u: goto L_0898A9B8;
    case 150u: goto L_0898A9C8;
    case 151u: goto L_0898A9F8;
    case 152u: goto L_0898AA00;
    case 153u: goto L_0898AA0C;
    case 154u: goto L_0898AA14;
    case 155u: goto L_0898AA1C;
    case 156u: goto L_0898AA28;
    case 157u: goto L_0898AA34;
    case 158u: goto L_0898AA4C;
    case 159u: goto L_0898AA58;
    case 160u: goto L_0898AA80;
    case 161u: goto L_0898AA84;
    case 162u: goto L_0898AA90;
    case 163u: goto L_0898AAA0;
    case 164u: goto L_0898AAAC;
    case 165u: goto L_0898AAB8;
    case 166u: goto L_0898AAC0;
    case 167u: goto L_0898ABB0;
    case 168u: goto L_0898ABD4;
    case 169u: goto L_0898ABD8;
    case 170u: goto L_0898ABE0;
    case 171u: goto L_0898AC14;
    case 172u: goto L_0898AC2C;
    case 173u: goto L_0898AC40;
    case 174u: goto L_0898AC48;
    case 175u: goto L_0898AC50;
    case 176u: goto L_0898AC5C;
    case 177u: goto L_0898AC6C;
    case 178u: goto L_0898ACA0;
    case 179u: goto L_0898ACA8;
    case 180u: goto L_0898ACB4;
    case 181u: goto L_0898ACB8;
    case 182u: goto L_0898ACC0;
    case 183u: goto L_0898ACC8;
    case 184u: goto L_0898ACD8;
    case 185u: goto L_0898ACDC;
    case 186u: goto L_0898ACE8;
    case 187u: goto L_0898ACF0;
    case 188u: goto L_0898ACFC;
    case 189u: goto L_0898AD00;
    case 190u: goto L_0898AD08;
    case 191u: goto L_0898AD14;
    case 192u: goto L_0898AD1C;
    case 193u: goto L_0898AD2C;
    case 194u: goto L_0898AD34;
    case 195u: goto L_0898AD3C;
    case 196u: goto L_0898AD48;
    case 197u: goto L_0898AD58;
    case 198u: goto L_0898AD80;
    case 199u: goto L_0898AD88;
    case 200u: goto L_0898AD9C;
    case 201u: goto L_0898ADA4;
    case 202u: goto L_0898ADB0;
    case 203u: goto L_0898ADBC;
    case 204u: goto L_0898ADC0;
    case 205u: goto L_0898ADD8;
    case 206u: goto L_0898AE00;
    case 207u: goto L_0898AE08;
    case 208u: goto L_0898AE34;
    case 209u: goto L_0898AE40;
    case 210u: goto L_0898AE4C;
    case 211u: goto L_0898AE58;
    case 212u: goto L_0898AE60;
    case 213u: goto L_0898AE64;
    case 214u: goto L_0898AE6C;
    case 215u: goto L_0898AE74;
    case 216u: goto L_0898AE7C;
    case 217u: goto L_0898AE88;
    case 218u: goto L_0898AE90;
    case 219u: goto L_0898AE94;
    case 220u: goto L_0898AE9C;
    case 221u: goto L_0898AEA4;
    case 222u: goto L_0898AEE4;
    case 223u: goto L_0898AEFC;
    case 224u: goto L_0898AF0C;
    case 225u: goto L_0898AF18;
    case 226u: goto L_0898AF24;
    case 227u: goto L_0898AF2C;
    case 228u: goto L_0898AF30;
    case 229u: goto L_0898AF38;
    case 230u: goto L_0898AF3C;
    case 231u: goto L_0898AF44;
    case 232u: goto L_0898AF50;
    case 233u: goto L_0898AF58;
    case 234u: goto L_0898AF64;
    case 235u: goto L_0898AF70;
    case 236u: goto L_0898AF78;
    case 237u: goto L_0898AF90;
    case 238u: goto L_0898AFAC;
    case 239u: goto L_0898AFB0;
    case 240u: goto L_0898AFBC;
    case 241u: goto L_0898AFC0;
    case 242u: goto L_0898AFE8;
    case 243u: goto L_0898AFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0898A000:
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    goto L_0898A004;
L_0898A004:
    aot_gpr[31] = (0x0898A00Cu);
    aot_gpr[4] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 162u, 0x08992A80u>(ctx, &aot_mem) && ctx.pc == 0x0898A00Cu) goto L_0898A00C;
    return;
L_0898A00C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[17] = (0u + 0u);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[16] = (aot_gpr[3] + static_cast<std::uint32_t>(164));
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(127));
    goto L_0898A020;
L_0898A020:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898A090;
      }
      goto L_0898A02C;
    }
L_0898A02C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-30000));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_0898A090;
      }
      goto L_0898A048;
    }
L_0898A048:
    aot_gpr[31] = (0x0898A050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 110u, 0x0898F700u>(ctx, &aot_mem) && ctx.pc == 0x0898A050u) goto L_0898A050;
    return;
L_0898A050:
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(3), aot_gpr[3]));
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(7), aot_gpr[2]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[3]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(13));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-26192)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x0898A08Cu);
    aot_gpr[6] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898A08Cu) goto L_0898A08C;
    return;
L_0898A08C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    goto L_0898A090;
L_0898A090:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[19];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0898A020;
      }
      goto L_0898A098;
    }
L_0898A098:
    aot_gpr[31] = (0x0898A0A0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0389_entry, 389u, 201u, 0x08989B50u>(ctx, &aot_mem) && ctx.pc == 0x0898A0A0u) goto L_0898A0A0;
    return;
L_0898A0A0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898A198;
      }
      goto L_0898A0A8;
    }
L_0898A0A8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2800)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A0C8;
      }
      goto L_0898A0B4;
    }
L_0898A0B4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(156)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898A0C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898A0C0u) goto L_0898A0C0;
    return;
L_0898A0C0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898A198;
      }
      goto L_0898A0C8;
    }
L_0898A0C8:
    aot_gpr[31] = (0x0898A0D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 203u, 0x08991D98u>(ctx, &aot_mem) && ctx.pc == 0x0898A0D0u) goto L_0898A0D0;
    return;
L_0898A0D0:
    aot_gpr[31] = (0x0898A0D8u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898A0D8u) goto L_0898A0D8;
    return;
L_0898A0D8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898A198;
      }
      goto L_0898A0E0;
    }
L_0898A0E0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4232)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A18C;
      }
      goto L_0898A0F0;
    }
L_0898A0F0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(1108)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0898A114;
      }
      goto L_0898A0FC;
    }
L_0898A0FC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1316)));
    goto L_0898A100;
L_0898A100:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[17] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_0898A18C;
      }
      goto L_0898A108;
    }
L_0898A108:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(1108)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1316)));
        goto L_0898A100;
    }
    goto L_0898A114;
L_0898A114:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1112));
    aot_gpr[31] = (0x0898A120u);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 172u, 0x08992B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A120u) goto L_0898A120;
    return;
L_0898A120:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(501) ? 1u : 0u);
    if (aot_gpr[3] != 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1316)));
        goto L_0898A100;
    }
    goto L_0898A130;
L_0898A130:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1072), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1196)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1312)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_0898A234;
      }
      goto L_0898A160;
    }
L_0898A160:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1192)));
    goto L_0898A164;
L_0898A164:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898A16Cu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898A16Cu) goto L_0898A16C;
    return;
L_0898A16C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1128)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(1108), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0898A214;
      }
      goto L_0898A178;
    }
L_0898A178:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x0898A184u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1316)));
    if (rt.invoke_chained_direct<&recomp_unit_0389_entry, 389u, 124u, 0x089896D8u>(ctx, &aot_mem) && ctx.pc == 0x0898A184u) goto L_0898A184;
    return;
L_0898A184:
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[17] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_0898A108;
      }
      goto L_0898A18C;
    }
L_0898A18C:
    aot_gpr[31] = (0x0898A194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0392_entry, 392u, 183u, 0x0898CD5Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A194u) goto L_0898A194;
    return;
L_0898A194:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_0898A198;
L_0898A198:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898A1C4:
    aot_gpr[31] = (0x0898A1CCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 202u, 0x08992E9Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A1CCu) goto L_0898A1CC;
    return;
L_0898A1CC:
    aot_gpr[21] = (2217u << 16u);
    (void)rt.invoke_chained_direct<&recomp_unit_0389_entry, 389u, 292u, 0x08989FDCu>(ctx, &aot_mem); return;
L_0898A1D4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1028)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0898A004;
      }
      goto L_0898A1E4;
    }
L_0898A1E4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(284)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A004;
      }
      goto L_0898A1F0;
    }
L_0898A1F0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(148)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898A1FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898A1FCu) goto L_0898A1FC;
    return;
L_0898A1FC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(152)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898A20Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898A20Cu) goto L_0898A20C;
    return;
L_0898A20C:
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    goto L_0898A004;
L_0898A214:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1028)));
    aot_gpr[31] = (0x0898A220u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1040)));
    if (rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 67u, 0x08993444u>(ctx, &aot_mem) && ctx.pc == 0x0898A220u) goto L_0898A220;
    return;
L_0898A220:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1316)));
    aot_gpr[31] = (0x0898A22Cu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0389_entry, 389u, 124u, 0x089896D8u>(ctx, &aot_mem) && ctx.pc == 0x0898A22Cu) goto L_0898A22C;
    return;
L_0898A22C:
    // nop
    goto L_0898A184;
L_0898A234:
    aot_gpr[18] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1296)));
    goto L_0898A23C;
L_0898A23C:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1280)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x0898A254u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898A254u) goto L_0898A254;
    return;
L_0898A254:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1312)));
    aot_gpr[2] = (aot_gpr[18] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1296)));
        goto L_0898A23C;
    }
    goto L_0898A264;
L_0898A264:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1192)));
    goto L_0898A164;
L_0898A26C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-448));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(408), aot_gpr[18]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(404), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(436), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(432), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(428), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(424), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(420), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(416), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(412), aot_gpr[19]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(400), aot_gpr[16]);
      if (branch_taken) {
          goto L_0898A2B8;
      }
      goto L_0898A2A8;
    }
L_0898A2A8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898A2EC;
      }
      goto L_0898A2B4;
    }
L_0898A2B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_0898A2B8;
L_0898A2B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(436)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(432)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(428)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(424)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(420)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(416)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(412)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(408)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(404)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(448));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898A2EC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(29));
      if (branch_taken) {
          goto L_0898A348;
      }
      goto L_0898A30C;
    }
L_0898A30C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(29));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(436)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(432)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(428)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(424)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(420)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(416)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(412)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(408)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(404)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(448));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898A348:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0898A3A8;
      }
      goto L_0898A358;
    }
L_0898A358:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_0898A3A8;
      }
      goto L_0898A364;
    }
L_0898A364:
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_0898A3AC;
    }
    goto L_0898A36C;
L_0898A36C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(364)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_0898A3AC;
    }
    goto L_0898A378;
L_0898A378:
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4228)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(31));
      if (branch_taken) {
          goto L_0898A398;
      }
      goto L_0898A38C;
    }
L_0898A38C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(31));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_0898A2B8;
L_0898A398:
    aot_gpr[31] = (0x0898A3A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 205u, 0x08992EECu>(ctx, &aot_mem) && ctx.pc == 0x0898A3A0u) goto L_0898A3A0;
    return;
L_0898A3A0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-26192)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4228), aot_gpr[16]);
    goto L_0898A3A8;
L_0898A3A8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_0898A3AC;
L_0898A3AC:
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[20];
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898A434;
      }
      goto L_0898A3B8;
    }
L_0898A3B8:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[4];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0898A434;
      }
      goto L_0898A3C0;
    }
L_0898A3C0:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0898A434;
      }
      goto L_0898A3C8;
    }
L_0898A3C8:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_0898A434;
      }
      goto L_0898A3D0;
    }
L_0898A3D0:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_0898A434;
      }
      goto L_0898A3D8;
    }
L_0898A3D8:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898A434;
      }
      goto L_0898A3E0;
    }
L_0898A3E0:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0898A3F4;
      }
      goto L_0898A3E8;
    }
L_0898A3E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_0898A3EC;
L_0898A3EC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_0898A2B8;
L_0898A3F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(29));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
      if (branch_taken) {
          goto L_0898A428;
      }
      goto L_0898A410;
    }
L_0898A410:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898A428;
      }
      goto L_0898A41C;
    }
L_0898A41C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    // nop
      if (branch_taken) {
          goto L_0898AA14;
      }
      goto L_0898A428;
    }
L_0898A428:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    goto L_0898A42C;
L_0898A42C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_0898A2B8;
L_0898A434:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(29));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
      if (branch_taken) {
          goto L_0898A3E8;
      }
      goto L_0898A458;
    }
L_0898A458:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(aot_gpr[2]) <= 0) {
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
        goto L_0898A49C;
    }
    goto L_0898A464;
L_0898A464:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[5];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0898A4A4;
      }
      goto L_0898A470;
    }
L_0898A470:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898A4A4;
      }
      goto L_0898A478;
    }
L_0898A478:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0898A4A4;
      }
      goto L_0898A480;
    }
L_0898A480:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_0898A4A4;
      }
      goto L_0898A488;
    }
L_0898A488:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_0898A4A4;
      }
      goto L_0898A490;
    }
L_0898A490:
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
        goto L_0898A4A8;
    }
    goto L_0898A498;
L_0898A498:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
    goto L_0898A49C;
L_0898A49C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_0898A3EC;
L_0898A4A4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    goto L_0898A4A8;
L_0898A4A8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[21] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0898A8FC;
      }
      goto L_0898A4B8;
    }
L_0898A4B8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_0898A8FC;
      }
      goto L_0898A4C4;
    }
L_0898A4C4:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(120))))));
    goto L_0898A4C8;
L_0898A4C8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_0898A4DC;
      }
      goto L_0898A4D0;
    }
L_0898A4D0:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(137))))));
    if (aot_gpr[2] != 0u) {
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(140));
        goto L_0898A838;
    }
    goto L_0898A4DC;
L_0898A4DC:
    aot_gpr[20] = (0u + 0u);
    goto L_0898A4E0;
L_0898A4E0:
    aot_gpr[23] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(2812)));
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(52));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898A4F8u);
    aot_gpr[4] = (aot_gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898A4F8u) goto L_0898A4F8;
    return;
L_0898A4F8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[4];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0898A90C;
      }
      goto L_0898A508;
    }
L_0898A508:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898A90C;
      }
      goto L_0898A510;
    }
L_0898A510:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_0898A920;
      }
      goto L_0898A518;
    }
L_0898A518:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0898A920;
      }
      goto L_0898A520;
    }
L_0898A520:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_0898A530;
      }
      goto L_0898A528;
    }
L_0898A528:
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
        goto L_0898A49C;
    }
    goto L_0898A530;
L_0898A530:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[2]);
    goto L_0898A538;
L_0898A538:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_0898A8E4;
      }
      goto L_0898A544;
    }
L_0898A544:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_0898A8E4;
      }
      goto L_0898A54C;
    }
L_0898A54C:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(105)));
      if (branch_taken) {
          goto L_0898A8E8;
      }
      goto L_0898A554;
    }
L_0898A554:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(364)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_0898A930;
      }
      goto L_0898A560;
    }
L_0898A560:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(105)));
    aot_gpr[2] = (aot_gpr[3] | 4u);
    aot_gpr[3] = (aot_gpr[2] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_0898A570;
L_0898A570:
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-12368));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[2]);
    goto L_0898A57C;
L_0898A57C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_0898A914;
      }
      goto L_0898A588;
    }
L_0898A588:
    aot_gpr[2] = (aot_gpr[3] | 32u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_0898A590;
L_0898A590:
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(56));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(18));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-11692));
    aot_gpr[31] = (0x0898A5B4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 187u, 0x08983A30u>(ctx, &aot_mem) && ctx.pc == 0x0898A5B4u) goto L_0898A5B4;
    return;
L_0898A5B4:
    aot_gpr[3] = (aot_gpr[19] + static_cast<std::uint32_t>(56));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(52)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(368)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(372)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(15000));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-31288));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[3]);
    aot_gpr[3] = (2201u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-30304));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[2]);
    aot_gpr[2] = (2200u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30836));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(18)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[3]);
    aot_gpr[3] = (2201u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-32304));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-18404));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[3]);
    aot_gpr[31] = (0x0898A630u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0388_entry, 388u, 171u, 0x08988BA4u>(ctx, &aot_mem) && ctx.pc == 0x0898A630u) goto L_0898A630;
    return;
L_0898A630:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_0898A3E8;
      }
      goto L_0898A63C;
    }
L_0898A63C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (aot_gpr[22] + 0u);
      if (branch_taken) {
          goto L_0898A3E8;
      }
      goto L_0898A648;
    }
L_0898A648:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(164)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(1184), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(168)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1188), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(172)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1192), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(176)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1196), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(212)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1224), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(216)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1228), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(220)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1232), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(224)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1236), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(2812)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898A6C0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1096));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898A6C0u) goto L_0898A6C0;
    return;
L_0898A6C0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898A9A0;
      }
      goto L_0898A6C8;
    }
L_0898A6C8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(256));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1028), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(1024), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(180)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1200), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(184)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1204), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(188)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1208), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(192)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1212), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(204)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1216), aot_gpr[4]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(208)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1220), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1072), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(52)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1076), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1084), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(344)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1088), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1092), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(232)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_0898A790;
    }
    goto L_0898A76C;
L_0898A76C:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2808)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898A788u);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(228));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898A788u) goto L_0898A788;
    return;
L_0898A788:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_0898A790;
L_0898A790:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898A940;
      }
      goto L_0898A798;
    }
L_0898A798:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0898A7B0;
      }
      goto L_0898A7A4;
    }
L_0898A7A4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898A7B0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(256));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898A7B0u) goto L_0898A7B0;
    return;
L_0898A7B0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_0898A7D8;
      }
      goto L_0898A7C0;
    }
L_0898A7C0:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_0898A7D8;
      }
      goto L_0898A7C8;
    }
L_0898A7C8:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0898A7D8;
      }
      goto L_0898A7D0;
    }
L_0898A7D0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(364)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1172), aot_gpr[3]);
    goto L_0898A7D8;
L_0898A7D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_0898A80C;
    }
    goto L_0898A7E4;
L_0898A7E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(356)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(352)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1128), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1120), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1124), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x0898A808u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1040));
    if (rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 23u, 0x0899317Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A808u) goto L_0898A808;
    return;
L_0898A808:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_0898A80C;
L_0898A80C:
    aot_gpr[31] = (0x0898A814u);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0389_entry, 389u, 27u, 0x089891ACu>(ctx, &aot_mem) && ctx.pc == 0x0898A814u) goto L_0898A814;
    return;
L_0898A814:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_0898A3E8;
      }
      goto L_0898A820;
    }
L_0898A820:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1072), aot_gpr[3]);
    goto L_0898A82C;
L_0898A82C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_0898A830;
L_0898A830:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_0898A3EC;
L_0898A838:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x0898A848u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A848u) goto L_0898A848;
    return;
L_0898A848:
    aot_gpr[3] = (aot_gpr[19] + static_cast<std::uint32_t>(120));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(137));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[3] + static_cast<std::uint32_t>(3), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[3] + static_cast<std::uint32_t>(7), aot_gpr[6]));
    aot_gpr[8] = (rt.memory().aot_load_word_left(aot_gpr[3] + static_cast<std::uint32_t>(11), aot_gpr[8]));
    aot_gpr[9] = (rt.memory().aot_load_word_left(aot_gpr[3] + static_cast<std::uint32_t>(15), aot_gpr[9]));
    aot_gpr[10] = (rt.memory().aot_load_word_left(aot_gpr[4] + static_cast<std::uint32_t>(3), aot_gpr[10]));
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[6]));
    aot_gpr[8] = (rt.memory().aot_load_word_right(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[8]));
    aot_gpr[9] = (rt.memory().aot_load_word_right(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[9]));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    aot_gpr[10] = (rt.memory().aot_load_word_right(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[10]));
    aot_gpr[11] = (rt.memory().aot_load_word_left(aot_gpr[4] + static_cast<std::uint32_t>(7), aot_gpr[11]));
    aot_gpr[12] = (rt.memory().aot_load_word_left(aot_gpr[4] + static_cast<std::uint32_t>(11), aot_gpr[12]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[4] + static_cast<std::uint32_t>(15), aot_gpr[7]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[5]));
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(157));
    aot_gpr[3] = (aot_gpr[29] + static_cast<std::uint32_t>(174));
    aot_gpr[11] = (rt.memory().aot_load_word_right(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[11]));
    aot_gpr[12] = (rt.memory().aot_load_word_right(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[12]));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[7]));
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[5]);
    aot_gpr[20] = (aot_gpr[3] & 65535u);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[9]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(156), static_cast<std::uint8_t>(aot_gpr[13]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[11]);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(11), aot_gpr[12]);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(15), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[11]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[12]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(173), static_cast<std::uint8_t>(aot_gpr[3]));
    goto L_0898A4E0;
L_0898A8E4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(105)));
    goto L_0898A8E8;
L_0898A8E8:
    aot_gpr[2] = (aot_gpr[3] + 0u);
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000004u) | ((0u & 0x00000001u) << 2u));
    aot_gpr[3] = (aot_gpr[2] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_0898A57C;
L_0898A8FC:
    aot_gpr[31] = (0x0898A904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0389_entry, 389u, 32u, 0x089891ECu>(ctx, &aot_mem) && ctx.pc == 0x0898A904u) goto L_0898A904;
    return;
L_0898A904:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(120))))));
    goto L_0898A4C8;
L_0898A90C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), 0u);
    goto L_0898A538;
L_0898A914:
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000020u) | ((0u & 0x00000001u) << 5u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_0898A590;
L_0898A920:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(348)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    goto L_0898A538;
L_0898A930:
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000004u) | ((0u & 0x00000001u) << 2u));
    aot_gpr[3] = (aot_gpr[2] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_0898A570;
L_0898A940:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(2812)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898A958u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1096)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898A958u) goto L_0898A958;
    return;
L_0898A958:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1184)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898A82C;
      }
      goto L_0898A968;
    }
L_0898A968:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1188)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1184)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x0898A998u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898A998u) goto L_0898A998;
    return;
L_0898A998:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_0898A830;
L_0898A9A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(2812)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898A9B8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1096)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898A9B8u) goto L_0898A9B8;
    return;
L_0898A9B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1184)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898A9F8;
      }
      goto L_0898A9C8;
    }
L_0898A9C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1188)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1184)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x0898A9F8u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898A9F8u) goto L_0898A9F8;
    return;
L_0898A9F8:
    aot_gpr[31] = (0x0898AA00u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898AA00u) goto L_0898AA00;
    return;
L_0898AA00:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_0898A6C8;
      }
      goto L_0898AA0C;
    }
L_0898AA0C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_0898A3EC;
L_0898AA14:
    aot_gpr[31] = (0x0898AA1Cu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0388_entry, 388u, 171u, 0x08988BA4u>(ctx, &aot_mem) && ctx.pc == 0x0898AA1Cu) goto L_0898AA1C;
    return;
L_0898AA1C:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_0898A428;
      }
      goto L_0898AA28;
    }
L_0898AA28:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[22] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898ACB4;
      }
      goto L_0898AA34;
    }
L_0898AA34:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(364)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(1172), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2808)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[21] = (aot_gpr[17] + static_cast<std::uint32_t>(228));
      if (branch_taken) {
          goto L_0898AA58;
      }
      goto L_0898AA4C;
    }
L_0898AA4C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[20];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0898AD58;
      }
      goto L_0898AA58;
    }
L_0898AA58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(368)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1172)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(372)));
    aot_gpr[9] = (0u + 0u);
    aot_gpr[10] = (0u + 0u);
    aot_gpr[11] = (0u + 0u);
    aot_gpr[31] = (0x0898AA80u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0387_entry, 387u, 218u, 0x08987F74u>(ctx, &aot_mem) && ctx.pc == 0x0898AA80u) goto L_0898AA80;
    return;
L_0898AA80:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_0898AA84;
L_0898AA84:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[16] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[16]);
        goto L_0898A42C;
    }
    goto L_0898AA90;
L_0898AA90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1100)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898ACB4;
      }
      goto L_0898AAA0;
    }
L_0898AAA0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898AAC0;
      }
      goto L_0898AAAC;
    }
L_0898AAAC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898AAB8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(256));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898AAB8u) goto L_0898AAB8;
    return;
L_0898AAB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
    goto L_0898AAC0;
L_0898AAC0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1076), aot_gpr[16]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1084), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1028), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(1024), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(344)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1088), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1092), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(164)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1184), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(168)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1188), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(172)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1192), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(176)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1196), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(220)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1232), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(224)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1236), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(196)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1240), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(200)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1244), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(180)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1200), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(184)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1204), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(188)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1208), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(192)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1212), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(204)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1216), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(208)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1220), aot_gpr[3]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(232)));
        goto L_0898ABD8;
    }
    goto L_0898ABB0;
L_0898ABB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(356)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(352)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1128), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1120), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1124), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x0898ABD4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1040));
    if (rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 23u, 0x0899317Cu>(ctx, &aot_mem) && ctx.pc == 0x0898ABD4u) goto L_0898ABD4;
    return;
L_0898ABD4:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(232)));
    goto L_0898ABD8;
L_0898ABD8:
    { const bool branch_taken = aot_gpr[20] == aot_gpr[16];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2808)));
      if (branch_taken) {
          goto L_0898AD88;
      }
      goto L_0898ABE0;
    }
L_0898ABE0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(56));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1072), aot_gpr[3]);
    aot_gpr[22] = (0u + 0u);
    aot_gpr[16] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(56)));
    aot_gpr[23] = (0u + 0u);
    aot_gpr[21] = (0u + 0u);
    aot_gpr[19] = (0u + 0u);
    if (aot_gpr[2] != 0u) aot_gpr[22] = (aot_gpr[4]);
    aot_gpr[30] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    goto L_0898AC14;
L_0898AC14:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x0898AC2Cu);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 187u, 0x08983A30u>(ctx, &aot_mem) && ctx.pc == 0x0898AC2Cu) goto L_0898AC2C;
    return;
L_0898AC2C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (aot_gpr[30] << (aot_gpr[3] & 31u));
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[2] & 246u);
      if (branch_taken) {
          goto L_0898AC5C;
      }
      goto L_0898AC40;
    }
L_0898AC40:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[2] = (aot_gpr[2] & 512u);
      if (branch_taken) {
          goto L_0898AE08;
      }
      goto L_0898AC48;
    }
L_0898AC48:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0898AC5C;
      }
      goto L_0898AC50;
    }
L_0898AC50:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[3] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_0898AC5C;
L_0898AC5C:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[19] != aot_gpr[2];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_0898AC14;
      }
      goto L_0898AC6C;
    }
L_0898AC6C:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2796)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1100)));
    aot_gpr[10] = (2201u << 16u);
    aot_gpr[6] = (aot_gpr[23] + 0u);
    aot_gpr[7] = (aot_gpr[21] + 0u);
    aot_gpr[8] = (aot_gpr[22] + 0u);
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(-20828));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898ACA0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(52));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898ACA0u) goto L_0898ACA0;
    return;
L_0898ACA0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898AD34;
      }
      goto L_0898ACA8;
    }
L_0898ACA8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898ACC0;
      }
      goto L_0898ACB4;
    }
L_0898ACB4:
    aot_gpr[16] = (0u + 0u);
    goto L_0898ACB8;
L_0898ACB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    goto L_0898A42C;
L_0898ACC0:
    aot_gpr[31] = (0x0898ACC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 82u, 0x08986574u>(ctx, &aot_mem) && ctx.pc == 0x0898ACC8u) goto L_0898ACC8;
    return;
L_0898ACC8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1072)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[19];
    aot_gpr[16] = (aot_gpr[2] + static_cast<std::uint32_t>(30000));
      if (branch_taken) {
          goto L_0898ACFC;
      }
      goto L_0898ACD8;
    }
L_0898ACD8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1028)));
    goto L_0898ACDC;
L_0898ACDC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898ACF0;
      }
      goto L_0898ACE8;
    }
L_0898ACE8:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_0898ACB8;
      }
      goto L_0898ACF0;
    }
L_0898ACF0:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    goto L_0898A42C;
L_0898ACFC:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
    goto L_0898AD00;
L_0898AD00:
    aot_gpr[31] = (0x0898AD08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 82u, 0x08986574u>(ctx, &aot_mem) && ctx.pc == 0x0898AD08u) goto L_0898AD08;
    return;
L_0898AD08:
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0898AD48;
      }
      goto L_0898AD14;
    }
L_0898AD14:
    aot_gpr[31] = (0x0898AD1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0389_entry, 389u, 287u, 0x08989F88u>(ctx, &aot_mem) && ctx.pc == 0x0898AD1Cu) goto L_0898AD1C;
    return;
L_0898AD1C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1072)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0898AD00;
      }
      goto L_0898AD2C;
    }
L_0898AD2C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1028)));
    goto L_0898ACDC;
L_0898AD34:
    aot_gpr[31] = (0x0898AD3Cu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898AD3Cu) goto L_0898AD3C;
    return;
L_0898AD3C:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    goto L_0898A42C;
L_0898AD48:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(13));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1072), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    goto L_0898A42C;
L_0898AD58:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(368)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1172)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(372)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(100)));
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x0898AD80u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0387_entry, 387u, 218u, 0x08987F74u>(ctx, &aot_mem) && ctx.pc == 0x0898AD80u) goto L_0898AD80;
    return;
L_0898AD80:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_0898AA84;
L_0898AD88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898AD9Cu);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898AD9Cu) goto L_0898AD9C;
    return;
L_0898AD9C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898ABE0;
      }
      goto L_0898ADA4;
    }
L_0898ADA4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2808)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_0898ADC0;
    }
    goto L_0898ADB0;
L_0898ADB0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898ADBCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898ADBCu) goto L_0898ADBC;
    return;
L_0898ADBC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_0898ADC0;
L_0898ADC0:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1072), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1184)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0898A428;
      }
      goto L_0898ADD8;
    }
L_0898ADD8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1188)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1184)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x0898AE00u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898AE00u) goto L_0898AE00;
    return;
L_0898AE00:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    goto L_0898A42C;
L_0898AE08:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(40), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(12));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(18)));
    if (aot_gpr[21] == 0u) aot_gpr[21] = (aot_gpr[2]);
    goto L_0898AC5C;
L_0898AE34:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0898AE6C;
      }
      goto L_0898AE40;
    }
L_0898AE40:
    aot_gpr[2] = (aot_gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0898AE74;
      }
      goto L_0898AE4C;
    }
L_0898AE4C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    if (aot_gpr[5] == aot_gpr[2]) {
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(13));
        goto L_0898AE9C;
    }
    goto L_0898AE58;
L_0898AE58:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_0898AE94;
      }
      goto L_0898AE60;
    }
L_0898AE60:
    aot_gpr[2] = (0u | 54501u);
    goto L_0898AE64;
L_0898AE64:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898AE90;
      }
      goto L_0898AE6C;
    }
L_0898AE6C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AE74:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(15));
      if (branch_taken) {
          goto L_0898AE6C;
      }
      goto L_0898AE7C;
    }
L_0898AE7C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0898AE6C;
      }
      goto L_0898AE88;
    }
L_0898AE88:
    if (aot_gpr[4] != 0u) {
    aot_gpr[2] = (0u | 54501u);
        goto L_0898AE64;
    }
    goto L_0898AE90;
L_0898AE90:
    aot_gpr[3] = (0u + 0u);
    goto L_0898AE94;
L_0898AE94:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AE9C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AEA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
      if (branch_taken) {
          goto L_0898AFBC;
      }
      goto L_0898AEE4;
    }
L_0898AEE4:
    aot_gpr[2] = (aot_gpr[18] ^ 65535u);
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[3] & aot_gpr[2]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[19] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898AF38;
      }
      goto L_0898AEFC;
    }
L_0898AEFC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(1092)));
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[22];
    aot_gpr[4] = (aot_gpr[6] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 5u, 0x0898B04Cu>(ctx, &aot_mem); return;
      }
      goto L_0898AF0C;
    }
L_0898AF0C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2808)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0898AFC0;
      }
      goto L_0898AF18;
    }
L_0898AF18:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898AF24u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898AF24u) goto L_0898AF24;
    return;
L_0898AF24:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2808)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 3u, 0x0898B034u>(ctx, &aot_mem); return;
      }
      goto L_0898AF2C;
    }
L_0898AF2C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1092)));
    goto L_0898AF30;
L_0898AF30:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[22];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2808)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 8u, 0x0898B074u>(ctx, &aot_mem); return;
      }
      goto L_0898AF38;
    }
L_0898AF38:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2808)));
    goto L_0898AF3C;
L_0898AF3C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_0898AF50;
      }
      goto L_0898AF44;
    }
L_0898AF44:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898AF50u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898AF50u) goto L_0898AF50;
    return;
L_0898AF50:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898AFBC;
      }
      goto L_0898AF58;
    }
L_0898AF58:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2808)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1092)));
        goto L_0898AFB0;
    }
    goto L_0898AF64;
L_0898AF64:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898AF70u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898AF70u) goto L_0898AF70;
    return;
L_0898AF70:
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1092)));
        goto L_0898AFB0;
    }
    goto L_0898AF78;
L_0898AF78:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1068)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1216)));
    aot_gpr[3] = (aot_gpr[2] | 4u);
    aot_gpr[3] = ((aot_gpr[3] & ~0x00000002u) | ((0u & 0x00000001u) << 1u));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1068), aot_gpr[3]);
      if (branch_taken) {
          goto L_0898AFAC;
      }
      goto L_0898AF90;
    }
L_0898AF90:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1220)));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0898AFACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898AFACu) goto L_0898AFAC;
    return;
L_0898AFAC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1092)));
    goto L_0898AFB0;
L_0898AFB0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[5] = (aot_gpr[23] + 0u);
      if (branch_taken) {
          goto L_0898AFE8;
      }
      goto L_0898AFBC;
    }
L_0898AFBC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_0898AFC0;
L_0898AFC0:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898AFE8:
    aot_gpr[31] = (0x0898AFF0u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    goto L_0898AE34;
L_0898AFF0:
    aot_gpr[8] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[6] = (0u + 0u);
    ctx.pc = 0x0898B000u; return;
}

void recomp_unit_0390(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0390_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_390(Runtime &runtime) {
    runtime.register_generated_unit(390u, 0x0898A000u, 4096u, &recomp_unit_0390, &recomp_unit_0390_entry);
    runtime.register_function(0x0898A000u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A004u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A00Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A020u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A02Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A048u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A050u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A08Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A090u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A098u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A0A0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A0A8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A0B4u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A0C0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A0C8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A0D0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A0D8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A0E0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A0F0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A0FCu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A100u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A108u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A114u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A120u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A130u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A160u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A164u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A16Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A178u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A184u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A18Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A194u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A198u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A1C4u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A1CCu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A1D4u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A1E4u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A1F0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A1FCu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A20Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A214u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A220u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A22Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A234u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A23Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A254u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A264u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A26Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A2A8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A2B4u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A2B8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A2ECu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A30Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A348u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A358u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A364u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A36Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A378u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A38Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A398u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A3A0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A3A8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A3ACu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A3B8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A3C0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A3C8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A3D0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A3D8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A3E0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A3E8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A3ECu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A3F4u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A410u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A41Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A428u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A42Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A434u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A458u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A464u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A470u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A478u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A480u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A488u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A490u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A498u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A49Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A4A4u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A4A8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A4B8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A4C4u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A4C8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A4D0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A4DCu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A4E0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A4F8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A508u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A510u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A518u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A520u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A528u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A530u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A538u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A544u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A54Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A554u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A560u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A570u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A57Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A588u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A590u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A5B4u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A630u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A63Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A648u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A6C0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A6C8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A76Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A788u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A790u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A798u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A7A4u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A7B0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A7C0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A7C8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A7D0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A7D8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A7E4u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A808u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A80Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A814u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A820u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A82Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A830u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A838u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A848u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A8E4u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A8E8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A8FCu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A904u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A90Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A914u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A920u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A930u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A940u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A958u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A968u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A998u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A9A0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A9B8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A9C8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898A9F8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AA00u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AA0Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AA14u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AA1Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AA28u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AA34u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AA4Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AA58u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AA80u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AA84u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AA90u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AAA0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AAACu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AAB8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AAC0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898ABB0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898ABD4u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898ABD8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898ABE0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AC14u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AC2Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AC40u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AC48u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AC50u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AC5Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AC6Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898ACA0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898ACA8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898ACB4u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898ACB8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898ACC0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898ACC8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898ACD8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898ACDCu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898ACE8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898ACF0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898ACFCu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AD00u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AD08u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AD14u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AD1Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AD2Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AD34u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AD3Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AD48u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AD58u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AD80u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AD88u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AD9Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898ADA4u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898ADB0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898ADBCu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898ADC0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898ADD8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AE00u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AE08u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AE34u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AE40u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AE4Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AE58u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AE60u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AE64u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AE6Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AE74u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AE7Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AE88u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AE90u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AE94u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AE9Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AEA4u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AEE4u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AEFCu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AF0Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AF18u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AF24u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AF2Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AF30u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AF38u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AF3Cu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AF44u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AF50u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AF58u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AF64u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AF70u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AF78u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AF90u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AFACu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AFB0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AFBCu, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AFC0u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AFE8u, &recomp_unit_0390, "recomp_unit_0390");
    runtime.register_function(0x0898AFF0u, &recomp_unit_0390, "recomp_unit_0390");
}
} // namespace psprecomp
