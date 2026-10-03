#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0285[1015] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 6, 0, 0, 0, 0, 0, 7, 0,
    0, 8, 0, 9, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 16,
    0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 19, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0,
    0, 0, 0, 23, 0, 0, 0, 0, 24, 25, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 28, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0,
    38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 41, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0,
    0, 53, 0, 0, 0, 0, 54, 55, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 67, 0, 0,
    0, 0, 68, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 78, 79, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 83, 0, 84, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 91, 0, 0,
    0, 0, 92, 0, 93, 0, 0, 94, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106,
    0, 107, 0, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0,
    0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 119, 0, 0, 0, 0, 120, 0,
    0, 121, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 128, 129, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 132, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 136, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 140, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 143, 0,
    144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149,
    0, 0, 0, 150, 151, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 154, 0, 155, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 159,
    0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170,
    0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 178, 0, 0, 0, 0, 0,
    0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0,
    189, 0, 0, 190, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 204,
    0, 0, 205, 0, 206, 0, 0, 207, 0, 208, 0, 209, 0, 0, 0, 0, 210, 0, 0, 211, 0, 212, 0, 0, 0, 213, 0, 0, 214, 0, 0, 215,
    0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220,
};
void recomp_unit_0285_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08921004u;
        entry_id = (entry_delta < 4060u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0285[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08921004;
    case 2u: goto L_08921020;
    case 3u: goto L_08921034;
    case 4u: goto L_0892104C;
    case 5u: goto L_08921060;
    case 6u: goto L_08921064;
    case 7u: goto L_0892107C;
    case 8u: goto L_08921088;
    case 9u: goto L_08921090;
    case 10u: goto L_08921098;
    case 11u: goto L_089210A0;
    case 12u: goto L_089210C8;
    case 13u: goto L_089210D4;
    case 14u: goto L_089210E4;
    case 15u: goto L_089210F8;
    case 16u: goto L_08921100;
    case 17u: goto L_08921118;
    case 18u: goto L_0892113C;
    case 19u: goto L_08921140;
    case 20u: goto L_08921148;
    case 21u: goto L_08921164;
    case 22u: goto L_08921178;
    case 23u: goto L_08921190;
    case 24u: goto L_089211A4;
    case 25u: goto L_089211A8;
    case 26u: goto L_089211C0;
    case 27u: goto L_089211CC;
    case 28u: goto L_089211D4;
    case 29u: goto L_089211DC;
    case 30u: goto L_089211E4;
    case 31u: goto L_0892120C;
    case 32u: goto L_08921218;
    case 33u: goto L_0892122C;
    case 34u: goto L_08921258;
    case 35u: goto L_08921264;
    case 36u: goto L_08921270;
    case 37u: goto L_0892127C;
    case 38u: goto L_08921284;
    case 39u: goto L_0892129C;
    case 40u: goto L_089212C0;
    case 41u: goto L_089212C4;
    case 42u: goto L_089212D8;
    case 43u: goto L_089212E8;
    case 44u: goto L_089212F4;
    case 45u: goto L_0892131C;
    case 46u: goto L_08921328;
    case 47u: goto L_0892135C;
    case 48u: goto L_08921374;
    case 49u: goto L_089213B4;
    case 50u: goto L_089213BC;
    case 51u: goto L_089213D8;
    case 52u: goto L_089213F0;
    case 53u: goto L_08921408;
    case 54u: goto L_0892141C;
    case 55u: goto L_08921420;
    case 56u: goto L_08921438;
    case 57u: goto L_08921444;
    case 58u: goto L_0892144C;
    case 59u: goto L_08921454;
    case 60u: goto L_0892145C;
    case 61u: goto L_08921484;
    case 62u: goto L_08921490;
    case 63u: goto L_089214AC;
    case 64u: goto L_089214B8;
    case 65u: goto L_089214C4;
    case 66u: goto L_089214F4;
    case 67u: goto L_089214F8;
    case 68u: goto L_0892150C;
    case 69u: goto L_0892151C;
    case 70u: goto L_08921528;
    case 71u: goto L_08921550;
    case 72u: goto L_0892155C;
    case 73u: goto L_08921590;
    case 74u: goto L_089215A8;
    case 75u: goto L_089215E8;
    case 76u: goto L_0892160C;
    case 77u: goto L_08921618;
    case 78u: goto L_0892162C;
    case 79u: goto L_08921630;
    case 80u: goto L_08921648;
    case 81u: goto L_08921654;
    case 82u: goto L_0892165C;
    case 83u: goto L_08921664;
    case 84u: goto L_0892166C;
    case 85u: goto L_08921694;
    case 86u: goto L_089216A0;
    case 87u: goto L_089216B0;
    case 88u: goto L_089216BC;
    case 89u: goto L_089216E4;
    case 90u: goto L_089216F4;
    case 91u: goto L_089216F8;
    case 92u: goto L_0892170C;
    case 93u: goto L_08921714;
    case 94u: goto L_08921720;
    case 95u: goto L_08921728;
    case 96u: goto L_0892173C;
    case 97u: goto L_0892174C;
    case 98u: goto L_08921758;
    case 99u: goto L_0892177C;
    case 100u: goto L_08921794;
    case 101u: goto L_089217A0;
    case 102u: goto L_089217AC;
    case 103u: goto L_089217C0;
    case 104u: goto L_089217CC;
    case 105u: goto L_089217F4;
    case 106u: goto L_08921800;
    case 107u: goto L_08921808;
    case 108u: goto L_08921814;
    case 109u: goto L_08921824;
    case 110u: goto L_08921830;
    case 111u: goto L_08921858;
    case 112u: goto L_08921864;
    case 113u: goto L_08921878;
    case 114u: goto L_0892188C;
    case 115u: goto L_0892189C;
    case 116u: goto L_089218AC;
    case 117u: goto L_089218D4;
    case 118u: goto L_089218DC;
    case 119u: goto L_089218E8;
    case 120u: goto L_089218FC;
    case 121u: goto L_08921908;
    case 122u: goto L_08921914;
    case 123u: goto L_08921928;
    case 124u: goto L_08921934;
    case 125u: goto L_08921940;
    case 126u: goto L_0892195C;
    case 127u: goto L_08921974;
    case 128u: goto L_08921988;
    case 129u: goto L_0892198C;
    case 130u: goto L_089219A4;
    case 131u: goto L_089219B0;
    case 132u: goto L_089219B8;
    case 133u: goto L_089219C0;
    case 134u: goto L_089219C8;
    case 135u: goto L_089219F8;
    case 136u: goto L_089219FC;
    case 137u: goto L_08921A24;
    case 138u: goto L_08921A3C;
    case 139u: goto L_08921A4C;
    case 140u: goto L_08921A50;
    case 141u: goto L_08921A68;
    case 142u: goto L_08921A74;
    case 143u: goto L_08921A7C;
    case 144u: goto L_08921A84;
    case 145u: goto L_08921A8C;
    case 146u: goto L_08921ABC;
    case 147u: goto L_08921AC0;
    case 148u: goto L_08921AE8;
    case 149u: goto L_08921B00;
    case 150u: goto L_08921B10;
    case 151u: goto L_08921B14;
    case 152u: goto L_08921B2C;
    case 153u: goto L_08921B38;
    case 154u: goto L_08921B40;
    case 155u: goto L_08921B48;
    case 156u: goto L_08921B50;
    case 157u: goto L_08921B68;
    case 158u: goto L_08921B7C;
    case 159u: goto L_08921B80;
    case 160u: goto L_08921B94;
    case 161u: goto L_08921B9C;
    case 162u: goto L_08921BB4;
    case 163u: goto L_08921BD8;
    case 164u: goto L_08921BDC;
    case 165u: goto L_08921BF0;
    case 166u: goto L_08921C14;
    case 167u: goto L_08921C28;
    case 168u: goto L_08921C3C;
    case 169u: goto L_08921C54;
    case 170u: goto L_08921C80;
    case 171u: goto L_08921C88;
    case 172u: goto L_08921C90;
    case 173u: goto L_08921C98;
    case 174u: goto L_08921CAC;
    case 175u: goto L_08921CB4;
    case 176u: goto L_08921CD0;
    case 177u: goto L_08921CE8;
    case 178u: goto L_08921CEC;
    case 179u: goto L_08921D08;
    case 180u: goto L_08921D14;
    case 181u: goto L_08921D34;
    case 182u: goto L_08921D44;
    case 183u: goto L_08921D58;
    case 184u: goto L_08921D8C;
    case 185u: goto L_08921DAC;
    case 186u: goto L_08921DC8;
    case 187u: goto L_08921DE8;
    case 188u: goto L_08921DF4;
    case 189u: goto L_08921E04;
    case 190u: goto L_08921E10;
    case 191u: goto L_08921E20;
    case 192u: goto L_08921E28;
    case 193u: goto L_08921E3C;
    case 194u: goto L_08921E4C;
    case 195u: goto L_08921E58;
    case 196u: goto L_08921E64;
    case 197u: goto L_08921E84;
    case 198u: goto L_08921E98;
    case 199u: goto L_08921EA4;
    case 200u: goto L_08921EC4;
    case 201u: goto L_08921ED0;
    case 202u: goto L_08921EE0;
    case 203u: goto L_08921EF8;
    case 204u: goto L_08921F00;
    case 205u: goto L_08921F0C;
    case 206u: goto L_08921F14;
    case 207u: goto L_08921F20;
    case 208u: goto L_08921F28;
    case 209u: goto L_08921F30;
    case 210u: goto L_08921F44;
    case 211u: goto L_08921F50;
    case 212u: goto L_08921F58;
    case 213u: goto L_08921F68;
    case 214u: goto L_08921F74;
    case 215u: goto L_08921F80;
    case 216u: goto L_08921F90;
    case 217u: goto L_08921FA0;
    case 218u: goto L_08921FAC;
    case 219u: goto L_08921FB8;
    case 220u: goto L_08921FDC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08921004:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    goto L_08921020;
L_08921020:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[23] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0284_entry, 284u, 229u, 0x08920FB4u>(ctx, &aot_mem); return;
      }
      goto L_08921034;
    }
