#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0168[1014] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 7, 8, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 21, 0, 0,
    0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 26, 27, 28, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0,
    0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0,
    0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0,
    0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76,
    77, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0,
    0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0,
    0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 103, 0,
    0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 112, 113, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 116, 117, 0, 118, 0, 0, 119, 0, 120, 0, 121, 0,
    0, 0, 0, 0, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 129, 0,
    0, 0, 0, 0, 0, 130, 131, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 136, 0, 137, 0,
    138, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 143, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 152, 0,
    0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 160, 0, 0, 0, 161, 162, 0,
    0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 0, 0, 173, 0, 174,
};
void recomp_unit_0168_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088AC000u;
        entry_id = (entry_delta < 4056u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0168[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088AC000;
    case 2u: goto L_088AC00C;
    case 3u: goto L_088AC018;
    case 4u: goto L_088AC024;
    case 5u: goto L_088AC048;
    case 6u: goto L_088AC070;
    case 7u: goto L_088AC094;
    case 8u: goto L_088AC098;
    case 9u: goto L_088AC0A4;
    case 10u: goto L_088AC0B0;
    case 11u: goto L_088AC0C8;
    case 12u: goto L_088AC0D4;
    case 13u: goto L_088AC0E0;
    case 14u: goto L_088AC100;
    case 15u: goto L_088AC120;
    case 16u: goto L_088AC138;
    case 17u: goto L_088AC144;
    case 18u: goto L_088AC150;
    case 19u: goto L_088AC160;
    case 20u: goto L_088AC170;
    case 21u: goto L_088AC174;
    case 22u: goto L_088AC18C;
    case 23u: goto L_088AC1BC;
    case 24u: goto L_088AC1D4;
    case 25u: goto L_088AC200;
    case 26u: goto L_088AC20C;
    case 27u: goto L_088AC210;
    case 28u: goto L_088AC214;
    case 29u: goto L_088AC21C;
    case 30u: goto L_088AC228;
    case 31u: goto L_088AC234;
    case 32u: goto L_088AC2A4;
    case 33u: goto L_088AC2B8;
    case 34u: goto L_088AC2C4;
    case 35u: goto L_088AC2D8;
    case 36u: goto L_088AC2E8;
    case 37u: goto L_088AC2F8;
    case 38u: goto L_088AC30C;
    case 39u: goto L_088AC31C;
    case 40u: goto L_088AC328;
    case 41u: goto L_088AC33C;
    case 42u: goto L_088AC360;
    case 43u: goto L_088AC36C;
    case 44u: goto L_088AC390;
    case 45u: goto L_088AC3B8;
    case 46u: goto L_088AC3D0;
    case 47u: goto L_088AC3E4;
    case 48u: goto L_088AC3F0;
    case 49u: goto L_088AC404;
    case 50u: goto L_088AC410;
    case 51u: goto L_088AC48C;
    case 52u: goto L_088AC49C;
    case 53u: goto L_088AC4AC;
    case 54u: goto L_088AC4CC;
    case 55u: goto L_088AC4E0;
    case 56u: goto L_088AC50C;
    case 57u: goto L_088AC52C;
    case 58u: goto L_088AC560;
    case 59u: goto L_088AC618;
    case 60u: goto L_088AC62C;
    case 61u: goto L_088AC638;
    case 62u: goto L_088AC644;
    case 63u: goto L_088AC654;
    case 64u: goto L_088AC660;
    case 65u: goto L_088AC66C;
    case 66u: goto L_088AC684;
    case 67u: goto L_088AC6A8;
    case 68u: goto L_088AC6C4;
    case 69u: goto L_088AC6DC;
    case 70u: goto L_088AC6E8;
    case 71u: goto L_088AC708;
    case 72u: goto L_088AC71C;
    case 73u: goto L_088AC72C;
    case 74u: goto L_088AC738;
    case 75u: goto L_088AC770;
    case 76u: goto L_088AC77C;
    case 77u: goto L_088AC780;
    case 78u: goto L_088AC784;
    case 79u: goto L_088AC78C;
    case 80u: goto L_088AC7BC;
    case 81u: goto L_088AC7CC;
    case 82u: goto L_088AC80C;
    case 83u: goto L_088AC818;
    case 84u: goto L_088AC830;
    case 85u: goto L_088AC878;
    case 86u: goto L_088AC8A4;
    case 87u: goto L_088AC8D0;
    case 88u: goto L_088AC8E0;
    case 89u: goto L_088AC8EC;
    case 90u: goto L_088AC90C;
    case 91u: goto L_088AC93C;
    case 92u: goto L_088AC98C;
    case 93u: goto L_088AC9A4;
    case 94u: goto L_088AC9B8;
    case 95u: goto L_088AC9D8;
    case 96u: goto L_088AC9EC;
    case 97u: goto L_088ACA04;
    case 98u: goto L_088ACA24;
    case 99u: goto L_088ACA34;
    case 100u: goto L_088ACA44;
    case 101u: goto L_088ACA5C;
    case 102u: goto L_088ACA68;
    case 103u: goto L_088ACA78;
    case 104u: goto L_088ACA9C;
    case 105u: goto L_088ACAA8;
    case 106u: goto L_088ACAD0;
    case 107u: goto L_088ACADC;
    case 108u: goto L_088ACAE8;
    case 109u: goto L_088ACB00;
    case 110u: goto L_088ACB64;
    case 111u: goto L_088ACB70;
    case 112u: goto L_088ACB9C;
    case 113u: goto L_088ACBA0;
    case 114u: goto L_088ACBB0;
    case 115u: goto L_088ACBBC;
    case 116u: goto L_088ACBD0;
    case 117u: goto L_088ACBD4;
    case 118u: goto L_088ACBDC;
    case 119u: goto L_088ACBE8;
    case 120u: goto L_088ACBF0;
    case 121u: goto L_088ACBF8;
    case 122u: goto L_088ACC14;
    case 123u: goto L_088ACC1C;
    case 124u: goto L_088ACC24;
    case 125u: goto L_088ACC40;
    case 126u: goto L_088ACC54;
    case 127u: goto L_088ACC60;
    case 128u: goto L_088ACC70;
    case 129u: goto L_088ACC78;
    case 130u: goto L_088ACC94;
    case 131u: goto L_088ACC98;
    case 132u: goto L_088ACCA4;
    case 133u: goto L_088ACCBC;
    case 134u: goto L_088ACCD0;
    case 135u: goto L_088ACCE4;
    case 136u: goto L_088ACCF0;
    case 137u: goto L_088ACCF8;
    case 138u: goto L_088ACD00;
    case 139u: goto L_088ACD04;
    case 140u: goto L_088ACD10;
    case 141u: goto L_088ACD54;
    case 142u: goto L_088ACD64;
    case 143u: goto L_088ACD68;
    case 144u: goto L_088ACD90;
    case 145u: goto L_088ACDAC;
    case 146u: goto L_088ACDEC;
    case 147u: goto L_088ACE00;
    case 148u: goto L_088ACE1C;
    case 149u: goto L_088ACE30;
    case 150u: goto L_088ACE64;
    case 151u: goto L_088ACE74;
    case 152u: goto L_088ACE78;
    case 153u: goto L_088ACE84;
    case 154u: goto L_088ACE94;
    case 155u: goto L_088ACEAC;
    case 156u: goto L_088ACEB8;
    case 157u: goto L_088ACEC0;
    case 158u: goto L_088ACED0;
    case 159u: goto L_088ACEDC;
    case 160u: goto L_088ACEE4;
    case 161u: goto L_088ACEF4;
    case 162u: goto L_088ACEF8;
    case 163u: goto L_088ACF04;
    case 164u: goto L_088ACF14;
    case 165u: goto L_088ACF24;
    case 166u: goto L_088ACF3C;
    case 167u: goto L_088ACF48;
    case 168u: goto L_088ACF60;
    case 169u: goto L_088ACF70;
    case 170u: goto L_088ACFAC;
    case 171u: goto L_088ACFB4;
    case 172u: goto L_088ACFBC;
    case 173u: goto L_088ACFCC;
    case 174u: goto L_088ACFD4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088AC000:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[5]);
      if (branch_taken) {
          goto L_088AC018;
      }
      goto L_088AC00C;
    }
