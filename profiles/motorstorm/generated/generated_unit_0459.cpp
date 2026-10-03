#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0459[1023] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0,
    4, 0, 0, 5, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 10, 0, 11, 12, 0, 0, 0, 0, 13, 0, 14, 0, 0,
    0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 20, 0,
    0, 0, 21, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 29, 0, 0, 30, 0, 31, 32, 0, 0, 33, 0, 34, 35, 0, 0,
    36, 37, 0, 38, 39, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 45,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 0, 54, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 59, 0,
    0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 63, 0, 0, 0, 64, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 74, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 81, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 87, 0, 0, 88, 0, 89, 0, 0, 90, 91, 0, 92, 0, 0, 93, 94, 0, 0, 95, 0, 0, 96, 0, 97, 0, 98, 0, 0, 99, 0, 100,
    0, 0, 101, 102, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 110, 0, 0, 0,
    111, 0, 0, 112, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123,
    0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 128, 0, 0, 129, 0, 130, 0, 131, 0, 0, 132, 0, 133, 0, 134, 0, 135, 0, 0, 136, 0,
    0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 142, 0, 0, 143, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 147, 148, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 156, 0, 157, 0, 0, 158, 0, 0, 159, 0, 160, 0, 161, 0, 0, 162, 0, 163, 0, 164, 0, 0,
    165, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0,
    174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 178, 179, 0, 180, 0, 0, 0, 0, 181, 0, 0,
    0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0,
    0, 0, 0, 0, 0, 0, 0, 191, 192, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0,
    0, 196, 197, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 200, 201, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0,
    205, 0, 206, 0, 207, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 215, 0, 0, 216, 0, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 220, 221, 0, 222, 0, 223,
};
void recomp_unit_0459_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089CF004u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0459[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089CF004;
    case 2u: goto L_089CF00C;
    case 3u: goto L_089CF078;
    case 4u: goto L_089CF084;
    case 5u: goto L_089CF090;
    case 6u: goto L_089CF094;
    case 7u: goto L_089CF0A4;
    case 8u: goto L_089CF0BC;
    case 9u: goto L_089CF0C8;
    case 10u: goto L_089CF0D0;
    case 11u: goto L_089CF0D8;
    case 12u: goto L_089CF0DC;
    case 13u: goto L_089CF0F0;
    case 14u: goto L_089CF0F8;
    case 15u: goto L_089CF11C;
    case 16u: goto L_089CF12C;
    case 17u: goto L_089CF13C;
    case 18u: goto L_089CF15C;
    case 19u: goto L_089CF174;
    case 20u: goto L_089CF17C;
    case 21u: goto L_089CF18C;
    case 22u: goto L_089CF190;
    case 23u: goto L_089CF1B0;
    case 24u: goto L_089CF1B8;
    case 25u: goto L_089CF1CC;
    case 26u: goto L_089CF21C;
    case 27u: goto L_089CF23C;
    case 28u: goto L_089CF244;
    case 29u: goto L_089CF248;
    case 30u: goto L_089CF254;
    case 31u: goto L_089CF25C;
    case 32u: goto L_089CF260;
    case 33u: goto L_089CF26C;
    case 34u: goto L_089CF274;
    case 35u: goto L_089CF278;
    case 36u: goto L_089CF284;
    case 37u: goto L_089CF288;
    case 38u: goto L_089CF290;
    case 39u: goto L_089CF294;
    case 40u: goto L_089CF298;
    case 41u: goto L_089CF2C8;
    case 42u: goto L_089CF2D0;
    case 43u: goto L_089CF2F0;
    case 44u: goto L_089CF2FC;
    case 45u: goto L_089CF300;
    case 46u: goto L_089CF314;
    case 47u: goto L_089CF328;
    case 48u: goto L_089CF344;
    case 49u: goto L_089CF358;
    case 50u: goto L_089CF36C;
    case 51u: goto L_089CF398;
    case 52u: goto L_089CF3A0;
    case 53u: goto L_089CF3A8;
    case 54u: goto L_089CF3B8;
    case 55u: goto L_089CF3C0;
    case 56u: goto L_089CF3CC;
    case 57u: goto L_089CF3E8;
    case 58u: goto L_089CF3F4;
    case 59u: goto L_089CF3FC;
    case 60u: goto L_089CF418;
    case 61u: goto L_089CF434;
    case 62u: goto L_089CF43C;
    case 63u: goto L_089CF444;
    case 64u: goto L_089CF454;
    case 65u: goto L_089CF45C;
    case 66u: goto L_089CF46C;
    case 67u: goto L_089CF49C;
    case 68u: goto L_089CF4BC;
    case 69u: goto L_089CF4D0;
    case 70u: goto L_089CF4D4;
    case 71u: goto L_089CF4DC;
    case 72u: goto L_089CF51C;
    case 73u: goto L_089CF528;
    case 74u: goto L_089CF540;
    case 75u: goto L_089CF544;
    case 76u: goto L_089CF550;
    case 77u: goto L_089CF584;
    case 78u: goto L_089CF58C;
    case 79u: goto L_089CF59C;
    case 80u: goto L_089CF5AC;
    case 81u: goto L_089CF5B8;
    case 82u: goto L_089CF5BC;
    case 83u: goto L_089CF5E0;
    case 84u: goto L_089CF618;
    case 85u: goto L_089CF634;
    case 86u: goto L_089CF65C;
    case 87u: goto L_089CF688;
    case 88u: goto L_089CF694;
    case 89u: goto L_089CF69C;
    case 90u: goto L_089CF6A8;
    case 91u: goto L_089CF6AC;
    case 92u: goto L_089CF6B4;
    case 93u: goto L_089CF6C0;
    case 94u: goto L_089CF6C4;
    case 95u: goto L_089CF6D0;
    case 96u: goto L_089CF6DC;
    case 97u: goto L_089CF6E4;
    case 98u: goto L_089CF6EC;
    case 99u: goto L_089CF6F8;
    case 100u: goto L_089CF700;
    case 101u: goto L_089CF70C;
    case 102u: goto L_089CF710;
    case 103u: goto L_089CF714;
    case 104u: goto L_089CF740;
    case 105u: goto L_089CF748;
    case 106u: goto L_089CF750;
    case 107u: goto L_089CF758;
    case 108u: goto L_089CF7E0;
    case 109u: goto L_089CF7E8;
    case 110u: goto L_089CF7F4;
    case 111u: goto L_089CF804;
    case 112u: goto L_089CF810;
    case 113u: goto L_089CF814;
    case 114u: goto L_089CF81C;
    case 115u: goto L_089CF83C;
    case 116u: goto L_089CF858;
    case 117u: goto L_089CF870;
    case 118u: goto L_089CF884;
    case 119u: goto L_089CF8A4;
    case 120u: goto L_089CF8BC;
    case 121u: goto L_089CF8C0;
    case 122u: goto L_089CF8F4;
    case 123u: goto L_089CF900;
    case 124u: goto L_089CF910;
    case 125u: goto L_089CF944;
    case 126u: goto L_089CF994;
    case 127u: goto L_089CF99C;
    case 128u: goto L_089CF9B0;
    case 129u: goto L_089CF9BC;
    case 130u: goto L_089CF9C4;
    case 131u: goto L_089CF9CC;
    case 132u: goto L_089CF9D8;
    case 133u: goto L_089CF9E0;
    case 134u: goto L_089CF9E8;
    case 135u: goto L_089CF9F0;
    case 136u: goto L_089CF9FC;
    case 137u: goto L_089CFA0C;
    case 138u: goto L_089CFA30;
    case 139u: goto L_089CFA44;
    case 140u: goto L_089CFA60;
    case 141u: goto L_089CFA68;
    case 142u: goto L_089CFA70;
    case 143u: goto L_089CFA7C;
    case 144u: goto L_089CFA84;
    case 145u: goto L_089CFAC8;
    case 146u: goto L_089CFAD0;
    case 147u: goto L_089CFADC;
    case 148u: goto L_089CFAE0;
    case 149u: goto L_089CFB14;
    case 150u: goto L_089CFB2C;
    case 151u: goto L_089CFB44;
    case 152u: goto L_089CFB4C;
    case 153u: goto L_089CFB60;
    case 154u: goto L_089CFB8C;
    case 155u: goto L_089CFBA0;
    case 156u: goto L_089CFBAC;
    case 157u: goto L_089CFBB4;
    case 158u: goto L_089CFBC0;
    case 159u: goto L_089CFBCC;
    case 160u: goto L_089CFBD4;
    case 161u: goto L_089CFBDC;
    case 162u: goto L_089CFBE8;
    case 163u: goto L_089CFBF0;
    case 164u: goto L_089CFBF8;
    case 165u: goto L_089CFC04;
    case 166u: goto L_089CFC1C;
    case 167u: goto L_089CFC24;
    case 168u: goto L_089CFC3C;
    case 169u: goto L_089CFC8C;
    case 170u: goto L_089CFC98;
    case 171u: goto L_089CFCD0;
    case 172u: goto L_089CFCD8;
    case 173u: goto L_089CFCFC;
    case 174u: goto L_089CFD04;
    case 175u: goto L_089CFD10;
    case 176u: goto L_089CFD3C;
    case 177u: goto L_089CFD4C;
    case 178u: goto L_089CFD58;
    case 179u: goto L_089CFD5C;
    case 180u: goto L_089CFD64;
    case 181u: goto L_089CFD78;
    case 182u: goto L_089CFD8C;
    case 183u: goto L_089CFD9C;
    case 184u: goto L_089CFDAC;
    case 185u: goto L_089CFDB8;
    case 186u: goto L_089CFDC4;
    case 187u: goto L_089CFDD4;
    case 188u: goto L_089CFDDC;
    case 189u: goto L_089CFDEC;
    case 190u: goto L_089CFDFC;
    case 191u: goto L_089CFE20;
    case 192u: goto L_089CFE24;
    case 193u: goto L_089CFE34;
    case 194u: goto L_089CFE3C;
    case 195u: goto L_089CFE68;
    case 196u: goto L_089CFE88;
    case 197u: goto L_089CFE8C;
    case 198u: goto L_089CFE98;
    case 199u: goto L_089CFEB0;
    case 200u: goto L_089CFEBC;
    case 201u: goto L_089CFEC0;
    case 202u: goto L_089CFEC4;
    case 203u: goto L_089CFEE8;
    case 204u: goto L_089CFEF0;
    case 205u: goto L_089CFF04;
    case 206u: goto L_089CFF0C;
    case 207u: goto L_089CFF14;
    case 208u: goto L_089CFF2C;
    case 209u: goto L_089CFF34;
    case 210u: goto L_089CFF54;
    case 211u: goto L_089CFF5C;
    case 212u: goto L_089CFF64;
    case 213u: goto L_089CFF9C;
    case 214u: goto L_089CFFA4;
    case 215u: goto L_089CFFAC;
    case 216u: goto L_089CFFB8;
    case 217u: goto L_089CFFC8;
    case 218u: goto L_089CFFD4;
    case 219u: goto L_089CFFE0;
    case 220u: goto L_089CFFE8;
    case 221u: goto L_089CFFEC;
    case 222u: goto L_089CFFF4;
    case 223u: goto L_089CFFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089CF004:
    aot_gpr[2] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0458_entry, 458u, 236u, 0x089CEFC0u>(ctx, &aot_mem); return;
L_089CF00C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-752));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(736), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    aot_gpr[3] = (aot_gpr[4] + static_cast<std::uint32_t>(116));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(732), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(716), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(740), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(728), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(724), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(720), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(712), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(708), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(704), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(664), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] << 1u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = (aot_gpr[2] >> 4u);
    aot_gpr[2] = (aot_gpr[2] << 4u);
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    aot_gpr[23] = (aot_gpr[29] + 0u);
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(668), aot_gpr[29]);
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(672), aot_gpr[29]);
      if (branch_taken) {
          goto L_089CF290;
      }
      goto L_089CF078;
    }
