#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0571[1024] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 9, 0, 10, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 13, 0, 0, 0, 14, 0, 0, 15, 0, 16, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0,
    21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0,
    0, 0, 26, 0, 0, 0, 27, 0, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 33, 0, 0, 34, 0, 35, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 40, 0, 0, 41,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 47, 48, 0, 0, 49,
    0, 0, 0, 50, 0, 0, 0, 51, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 56, 57, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 60, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 68, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0,
    0, 74, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0,
    80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0,
    0, 85, 0, 0, 86, 0, 0, 0, 87, 88, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 93, 94,
    0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 98, 0, 99, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107,
    0, 108, 0, 0, 109, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 115, 0,
    0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 120, 0, 0, 121, 0, 0, 122, 0, 123, 124, 0, 0, 125, 0, 126, 0,
    0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0,
    0, 132, 0, 0, 133, 0, 0, 134, 135, 0, 136, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 141, 0, 0,
    0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 144, 0, 145, 0, 146, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 155, 0, 0, 156, 0, 157,
    0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0,
    0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0,
    169, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0,
    0, 0, 176, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 182,
    0, 0, 0, 0, 183, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0,
    0, 189, 0, 0, 0, 0, 190, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 195, 196, 0, 197, 0, 0, 198, 0, 0, 199, 0,
    200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 205, 0,
    0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 209, 0, 0, 210, 0, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0,
    0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 217, 0, 0, 218, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221,
};
void recomp_unit_0571_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A3F000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0571[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A3F000;
    case 2u: goto L_08A3F00C;
    case 3u: goto L_08A3F024;
    case 4u: goto L_08A3F03C;
    case 5u: goto L_08A3F044;
    case 6u: goto L_08A3F078;
    case 7u: goto L_08A3F0A8;
    case 8u: goto L_08A3F0B8;
    case 9u: goto L_08A3F0C4;
    case 10u: goto L_08A3F0CC;
    case 11u: goto L_08A3F0D0;
    case 12u: goto L_08A3F0E0;
    case 13u: goto L_08A3F108;
    case 14u: goto L_08A3F118;
    case 15u: goto L_08A3F124;
    case 16u: goto L_08A3F12C;
    case 17u: goto L_08A3F130;
    case 18u: goto L_08A3F150;
    case 19u: goto L_08A3F168;
    case 20u: goto L_08A3F178;
    case 21u: goto L_08A3F180;
    case 22u: goto L_08A3F1A0;
    case 23u: goto L_08A3F1B8;
    case 24u: goto L_08A3F1E0;
    case 25u: goto L_08A3F1EC;
    case 26u: goto L_08A3F208;
    case 27u: goto L_08A3F218;
    case 28u: goto L_08A3F224;
    case 29u: goto L_08A3F22C;
    case 30u: goto L_08A3F240;
    case 31u: goto L_08A3F248;
    case 32u: goto L_08A3F250;
    case 33u: goto L_08A3F258;
    case 34u: goto L_08A3F264;
    case 35u: goto L_08A3F26C;
    case 36u: goto L_08A3F2B0;
    case 37u: goto L_08A3F2B8;
    case 38u: goto L_08A3F2DC;
    case 39u: goto L_08A3F2E8;
    case 40u: goto L_08A3F2F0;
    case 41u: goto L_08A3F2FC;
    case 42u: goto L_08A3F324;
    case 43u: goto L_08A3F32C;
    case 44u: goto L_08A3F334;
    case 45u: goto L_08A3F340;
    case 46u: goto L_08A3F368;
    case 47u: goto L_08A3F36C;
    case 48u: goto L_08A3F370;
    case 49u: goto L_08A3F37C;
    case 50u: goto L_08A3F38C;
    case 51u: goto L_08A3F39C;
    case 52u: goto L_08A3F3A4;
    case 53u: goto L_08A3F3B4;
    case 54u: goto L_08A3F3E0;
    case 55u: goto L_08A3F3E8;
    case 56u: goto L_08A3F3EC;
    case 57u: goto L_08A3F3F0;
    case 58u: goto L_08A3F438;
    case 59u: goto L_08A3F440;
    case 60u: goto L_08A3F448;
    case 61u: goto L_08A3F44C;
    case 62u: goto L_08A3F464;
    case 63u: goto L_08A3F4A8;
    case 64u: goto L_08A3F4B0;
    case 65u: goto L_08A3F4B8;
    case 66u: goto L_08A3F4C0;
    case 67u: goto L_08A3F4E4;
    case 68u: goto L_08A3F50C;
    case 69u: goto L_08A3F514;
    case 70u: goto L_08A3F524;
    case 71u: goto L_08A3F534;
    case 72u: goto L_08A3F568;
    case 73u: goto L_08A3F574;
    case 74u: goto L_08A3F584;
    case 75u: goto L_08A3F58C;
    case 76u: goto L_08A3F59C;
    case 77u: goto L_08A3F5D0;
    case 78u: goto L_08A3F5DC;
    case 79u: goto L_08A3F5F8;
    case 80u: goto L_08A3F600;
    case 81u: goto L_08A3F610;
    case 82u: goto L_08A3F654;
    case 83u: goto L_08A3F660;
    case 84u: goto L_08A3F674;
    case 85u: goto L_08A3F684;
    case 86u: goto L_08A3F690;
    case 87u: goto L_08A3F6A0;
    case 88u: goto L_08A3F6A4;
    case 89u: goto L_08A3F6B8;
    case 90u: goto L_08A3F6C0;
    case 91u: goto L_08A3F6E0;
    case 92u: goto L_08A3F6E8;
    case 93u: goto L_08A3F6F8;
    case 94u: goto L_08A3F6FC;
    case 95u: goto L_08A3F714;
    case 96u: goto L_08A3F71C;
    case 97u: goto L_08A3F728;
    case 98u: goto L_08A3F788;
    case 99u: goto L_08A3F790;
    case 100u: goto L_08A3F794;
    case 101u: goto L_08A3F7B4;
    case 102u: goto L_08A3F7BC;
    case 103u: goto L_08A3F7C0;
    case 104u: goto L_08A3F824;
    case 105u: goto L_08A3F840;
    case 106u: goto L_08A3F864;
    case 107u: goto L_08A3F87C;
    case 108u: goto L_08A3F884;
    case 109u: goto L_08A3F890;
    case 110u: goto L_08A3F898;
    case 111u: goto L_08A3F8A4;
    case 112u: goto L_08A3F8C4;
    case 113u: goto L_08A3F8DC;
    case 114u: goto L_08A3F8F4;
    case 115u: goto L_08A3F8F8;
    case 116u: goto L_08A3F90C;
    case 117u: goto L_08A3F914;
    case 118u: goto L_08A3F930;
    case 119u: goto L_08A3F93C;
    case 120u: goto L_08A3F940;
    case 121u: goto L_08A3F94C;
    case 122u: goto L_08A3F958;
    case 123u: goto L_08A3F960;
    case 124u: goto L_08A3F964;
    case 125u: goto L_08A3F970;
    case 126u: goto L_08A3F978;
    case 127u: goto L_08A3F988;
    case 128u: goto L_08A3F9BC;
    case 129u: goto L_08A3F9C8;
    case 130u: goto L_08A3F9DC;
    case 131u: goto L_08A3F9EC;
    case 132u: goto L_08A3FA04;
    case 133u: goto L_08A3FA10;
    case 134u: goto L_08A3FA1C;
    case 135u: goto L_08A3FA20;
    case 136u: goto L_08A3FA28;
    case 137u: goto L_08A3FA38;
    case 138u: goto L_08A3FA40;
    case 139u: goto L_08A3FA5C;
    case 140u: goto L_08A3FA64;
    case 141u: goto L_08A3FA74;
    case 142u: goto L_08A3FA98;
    case 143u: goto L_08A3FAA0;
    case 144u: goto L_08A3FAB0;
    case 145u: goto L_08A3FAB8;
    case 146u: goto L_08A3FAC0;
    case 147u: goto L_08A3FAC4;
    case 148u: goto L_08A3FADC;
    case 149u: goto L_08A3FB0C;
    case 150u: goto L_08A3FB24;
    case 151u: goto L_08A3FB34;
    case 152u: goto L_08A3FB3C;
    case 153u: goto L_08A3FB58;
    case 154u: goto L_08A3FB64;
    case 155u: goto L_08A3FB68;
    case 156u: goto L_08A3FB74;
    case 157u: goto L_08A3FB7C;
    case 158u: goto L_08A3FB84;
    case 159u: goto L_08A3FB8C;
    case 160u: goto L_08A3FBAC;
    case 161u: goto L_08A3FBE0;
    case 162u: goto L_08A3FBEC;
    case 163u: goto L_08A3FBF8;
    case 164u: goto L_08A3FC08;
    case 165u: goto L_08A3FC3C;
    case 166u: goto L_08A3FC48;
    case 167u: goto L_08A3FC58;
    case 168u: goto L_08A3FC6C;
    case 169u: goto L_08A3FC80;
    case 170u: goto L_08A3FC88;
    case 171u: goto L_08A3FC90;
    case 172u: goto L_08A3FCC4;
    case 173u: goto L_08A3FCD0;
    case 174u: goto L_08A3FCE0;
    case 175u: goto L_08A3FCF4;
    case 176u: goto L_08A3FD08;
    case 177u: goto L_08A3FD10;
    case 178u: goto L_08A3FD18;
    case 179u: goto L_08A3FD4C;
    case 180u: goto L_08A3FD58;
    case 181u: goto L_08A3FD68;
    case 182u: goto L_08A3FD7C;
    case 183u: goto L_08A3FD90;
    case 184u: goto L_08A3FD98;
    case 185u: goto L_08A3FDA0;
    case 186u: goto L_08A3FDD4;
    case 187u: goto L_08A3FDE0;
    case 188u: goto L_08A3FDF0;
    case 189u: goto L_08A3FE04;
    case 190u: goto L_08A3FE18;
    case 191u: goto L_08A3FE20;
    case 192u: goto L_08A3FE28;
    case 193u: goto L_08A3FE44;
    case 194u: goto L_08A3FE4C;
    case 195u: goto L_08A3FE54;
    case 196u: goto L_08A3FE58;
    case 197u: goto L_08A3FE60;
    case 198u: goto L_08A3FE6C;
    case 199u: goto L_08A3FE78;
    case 200u: goto L_08A3FE80;
    case 201u: goto L_08A3FEA0;
    case 202u: goto L_08A3FEA8;
    case 203u: goto L_08A3FED8;
    case 204u: goto L_08A3FEE0;
    case 205u: goto L_08A3FEF8;
    case 206u: goto L_08A3FF04;
    case 207u: goto L_08A3FF28;
    case 208u: goto L_08A3FF3C;
    case 209u: goto L_08A3FF44;
    case 210u: goto L_08A3FF50;
    case 211u: goto L_08A3FF60;
    case 212u: goto L_08A3FF6C;
    case 213u: goto L_08A3FF78;
    case 214u: goto L_08A3FF88;
    case 215u: goto L_08A3FFA4;
    case 216u: goto L_08A3FFB0;
    case 217u: goto L_08A3FFB8;
    case 218u: goto L_08A3FFC4;
    case 219u: goto L_08A3FFC8;
    case 220u: goto L_08A3FFD8;
    case 221u: goto L_08A3FFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A3F000:
    aot_gpr[7] = (aot_gpr[2] - aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[16] = (aot_gpr[2] - aot_gpr[7]);
      if (branch_taken) {
          goto L_08A3F044;
      }
      goto L_08A3F00C;
    }
L_08A3F00C:
    aot_gpr[3] = (aot_gpr[15] < aot_gpr[11] ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[3] ^ 1u);
    aot_gpr[2] = (aot_gpr[8] < aot_gpr[9] ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    if (aot_gpr[2] == 0u) {
    aot_gpr[24] = (aot_gpr[15] + 0u);
        goto L_08A3F03C;
    }
    goto L_08A3F024;
L_08A3F024:
    aot_gpr[4] = (aot_gpr[15] - aot_gpr[11]);
    aot_gpr[2] = (aot_gpr[15] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[9] - aot_gpr[8]);
    aot_gpr[9] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[15] = (aot_gpr[4] + 0u);
    aot_gpr[24] = (aot_gpr[15] + 0u);
    goto L_08A3F03C;
L_08A3F03C:
    aot_gpr[25] = (aot_gpr[9] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0570_entry, 570u, 162u, 0x08A3ED48u>(ctx, &aot_mem); return;
L_08A3F044:
    aot_gpr[2] = (aot_gpr[11] >> (aot_gpr[16] & 31u));
    aot_gpr[3] = (aot_gpr[8] << (aot_gpr[7] & 31u));
    aot_gpr[8] = (aot_gpr[3] | aot_gpr[2]);
    aot_gpr[12] = (aot_gpr[8] >> 16u);
    aot_gpr[13] = (aot_gpr[9] >> (aot_gpr[16] & 31u));
    { const std::uint32_t dividend = aot_gpr[13]; const std::uint32_t divisor = aot_gpr[12]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[18] = (aot_gpr[8] & 65535u);
    aot_gpr[2] = (aot_gpr[15] >> (aot_gpr[16] & 31u));
    aot_gpr[3] = (aot_gpr[9] << (aot_gpr[7] & 31u));
    aot_gpr[9] = (aot_gpr[3] | aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[9] >> 16u);
    if (aot_gpr[12] == 0u) {
    rt.unsupported(0x08A3F074u, 0x000001CDu, "special? not lowered yet"); return;
        goto L_08A3F078;
    }
    goto L_08A3F078;
L_08A3F078:
    aot_gpr[11] = (aot_gpr[11] << (aot_gpr[7] & 31u));
    aot_gpr[15] = (aot_gpr[15] << (aot_gpr[7] & 31u));
    aot_gpr[6] = (ctx.lo);
    aot_gpr[4] = (ctx.hi);
    aot_gpr[17] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (aot_gpr[4] << 16u);
    aot_gpr[10] = (aot_gpr[4] | aot_gpr[5]);
    aot_gpr[14] = (ctx.lo);
    aot_gpr[2] = (aot_gpr[10] < aot_gpr[14] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    { const std::uint32_t dividend = aot_gpr[13]; const std::uint32_t divisor = aot_gpr[12]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08A3F0CC;
      }
      goto L_08A3F0A8;
    }
L_08A3F0A8:
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[10] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3F0CC;
      }
      goto L_08A3F0B8;
    }
L_08A3F0B8:
    aot_gpr[2] = (aot_gpr[10] < aot_gpr[14] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[10] = (aot_gpr[10] - aot_gpr[14]);
        goto L_08A3F0D0;
    }
    goto L_08A3F0C4;
L_08A3F0C4:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[8]);
    goto L_08A3F0CC;
L_08A3F0CC:
    aot_gpr[10] = (aot_gpr[10] - aot_gpr[14]);
    goto L_08A3F0D0;
L_08A3F0D0:
    { const std::uint32_t dividend = aot_gpr[10]; const std::uint32_t divisor = aot_gpr[12]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (aot_gpr[9] & 65535u);
    if (aot_gpr[12] == 0u) {
    rt.unsupported(0x08A3F0DCu, 0x000001CDu, "special? not lowered yet"); return;
        goto L_08A3F0E0;
    }
    goto L_08A3F0E0;
L_08A3F0E0:
    aot_gpr[3] = (ctx.lo);
    aot_gpr[2] = (ctx.hi);
    aot_gpr[6] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (aot_gpr[2] << 16u);
    aot_gpr[5] = (aot_gpr[2] | aot_gpr[4]);
    aot_gpr[14] = (ctx.lo);
    aot_gpr[3] = (aot_gpr[5] < aot_gpr[14] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    { const std::uint32_t dividend = aot_gpr[10]; const std::uint32_t divisor = aot_gpr[12]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08A3F12C;
      }
      goto L_08A3F108;
    }
L_08A3F108:
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3F12C;
      }
      goto L_08A3F118;
    }
