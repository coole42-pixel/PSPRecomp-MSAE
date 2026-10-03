#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0514[1018] = {
    1, 0, 0, 2, 0, 3, 0, 0, 4, 0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 11, 12,
    0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 17,
    0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0,
    22, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 31,
    0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 0, 35, 0, 36, 0, 0, 37, 0, 0, 38, 0, 39, 0, 40, 0, 0, 0, 41, 0, 42, 0, 0,
    43, 0, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 49, 0, 50, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 58, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 68, 0, 0, 0, 0, 69, 0, 0,
    0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 72, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0, 78,
    0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0,
    0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 92, 0, 0, 0, 93, 0,
    94, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 99, 0, 100, 0, 0, 101, 0, 0,
    0, 102, 0, 0, 103, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0, 107, 0, 0, 108, 0, 109, 0, 110, 0, 0, 111, 0, 112, 0, 113, 0, 0,
    114, 0, 115, 0, 116, 117, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0,
    123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0,
    0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 132, 0, 133, 0, 0, 134, 0, 135, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 138, 0, 139, 0,
    0, 140, 0, 0, 0, 141, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 146, 0, 147, 0, 148,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0,
    0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 162, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 168, 169, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 174, 0, 0, 0, 0, 175,
    0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0,
    181, 0, 182, 0, 0, 183, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186,
    0, 187, 0, 188, 0, 189, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 199, 0, 200, 0, 201, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 219, 0,
    220, 0, 0, 0, 221, 0, 0, 0, 222, 223, 0, 0, 224, 225, 0, 0, 226, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 230,
    0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 238,
};
void recomp_unit_0514_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A06000u;
        entry_id = (entry_delta < 4072u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0514[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A06000;
    case 2u: goto L_08A0600C;
    case 3u: goto L_08A06014;
    case 4u: goto L_08A06020;
    case 5u: goto L_08A0602C;
    case 6u: goto L_08A06034;
    case 7u: goto L_08A0603C;
    case 8u: goto L_08A0604C;
    case 9u: goto L_08A06054;
    case 10u: goto L_08A06064;
    case 11u: goto L_08A06078;
    case 12u: goto L_08A0607C;
    case 13u: goto L_08A06094;
    case 14u: goto L_08A060B0;
    case 15u: goto L_08A060D0;
    case 16u: goto L_08A060F8;
    case 17u: goto L_08A060FC;
    case 18u: goto L_08A0610C;
    case 19u: goto L_08A0614C;
    case 20u: goto L_08A0615C;
    case 21u: goto L_08A06178;
    case 22u: goto L_08A06180;
    case 23u: goto L_08A0618C;
    case 24u: goto L_08A06198;
    case 25u: goto L_08A061A4;
    case 26u: goto L_08A061B0;
    case 27u: goto L_08A061B8;
    case 28u: goto L_08A061C0;
    case 29u: goto L_08A061EC;
    case 30u: goto L_08A061F4;
    case 31u: goto L_08A061FC;
    case 32u: goto L_08A06204;
    case 33u: goto L_08A06210;
    case 34u: goto L_08A0621C;
    case 35u: goto L_08A0622C;
    case 36u: goto L_08A06234;
    case 37u: goto L_08A06240;
    case 38u: goto L_08A0624C;
    case 39u: goto L_08A06254;
    case 40u: goto L_08A0625C;
    case 41u: goto L_08A0626C;
    case 42u: goto L_08A06274;
    case 43u: goto L_08A06280;
    case 44u: goto L_08A0628C;
    case 45u: goto L_08A06294;
    case 46u: goto L_08A0629C;
    case 47u: goto L_08A062B8;
    case 48u: goto L_08A062C0;
    case 49u: goto L_08A062C8;
    case 50u: goto L_08A062D0;
    case 51u: goto L_08A062D4;
    case 52u: goto L_08A0631C;
    case 53u: goto L_08A06340;
    case 54u: goto L_08A06348;
    case 55u: goto L_08A06358;
    case 56u: goto L_08A06364;
    case 57u: goto L_08A06370;
    case 58u: goto L_08A06378;
    case 59u: goto L_08A06390;
    case 60u: goto L_08A063C4;
    case 61u: goto L_08A063D0;
    case 62u: goto L_08A063D8;
    case 63u: goto L_08A063E0;
    case 64u: goto L_08A06410;
    case 65u: goto L_08A0642C;
    case 66u: goto L_08A0644C;
    case 67u: goto L_08A06458;
    case 68u: goto L_08A06460;
    case 69u: goto L_08A06474;
    case 70u: goto L_08A06498;
    case 71u: goto L_08A064A0;
    case 72u: goto L_08A064AC;
    case 73u: goto L_08A064B4;
    case 74u: goto L_08A064BC;
    case 75u: goto L_08A064D8;
    case 76u: goto L_08A064E0;
    case 77u: goto L_08A064F4;
    case 78u: goto L_08A064FC;
    case 79u: goto L_08A06518;
    case 80u: goto L_08A06528;
    case 81u: goto L_08A0653C;
    case 82u: goto L_08A06544;
    case 83u: goto L_08A06550;
    case 84u: goto L_08A06560;
    case 85u: goto L_08A06574;
    case 86u: goto L_08A06594;
    case 87u: goto L_08A065B0;
    case 88u: goto L_08A065BC;
    case 89u: goto L_08A065CC;
    case 90u: goto L_08A065D4;
    case 91u: goto L_08A065DC;
    case 92u: goto L_08A065E8;
    case 93u: goto L_08A065F8;
    case 94u: goto L_08A06600;
    case 95u: goto L_08A06604;
    case 96u: goto L_08A0661C;
    case 97u: goto L_08A06644;
    case 98u: goto L_08A06650;
    case 99u: goto L_08A06660;
    case 100u: goto L_08A06668;
    case 101u: goto L_08A06674;
    case 102u: goto L_08A06684;
    case 103u: goto L_08A06690;
    case 104u: goto L_08A06698;
    case 105u: goto L_08A066A8;
    case 106u: goto L_08A066B4;
    case 107u: goto L_08A066BC;
    case 108u: goto L_08A066C8;
    case 109u: goto L_08A066D0;
    case 110u: goto L_08A066D8;
    case 111u: goto L_08A066E4;
    case 112u: goto L_08A066EC;
    case 113u: goto L_08A066F4;
    case 114u: goto L_08A06700;
    case 115u: goto L_08A06708;
    case 116u: goto L_08A06710;
    case 117u: goto L_08A06714;
    case 118u: goto L_08A0671C;
    case 119u: goto L_08A06724;
    case 120u: goto L_08A06744;
    case 121u: goto L_08A06760;
    case 122u: goto L_08A06774;
    case 123u: goto L_08A06780;
    case 124u: goto L_08A06788;
    case 125u: goto L_08A067AC;
    case 126u: goto L_08A067C4;
    case 127u: goto L_08A067D0;
    case 128u: goto L_08A067EC;
    case 129u: goto L_08A06808;
    case 130u: goto L_08A06814;
    case 131u: goto L_08A06820;
    case 132u: goto L_08A06828;
    case 133u: goto L_08A06830;
    case 134u: goto L_08A0683C;
    case 135u: goto L_08A06844;
    case 136u: goto L_08A06854;
    case 137u: goto L_08A0685C;
    case 138u: goto L_08A06870;
    case 139u: goto L_08A06878;
    case 140u: goto L_08A06884;
    case 141u: goto L_08A06894;
    case 142u: goto L_08A0689C;
    case 143u: goto L_08A068A4;
    case 144u: goto L_08A068D4;
    case 145u: goto L_08A068E4;
    case 146u: goto L_08A068EC;
    case 147u: goto L_08A068F4;
    case 148u: goto L_08A068FC;
    case 149u: goto L_08A06920;
    case 150u: goto L_08A0692C;
    case 151u: goto L_08A06934;
    case 152u: goto L_08A06948;
    case 153u: goto L_08A0696C;
    case 154u: goto L_08A06990;
    case 155u: goto L_08A069A4;
    case 156u: goto L_08A069A8;
    case 157u: goto L_08A069B4;
    case 158u: goto L_08A069C0;
    case 159u: goto L_08A069CC;
    case 160u: goto L_08A069D4;
    case 161u: goto L_08A06A00;
    case 162u: goto L_08A06A0C;
    case 163u: goto L_08A06A18;
    case 164u: goto L_08A06A20;
    case 165u: goto L_08A06A3C;
    case 166u: goto L_08A06A48;
    case 167u: goto L_08A06A54;
    case 168u: goto L_08A06A84;
    case 169u: goto L_08A06A88;
    case 170u: goto L_08A06A94;
    case 171u: goto L_08A06AA4;
    case 172u: goto L_08A06ABC;
    case 173u: goto L_08A06AE4;
    case 174u: goto L_08A06AE8;
    case 175u: goto L_08A06AFC;
    case 176u: goto L_08A06B18;
    case 177u: goto L_08A06B28;
    case 178u: goto L_08A06B38;
    case 179u: goto L_08A06B58;
    case 180u: goto L_08A06B74;
    case 181u: goto L_08A06B80;
    case 182u: goto L_08A06B88;
    case 183u: goto L_08A06B94;
    case 184u: goto L_08A06B9C;
    case 185u: goto L_08A06BB0;
    case 186u: goto L_08A06BFC;
    case 187u: goto L_08A06C04;
    case 188u: goto L_08A06C0C;
    case 189u: goto L_08A06C14;
    case 190u: goto L_08A06C1C;
    case 191u: goto L_08A06C30;
    case 192u: goto L_08A06C40;
    case 193u: goto L_08A06C50;
    case 194u: goto L_08A06C80;
    case 195u: goto L_08A06CAC;
    case 196u: goto L_08A06D0C;
    case 197u: goto L_08A06D28;
    case 198u: goto L_08A06D30;
    case 199u: goto L_08A06D3C;
    case 200u: goto L_08A06D44;
    case 201u: goto L_08A06D4C;
    case 202u: goto L_08A06D5C;
    case 203u: goto L_08A06D64;
    case 204u: goto L_08A06D80;
    case 205u: goto L_08A06D9C;
    case 206u: goto L_08A06DC0;
    case 207u: goto L_08A06E00;
    case 208u: goto L_08A06E0C;
    case 209u: goto L_08A06E18;
    case 210u: goto L_08A06E24;
    case 211u: goto L_08A06E30;
    case 212u: goto L_08A06E3C;
    case 213u: goto L_08A06E58;
    case 214u: goto L_08A06E90;
    case 215u: goto L_08A06EB4;
    case 216u: goto L_08A06EC8;
    case 217u: goto L_08A06ED8;
    case 218u: goto L_08A06EF0;
    case 219u: goto L_08A06EF8;
    case 220u: goto L_08A06F00;
    case 221u: goto L_08A06F10;
    case 222u: goto L_08A06F20;
    case 223u: goto L_08A06F24;
    case 224u: goto L_08A06F30;
    case 225u: goto L_08A06F34;
    case 226u: goto L_08A06F40;
    case 227u: goto L_08A06F50;
    case 228u: goto L_08A06F58;
    case 229u: goto L_08A06F78;
    case 230u: goto L_08A06F7C;
    case 231u: goto L_08A06F84;
    case 232u: goto L_08A06F90;
    case 233u: goto L_08A06F9C;
    case 234u: goto L_08A06FA8;
    case 235u: goto L_08A06FB4;
    case 236u: goto L_08A06FC0;
    case 237u: goto L_08A06FC8;
    case 238u: goto L_08A06FE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A06000:
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-18344));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(532), aot_gpr[31]);
    goto L_08A0600C;