L_089CF078:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089CF294;
      }
      goto L_089CF084;
    }
L_089CF084:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_089CF288;
    }
    goto L_089CF090;
L_089CF090:
    aot_gpr[17] = (aot_gpr[18] + static_cast<std::uint32_t>(12));
    goto L_089CF094;
L_089CF094:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = ((aot_gpr[2] >> 14u) & 0x00000001u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[21] = (aot_gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089CF3FC;
      }
      goto L_089CF0A4;
    }
L_089CF0A4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(15)));
    aot_gpr[2] = (aot_gpr[7] & 255u);
    aot_gpr[2] = (aot_gpr[2] << 1u);
    aot_gpr[20] = (aot_gpr[21] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(656), aot_gpr[2]);
    goto L_089CF0BC;
L_089CF0BC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[7] & 255u);
      if (branch_taken) {
          goto L_089CF2C8;
      }
      goto L_089CF0C8;
    }
L_089CF0C8:
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(660), 0u);
      if (branch_taken) {
          goto L_089CF0D8;
      }
      goto L_089CF0D0;
    }
L_089CF0D0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(660), aot_gpr[2]);
    goto L_089CF0D8;
L_089CF0D8:
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_089CF0DC;
L_089CF0DC:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (aot_gpr[23] + 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089CF0F0u);
    aot_gpr[7] = (aot_gpr[30] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0458_entry, 458u, 132u, 0x089CE928u>(ctx, &aot_mem) && ctx.pc == 0x089CF0F0u) goto L_089CF0F0;
    return;