L_08A3F118:
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[14] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[17] << 16u);
      if (branch_taken) {
          goto L_08A3F130;
      }
      goto L_08A3F124;
    }
L_08A3F124:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[8]);
    goto L_08A3F12C;
L_08A3F12C:
    aot_gpr[2] = (aot_gpr[17] << 16u);
    goto L_08A3F130;
L_08A3F130:
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[14]);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[2]) * static_cast<std::uint64_t>(aot_gpr[11]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[10] = (ctx.hi);
    aot_gpr[3] = (aot_gpr[5] < aot_gpr[10] ? 1u : 0u);
    aot_gpr[6] = (ctx.lo);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[11]);
      if (branch_taken) {
          goto L_08A3F168;
      }
      goto L_08A3F150;
    }
L_08A3F150:
    aot_gpr[2] = (aot_gpr[10] ^ aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[15] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[3]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F178;
      }
      goto L_08A3F168;
    }
L_08A3F168:
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[10] - aot_gpr[8]);
    aot_gpr[10] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[4] + 0u);
    goto L_08A3F178;
L_08A3F178:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[3] = (aot_gpr[15] - aot_gpr[6]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0570_entry, 570u, 164u, 0x08A3ED58u>(ctx, &aot_mem); return;
      }
      goto L_08A3F180;
    }
