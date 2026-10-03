#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0209[1016] = {
    1, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 6, 0, 0,
    0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 13, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0,
    23, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0,
    0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 35, 36, 0, 0, 0,
    0, 0, 37, 38, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0,
    44, 0, 0, 0, 0, 45, 0, 46, 0, 47, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 56, 0, 0, 0, 0, 57, 0, 58, 0, 59, 0, 0, 60, 0,
    0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 64, 0, 65, 0, 0, 0, 0, 66, 0, 67, 0, 68, 0, 0, 69, 0, 0, 0,
    70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 0, 75, 0, 76, 0, 77, 0, 0, 0, 0, 78, 79,
    0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 85, 0, 0, 0, 0, 86, 0,
    87, 0, 88, 89, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 94, 0, 0, 95, 0, 96, 0, 0, 0, 0, 97, 0, 98, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0,
    0, 0, 0, 0, 103, 0, 0, 104, 0, 105, 0, 0, 0, 0, 106, 0, 107, 0, 108, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 113, 0, 0, 0, 0, 114, 0, 0, 115, 0, 116,
    0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 122, 0, 123, 0, 124, 0, 0,
    0, 125, 0, 0, 126, 0, 0, 127, 128, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 132, 0, 133, 0, 134, 0, 0, 135, 0, 0,
    0, 0, 136, 0, 0, 137, 138, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 151, 0, 0, 152, 0, 153, 0, 154,
    0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 158, 0, 0, 159, 0, 0, 160, 0, 161, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0,
    165, 0, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 170, 0, 0, 171, 0, 0, 0, 172, 0, 173, 0, 0, 174, 0, 0, 0,
    0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 183, 0, 0, 0, 0,
    184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190,
    0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197,
    0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 203, 0, 0, 204,
    0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206,
    0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 211, 212, 0, 0, 0, 0, 0,
    213, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 0, 219, 220, 0, 221, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223,
};
void recomp_unit_0209_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088D5000u;
        entry_id = (entry_delta < 4064u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0209[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088D5000;
    case 2u: goto L_088D5008;
    case 3u: goto L_088D5010;
    case 4u: goto L_088D5054;
    case 5u: goto L_088D5070;
    case 6u: goto L_088D5074;
    case 7u: goto L_088D508C;
    case 8u: goto L_088D5094;
    case 9u: goto L_088D50C0;
    case 10u: goto L_088D50C4;
    case 11u: goto L_088D50D8;
    case 12u: goto L_088D50E0;
    case 13u: goto L_088D50F4;
    case 14u: goto L_088D5110;
    case 15u: goto L_088D5134;
    case 16u: goto L_088D5140;
    case 17u: goto L_088D5158;
    case 18u: goto L_088D5168;
    case 19u: goto L_088D51A4;
    case 20u: goto L_088D51CC;
    case 21u: goto L_088D51D8;
    case 22u: goto L_088D51E8;
    case 23u: goto L_088D5200;
    case 24u: goto L_088D5208;
    case 25u: goto L_088D5220;
    case 26u: goto L_088D526C;
    case 27u: goto L_088D5284;
    case 28u: goto L_088D5294;
    case 29u: goto L_088D52B4;
    case 30u: goto L_088D52D0;
    case 31u: goto L_088D52F0;
    case 32u: goto L_088D533C;
    case 33u: goto L_088D534C;
    case 34u: goto L_088D5358;
    case 35u: goto L_088D536C;
    case 36u: goto L_088D5370;
    case 37u: goto L_088D5388;
    case 38u: goto L_088D538C;
    case 39u: goto L_088D53A0;
    case 40u: goto L_088D53A8;
    case 41u: goto L_088D53DC;
    case 42u: goto L_088D53EC;
    case 43u: goto L_088D53F8;
    case 44u: goto L_088D5400;
    case 45u: goto L_088D5414;
    case 46u: goto L_088D541C;
    case 47u: goto L_088D5424;
    case 48u: goto L_088D542C;
    case 49u: goto L_088D543C;
    case 50u: goto L_088D5460;
    case 51u: goto L_088D546C;
    case 52u: goto L_088D5480;
    case 53u: goto L_088D5498;
    case 54u: goto L_088D54B4;
    case 55u: goto L_088D54C0;
    case 56u: goto L_088D54C8;
    case 57u: goto L_088D54DC;
    case 58u: goto L_088D54E4;
    case 59u: goto L_088D54EC;
    case 60u: goto L_088D54F8;
    case 61u: goto L_088D5504;
    case 62u: goto L_088D5518;
    case 63u: goto L_088D552C;
    case 64u: goto L_088D5538;
    case 65u: goto L_088D5540;
    case 66u: goto L_088D5554;
    case 67u: goto L_088D555C;
    case 68u: goto L_088D5564;
    case 69u: goto L_088D5570;
    case 70u: goto L_088D5580;
    case 71u: goto L_088D5594;
    case 72u: goto L_088D55AC;
    case 73u: goto L_088D55B8;
    case 74u: goto L_088D55C0;
    case 75u: goto L_088D55D4;
    case 76u: goto L_088D55DC;
    case 77u: goto L_088D55E4;
    case 78u: goto L_088D55F8;
    case 79u: goto L_088D55FC;
    case 80u: goto L_088D5610;
    case 81u: goto L_088D5620;
    case 82u: goto L_088D5638;
    case 83u: goto L_088D5650;
    case 84u: goto L_088D565C;
    case 85u: goto L_088D5664;
    case 86u: goto L_088D5678;
    case 87u: goto L_088D5680;
    case 88u: goto L_088D5688;
    case 89u: goto L_088D568C;
    case 90u: goto L_088D5690;
    case 91u: goto L_088D56BC;
    case 92u: goto L_088D56D4;
    case 93u: goto L_088D56D8;
    case 94u: goto L_088D5708;
    case 95u: goto L_088D5714;
    case 96u: goto L_088D571C;
    case 97u: goto L_088D5730;
    case 98u: goto L_088D5738;
    case 99u: goto L_088D5740;
    case 100u: goto L_088D5750;
    case 101u: goto L_088D5760;
    case 102u: goto L_088D5778;
    case 103u: goto L_088D5790;
    case 104u: goto L_088D579C;
    case 105u: goto L_088D57A4;
    case 106u: goto L_088D57B8;
    case 107u: goto L_088D57C0;
    case 108u: goto L_088D57C8;
    case 109u: goto L_088D57CC;
    case 110u: goto L_088D57F0;
    case 111u: goto L_088D5840;
    case 112u: goto L_088D584C;
    case 113u: goto L_088D5854;
    case 114u: goto L_088D5868;
    case 115u: goto L_088D5874;
    case 116u: goto L_088D587C;
    case 117u: goto L_088D5888;
    case 118u: goto L_088D5894;
    case 119u: goto L_088D58B0;
    case 120u: goto L_088D58BC;
    case 121u: goto L_088D58E0;
    case 122u: goto L_088D58E4;
    case 123u: goto L_088D58EC;
    case 124u: goto L_088D58F4;
    case 125u: goto L_088D5904;
    case 126u: goto L_088D5910;
    case 127u: goto L_088D591C;
    case 128u: goto L_088D5920;
    case 129u: goto L_088D592C;
    case 130u: goto L_088D5938;
    case 131u: goto L_088D5944;
    case 132u: goto L_088D5958;
    case 133u: goto L_088D5960;
    case 134u: goto L_088D5968;
    case 135u: goto L_088D5974;
    case 136u: goto L_088D5988;
    case 137u: goto L_088D5994;
    case 138u: goto L_088D5998;
    case 139u: goto L_088D59A0;
    case 140u: goto L_088D59B4;
    case 141u: goto L_088D59C4;
    case 142u: goto L_088D59D0;
    case 143u: goto L_088D59EC;
    case 144u: goto L_088D59FC;
    case 145u: goto L_088D5A2C;
    case 146u: goto L_088D5A4C;
    case 147u: goto L_088D5A6C;
    case 148u: goto L_088D5A80;
    case 149u: goto L_088D5AC8;
    case 150u: goto L_088D5AD0;
    case 151u: goto L_088D5AE0;
    case 152u: goto L_088D5AEC;
    case 153u: goto L_088D5AF4;
    case 154u: goto L_088D5AFC;
    case 155u: goto L_088D5B08;
    case 156u: goto L_088D5B18;
    case 157u: goto L_088D5B2C;
    case 158u: goto L_088D5B34;
    case 159u: goto L_088D5B40;
    case 160u: goto L_088D5B4C;
    case 161u: goto L_088D5B54;
    case 162u: goto L_088D5B60;
    case 163u: goto L_088D5B68;
    case 164u: goto L_088D5B78;
    case 165u: goto L_088D5B80;
    case 166u: goto L_088D5B8C;
    case 167u: goto L_088D5B9C;
    case 168u: goto L_088D5BA8;
    case 169u: goto L_088D5BB8;
    case 170u: goto L_088D5BC0;
    case 171u: goto L_088D5BCC;
    case 172u: goto L_088D5BDC;
    case 173u: goto L_088D5BE4;
    case 174u: goto L_088D5BF0;
    case 175u: goto L_088D5C04;
    case 176u: goto L_088D5C14;
    case 177u: goto L_088D5C24;
    case 178u: goto L_088D5C34;
    case 179u: goto L_088D5C40;
    case 180u: goto L_088D5C54;
    case 181u: goto L_088D5C5C;
    case 182u: goto L_088D5C64;
    case 183u: goto L_088D5C6C;
    case 184u: goto L_088D5C80;
    case 185u: goto L_088D5CB8;
    case 186u: goto L_088D5CC4;
    case 187u: goto L_088D5CC8;
    case 188u: goto L_088D5CD0;
    case 189u: goto L_088D5CF4;
    case 190u: goto L_088D5CFC;
    case 191u: goto L_088D5D08;
    case 192u: goto L_088D5D14;
    case 193u: goto L_088D5D28;
    case 194u: goto L_088D5D48;
    case 195u: goto L_088D5D54;
    case 196u: goto L_088D5D68;
    case 197u: goto L_088D5D7C;
    case 198u: goto L_088D5D88;
    case 199u: goto L_088D5DA4;
    case 200u: goto L_088D5DC4;
    case 201u: goto L_088D5DDC;
    case 202u: goto L_088D5DE8;
    case 203u: goto L_088D5DF0;
    case 204u: goto L_088D5DFC;
    case 205u: goto L_088D5E0C;
    case 206u: goto L_088D5E7C;
    case 207u: goto L_088D5E8C;
    case 208u: goto L_088D5EA0;
    case 209u: goto L_088D5EC0;
    case 210u: goto L_088D5ED0;
    case 211u: goto L_088D5EE4;
    case 212u: goto L_088D5EE8;
    case 213u: goto L_088D5F00;
    case 214u: goto L_088D5F0C;
    case 215u: goto L_088D5F1C;
    case 216u: goto L_088D5F38;
    case 217u: goto L_088D5F44;
    case 218u: goto L_088D5F50;
    case 219u: goto L_088D5F60;
    case 220u: goto L_088D5F64;
    case 221u: goto L_088D5F6C;
    case 222u: goto L_088D5FD0;
    case 223u: goto L_088D5FDC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088D5000:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 161u, 0x088D4FE8u>(ctx, &aot_mem); return;
      }
      goto L_088D5008;
    }