L_089CF0F0:
    if (aot_gpr[2] != 0u) {
    aot_gpr[29] = (aot_gpr[30] + 0u);
        goto L_089CF298;
    }
    goto L_089CF0F8;
L_089CF0F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(15)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(668)));
      if (branch_taken) {
          goto L_089CF190;
      }
      goto L_089CF11C;
    }
L_089CF11C:
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u | 65535u);
    goto L_089CF12C;
L_089CF12C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[9];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CF17C;
      }
      goto L_089CF13C;
    }
L_089CF13C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(22)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(22)));
    aot_gpr[7] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(668)));
    aot_gpr[2] = (aot_gpr[2] << 1u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    { const bool branch_taken = aot_gpr[20] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_089CF174;
      }
      goto L_089CF15C;
    }
L_089CF15C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(22)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(672)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] << 1u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
    goto L_089CF174;
L_089CF174:
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(15)));
    goto L_089CF17C;
L_089CF17C:
    aot_gpr[2] = (aot_gpr[7] & 255u);
    aot_gpr[2] = (aot_gpr[8] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CF12C;
      }
      goto L_089CF18C;
    }
L_089CF18C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(668)));
    goto L_089CF190;
L_089CF190:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(672)));
    aot_gpr[16] = (aot_gpr[30] + static_cast<std::uint32_t>(104));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[30] + static_cast<std::uint32_t>(654));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[30] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x089CF1B0u);
    aot_gpr[10] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 30u, 0x089CC268u>(ctx, &aot_mem) && ctx.pc == 0x089CF1B0u) goto L_089CF1B0;
    return;
L_089CF1B0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(22));
      if (branch_taken) {
          goto L_089CF294;
      }
      goto L_089CF1B8;
    }
L_089CF1B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[31] = (0x089CF1CCu);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089CF1CCu) goto L_089CF1CC;
    return;
L_089CF1CC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(656)));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(100), 0u);
    aot_gpr[10] = (aot_gpr[30] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(96), 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(104), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(32), aot_gpr[3]);
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(40), aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(96), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(100), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(44), aot_gpr[4]);
      if (branch_taken) {
          goto L_089CF418;
      }
      goto L_089CF21C;
    }
L_089CF21C:
    aot_gpr[11] = (aot_gpr[10] + 0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[23] + 0u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[31] = (0x089CF23Cu);
    aot_gpr[10] = (aot_gpr[30] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 153u, 0x089C1B60u>(ctx, &aot_mem) && ctx.pc == 0x089CF23Cu) goto L_089CF23C;
    return;
L_089CF23C:
    if (aot_gpr[2] != 0u) {
    aot_gpr[29] = (aot_gpr[30] + 0u);
        goto L_089CF298;
    }
    goto L_089CF244;
L_089CF244:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_089CF248;
L_089CF248:
    aot_gpr[2] = (aot_gpr[2] & 16384u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(660)));
      if (branch_taken) {
          goto L_089CF25C;
      }
      goto L_089CF254;
    }
L_089CF254:
    if (aot_gpr[4] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089CF444;
    }
    goto L_089CF25C;
L_089CF25C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_089CF260;
L_089CF260:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(664)));
    aot_gpr[31] = (0x089CF26Cu);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 121u, 0x08A4364Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF26Cu) goto L_089CF26C;
    return;
L_089CF26C:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089CF294;
      }
      goto L_089CF274;
    }
L_089CF274:
    aot_gpr[18] = (aot_gpr[16] + 0u);
    goto L_089CF278;
L_089CF278:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[17] = (aot_gpr[18] + static_cast<std::uint32_t>(12));
        goto L_089CF094;
    }
    goto L_089CF284;
L_089CF284:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_089CF288;
L_089CF288:
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[18] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089CF278;
      }
      goto L_089CF290;
    }
L_089CF290:
    aot_gpr[2] = (0u + 0u);
    goto L_089CF294;
L_089CF294:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_089CF298;
L_089CF298:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(740)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(736)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(732)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(728)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(724)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(720)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(716)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(712)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(708)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(704)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(752));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CF2C8:
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_089CF260;
    }
    goto L_089CF2D0;
L_089CF2D0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[8] = (aot_gpr[20] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[22] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(660), aot_gpr[2]);
    goto L_089CF314;
L_089CF2F0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(15)));
    goto L_089CF2FC;