L_08A3F180:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[10]);
    aot_gpr[2] = (aot_gpr[15] < aot_gpr[3] ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[4] - aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[9] << (aot_gpr[16] & 31u));
    aot_gpr[3] = (aot_gpr[3] >> (aot_gpr[7] & 31u));
    aot_gpr[24] = (aot_gpr[5] | aot_gpr[3]);
    aot_gpr[25] = (aot_gpr[9] >> (aot_gpr[7] & 31u));
    (void)rt.invoke_chained_direct<&recomp_unit_0570_entry, 570u, 163u, 0x08A3ED50u>(ctx, &aot_mem); return;
L_08A3F1A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x08A3F1B8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 8u, 0x08A400C8u>(ctx, &aot_mem) && ctx.pc == 0x08A3F1B8u) goto L_08A3F1B8;
    return;
L_08A3F1B8:
    aot_gpr[9] = (0u + 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[8] >> 2u);
    aot_gpr[9] = (aot_gpr[9] << 30u);
    aot_gpr[9] = (aot_gpr[9] | aot_gpr[2]);
    aot_gpr[31] = (0x08A3F1E0u);
    aot_gpr[8] = (aot_gpr[8] << 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 3u, 0x08A4001Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F1E0u) goto L_08A3F1E0;
    return;
L_08A3F1E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3F1EC:
    aot_gpr[7] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[6] + 0u);
    aot_gpr[8] = (aot_gpr[5] + 0u);
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[7] + 0u);
      if (branch_taken) {
          goto L_08A3F240;
      }
      goto L_08A3F208;
    }
L_08A3F208:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_08A3F240;
      }
      goto L_08A3F218;
    }
L_08A3F218:
    aot_gpr[2] = (aot_gpr[4] ^ 4u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] ^ 4u);
      if (branch_taken) {
          goto L_08A3F250;
      }
      goto L_08A3F224;
    }
L_08A3F224:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[7] + 0u);
      if (branch_taken) {
          goto L_08A3F240;
      }
      goto L_08A3F22C;
    }
L_08A3F22C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (2215u << 16u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[4];
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(10112));
      if (branch_taken) {
          goto L_08A3F248;
      }
      goto L_08A3F240;
    }
L_08A3F240:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3F248:
    aot_gpr[6] = (aot_gpr[7] + 0u);
    goto L_08A3F240;
L_08A3F250:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_08A3F240;
      }
      goto L_08A3F258;
    }
L_08A3F258:
    aot_gpr[2] = (aot_gpr[3] ^ 2u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[4] ^ 2u);
      if (branch_taken) {
          goto L_08A3F2B0;
      }
      goto L_08A3F264;
    }
L_08A3F264:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[7] + 0u);
      if (branch_taken) {
          goto L_08A3F240;
      }
      goto L_08A3F26C;
    }
L_08A3F26C:
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[10] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_08A3F240;
L_08A3F2B0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_08A3F240;
      }
      goto L_08A3F2B8;
    }
L_08A3F2B8:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[11] - aot_gpr[9]);
    if (static_cast<std::int32_t>(aot_gpr[2]) < 0) {
    aot_gpr[2] = (0u - aot_gpr[2]);
        goto L_08A3F2DC;
    }
    goto L_08A3F2DC;
L_08A3F2DC:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[11]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3F50C;
      }
      goto L_08A3F2E8;
    }
L_08A3F2E8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[11]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3F32C;
      }
      goto L_08A3F2F0;
    }
L_08A3F2F0:
    aot_gpr[25] = (0u + static_cast<std::uint32_t>(0));
    aot_gpr[24] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[11] - aot_gpr[9]);
    goto L_08A3F2FC;
L_08A3F2FC:
    aot_gpr[4] = (aot_gpr[14] >> 1u);
    aot_gpr[6] = (aot_gpr[15] << 31u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[15] >> 1u);
    aot_gpr[2] = (aot_gpr[14] & aot_gpr[24]);
    aot_gpr[3] = (aot_gpr[15] & aot_gpr[25]);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-1));
    aot_gpr[14] = (aot_gpr[2] | aot_gpr[4]);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[15] = (aot_gpr[3] | aot_gpr[5]);
      if (branch_taken) {
          goto L_08A3F2FC;
      }
      goto L_08A3F324;
    }