L_08921034:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[8]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08921064;
      }
      goto L_0892104C;
    }
L_0892104C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08921060u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 65u, 0x08A553F4u>(ctx, &aot_mem) && ctx.pc == 0x08921060u) goto L_08921060;
    return;
L_08921060:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    goto L_08921064;
L_08921064:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_08921088;
      }
      goto L_0892107C;
    }
L_0892107C:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08921088;
L_08921088:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08921098;
      }
      goto L_08921090;
    }
L_08921090:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(52)));
    goto L_08921098;
L_08921098:
    { const bool branch_taken = aot_gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089211D4;
      }
      goto L_089210A0;
    }
L_089210A0:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[23] << 2u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_089210D4;
      }
      goto L_089210C8;
    }
L_089210C8:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_089210D4;
L_089210D4:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[23] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[6]);
      if (branch_taken) {
          goto L_08921178;
      }
      goto L_089210E4;
    }
L_089210E4:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[6]);
    aot_gpr[20] = (aot_gpr[20] & 4u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    goto L_089210F8;
L_089210F8:
    if (aot_gpr[20] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(52)));
        goto L_08921148;
    }
    goto L_08921100;
L_08921100:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[6] + aot_gpr[16]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08921140;
      }
      goto L_08921118;
    }
L_08921118:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(52)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x0892113Cu);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0317_entry, 317u, 25u, 0x089411F4u>(ctx, &aot_mem) && ctx.pc == 0x0892113Cu) goto L_0892113C;
    return;