L_089CF2FC:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089CF300;
L_089CF300:
    aot_gpr[2] = (aot_gpr[7] & 255u);
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CF398;
      }
      goto L_089CF314;
    }
L_089CF314:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
        goto L_089CF300;
    }
    goto L_089CF328;
L_089CF328:
    aot_gpr[3] = (aot_gpr[4] << 6u);
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[2] << 3u);
      if (branch_taken) {
          goto L_089CF2F0;
      }
      goto L_089CF344;
    }
L_089CF344:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(580)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089CF45C;
    }
    goto L_089CF358;
L_089CF358:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-3));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(660), 0u);
      if (branch_taken) {
          goto L_089CF2FC;
      }
      goto L_089CF36C;
    }
L_089CF36C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(552)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[22] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[3] == 0u) aot_gpr[2] = (aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[7] & 255u);
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CF314;
      }
      goto L_089CF398;
    }
L_089CF398:
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[16] = (aot_gpr[30] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089CF3E8;
      }
      goto L_089CF3A0;
    }
L_089CF3A0:
    aot_gpr[31] = (0x089CF3A8u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 117u, 0x089927DCu>(ctx, &aot_mem) && ctx.pc == 0x089CF3A8u) goto L_089CF3A8;
    return;
L_089CF3A8:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089CF3B8u);
    aot_gpr[6] = (aot_gpr[30] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 174u, 0x08992B84u>(ctx, &aot_mem) && ctx.pc == 0x089CF3B8u) goto L_089CF3B8;
    return;
L_089CF3B8:
    if (aot_gpr[22] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089CF3CC;
    }
    goto L_089CF3C0;
L_089CF3C0:
    aot_gpr[2] = (7u << 16u);
    aot_gpr[22] = (aot_gpr[2] | 41248u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089CF3CC;
L_089CF3CC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (ctx.lo);
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_089CF0DC;
    }
    goto L_089CF3E8;
L_089CF3E8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(660)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089CF260;
      }
      goto L_089CF3F4;
    }
L_089CF3F4:
    // nop
    goto L_089CF288;
L_089CF3FC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(15)));
    aot_gpr[20] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[7] & 255u);
    aot_gpr[2] = (aot_gpr[2] << 1u);
    aot_gpr[2] = (aot_gpr[21] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(656), aot_gpr[2]);
    goto L_089CF0BC;
L_089CF418:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[31] = (0x089CF434u);
    aot_gpr[9] = (aot_gpr[30] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 104u, 0x089C367Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF434u) goto L_089CF434;
    return;
L_089CF434:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_089CF248;
    }
    goto L_089CF43C;
L_089CF43C:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_089CF298;
L_089CF444:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089CF454u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem) && ctx.pc == 0x089CF454u) goto L_089CF454;
    return;
L_089CF454:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_089CF288;
L_089CF45C:
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(15)));
    goto L_089CF2FC;
L_089CF46C:
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[7] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[5] << 6u);
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[2] << 3u);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CF4D4;
      }
      goto L_089CF49C;
    }
L_089CF49C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(580)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[4] & 32767u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[4] < static_cast<std::uint32_t>(32767) ? 1u : 0u);
      if (branch_taken) {
          goto L_089CF4D4;
      }
      goto L_089CF4BC;
    }
L_089CF4BC:
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[2] ^ aot_gpr[6]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[5] = (aot_gpr[3] ^ 1u);
      if (branch_taken) {
          goto L_089CF4D4;
      }
      goto L_089CF4D0;
    }
L_089CF4D0:
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_089CF4D4;
L_089CF4D4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CF4DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[8] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 65535u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[31]);
    aot_gpr[31] = (0x089CF51Cu);
    aot_gpr[16] = (aot_gpr[9] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 130u, 0x089C29A0u>(ctx, &aot_mem) && ctx.pc == 0x089CF51Cu) goto L_089CF51C;
    return;
L_089CF51C:
    aot_gpr[2] = (aot_gpr[18] & 16384u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089CF618;
      }
      goto L_089CF528;
    }
L_089CF528:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (aot_gpr[17] & 65535u);
    aot_gpr[2] = (aot_gpr[5] & 65535u);
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] & 65535u);
      if (branch_taken) {
          goto L_089CF65C;
      }
      goto L_089CF540;
    }
L_089CF540:
    aot_gpr[2] = (aot_gpr[5] & 65535u);
    goto L_089CF544;
L_089CF544:
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CF5BC;
      }
      goto L_089CF550;
    }
L_089CF550:
    aot_gpr[3] = (aot_gpr[17] << 6u);
    aot_gpr[2] = (aot_gpr[17] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(580)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(255));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (aot_gpr[3] & 255u);
    if (aot_gpr[8] == aot_gpr[2]) {
    aot_gpr[6] = (0u + 0u);
        goto L_089CF5BC;
    }
    goto L_089CF584;
L_089CF584:
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[2] = (aot_gpr[8] << 1u);
      if (branch_taken) {
          goto L_089CF5E0;
      }
      goto L_089CF58C;
    }
L_089CF58C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_gpr[7] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[16];
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_089CF5B8;
      }
      goto L_089CF59C;
    }
L_089CF59C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[8] << 1u);
      if (branch_taken) {
          goto L_089CF5E0;
      }
      goto L_089CF5AC;
    }
L_089CF5AC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[16];
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CF59C;
      }
      goto L_089CF5B8;
    }
L_089CF5B8:
    aot_gpr[6] = (0u + 0u);
    goto L_089CF5BC;
L_089CF5BC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CF5E0:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr[16]));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
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
L_089CF618:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[19] + 0u);
    aot_gpr[9] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089CF634u);
    aot_gpr[10] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 74u, 0x089C66ECu>(ctx, &aot_mem) && ctx.pc == 0x089CF634u) goto L_089CF634;
    return;
L_089CF634:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CF65C:
    aot_gpr[2] = (aot_gpr[17] << 3u);
    aot_gpr[3] = (aot_gpr[17] << 6u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(580)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[16]);
      if (branch_taken) {
          goto L_089CF694;
      }
      goto L_089CF688;
    }