L_08A3F324:
    aot_gpr[9] = (aot_gpr[11] + 0u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[11]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    goto L_08A3F32C;
L_08A3F32C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
        goto L_08A3F370;
    }
    goto L_08A3F334;
L_08A3F334:
    aot_gpr[25] = (0u + static_cast<std::uint32_t>(0));
    aot_gpr[24] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (aot_gpr[9] - aot_gpr[11]);
    goto L_08A3F340;
L_08A3F340:
    aot_gpr[4] = (aot_gpr[12] >> 1u);
    aot_gpr[6] = (aot_gpr[13] << 31u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[13] >> 1u);
    aot_gpr[2] = (aot_gpr[12] & aot_gpr[24]);
    aot_gpr[3] = (aot_gpr[13] & aot_gpr[25]);
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(-1));
    aot_gpr[12] = (aot_gpr[2] | aot_gpr[4]);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[13] = (aot_gpr[3] | aot_gpr[5]);
      if (branch_taken) {
          goto L_08A3F340;
      }
      goto L_08A3F368;
    }
L_08A3F368:
    aot_gpr[11] = (aot_gpr[9] + 0u);
    goto L_08A3F36C;
L_08A3F36C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    goto L_08A3F370;
L_08A3F370:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[5] = (aot_gpr[15] - aot_gpr[13]);
      if (branch_taken) {
          goto L_08A3F4E4;
      }
      goto L_08A3F37C;
    }
L_08A3F37C:
    aot_gpr[2] = (aot_gpr[14] < aot_gpr[12] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[14] - aot_gpr[12]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[2]);
      if (branch_taken) {
          goto L_08A3F39C;
      }
      goto L_08A3F38C;
    }
L_08A3F38C:
    aot_gpr[2] = (aot_gpr[12] < aot_gpr[14] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[13] - aot_gpr[15]);
    aot_gpr[4] = (aot_gpr[12] - aot_gpr[14]);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[2]);
    goto L_08A3F39C;
L_08A3F39C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3F4C0;
      }
      goto L_08A3F3A4;
    }
L_08A3F3A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(8), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A3F3B4;
L_08A3F3B4:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(16)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (4095u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 65535u);
    aot_gpr[4] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (aot_gpr[4] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[9] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(20)));
        goto L_08A3F44C;
    }
    goto L_08A3F3E0;
L_08A3F3E0:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3F4B0;
      }
      goto L_08A3F3E8;
    }
L_08A3F3E8:
    aot_gpr[3] = (aot_gpr[8] >> 31u);
    goto L_08A3F3EC;
L_08A3F3EC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    goto L_08A3F3F0;
L_08A3F3F0:
    aot_gpr[7] = (aot_gpr[9] << 1u);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[8] << 1u);
    aot_gpr[11] = (4095u << 16u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (aot_gpr[4] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[3]);
    aot_gpr[11] = (aot_gpr[11] | 65535u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (aot_gpr[11] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[12] = (aot_gpr[4] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[9] = (aot_gpr[7] + 0u);
      if (branch_taken) {
          goto L_08A3F448;
      }
      goto L_08A3F438;
    }
L_08A3F438:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[11];
    aot_gpr[3] = (aot_gpr[8] >> 31u);
      if (branch_taken) {
          goto L_08A3F3EC;
      }
      goto L_08A3F440;
    }
L_08A3F440:
    if (aot_gpr[12] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
        goto L_08A3F3F0;
    }
    goto L_08A3F448;
L_08A3F448:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(20)));
    goto L_08A3F44C;
L_08A3F44C:
    aot_gpr[3] = (8191u << 16u);
    aot_gpr[3] = (aot_gpr[3] | 65535u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[3] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A3F4A8;
      }
      goto L_08A3F464;
    }
L_08A3F464:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(0));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[5] << 31u);
    aot_gpr[4] = (aot_gpr[4] >> 1u);
    aot_gpr[3] = (aot_gpr[5] & aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] >> 1u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    goto L_08A3F4A8;
L_08A3F4A8:
    aot_gpr[6] = (aot_gpr[10] + 0u);
    goto L_08A3F240;
L_08A3F4B0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[8] >> 31u);
      if (branch_taken) {
          goto L_08A3F3EC;
      }
      goto L_08A3F4B8;
    }
L_08A3F4B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(20)));
    goto L_08A3F44C;
L_08A3F4C0:
    aot_gpr[4] = (0u - aot_gpr[4]);
    aot_gpr[5] = (0u - aot_gpr[5]);
    aot_gpr[3] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(8), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    goto L_08A3F3B4;
L_08A3F4E4:
    aot_gpr[2] = (aot_gpr[12] + aot_gpr[14]);
    aot_gpr[4] = (aot_gpr[2] < aot_gpr[14] ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[13] + aot_gpr[15]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(8), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(20)));
    goto L_08A3F44C;
L_08A3F50C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F524;
      }
      goto L_08A3F514;
    }
L_08A3F514:
    aot_gpr[14] = (0u + 0u);
    aot_gpr[15] = (0u + 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    goto L_08A3F370;
L_08A3F524:
    aot_gpr[12] = (0u + 0u);
    aot_gpr[13] = (0u + 0u);
    aot_gpr[11] = (aot_gpr[9] + 0u);
    goto L_08A3F36C;
L_08A3F534:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    aot_gpr[3] = (aot_gpr[5] + 0u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[3]);
    aot_gpr[31] = (0x08A3F568u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 66u, 0x08A40464u>(ctx, &aot_mem) && ctx.pc == 0x08A3F568u) goto L_08A3F568;
    return;
L_08A3F568:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    aot_gpr[31] = (0x08A3F574u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 66u, 0x08A40464u>(ctx, &aot_mem) && ctx.pc == 0x08A3F574u) goto L_08A3F574;
    return;
L_08A3F574:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[31] = (0x08A3F584u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_08A3F1EC;
L_08A3F584:
    aot_gpr[31] = (0x08A3F58Cu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 24u, 0x08A401C4u>(ctx, &aot_mem) && ctx.pc == 0x08A3F58Cu) goto L_08A3F58C;
    return;
L_08A3F58C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3F59C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    aot_gpr[3] = (aot_gpr[5] + 0u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[7]);
    aot_gpr[31] = (0x08A3F5D0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 66u, 0x08A40464u>(ctx, &aot_mem) && ctx.pc == 0x08A3F5D0u) goto L_08A3F5D0;
    return;
L_08A3F5D0:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    aot_gpr[31] = (0x08A3F5DCu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 66u, 0x08A40464u>(ctx, &aot_mem) && ctx.pc == 0x08A3F5DCu) goto L_08A3F5DC;
    return;
L_08A3F5DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (aot_gpr[2] ^ 1u);
    aot_gpr[31] = (0x08A3F5F8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    goto L_08A3F1EC;
L_08A3F5F8:
    aot_gpr[31] = (0x08A3F600u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 24u, 0x08A401C4u>(ctx, &aot_mem) && ctx.pc == 0x08A3F600u) goto L_08A3F600;
    return;
L_08A3F600:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3F610:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    aot_gpr[3] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[19]);
    aot_gpr[31] = (0x08A3F654u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 66u, 0x08A40464u>(ctx, &aot_mem) && ctx.pc == 0x08A3F654u) goto L_08A3F654;
    return;
L_08A3F654:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    aot_gpr[31] = (0x08A3F660u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 66u, 0x08A40464u>(ctx, &aot_mem) && ctx.pc == 0x08A3F660u) goto L_08A3F660;
    return;
L_08A3F660:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[12] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08A3F6A0;
      }
      goto L_08A3F674;
    }
