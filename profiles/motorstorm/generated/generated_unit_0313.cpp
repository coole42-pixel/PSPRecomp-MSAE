#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0313[1019] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0,
    3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0,
    7, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 11, 0, 12, 0, 13, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 23, 0, 0,
    0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 30, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0,
    40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0,
    0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 51, 0, 52, 0, 53, 0, 54, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59,
    0, 0, 60, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0,
    0, 64, 0, 0, 65, 0, 66, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 82, 83,
    0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 94, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0,
    98, 0, 0, 99, 0, 100, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 103, 0, 104, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 108,
    109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115,
};
void recomp_unit_0313_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0893D000u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0313[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0893D000;
    case 2u: goto L_0893D068;
    case 3u: goto L_0893D080;
    case 4u: goto L_0893D098;
    case 5u: goto L_0893D0D8;
    case 6u: goto L_0893D0F8;
    case 7u: goto L_0893D100;
    case 8u: goto L_0893D110;
    case 9u: goto L_0893D11C;
    case 10u: goto L_0893D130;
    case 11u: goto L_0893D13C;
    case 12u: goto L_0893D144;
    case 13u: goto L_0893D14C;
    case 14u: goto L_0893D150;
    case 15u: goto L_0893D15C;
    case 16u: goto L_0893D18C;
    case 17u: goto L_0893D284;
    case 18u: goto L_0893D2F0;
    case 19u: goto L_0893D324;
    case 20u: goto L_0893D340;
    case 21u: goto L_0893D35C;
    case 22u: goto L_0893D36C;
    case 23u: goto L_0893D374;
    case 24u: goto L_0893D38C;
    case 25u: goto L_0893D394;
    case 26u: goto L_0893D3B4;
    case 27u: goto L_0893D3CC;
    case 28u: goto L_0893D3D8;
    case 29u: goto L_0893D3EC;
    case 30u: goto L_0893D3F8;
    case 31u: goto L_0893D4A0;
    case 32u: goto L_0893D4E0;
    case 33u: goto L_0893D538;
    case 34u: goto L_0893D54C;
    case 35u: goto L_0893D55C;
    case 36u: goto L_0893D5B8;
    case 37u: goto L_0893D5C8;
    case 38u: goto L_0893D624;
    case 39u: goto L_0893D678;
    case 40u: goto L_0893D680;
    case 41u: goto L_0893D694;
    case 42u: goto L_0893D6DC;
    case 43u: goto L_0893D720;
    case 44u: goto L_0893D72C;
    case 45u: goto L_0893D740;
    case 46u: goto L_0893D778;
    case 47u: goto L_0893D79C;
    case 48u: goto L_0893D864;
    case 49u: goto L_0893D898;
    case 50u: goto L_0893D8AC;
    case 51u: goto L_0893D8B4;
    case 52u: goto L_0893D8BC;
    case 53u: goto L_0893D8C4;
    case 54u: goto L_0893D8CC;
    case 55u: goto L_0893D8E0;
    case 56u: goto L_0893D8E8;
    case 57u: goto L_0893D9F0;
    case 58u: goto L_0893DA00;
    case 59u: goto L_0893DA7C;
    case 60u: goto L_0893DA88;
    case 61u: goto L_0893DA8C;
    case 62u: goto L_0893DB70;
    case 63u: goto L_0893DB78;
    case 64u: goto L_0893DB84;
    case 65u: goto L_0893DB90;
    case 66u: goto L_0893DB98;
    case 67u: goto L_0893DBA8;
    case 68u: goto L_0893DBB4;
    case 69u: goto L_0893DBD4;
    case 70u: goto L_0893DBE0;
    case 71u: goto L_0893DC00;
    case 72u: goto L_0893DC0C;
    case 73u: goto L_0893DC2C;
    case 74u: goto L_0893DC3C;
    case 75u: goto L_0893DC5C;
    case 76u: goto L_0893DC6C;
    case 77u: goto L_0893DC98;
    case 78u: goto L_0893DCA8;
    case 79u: goto L_0893DCC8;
    case 80u: goto L_0893DCD8;
    case 81u: goto L_0893DCEC;
    case 82u: goto L_0893DCF8;
    case 83u: goto L_0893DCFC;
    case 84u: goto L_0893DD14;
    case 85u: goto L_0893DD24;
    case 86u: goto L_0893DD48;
    case 87u: goto L_0893DD58;
    case 88u: goto L_0893DDC8;
    case 89u: goto L_0893DDD8;
    case 90u: goto L_0893DE54;
    case 91u: goto L_0893DE64;
    case 92u: goto L_0893DEB0;
    case 93u: goto L_0893DEB8;
    case 94u: goto L_0893DEC0;
    case 95u: goto L_0893DEC4;
    case 96u: goto L_0893DEE8;
    case 97u: goto L_0893DEF8;
    case 98u: goto L_0893DF00;
    case 99u: goto L_0893DF0C;
    case 100u: goto L_0893DF14;
    case 101u: goto L_0893DF28;
    case 102u: goto L_0893DF30;
    case 103u: goto L_0893DF40;
    case 104u: goto L_0893DF48;
    case 105u: goto L_0893DF50;
    case 106u: goto L_0893DF58;
    case 107u: goto L_0893DF74;
    case 108u: goto L_0893DF7C;
    case 109u: goto L_0893DF80;
    case 110u: goto L_0893DF90;
    case 111u: goto L_0893DFC8;
    case 112u: goto L_0893DFD0;
    case 113u: goto L_0893DFD8;
    case 114u: goto L_0893DFE0;
    case 115u: goto L_0893DFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0893D000:
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[6] = (256u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (4608u << 16u);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(479));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (0u | 255u);
      if (branch_taken) {
          goto L_0893D0F8;
      }
      goto L_0893D068;
    }