L_088D5008:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5010:
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(1960), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(1940), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(1942), static_cast<std::uint16_t>(0u));
    aot_gpr[5] = (65409u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1944), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-32640));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1980), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1984), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (16128u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1988), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1992), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1996), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_088D5054;
L_088D5054:
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(1684), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(1556), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 128 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5054;
      }
      goto L_088D5070;
    }
L_088D5070:
    aot_gpr[5] = (0u | 0u);
    goto L_088D5074;
L_088D5074:
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(1812), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 128 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5074;
      }
      goto L_088D508C;
    }
L_088D508C:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    goto L_088D5094;
L_088D5094:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1948), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(2012), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(2024), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(2036), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(2048), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(2060), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(2072), 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D5094;
      }
      goto L_088D50C0;
    }
L_088D50C0:
    aot_gpr[5] = (0u | 0u);
    goto L_088D50C4;
L_088D50C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1508), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D50C4;
      }
      goto L_088D50D8;
    }
L_088D50D8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D50E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[5] = (2218u << 16u);
    goto L_088D50F4;
L_088D50F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5104)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (0x088D5110u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x088D5110u) goto L_088D5110;
    return;
L_088D5110:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1204), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < 26 ? 1u : 0u);
    aot_gpr[5] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_088D50F4;
      }
      goto L_088D5134;
    }