L_08A3F674:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08A3F6FC;
    }
    goto L_08A3F684;
L_08A3F684:
    aot_gpr[2] = (aot_gpr[3] ^ 4u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[4] ^ 4u);
      if (branch_taken) {
          goto L_08A3F6E0;
      }
      goto L_08A3F690;
    }
L_08A3F690:
    aot_gpr[3] = (aot_gpr[4] ^ 2u);
    aot_gpr[2] = (2215u << 16u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(10112));
      if (branch_taken) {
          goto L_08A3F6B8;
      }
      goto L_08A3F6A0;
    }
L_08A3F6A0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08A3F6A4;
L_08A3F6A4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (aot_gpr[2] ^ aot_gpr[3]);
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_08A3F6B8;
L_08A3F6B8:
    aot_gpr[31] = (0x08A3F6C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 24u, 0x08A401C4u>(ctx, &aot_mem) && ctx.pc == 0x08A3F6C0u) goto L_08A3F6C0;
    return;
L_08A3F6C0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3F6E0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] ^ 2u);
      if (branch_taken) {
          goto L_08A3F714;
      }
      goto L_08A3F6E8;
    }
L_08A3F6E8:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] ^ 2u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(10112));
      if (branch_taken) {
          goto L_08A3F6B8;
      }
      goto L_08A3F6F8;
    }
L_08A3F6F8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08A3F6FC;
L_08A3F6FC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (aot_gpr[2] ^ aot_gpr[3]);
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    goto L_08A3F6B8;
L_08A3F714:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A3F6A4;
      }
      goto L_08A3F71C;
    }
L_08A3F71C:
    aot_gpr[2] = (aot_gpr[4] ^ 2u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08A3F6FC;
      }
      goto L_08A3F728;
    }
L_08A3F728:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[7]) * static_cast<std::uint64_t>(aot_gpr[6]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[18] = (0u + 0u);
    aot_gpr[19] = (0u + 0u);
    aot_gpr[3] = (ctx.hi);
    aot_gpr[2] = (ctx.lo);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[5]) * static_cast<std::uint64_t>(aot_gpr[8]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[11] = (ctx.hi);
    aot_gpr[10] = (ctx.lo);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[5]) * static_cast<std::uint64_t>(aot_gpr[6]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[14] = (aot_gpr[10] + aot_gpr[2]);
    aot_gpr[9] = (aot_gpr[14] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[15] = (aot_gpr[11] + aot_gpr[3]);
    aot_gpr[15] = (aot_gpr[15] + aot_gpr[9]);
    aot_gpr[21] = (ctx.hi);
    aot_gpr[20] = (ctx.lo);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[7]) * static_cast<std::uint64_t>(aot_gpr[8]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[4] = (aot_gpr[15] < aot_gpr[11] ? 1u : 0u);
    aot_gpr[7] = (ctx.hi);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (ctx.lo);
      if (branch_taken) {
          goto L_08A3F978;
      }
      goto L_08A3F788;
    }
L_08A3F788:
    { const bool branch_taken = aot_gpr[11] == aot_gpr[15];
    aot_gpr[2] = (aot_gpr[14] < aot_gpr[10] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3F970;
      }
      goto L_08A3F790;
    }
L_08A3F790:
    aot_gpr[10] = (0u + 0u);
    goto L_08A3F794;
L_08A3F794:
    aot_gpr[11] = (aot_gpr[14] << 0u);
    aot_gpr[24] = (aot_gpr[6] + aot_gpr[10]);
    aot_gpr[5] = (aot_gpr[24] < aot_gpr[10] ? 1u : 0u);
    aot_gpr[25] = (aot_gpr[7] + aot_gpr[11]);
    aot_gpr[25] = (aot_gpr[25] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[25] < aot_gpr[7] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08A3F964;
    }
    goto L_08A3F7B4;
L_08A3F7B4:
    { const bool branch_taken = aot_gpr[7] == aot_gpr[25];
    aot_gpr[2] = (aot_gpr[24] < aot_gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3F958;
      }
      goto L_08A3F7BC;
    }
L_08A3F7BC:
    aot_gpr[2] = (aot_gpr[15] >> 0u);
    goto L_08A3F7C0;
L_08A3F7C0:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[20]);
    aot_gpr[3] = (0u + 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (aot_gpr[2] < aot_gpr[20] ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[21]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[9]);
    aot_gpr[10] = (aot_gpr[18] + aot_gpr[2]);
    aot_gpr[9] = (aot_gpr[10] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[5] = (8191u << 16u);
    aot_gpr[11] = (aot_gpr[19] + aot_gpr[3]);
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[9]);
    aot_gpr[6] = (aot_gpr[6] ^ aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] | 65535u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[11] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[8] = (aot_gpr[24] + 0u);
    aot_gpr[9] = (aot_gpr[25] + 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(4), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A3F884;
      }
      goto L_08A3F824;
    }
L_08A3F824:
    aot_gpr[6] = (8191u << 16u);
    aot_gpr[15] = (0u + static_cast<std::uint32_t>(0));
    aot_gpr[14] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[25] = (32768u << 16u);
    aot_gpr[24] = (0u + static_cast<std::uint32_t>(0));
    aot_gpr[6] = (aot_gpr[6] | 65535u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(8)));
    goto L_08A3F840;
L_08A3F840:
    aot_gpr[3] = (aot_gpr[11] << 31u);
    aot_gpr[4] = (aot_gpr[10] & aot_gpr[14]);
    aot_gpr[11] = (aot_gpr[11] >> 1u);
    aot_gpr[10] = (aot_gpr[10] >> 1u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[10] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (aot_gpr[6] < aot_gpr[11] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3F87C;
      }
      goto L_08A3F864;
    }
L_08A3F864:
    aot_gpr[2] = (aot_gpr[9] << 31u);
    aot_gpr[8] = (aot_gpr[8] >> 1u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[2]);
    aot_gpr[9] = (aot_gpr[9] >> 1u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[24]);
    aot_gpr[9] = (aot_gpr[9] | aot_gpr[25]);
    goto L_08A3F87C;
L_08A3F87C:
    if (aot_gpr[3] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(8)));
        goto L_08A3F840;
    }
    goto L_08A3F884;
L_08A3F884:
    aot_gpr[2] = (4095u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[11] ? 1u : 0u);
    goto L_08A3F890;