L_0892113C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08921140;
L_08921140:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08921164;
      }
      goto L_08921148;
    }
L_08921148:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    goto L_08921164;
L_08921164:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[23] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089210F8;
      }
      goto L_08921178;
    }
L_08921178:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[8]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089211A8;
      }
      goto L_08921190;
    }
L_08921190:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x089211A4u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 105u, 0x08A556D4u>(ctx, &aot_mem) && ctx.pc == 0x089211A4u) goto L_089211A4;
    return;
L_089211A4:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    goto L_089211A8;
L_089211A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_089211CC;
      }
      goto L_089211C0;
    }
L_089211C0:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_089211CC;
L_089211CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089211DC;
      }
      goto L_089211D4;
    }
L_089211D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(52), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
    goto L_089211DC;
L_089211DC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892144C;
      }
      goto L_089211E4;
    }
L_089211E4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_08921218;
      }
      goto L_0892120C;
    }
L_0892120C:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08921218;
L_08921218:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[7]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[6]);
      if (branch_taken) {
          goto L_089213F0;
      }
      goto L_0892122C;
    }
L_0892122C:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[23] & 1u);
    aot_gpr[5] = (aot_gpr[23] & 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[23] & 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[23] = (aot_gpr[23] & 4u);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    goto L_08921258;
L_08921258:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921284;
      }
      goto L_08921264;
    }