L_089CF688:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_gpr[2]))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    aot_gpr[2] = (aot_gpr[5] & 65535u);
      if (branch_taken) {
          goto L_089CF544;
      }
      goto L_089CF694;
    }
L_089CF694:
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[18]));
        goto L_089CF6C4;
    }
    goto L_089CF69C;
L_089CF69C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[3] == 0u) {
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[18]));
        goto L_089CF6C4;
    }
    goto L_089CF6A8;
L_089CF6A8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    goto L_089CF6AC;
L_089CF6AC:
    if (aot_gpr[2] == aot_gpr[16]) {
    aot_gpr[2] = (aot_gpr[5] & 65535u);
        goto L_089CF544;
    }
    goto L_089CF6B4;
L_089CF6B4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[3] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(12)));
        goto L_089CF6AC;
    }
    goto L_089CF6C0;
L_089CF6C0:
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[18]));
    goto L_089CF6C4;
L_089CF6C4:
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[16]));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089CF750;
      }
      goto L_089CF6D0;
    }
L_089CF6D0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089CF710;
      }
      goto L_089CF6DC;
    }
L_089CF6DC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    goto L_089CF6EC;
L_089CF6E4:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    goto L_089CF6EC;
L_089CF6EC:
    aot_gpr[2] = (aot_gpr[3] - aot_gpr[16]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_gpr[2]))));
      if (branch_taken) {
          goto L_089CF700;
      }
      goto L_089CF6F8;
    }
L_089CF6F8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089CF714;
      }
      goto L_089CF700;
    }
L_089CF700:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[6] + 0u);
      if (branch_taken) {
          goto L_089CF6E4;
      }
      goto L_089CF70C;
    }
L_089CF70C:
    aot_gpr[5] = (aot_gpr[6] + 0u);
    goto L_089CF710;
L_089CF710:
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    goto L_089CF714;
L_089CF714:
    aot_gpr[7] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[2]);
    aot_gpr[31] = (0x089CF740u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 152u, 0x08A437CCu>(ctx, &aot_mem) && ctx.pc == 0x089CF740u) goto L_089CF740;
    return;
L_089CF740:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_089CF5BC;
      }
      goto L_089CF748;
    }
L_089CF748:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(16)));
    goto L_089CF540;
L_089CF750:
    aot_gpr[5] = (0u + 0u);
    goto L_089CF710;
L_089CF758:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-192));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    aot_gpr[10] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[30] + static_cast<std::uint32_t>(26));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[8] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] & 65535u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[18]);
    aot_gpr[7] = (aot_gpr[22] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[23]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[2] << 1u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = (aot_gpr[2] >> 4u);
    aot_gpr[2] = (aot_gpr[2] << 4u);
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[29] + 0u);
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[16] + 0u);
    aot_gpr[9] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CF7E0u);
    aot_gpr[18] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 30u, 0x089CC268u>(ctx, &aot_mem) && ctx.pc == 0x089CF7E0u) goto L_089CF7E0;
    return;
L_089CF7E0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089CF8C0;
      }
      goto L_089CF7E8;
    }
L_089CF7E8:
    aot_gpr[2] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089CF99C;
      }
      goto L_089CF7F4;
    }
L_089CF7F4:
    aot_gpr[5] = (aot_gpr[30] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (0x089CF804u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 130u, 0x089C29A0u>(ctx, &aot_mem) && ctx.pc == 0x089CF804u) goto L_089CF804;
    return;
L_089CF804:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089CF8C0;
      }
      goto L_089CF810;
    }
L_089CF810:
    aot_gpr[19] = (0u + 0u);
    goto L_089CF814;
L_089CF814:
    aot_gpr[23] = (aot_gpr[30] + static_cast<std::uint32_t>(20));
    goto L_089CF870;
L_089CF81C:
    aot_gpr[3] = (aot_gpr[5] << 6u);
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (aot_gpr[2] << 3u);
      if (branch_taken) {
          goto L_089CF858;
      }
      goto L_089CF83C;
    }
L_089CF83C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-3));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
        goto L_089CF8F4;
    }
    goto L_089CF858;
L_089CF858:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[7] & 255u);
    aot_gpr[2] = (aot_gpr[19] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CF8BC;
      }
      goto L_089CF870;
    }
L_089CF870:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[5];
    aot_gpr[6] = (0u - aot_gpr[5]);
      if (branch_taken) {
          goto L_089CF81C;
      }
      goto L_089CF884;
    }
L_089CF884:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(28)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(30)));
    aot_gpr[6] = (aot_gpr[20] + aot_gpr[6]);
    aot_gpr[31] = (0x089CF8A4u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089CF4DC;
L_089CF8A4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(32)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[7] & 255u);
    aot_gpr[2] = (aot_gpr[19] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CF870;
      }
      goto L_089CF8BC;
    }
L_089CF8BC:
    aot_gpr[2] = (0u + 0u);
    goto L_089CF8C0;
L_089CF8C0:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CF8F4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089CF858;
      }
      goto L_089CF900;
    }
L_089CF900:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6));
    aot_gpr[31] = (0x089CF910u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089CF910u) goto L_089CF910;
    return;
L_089CF910:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[30] + static_cast<std::uint32_t>(34));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(30)));
    aot_gpr[8] = (aot_gpr[30] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[31] = (0x089CF944u);
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 71u, 0x089CC618u>(ctx, &aot_mem) && ctx.pc == 0x089CF944u) goto L_089CF944;
    return;
L_089CF944:
    aot_gpr[7] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[20] + aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[12] + aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[6] = (aot_gpr[21] + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (aot_gpr[30] + static_cast<std::uint32_t>(44));
    aot_gpr[10] = (aot_gpr[30] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(108), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(112), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(48), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(52), aot_gpr[23]);
    aot_gpr[31] = (0x089CF994u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(56), aot_gpr[12]);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 104u, 0x089C367Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF994u) goto L_089CF994;
    return;