L_08A3F890:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (4095u << 16u);
      if (branch_taken) {
          goto L_08A3F8DC;
      }
      goto L_08A3F898;
    }
L_08A3F898:
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(0));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] | 65535u);
    goto L_08A3F8A4;
L_08A3F8A4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (aot_gpr[10] >> 31u);
    aot_gpr[11] = (aot_gpr[11] << 1u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[11] = (aot_gpr[11] | aot_gpr[3]);
    aot_gpr[10] = (aot_gpr[10] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[9]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(8), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A3F94C;
      }
      goto L_08A3F8C4;
    }
L_08A3F8C4:
    aot_gpr[3] = (aot_gpr[8] >> 31u);
    aot_gpr[9] = (aot_gpr[9] << 1u);
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[11] ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[9] | aot_gpr[3]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[8] << 1u);
      if (branch_taken) {
          goto L_08A3F8A4;
      }
      goto L_08A3F8DC;
    }
L_08A3F8DC:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(0));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(255));
    aot_gpr[2] = (aot_gpr[10] & aot_gpr[2]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    aot_gpr[3] = (aot_gpr[11] & aot_gpr[3]);
      if (branch_taken) {
          goto L_08A3F90C;
      }
      goto L_08A3F8F4;
    }
L_08A3F8F4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    goto L_08A3F8F8;
L_08A3F8F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(16), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(20), aot_gpr[11]);
    aot_gpr[4] = (aot_gpr[12] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08A3F6B8;
L_08A3F90C:
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A3F8F8;
      }
      goto L_08A3F914;
    }
L_08A3F914:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(0));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[2] = (aot_gpr[10] & aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[11] & aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    if (aot_gpr[2] != 0u) {
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(128));
        goto L_08A3F940;
    }
    goto L_08A3F930;
L_08A3F930:
    aot_gpr[2] = (aot_gpr[8] | aot_gpr[9]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A3F8F8;
      }
      goto L_08A3F93C;
    }
L_08A3F93C:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(128));
    goto L_08A3F940;
L_08A3F940:
    aot_gpr[2] = (aot_gpr[10] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[2]);
    goto L_08A3F8F4;
L_08A3F94C:
    aot_gpr[10] = (aot_gpr[10] | aot_gpr[6]);
    aot_gpr[11] = (aot_gpr[11] | aot_gpr[7]);
    goto L_08A3F8C4;
L_08A3F958:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[15] >> 0u);
      if (branch_taken) {
          goto L_08A3F7C0;
      }
      goto L_08A3F960;
    }
L_08A3F960:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A3F964;
L_08A3F964:
    aot_gpr[2] = (aot_gpr[18] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[2]);
    goto L_08A3F7BC;
L_08A3F970:
    if (aot_gpr[2] == 0u) {
    aot_gpr[10] = (0u + 0u);
        goto L_08A3F794;
    }
    goto L_08A3F978;
L_08A3F978:
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(0));
    aot_gpr[10] = (0u + 0u);
    goto L_08A3F794;
L_08A3F988:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    aot_gpr[3] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[7]);
    aot_gpr[31] = (0x08A3F9BCu);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 66u, 0x08A40464u>(ctx, &aot_mem) && ctx.pc == 0x08A3F9BCu) goto L_08A3F9BC;
    return;
L_08A3F9BC:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    aot_gpr[31] = (0x08A3F9C8u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 66u, 0x08A40464u>(ctx, &aot_mem) && ctx.pc == 0x08A3F9C8u) goto L_08A3F9C8;
    return;
L_08A3F9C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (aot_gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_08A3FA20;
      }
      goto L_08A3F9DC;
    }
L_08A3F9DC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_08A3FA20;
      }
      goto L_08A3F9EC;
    }
L_08A3F9EC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[2] = (aot_gpr[5] ^ 4u);
    aot_gpr[3] = (aot_gpr[3] ^ aot_gpr[4]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
      if (branch_taken) {
          goto L_08A3FA10;
      }
      goto L_08A3FA04;
    }
L_08A3FA04:
    aot_gpr[2] = (aot_gpr[5] ^ 2u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[6] ^ 4u);
      if (branch_taken) {
          goto L_08A3FA38;
      }
      goto L_08A3FA10;
    }
L_08A3FA10:
    aot_gpr[2] = (2215u << 16u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(10112));
      if (branch_taken) {
          goto L_08A3FA20;
      }
      goto L_08A3FA1C;
    }
L_08A3FA1C:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_08A3FA20;
L_08A3FA20:
    aot_gpr[31] = (0x08A3FA28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 24u, 0x08A401C4u>(ctx, &aot_mem) && ctx.pc == 0x08A3FA28u) goto L_08A3FA28;
    return;
L_08A3FA28:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3FA38:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[6] ^ 2u);
      if (branch_taken) {
          goto L_08A3FA5C;
      }
      goto L_08A3FA40;
    }
L_08A3FA40:
    aot_gpr[2] = (0u + 0u);
    aot_gpr[3] = (0u + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    goto L_08A3FA20;
L_08A3FA5C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A3FA74;
      }
      goto L_08A3FA64;
    }
L_08A3FA64:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08A3FA20;
L_08A3FA74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[12] = (aot_gpr[5] < aot_gpr[11] ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    { const bool branch_taken = aot_gpr[12] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[3]);
      if (branch_taken) {
          goto L_08A3FB8C;
      }
      goto L_08A3FA98;
    }
L_08A3FA98:
    { const bool branch_taken = aot_gpr[11] == aot_gpr[5];
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[10] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3FB84;
      }
      goto L_08A3FAA0;
    }
L_08A3FAA0:
    aot_gpr[9] = (4096u << 16u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(0));
    aot_gpr[14] = (0u + 0u);
    aot_gpr[15] = (0u + 0u);
    goto L_08A3FAB0;
L_08A3FAB0:
    { const bool branch_taken = aot_gpr[12] != 0u;
    aot_gpr[2] = (aot_gpr[9] << 31u);
      if (branch_taken) {
          goto L_08A3FADC;
      }
      goto L_08A3FAB8;
    }
L_08A3FAB8:
    { const bool branch_taken = aot_gpr[11] == aot_gpr[5];
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[10] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3FB74;
      }
      goto L_08A3FAC0;
    }
L_08A3FAC0:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[10] ? 1u : 0u);
    goto L_08A3FAC4;
L_08A3FAC4:
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[11]);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[10]);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[2]);
    aot_gpr[14] = (aot_gpr[14] | aot_gpr[8]);
    aot_gpr[15] = (aot_gpr[15] | aot_gpr[9]);
    aot_gpr[2] = (aot_gpr[9] << 31u);
    goto L_08A3FADC;
L_08A3FADC:
    aot_gpr[8] = (aot_gpr[8] >> 1u);
    aot_gpr[7] = (aot_gpr[5] << 1u);
    aot_gpr[3] = (aot_gpr[4] >> 31u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[2]);
    aot_gpr[9] = (aot_gpr[9] >> 1u);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[4] << 1u);
    aot_gpr[2] = (aot_gpr[8] | aot_gpr[9]);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[12] = (aot_gpr[7] < aot_gpr[11] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3FAB0;
      }
      goto L_08A3FB0C;
    }