L_08A0600C:
    if (aot_gpr[19] != 0u) {
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_08A0603C;
    }
    goto L_08A06014;
L_08A06014:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[6] == 0u) {
    aot_gpr[19] = (2215u << 16u);
        goto L_08A06034;
    }
    goto L_08A06020;
L_08A06020:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[7] == aot_gpr[4]) {
    aot_gpr[19] = (aot_gpr[6] | 0u);
        goto L_08A0602C;
    }
    goto L_08A0602C;
L_08A0602C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A0600C;
      }
      goto L_08A06034;
    }
L_08A06034:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-4984));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08A0603C;
L_08A0603C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A0604Cu);
    aot_gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0604Cu) goto L_08A0604C;
    return;
L_08A0604C:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[6] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A0607C;
      }
      goto L_08A06054;
    }
L_08A06054:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[31] = (0x08A06064u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(-4976));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 239u, 0x089F0D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06064u) goto L_08A06064;
    return;
L_08A06064:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 513u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A06078u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08A06078u) goto L_08A06078;
    return;
L_08A06078:
    aot_gpr[6] = (2215u << 16u);
    goto L_08A0607C;
L_08A0607C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A06094u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4960));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08A06094u) goto L_08A06094;
    return;
L_08A06094:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(516)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(520)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(524)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(528)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(532)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A060B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(672)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A060FC;
      }
      goto L_08A060D0;
    }
