#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0187[1020] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0,
    6, 0, 0, 0, 7, 0, 8, 0, 0, 0, 9, 0, 10, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 0,
    16, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0,
    0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0,
    0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 44, 0,
    0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 59,
    0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 65, 0, 66, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 0, 70, 71,
    72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 77, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0,
    0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0,
    0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 107, 0, 0, 108, 0, 109, 0,
    0, 110, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0,
    0, 0, 116, 0, 0, 0, 0, 117, 118, 0, 0, 119, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 129, 0, 0, 130, 0, 131, 0, 0, 132,
    0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 140, 141, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0,
    0, 146, 147, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 153, 0, 0,
    154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0,
    160, 0, 161, 0, 0, 0, 162, 0, 0, 163, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0,
    0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 171, 0, 0, 0, 172, 0, 173, 0, 174, 175, 0, 0, 0, 0, 0, 176,
};
void recomp_unit_0187_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088BF000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0187[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088BF000;
    case 2u: goto L_088BF02C;
    case 3u: goto L_088BF050;
    case 4u: goto L_088BF05C;
    case 5u: goto L_088BF070;
    case 6u: goto L_088BF080;
    case 7u: goto L_088BF090;
    case 8u: goto L_088BF098;
    case 9u: goto L_088BF0A8;
    case 10u: goto L_088BF0B0;
    case 11u: goto L_088BF0B8;
    case 12u: goto L_088BF0C8;
    case 13u: goto L_088BF0D8;
    case 14u: goto L_088BF0E4;
    case 15u: goto L_088BF0F0;
    case 16u: goto L_088BF100;
    case 17u: goto L_088BF108;
    case 18u: goto L_088BF114;
    case 19u: goto L_088BF12C;
    case 20u: goto L_088BF140;
    case 21u: goto L_088BF148;
    case 22u: goto L_088BF18C;
    case 23u: goto L_088BF1CC;
    case 24u: goto L_088BF1F8;
    case 25u: goto L_088BF20C;
    case 26u: goto L_088BF21C;
    case 27u: goto L_088BF238;
    case 28u: goto L_088BF248;
    case 29u: goto L_088BF25C;
    case 30u: goto L_088BF278;
    case 31u: goto L_088BF284;
    case 32u: goto L_088BF28C;
    case 33u: goto L_088BF2A8;
    case 34u: goto L_088BF2B0;
    case 35u: goto L_088BF2C4;
    case 36u: goto L_088BF304;
    case 37u: goto L_088BF314;
    case 38u: goto L_088BF324;
    case 39u: goto L_088BF330;
    case 40u: goto L_088BF340;
    case 41u: goto L_088BF34C;
    case 42u: goto L_088BF35C;
    case 43u: goto L_088BF368;
    case 44u: goto L_088BF378;
    case 45u: goto L_088BF388;
    case 46u: goto L_088BF398;
    case 47u: goto L_088BF3AC;
    case 48u: goto L_088BF3E4;
    case 49u: goto L_088BF420;
    case 50u: goto L_088BF430;
    case 51u: goto L_088BF43C;
    case 52u: goto L_088BF44C;
    case 53u: goto L_088BF458;
    case 54u: goto L_088BF490;
    case 55u: goto L_088BF4BC;
    case 56u: goto L_088BF4C8;
    case 57u: goto L_088BF4D8;
    case 58u: goto L_088BF4E0;
    case 59u: goto L_088BF4FC;
    case 60u: goto L_088BF518;
    case 61u: goto L_088BF528;
    case 62u: goto L_088BF534;
    case 63u: goto L_088BF554;
    case 64u: goto L_088BF55C;
    case 65u: goto L_088BF564;
    case 66u: goto L_088BF56C;
    case 67u: goto L_088BF5D0;
    case 68u: goto L_088BF5DC;
    case 69u: goto L_088BF5E8;
    case 70u: goto L_088BF5F8;
    case 71u: goto L_088BF5FC;
    case 72u: goto L_088BF600;
    case 73u: goto L_088BF618;
    case 74u: goto L_088BF634;
    case 75u: goto L_088BF650;
    case 76u: goto L_088BF658;
    case 77u: goto L_088BF668;
    case 78u: goto L_088BF670;
    case 79u: goto L_088BF690;
    case 80u: goto L_088BF6A4;
    case 81u: goto L_088BF6AC;
    case 82u: goto L_088BF6B4;
    case 83u: goto L_088BF6BC;
    case 84u: goto L_088BF6C4;
    case 85u: goto L_088BF6CC;
    case 86u: goto L_088BF6EC;
    case 87u: goto L_088BF70C;
    case 88u: goto L_088BF71C;
    case 89u: goto L_088BF72C;
    case 90u: goto L_088BF750;
    case 91u: goto L_088BF75C;
    case 92u: goto L_088BF764;
    case 93u: goto L_088BF78C;
    case 94u: goto L_088BF7A8;
    case 95u: goto L_088BF7E8;
    case 96u: goto L_088BF7F4;
    case 97u: goto L_088BF80C;
    case 98u: goto L_088BF824;
    case 99u: goto L_088BF840;
    case 100u: goto L_088BF850;
    case 101u: goto L_088BF860;
    case 102u: goto L_088BF884;
    case 103u: goto L_088BF890;
    case 104u: goto L_088BF8B0;
    case 105u: goto L_088BF8CC;
    case 106u: goto L_088BF8E0;
    case 107u: goto L_088BF8E4;
    case 108u: goto L_088BF8F0;
    case 109u: goto L_088BF8F8;
    case 110u: goto L_088BF904;
    case 111u: goto L_088BF91C;
    case 112u: goto L_088BF924;
    case 113u: goto L_088BF934;
    case 114u: goto L_088BF958;
    case 115u: goto L_088BF96C;
    case 116u: goto L_088BF988;
    case 117u: goto L_088BF99C;
    case 118u: goto L_088BF9A0;
    case 119u: goto L_088BF9AC;
    case 120u: goto L_088BF9B4;
    case 121u: goto L_088BF9C0;
    case 122u: goto L_088BF9D8;
    case 123u: goto L_088BF9E0;
    case 124u: goto L_088BF9F0;
    case 125u: goto L_088BFA14;
    case 126u: goto L_088BFA28;
    case 127u: goto L_088BFA44;
    case 128u: goto L_088BFA58;
    case 129u: goto L_088BFA5C;
    case 130u: goto L_088BFA68;
    case 131u: goto L_088BFA70;
    case 132u: goto L_088BFA7C;
    case 133u: goto L_088BFA94;
    case 134u: goto L_088BFA9C;
    case 135u: goto L_088BFAAC;
    case 136u: goto L_088BFAD0;
    case 137u: goto L_088BFAE4;
    case 138u: goto L_088BFB58;
    case 139u: goto L_088BFB80;
    case 140u: goto L_088BFB98;
    case 141u: goto L_088BFB9C;
    case 142u: goto L_088BFBA8;
    case 143u: goto L_088BFBB4;
    case 144u: goto L_088BFBCC;
    case 145u: goto L_088BFBEC;
    case 146u: goto L_088BFC04;
    case 147u: goto L_088BFC08;
    case 148u: goto L_088BFC14;
    case 149u: goto L_088BFC20;
    case 150u: goto L_088BFC38;
    case 151u: goto L_088BFC58;
    case 152u: goto L_088BFC70;
    case 153u: goto L_088BFC74;
    case 154u: goto L_088BFC80;
    case 155u: goto L_088BFC8C;
    case 156u: goto L_088BFCB4;
    case 157u: goto L_088BFCF4;
    case 158u: goto L_088BFD10;
    case 159u: goto L_088BFEF4;
    case 160u: goto L_088BFF00;
    case 161u: goto L_088BFF08;
    case 162u: goto L_088BFF18;
    case 163u: goto L_088BFF24;
    case 164u: goto L_088BFF2C;
    case 165u: goto L_088BFF3C;
    case 166u: goto L_088BFF50;
    case 167u: goto L_088BFF70;
    case 168u: goto L_088BFF78;
    case 169u: goto L_088BFF9C;
    case 170u: goto L_088BFFA8;
    case 171u: goto L_088BFFB0;
    case 172u: goto L_088BFFC0;
    case 173u: goto L_088BFFC8;
    case 174u: goto L_088BFFD0;
    case 175u: goto L_088BFFD4;
    case 176u: goto L_088BFFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088BF000:
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] | 55050u);
    aot_gpr[18] = (2218u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[19] = (aot_gpr[30] + static_cast<std::uint32_t>(20));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[20] = (0u | 1u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-7408));
    aot_gpr[21] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[22] = (2215u << 16u);
      if (branch_taken) {
          goto L_088BF080;
      }
      goto L_088BF02C;
    }