L_08921264:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921284;
      }
      goto L_08921270;
    }
L_08921270:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921284;
      }
      goto L_0892127C;
    }
L_0892127C:
    if (aot_gpr[23] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
        goto L_089213BC;
    }
    goto L_08921284;
L_08921284:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[6] + aot_gpr[16]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089212C4;
      }
      goto L_0892129C;
    }
L_0892129C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[19]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x089212C0u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0311_entry, 311u, 25u, 0x0893B18Cu>(ctx, &aot_mem) && ctx.pc == 0x089212C0u) goto L_089212C0;
    return;
L_089212C0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089212C4;
L_089212C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(80));
    goto L_089212D8;
L_089212D8:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089212E8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089212E8u) goto L_089212E8;
    return;
L_089212E8:
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089213B4;
      }
      goto L_089212F4;
    }
L_089212F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0892131Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892131Cu) goto L_0892131C;
    return;
L_0892131C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08921328u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 57u, 0x08A553A4u>(ctx, &aot_mem) && ctx.pc == 0x08921328u) goto L_08921328;
    return;
L_08921328:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(104));
    aot_gpr[8] = (aot_gpr[2] << 2u);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0892135Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892135Cu) goto L_0892135C;
    return;
L_0892135C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[17]);
    aot_gpr[31] = (0x08921374u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 66u, 0x08A5540Cu>(ctx, &aot_mem) && ctx.pc == 0x08921374u) goto L_08921374;
    return;
L_08921374:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[2] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_089212D8;
      }
      goto L_089213B4;
    }
L_089213B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089213D8;
      }
      goto L_089213BC;
    }
L_089213BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    goto L_089213D8;
L_089213D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08921258;
      }
      goto L_089213F0;
    }
L_089213F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[8]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08921420;
      }
      goto L_08921408;
    }
L_08921408:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x0892141Cu);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 85u, 0x08A55564u>(ctx, &aot_mem) && ctx.pc == 0x0892141Cu) goto L_0892141C;
    return;
L_0892141C:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    goto L_08921420;
L_08921420:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_08921444;
      }
      goto L_08921438;
    }
L_08921438:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08921444;
L_08921444:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08921454;
      }
      goto L_0892144C;
    }
L_0892144C:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(36), 0u);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(56)));
    goto L_08921454;
L_08921454:
    { const bool branch_taken = aot_gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892165C;
      }
      goto L_0892145C;
    }
L_0892145C:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[23] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_08921490;
      }
      goto L_08921484;
    }
L_08921484:
    aot_gpr[16] = (aot_gpr[16] - aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_08921490;
L_08921490:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[20] < aot_gpr[23] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[16]);
      if (branch_taken) {
          goto L_0892160C;
      }
      goto L_089214AC;
    }
L_089214AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    goto L_089214B8;
L_089214B8:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089214F8;
      }
      goto L_089214C4;
    }
L_089214C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x089214F4u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0317_entry, 317u, 131u, 0x08941ECCu>(ctx, &aot_mem) && ctx.pc == 0x089214F4u) goto L_089214F4;
    return;
L_089214F4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089214F8;
L_089214F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(80));
    goto L_0892150C;
L_0892150C:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0892151Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892151Cu) goto L_0892151C;
    return;
L_0892151C:
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089215E8;
      }
      goto L_08921528;
    }
L_08921528:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08921550u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08921550u) goto L_08921550;
    return;
L_08921550:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0892155Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 57u, 0x08A553A4u>(ctx, &aot_mem) && ctx.pc == 0x0892155Cu) goto L_0892155C;
    return;
L_0892155C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(104));
    aot_gpr[8] = (aot_gpr[2] << 2u);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08921590u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08921590u) goto L_08921590;
    return;
L_08921590:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[17]);
    aot_gpr[31] = (0x089215A8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 106u, 0x08A556ECu>(ctx, &aot_mem) && ctx.pc == 0x089215A8u) goto L_089215A8;
    return;
L_089215A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[2] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_0892150C;
      }
      goto L_089215E8;
    }
L_089215E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[20] < aot_gpr[23] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[16]);
      if (branch_taken) {
          goto L_089214B8;
      }
      goto L_0892160C;
    }
L_0892160C:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08921630;
      }
      goto L_08921618;
    }
L_08921618:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0892162Cu);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 125u, 0x08A55844u>(ctx, &aot_mem) && ctx.pc == 0x0892162Cu) goto L_0892162C;
    return;