L_08A060D0:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(676)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A060F8u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A060F8u) goto L_08A060F8;
    return;
L_08A060F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(672), 0u);
    goto L_08A060FC;
L_08A060FC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0610C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16480));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16432), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16436), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16440), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16444), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16448), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16452), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16456), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16460), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16464), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16468), aot_gpr[31]);
    aot_gpr[31] = (0x08A0614Cu);
    aot_gpr[6] = (0u | 16384u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0614Cu) goto L_08A0614C;
    return;
L_08A0614C:
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[31] = (0x08A0615Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 239u, 0x089F0D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0615Cu) goto L_08A0615C;
    return;
L_08A0615C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr[20] = (2215u << 16u);
    aot_gpr[5] = (0u | 47u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-10404));
    if (aot_gpr[4] == aot_gpr[5]) {
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08A06178;
    }
    goto L_08A06178;
L_08A06178:
    aot_gpr[31] = (0x08A06180u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 240u, 0x089F0D54u>(ctx, &aot_mem) && ctx.pc == 0x08A06180u) goto L_08A06180;
    return;
L_08A06180:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (0u | 16384u);
      if (branch_taken) {
          goto L_08A061C0;
      }
      goto L_08A0618C;
    }
L_08A0618C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A06198u);
    aot_gpr[5] = (0u | 61u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 197u, 0x08A3AA54u>(ctx, &aot_mem) && ctx.pc == 0x08A06198u) goto L_08A06198;
    return;
L_08A06198:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (0u | 16384u);
      if (branch_taken) {
          goto L_08A061C0;
      }
      goto L_08A061A4;
    }
L_08A061A4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 16384u);
      if (branch_taken) {
          goto L_08A061C0;
      }
      goto L_08A061B0;
    }
L_08A061B0:
    aot_gpr[31] = (0x08A061B8u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 68u, 0x089EF3FCu>(ctx, &aot_mem) && ctx.pc == 0x08A061B8u) goto L_08A061B8;
    return;
L_08A061B8:
    aot_gpr[19] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (0u | 16384u);
    goto L_08A061C0;
L_08A061C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16384), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16388), aot_gpr[4]);
    aot_gpr[4] = (0u | 12u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16392), aot_gpr[19]);
    aot_gpr[21] = (aot_gpr[20] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16396), aot_gpr[4]);
    aot_gpr[22] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16400), aot_gpr[18]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-4944));
    goto L_08A061EC;
L_08A061EC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0628C;
      }
      goto L_08A061F4;
    }
L_08A061F4:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0628C;
      }
      goto L_08A061FC;
    }
L_08A061FC:
    aot_gpr[31] = (0x08A06204u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A06204u) goto L_08A06204;
    return;
L_08A06204:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A06210u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A06210u) goto L_08A06210;
    return;
L_08A06210:
    aot_gpr[30] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0621Cu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A0621Cu) goto L_08A0621C;
    return;