L_0893D068:
    aot_gpr[9] = (57088u << 16u);
    aot_gpr[10] = (1028u << 16u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(2));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (5888u << 16u);
    goto L_0893D080;
L_0893D080:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(125)));
    if (aot_gpr[7] == aot_gpr[17]) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0893D0D8;
    }
    goto L_0893D098;
L_0893D098:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (aot_gpr[7] & 128u);
    aot_gpr[11] = (aot_gpr[11] >> 7u);
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    aot_gpr[11] = (aot_gpr[11] | aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (aot_gpr[7] & 127u);
    aot_gpr[11] = (aot_gpr[11] << 4u);
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    aot_gpr[11] = (aot_gpr[11] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0893D0D8;
L_0893D0D8:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0893D080;
      }
      goto L_0893D0F8;
    }
L_0893D0F8:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D110;
      }
      goto L_0893D100;
    }
L_0893D100:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    goto L_0893D110;
L_0893D110:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[31] = (0x0893D11Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 156u, 0x08918F68u>(ctx, &aot_mem) && ctx.pc == 0x0893D11Cu) goto L_0893D11C;
    return;
L_0893D11C:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0893D130u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 6u, 0x08940124u>(ctx, &aot_mem) && ctx.pc == 0x0893D130u) goto L_0893D130;
    return;
L_0893D130:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0893D13Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 50u, 0x0893F5DCu>(ctx, &aot_mem) && ctx.pc == 0x0893D13Cu) goto L_0893D13C;
    return;
L_0893D13C:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D150;
      }
      goto L_0893D144;
    }
L_0893D144:
    aot_gpr[31] = (0x0893D14Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x0893D14Cu) goto L_0893D14C;
    return;
L_0893D14C:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_0893D150;
L_0893D150:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0893D15Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 62u, 0x089356ACu>(ctx, &aot_mem) && ctx.pc == 0x0893D15Cu) goto L_0893D15C;
    return;