L_0892162C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08921630;
L_08921630:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_08921654;
      }
      goto L_08921648;
    }
L_08921648:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08921654;
L_08921654:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08921664;
      }
      goto L_0892165C;
    }
L_0892165C:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(40)));
    goto L_08921664;
L_08921664:
    { const bool branch_taken = aot_gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089219B8;
      }
      goto L_0892166C;
    }
L_0892166C:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[23] << 2u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_089216A0;
      }
      goto L_08921694;
    }
L_08921694:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_089216A0;
L_089216A0:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[23] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
      if (branch_taken) {
          goto L_0892173C;
      }
      goto L_089216B0;
    }
L_089216B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    goto L_089216BC;
L_089216BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[6]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089216F8;
      }
      goto L_089216E4;
    }
L_089216E4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089216F4u);
    aot_gpr[7] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 188u, 0x08922DA0u>(ctx, &aot_mem) && ctx.pc == 0x089216F4u) goto L_089216F4;
    return;
L_089216F4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089216F8;
L_089216F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
      if (branch_taken) {
          goto L_08921714;
      }
      goto L_0892170C;
    }
L_0892170C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08921714;
L_08921714:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[17] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08921728;
      }
      goto L_08921720;
    }
L_08921720:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(68), aot_gpr[4]);
    goto L_08921728;
L_08921728:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[23] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089216BC;
      }
      goto L_0892173C;
    }
L_0892173C:
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[23] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892188C;
      }
      goto L_0892174C;
    }
L_0892174C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[13] = (0u | 1u);
    aot_gpr[9] = (0u | 0u);
    goto L_08921758;
L_08921758:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(40)));
    aot_gpr[11] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[9]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(210)));
    aot_gpr[4] = (aot_gpr[11] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[12] = (0u | 0u);
      if (branch_taken) {
          goto L_08921878;
      }
      goto L_0892177C;
    }
L_0892177C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(210)));
    aot_gpr[6] = (aot_gpr[11] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[13]));
      if (branch_taken) {
          goto L_089217A0;
      }
      goto L_08921794;
    }
L_08921794:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(308)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_089217A0;
L_089217A0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921800;
      }
      goto L_089217AC;
    }
L_089217AC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(308)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[12]);
    aot_gpr[31] = (0x089217C0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 86u, 0x08A5557Cu>(ctx, &aot_mem) && ctx.pc == 0x089217C0u) goto L_089217C0;
    return;
L_089217C0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08921800;
      }
      goto L_089217CC;
    }
L_089217CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(210)));
    aot_gpr[7] = (aot_gpr[11] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[13]));
      if (branch_taken) {
          goto L_08921800;
      }
      goto L_089217F4;
    }
L_089217F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(308)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08921800;
L_08921800:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08921864;
      }
      goto L_08921808;
    }
L_08921808:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921864;
      }
      goto L_08921814;
    }
L_08921814:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(308)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[12]);
    aot_gpr[31] = (0x08921824u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 126u, 0x08A5585Cu>(ctx, &aot_mem) && ctx.pc == 0x08921824u) goto L_08921824;
    return;
L_08921824:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08921864;
      }
      goto L_08921830;
    }
L_08921830:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(210)));
    aot_gpr[6] = (aot_gpr[11] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[13]));
      if (branch_taken) {
          goto L_08921864;
      }
      goto L_08921858;
    }
L_08921858:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(308)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08921864;
L_08921864:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(210)));
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[11] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0892177C;
      }
      goto L_08921878;
    }
L_08921878:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[23] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08921758;
      }
      goto L_0892188C;
    }
L_0892188C:
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[23] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892195C;
      }
      goto L_0892189C;
    }
L_0892189C:
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[14] = (0u | 1u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[11] = (aot_gpr[15] | 0u);
    goto L_089218AC;
L_089218AC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(40)));
    aot_gpr[12] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[9]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[13] = (0u | 0u);
      if (branch_taken) {
          goto L_089218E8;
      }
      goto L_089218D4;
    }
L_089218D4:
    aot_gpr[31] = (0x089218DCu);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 157u, 0x08A55AD4u>(ctx, &aot_mem) && ctx.pc == 0x089218DCu) goto L_089218DC;
    return;
L_089218DC:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[15] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089218E8;
L_089218E8:
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(160), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921914;
      }
      goto L_089218FC;
    }