L_088D5134:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5140:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    aot_gpr[2] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088D51D8;
      }
      goto L_088D5158;
    }
L_088D5158:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088D5168u);
    aot_gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5168u) goto L_088D5168;
    return;
L_088D5168:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(128)));
    aot_gpr[5] = (0u | 32768u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[4]);
    aot_gpr[4] = (24948u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24900));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (20563u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20575));
    aot_gpr[5] = (0u | 92u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088D51A4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088D51A4u) goto L_088D51A4;
    return;
L_088D51A4:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(5104)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088D51CCu);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D51CCu) goto L_088D51CC;
    return;
L_088D51CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[31] = (0x088D51D8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(5104)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088D51D8u) goto L_088D51D8;
    return;
L_088D51D8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D51E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2205))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D5208;
      }
      goto L_088D5200;
    }
L_088D5200:
    aot_gpr[31] = (0x088D5208u);
    aot_gpr[4] = (0u | 0u);
    ctx.pc = 0x08A5AF94u;
    return;
L_088D5208:
    aot_gpr[4] = (0u | 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2205), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5220:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    aot_gpr[4] = (aot_gpr[6] << 4u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2000));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5104)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[31]);
    aot_gpr[31] = (0x088D526Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-32664));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088D526Cu) goto L_088D526C;
    return;
L_088D526C:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (0u | 306u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[31] = (0x088D5284u);
    aot_gpr[20] = (aot_gpr[6] + static_cast<std::uint32_t>(-32652));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088D5284u) goto L_088D5284;
    return;
L_088D5284:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088D5294u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088D5294u) goto L_088D5294;
    return;
L_088D5294:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32636));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x088D52B4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-32648));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088D52B4u) goto L_088D52B4;
    return;
L_088D52B4:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088D52D0u);
    aot_gpr[9] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 124u, 0x08888C78u>(ctx, &aot_mem) && ctx.pc == 0x088D52D0u) goto L_088D52D0;
    return;
L_088D52D0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D52F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[17] << 2u);
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1204)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1304)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[20] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x088D533Cu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 29u, 0x088CD228u>(ctx, &aot_mem) && ctx.pc == 0x088D533Cu) goto L_088D533C;
    return;
L_088D533C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1204)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1304)));
    aot_gpr[31] = (0x088D534Cu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088D534Cu) goto L_088D534C;
    return;
L_088D534C:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1204)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088D5370;
      }
      goto L_088D5358;
    }
L_088D5358:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088D536Cu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 4u, 0x088CD0F4u>(ctx, &aot_mem) && ctx.pc == 0x088D536Cu) goto L_088D536C;
    return;
L_088D536C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_088D5370;
L_088D5370:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1204), aot_gpr[4]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(21))))));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[10] = (0u | 100u);
      if (branch_taken) {
          goto L_088D543C;
      }
      goto L_088D5388;
    }