L_08A0621C:
    aot_gpr[4] = (aot_gpr[30] - aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[23] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0624C;
      }
      goto L_08A0622C;
    }
L_08A0622C:
    aot_gpr[31] = (0x08A06234u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A06234u) goto L_08A06234;
    return;
L_08A06234:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A06240u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A06240u) goto L_08A06240;
    return;
L_08A06240:
    aot_gpr[5] = (aot_gpr[23] - aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A0625C;
      }
      goto L_08A0624C;
    }
L_08A0624C:
    aot_gpr[31] = (0x08A06254u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A06254u) goto L_08A06254;
    return;
L_08A06254:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    goto L_08A0625C;
L_08A0625C:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08A0626Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A0626Cu) goto L_08A0626C;
    return;
L_08A0626C:
    if (aot_gpr[2] != 0u) {
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08A06280;
    }
    goto L_08A06274;
L_08A06274:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16396), aot_gpr[20]);
    aot_gpr[17] = (0u | 1u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A06280;
L_08A06280:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A061EC;
      }
      goto L_08A0628C;
    }
L_08A0628C:
    aot_gpr[31] = (0x08A06294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A06294u) goto L_08A06294;
    return;
L_08A06294:
    aot_gpr[31] = (0x08A0629Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 239u, 0x089FEEC4u>(ctx, &aot_mem) && ctx.pc == 0x08A0629Cu) goto L_08A0629C;
    return;
L_08A0629C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16384));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A062B8u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A062B8u) goto L_08A062B8;
    return;
L_08A062B8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A063D8;
      }
      goto L_08A062C0;
    }
L_08A062C0:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[17] = (0u | 16382u);
      if (branch_taken) {
          goto L_08A062D4;
      }
      goto L_08A062C8;
    }
L_08A062C8:
    aot_gpr[31] = (0x08A062D0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A062D0u) goto L_08A062D0;
    return;
L_08A062D0:
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(16382));
    goto L_08A062D4;
L_08A062D4:
    aot_gpr[4] = (0u | 200u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16408), aot_gpr[4]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16416), 0u);
    aot_gpr[18] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16404), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(672)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16412), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(676)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16404));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A0631Cu);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0631Cu) goto L_08A0631C;
    return;
L_08A0631C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(672)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(676)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16420));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(56));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A06340u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A06340u) goto L_08A06340;
    return;
L_08A06340:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A063E0;
      }
      goto L_08A06348;
    }
L_08A06348:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16424)));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A063E0;
      }
      goto L_08A06358;
    }
L_08A06358:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A06364u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4936));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x08A06364u) goto L_08A06364;
    return;
L_08A06364:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16420)));
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16424)));
      if (branch_taken) {
          goto L_08A06378;
      }
      goto L_08A06370;
    }
L_08A06370:
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-4932));
    goto L_08A06378;
L_08A06378:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A06390u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08A06390u) goto L_08A06390;
    return;
L_08A06390:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(672)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(676)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16428)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(48));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16420)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    jump_target = aot_gpr[10];
    aot_gpr[31] = (0x08A063C4u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A063C4u) goto L_08A063C4;
    return;
L_08A063C4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A063D0u);
    aot_gpr[5] = (0u | 0u);
    goto L_08A060B0;
L_08A063D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A063E0;
      }
      goto L_08A063D8;
    }
L_08A063D8:
    aot_gpr[31] = (0x08A063E0u);
    aot_gpr[5] = (0u | 2u);
    goto L_08A060B0;
L_08A063E0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16432)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16436)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16440)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16444)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16448)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16452)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16456)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16460)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16464)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16468)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16480));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06410:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A06460;
      }
      goto L_08A0642C;
    }
L_08A0642C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12208));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18248), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0644Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0644Cu) goto L_08A0644C;
    return;
L_08A0644C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A06460;
      }
      goto L_08A06458;
    }
L_08A06458:
    aot_gpr[31] = (0x08A06460u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A06528;
L_08A06460:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06474:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18248)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A064BC;
      }
      goto L_08A06498;
    }
L_08A06498:
    aot_gpr[31] = (0x08A064A0u);
    aot_gpr[4] = (0u | 8u);
    goto L_08A064E0;
L_08A064A0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18248), aot_gpr[17]);
        goto L_08A064BC;
    }
    goto L_08A064AC;
L_08A064AC:
    aot_gpr[31] = (0x08A064B4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A06560;
L_08A064B4:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18248), aot_gpr[17]);
    goto L_08A064BC;
L_08A064BC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18248)));
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
L_08A064D8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A064E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A064F4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A064F4u) goto L_08A064F4;
    return;
L_08A064F4:
    aot_gpr[31] = (0x08A064FCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A064FCu) goto L_08A064FC;
    return;
L_08A064FC:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 19u);
    aot_gpr[31] = (0x08A06518u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-4928));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A06518u) goto L_08A06518;
    return;
L_08A06518:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06528:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0653Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0653Cu) goto L_08A0653C;
    return;
L_08A0653C:
    aot_gpr[31] = (0x08A06544u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06544u) goto L_08A06544;
    return;
L_08A06544:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A06550u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A06550u) goto L_08A06550;
    return;
L_08A06550:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06560:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A06574u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A06574u) goto L_08A06574;
    return;
L_08A06574:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12208));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06594:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A065B0u);
    aot_gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A065B0u) goto L_08A065B0;
    return;