L_089218FC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08921908u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 157u, 0x08A55AD4u>(ctx, &aot_mem) && ctx.pc == 0x08921908u) goto L_08921908;
    return;
L_08921908:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[15] + aot_gpr[4]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08921914;
L_08921914:
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(164), aot_gpr[12]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921940;
      }
      goto L_08921928;
    }
L_08921928:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x08921934u);
    aot_gpr[5] = (aot_gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 157u, 0x08A55AD4u>(ctx, &aot_mem) && ctx.pc == 0x08921934u) goto L_08921934;
    return;
L_08921934:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[15] + aot_gpr[4]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08921940;
L_08921940:
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[14]));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(168), aot_gpr[13]);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[23] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089218AC;
      }
      goto L_0892195C;
    }
L_0892195C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[8]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0892198C;
      }
      goto L_08921974;
    }
L_08921974:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08921988u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 156u, 0x08A55ABCu>(ctx, &aot_mem) && ctx.pc == 0x08921988u) goto L_08921988;
    return;
L_08921988:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    goto L_0892198C;
L_0892198C:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_089219B0;
      }
      goto L_089219A4;
    }
L_089219A4:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_089219B0;
L_089219B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_089219C0;
      }
      goto L_089219B8;
    }
L_089219B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(44)));
    goto L_089219C0;
L_089219C0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921A7C;
      }
      goto L_089219C8;
    }
L_089219C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08921A24;
      }
      goto L_089219F8;
    }
L_089219F8:
    aot_gpr[8] = (aot_gpr[5] | 0u);
    goto L_089219FC;
L_089219FC:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[7]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089219FC;
      }
      goto L_08921A24;
    }
L_08921A24:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[8]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08921A50;
      }
      goto L_08921A3C;
    }
L_08921A3C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x08921A4Cu);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 176u, 0x08A55C2Cu>(ctx, &aot_mem) && ctx.pc == 0x08921A4Cu) goto L_08921A4C;
    return;
L_08921A4C:
    aot_gpr[6] = (aot_gpr[8] | 0u);
    goto L_08921A50;
L_08921A50:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(44), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[4] & 15u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08921A74;
      }
      goto L_08921A68;
    }
L_08921A68:
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08921A74;
L_08921A74:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08921A84;
      }
      goto L_08921A7C;
    }
L_08921A7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(48)));
    goto L_08921A84;
L_08921A84:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921B40;
      }
      goto L_08921A8C;
    }
L_08921A8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08921AE8;
      }
      goto L_08921ABC;
    }
L_08921ABC:
    aot_gpr[8] = (aot_gpr[5] | 0u);
    goto L_08921AC0;
L_08921AC0:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(48)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[7]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08921AC0;
      }
      goto L_08921AE8;
    }
L_08921AE8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[8]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08921B14;
      }
      goto L_08921B00;
    }
L_08921B00:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x08921B10u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 188u, 0x08A55D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08921B10u) goto L_08921B10;
    return;
L_08921B10:
    aot_gpr[6] = (aot_gpr[8] | 0u);
    goto L_08921B14;
L_08921B14:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(48), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[4] & 15u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08921B38;
      }
      goto L_08921B2C;
    }
L_08921B2C:
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08921B38;
L_08921B38:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08921B48;
      }
      goto L_08921B40;
    }
L_08921B40:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(64)));
    goto L_08921B48;
L_08921B48:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921C88;
      }
      goto L_08921B50;
    }
L_08921B50:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[6] + aot_gpr[16]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08921B80;
      }
      goto L_08921B68;
    }
L_08921B68:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08921B7Cu);
    aot_gpr[7] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 132u, 0x08940EFCu>(ctx, &aot_mem) && ctx.pc == 0x08921B7Cu) goto L_08921B7C;
    return;
L_08921B7C:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08921B80;
L_08921B80:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(64), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
      if (branch_taken) {
          goto L_08921B9C;
      }
      goto L_08921B94;
    }
L_08921B94:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08921B9C;
L_08921B9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08921C3C;
      }
      goto L_08921BB4;
    }
L_08921BB4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(64)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(40)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(28)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (aot_gpr[8] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08921C28;
      }
      goto L_08921BD8;
    }
L_08921BD8:
    aot_gpr[10] = (0u | 0u);
    goto L_08921BDC;
L_08921BDC:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[10]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[11] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08921C14;
      }
      goto L_08921BF0;
    }