L_088D5388:
    aot_gpr[8] = (0u | 0u);
    goto L_088D538C;
L_088D538C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[8]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(2))))));
        goto L_088D53A8;
    }
    goto L_088D53A0;
L_088D53A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088D542C;
      }
      goto L_088D53A8;
    }
L_088D53A8:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[10]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[3] = (0u | 0u);
    aot_gpr[4] = (ctx.lo);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[12] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[11] = (0u | 0u);
      if (branch_taken) {
          goto L_088D5414;
      }
      goto L_088D53DC;
    }
L_088D53DC:
    aot_gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[12] | 0u);
    aot_gpr[31] = (0x088D53ECu);
    aot_gpr[5] = (aot_gpr[3] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D53ECu) goto L_088D53EC;
    return;
L_088D53EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[13] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D5400;
      }
      goto L_088D53F8;
    }
L_088D53F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[11] = (0u | 1u);
      if (branch_taken) {
          goto L_088D5414;
      }
      goto L_088D5400;
    }
L_088D5400:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D53DC;
      }
      goto L_088D5414;
    }
L_088D5414:
    { const bool branch_taken = aot_gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5424;
      }
      goto L_088D541C;
    }
L_088D541C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D57CC;
      }
      goto L_088D5424;
    }
L_088D5424:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1204)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    goto L_088D542C;
L_088D542C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(21))))));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D538C;
      }
      goto L_088D543C;
    }
L_088D543C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (aot_gpr[17] + aot_gpr[17]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(24))))));
    aot_gpr[6] = (aot_gpr[17] + aot_gpr[6]);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[6] << 2u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[17]);
      if (branch_taken) {
          goto L_088D5610;
      }
      goto L_088D5460;
    }
L_088D5460:
    aot_gpr[13] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr[8] = (aot_gpr[17] + static_cast<std::uint32_t>(516));
    aot_gpr[9] = (0u | 0u);
    goto L_088D546C;
L_088D546C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(23)));
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D54F8;
      }
      goto L_088D5480;
    }
L_088D5480:
    aot_gpr[3] = (aot_gpr[8] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    aot_gpr[11] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[11]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_088D54DC;
      }
      goto L_088D5498;
    }
L_088D5498:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1204)));
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[11] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[9]);
    aot_gpr[31] = (0x088D54B4u);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D54B4u) goto L_088D54B4;
    return;
L_088D54B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[12] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D54C8;
      }
      goto L_088D54C0;
    }
L_088D54C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (0u | 1u);
      if (branch_taken) {
          goto L_088D54DC;
      }
      goto L_088D54C8;
    }
L_088D54C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[11]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5498;
      }
      goto L_088D54DC;
    }
L_088D54DC:
    { const bool branch_taken = aot_gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D54EC;
      }
      goto L_088D54E4;
    }
L_088D54E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D57CC;
      }
      goto L_088D54EC;
    }
L_088D54EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1204)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088D55FC;
      }
      goto L_088D54F8;
    }
L_088D54F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(102)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_088D5564;
      }
      goto L_088D5504;
    }
L_088D5504:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[11] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[11]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5554;
      }
      goto L_088D5518;
    }
L_088D5518:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1204)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(102)));
    aot_gpr[31] = (0x088D552Cu);
    aot_gpr[5] = (aot_gpr[11] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D552Cu) goto L_088D552C;
    return;
L_088D552C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D5540;
      }
      goto L_088D5538;
    }
L_088D5538:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (0u | 1u);
      if (branch_taken) {
          goto L_088D5554;
      }
      goto L_088D5540;
    }
L_088D5540:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[11]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5518;
      }
      goto L_088D5554;
    }
L_088D5554:
    { const bool branch_taken = aot_gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5564;
      }
      goto L_088D555C;
    }
L_088D555C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D57CC;
      }
      goto L_088D5564;
    }
L_088D5564:
    aot_gpr[10] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1204)));
    aot_gpr[3] = (0u | 0u);
    goto L_088D5570;
L_088D5570:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[11] = (0u | 0u);
      if (branch_taken) {
          goto L_088D55E4;
      }
      goto L_088D5580;
    }
L_088D5580:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[12] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[12]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D55D4;
      }
      goto L_088D5594;
    }
L_088D5594:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1204)));
    aot_gpr[4] = (aot_gpr[13] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[3]);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(96)));
    aot_gpr[31] = (0x088D55ACu);
    aot_gpr[5] = (aot_gpr[12] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D55ACu) goto L_088D55AC;
    return;
L_088D55AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[14] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D55C0;
      }
      goto L_088D55B8;
    }
L_088D55B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[11] = (0u | 1u);
      if (branch_taken) {
          goto L_088D55D4;
      }
      goto L_088D55C0;
    }
L_088D55C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[12]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5594;
      }
      goto L_088D55D4;
    }
L_088D55D4:
    { const bool branch_taken = aot_gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D55E4;
      }
      goto L_088D55DC;
    }
L_088D55DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D57CC;
      }
      goto L_088D55E4;
    }
L_088D55E4:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[10]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1204)));
      if (branch_taken) {
          goto L_088D5570;
      }
      goto L_088D55F8;
    }
L_088D55F8:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    goto L_088D55FC;
L_088D55FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(24))))));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D546C;
      }
      goto L_088D5610;
    }