L_088AC00C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (aot_gpr[5] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    goto L_088AC018;
L_088AC018:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088AC024u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 52u, 0x088AAA64u>(ctx, &aot_mem) && ctx.pc == 0x088AC024u) goto L_088AC024;
    return;
L_088AC024:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AC048:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088AC100;
      }
      goto L_088AC070;
    }
L_088AC070:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4624));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_088AC0C8;
      }
      goto L_088AC094;
    }
L_088AC094:
    aot_gpr[18] = (2218u << 16u);
    goto L_088AC098;
L_088AC098:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC0B0;
      }
      goto L_088AC0A4;
    }
L_088AC0A4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088AC0B0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-3948)));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 24u, 0x088C61B8u>(ctx, &aot_mem) && ctx.pc == 0x088AC0B0u) goto L_088AC0B0;
    return;
L_088AC0B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088AC098;
      }
      goto L_088AC0C8;
    }
L_088AC0C8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088AC0D4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 7u, 0x088B30E8u>(ctx, &aot_mem) && ctx.pc == 0x088AC0D4u) goto L_088AC0D4;
    return;
L_088AC0D4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088AC100;
      }
      goto L_088AC0E0;
    }
L_088AC0E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088AC100u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AC100u) goto L_088AC100;
    return;
L_088AC100:
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
L_088AC120:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088AC138u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 26u, 0x088AB300u>(ctx, &aot_mem) && ctx.pc == 0x088AC138u) goto L_088AC138;
    return;