L_0893D15C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(244)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(248)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(252)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893D18C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[19] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[19] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[18] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[18] = fs * ft; }
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    aot_fpr[1] = aot_fpr[14] - aot_fpr[19];
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[3] = aot_fpr[16] + aot_fpr[2];
    aot_fpr[4] = aot_fpr[18] - aot_fpr[13];
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    aot_fpr[1] = aot_fpr[1] - aot_fpr[15];
    aot_fpr[5] = aot_fpr[16] - aot_fpr[2];
    aot_fpr[3] = aot_fpr[3] + aot_fpr[16];
    aot_fpr[4] = aot_fpr[4] + aot_fpr[18];
    aot_fpr[1] = aot_fpr[1] + aot_fpr[17];
    aot_fpr[6] = aot_fpr[19] - aot_fpr[14];
    aot_fpr[3] = aot_fpr[3] + aot_fpr[2];
    aot_fpr[16] = aot_fpr[5] + aot_fpr[16];
    aot_fpr[4] = aot_fpr[4] - aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    aot_fpr[1] = aot_fpr[12] + aot_fpr[0];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[3]));
    aot_fpr[7] = aot_fpr[18] + aot_fpr[13];
    aot_fpr[16] = aot_fpr[16] - aot_fpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[4]));
    aot_fpr[3] = aot_fpr[6] - aot_fpr[15];
    aot_fpr[4] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[4]));
    aot_fpr[1] = aot_fpr[1] + aot_fpr[0];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[18] = aot_fpr[7] + aot_fpr[18];
    aot_fpr[16] = aot_fpr[0] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[4]));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) ^ 0x80000000u);
    aot_fpr[3] = aot_fpr[3] + aot_fpr[17];
    aot_fpr[14] = aot_fpr[14] - aot_fpr[19];
    aot_fpr[1] = aot_fpr[1] + aot_fpr[12];
    aot_fpr[16] = aot_fpr[16] + aot_fpr[0];
    aot_fpr[13] = aot_fpr[18] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[3]));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    aot_fpr[12] = aot_fpr[16] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = aot_fpr[14] + aot_fpr[17];
    aot_gpr[4] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[4]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[4]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893D284:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[31]);
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<12u, 14u, 15u, 4u>();
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (ctx.vfpu_scalar_bits_ct<12u>());
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_fpr[16] = __builtin_bit_cast(float, 0u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[6] = (16256u << 16u);
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[16]));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[6]);
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0893D324;
      }
      goto L_0893D2F0;
    }
L_0893D2F0:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) ^ 0x80000000u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]) ^ 0x80000000u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]) ^ 0x80000000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    aot_fpr[12] = aot_fpr[24] - aot_fpr[22];
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_0893D340;
      }
      goto L_0893D324;
    }
L_0893D324:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = aot_fpr[24] - aot_fpr[22];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
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
    goto L_0893D340;
L_0893D340:
    aot_gpr[4] = (13702u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 14269u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893D3EC;
      }
      goto L_0893D35C;
    }
L_0893D35C:
    ctx.set_fpu_condition((aot_fpr[22] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (49024u << 16u);
      if (branch_taken) {
          goto L_0893D374;
      }
      goto L_0893D36C;
    }
L_0893D36C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_0893D38C;
      }
      goto L_0893D374;
    }
L_0893D374:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_0893D38C;
    }
    goto L_0893D38C;
L_0893D38C:
    aot_gpr[31] = (0x0893D394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 85u, 0x08A2F634u>(ctx, &aot_mem) && ctx.pc == 0x0893D394u) goto L_0893D394;
    return;
L_0893D394:
    aot_gpr[18] = (2215u << 16u);
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x0893D3B4u);
    aot_fpr[12] = aot_fpr[26] - aot_fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x0893D3B4u) goto L_0893D3B4;
    return;
L_0893D3B4:
    aot_fpr[24] = aot_fpr[24] / aot_fpr[0];
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-25184)));
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[26] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[26] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x0893D3CCu);
    aot_fpr[12] = aot_fpr[26] - aot_fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x0893D3CCu) goto L_0893D3CC;
    return;
L_0893D3CC:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    aot_gpr[31] = (0x0893D3D8u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x0893D3D8u) goto L_0893D3D8;
    return;
L_0893D3D8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[0] - aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_0893D3F8;
      }
      goto L_0893D3EC;
    }