L_08921BF0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[10]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08921C28;
      }
      goto L_08921C14;
    }
L_08921C14:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (aot_gpr[8] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08921BDC;
      }
      goto L_08921C28;
    }
L_08921C28:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08921BB4;
      }
      goto L_08921C3C;
    }
L_08921C3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08921C80;
      }
      goto L_08921C54;
    }
L_08921C54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(56)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08921C54;
      }
      goto L_08921C80;
    }
L_08921C80:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08921C90;
      }
      goto L_08921C88;
    }
L_08921C88:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(64), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(40)));
    goto L_08921C90;
L_08921C90:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921D58;
      }
      goto L_08921C98;
    }
L_08921C98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[7] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08921D58;
      }
      goto L_08921CAC;
    }
L_08921CAC:
    aot_gpr[8] = (0u | 0u);
    aot_gpr[10] = (4u << 16u);
    goto L_08921CB4;
L_08921CB4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(176)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[10]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921D44;
      }
      goto L_08921CD0;
    }
L_08921CD0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(40)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (0u | 0u);
    aot_gpr[12] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[12] == 0u;
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(304)));
      if (branch_taken) {
          goto L_08921D44;
      }
      goto L_08921CE8;
    }
L_08921CE8:
    aot_gpr[12] = (0u | 0u);
    goto L_08921CEC;
L_08921CEC:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[13] = (aot_gpr[13] + aot_gpr[12]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(176)));
    aot_gpr[14] = (aot_gpr[14] & aot_gpr[10]);
    { const bool branch_taken = aot_gpr[14] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921D34;
      }
      goto L_08921D08;
    }
L_08921D08:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[11] != aot_gpr[13];
    // nop
      if (branch_taken) {
          goto L_08921D34;
      }
      goto L_08921D14;
    }
L_08921D14:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[12]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(304)));
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(304), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08921D44;
      }
      goto L_08921D34;
    }
L_08921D34:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[13] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[13] != 0u;
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08921CEC;
      }
      goto L_08921D44;
    }
L_08921D44:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08921CB4;
      }
      goto L_08921D58;
    }
L_08921D58:
    aot_gpr[2] = (aot_gpr[22] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08921D8C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-29288), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08921DAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08921E84;
      }
      goto L_08921DC8;
    }
L_08921DC8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1656));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921E28;
      }
      goto L_08921DE8;
    }
L_08921DE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921E04;
      }
      goto L_08921DF4;
    }
L_08921DF4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08921E04u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(304));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08921E04u) goto L_08921E04;
    return;
L_08921E04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921E4C;
      }
      goto L_08921E10;
    }
L_08921E10:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08921E20u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(308));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08921E20u) goto L_08921E20;
    return;
L_08921E20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08921E4C;
      }
      goto L_08921E28;
    }
L_08921E28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(176)));
    aot_gpr[5] = (8u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921E4C;
      }
      goto L_08921E3C;
    }
L_08921E3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(168)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x08921E4Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 63u, 0x08927680u>(ctx, &aot_mem) && ctx.pc == 0x08921E4Cu) goto L_08921E4C;
    return;
L_08921E4C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08921E58u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x08921E58u) goto L_08921E58;
    return;
L_08921E58:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08921E84;
      }
      goto L_08921E64;
    }
L_08921E64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08921E84u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08921E84u) goto L_08921E84;
    return;
L_08921E84:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08921E98:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_08921EC4;
      }
      goto L_08921EA4;
    }
L_08921EA4:
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(160), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(168)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(164), aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[8]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(168), aot_gpr[5]);
      if (branch_taken) {
          goto L_08921EF8;
      }
      goto L_08921EC4;
    }
L_08921EC4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921EE0;
      }
      goto L_08921ED0;
    }
L_08921ED0:
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921ED0;
      }
      goto L_08921EE0;
    }
L_08921EE0:
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(160), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(164), aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(164), 0u);
    goto L_08921EF8;
L_08921EF8:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[8]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08921F00:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08921F20;
      }
      goto L_08921F0C;
    }
L_08921F0C:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08921F28;
      }
      goto L_08921F14;
    }
L_08921F14:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08921F0C;
      }
      goto L_08921F20;
    }
L_08921F20:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08921F28;
      }
      goto L_08921F28;
    }
L_08921F28:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08921F30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08921F44u);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    goto L_08921F00;
L_08921F44:
    aot_gpr[9] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_08921F90;
      }
      goto L_08921F50;
    }