L_088AC138:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC1BC;
      }
      goto L_088AC144;
    }
L_088AC144:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC1BC;
      }
      goto L_088AC150;
    }
L_088AC150:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 61 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AC174;
      }
      goto L_088AC160;
    }
L_088AC160:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] & 16u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AC174;
      }
      goto L_088AC170;
    }
L_088AC170:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    goto L_088AC174;
L_088AC174:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 60u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088AC1BC;
      }
      goto L_088AC18C;
    }
L_088AC18C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-200));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-9));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x088AC1BCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 183u, 0x088A9DECu>(ctx, &aot_mem) && ctx.pc == 0x088AC1BCu) goto L_088AC1BC;
    return;
L_088AC1BC:
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
L_088AC1D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(30)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088AC210;
      }
      goto L_088AC200;
    }
L_088AC200:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088AC214;
      }
      goto L_088AC20C;
    }
L_088AC20C:
    aot_gpr[4] = (0u | 1u);
    goto L_088AC210;
L_088AC210:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_088AC214;
L_088AC214:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC4AC;
      }
      goto L_088AC21C;
    }
L_088AC21C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088AC228u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 53u, 0x088AAA7Cu>(ctx, &aot_mem) && ctx.pc == 0x088AC228u) goto L_088AC228;
    return;
L_088AC228:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088AC234u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 53u, 0x088AAA7Cu>(ctx, &aot_mem) && ctx.pc == 0x088AC234u) goto L_088AC234;
    return;
L_088AC234:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(104))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(116))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[6] = (17056u << 16u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(106))))));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(117))))));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[4] = (16800u << 16u);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(29)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    aot_fpr[13] = aot_fpr[15] + aot_fpr[16];
    aot_fpr[17] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[17])));
    aot_gpr[5] = (16256u << 16u);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_fpr[12] = aot_fpr[13] + aot_fpr[17];
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088AC2B8;
      }
      goto L_088AC2A4;
    }
L_088AC2A4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (16640u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088AC2B8;
L_088AC2B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(233)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC2F8;
      }
      goto L_088AC2C4;
    }
L_088AC2C4:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (0u | 109u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088AC2D8u);
    aot_gpr[19] = (aot_gpr[6] + static_cast<std::uint32_t>(29152));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088AC2D8u) goto L_088AC2D8;
    return;