L_088BF02C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2416)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[7] = (aot_gpr[5] ^ 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-2072), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF05C;
      }
      goto L_088BF050;
    }
L_088BF050:
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(212), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7488)));
      if (branch_taken) {
          goto L_088BF0D8;
      }
      goto L_088BF05C;
    }
L_088BF05C:
    aot_gpr[5] = (aot_gpr[5] ^ 3u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF0D8;
      }
      goto L_088BF070;
    }
L_088BF070:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(212), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7488)));
      if (branch_taken) {
          goto L_088BF0D8;
      }
      goto L_088BF080;
    }
L_088BF080:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(100)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BF0A8;
      }
      goto L_088BF090;
    }
L_088BF090:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088BF0D8;
      }
      goto L_088BF098;
    }
L_088BF098:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (2218u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-2072), aot_gpr[5]);
      if (branch_taken) {
          goto L_088BF0D8;
      }
      goto L_088BF0A8;
    }
L_088BF0A8:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BF0C8;
      }
      goto L_088BF0B0;
    }
L_088BF0B0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF0D8;
      }
      goto L_088BF0B8;
    }
L_088BF0B8:
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (2218u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-2072), aot_gpr[5]);
      if (branch_taken) {
          goto L_088BF0D8;
      }
      goto L_088BF0C8;
    }