L_089CF994:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(32)));
    goto L_089CF858;
L_089CF99C:
    aot_gpr[5] = (aot_gpr[30] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (aot_gpr[30] + 0u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[31] = (0x089CF9B0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr[19]));
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 130u, 0x089C29A0u>(ctx, &aot_mem) && ctx.pc == 0x089CF9B0u) goto L_089CF9B0;
    return;
L_089CF9B0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089CF8C0;
      }
      goto L_089CF9BC;
    }
L_089CF9BC:
    aot_gpr[19] = (0u + 0u);
    goto L_089CF814;
L_089CF9C4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF9E0;
      }
      goto L_089CF9CC;
    }
L_089CF9CC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(580)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF9E0;
      }
      goto L_089CF9D8;
    }
L_089CF9D8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(22)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CF9E0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CF9E8:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[10] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089CFA68;
      }
      goto L_089CF9F0;
    }
L_089CF9F0:
    aot_gpr[9] = (aot_gpr[5] + 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[8] = (0u + 0u);
      if (branch_taken) {
          goto L_089CFA68;
      }
      goto L_089CF9FC;
    }
L_089CF9FC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CFA60;
      }
      goto L_089CFA0C;
    }
L_089CFA0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[10] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[4] << 6u);
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (aot_gpr[2] << 3u);
      if (branch_taken) {
          goto L_089CFA60;
      }
      goto L_089CFA30;
    }
L_089CFA30:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(580)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFA60;
      }
      goto L_089CFA44;
    }
L_089CFA44:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(22)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(580)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CFA70;
      }
      goto L_089CFA60;
    }
L_089CFA60:
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CF9FC;
      }
      goto L_089CFA68;
    }
L_089CFA68:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CFA70:
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CF9FC;
      }
      goto L_089CFA7C;
    }
L_089CFA7C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CFA84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-608));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(580), aot_gpr[21]);
    aot_gpr[10] = (aot_gpr[5] & 65535u);
    aot_gpr[21] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(564), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    aot_gpr[8] = (aot_gpr[9] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(560), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(596), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(592), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(588), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(584), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(576), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(572), aot_gpr[19]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(568), aot_gpr[18]);
      if (branch_taken) {
          goto L_089CFF64;
      }
      goto L_089CFAC8;
    }
L_089CFAC8:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_089CFF64;
      }
      goto L_089CFAD0;
    }
L_089CFAD0:
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(22) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          goto L_089CFB14;
      }
      goto L_089CFADC;
    }
L_089CFADC:
    aot_gpr[6] = (0u + 0u);
    goto L_089CFAE0;
L_089CFAE0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(596)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(592)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(588)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(584)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(580)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(576)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(572)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(568)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(564)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(560)));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(608));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CFB14:
    aot_gpr[2] = (aot_gpr[6] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-12640));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CFB2C:
    aot_gpr[4] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[17]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089CFB44u);
    aot_gpr[8] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0455_entry, 455u, 186u, 0x089CBD6Cu>(ctx, &aot_mem) && ctx.pc == 0x089CFB44u) goto L_089CFB44;
    return;
L_089CFB44:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CFAE0;
      }
      goto L_089CFB4C;
    }
L_089CFB4C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(10)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[7] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[7] << 6u);
      if (branch_taken) {
          goto L_089CFF9C;
      }
      goto L_089CFB60;
    }
L_089CFB60:
    aot_gpr[2] = (aot_gpr[7] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-3));
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_089CFAE0;
      }
      goto L_089CFB8C;
    }
L_089CFB8C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(152)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(188)));
    aot_gpr[4] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089CFBA0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CFBA0u) goto L_089CFBA0;
    return;
L_089CFBA0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089CFBB4;
      }
      goto L_089CFBAC;
    }
L_089CFBAC:
    aot_gpr[31] = (0x089CFBB4u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 2u, 0x089C10C8u>(ctx, &aot_mem) && ctx.pc == 0x089CFBB4u) goto L_089CFBB4;
    return;
L_089CFBB4:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089CFBC0u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0449_entry, 449u, 137u, 0x089C5AECu>(ctx, &aot_mem) && ctx.pc == 0x089CFBC0u) goto L_089CFBC0;
    return;
L_089CFBC0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(10)));
    aot_gpr[31] = (0x089CFBCCu);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0458_entry, 458u, 160u, 0x089CEB40u>(ctx, &aot_mem) && ctx.pc == 0x089CFBCCu) goto L_089CFBCC;
    return;
L_089CFBCC:
    aot_gpr[31] = (0x089CFBD4u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 111u, 0x089C3708u>(ctx, &aot_mem) && ctx.pc == 0x089CFBD4u) goto L_089CFBD4;
    return;
L_089CFBD4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CFAE0;
      }
      goto L_089CFBDC;
    }
L_089CFBDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(10)));
    aot_gpr[31] = (0x089CFBE8u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0458_entry, 458u, 233u, 0x089CEF94u>(ctx, &aot_mem) && ctx.pc == 0x089CFBE8u) goto L_089CFBE8;
    return;
L_089CFBE8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CFAE0;
      }
      goto L_089CFBF0;
    }
L_089CFBF0:
    aot_gpr[6] = (0u + 0u);
    goto L_089CFAE0;
L_089CFBF8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089CFADC;
      }
      goto L_089CFC04;
    }
L_089CFC04:
    aot_gpr[4] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[17]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x089CFC1Cu);
    aot_gpr[8] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0455_entry, 455u, 192u, 0x089CBDF0u>(ctx, &aot_mem) && ctx.pc == 0x089CFC1Cu) goto L_089CFC1C;
    return;
L_089CFC1C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CFAE0;
      }
      goto L_089CFC24;
    }
L_089CFC24:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(16)));
    aot_gpr[12] = (aot_gpr[7] & 65535u);
    aot_gpr[2] = (aot_gpr[12] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(22)));
      if (branch_taken) {
          goto L_089CFF9C;
      }
      goto L_089CFC3C;
    }