L_08A3FB0C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(0));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(255));
    aot_gpr[2] = (aot_gpr[14] & aot_gpr[2]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    aot_gpr[3] = (aot_gpr[15] & aot_gpr[3]);
      if (branch_taken) {
          goto L_08A3FB34;
      }
      goto L_08A3FB24;
    }
L_08A3FB24:
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(16), aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(20), aot_gpr[15]);
    aot_gpr[4] = (aot_gpr[13] + 0u);
    goto L_08A3FA20;
L_08A3FB34:
    { const bool branch_taken = aot_gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FB24;
      }
      goto L_08A3FB3C;
    }
L_08A3FB3C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(0));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[2] = (aot_gpr[14] & aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[15] & aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    if (aot_gpr[2] != 0u) {
    aot_gpr[14] = (aot_gpr[14] + static_cast<std::uint32_t>(128));
        goto L_08A3FB68;
    }
    goto L_08A3FB58;
L_08A3FB58:
    aot_gpr[2] = (aot_gpr[6] | aot_gpr[7]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FB24;
      }
      goto L_08A3FB64;
    }
L_08A3FB64:
    aot_gpr[14] = (aot_gpr[14] + static_cast<std::uint32_t>(128));
    goto L_08A3FB68;
L_08A3FB68:
    aot_gpr[2] = (aot_gpr[14] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    aot_gpr[15] = (aot_gpr[15] + aot_gpr[2]);
    goto L_08A3FB24;
L_08A3FB74:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (aot_gpr[9] << 31u);
        goto L_08A3FADC;
    }
    goto L_08A3FB7C;
L_08A3FB7C:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[10] ? 1u : 0u);
    goto L_08A3FAC4;
L_08A3FB84:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FAA0;
      }
      goto L_08A3FB8C;
    }
L_08A3FB8C:
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] << 1u);
    aot_gpr[3] = (aot_gpr[4] >> 31u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[4] << 1u);
    aot_gpr[12] = (aot_gpr[5] < aot_gpr[11] ? 1u : 0u);
    goto L_08A3FAA0;
L_08A3FBAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    aot_gpr[3] = (aot_gpr[5] + 0u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[7]);
    aot_gpr[31] = (0x08A3FBE0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 66u, 0x08A40464u>(ctx, &aot_mem) && ctx.pc == 0x08A3FBE0u) goto L_08A3FBE0;
    return;
L_08A3FBE0:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    aot_gpr[31] = (0x08A3FBECu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 66u, 0x08A40464u>(ctx, &aot_mem) && ctx.pc == 0x08A3FBECu) goto L_08A3FBEC;
    return;
L_08A3FBEC:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08A3FBF8u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 80u, 0x08A40580u>(ctx, &aot_mem) && ctx.pc == 0x08A3FBF8u) goto L_08A3FBF8;
    return;
L_08A3FBF8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3FC08:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    aot_gpr[3] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[7]);
    aot_gpr[31] = (0x08A3FC3Cu);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 66u, 0x08A40464u>(ctx, &aot_mem) && ctx.pc == 0x08A3FC3Cu) goto L_08A3FC3C;
    return;
L_08A3FC3C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    aot_gpr[31] = (0x08A3FC48u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 66u, 0x08A40464u>(ctx, &aot_mem) && ctx.pc == 0x08A3FC48u) goto L_08A3FC48;
    return;
L_08A3FC48:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3FC6C;
      }
      goto L_08A3FC58;
    }
L_08A3FC58:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_08A3FC80;
      }
      goto L_08A3FC6C;
    }
L_08A3FC6C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3FC80:
    aot_gpr[31] = (0x08A3FC88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 80u, 0x08A40580u>(ctx, &aot_mem) && ctx.pc == 0x08A3FC88u) goto L_08A3FC88;
    return;
L_08A3FC88:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_08A3FC6C;
L_08A3FC90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    aot_gpr[3] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[7]);
    aot_gpr[31] = (0x08A3FCC4u);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 66u, 0x08A40464u>(ctx, &aot_mem) && ctx.pc == 0x08A3FCC4u) goto L_08A3FCC4;
    return;
L_08A3FCC4:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    aot_gpr[31] = (0x08A3FCD0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 66u, 0x08A40464u>(ctx, &aot_mem) && ctx.pc == 0x08A3FCD0u) goto L_08A3FCD0;
    return;
L_08A3FCD0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3FCF4;
      }
      goto L_08A3FCE0;
    }
L_08A3FCE0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_08A3FD08;
      }
      goto L_08A3FCF4;
    }
L_08A3FCF4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3FD08:
    aot_gpr[31] = (0x08A3FD10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 80u, 0x08A40580u>(ctx, &aot_mem) && ctx.pc == 0x08A3FD10u) goto L_08A3FD10;
    return;
L_08A3FD10:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_08A3FCF4;
L_08A3FD18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    aot_gpr[3] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[7]);
    aot_gpr[31] = (0x08A3FD4Cu);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 66u, 0x08A40464u>(ctx, &aot_mem) && ctx.pc == 0x08A3FD4Cu) goto L_08A3FD4C;
    return;
L_08A3FD4C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    aot_gpr[31] = (0x08A3FD58u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 66u, 0x08A40464u>(ctx, &aot_mem) && ctx.pc == 0x08A3FD58u) goto L_08A3FD58;
    return;
L_08A3FD58:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3FD7C;
      }
      goto L_08A3FD68;
    }
L_08A3FD68:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_08A3FD90;
      }
      goto L_08A3FD7C;
    }
L_08A3FD7C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3FD90:
    aot_gpr[31] = (0x08A3FD98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 80u, 0x08A40580u>(ctx, &aot_mem) && ctx.pc == 0x08A3FD98u) goto L_08A3FD98;
    return;
L_08A3FD98:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_08A3FD7C;
L_08A3FDA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    aot_gpr[3] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[7]);
    aot_gpr[31] = (0x08A3FDD4u);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 66u, 0x08A40464u>(ctx, &aot_mem) && ctx.pc == 0x08A3FDD4u) goto L_08A3FDD4;
    return;
L_08A3FDD4:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    aot_gpr[31] = (0x08A3FDE0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 66u, 0x08A40464u>(ctx, &aot_mem) && ctx.pc == 0x08A3FDE0u) goto L_08A3FDE0;
    return;
L_08A3FDE0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3FE04;
      }
      goto L_08A3FDF0;
    }
L_08A3FDF0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_08A3FE18;
      }
      goto L_08A3FE04;
    }
L_08A3FE04:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3FE18:
    aot_gpr[31] = (0x08A3FE20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 80u, 0x08A40580u>(ctx, &aot_mem) && ctx.pc == 0x08A3FE20u) goto L_08A3FE20;
    return;
L_08A3FE20:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_08A3FE04;
L_08A3FE28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[3] = (aot_gpr[4] >> 31u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
      if (branch_taken) {
          goto L_08A3FE60;
      }
      goto L_08A3FE44;
    }
L_08A3FE44:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08A3FE4C;
L_08A3FE4C:
    aot_gpr[31] = (0x08A3FE54u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 24u, 0x08A401C4u>(ctx, &aot_mem) && ctx.pc == 0x08A3FE54u) goto L_08A3FE54;
    return;