L_088AC2D8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088AC2E8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088AC2E8u) goto L_088AC2E8;
    return;
L_088AC2E8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(160)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(161)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(162)));
      if (branch_taken) {
          goto L_088AC328;
      }
      goto L_088AC2F8;
    }
L_088AC2F8:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (0u | 109u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088AC30Cu);
    aot_gpr[19] = (aot_gpr[6] + static_cast<std::uint32_t>(29156));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088AC30Cu) goto L_088AC30C;
    return;
L_088AC30C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088AC31Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088AC31Cu) goto L_088AC31C;
    return;
L_088AC31C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(160)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(161)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(162)));
    goto L_088AC328;
L_088AC328:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088AC33Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088AC33Cu) goto L_088AC33C;
    return;
L_088AC33C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x088AC360u);
    aot_gpr[10] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088AC360u) goto L_088AC360;
    return;
L_088AC360:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(29)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC3B8;
      }
      goto L_088AC36C;
    }
L_088AC36C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (16768u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 4u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088AC390u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(32))))));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088AC390u) goto L_088AC390;
    return;
L_088AC390:
    aot_gpr[8] = (65409u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 2u);
    aot_gpr[31] = (0x088AC3B8u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-32640));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088AC3B8u) goto L_088AC3B8;
    return;
L_088AC3B8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(232))))));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC4AC;
      }
      goto L_088AC3D0;
    }
L_088AC3D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[6]);
      if (branch_taken) {
          goto L_088AC3F0;
      }
      goto L_088AC3E4;
    }
L_088AC3E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (aot_gpr[5] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    goto L_088AC3F0;
L_088AC3F0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(52));
    aot_gpr[31] = (0x088AC404u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 19u, 0x08A4C160u>(ctx, &aot_mem) && ctx.pc == 0x088AC404u) goto L_088AC404;
    return;
L_088AC404:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088AC410u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 52u, 0x088AAA64u>(ctx, &aot_mem) && ctx.pc == 0x088AC410u) goto L_088AC410;
    return;
L_088AC410:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(104))))));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(116))))));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(106))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(117))))));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(232))))));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(14))))));
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[7] << 2u);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(168)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088AC48Cu);
    aot_gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 19u, 0x088AA348u>(ctx, &aot_mem) && ctx.pc == 0x088AC48Cu) goto L_088AC48C;
    return;
L_088AC48C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088AC49Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x088AC49Cu) goto L_088AC49C;
    return;
L_088AC49C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088AC4ACu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 48u, 0x088AA9D8u>(ctx, &aot_mem) && ctx.pc == 0x088AC4ACu) goto L_088AC4AC;
    return;
L_088AC4AC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AC4CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088AC4E0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 189u, 0x088A9E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088AC4E0u) goto L_088AC4E0;
    return;
L_088AC4E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(34))))));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(36))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(232), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AC50C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27312), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AC52C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[31]);
    aot_gpr[31] = (0x088AC560u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 221u, 0x08A4BFECu>(ctx, &aot_mem) && ctx.pc == 0x088AC560u) goto L_088AC560;
    return;
L_088AC560:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 39u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_fpr[17] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_gpr[6] = (2215u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[18]));
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[13] = aot_fpr[15] + aot_fpr[13];
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[9]);
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088AC618u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x088AC618u) goto L_088AC618;
    return;
L_088AC618:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] | 10u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
      if (branch_taken) {
          goto L_088AC638;
      }
      goto L_088AC62C;
    }
L_088AC62C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[4]);
    goto L_088AC638;
L_088AC638:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088AC644u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x088AC644u) goto L_088AC644;
    return;
L_088AC644:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088AC654u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 59u, 0x0892F600u>(ctx, &aot_mem) && ctx.pc == 0x088AC654u) goto L_088AC654;
    return;
L_088AC654:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088AC660u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 62u, 0x089356ACu>(ctx, &aot_mem) && ctx.pc == 0x088AC660u) goto L_088AC660;
    return;