L_0893D3EC:
    aot_fpr[12] = aot_fpr[24] - aot_fpr[20];
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    goto L_0893D3F8;
L_0893D3F8:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<14u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<12u>());
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<46u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<12u>());
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<78u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<12u>());
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<12u>());
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893D4A0:
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_fpr[12] = aot_fpr[16] + aot_fpr[15];
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[7] = (16000u << 16u);
    aot_gpr[6] = (14979u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 4719u);
    aot_fpr[17] = aot_fpr[12] + aot_fpr[14];
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[17] = aot_fpr[17] + aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[17] <= aot_fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
      if (branch_taken) {
          goto L_0893D538;
      }
      goto L_0893D4E0;
    }
L_0893D4E0:
    aot_fpr[13] = std::sqrt(aot_fpr[17]);
    aot_gpr[6] = (16128u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    aot_fpr[15] = aot_fpr[15] - aot_fpr[16];
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = aot_fpr[15] - aot_fpr[14];
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[16];
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0893D678;
      }
      goto L_0893D538;
    }
L_0893D538:
    aot_gpr[6] = (16384u << 16u);
    ctx.set_fpu_condition((aot_fpr[16] <= aot_fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[6]);
      if (branch_taken) {
          goto L_0893D5B8;
      }
      goto L_0893D54C;
    }
L_0893D54C:
    ctx.set_fpu_condition((aot_fpr[16] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893D5B8;
      }
      goto L_0893D55C;
    }
L_0893D55C:
    aot_fpr[13] = aot_fpr[16] + aot_fpr[13];
    aot_fpr[13] = aot_fpr[13] - aot_fpr[15];
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    aot_fpr[13] = std::sqrt(aot_fpr[13]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[16];
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[15];
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0893D678;
      }
      goto L_0893D5B8;
    }
L_0893D5B8:
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = aot_fpr[14] + aot_fpr[13];
        goto L_0893D624;
    }
    goto L_0893D5C8;
L_0893D5C8:
    aot_fpr[13] = aot_fpr[15] + aot_fpr[13];
    aot_fpr[13] = aot_fpr[13] - aot_fpr[16];
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    aot_fpr[13] = std::sqrt(aot_fpr[13]);
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_fpr[15] = aot_fpr[18] + aot_fpr[19];
    aot_fpr[14] = aot_fpr[15] / aot_fpr[13];
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[15];
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0893D678;
      }
      goto L_0893D624;
    }
L_0893D624:
    aot_fpr[13] = aot_fpr[13] - aot_fpr[16];
    aot_fpr[13] = aot_fpr[13] - aot_fpr[15];
    aot_fpr[13] = std::sqrt(aot_fpr[13]);
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[14] = aot_fpr[18] + aot_fpr[19];
    aot_fpr[14] = aot_fpr[14] / aot_fpr[13];
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    aot_fpr[14] = aot_fpr[14] / aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[14];
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0893D678;
L_0893D678:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893D680:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0893D694u);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    goto L_0893D18C;
L_0893D694:
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<14u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<12u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<46u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<12u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<78u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<12u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893D6DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D778;
      }
      goto L_0893D720;
    }
L_0893D720:
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<12u>());
    goto L_0893D72C;
L_0893D72C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0893D740u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_0893D284;
L_0893D740:
    ctx.set_vfpu_scalar_bits_ct<12u>(PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<14u, 14u, 12u, 3u>();
    ctx.execute_vfpu_vocp(12u, 12u, 1u);
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<15u, 15u, 12u, 3u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<14u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<15u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<14u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0893D72C;
      }
      goto L_0893D778;
    }
L_0893D778:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893D79C:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(-28814), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 6u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(2116), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2118), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(-3660), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(-3658), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(-3656), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(-3664), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-3662), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-3661), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (0u | 7u);
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(-3654), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(23200), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(-12880), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-28812), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28808), 0u);
    aot_gpr[4] = (16672u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-20788), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (17096u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-20784), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (32897u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32640));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-20780), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893D864:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[16] = (aot_gpr[4] & 255u);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[20] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    if (aot_gpr[16] == 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28804)));
        goto L_0893D898;
    }
    goto L_0893D898;
L_0893D898:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-29052)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D8B4;
      }
      goto L_0893D8AC;
    }