L_08A065B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A065BCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A065BCu) goto L_08A065BC;
    return;
L_08A065BC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A065CCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4884));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A065CCu) goto L_08A065CC;
    return;
L_08A065CC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 1u);
        goto L_08A06604;
    }
    goto L_08A065D4;
L_08A065D4:
    aot_gpr[31] = (0x08A065DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A065DCu) goto L_08A065DC;
    return;
L_08A065DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A065E8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A065E8u) goto L_08A065E8;
    return;
L_08A065E8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A065F8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4864));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A065F8u) goto L_08A065F8;
    return;
L_08A065F8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A06604;
      }
      goto L_08A06600;
    }
L_08A06600:
    aot_gpr[17] = (0u | 1u);
    goto L_08A06604;
L_08A06604:
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
L_08A0661C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u | 1u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A06644u);
    aot_gpr[17] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A06644u) goto L_08A06644;
    return;
L_08A06644:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A06650u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A06650u) goto L_08A06650;
    return;
L_08A06650:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A06660u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4884));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06660u) goto L_08A06660;
    return;
L_08A06660:
    if (aot_gpr[2] == 0u) {
    aot_gpr[18] = (0u | 0u);
        goto L_08A06668;
    }
    goto L_08A06668;
L_08A06668:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08A06674u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-4844));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A06674u) goto L_08A06674;
    return;
L_08A06674:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A06684u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A06684u) goto L_08A06684;
    return;
L_08A06684:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A06714;
      }
      goto L_08A06690;
    }
L_08A06690:
    aot_gpr[31] = (0x08A06698u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-4836));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A06698u) goto L_08A06698;
    return;
L_08A06698:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A066A8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A066A8u) goto L_08A066A8;
    return;
L_08A066A8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A06714;
      }
      goto L_08A066B4;
    }
L_08A066B4:
    aot_gpr[31] = (0x08A066BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A066BCu) goto L_08A066BC;
    return;
L_08A066BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A066C8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A066C8u) goto L_08A066C8;
    return;
L_08A066C8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A06714;
      }
      goto L_08A066D0;
    }
L_08A066D0:
    aot_gpr[31] = (0x08A066D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A066D8u) goto L_08A066D8;
    return;
L_08A066D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A066E4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A066E4u) goto L_08A066E4;
    return;
L_08A066E4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A06714;
      }
      goto L_08A066EC;
    }
L_08A066EC:
    aot_gpr[31] = (0x08A066F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A066F4u) goto L_08A066F4;
    return;
L_08A066F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A06700u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A06700u) goto L_08A06700;
    return;
L_08A06700:
    aot_gpr[31] = (0x08A06708u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 99u, 0x08A39508u>(ctx, &aot_mem) && ctx.pc == 0x08A06708u) goto L_08A06708;
    return;
L_08A06708:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A06714;
      }
      goto L_08A06710;
    }
L_08A06710:
    aot_gpr[17] = (0u | 0u);
    goto L_08A06714;
L_08A06714:
    aot_gpr[31] = (0x08A0671Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A0671Cu) goto L_08A0671C;
    return;
L_08A0671C:
    aot_gpr[31] = (0x08A06724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 239u, 0x089FEEC4u>(ctx, &aot_mem) && ctx.pc == 0x08A06724u) goto L_08A06724;
    return;
L_08A06724:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A06744u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A06744u) goto L_08A06744;
    return;
L_08A06744:
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
L_08A06760:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    if (aot_gpr[5] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
        goto L_08A067D0;
    }
    goto L_08A06774;
L_08A06774:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[31] = (0x08A06780u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A06780u) goto L_08A06780;
    return;
L_08A06780:
    aot_gpr[31] = (0x08A06788u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06788u) goto L_08A06788;
    return;
L_08A06788:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[7] = (0u | 18u);
    aot_gpr[31] = (0x08A067ACu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-4832));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A067ACu) goto L_08A067AC;
    return;
L_08A067AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A067C4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A067C4u) goto L_08A067C4;
    return;
L_08A067C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A067D0;
      }
      goto L_08A067D0;
    }
L_08A067D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A067EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0685C;
      }
      goto L_08A06808;
    }
L_08A06808:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 253u);
      if (branch_taken) {
          goto L_08A06844;
      }
      goto L_08A06814;
    }
L_08A06814:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (0u | 253u);
      if (branch_taken) {
          goto L_08A06844;
      }
      goto L_08A06820;
    }
L_08A06820:
    aot_gpr[31] = (0x08A06828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A06828u) goto L_08A06828;
    return;
L_08A06828:
    aot_gpr[31] = (0x08A06830u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06830u) goto L_08A06830;
    return;
L_08A06830:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A0683Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0683Cu) goto L_08A0683C;
    return;
L_08A0683C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (0u | 253u);
    goto L_08A06844;
L_08A06844:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0685C;
      }
      goto L_08A06854;
    }
L_08A06854:
    aot_gpr[31] = (0x08A0685Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0685Cu) goto L_08A0685C;
    return;
L_08A0685C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06870:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06878:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0689C;
      }
      goto L_08A06884;
    }
L_08A06884:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[5] << 2u);
      if (branch_taken) {
          goto L_08A0689C;
      }
      goto L_08A06894;
    }
L_08A06894:
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A0689C;
L_08A0689C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A068A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A0696C;
      }
      goto L_08A068D4;
    }