L_088AC660:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AC66C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088AC684u);
    aot_gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 78u, 0x088AACD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC684u) goto L_088AC684;
    return;
L_088AC684:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4576));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AC6A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088AC708;
      }
      goto L_088AC6C4;
    }
L_088AC6C4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4576));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088AC6DCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 164u, 0x088A9C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088AC6DCu) goto L_088AC6DC;
    return;
L_088AC6DC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088AC708;
      }
      goto L_088AC6E8;
    }
L_088AC6E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088AC708u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088AC708u) goto L_088AC708;
    return;
L_088AC708:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AC71C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088AC72Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 26u, 0x088AB300u>(ctx, &aot_mem) && ctx.pc == 0x088AC72Cu) goto L_088AC72C;
    return;
L_088AC72C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AC738:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-304));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(30)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088AC780;
      }
      goto L_088AC770;
    }
L_088AC770:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088AC784;
      }
      goto L_088AC77C;
    }
L_088AC77C:
    aot_gpr[4] = (0u | 1u);
    goto L_088AC780;
L_088AC780:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_088AC784;
L_088AC784:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC8A4;
      }
      goto L_088AC78C;
    }
L_088AC78C:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(148)));
    aot_gpr[4] = (0u | 60000u);
    { const std::uint32_t dividend = aot_gpr[21]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (0u | 60u);
    aot_gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[20] = (ctx.hi);
    aot_gpr[5] = (aot_gpr[20] < static_cast<std::uint32_t>(60) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (0u | 10u);
      if (branch_taken) {
          goto L_088AC7CC;
      }
      goto L_088AC7BC;
    }
L_088AC7BC:
    aot_gpr[20] = (0u | 59u);
    aot_gpr[21] = (aot_gpr[20] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (0u | 99u);
      if (branch_taken) {
          goto L_088AC80C;
      }
      goto L_088AC7CC;
    }
L_088AC7CC:
    { const std::uint32_t dividend = aot_gpr[21]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[5] = (0u | 1000u);
    aot_gpr[6] = (0u | 100u);
    aot_gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[21]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[7]; const std::uint32_t divisor = aot_gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[22] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[21] = (ctx.hi);
    goto L_088AC80C;
L_088AC80C:
    aot_gpr[4] = (0u | 110u);
    aot_gpr[31] = (0x088AC818u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088AC818u) goto L_088AC818;
    return;
L_088AC818:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088AC830u);
    aot_gpr[8] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088AC830u) goto L_088AC830;
    return;
L_088AC830:
    aot_gpr[4] = (16928u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[11] = (16256u << 16u);
    aot_gpr[4] = (16864u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (65409u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[11]);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-32640));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x088AC878u);
    aot_gpr[10] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088AC878u) goto L_088AC878;
    return;
L_088AC878:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[4] = (16792u << 16u);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (16832u << 16u);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[31] = (0x088AC8A4u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_088AC52C;
L_088AC8A4:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AC8D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088AC8E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 189u, 0x088A9E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088AC8E0u) goto L_088AC8E0;
    return;
L_088AC8E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AC8EC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27320), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AC90C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088AC93Cu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 78u, 0x088AACD0u>(ctx, &aot_mem) && ctx.pc == 0x088AC93Cu) goto L_088AC93C;
    return;
L_088AC93C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4528));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (0u | 10u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), aot_gpr[6]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_088AC98C;
L_088AC98C:
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(220), static_cast<std::uint8_t>(aot_gpr[18]));
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x088AC9A4u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x088AC9A4u) goto L_088AC9A4;
    return;
L_088AC9A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(212), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088AC98C;
      }
      goto L_088AC9B8;
    }
L_088AC9B8:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_088AC9D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088AC9EC;
L_088AC9EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(220))))));
    aot_gpr[31] = (0x088ACA04u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x088ACA04u) goto L_088ACA04;
    return;
L_088ACA04:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(220), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 2 ? 1u : 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088AC9EC;
      }
      goto L_088ACA24;
    }
L_088ACA24:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ACA34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACA9C;
      }
      goto L_088ACA44;
    }