L_088D5610:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(84));
      if (branch_taken) {
          goto L_088D568C;
      }
      goto L_088D5620;
    }
L_088D5620:
    aot_gpr[9] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_088D5678;
      }
      goto L_088D5638;
    }
L_088D5638:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1204)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x088D5650u);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(2))))));
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D5650u) goto L_088D5650;
    return;
L_088D5650:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[10] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D5664;
      }
      goto L_088D565C;
    }
L_088D565C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_088D5678;
      }
      goto L_088D5664;
    }
L_088D5664:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5638;
      }
      goto L_088D5678;
    }
L_088D5678:
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5688;
      }
      goto L_088D5680;
    }
L_088D5680:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D57CC;
      }
      goto L_088D5688;
    }
L_088D5688:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1204)));
    goto L_088D568C;
L_088D568C:
    aot_gpr[7] = (0u | 0u);
    goto L_088D5690;
L_088D5690:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(20))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (ctx.lo);
    aot_gpr[6] = (aot_gpr[5] << 3u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_088D5740;
      }
      goto L_088D56BC;
    }
L_088D56BC:
    aot_gpr[10] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5730;
      }
      goto L_088D56D4;
    }
L_088D56D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1204)));
    goto L_088D56D8;
L_088D56D8:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(20))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[11] = (ctx.lo);
    aot_gpr[2] = (aot_gpr[11] << 3u);
    aot_gpr[2] = (aot_gpr[11] + aot_gpr[2]);
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[11]);
    aot_gpr[31] = (0x088D5708u);
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(2))))));
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D5708u) goto L_088D5708;
    return;
L_088D5708:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[11] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D571C;
      }
      goto L_088D5714;
    }
L_088D5714:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_088D5730;
      }
      goto L_088D571C;
    }
L_088D571C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1204)));
        goto L_088D56D8;
    }
    goto L_088D5730;
L_088D5730:
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5740;
      }
      goto L_088D5738;
    }
L_088D5738:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D57CC;
      }
      goto L_088D5740;
    }
L_088D5740:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[7]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1204)));
      if (branch_taken) {
          goto L_088D5690;
      }
      goto L_088D5750;
    }
L_088D5750:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D57C8;
      }
      goto L_088D5760;
    }
L_088D5760:
    aot_gpr[9] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_088D57B8;
      }
      goto L_088D5778;
    }
L_088D5778:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1204)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x088D5790u);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(2))))));
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D5790u) goto L_088D5790;
    return;
L_088D5790:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[10] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D57A4;
      }
      goto L_088D579C;
    }
L_088D579C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_088D57B8;
      }
      goto L_088D57A4;
    }
L_088D57A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5778;
      }
      goto L_088D57B8;
    }
L_088D57B8:
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D57C8;
      }
      goto L_088D57C0;
    }
L_088D57C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D57CC;
      }
      goto L_088D57C8;
    }
L_088D57C8:
    aot_gpr[2] = (aot_gpr[20] | 0u);
    goto L_088D57CC;
L_088D57CC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D57F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[6] = (2218u << 16u);
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
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-5680)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 8u);
      if (branch_taken) {
          goto L_088D59FC;
      }
      goto L_088D5840;
    }
L_088D5840:
    aot_gpr[19] = (0u | 1000u);
    aot_gpr[23] = (0u | 100u);
    aot_gpr[22] = (0u | 1u);
    goto L_088D584C;
L_088D584C:
    aot_gpr[31] = (0x088D5854u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 95u, 0x0881C710u>(ctx, &aot_mem) && ctx.pc == 0x088D5854u) goto L_088D5854;
    return;
L_088D5854:
    aot_gpr[30] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[31] = (0x088D5868u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 229u, 0x088B7F30u>(ctx, &aot_mem) && ctx.pc == 0x088D5868u) goto L_088D5868;
    return;
L_088D5868:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_088D592C;
      }
      goto L_088D5874;
    }
L_088D5874:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (0u | 0u);
    goto L_088D587C;
L_088D587C:
    aot_gpr[4] = (0u | 12u);
    aot_gpr[31] = (0x088D5888u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 182u, 0x08872D68u>(ctx, &aot_mem) && ctx.pc == 0x088D5888u) goto L_088D5888;
    return;
L_088D5888:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D58E4;
      }
      goto L_088D5894;
    }
L_088D5894:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[19]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[21] = (ctx.lo);
    aot_gpr[31] = (0x088D58B0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 95u, 0x0881C710u>(ctx, &aot_mem) && ctx.pc == 0x088D58B0u) goto L_088D58B0;
    return;
L_088D58B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088D58E4;
      }
      goto L_088D58BC;
    }
L_088D58BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[19]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[23]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.lo);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_088D58E4;
      }
      goto L_088D58E0;
    }
L_088D58E0:
    aot_gpr[18] = (aot_gpr[22] | 0u);
    goto L_088D58E4;
L_088D58E4:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088D58F4;
      }
      goto L_088D58EC;
    }
L_088D58EC:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D587C;
      }
      goto L_088D58F4;
    }
L_088D58F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(128)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088D5904u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5104)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088D5904u) goto L_088D5904;
    return;
L_088D5904:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088D5920;
      }
      goto L_088D5910;
    }