L_088BF0C8:
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (2218u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-2072), aot_gpr[5]);
      if (branch_taken) {
          goto L_088BF0D8;
      }
      goto L_088BF0D8;
    }
L_088BF0D8:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 6 ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 7 ? 1u : 0u);
        goto L_088BF100;
    }
    goto L_088BF0E4;
L_088BF0E4:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF114;
      }
      goto L_088BF0F0;
    }
L_088BF0F0:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2218u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-2072), aot_gpr[4]);
      if (branch_taken) {
          goto L_088BF114;
      }
      goto L_088BF100;
    }
L_088BF100:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF114;
      }
      goto L_088BF108;
    }
L_088BF108:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-2072), aot_gpr[4]);
    goto L_088BF114;
L_088BF114:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(128)));
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(25348), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088BF12Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088BF12Cu) goto L_088BF12C;
    return;
L_088BF12C:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(25352), static_cast<std::uint8_t>(aot_gpr[20]));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[31] = (0x088BF140u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(30140));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x088BF140u) goto L_088BF140;
    return;
L_088BF140:
    aot_gpr[31] = (0x088BF148u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 99u, 0x08A39508u>(ctx, &aot_mem) && ctx.pc == 0x088BF148u) goto L_088BF148;
    return;
L_088BF148:
    aot_gpr[4] = (aot_gpr[2] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7488)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(25353), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7520)));
    aot_gpr[4] = (aot_gpr[4] ^ 1u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(25360), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[6] ^ 3u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088BF1CC;
      }
      goto L_088BF18C;
    }
L_088BF18C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(8003)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[30] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(520), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(188)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7520)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(200)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(524), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7520)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(528), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088BF1F8;
      }
      goto L_088BF1CC;
    }
L_088BF1CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(164)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(520), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(168)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7520)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(172)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(524), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(528), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_088BF1F8;
L_088BF1F8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088BF20Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30148));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088BF20Cu) goto L_088BF20C;
    return;