L_088ACA44:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4528));
    aot_gpr[31] = (0x088ACA5Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(144), aot_gpr[5]);
    goto L_088AC9D8;
L_088ACA5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x088ACA68u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 164u, 0x088A9C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088ACA68u) goto L_088ACA68;
    return;
L_088ACA68:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088ACA9C;
      }
      goto L_088ACA78;
    }
L_088ACA78:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088ACA9Cu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088ACA9Cu) goto L_088ACA9C;
    return;
L_088ACA9C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ACAA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x088ACAD0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 26u, 0x088AB300u>(ctx, &aot_mem) && ctx.pc == 0x088ACAD0u) goto L_088ACAD0;
    return;
L_088ACAD0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ACAE8;
      }
      goto L_088ACADC;
    }
L_088ACADC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(195)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACD68;
      }
      goto L_088ACAE8;
    }
L_088ACAE8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(196))))));
    aot_gpr[6] = (16128u << 16u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(221))))));
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[6]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088ACB64;
      }
      goto L_088ACB00;
    }
L_088ACB00:
    aot_gpr[6] = (0u | 10u);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[6] = (15733u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 49807u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[7] = (16268u << 16u);
    aot_gpr[6] = (15631u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[6] = (aot_gpr[6] | 23593u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] | 52429u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[6] = (16300u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 52429u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_fpr[13] = aot_fpr[15] - aot_fpr[13];
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = aot_fpr[16] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(184), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(196), static_cast<std::uint16_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(188), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088ACB70;
      }
      goto L_088ACB64;
    }
L_088ACB64:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(188), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088ACB70;
L_088ACB70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(205)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[4] = (15360u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088ACBA0;
      }
      goto L_088ACB9C;
    }
L_088ACB9C:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    goto L_088ACBA0;
L_088ACBA0:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(194)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(188), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088ACBF0;
      }
      goto L_088ACBB0;
    }
L_088ACBB0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(200))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACBD4;
      }
      goto L_088ACBBC;
    }
L_088ACBBC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(200), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(200))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088ACBD4;
      }
      goto L_088ACBD0;
    }
L_088ACBD0:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(200), static_cast<std::uint16_t>(0u));
    goto L_088ACBD4;
L_088ACBD4:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_088ACC60;
      }
      goto L_088ACBDC;
    }
L_088ACBDC:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088ACBE8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x088ACBE8u) goto L_088ACBE8;
    return;
L_088ACBE8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(221), static_cast<std::uint8_t>(aot_gpr[18]));
      if (branch_taken) {
          goto L_088ACC60;
      }
      goto L_088ACBF0;
    }
L_088ACBF0:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_088ACC1C;
      }
      goto L_088ACBF8;
    }
L_088ACBF8:
    aot_gpr[8] = (16256u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(216)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (0u | 255u);
    aot_gpr[31] = (0x088ACC14u);
    aot_gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x088ACC14u) goto L_088ACC14;
    return;
L_088ACC14:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(221), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(221))))));
    goto L_088ACC1C;
L_088ACC1C:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_088ACC60;
      }
      goto L_088ACC24;
    }
L_088ACC24:
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[5] << 6u);
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[31] = (0x088ACC40u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 101u, 0x0892A7E0u>(ctx, &aot_mem) && ctx.pc == 0x088ACC40u) goto L_088ACC40;
    return;
L_088ACC40:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(221))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[4] = (aot_gpr[4] << 6u);
    aot_gpr[31] = (0x088ACC54u);
    aot_gpr[19] = (aot_gpr[5] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 171u, 0x08863E54u>(ctx, &aot_mem) && ctx.pc == 0x088ACC54u) goto L_088ACC54;
    return;
L_088ACC54:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088ACC60u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 107u, 0x0892A828u>(ctx, &aot_mem) && ctx.pc == 0x088ACC60u) goto L_088ACC60;
    return;
L_088ACC60:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(205)));
    aot_gpr[6] = (0u | 127u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(220))))));
      if (branch_taken) {
          goto L_088ACCF0;
      }
      goto L_088ACC70;
    }