L_089CFC3C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[12] << 2u);
    aot_gpr[3] = (aot_gpr[13] << 4u);
    aot_gpr[2] = (aot_gpr[13] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[12] << 3u);
    aot_gpr[2] = (aot_gpr[12] << 6u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[12]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[6] + aot_gpr[3]);
    aot_gpr[10] = (aot_gpr[17] - aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[3];
    aot_gpr[9] = (aot_gpr[16] + aot_gpr[2]);
      if (branch_taken) {
          goto L_089CFADC;
      }
      goto L_089CFC8C;
    }
L_089CFC8C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(488)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(27)));
        (void)rt.invoke_chained_direct<&recomp_unit_0460_entry, 460u, 4u, 0x089D0020u>(ctx, &aot_mem); return;
    }
    goto L_089CFC98;
L_089CFC98:
    aot_gpr[4] = (aot_gpr[7] & 65535u);
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[3] = (aot_gpr[4] << 6u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(27)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] << 1u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(18)));
    aot_gpr[6] = (0u + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(470), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089CFAE0;
L_089CFCD0:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(7));
    goto L_089CFAE0;
L_089CFCD8:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[4] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[17]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[8] = (aot_gpr[18] + 0u);
    aot_gpr[9] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CFCFCu);
    aot_gpr[16] = (aot_gpr[10] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 19u, 0x089CC174u>(ctx, &aot_mem) && ctx.pc == 0x089CFCFCu) goto L_089CFCFC;
    return;
L_089CFCFC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CFAE0;
      }
      goto L_089CFD04;
    }
L_089CFD04:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (aot_gpr[16] & 65535u);
      if (branch_taken) {
          goto L_089CFADC;
      }
      goto L_089CFD10;
    }
L_089CFD10:
    aot_gpr[22] = (aot_gpr[2] & 65535u);
    aot_gpr[2] = (aot_gpr[22] << 3u);
    aot_gpr[3] = (aot_gpr[22] << 6u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[22]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(548), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[21] + static_cast<std::uint32_t>(116));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(544), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(552), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(556), aot_gpr[2]);
    goto L_089CFD3C;
L_089CFD3C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(544)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(556)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089CFEC0;
      }
      goto L_089CFD4C;
    }
L_089CFD4C:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(552)));
      if (branch_taken) {
          goto L_089CFEC4;
      }
      goto L_089CFD58;
    }
L_089CFD58:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089CFD5C;
L_089CFD5C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_089CFFEC;
    }
    goto L_089CFD64;
L_089CFD64:
    aot_gpr[20] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[2] & 16384u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_089CFFEC;
    }
    goto L_089CFD78;
L_089CFD78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(15)));
    aot_gpr[23] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    aot_gpr[2] = (aot_gpr[4] << 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[30] = (aot_gpr[2] + aot_gpr[23]);
      if (branch_taken) {
          goto L_089CFFE8;
      }
      goto L_089CFD8C;
    }
L_089CFD8C:
    aot_gpr[18] = (aot_gpr[23] + 0u);
    aot_gpr[19] = (aot_gpr[30] + 0u);
    aot_gpr[3] = (0u + 0u);
    goto L_089CFDAC;
L_089CFD9C:
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CFFE8;
      }
      goto L_089CFDAC;
    }
L_089CFDAC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] != aot_gpr[22]) {
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
        goto L_089CFD9C;
    }
    goto L_089CFDB8;
L_089CFDB8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] != aot_gpr[5]) {
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
        goto L_089CFD9C;
    }
    goto L_089CFDC4;
L_089CFDC4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089CFE98;
      }
      goto L_089CFDD4;
    }
L_089CFDD4:
    aot_gpr[31] = (0x089CFDDCu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 117u, 0x089927DCu>(ctx, &aot_mem) && ctx.pc == 0x089CFDDCu) goto L_089CFDDC;
    return;
L_089CFDDC:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089CFDECu);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 174u, 0x08992B84u>(ctx, &aot_mem) && ctx.pc == 0x089CFDECu) goto L_089CFDEC;
    return;
L_089CFDEC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[22] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089CFE98;
      }
      goto L_089CFDFC;
    }
L_089CFDFC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(548)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(580)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(548)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(540)));
    aot_gpr[3] = (aot_gpr[7] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(536)));
      if (branch_taken) {
          goto L_089CFE24;
      }
      goto L_089CFE20;
    }
L_089CFE20:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(548), aot_gpr[7]);
    goto L_089CFE24;
L_089CFE24:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(544)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[7] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(544), aot_gpr[7]);
        goto L_089CFE34;
    }
    goto L_089CFE34;
L_089CFE34:
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[5] = (aot_gpr[7] >> 1u);
      if (branch_taken) {
          goto L_089CFE68;
      }
      goto L_089CFE3C;
    }
L_089CFE3C:
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[7]);
    aot_gpr[5] = (0u - aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[9] << 1u);
    aot_gpr[2] = (aot_gpr[8] << 3u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) > static_cast<std::int32_t>(aot_gpr[5]) ? aot_gpr[4] : aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[9]);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[8]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[7] + aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[3] >> 2u);
    aot_gpr[7] = (aot_gpr[2] >> 3u);
    goto L_089CFE68;
L_089CFE68:
    aot_gpr[2] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(16));
    if (aot_gpr[4] != 0u) aot_gpr[2] = (aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[4] < static_cast<std::uint32_t>(5000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (15u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0460_entry, 460u, 3u, 0x089D0010u>(ctx, &aot_mem); return;
      }
      goto L_089CFE88;
    }
L_089CFE88:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(5000));
    goto L_089CFE8C;
L_089CFE8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(552), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(540), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(536), aot_gpr[5]);
    goto L_089CFE98;
L_089CFE98:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(15)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u | 65535u);
      if (branch_taken) {
          goto L_089CFFFC;
      }
      goto L_089CFEB0;
    }
L_089CFEB0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(0)));
        goto L_089CFFA4;
    }
    goto L_089CFEBC;