L_088BF20C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088BF21Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5896));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088BF21Cu) goto L_088BF21C;
    return;
L_088BF21C:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(25362), static_cast<std::uint8_t>(aot_gpr[20]));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088BF238u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30164));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088BF238u) goto L_088BF238;
    return;
L_088BF238:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088BF248u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5832));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088BF248u) goto L_088BF248;
    return;
L_088BF248:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(25361), static_cast<std::uint8_t>(aot_gpr[20]));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088BF25Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088BF25Cu) goto L_088BF25C;
    return;
L_088BF25C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(212)));
    aot_gpr[5] = (0u | 9u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[5]);
      if (branch_taken) {
          goto L_088BF284;
      }
      goto L_088BF278;
    }
L_088BF278:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(272));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088BF28C;
      }
      goto L_088BF284;
    }
L_088BF284:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(276));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_088BF28C;
L_088BF28C:
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(212), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-2076), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088BF2B0;
      }
      goto L_088BF2A8;
    }
L_088BF2A8:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2424)));
    goto L_088BF2B0;
L_088BF2B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[4]);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088BF3E4;
      }
      goto L_088BF2C4;
    }
L_088BF2C4:
    aot_gpr[23] = (aot_gpr[4] + static_cast<std::uint32_t>(-2064));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[22] = (aot_gpr[4] + static_cast<std::uint32_t>(-1104));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(-144));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(816));
    aot_gpr[23] = (aot_gpr[20] + aot_gpr[23]);
    aot_gpr[22] = (aot_gpr[20] + aot_gpr[22]);
    aot_gpr[21] = (aot_gpr[20] + aot_gpr[21]);
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1776));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1840));
    goto L_088BF304;
L_088BF304:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF34C;
      }
      goto L_088BF314;
    }
L_088BF314:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088BF324u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 245u, 0x088BEE78u>(ctx, &aot_mem) && ctx.pc == 0x088BF324u) goto L_088BF324;
    return;
L_088BF324:
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (0x088BF330u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088BF330u) goto L_088BF330;
    return;
L_088BF330:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088BF340u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 245u, 0x088BEE78u>(ctx, &aot_mem) && ctx.pc == 0x088BF340u) goto L_088BF340;
    return;
L_088BF340:
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(72));
    aot_gpr[31] = (0x088BF34Cu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088BF34Cu) goto L_088BF34C;
    return;
L_088BF34C:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088BF35Cu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 245u, 0x088BEE78u>(ctx, &aot_mem) && ctx.pc == 0x088BF35Cu) goto L_088BF35C;
    return;
L_088BF35C:
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x088BF368u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088BF368u) goto L_088BF368;
    return;
L_088BF368:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088BF378u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 245u, 0x088BEE78u>(ctx, &aot_mem) && ctx.pc == 0x088BF378u) goto L_088BF378;
    return;
L_088BF378:
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088BF388u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088BF388u) goto L_088BF388;
    return;
L_088BF388:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088BF398u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 245u, 0x088BEE78u>(ctx, &aot_mem) && ctx.pc == 0x088BF398u) goto L_088BF398;
    return;
L_088BF398:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088BF3ACu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 245u, 0x088BEE78u>(ctx, &aot_mem) && ctx.pc == 0x088BF3ACu) goto L_088BF3AC;
    return;
L_088BF3AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(64));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(64));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(64));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(64));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BF304;
      }
      goto L_088BF3E4;
    }
L_088BF3E4:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(28572), static_cast<std::uint8_t>(0u));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(312)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(316)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(328)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(332)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF420:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088BF430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 254u, 0x088BEF3Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF430u) goto L_088BF430;
    return;
L_088BF430:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF43C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088BF44Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 95u, 0x088C07A4u>(ctx, &aot_mem) && ctx.pc == 0x088BF44Cu) goto L_088BF44C;
    return;
L_088BF44C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF458:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088BF4FC;
      }
      goto L_088BF490;
    }
L_088BF490:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088BF4BCu);
    aot_gpr[6] = (0u | 28u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BF4BCu) goto L_088BF4BC;
    return;