L_08A068D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[19] = (0u | 0u);
    goto L_08A068E4;
L_08A068E4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A0696C;
      }
      goto L_08A068EC;
    }
L_08A068EC:
    aot_gpr[31] = (0x08A068F4u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    goto L_08A06878;
L_08A068F4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0696C;
      }
      goto L_08A068FC;
    }
L_08A068FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A06920u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A06920u) goto L_08A06920;
    return;
L_08A06920:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0692Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0692Cu) goto L_08A0692C;
    return;
L_08A0692C:
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[20]);
        goto L_08A06948;
    }
    goto L_08A06934;
L_08A06934:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A068E4;
      }
      goto L_08A06948;
    }
L_08A06948:
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
L_08A0696C:
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
L_08A06990:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A069CC;
      }
      goto L_08A069A4;
    }
L_08A069A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A069A8;
L_08A069A8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A069C0;
      }
      goto L_08A069B4;
    }
L_08A069B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A069C0:
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A069A8;
      }
      goto L_08A069CC;
    }
L_08A069CC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A069D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A06AA4;
      }
      goto L_08A06A00;
    }
L_08A06A00:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    goto L_08A06A0C;
L_08A06A0C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[7] != aot_gpr[5]) {
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08A06A94;
    }
    goto L_08A06A18;
L_08A06A18:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A06A48;
      }
      goto L_08A06A20;
    }
L_08A06A20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A06A3Cu);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A06A3Cu) goto L_08A06A3C;
    return;
L_08A06A3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    goto L_08A06A48;
L_08A06A48:
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] << 2u);
      if (branch_taken) {
          goto L_08A06A88;
      }
      goto L_08A06A54;
    }
L_08A06A54:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] << 2u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A06A54;
      }
      goto L_08A06A84;
    }
L_08A06A84:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    goto L_08A06A88;
L_08A06A88:
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A06AA4;
      }
      goto L_08A06A94;
    }
L_08A06A94:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A06A0C;
      }
      goto L_08A06AA4;
    }
L_08A06AA4:
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
L_08A06ABC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[5] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A06B38;
      }
      goto L_08A06AE4;
    }
L_08A06AE4:
    aot_gpr[17] = (0u | 0u);
    goto L_08A06AE8;
L_08A06AE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08A06B28;
    }
    goto L_08A06AFC;
L_08A06AFC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A06B18u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A06B18u) goto L_08A06B18;
    return;
L_08A06B18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A06B28;
L_08A06B28:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A06AE8;
      }
      goto L_08A06B38;
    }
L_08A06B38:
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
L_08A06B58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A06B74u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    goto L_08A06ABC;
L_08A06B74:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A06B9C;
      }
      goto L_08A06B80;
    }
L_08A06B80:
    aot_gpr[31] = (0x08A06B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A06B88u) goto L_08A06B88;
    return;
L_08A06B88:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(72)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A06B94u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A06B94u) goto L_08A06B94;
    return;
L_08A06B94:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A06B9C;
L_08A06B9C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06BB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12280));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[8] | 0u);
    aot_gpr[22] = (aot_gpr[7] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08A06BFCu);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 56u, 0x08A0C430u>(ctx, &aot_mem) && ctx.pc == 0x08A06BFCu) goto L_08A06BFC;
    return;
L_08A06BFC:
    aot_gpr[31] = (0x08A06C04u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(708));
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 151u, 0x08A0BA10u>(ctx, &aot_mem) && ctx.pc == 0x08A06C04u) goto L_08A06C04;
    return;
L_08A06C04:
    aot_gpr[31] = (0x08A06C0Cu);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(720));
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 151u, 0x08A0BA10u>(ctx, &aot_mem) && ctx.pc == 0x08A06C0Cu) goto L_08A06C0C;
    return;
L_08A06C0C:
    aot_gpr[31] = (0x08A06C14u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(756));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 121u, 0x089F06BCu>(ctx, &aot_mem) && ctx.pc == 0x08A06C14u) goto L_08A06C14;
    return;
L_08A06C14:
    aot_gpr[31] = (0x08A06C1Cu);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1432));
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 197u, 0x089FFC98u>(ctx, &aot_mem) && ctx.pc == 0x08A06C1Cu) goto L_08A06C1C;
    return;
L_08A06C1C:
    aot_gpr[21] = (0u | 39324u);
    aot_gpr[21] = (aot_gpr[17] + aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A06C30u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 3u, 0x08A46010u>(ctx, &aot_mem) && ctx.pc == 0x08A06C30u) goto L_08A06C30;
    return;
L_08A06C30:
    aot_gpr[4] = (0u | 39368u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[31] = (0x08A06C40u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 93u, 0x08A0C6D8u>(ctx, &aot_mem) && ctx.pc == 0x08A06C40u) goto L_08A06C40;
    return;
L_08A06C40:
    aot_gpr[4] = (0u | 39456u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[31] = (0x08A06C50u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_08A06760;
L_08A06C50:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[5] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26088), 0u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26084), 0u);
    aot_gpr[20] = (0u | 39448u);
    aot_gpr[4] = (0u | 39476u);
    aot_gpr[20] = (aot_gpr[17] + aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[31] = (0x08A06C80u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_08A06760;
L_08A06C80:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[5] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26068), 0u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26064), 0u);
    aot_gpr[19] = (0u | 39468u);
    aot_gpr[4] = (0u | 39508u);
    aot_gpr[19] = (aot_gpr[17] + aot_gpr[19]);
    aot_gpr[31] = (0x08A06CACu);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 121u, 0x089F06BCu>(ctx, &aot_mem) && ctx.pc == 0x08A06CACu) goto L_08A06CAC;
    return;