L_0893D8AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0893D8C4;
      }
      goto L_0893D8B4;
    }
L_0893D8B4:
    aot_gpr[31] = (0x0893D8BCu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x0893D8BCu) goto L_0893D8BC;
    return;
L_0893D8BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    goto L_0893D8C4;
L_0893D8C4:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[5] = (aot_gpr[20] + static_cast<std::uint32_t>(-29052));
      if (branch_taken) {
          goto L_0893DB70;
      }
      goto L_0893D8CC;
    }
L_0893D8CC:
    aot_gpr[7] = (256u << 16u);
    aot_gpr[8] = (aot_gpr[19] & 1u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[6] = (8960u << 16u);
      if (branch_taken) {
          goto L_0893D8E8;
      }
      goto L_0893D8E0;
    }
L_0893D8E0:
    aot_gpr[6] = (8960u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0893D8E8;
L_0893D8E8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[19] & 4u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (7936u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[19] & 8u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (9216u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[19] & 2u);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (59136u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(-3654)));
    aot_gpr[9] = (56832u << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(2118)));
    aot_gpr[9] = (56319u << 16u);
    aot_gpr[6] = (aot_gpr[6] << 8u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[9]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (2218u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(2116)));
    aot_gpr[10] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (2219u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(23200)));
    aot_gpr[9] = (20480u << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[6] = (2219u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-20784)));
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_gpr[6] = (2219u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-20788)));
    aot_fpr[14] = aot_fpr[12] - aot_fpr[14];
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[14]) || std::isnan(aot_fpr[13])) && aot_fpr[14] == aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_0893DA00;
    }
    goto L_0893D9F0;
L_0893D9F0:
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[13] = aot_fpr[13] / aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0893DA00;
L_0893DA00:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] >> 8u);
    aot_gpr[9] = (52480u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] >> 8u);
    aot_gpr[9] = (52736u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (2219u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-20780)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    aot_gpr[9] = (52992u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(-28812)));
    aot_gpr[6] = (2219u << 16u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(-12880)));
      if (branch_taken) {
          goto L_0893DA88;
      }
      goto L_0893DA7C;
    }
L_0893DA7C:
    aot_gpr[6] = (aot_gpr[6] ^ 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[6] & 65535u);
      if (branch_taken) {
          goto L_0893DA8C;
      }
      goto L_0893DA88;
    }
L_0893DA88:
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    goto L_0893DA8C;
L_0893DA8C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (39680u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(-3662)));
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(-3664)));
    aot_gpr[9] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[6] << 8u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(-3661)));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[9] << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (56320u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(-3658)));
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(-3660)));
    aot_gpr[9] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[6] << 8u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(-3656)));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[9] << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (56576u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-28808)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[8] & aot_gpr[7]);
    aot_gpr[8] = (59392u << 16u);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-28808)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] >> 24u);
    aot_gpr[8] = (59648u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_0893DEB0;
      }
      goto L_0893DB70;
    }
L_0893DB70:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DEB0;
      }
      goto L_0893DB78;
    }
L_0893DB78:
    aot_gpr[6] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DBA8;
      }
      goto L_0893DB84;
    }
L_0893DB84:
    aot_gpr[7] = (aot_gpr[19] & 1u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (8960u << 16u);
      if (branch_taken) {
          goto L_0893DB98;
      }
      goto L_0893DB90;
    }
L_0893DB90:
    aot_gpr[6] = (8960u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0893DB98;
L_0893DB98:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_0893DBA8;
L_0893DBA8:
    aot_gpr[6] = (aot_gpr[17] & 4u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DBD4;
      }
      goto L_0893DBB4;
    }