L_088ACC70:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_088ACC98;
      }
      goto L_088ACC78;
    }
L_088ACC78:
    aot_gpr[8] = (16256u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(212)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (0u | 255u);
    aot_gpr[31] = (0x088ACC94u);
    aot_gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x088ACC94u) goto L_088ACC94;
    return;
L_088ACC94:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(220), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_088ACC98;
L_088ACC98:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(198))))));
      if (branch_taken) {
          goto L_088ACCD0;
      }
      goto L_088ACCA4;
    }
L_088ACCA4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(198), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(198))))));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 255 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ACD04;
      }
      goto L_088ACCBC;
    }
L_088ACCBC:
    aot_gpr[4] = (0u | 255u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(198), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088ACD04;
      }
      goto L_088ACCD0;
    }
L_088ACCD0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(198), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(198))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_088ACD04;
      }
      goto L_088ACCE4;
    }
L_088ACCE4:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(198), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088ACD04;
      }
      goto L_088ACCF0;
    }
L_088ACCF0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_088ACD04;
      }
      goto L_088ACCF8;
    }
L_088ACCF8:
    aot_gpr[31] = (0x088ACD00u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x088ACD00u) goto L_088ACD00;
    return;
L_088ACD00:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(220), static_cast<std::uint8_t>(aot_gpr[18]));
    goto L_088ACD04;
L_088ACD04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(207)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088ACD68;
      }
      goto L_088ACD10;
    }
L_088ACD10:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(207), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(207)));
    aot_gpr[5] = (17279u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (15872u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (0u | 255u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(202), static_cast<std::uint16_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_088ACD68;
      }
      goto L_088ACD54;
    }
L_088ACD54:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(193)));
    aot_gpr[4] = (0u | 1u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 5u);
        goto L_088ACD64;
    }
    goto L_088ACD64;
L_088ACD64:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088ACD68;
L_088ACD68:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ACD90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088ACDACu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 189u, 0x088A9E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088ACDACu) goto L_088ACDAC;
    return;
L_088ACDAC:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(195), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(196), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(205), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(206), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(198), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(200), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(207), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088ACDEC;
L_088ACDEC:
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(220))))));
    aot_gpr[31] = (0x088ACE00u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x088ACE00u) goto L_088ACE00;
    return;
L_088ACE00:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(220), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088ACDEC;
      }
      goto L_088ACE1C;
    }
L_088ACE1C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ACE30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(205)));
    aot_gpr[6] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[6] & 127u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(206), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(205), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(194)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(205)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(193)));
      if (branch_taken) {
          goto L_088ACE78;
      }
      goto L_088ACE64;
    }
L_088ACE64:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(206)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACE78;
      }
      goto L_088ACE74;
    }
L_088ACE74:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(0u));
    goto L_088ACE78;
L_088ACE78:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(194)));
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ACEAC;
      }
      goto L_088ACE84;
    }
L_088ACE84:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(206)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACEAC;
      }
      goto L_088ACE94;
    }
L_088ACE94:
    aot_gpr[7] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[7] = (0u | 255u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(200), static_cast<std::uint16_t>(aot_gpr[7]));
    aot_gpr[7] = (0u | 10u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(196), static_cast<std::uint16_t>(aot_gpr[7]));
    goto L_088ACEAC;
L_088ACEAC:
    aot_gpr[6] = (aot_gpr[6] & 128u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACEDC;
      }
      goto L_088ACEB8;
    }
L_088ACEB8:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ACED0;
      }
      goto L_088ACEC0;
    }
L_088ACEC0:
    aot_gpr[4] = (0u | 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(207), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088ACED0;
L_088ACED0:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088ACEF8;
      }
      goto L_088ACEDC;
    }
L_088ACEDC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACEF4;
      }
      goto L_088ACEE4;
    }
L_088ACEE4:
    aot_gpr[4] = (0u | 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(207), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088ACEF4;
L_088ACEF4:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(0u));
    goto L_088ACEF8;