L_08A3FE54:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A3FE58;
L_08A3FE58:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3FE60:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(60));
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A3FEF8;
      }
      goto L_08A3FE6C;
    }
L_08A3FE6C:
    aot_gpr[2] = (32768u << 16u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3FEE0;
      }
      goto L_08A3FE78;
    }
L_08A3FE78:
    aot_gpr[2] = (0u - aot_gpr[4]);
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> 31u));
    goto L_08A3FE80;
L_08A3FE80:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    aot_gpr[2] = (4095u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A3FE4C;
      }
      goto L_08A3FEA0;
    }
L_08A3FEA0:
    aot_gpr[6] = (4095u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 65535u);
    goto L_08A3FEA8;
L_08A3FEA8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[2] >> 31u);
    aot_gpr[3] = (aot_gpr[3] << 1u);
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] << 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3FEA8;
      }
      goto L_08A3FED8;
    }
L_08A3FED8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    goto L_08A3FE4C;
L_08A3FEE0:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(21048)));
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(21052)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A3FE58;
L_08A3FEF8:
    aot_gpr[2] = (aot_gpr[4] + 0u);
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 31u));
    goto L_08A3FE80;
L_08A3FF04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    aot_gpr[3] = (aot_gpr[5] + 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    aot_gpr[31] = (0x08A3FF28u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 66u, 0x08A40464u>(ctx, &aot_mem) && ctx.pc == 0x08A3FF28u) goto L_08A3FF28;
    return;
L_08A3FF28:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] ^ 2u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3FF78;
      }
      goto L_08A3FF3C;
    }
L_08A3FF3C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[2] = (aot_gpr[3] ^ 4u);
      if (branch_taken) {
          goto L_08A3FF78;
      }
      goto L_08A3FF44;
    }
L_08A3FF44:
    aot_gpr[3] = (32767u << 16u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (32768u << 16u);
      if (branch_taken) {
          goto L_08A3FF6C;
      }
      goto L_08A3FF50;
    }
L_08A3FF50:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < 31 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3FF78;
      }
      goto L_08A3FF60;
    }
L_08A3FF60:
    aot_gpr[3] = (32767u << 16u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (32768u << 16u);
      if (branch_taken) {
          goto L_08A3FF88;
      }
      goto L_08A3FF6C;
    }
L_08A3FF6C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] | 65535u);
    if (aot_gpr[2] == 0u) aot_gpr[5] = (aot_gpr[3]);
    goto L_08A3FF78;
L_08A3FF78:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3FF88:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(60));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (aot_gpr[4] << 26u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[8]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A3FFB0;
      }
      goto L_08A3FFA4;
    }
L_08A3FFA4:
    aot_gpr[6] = (aot_gpr[3] >> (aot_gpr[4] & 31u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08A3FFC8;
      }
      goto L_08A3FFB0;
    }
L_08A3FFB0:
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[6] = (aot_gpr[2] >> (aot_gpr[4] & 31u));
      if (branch_taken) {
          goto L_08A3FFC4;
      }
      goto L_08A3FFB8;
    }
L_08A3FFB8:
    aot_gpr[8] = (0u - aot_gpr[4]);
    aot_gpr[8] = (aot_gpr[3] << (aot_gpr[8] & 31u));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    goto L_08A3FFC4;
L_08A3FFC4:
    aot_gpr[7] = (aot_gpr[3] >> (aot_gpr[4] & 31u));
    goto L_08A3FFC8;
L_08A3FFC8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u - aot_gpr[6]);
    if (aot_gpr[2] == 0u) aot_gpr[5] = (aot_gpr[6]);
    goto L_08A3FF78;
L_08A3FFD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    aot_gpr[3] = (aot_gpr[5] + 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    aot_gpr[31] = (0x08A3FFFCu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 66u, 0x08A40464u>(ctx, &aot_mem) && ctx.pc == 0x08A3FFFCu) goto L_08A3FFFC;
    return;
L_08A3FFFC:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    ctx.pc = 0x08A40000u; return;
}

void recomp_unit_0571(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0571_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_571(Runtime &runtime) {
    runtime.register_generated_unit(571u, 0x08A3F000u, 4096u, &recomp_unit_0571, &recomp_unit_0571_entry);
    runtime.register_function(0x08A3F000u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F00Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F024u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F03Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F044u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F078u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F0A8u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F0B8u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F0C4u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F0CCu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F0D0u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F0E0u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F108u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F118u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F124u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F12Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F130u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F150u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F168u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F178u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F180u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F1A0u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F1B8u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F1E0u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F1ECu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F208u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F218u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F224u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F22Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F240u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F248u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F250u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F258u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F264u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F26Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F2B0u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F2B8u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F2DCu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F2E8u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F2F0u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F2FCu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F324u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F32Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F334u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F340u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F368u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F36Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F370u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F37Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F38Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F39Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F3A4u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F3B4u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F3E0u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F3E8u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F3ECu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F3F0u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F438u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F440u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F448u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F44Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F464u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F4A8u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F4B0u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F4B8u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F4C0u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F4E4u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F50Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F514u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F524u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F534u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F568u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F574u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F584u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F58Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F59Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F5D0u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F5DCu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F5F8u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F600u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F610u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F654u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F660u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F674u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F684u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F690u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F6A0u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F6A4u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F6B8u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F6C0u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F6E0u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F6E8u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F6F8u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F6FCu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F714u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F71Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F728u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F788u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F790u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F794u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F7B4u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F7BCu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F7C0u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F824u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F840u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F864u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F87Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F884u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F890u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F898u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F8A4u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F8C4u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F8DCu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F8F4u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F8F8u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F90Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F914u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F930u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F93Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F940u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F94Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F958u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F960u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F964u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F970u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F978u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F988u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F9BCu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F9C8u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F9DCu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3F9ECu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FA04u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FA10u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FA1Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FA20u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FA28u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FA38u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FA40u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FA5Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FA64u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FA74u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FA98u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FAA0u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FAB0u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FAB8u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FAC0u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FAC4u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FADCu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FB0Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FB24u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FB34u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FB3Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FB58u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FB64u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FB68u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FB74u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FB7Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FB84u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FB8Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FBACu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FBE0u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FBECu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FBF8u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FC08u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FC3Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FC48u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FC58u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FC6Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FC80u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FC88u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FC90u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FCC4u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FCD0u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FCE0u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FCF4u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FD08u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FD10u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FD18u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FD4Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FD58u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FD68u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FD7Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FD90u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FD98u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FDA0u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FDD4u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FDE0u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FDF0u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FE04u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FE18u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FE20u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FE28u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FE44u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FE4Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FE54u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FE58u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FE60u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FE6Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FE78u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FE80u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FEA0u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FEA8u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FED8u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FEE0u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FEF8u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FF04u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FF28u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FF3Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FF44u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FF50u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FF60u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FF6Cu, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FF78u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FF88u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FFA4u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FFB0u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FFB8u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FFC4u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FFC8u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FFD8u, &recomp_unit_0571, "recomp_unit_0571");
    runtime.register_function(0x08A3FFFCu, &recomp_unit_0571, "recomp_unit_0571");
}
} // namespace psprecomp