L_0893DBB4:
    aot_gpr[6] = (aot_gpr[19] & 4u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (7936u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_0893DBD4;
L_0893DBD4:
    aot_gpr[6] = (aot_gpr[17] & 8u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DC00;
      }
      goto L_0893DBE0;
    }
L_0893DBE0:
    aot_gpr[6] = (aot_gpr[19] & 8u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (9216u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_0893DC00;
L_0893DC00:
    aot_gpr[6] = (aot_gpr[17] & 2u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DC2C;
      }
      goto L_0893DC0C;
    }
L_0893DC0C:
    aot_gpr[6] = (aot_gpr[19] & 2u);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (59136u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_0893DC2C;
L_0893DC2C:
    aot_gpr[6] = (2u << 16u);
    aot_gpr[6] = (aot_gpr[17] & aot_gpr[6]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DC5C;
      }
      goto L_0893DC3C;
    }
L_0893DC3C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(-3654)));
    aot_gpr[8] = (56832u << 16u);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_0893DC5C;
L_0893DC5C:
    aot_gpr[6] = (1u << 16u);
    aot_gpr[6] = (aot_gpr[17] & aot_gpr[6]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (2218u << 16u);
      if (branch_taken) {
          goto L_0893DC98;
      }
      goto L_0893DC6C;
    }
L_0893DC6C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(2118)));
    aot_gpr[8] = (56319u << 16u);
    aot_gpr[6] = (aot_gpr[6] << 8u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(2116)));
    aot_gpr[9] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_0893DC98;
L_0893DC98:
    aot_gpr[6] = (8u << 16u);
    aot_gpr[6] = (aot_gpr[17] & aot_gpr[6]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DCC8;
      }
      goto L_0893DCA8;
    }
L_0893DCA8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (2219u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(23200)));
    aot_gpr[8] = (20480u << 16u);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_0893DCC8;
L_0893DCC8:
    aot_gpr[6] = (16u << 16u);
    aot_gpr[6] = (aot_gpr[17] & aot_gpr[6]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DD14;
      }
      goto L_0893DCD8;
    }
L_0893DCD8:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(-28812)));
    aot_gpr[6] = (2219u << 16u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(-12880)));
      if (branch_taken) {
          goto L_0893DCF8;
      }
      goto L_0893DCEC;
    }
L_0893DCEC:
    aot_gpr[6] = (aot_gpr[6] ^ 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[6] & 65535u);
      if (branch_taken) {
          goto L_0893DCFC;
      }
      goto L_0893DCF8;
    }
L_0893DCF8:
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    goto L_0893DCFC;
L_0893DCFC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (39680u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_0893DD14;
L_0893DD14:
    aot_gpr[6] = (128u << 16u);
    aot_gpr[6] = (aot_gpr[17] & aot_gpr[6]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (2219u << 16u);
      if (branch_taken) {
          goto L_0893DDC8;
      }
      goto L_0893DD24;
    }
L_0893DD24:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-20784)));
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    aot_gpr[6] = (2219u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-20788)));
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[14])) && aot_fpr[12] == aot_fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_0893DD58;
    }
    goto L_0893DD48;
L_0893DD48:
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[14] = aot_fpr[14] / aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0893DD58;
L_0893DD58:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] >> 8u);
    aot_gpr[8] = (52480u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] >> 8u);
    aot_gpr[8] = (52736u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (2219u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-20780)));
    aot_gpr[8] = (256u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[8]);
    aot_gpr[8] = (52992u << 16u);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_0893DDC8;
L_0893DDC8:
    aot_gpr[6] = (64u << 16u);
    aot_gpr[6] = (aot_gpr[17] & aot_gpr[6]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (2218u << 16u);
      if (branch_taken) {
          goto L_0893DE54;
      }
      goto L_0893DDD8;
    }
L_0893DDD8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(-3662)));
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(-3664)));
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[6] << 8u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(-3661)));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[8] << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (56320u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(-3658)));
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(-3660)));
    aot_gpr[9] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[6] << 8u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(-3656)));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[9] << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[7] = (56576u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_0893DE54;
L_0893DE54:
    aot_gpr[6] = (32u << 16u);
    aot_gpr[6] = (aot_gpr[17] & aot_gpr[6]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_0893DEB0;
      }
      goto L_0893DE64;
    }
L_0893DE64:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-28808)));
    aot_gpr[8] = (256u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (59392u << 16u);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-28808)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] >> 24u);
    aot_gpr[8] = (59648u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_0893DEB0;
L_0893DEB0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DEC4;
      }
      goto L_0893DEB8;
    }