L_08A06CAC:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[5] = (1u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-25360), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[5] = (1u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-25103), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[5] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-24844), 0u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-24840), 0u);
    aot_gpr[4] = (1u << 16u);
    aot_gpr[5] = (0u | 99u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[6] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-24836), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    aot_gpr[5] = (0u | 40708u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-24832), 0u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A06D0Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 207u, 0x08A0CECCu>(ctx, &aot_mem) && ctx.pc == 0x08A06D0Cu) goto L_08A06D0C;
    return;
L_08A06D0C:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26172), 0u);
    aot_gpr[18] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(732), aot_gpr[22]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[18] = (aot_gpr[17] + aot_gpr[18]);
      if (branch_taken) {
          goto L_08A06D3C;
      }
      goto L_08A06D28;
    }
L_08A06D28:
    aot_gpr[31] = (0x08A06D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 222u, 0x089FEE14u>(ctx, &aot_mem) && ctx.pc == 0x08A06D30u) goto L_08A06D30;
    return;
L_08A06D30:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-26096), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A06D4C;
      }
      goto L_08A06D3C;
    }
L_08A06D3C:
    aot_gpr[31] = (0x08A06D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 227u, 0x089FEE4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06D44u) goto L_08A06D44;
    return;
L_08A06D44:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-26096), aot_gpr[2]);
    aot_gpr[18] = (0u < aot_gpr[2] ? 1u : 0u);
    goto L_08A06D4C;
L_08A06D4C:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[31] = (0x08A06D5Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26092), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A06D5Cu) goto L_08A06D5C;
    return;
L_08A06D5C:
    aot_gpr[31] = (0x08A06D64u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06D64u) goto L_08A06D64;
    return;
L_08A06D64:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 115u);
    aot_gpr[31] = (0x08A06D80u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-4800));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A06D80u) goto L_08A06D80;
    return;
L_08A06D80:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26196), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A06D9Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06D9Cu) goto L_08A06D9C;
    return;
L_08A06D9C:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[5] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26192), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26188), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A06DC0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 109u, 0x08A0767Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06DC0u) goto L_08A06DC0;
    return;
L_08A06DC0:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[16] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-26044), aot_gpr[20]);
    aot_gpr[18] = (aot_gpr[17] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-26048), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26048)));
    aot_gpr[5] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[5] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26180), 0u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[31] = (0x08A06E00u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26176), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A06E00u) goto L_08A06E00;
    return;
L_08A06E00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08A06E0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A06E0Cu) goto L_08A06E0C;
    return;
L_08A06E0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-26044)));
    aot_gpr[31] = (0x08A06E18u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A06E18u) goto L_08A06E18;
    return;
L_08A06E18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08A06E24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A06E24u) goto L_08A06E24;
    return;
L_08A06E24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26048)));
    aot_gpr[31] = (0x08A06E30u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A06E30u) goto L_08A06E30;
    return;
L_08A06E30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08A06E3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A06E3Cu) goto L_08A06E3C;
    return;
L_08A06E3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(744), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(740), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(704), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1424), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1428), 0u);
    aot_gpr[31] = (0x08A06E58u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 28u, 0x08A4616Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06E58u) goto L_08A06E58;
    return;
L_08A06E58:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26200), 0u);
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_08A06E90:
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
          goto L_08A06FC8;
      }
      goto L_08A06EB4;
    }
L_08A06EB4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12280));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x08A06EC8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 125u, 0x08A07744u>(ctx, &aot_mem) && ctx.pc == 0x08A06EC8u) goto L_08A06EC8;
    return;
L_08A06EC8:
    aot_gpr[4] = (0u | 40708u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[31] = (0x08A06ED8u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0521_entry, 521u, 2u, 0x08A0D01Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06ED8u) goto L_08A06ED8;
    return;
L_08A06ED8:
    aot_gpr[4] = (0u | 39508u);
    aot_gpr[19] = (0u | 39448u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[17] + aot_gpr[19]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(1432));
      if (branch_taken) {
          goto L_08A06EF8;
      }
      goto L_08A06EF0;
    }
L_08A06EF0:
    aot_gpr[31] = (0x08A06EF8u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A06EF8u) goto L_08A06EF8;
    return;
L_08A06EF8:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (0u | 39368u);
      if (branch_taken) {
          goto L_08A06F34;
      }
      goto L_08A06F00;
    }
L_08A06F00:
    aot_gpr[4] = (0u | 39468u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 39456u);
      if (branch_taken) {
          goto L_08A06F24;
      }
      goto L_08A06F10;
    }
L_08A06F10:
    aot_gpr[4] = (0u | 39476u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[31] = (0x08A06F20u);
    aot_gpr[5] = (0u | 2u);
    goto L_08A067EC;
L_08A06F20:
    aot_gpr[4] = (0u | 39456u);
    goto L_08A06F24;
L_08A06F24:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[31] = (0x08A06F30u);
    aot_gpr[5] = (0u | 2u);
    goto L_08A067EC;
L_08A06F30:
    aot_gpr[4] = (0u | 39368u);
    goto L_08A06F34;
L_08A06F34:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[31] = (0x08A06F40u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 95u, 0x08A0C72Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06F40u) goto L_08A06F40;
    return;
L_08A06F40:
    aot_gpr[4] = (0u | 39324u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[31] = (0x08A06F50u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 6u, 0x08A4604Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06F50u) goto L_08A06F50;
    return;
L_08A06F50:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(756));
      if (branch_taken) {
          goto L_08A06F7C;
      }
      goto L_08A06F58;
    }