L_088D5910:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088D591Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_088D5140;
L_088D591C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_088D5920;
L_088D5920:
    aot_gpr[5] = (aot_gpr[30] << 2u);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1104), aot_gpr[4]);
    goto L_088D592C;
L_088D592C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088D59D0;
      }
      goto L_088D5938;
    }
L_088D5938:
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088D5944u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088D51E8;
L_088D5944:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1304)));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088D5958u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    goto L_088D5220;
L_088D5958:
    aot_gpr[31] = (0x088D5960u);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 101u, 0x08888B08u>(ctx, &aot_mem) && ctx.pc == 0x088D5960u) goto L_088D5960;
    return;
L_088D5960:
    aot_gpr[31] = (0x088D5968u);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 101u, 0x08888B08u>(ctx, &aot_mem) && ctx.pc == 0x088D5968u) goto L_088D5968;
    return;
L_088D5968:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_088D5960;
      }
      goto L_088D5974;
    }
L_088D5974:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (0u | 9u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088D5998;
      }
      goto L_088D5988;
    }
L_088D5988:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088D5994u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    goto L_088D52F0;
L_088D5994:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_088D5998;
L_088D5998:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D59C4;
      }
      goto L_088D59A0;
    }
L_088D59A0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x088D59B4u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 108u, 0x088B7764u>(ctx, &aot_mem) && ctx.pc == 0x088D59B4u) goto L_088D59B4;
    return;
L_088D59B4:
    aot_gpr[4] = (aot_gpr[30] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1204)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    goto L_088D59C4;
L_088D59C4:
    aot_gpr[30] = (2218u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-5680)));
      if (branch_taken) {
          goto L_088D59EC;
      }
      goto L_088D59D0;
    }
L_088D59D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[30] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1204)));
    aot_gpr[30] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-5680)));
    goto L_088D59EC;
L_088D59EC:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[30] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D584C;
      }
      goto L_088D59FC;
    }
L_088D59FC:
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
L_088D5A2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088D5A4Cu);
    aot_gpr[6] = (0u | 2208u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5A4Cu) goto L_088D5A4C;
    return;
L_088D5A4C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1100), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2168), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2172), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2160), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2120), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2186), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088D5A6C;
L_088D5A6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2124), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D5A6C;
      }
      goto L_088D5A80;
    }
L_088D5A80:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2112), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2116), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(2180), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2198), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2199), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(2176), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(2178), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(1454), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2205), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2188), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2193), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2195), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2201), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2185), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x088D5AC8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 160u, 0x088D4FE4u>(ctx, &aot_mem) && ctx.pc == 0x088D5AC8u) goto L_088D5AC8;
    return;
L_088D5AC8:
    aot_gpr[31] = (0x088D5AD0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088D5010;
L_088D5AD0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088D5AE0u);
    aot_gpr[5] = (0u | 49152u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x088D5AE0u) goto L_088D5AE0;
    return;
L_088D5AE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(948), aot_gpr[2]);
    aot_gpr[31] = (0x088D5AECu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(952), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 192u, 0x088DCEF0u>(ctx, &aot_mem) && ctx.pc == 0x088D5AECu) goto L_088D5AEC;
    return;
L_088D5AEC:
    aot_gpr[31] = (0x088D5AF4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088D50E0;
L_088D5AF4:
    aot_gpr[31] = (0x088D5AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 100u, 0x08876558u>(ctx, &aot_mem) && ctx.pc == 0x088D5AFCu) goto L_088D5AFC;
    return;
L_088D5AFC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088D5B08u);
    aot_gpr[5] = (0u | 0u);
    goto L_088D57F0;
L_088D5B08:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5B18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[9] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D5B40;
      }
      goto L_088D5B2C;
    }
L_088D5B2C:
    aot_gpr[31] = (0x088D5B34u);
    aot_gpr[4] = (aot_gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 191u, 0x08A51FE0u>(ctx, &aot_mem) && ctx.pc == 0x088D5B34u) goto L_088D5B34;
    return;
L_088D5B34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5B2C;
      }
      goto L_088D5B40;
    }
L_088D5B40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[10] = (aot_gpr[9] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088D5B60;
      }
      goto L_088D5B4C;
    }
L_088D5B4C:
    aot_gpr[31] = (0x088D5B54u);
    aot_gpr[4] = (aot_gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 191u, 0x08A51FE0u>(ctx, &aot_mem) && ctx.pc == 0x088D5B54u) goto L_088D5B54;
    return;
L_088D5B54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5B4C;
      }
      goto L_088D5B60;
    }
L_088D5B60:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[11] = (aot_gpr[9] + static_cast<std::uint32_t>(24));
    goto L_088D5B68;
L_088D5B68:
    aot_gpr[10] = (aot_gpr[11] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5B8C;
      }
      goto L_088D5B78;
    }
L_088D5B78:
    aot_gpr[31] = (0x088D5B80u);
    aot_gpr[4] = (aot_gpr[11] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 191u, 0x08A51FE0u>(ctx, &aot_mem) && ctx.pc == 0x088D5B80u) goto L_088D5B80;
    return;
L_088D5B80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5B78;
      }
      goto L_088D5B8C;
    }
L_088D5B8C:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088D5B68;
      }
      goto L_088D5B9C;
    }