L_0893DEB8:
    aot_gpr[31] = (0x0893DEC0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x0893DEC0u) goto L_0893DEC0;
    return;
L_0893DEC0:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_0893DEC4;
L_0893DEC4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-28804), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893DEE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0893DEF8u);
    // nop
    goto L_0893D79C;
L_0893DEF8:
    aot_gpr[31] = (0x0893DF00u);
    aot_gpr[4] = (0u | 1u);
    goto L_0893D864;
L_0893DF00:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893DF0C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893DF14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0893DF28u);
    // nop
    goto L_0893D79C;
L_0893DF28:
    aot_gpr[31] = (0x0893DF30u);
    aot_gpr[4] = (0u | 1u);
    goto L_0893D864;
L_0893DF30:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29052)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DF48;
      }
      goto L_0893DF40;
    }
L_0893DF40:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0893DF58;
      }
      goto L_0893DF48;
    }
L_0893DF48:
    aot_gpr[31] = (0x0893DF50u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x0893DF50u) goto L_0893DF50;
    return;
L_0893DF50:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    goto L_0893DF58;
L_0893DF58:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (7168u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_0893DF80;
      }
      goto L_0893DF74;
    }
L_0893DF74:
    aot_gpr[31] = (0x0893DF7Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x0893DF7Cu) goto L_0893DF7C;
    return;
L_0893DF7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_0893DF80;
L_0893DF80:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893DF90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] & 255u);
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_0893DFD0;
      }
      goto L_0893DFC8;
    }
L_0893DFC8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0893DFE0;
      }
      goto L_0893DFD0;
    }
L_0893DFD0:
    aot_gpr[31] = (0x0893DFD8u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x0893DFD8u) goto L_0893DFD8;
    return;
L_0893DFD8:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[5] = (0u | 1u);
    goto L_0893DFE0;
L_0893DFE0:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(-29052));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0314_entry, 314u, 2u, 0x0893E05Cu>(ctx, &aot_mem); return;
      }
      goto L_0893DFE8;
    }
L_0893DFE8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (9984u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    ctx.pc = 0x0893E000u; return;
}

void recomp_unit_0313(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0313_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_313(Runtime &runtime) {
    runtime.register_generated_unit(313u, 0x0893D000u, 4096u, &recomp_unit_0313, &recomp_unit_0313_entry);
    runtime.register_function(0x0893D000u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D068u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D080u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D098u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D0D8u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D0F8u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D100u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D110u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D11Cu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D130u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D13Cu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D144u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D14Cu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D150u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D15Cu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D18Cu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D284u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D2F0u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D324u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D340u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D35Cu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D36Cu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D374u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D38Cu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D394u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D3B4u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D3CCu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D3D8u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D3ECu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D3F8u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D4A0u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D4E0u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D538u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D54Cu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D55Cu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D5B8u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D5C8u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D624u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D678u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D680u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D694u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D6DCu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D720u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D72Cu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D740u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D778u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D79Cu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D864u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D898u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D8ACu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D8B4u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D8BCu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D8C4u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D8CCu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D8E0u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D8E8u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893D9F0u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DA00u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DA7Cu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DA88u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DA8Cu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DB70u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DB78u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DB84u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DB90u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DB98u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DBA8u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DBB4u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DBD4u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DBE0u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DC00u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DC0Cu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DC2Cu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DC3Cu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DC5Cu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DC6Cu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DC98u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DCA8u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DCC8u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DCD8u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DCECu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DCF8u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DCFCu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DD14u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DD24u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DD48u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DD58u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DDC8u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DDD8u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DE54u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DE64u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DEB0u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DEB8u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DEC0u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DEC4u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DEE8u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DEF8u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DF00u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DF0Cu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DF14u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DF28u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DF30u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DF40u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DF48u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DF50u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DF58u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DF74u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DF7Cu, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DF80u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DF90u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DFC8u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DFD0u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DFD8u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DFE0u, &recomp_unit_0313, "recomp_unit_0313");
    runtime.register_function(0x0893DFE8u, &recomp_unit_0313, "recomp_unit_0313");
}
} // namespace psprecomp