L_08921F50:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921F68;
      }
      goto L_08921F58;
    }
L_08921F58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(164)));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[8]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(168), aot_gpr[4]);
      if (branch_taken) {
          goto L_08921F80;
      }
      goto L_08921F68;
    }
L_08921F68:
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08921F74u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_08921F00;
L_08921F74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(164)));
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(164), aot_gpr[4]);
    goto L_08921F80;
L_08921F80:
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(164), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(160), 0u);
    goto L_08921F90;
L_08921F90:
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08921FA0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 2u, 0x0892201Cu>(ctx, &aot_mem); return;
      }
      goto L_08921FAC;
    }
L_08921FAC:
    aot_gpr[7] = (aot_gpr[5] & 512u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921FDC;
      }
      goto L_08921FB8;
    }
L_08921FB8:
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(144);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 3u, 0x0892203Cu>(ctx, &aot_mem); return;
      }
      goto L_08921FDC;
    }
L_08921FDC:
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 0u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 36u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 40u, 4u);
      ctx.eat_vfpu_prefixes(); }
    ctx.pc = 0x08922000u; return;
}

void recomp_unit_0285(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0285_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_285(Runtime &runtime) {
    runtime.register_generated_unit(285u, 0x08921000u, 4096u, &recomp_unit_0285, &recomp_unit_0285_entry);
    runtime.register_function(0x08921004u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921020u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921034u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x0892104Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921060u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921064u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x0892107Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921088u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921090u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921098u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089210A0u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089210C8u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089210D4u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089210E4u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089210F8u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921100u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921118u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x0892113Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921140u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921148u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921164u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921178u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921190u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089211A4u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089211A8u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089211C0u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089211CCu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089211D4u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089211DCu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089211E4u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x0892120Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921218u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x0892122Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921258u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921264u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921270u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x0892127Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921284u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x0892129Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089212C0u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089212C4u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089212D8u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089212E8u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089212F4u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x0892131Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921328u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x0892135Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921374u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089213B4u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089213BCu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089213D8u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089213F0u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921408u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x0892141Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921420u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921438u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921444u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x0892144Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921454u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x0892145Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921484u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921490u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089214ACu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089214B8u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089214C4u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089214F4u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089214F8u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x0892150Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x0892151Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921528u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921550u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x0892155Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921590u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089215A8u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089215E8u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x0892160Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921618u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x0892162Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921630u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921648u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921654u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x0892165Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921664u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x0892166Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921694u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089216A0u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089216B0u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089216BCu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089216E4u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089216F4u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089216F8u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x0892170Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921714u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921720u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921728u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x0892173Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x0892174Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921758u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x0892177Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921794u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089217A0u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089217ACu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089217C0u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089217CCu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089217F4u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921800u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921808u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921814u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921824u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921830u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921858u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921864u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921878u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x0892188Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x0892189Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089218ACu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089218D4u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089218DCu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089218E8u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089218FCu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921908u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921914u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921928u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921934u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921940u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x0892195Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921974u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921988u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x0892198Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089219A4u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089219B0u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089219B8u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089219C0u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089219C8u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089219F8u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x089219FCu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921A24u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921A3Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921A4Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921A50u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921A68u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921A74u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921A7Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921A84u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921A8Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921ABCu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921AC0u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921AE8u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921B00u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921B10u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921B14u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921B2Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921B38u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921B40u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921B48u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921B50u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921B68u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921B7Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921B80u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921B94u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921B9Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921BB4u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921BD8u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921BDCu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921BF0u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921C14u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921C28u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921C3Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921C54u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921C80u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921C88u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921C90u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921C98u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921CACu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921CB4u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921CD0u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921CE8u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921CECu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921D08u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921D14u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921D34u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921D44u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921D58u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921D8Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921DACu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921DC8u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921DE8u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921DF4u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921E04u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921E10u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921E20u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921E28u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921E3Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921E4Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921E58u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921E64u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921E84u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921E98u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921EA4u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921EC4u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921ED0u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921EE0u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921EF8u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921F00u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921F0Cu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921F14u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921F20u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921F28u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921F30u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921F44u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921F50u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921F58u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921F68u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921F74u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921F80u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921F90u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921FA0u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921FACu, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921FB8u, &recomp_unit_0285, "recomp_unit_0285");
    runtime.register_function(0x08921FDCu, &recomp_unit_0285, "recomp_unit_0285");
}
} // namespace psprecomp