L_08A06F58:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 32u);
    aot_gpr[6] = (0u | 1184u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x08A06F78u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-25748));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 105u, 0x08A2D81Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06F78u) goto L_08A06F78;
    return;
L_08A06F78:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(756));
    goto L_08A06F7C;
L_08A06F7C:
    aot_gpr[31] = (0x08A06F84u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A06F84u) goto L_08A06F84;
    return;
L_08A06F84:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(720));
    aot_gpr[31] = (0x08A06F90u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 146u, 0x08A0B9C4u>(ctx, &aot_mem) && ctx.pc == 0x08A06F90u) goto L_08A06F90;
    return;
L_08A06F90:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(708));
    aot_gpr[31] = (0x08A06F9Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 146u, 0x08A0B9C4u>(ctx, &aot_mem) && ctx.pc == 0x08A06F9Cu) goto L_08A06F9C;
    return;
L_08A06F9C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08A06FA8u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 58u, 0x08A0C48Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06FA8u) goto L_08A06FA8;
    return;
L_08A06FA8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A06FB4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 23u, 0x08A011A4u>(ctx, &aot_mem) && ctx.pc == 0x08A06FB4u) goto L_08A06FB4;
    return;
L_08A06FB4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A06FC8;
      }
      goto L_08A06FC0;
    }
L_08A06FC0:
    aot_gpr[31] = (0x08A06FC8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 152u, 0x08A0789Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06FC8u) goto L_08A06FC8;
    return;
L_08A06FC8:
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
L_08A06FE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A07000u);
    aot_gpr[17] = (0u | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 10u, 0x08A07054u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0514(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0514_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_514(Runtime &runtime) {
    runtime.register_generated_unit(514u, 0x08A06000u, 4096u, &recomp_unit_0514, &recomp_unit_0514_entry);
    runtime.register_function(0x08A06000u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A0600Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06014u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06020u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A0602Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06034u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A0603Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A0604Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06054u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06064u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06078u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A0607Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06094u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A060B0u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A060D0u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A060F8u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A060FCu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A0610Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A0614Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A0615Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06178u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06180u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A0618Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06198u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A061A4u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A061B0u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A061B8u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A061C0u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A061ECu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A061F4u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A061FCu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06204u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06210u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A0621Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A0622Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06234u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06240u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A0624Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06254u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A0625Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A0626Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06274u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06280u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A0628Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06294u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A0629Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A062B8u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A062C0u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A062C8u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A062D0u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A062D4u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A0631Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06340u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06348u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06358u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06364u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06370u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06378u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06390u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A063C4u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A063D0u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A063D8u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A063E0u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06410u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A0642Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A0644Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06458u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06460u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06474u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06498u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A064A0u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A064ACu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A064B4u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A064BCu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A064D8u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A064E0u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A064F4u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A064FCu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06518u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06528u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A0653Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06544u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06550u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06560u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06574u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06594u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A065B0u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A065BCu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A065CCu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A065D4u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A065DCu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A065E8u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A065F8u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06600u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06604u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A0661Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06644u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06650u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06660u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06668u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06674u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06684u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06690u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06698u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A066A8u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A066B4u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A066BCu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A066C8u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A066D0u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A066D8u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A066E4u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A066ECu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A066F4u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06700u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06708u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06710u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06714u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A0671Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06724u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06744u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06760u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06774u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06780u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06788u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A067ACu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A067C4u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A067D0u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A067ECu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06808u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06814u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06820u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06828u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06830u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A0683Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06844u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06854u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A0685Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06870u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06878u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06884u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06894u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A0689Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A068A4u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A068D4u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A068E4u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A068ECu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A068F4u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A068FCu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06920u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A0692Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06934u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06948u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A0696Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06990u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A069A4u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A069A8u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A069B4u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A069C0u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A069CCu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A069D4u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06A00u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06A0Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06A18u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06A20u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06A3Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06A48u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06A54u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06A84u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06A88u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06A94u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06AA4u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06ABCu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06AE4u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06AE8u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06AFCu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06B18u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06B28u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06B38u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06B58u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06B74u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06B80u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06B88u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06B94u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06B9Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06BB0u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06BFCu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06C04u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06C0Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06C14u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06C1Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06C30u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06C40u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06C50u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06C80u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06CACu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06D0Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06D28u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06D30u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06D3Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06D44u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06D4Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06D5Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06D64u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06D80u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06D9Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06DC0u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06E00u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06E0Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06E18u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06E24u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06E30u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06E3Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06E58u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06E90u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06EB4u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06EC8u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06ED8u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06EF0u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06EF8u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06F00u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06F10u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06F20u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06F24u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06F30u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06F34u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06F40u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06F50u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06F58u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06F78u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06F7Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06F84u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06F90u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06F9Cu, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06FA8u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06FB4u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06FC0u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06FC8u, &recomp_unit_0514, "recomp_unit_0514");
    runtime.register_function(0x08A06FE4u, &recomp_unit_0514, "recomp_unit_0514");
}
} // namespace psprecomp