L_088D5B9C:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[11] = (aot_gpr[9] + static_cast<std::uint32_t>(84));
    aot_gpr[10] = (aot_gpr[9] + static_cast<std::uint32_t>(516));
    goto L_088D5BA8;
L_088D5BA8:
    aot_gpr[3] = (aot_gpr[11] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5BCC;
      }
      goto L_088D5BB8;
    }
L_088D5BB8:
    aot_gpr[31] = (0x088D5BC0u);
    aot_gpr[4] = (aot_gpr[11] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 191u, 0x08A51FE0u>(ctx, &aot_mem) && ctx.pc == 0x088D5BC0u) goto L_088D5BC0;
    return;
L_088D5BC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5BB8;
      }
      goto L_088D5BCC;
    }
L_088D5BCC:
    aot_gpr[3] = (aot_gpr[10] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5BF0;
      }
      goto L_088D5BDC;
    }
L_088D5BDC:
    aot_gpr[31] = (0x088D5BE4u);
    aot_gpr[4] = (aot_gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 191u, 0x08A51FE0u>(ctx, &aot_mem) && ctx.pc == 0x088D5BE4u) goto L_088D5BE4;
    return;
L_088D5BE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5BDC;
      }
      goto L_088D5BF0;
    }
L_088D5BF0:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < 36 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088D5BA8;
      }
      goto L_088D5C04;
    }
L_088D5C04:
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(952), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5C14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088D5C24u);
    aot_gpr[12] = (aot_gpr[4] | 0u);
    goto L_088D5B18;
L_088D5C24:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088D5C34u);
    aot_gpr[5] = (aot_gpr[12] + static_cast<std::uint32_t>(948));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088D5C34u) goto L_088D5C34;
    return;
L_088D5C34:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5C40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088D5C54u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 23u, 0x088DD19Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5C54u) goto L_088D5C54;
    return;
L_088D5C54:
    aot_gpr[31] = (0x088D5C5Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 160u, 0x088D4FE4u>(ctx, &aot_mem) && ctx.pc == 0x088D5C5Cu) goto L_088D5C5C;
    return;
L_088D5C5C:
    aot_gpr[31] = (0x088D5C64u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088D5010;
L_088D5C64:
    aot_gpr[31] = (0x088D5C6Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088D5C14;
L_088D5C6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(952), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5C80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[17]);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1100)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088D5CC8;
      }
      goto L_088D5CB8;
    }
L_088D5CB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_088D5CC8;
      }
      goto L_088D5CC4;
    }
L_088D5CC4:
    aot_gpr[5] = (0u | 0u);
    goto L_088D5CC8;
L_088D5CC8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(2191), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_088D5D88;
      }
      goto L_088D5CD0;
    }
L_088D5CD0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(56));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088D5CF4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D5CF4u) goto L_088D5CF4;
    return;
L_088D5CF4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5D88;
      }
      goto L_088D5CFC;
    }
L_088D5CFC:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x088D5D08u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 158u, 0x08872BF0u>(ctx, &aot_mem) && ctx.pc == 0x088D5D08u) goto L_088D5D08;
    return;
L_088D5D08:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5D88;
      }
      goto L_088D5D14;
    }
L_088D5D14:
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(956));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088D5D28u);
    aot_gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5D28u) goto L_088D5D28;
    return;
L_088D5D28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(128)));
    aot_gpr[5] = (0u | 32768u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1088), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(1092), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088D5D48u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32720));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088D5D48u) goto L_088D5D48;
    return;
L_088D5D48:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088D5D54u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088D5D54u) goto L_088D5D54;
    return;
L_088D5D54:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088D5D68u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32732));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088D5D68u) goto L_088D5D68;
    return;
L_088D5D68:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088D5D7Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 221u, 0x08877FD0u>(ctx, &aot_mem) && ctx.pc == 0x088D5D7Cu) goto L_088D5D7C;
    return;
L_088D5D7C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(2195), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(2112), aot_gpr[16]);
    goto L_088D5D88;
L_088D5D88:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5DA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2178)));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088D5DC4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 229u, 0x088B7F30u>(ctx, &aot_mem) && ctx.pc == 0x088D5DC4u) goto L_088D5DC4;
    return;
L_088D5DC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2178)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1204)));
      if (branch_taken) {
          goto L_088D5DFC;
      }
      goto L_088D5DDC;
    }
L_088D5DDC:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(20))))));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5DF0;
      }
      goto L_088D5DE8;
    }
L_088D5DE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5DFC;
      }
      goto L_088D5DF0;
    }
L_088D5DF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1104)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088D5DFC;
      }
      goto L_088D5DFC;
    }
L_088D5DFC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5E0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2184), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25552)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(956));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088D5E7Cu);
    aot_gpr[6] = (0u | 64u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D5E7Cu) goto L_088D5E7C;
    return;
L_088D5E7C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088D5E8Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-32764));
    if (rt.invoke_chained_direct<&recomp_unit_0567_entry, 567u, 276u, 0x08A3BFC0u>(ctx, &aot_mem) && ctx.pc == 0x088D5E8Cu) goto L_088D5E8C;
    return;
L_088D5E8C:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088D5EA0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-32760));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088D5EA0u) goto L_088D5EA0;
    return;