L_088BF4BC:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088BF4E0;
      }
      goto L_088BF4C8;
    }
L_088BF4C8:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088BF4D8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_088BF56C;
L_088BF4D8:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_088BF4E0;
L_088BF4E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_088BF4FC;
L_088BF4FC:
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
L_088BF518:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088BF528u);
    aot_gpr[5] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 20u, 0x089191B4u>(ctx, &aot_mem) && ctx.pc == 0x088BF528u) goto L_088BF528;
    return;
L_088BF528:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF534:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28200), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF554:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF55C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF564:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF56C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24568));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(128)));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(132)));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(136)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[7] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(-3232));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(136)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088BF5D0u);
    aot_gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 70u, 0x08877444u>(ctx, &aot_mem) && ctx.pc == 0x088BF5D0u) goto L_088BF5D0;
    return;
L_088BF5D0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF600;
      }
      goto L_088BF5DC;
    }
L_088BF5DC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088BF5FC;
      }
      goto L_088BF5E8;
    }
L_088BF5E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088BF5F8u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 233u, 0x088BED78u>(ctx, &aot_mem) && ctx.pc == 0x088BF5F8u) goto L_088BF5F8;
    return;
L_088BF5F8:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088BF5FC;
L_088BF5FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    goto L_088BF600;
L_088BF600:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF618:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088BF690;
      }
      goto L_088BF634;
    }
L_088BF634:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3232));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088BF650u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 72u, 0x0887746Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF650u) goto L_088BF650;
    return;
L_088BF650:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_088BF668;
      }
      goto L_088BF658;
    }
L_088BF658:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24568));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_088BF668;
L_088BF668:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088BF690;
      }
      goto L_088BF670;
    }
L_088BF670:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088BF690u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BF690u) goto L_088BF690;
    return;
L_088BF690:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF6A4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF6AC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF6B4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF6BC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF6C4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF6CC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28208), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF6EC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28216), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF70C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_088BF750;
      }
      goto L_088BF71C;
    }
L_088BF71C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3152));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_088BF750;
      }
      goto L_088BF72C;
    }
L_088BF72C:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088BF750u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BF750u) goto L_088BF750;
    return;
L_088BF750:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF75C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF764:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088BF78Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BF78Cu) goto L_088BF78C;
    return;
L_088BF78C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] ^ aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF7A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088BF7E8u);
    aot_gpr[6] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BF7E8u) goto L_088BF7E8;
    return;
L_088BF7E8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF80C;
      }
      goto L_088BF7F4;
    }
L_088BF7F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(25280));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    goto L_088BF80C;
L_088BF80C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088BF824u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BF824u) goto L_088BF824;
    return;
L_088BF824:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
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
L_088BF840:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_088BF884;
      }
      goto L_088BF850;
    }
L_088BF850:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25280));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
      if (branch_taken) {
          goto L_088BF884;
      }
      goto L_088BF860;
    }
L_088BF860:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088BF884u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BF884u) goto L_088BF884;
    return;
L_088BF884:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF890:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28224), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF8B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088BF958;
      }
      goto L_088BF8CC;
    }
L_088BF8CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088BF8F0;
      }
      goto L_088BF8E0;
    }
L_088BF8E0:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_088BF8E4;
L_088BF8E4:
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088BF8E4;
      }
      goto L_088BF8F0;
    }
L_088BF8F0:
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
        goto L_088BF924;
    }
    goto L_088BF8F8;
L_088BF8F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
        goto L_088BF924;
    }
    goto L_088BF904;
L_088BF904:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088BF91Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BF91Cu) goto L_088BF91C;
    return;
L_088BF91C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_088BF924;
L_088BF924:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_088BF958;
      }
      goto L_088BF934;
    }
L_088BF934:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088BF958u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BF958u) goto L_088BF958;
    return;
L_088BF958:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF96C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088BFA14;
      }
      goto L_088BF988;
    }
L_088BF988:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088BF9AC;
      }
      goto L_088BF99C;
    }