L_089CFEBC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(10)));
    goto L_089CFEC0;
L_089CFEC0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(552)));
    goto L_089CFEC4;
L_089CFEC4:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(552), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[6] & 255u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(552)));
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(544)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(544), aot_gpr[3]);
      if (branch_taken) {
          goto L_089CFD3C;
      }
      goto L_089CFEE8;
    }
L_089CFEE8:
    aot_gpr[6] = (0u + 0u);
    goto L_089CFAE0;
L_089CFEF0:
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (aot_gpr[10] + 0u);
    aot_gpr[31] = (0x089CFF04u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    goto L_089CF758;
L_089CFF04:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CFAE0;
      }
      goto L_089CFF0C;
    }
L_089CFF0C:
    aot_gpr[6] = (0u + 0u);
    goto L_089CFAE0;
L_089CFF14:
    aot_gpr[4] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[17]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089CFF2Cu);
    aot_gpr[8] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 71u, 0x089CC618u>(ctx, &aot_mem) && ctx.pc == 0x089CFF2Cu) goto L_089CFF2C;
    return;
L_089CFF2C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CFAE0;
      }
      goto L_089CFF34;
    }
L_089CFF34:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(14)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(10)));
    aot_gpr[7] = (aot_gpr[17] - aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089CFF54u);
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[6]);
    goto L_089CF4DC;
L_089CFF54:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CFAE0;
      }
      goto L_089CFF5C;
    }
L_089CFF5C:
    aot_gpr[6] = (0u + 0u);
    goto L_089CFAE0;
L_089CFF64:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(596)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(592)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(588)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(584)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(580)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(576)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(572)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(568)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(564)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(560)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(608));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CFF9C:
    aot_gpr[6] = (0u | 54508u);
    goto L_089CFAE0;
L_089CFFA4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(10)));
      if (branch_taken) {
          goto L_089CFEC0;
      }
      goto L_089CFFAC;
    }
L_089CFFAC:
    aot_gpr[7] = (aot_gpr[30] + 0u);
    aot_gpr[6] = (aot_gpr[23] + 0u);
    aot_gpr[5] = (0u + 0u);
    goto L_089CFFB8;
L_089CFFB8:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u | 65535u);
      if (branch_taken) {
          goto L_089CFFFC;
      }
      goto L_089CFFC8;
    }
L_089CFFC8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CFEBC;
      }
      goto L_089CFFD4;
    }
L_089CFFD4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CFFB8;
      }
      goto L_089CFFE0;
    }
L_089CFFE0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(10)));
    goto L_089CFEC0;
L_089CFFE8:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089CFFEC;
L_089CFFEC:
    if (aot_gpr[17] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089CFD5C;
    }
    goto L_089CFFF4;
L_089CFFF4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(552)));
    goto L_089CFEC4;
L_089CFFFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.pc = 0x089D0000u; return;
}

void recomp_unit_0459(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0459_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_459(Runtime &runtime) {
    runtime.register_generated_unit(459u, 0x089CF000u, 4096u, &recomp_unit_0459, &recomp_unit_0459_entry);
    runtime.register_function(0x089CF004u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF00Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF078u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF084u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF090u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF094u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF0A4u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF0BCu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF0C8u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF0D0u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF0D8u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF0DCu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF0F0u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF0F8u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF11Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF12Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF13Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF15Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF174u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF17Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF18Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF190u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF1B0u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF1B8u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF1CCu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF21Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF23Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF244u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF248u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF254u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF25Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF260u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF26Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF274u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF278u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF284u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF288u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF290u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF294u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF298u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF2C8u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF2D0u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF2F0u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF2FCu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF300u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF314u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF328u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF344u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF358u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF36Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF398u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF3A0u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF3A8u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF3B8u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF3C0u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF3CCu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF3E8u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF3F4u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF3FCu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF418u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF434u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF43Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF444u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF454u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF45Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF46Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF49Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF4BCu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF4D0u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF4D4u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF4DCu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF51Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF528u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF540u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF544u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF550u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF584u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF58Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF59Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF5ACu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF5B8u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF5BCu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF5E0u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF618u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF634u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF65Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF688u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF694u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF69Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF6A8u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF6ACu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF6B4u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF6C0u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF6C4u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF6D0u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF6DCu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF6E4u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF6ECu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF6F8u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF700u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF70Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF710u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF714u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF740u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF748u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF750u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF758u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF7E0u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF7E8u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF7F4u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF804u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF810u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF814u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF81Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF83Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF858u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF870u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF884u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF8A4u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF8BCu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF8C0u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF8F4u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF900u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF910u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF944u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF994u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF99Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF9B0u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF9BCu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF9C4u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF9CCu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF9D8u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF9E0u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF9E8u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF9F0u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CF9FCu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFA0Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFA30u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFA44u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFA60u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFA68u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFA70u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFA7Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFA84u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFAC8u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFAD0u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFADCu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFAE0u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFB14u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFB2Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFB44u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFB4Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFB60u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFB8Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFBA0u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFBACu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFBB4u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFBC0u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFBCCu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFBD4u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFBDCu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFBE8u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFBF0u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFBF8u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFC04u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFC1Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFC24u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFC3Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFC8Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFC98u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFCD0u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFCD8u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFCFCu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFD04u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFD10u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFD3Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFD4Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFD58u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFD5Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFD64u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFD78u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFD8Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFD9Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFDACu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFDB8u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFDC4u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFDD4u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFDDCu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFDECu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFDFCu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFE20u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFE24u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFE34u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFE3Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFE68u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFE88u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFE8Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFE98u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFEB0u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFEBCu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFEC0u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFEC4u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFEE8u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFEF0u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFF04u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFF0Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFF14u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFF2Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFF34u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFF54u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFF5Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFF64u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFF9Cu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFFA4u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFFACu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFFB8u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFFC8u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFFD4u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFFE0u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFFE8u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFFECu, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFFF4u, &recomp_unit_0459, "recomp_unit_0459");
    runtime.register_function(0x089CFFFCu, &recomp_unit_0459, "recomp_unit_0459");
}
} // namespace psprecomp