L_088D5EA0:
    aot_gpr[20] = (0u | 32768u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x088D5EC0u);
    aot_gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 70u, 0x08877444u>(ctx, &aot_mem) && ctx.pc == 0x088D5EC0u) goto L_088D5EC0;
    return;
L_088D5EC0:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088D5EE8;
      }
      goto L_088D5ED0;
    }
L_088D5ED0:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088D5EE4u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 116u, 0x0885B8B8u>(ctx, &aot_mem) && ctx.pc == 0x088D5EE4u) goto L_088D5EE4;
    return;
L_088D5EE4:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_088D5EE8;
L_088D5EE8:
    aot_gpr[21] = (aot_gpr[17] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088D5F00u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-32744));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088D5F00u) goto L_088D5F00;
    return;
L_088D5F00:
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x088D5F0Cu);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088D5F0Cu) goto L_088D5F0C;
    return;
L_088D5F0C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088D5F1Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-32716));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088D5F1Cu) goto L_088D5F1C;
    return;
L_088D5F1C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x088D5F38u);
    aot_gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 70u, 0x08877444u>(ctx, &aot_mem) && ctx.pc == 0x088D5F38u) goto L_088D5F38;
    return;
L_088D5F38:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5FD0;
      }
      goto L_088D5F44;
    }
L_088D5F44:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088D5F64;
      }
      goto L_088D5F50;
    }
L_088D5F50:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088D5F60u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0284_entry, 284u, 83u, 0x08920718u>(ctx, &aot_mem) && ctx.pc == 0x088D5F60u) goto L_088D5F60;
    return;
L_088D5F60:
    aot_gpr[18] = (aot_gpr[20] | 0u);
    goto L_088D5F64;
L_088D5F64:
    aot_gpr[31] = (0x088D5F6Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0284_entry, 284u, 62u, 0x08920528u>(ctx, &aot_mem) && ctx.pc == 0x088D5F6Cu) goto L_088D5F6C;
    return;
L_088D5F6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (0u | 1u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[5]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[18] | 0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[31] = (0x088D5FD0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 250u, 0x0891EF6Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5FD0u) goto L_088D5FD0;
    return;
L_088D5FD0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2112)));
    aot_gpr[31] = (0x088D5FDCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7492)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088D5FDCu) goto L_088D5FDC;
    return;
L_088D5FDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1100), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2168), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2172), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2160), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 1000u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x088D6000u; return;
}

void recomp_unit_0209(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0209_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_209(Runtime &runtime) {
    runtime.register_generated_unit(209u, 0x088D5000u, 4096u, &recomp_unit_0209, &recomp_unit_0209_entry);
    runtime.register_function(0x088D5000u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5008u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5010u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5054u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5070u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5074u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D508Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5094u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D50C0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D50C4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D50D8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D50E0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D50F4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5110u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5134u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5140u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5158u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5168u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D51A4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D51CCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D51D8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D51E8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5200u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5208u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5220u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D526Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5284u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5294u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D52B4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D52D0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D52F0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D533Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D534Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5358u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D536Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5370u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5388u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D538Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D53A0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D53A8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D53DCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D53ECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D53F8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5400u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5414u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D541Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5424u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D542Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D543Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5460u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D546Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5480u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5498u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D54B4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D54C0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D54C8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D54DCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D54E4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D54ECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D54F8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5504u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5518u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D552Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5538u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5540u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5554u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D555Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5564u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5570u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5580u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5594u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D55ACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D55B8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D55C0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D55D4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D55DCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D55E4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D55F8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D55FCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5610u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5620u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5638u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5650u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D565Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5664u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5678u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5680u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5688u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D568Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5690u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D56BCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D56D4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D56D8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5708u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5714u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D571Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5730u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5738u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5740u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5750u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5760u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5778u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5790u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D579Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D57A4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D57B8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D57C0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D57C8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D57CCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D57F0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5840u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D584Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5854u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5868u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5874u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D587Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5888u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5894u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D58B0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D58BCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D58E0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D58E4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D58ECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D58F4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5904u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5910u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D591Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5920u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D592Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5938u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5944u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5958u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5960u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5968u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5974u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5988u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5994u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5998u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D59A0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D59B4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D59C4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D59D0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D59ECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D59FCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5A2Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5A4Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5A6Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5A80u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5AC8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5AD0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5AE0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5AECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5AF4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5AFCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5B08u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5B18u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5B2Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5B34u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5B40u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5B4Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5B54u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5B60u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5B68u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5B78u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5B80u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5B8Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5B9Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5BA8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5BB8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5BC0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5BCCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5BDCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5BE4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5BF0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5C04u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5C14u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5C24u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5C34u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5C40u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5C54u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5C5Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5C64u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5C6Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5C80u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5CB8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5CC4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5CC8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5CD0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5CF4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5CFCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5D08u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5D14u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5D28u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5D48u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5D54u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5D68u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5D7Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5D88u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5DA4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5DC4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5DDCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5DE8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5DF0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5DFCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5E0Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5E7Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5E8Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5EA0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5EC0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5ED0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5EE4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5EE8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5F00u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5F0Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5F1Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5F38u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5F44u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5F50u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5F60u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5F64u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5F6Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5FD0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x088D5FDCu, &recomp_unit_0209, "recomp_unit_0209");
}
} // namespace psprecomp