L_088BF99C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_088BF9A0;
L_088BF9A0:
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088BF9A0;
      }
      goto L_088BF9AC;
    }
L_088BF9AC:
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
        goto L_088BF9E0;
    }
    goto L_088BF9B4;
L_088BF9B4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
        goto L_088BF9E0;
    }
    goto L_088BF9C0;
L_088BF9C0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088BF9D8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BF9D8u) goto L_088BF9D8;
    return;
L_088BF9D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_088BF9E0;
L_088BF9E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_088BFA14;
      }
      goto L_088BF9F0;
    }
L_088BF9F0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088BFA14u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BFA14u) goto L_088BFA14;
    return;
L_088BFA14:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFA28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088BFAD0;
      }
      goto L_088BFA44;
    }
L_088BFA44:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088BFA68;
      }
      goto L_088BFA58;
    }
L_088BFA58:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_088BFA5C;
L_088BFA5C:
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088BFA5C;
      }
      goto L_088BFA68;
    }
L_088BFA68:
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
        goto L_088BFA9C;
    }
    goto L_088BFA70;
L_088BFA70:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
        goto L_088BFA9C;
    }
    goto L_088BFA7C;
L_088BFA7C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088BFA94u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BFA94u) goto L_088BFA94;
    return;
L_088BFA94:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_088BFA9C;
L_088BFA9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_088BFAD0;
      }
      goto L_088BFAAC;
    }
L_088BFAAC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088BFAD0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BFAD0u) goto L_088BFAD0;
    return;
L_088BFAD0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFAE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[5] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[17] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(-23584));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-23584), 0u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28232), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[19] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[19] + static_cast<std::uint32_t>(-23568));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[22] = (aot_gpr[21] + static_cast<std::uint32_t>(-23552));
      if (branch_taken) {
          goto L_088BFBA8;
      }
      goto L_088BFB58;
    }
L_088BFB58:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[8]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088BFB80u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BFB80u) goto L_088BFB80;
    return;
L_088BFB80:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-23584), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFBA8;
      }
      goto L_088BFB98;
    }
L_088BFB98:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_088BFB9C;
L_088BFB9C:
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088BFB9C;
      }
      goto L_088BFBA8;
    }
L_088BFBA8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x088BFBB4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28256));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFBB4u) goto L_088BFBB4;
    return;
L_088BFBB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-23568), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[5] = (0u | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_088BFC14;
      }
      goto L_088BFBCC;
    }
L_088BFBCC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088BFBECu);
    aot_gpr[5] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BFBECu) goto L_088BFBEC;
    return;
L_088BFBEC:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-23568), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFC14;
      }
      goto L_088BFC04;
    }
L_088BFC04:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_088BFC08;
L_088BFC08:
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088BFC08;
      }
      goto L_088BFC14;
    }
L_088BFC14:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x088BFC20u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28268));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFC20u) goto L_088BFC20;
    return;
L_088BFC20:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-23552), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (0u | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(8), aot_gpr[16]);
      if (branch_taken) {
          goto L_088BFC80;
      }
      goto L_088BFC38;
    }
L_088BFC38:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088BFC58u);
    aot_gpr[5] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BFC58u) goto L_088BFC58;
    return;
L_088BFC58:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-23552), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFC80;
      }
      goto L_088BFC70;
    }
L_088BFC70:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088BFC74;
L_088BFC74:
    aot_gpr[5] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088BFC74;
      }
      goto L_088BFC80;
    }
L_088BFC80:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x088BFC8Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28280));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFC8Cu) goto L_088BFC8C;
    return;
L_088BFC8C:
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
L_088BFCB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-288));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[17]);
    aot_gpr[16] = (2214u << 16u);
    aot_gpr[17] = (2219u << 16u);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[20]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(30192));
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(-23536));
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-23448));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[31]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    goto L_088BFCF4;
L_088BFCF4:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BFCF4;
      }
      goto L_088BFD10;
    }