L_088ACEF8:
    aot_gpr[4] = (0u | 127u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088ACF3C;
      }
      goto L_088ACF04;
    }
L_088ACF04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(206)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 127 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACF24;
      }
      goto L_088ACF14;
    }
L_088ACF14:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 16u);
    aot_gpr[31] = (0x088ACF24u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 72u, 0x088AAC30u>(ctx, &aot_mem) && ctx.pc == 0x088ACF24u) goto L_088ACF24;
    return;
L_088ACF24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_088ACF60;
      }
      goto L_088ACF3C;
    }
L_088ACF3C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 127 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACF60;
      }
      goto L_088ACF48;
    }
L_088ACF48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
    goto L_088ACF60;
L_088ACF60:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ACF70:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(195), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(34))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(104), static_cast<std::uint16_t>(aot_gpr[7]));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(36))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(106), static_cast<std::uint16_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(0u));
    aot_gpr[5] = (aot_gpr[8] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[6] = (0u | 2u);
    aot_gpr[5] = (0u | 255u);
    goto L_088ACFAC;
L_088ACFAC:
    { const bool branch_taken = aot_gpr[7] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088ACFBC;
      }
      goto L_088ACFB4;
    }
L_088ACFB4:
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_088ACFBC;
L_088ACFBC:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ACFAC;
      }
      goto L_088ACFCC;
    }
L_088ACFCC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ACFD4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(205)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[10] = (0u | 127u);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    ctx.pc = 0x088AD000u; return;
}

void recomp_unit_0168(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0168_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_168(Runtime &runtime) {
    runtime.register_generated_unit(168u, 0x088AC000u, 4096u, &recomp_unit_0168, &recomp_unit_0168_entry);
    runtime.register_function(0x088AC000u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC00Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC018u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC024u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC048u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC070u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC094u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC098u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC0A4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC0B0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC0C8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC0D4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC0E0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC100u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC120u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC138u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC144u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC150u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC160u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC170u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC174u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC18Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC1BCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC1D4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC200u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC20Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC210u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC214u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC21Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC228u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC234u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC2A4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC2B8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC2C4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC2D8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC2E8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC2F8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC30Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC31Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC328u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC33Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC360u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC36Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC390u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC3B8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC3D0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC3E4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC3F0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC404u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC410u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC48Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC49Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC4ACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC4CCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC4E0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC50Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC52Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC560u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC618u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC62Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC638u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC644u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC654u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC660u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC66Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC684u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC6A8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC6C4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC6DCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC6E8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC708u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC71Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC72Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC738u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC770u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC77Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC780u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC784u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC78Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC7BCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC7CCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC80Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC818u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC830u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC878u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC8A4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC8D0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC8E0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC8ECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC90Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC93Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC98Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC9A4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC9B8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC9D8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088AC9ECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACA04u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACA24u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACA34u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACA44u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACA5Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACA68u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACA78u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACA9Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACAA8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACAD0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACADCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACAE8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACB00u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACB64u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACB70u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACB9Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACBA0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACBB0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACBBCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACBD0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACBD4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACBDCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACBE8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACBF0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACBF8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACC14u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACC1Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACC24u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACC40u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACC54u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACC60u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACC70u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACC78u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACC94u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACC98u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACCA4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACCBCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACCD0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACCE4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACCF0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACCF8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACD00u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACD04u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACD10u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACD54u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACD64u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACD68u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACD90u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACDACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACDECu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACE00u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACE1Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACE30u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACE64u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACE74u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACE78u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACE84u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACE94u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACEACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACEB8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACEC0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACED0u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACEDCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACEE4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACEF4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACEF8u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACF04u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACF14u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACF24u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACF3Cu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACF48u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACF60u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACF70u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACFACu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACFB4u, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACFBCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACFCCu, &recomp_unit_0168, "recomp_unit_0168");
    runtime.register_function(0x088ACFD4u, &recomp_unit_0168, "recomp_unit_0168");
}
} // namespace psprecomp