L_088BFD10:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30204));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-23536), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30212));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30220));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30236));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30252));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30260));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30268));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30276));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30288));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30304));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30312));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30328));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30336));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(48), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30352));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30368));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(56), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30388));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(60), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30404));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(64), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30408));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(68), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30420));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(72), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30436));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(76), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30452));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(80), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30472));
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-23448), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(30488));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(30504));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30520));
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(30536));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(30552));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(28), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(30568));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(30584));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(30600));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(30616));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(30636));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(30652));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(30672));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(30688));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(68), aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(30708));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(72), aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(30728));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(30748));
    aot_gpr[19] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(30772));
    goto L_088BFEF4;
L_088BFEF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088BFF00u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x088BFF00u) goto L_088BFF00;
    return;
L_088BFF00:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BFF18;
      }
      goto L_088BFF08;
    }
L_088BFF08:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088BFF18u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088BFF18u) goto L_088BFF18;
    return;
L_088BFF18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088BFF24u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x088BFF24u) goto L_088BFF24;
    return;
L_088BFF24:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BFF3C;
      }
      goto L_088BFF2C;
    }
L_088BFF2C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088BFF3Cu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088BFF3Cu) goto L_088BFF3C;
    return;
L_088BFF3C:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BFEF4;
      }
      goto L_088BFF50;
    }
L_088BFF50:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFF70:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFF78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-23536));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[18] = (0u | 0u);
    goto L_088BFF9C;
L_088BFF9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088BFFA8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x088BFFA8u) goto L_088BFFA8;
    return;
L_088BFFA8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFFC8;
      }
      goto L_088BFFB0;
    }
L_088BFFB0:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BFF9C;
      }
      goto L_088BFFC0;
    }
L_088BFFC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFFD0;
      }
      goto L_088BFFC8;
    }
L_088BFFC8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_088BFFD4;
      }
      goto L_088BFFD0;
    }
L_088BFFD0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088BFFD4;
L_088BFFD4:
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
L_088BFFEC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.pc = 0x088C0000u; return;
}

void recomp_unit_0187(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0187_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_187(Runtime &runtime) {
    runtime.register_generated_unit(187u, 0x088BF000u, 4096u, &recomp_unit_0187, &recomp_unit_0187_entry);
    runtime.register_function(0x088BF000u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF02Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF050u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF05Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF070u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF080u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF090u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF098u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF0A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF0B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF0B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF0C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF0D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF0E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF0F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF100u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF108u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF114u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF12Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF140u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF148u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF18Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF1CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF1F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF20Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF21Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF238u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF248u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF25Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF278u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF284u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF28Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF2A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF2B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF2C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF304u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF314u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF324u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF330u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF340u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF34Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF35Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF368u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF378u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF388u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF398u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF3ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF3E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF420u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF430u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF43Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF44Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF458u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF490u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF4BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF4C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF4D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF4E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF4FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF518u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF528u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF534u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF554u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF55Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF564u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF56Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF5D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF5DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF5E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF5F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF5FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF600u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF618u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF634u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF650u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF658u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF668u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF670u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF690u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF6A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF6ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF6B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF6BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF6C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF6CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF6ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF70Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF71Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF72Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF750u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF75Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF764u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF78Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF7A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF7E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF7F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF80Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF824u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF840u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF850u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF860u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF884u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF890u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF8B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF8CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF8E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF8E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF8F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF8F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF904u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF91Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF924u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF934u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF958u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF96Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF988u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF99Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF9A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF9ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF9B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF9C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF9D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF9E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BF9F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFA14u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFA28u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFA44u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFA58u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFA5Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFA68u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFA70u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFA7Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFA94u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFA9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFAACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFAD0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFAE4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFB58u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFB80u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFB98u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFB9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFBA8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFBB4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFBCCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFBECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFC04u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFC08u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFC14u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFC20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFC38u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFC58u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFC70u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFC74u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFC80u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFC8Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFCB4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFCF4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFD10u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFEF4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFF00u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFF08u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFF18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFF24u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFF2Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFF3Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFF50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFF70u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFF78u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFF9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFFA8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFFB0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFFC0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFFC8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFFD0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFFD4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x088BFFECu, &recomp_unit_0187, "recomp_unit_0187");
}
} // namespace psprecomp
