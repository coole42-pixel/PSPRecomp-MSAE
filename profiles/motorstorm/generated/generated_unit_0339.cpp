#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0339[1017] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0,
    0, 0, 5, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0,
    0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0,
    0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24,
    0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 32, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 45, 46,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 52, 0, 53, 0, 0, 0, 0, 54, 55, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0,
    0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 69, 70, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 73, 0, 0, 0, 74, 0, 75, 0, 0, 76, 0, 77, 0, 0, 0, 0, 78, 79, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 85, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 88, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0,
    0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 99, 0, 0, 0, 100, 0,
    101, 0, 0, 0, 0, 102, 103, 0, 104, 0, 105, 0, 0, 106, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0,
    0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119,
    120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 128, 129, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 132, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0,
    0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148,
};
void recomp_unit_0339_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08957000u;
        entry_id = (entry_delta < 4068u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0339[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08957000;
    case 2u: goto L_08957014;
    case 3u: goto L_08957024;
    case 4u: goto L_08957078;
    case 5u: goto L_08957088;
    case 6u: goto L_08957090;
    case 7u: goto L_089570A0;
    case 8u: goto L_089570F4;
    case 9u: goto L_08957108;
    case 10u: goto L_08957118;
    case 11u: goto L_08957178;
    case 12u: goto L_0895718C;
    case 13u: goto L_089571E8;
    case 14u: goto L_089571F8;
    case 15u: goto L_08957230;
    case 16u: goto L_08957250;
    case 17u: goto L_0895725C;
    case 18u: goto L_089572C0;
    case 19u: goto L_089572D4;
    case 20u: goto L_089572E8;
    case 21u: goto L_08957340;
    case 22u: goto L_08957348;
    case 23u: goto L_089573E0;
    case 24u: goto L_089573FC;
    case 25u: goto L_08957410;
    case 26u: goto L_08957428;
    case 27u: goto L_08957440;
    case 28u: goto L_08957458;
    case 29u: goto L_08957470;
    case 30u: goto L_08957488;
    case 31u: goto L_089574A0;
    case 32u: goto L_089574A8;
    case 33u: goto L_089574AC;
    case 34u: goto L_089574B8;
    case 35u: goto L_0895751C;
    case 36u: goto L_08957530;
    case 37u: goto L_0895754C;
    case 38u: goto L_08957554;
    case 39u: goto L_08957614;
    case 40u: goto L_0895761C;
    case 41u: goto L_08957644;
    case 42u: goto L_0895764C;
    case 43u: goto L_0895765C;
    case 44u: goto L_08957664;
    case 45u: goto L_08957678;
    case 46u: goto L_0895767C;
    case 47u: goto L_089576A4;
    case 48u: goto L_089576AC;
    case 49u: goto L_089576B4;
    case 50u: goto L_089576C4;
    case 51u: goto L_089576CC;
    case 52u: goto L_089576D8;
    case 53u: goto L_089576E0;
    case 54u: goto L_089576F4;
    case 55u: goto L_089576F8;
    case 56u: goto L_08957720;
    case 57u: goto L_08957740;
    case 58u: goto L_0895775C;
    case 59u: goto L_08957778;
    case 60u: goto L_08957788;
    case 61u: goto L_089577A4;
    case 62u: goto L_089577AC;
    case 63u: goto L_08957880;
    case 64u: goto L_08957888;
    case 65u: goto L_089578B8;
    case 66u: goto L_089578C0;
    case 67u: goto L_089578D0;
    case 68u: goto L_089578D8;
    case 69u: goto L_089578EC;
    case 70u: goto L_089578F0;
    case 71u: goto L_08957920;
    case 72u: goto L_08957928;
    case 73u: goto L_08957930;
    case 74u: goto L_08957940;
    case 75u: goto L_08957948;
    case 76u: goto L_08957954;
    case 77u: goto L_0895795C;
    case 78u: goto L_08957970;
    case 79u: goto L_08957974;
    case 80u: goto L_089579A4;
    case 81u: goto L_089579CC;
    case 82u: goto L_089579E0;
    case 83u: goto L_08957A14;
    case 84u: goto L_08957A74;
    case 85u: goto L_08957A78;
    case 86u: goto L_08957A90;
    case 87u: goto L_08957AA0;
    case 88u: goto L_08957AA8;
    case 89u: goto L_08957AB8;
    case 90u: goto L_08957AC0;
    case 91u: goto L_08957AD4;
    case 92u: goto L_08957AE4;
    case 93u: goto L_08957AEC;
    case 94u: goto L_08957B04;
    case 95u: goto L_08957B18;
    case 96u: goto L_08957B2C;
    case 97u: goto L_08957B50;
    case 98u: goto L_08957B60;
    case 99u: goto L_08957B68;
    case 100u: goto L_08957B78;
    case 101u: goto L_08957B80;
    case 102u: goto L_08957B94;
    case 103u: goto L_08957B98;
    case 104u: goto L_08957BA0;
    case 105u: goto L_08957BA8;
    case 106u: goto L_08957BB4;
    case 107u: goto L_08957BBC;
    case 108u: goto L_08957BC4;
    case 109u: goto L_08957BF4;
    case 110u: goto L_08957C30;
    case 111u: goto L_08957C40;
    case 112u: goto L_08957C60;
    case 113u: goto L_08957C70;
    case 114u: goto L_08957C84;
    case 115u: goto L_08957CA4;
    case 116u: goto L_08957CB4;
    case 117u: goto L_08957CBC;
    case 118u: goto L_08957CCC;
    case 119u: goto L_08957CFC;
    case 120u: goto L_08957D00;
    case 121u: goto L_08957D08;
    case 122u: goto L_08957D38;
    case 123u: goto L_08957D7C;
    case 124u: goto L_08957D90;
    case 125u: goto L_08957DB0;
    case 126u: goto L_08957DDC;
    case 127u: goto L_08957DE8;
    case 128u: goto L_08957DF0;
    case 129u: goto L_08957DF4;
    case 130u: goto L_08957E38;
    case 131u: goto L_08957E44;
    case 132u: goto L_08957E4C;
    case 133u: goto L_08957E50;
    case 134u: goto L_08957E68;
    case 135u: goto L_08957E9C;
    case 136u: goto L_08957EC8;
    case 137u: goto L_08957ED4;
    case 138u: goto L_08957EE4;
    case 139u: goto L_08957EF0;
    case 140u: goto L_08957F14;
    case 141u: goto L_08957F20;
    case 142u: goto L_08957F3C;
    case 143u: goto L_08957F68;
    case 144u: goto L_08957F70;
    case 145u: goto L_08957F90;
    case 146u: goto L_08957FB0;
    case 147u: goto L_08957FC8;
    case 148u: goto L_08957FE0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08957000:
    aot_gpr[7] = (aot_gpr[9] << 4u);
    aot_gpr[6] = (aot_gpr[10] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[10] + aot_gpr[7]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08957078;
      }
      goto L_08957014;
    }
L_08957014:
    aot_gpr[2] = (aot_gpr[5] << 4u);
    aot_gpr[12] = (aot_gpr[10] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[10] + aot_gpr[2]);
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(32));
    goto L_08957024;
L_08957024:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[13] = (aot_gpr[4] + aot_gpr[13]);
    aot_gpr[13] = (aot_gpr[13] << 2u);
    aot_gpr[15] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
    aot_gpr[13] = (aot_gpr[14] + aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(32), aot_gpr[15]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[14] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(4), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(8), aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(12), aot_gpr[14]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-16));
    aot_gpr[13] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[13] == 0u;
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_08957024;
      }
      goto L_08957078;
    }
L_08957078:
    aot_gpr[13] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[12] = (aot_gpr[13] << 4u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[3] = (aot_gpr[10] + aot_gpr[12]);
      if (branch_taken) {
          goto L_0895718C;
      }
      goto L_08957088;
    }
L_08957088:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[13] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089570F4;
      }
      goto L_08957090;
    }
L_08957090:
    aot_gpr[2] = (aot_gpr[5] << 4u);
    aot_gpr[12] = (aot_gpr[10] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[10] + aot_gpr[2]);
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(32));
    goto L_089570A0;
L_089570A0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(32), aot_gpr[13]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(8), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-16));
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[13] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089570A0;
      }
      goto L_089570F4;
    }
L_089570F4:
    aot_gpr[12] = (aot_gpr[13] << 4u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[3] = (aot_gpr[10] + aot_gpr[12]);
      if (branch_taken) {
          goto L_08957178;
      }
      goto L_08957108;
    }
L_08957108:
    aot_gpr[2] = (aot_gpr[5] << 4u);
    aot_gpr[7] = (aot_gpr[10] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[10] + aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    goto L_08957118;
L_08957118:
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[14] = (aot_gpr[4] + aot_gpr[14]);
    aot_gpr[14] = (aot_gpr[14] << 2u);
    aot_gpr[14] = (aot_gpr[15] + aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-16));
    aot_gpr[14] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[14] == 0u;
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08957118;
      }
      goto L_08957178;
    }
L_08957178:
    aot_gpr[9] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (aot_gpr[9] << 4u);
    aot_gpr[6] = (aot_gpr[10] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[10] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    goto L_0895718C;
L_0895718C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[14]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[11] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[14]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[13]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[11] = (0u | 1u);
      if (branch_taken) {
          goto L_089571F8;
      }
      goto L_089571E8;
    }
L_089571E8:
    aot_gpr[5] = (aot_gpr[10] + aot_gpr[12]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    goto L_089571F8;
L_089571F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[11]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[8] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), aot_gpr[9]);
    aot_gpr[4] = (aot_gpr[8] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[13]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957230:
    aot_gpr[8] = (aot_gpr[7] | 0u);
    aot_gpr[9] = (aot_gpr[5] << 2u);
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[9]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089572C0;
      }
      goto L_08957250;
    }
L_08957250:
    aot_gpr[10] = (aot_gpr[7] << 4u);
    aot_gpr[9] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[10] = (aot_gpr[6] + aot_gpr[10]);
    goto L_0895725C;
L_0895725C:
    aot_gpr[11] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[11] << 4u);
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(8), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[9] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[12] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(32), aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[11] | 0u);
    aot_gpr[11] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0895725C;
      }
      goto L_089572C0;
    }
L_089572C0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-2));
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[9] = (aot_gpr[5] + aot_gpr[5]);
      if (branch_taken) {
          goto L_08957340;
      }
      goto L_089572D4;
    }
L_089572D4:
    aot_gpr[10] = (aot_gpr[7] << 4u);
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(2));
    aot_gpr[10] = (aot_gpr[6] + aot_gpr[10]);
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    goto L_089572E8;
L_089572E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[9] + aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[11] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089572E8;
      }
      goto L_08957340;
    }
L_08957340:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957348:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] << 4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (aot_gpr[3] + aot_gpr[8]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[10] << 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[9] << 4u);
    aot_gpr[9] = (aot_gpr[10] + aot_gpr[9]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[11] = (aot_gpr[11] << 4u);
    aot_gpr[8] = (aot_gpr[10] + aot_gpr[8]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (aot_gpr[2] << 4u);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[11]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089573E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    aot_gpr[12] = (aot_gpr[6] | 0u);
    aot_gpr[13] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[31]);
    aot_gpr[31] = (0x089573FCu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    goto L_08957348;
L_089573FC:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[4] = (aot_gpr[13] | 0u);
    aot_gpr[31] = (0x08957410u);
    aot_gpr[5] = (aot_gpr[12] | 0u);
    goto L_08957348;
L_08957410:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089574A0;
      }
      goto L_08957428;
    }
L_08957428:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089574A0;
      }
      goto L_08957440;
    }
L_08957440:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089574A0;
      }
      goto L_08957458;
    }
L_08957458:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089574A0;
      }
      goto L_08957470;
    }
L_08957470:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089574A0;
      }
      goto L_08957488;
    }
L_08957488:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089574A8;
      }
      goto L_089574A0;
    }
L_089574A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089574AC;
      }
      goto L_089574A8;
    }
L_089574A8:
    aot_gpr[2] = (0u | 1u);
    goto L_089574AC;
L_089574AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089574B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] << 2u);
    aot_gpr[19] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[5] << 4u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[22]);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[22] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[23]);
    aot_gpr[7] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[5]);
    aot_gpr[23] = (aot_gpr[22] | 0u);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[7]);
      if (branch_taken) {
          goto L_0895775C;
      }
      goto L_0895751C;
    }
L_0895751C:
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[7]);
    aot_gpr[30] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[22] << 4u);
    aot_gpr[20] = (aot_gpr[30] << 4u);
    goto L_08957530;
L_08957530:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[4] + aot_gpr[18]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
      if (branch_taken) {
          goto L_08957554;
      }
      goto L_0895754C;
    }
L_0895754C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895775C;
      }
      goto L_08957554;
    }
L_08957554:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[17] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(32), aot_gpr[23]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[20]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), aot_gpr[30]);
      if (branch_taken) {
          goto L_089576A4;
      }
      goto L_08957614;
    }
L_08957614:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957644;
      }
      goto L_0895761C;
    }
L_0895761C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[6]);
      if (branch_taken) {
          goto L_08957740;
      }
      goto L_08957644;
    }
L_08957644:
    if (aot_gpr[17] == aot_gpr[16]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_0895767C;
    }
    goto L_0895764C;
L_0895764C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x0895765Cu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0342_entry, 342u, 111u, 0x0895AFD8u>(ctx, &aot_mem) && ctx.pc == 0x0895765Cu) goto L_0895765C;
    return;
L_0895765C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_0895767C;
    }
    goto L_08957664;
L_08957664:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    aot_gpr[31] = (0x08957678u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0344_entry, 344u, 145u, 0x0895CD24u>(ctx, &aot_mem) && ctx.pc == 0x08957678u) goto L_08957678;
    return;
L_08957678:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_0895767C;
L_0895767C:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
      if (branch_taken) {
          goto L_08957740;
      }
      goto L_089576A4;
    }
L_089576A4:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08957720;
    }
    goto L_089576AC;
L_089576AC:
    if (aot_gpr[17] == aot_gpr[16]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_089576F8;
    }
    goto L_089576B4;
L_089576B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089576C4u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0342_entry, 342u, 111u, 0x0895AFD8u>(ctx, &aot_mem) && ctx.pc == 0x089576C4u) goto L_089576C4;
    return;
L_089576C4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_089576F4;
      }
      goto L_089576CC;
    }
L_089576CC:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089576D8u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_089573E0;
L_089576D8:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_089576F8;
    }
    goto L_089576E0;
L_089576E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    aot_gpr[31] = (0x089576F4u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0344_entry, 344u, 121u, 0x0895CB68u>(ctx, &aot_mem) && ctx.pc == 0x089576F4u) goto L_089576F4;
    return;
L_089576F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_089576F8;
L_089576F8:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
      if (branch_taken) {
          goto L_08957740;
      }
      goto L_08957720;
    }
L_08957720:
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    goto L_08957740;
L_08957740:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[22] = (aot_gpr[23] + static_cast<std::uint32_t>(-1));
    aot_gpr[23] = (aot_gpr[22] | 0u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-16));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_08957530;
      }
      goto L_0895775C;
    }
L_0895775C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16)));
    aot_gpr[22] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[30] = (aot_gpr[22] | 0u);
      if (branch_taken) {
          goto L_089579E0;
      }
      goto L_08957778;
    }
L_08957778:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[23] = (aot_gpr[22] << 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    goto L_08957788;
L_08957788:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[23]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[5] = (aot_gpr[22] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089577AC;
      }
      goto L_089577A4;
    }
L_089577A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089579E0;
      }
      goto L_089577AC;
    }
L_089577AC:
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[20] = (aot_gpr[6] << 4u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[20]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[9]);
    aot_gpr[18] = (aot_gpr[5] << 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[17] + aot_gpr[18]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[9]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[8] = (aot_gpr[8] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[17] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[20]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    { const bool branch_taken = aot_gpr[9] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), aot_gpr[6]);
      if (branch_taken) {
          goto L_08957920;
      }
      goto L_08957880;
    }
L_08957880:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089578B8;
      }
      goto L_08957888;
    }
L_08957888:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089579CC;
      }
      goto L_089578B8;
    }
L_089578B8:
    if (aot_gpr[17] == aot_gpr[16]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_089578F0;
    }
    goto L_089578C0;
L_089578C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089578D0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0342_entry, 342u, 111u, 0x0895AFD8u>(ctx, &aot_mem) && ctx.pc == 0x089578D0u) goto L_089578D0;
    return;
L_089578D0:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_089578F0;
    }
    goto L_089578D8;
L_089578D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[31] = (0x089578ECu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0344_entry, 344u, 145u, 0x0895CD24u>(ctx, &aot_mem) && ctx.pc == 0x089578ECu) goto L_089578EC;
    return;
L_089578EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_089578F0;
L_089578F0:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089579CC;
      }
      goto L_08957920;
    }
L_08957920:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_089579A4;
    }
    goto L_08957928;
L_08957928:
    if (aot_gpr[17] == aot_gpr[16]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08957974;
    }
    goto L_08957930;
L_08957930:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x08957940u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0342_entry, 342u, 111u, 0x0895AFD8u>(ctx, &aot_mem) && ctx.pc == 0x08957940u) goto L_08957940;
    return;
L_08957940:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_08957970;
      }
      goto L_08957948;
    }
L_08957948:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08957954u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_089573E0;
L_08957954:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08957974;
    }
    goto L_0895795C;
L_0895795C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[16]);
    aot_gpr[31] = (0x08957970u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0344_entry, 344u, 121u, 0x0895CB68u>(ctx, &aot_mem) && ctx.pc == 0x08957970u) goto L_08957970;
    return;
L_08957970:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08957974;
L_08957974:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089579CC;
      }
      goto L_089579A4;
    }
L_089579A4:
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
    goto L_089579CC;
L_089579CC:
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[20] ? 1u : 0u);
    aot_gpr[22] = (aot_gpr[30] + static_cast<std::uint32_t>(1));
    aot_gpr[30] = (aot_gpr[22] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08957788;
      }
      goto L_089579E0;
    }
L_089579E0:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957A14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[5] << 2u);
    aot_gpr[22] = (aot_gpr[4] + aot_gpr[22]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[6] << 4u);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    aot_gpr[8] = (aot_gpr[18] < aot_gpr[7] ? 1u : 0u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[30] = (aot_gpr[6] | 0u);
    aot_gpr[21] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[5]);
      if (branch_taken) {
          goto L_08957AE4;
      }
      goto L_08957A74;
    }
L_08957A74:
    aot_gpr[17] = (aot_gpr[18] << 4u);
    goto L_08957A78;
L_08957A78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957AD4;
      }
      goto L_08957A90;
    }
L_08957A90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x08957AA0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0342_entry, 342u, 111u, 0x0895AFD8u>(ctx, &aot_mem) && ctx.pc == 0x08957AA0u) goto L_08957AA0;
    return;
L_08957AA0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957AD4;
      }
      goto L_08957AA8;
    }
L_08957AA8:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08957AB8u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_089573E0;
L_08957AB8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957AD4;
      }
      goto L_08957AC0;
    }
L_08957AC0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[31] = (0x08957AD4u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0344_entry, 344u, 121u, 0x0895CB68u>(ctx, &aot_mem) && ctx.pc == 0x08957AD4u) goto L_08957AD4;
    return;
L_08957AD4:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[21] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08957A78;
      }
      goto L_08957AE4;
    }
L_08957AE4:
    { const bool branch_taken = aot_gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957BC4;
      }
      goto L_08957AEC;
    }
L_08957AEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[30]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[23]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[21] = (aot_gpr[30] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08957BC4;
      }
      goto L_08957B04;
    }
L_08957B04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[30] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[21] << 4u);
    goto L_08957B18;
L_08957B18:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957B98;
      }
      goto L_08957B2C;
    }
L_08957B2C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[30] << 2u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957B98;
      }
      goto L_08957B50;
    }
L_08957B50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x08957B60u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0342_entry, 342u, 111u, 0x0895AFD8u>(ctx, &aot_mem) && ctx.pc == 0x08957B60u) goto L_08957B60;
    return;
L_08957B60:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957B94;
      }
      goto L_08957B68;
    }
L_08957B68:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08957B78u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_089573E0;
L_08957B78:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957B94;
      }
      goto L_08957B80;
    }
L_08957B80:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    aot_gpr[31] = (0x08957B94u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0344_entry, 344u, 121u, 0x0895CB68u>(ctx, &aot_mem) && ctx.pc == 0x08957B94u) goto L_08957B94;
    return;
L_08957B94:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08957B98;
L_08957B98:
    { const bool branch_taken = aot_gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957BA8;
      }
      goto L_08957BA0;
    }
L_08957BA0:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957BBC;
      }
      goto L_08957BA8;
    }
L_08957BA8:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_08957B18;
      }
      goto L_08957BB4;
    }
L_08957BB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957BC4;
      }
      goto L_08957BBC;
    }
L_08957BBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957BC4;
      }
      goto L_08957BC4;
    }
L_08957BC4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957BF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[18] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08957D08;
      }
      goto L_08957C30;
    }
L_08957C30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D08;
      }
      goto L_08957C40;
    }
L_08957C40:
    aot_gpr[19] = (aot_gpr[5] << 2u);
    aot_gpr[19] = (aot_gpr[16] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[17] << 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[21] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08957D08;
      }
      goto L_08957C60;
    }
L_08957C60:
    aot_gpr[23] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[30] = (aot_gpr[16] + static_cast<std::uint32_t>(288));
    aot_gpr[21] = (aot_gpr[21] << 4u);
    goto L_08957C70;
L_08957C70:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957D00;
      }
      goto L_08957C84;
    }
L_08957C84:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[23] << 2u);
    aot_gpr[5] = (aot_gpr[22] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957D00;
      }
      goto L_08957CA4;
    }
L_08957CA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x08957CB4u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0342_entry, 342u, 111u, 0x0895AFD8u>(ctx, &aot_mem) && ctx.pc == 0x08957CB4u) goto L_08957CB4;
    return;
L_08957CB4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CFC;
      }
      goto L_08957CBC;
    }
L_08957CBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(288)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CFC;
      }
      goto L_08957CCC;
    }
L_08957CCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(72)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    goto L_08957CFC;
L_08957CFC:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
    goto L_08957D00;
L_08957D00:
    { const bool branch_taken = aot_gpr[20] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_08957C70;
      }
      goto L_08957D08;
    }
L_08957D08:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957D38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[21] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[17] << 5u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08957D7C;
L_08957D7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08957D90u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x08957D90u) goto L_08957D90;
    return;
L_08957D90:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[4] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08957D7C;
      }
      goto L_08957DB0;
    }
L_08957DB0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08957DDCu);
    aot_gpr[6] = (0u | 20u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08957DDCu) goto L_08957DDC;
    return;
L_08957DDC:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (aot_gpr[22] | 0u);
      if (branch_taken) {
          goto L_08957DF4;
      }
      goto L_08957DE8;
    }
L_08957DE8:
    aot_gpr[31] = (0x08957DF0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0344_entry, 344u, 109u, 0x0895CA14u>(ctx, &aot_mem) && ctx.pc == 0x08957DF0u) goto L_08957DF0;
    return;
L_08957DF0:
    aot_gpr[20] = (aot_gpr[22] | 0u);
    goto L_08957DF4;
L_08957DF4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (18371u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 20480u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08957E38u);
    aot_gpr[6] = (0u | 128u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08957E38u) goto L_08957E38;
    return;
L_08957E38:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957E50;
      }
      goto L_08957E44;
    }
L_08957E44:
    aot_gpr[31] = (0x08957E4Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0342_entry, 342u, 107u, 0x0895AF68u>(ctx, &aot_mem) && ctx.pc == 0x08957E4Cu) goto L_08957E4C;
    return;
L_08957E4C:
    aot_gpr[20] = (aot_gpr[18] | 0u);
    goto L_08957E50;
L_08957E50:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(256));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[31] = (0x08957E68u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x08957E68u) goto L_08957E68;
    return;
L_08957E68:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(292), aot_gpr[2]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28596), aot_gpr[17]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957E9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[18]);
    goto L_08957EC8;
L_08957EC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08957ED4u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08957ED4u) goto L_08957ED4;
    return;
L_08957ED4:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08957EC8;
      }
      goto L_08957EE4;
    }
L_08957EE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x08957EF0u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0344_entry, 344u, 115u, 0x0895CAE8u>(ctx, &aot_mem) && ctx.pc == 0x08957EF0u) goto L_08957EF0;
    return;
L_08957EF0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08957F14u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08957F14u) goto L_08957F14;
    return;
L_08957F14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08957F20u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(292));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08957F20u) goto L_08957F20;
    return;
L_08957F20:
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
L_08957F3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08957F70;
      }
      goto L_08957F68;
    }
L_08957F68:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0340_entry, 340u, 4u, 0x08958030u>(ctx, &aot_mem); return;
      }
      goto L_08957F70;
    }
L_08957F70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08957F90u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08957F90u) goto L_08957F90;
    return;
L_08957F90:
    aot_gpr[18] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(aot_gpr[18]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08957FB0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0338_entry, 338u, 106u, 0x08956F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08957FB0u) goto L_08957FB0;
    return;
L_08957FB0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08957FC8u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0338_entry, 338u, 106u, 0x08956F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08957FC8u) goto L_08957FC8;
    return;
L_08957FC8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x08957FE0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0338_entry, 338u, 106u, 0x08956F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08957FE0u) goto L_08957FE0;
    return;
L_08957FE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08958004u);
    aot_gpr[5] = (0u | 0u);
    goto L_08957A14;
}

void recomp_unit_0339(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0339_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_339(Runtime &runtime) {
    runtime.register_generated_unit(339u, 0x08957000u, 4096u, &recomp_unit_0339, &recomp_unit_0339_entry);
    runtime.register_function(0x08957000u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957014u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957024u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957078u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957088u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957090u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089570A0u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089570F4u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957108u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957118u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957178u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x0895718Cu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089571E8u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089571F8u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957230u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957250u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x0895725Cu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089572C0u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089572D4u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089572E8u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957340u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957348u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089573E0u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089573FCu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957410u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957428u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957440u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957458u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957470u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957488u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089574A0u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089574A8u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089574ACu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089574B8u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x0895751Cu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957530u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x0895754Cu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957554u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957614u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x0895761Cu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957644u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x0895764Cu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x0895765Cu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957664u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957678u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x0895767Cu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089576A4u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089576ACu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089576B4u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089576C4u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089576CCu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089576D8u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089576E0u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089576F4u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089576F8u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957720u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957740u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x0895775Cu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957778u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957788u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089577A4u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089577ACu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957880u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957888u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089578B8u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089578C0u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089578D0u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089578D8u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089578ECu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089578F0u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957920u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957928u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957930u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957940u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957948u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957954u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x0895795Cu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957970u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957974u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089579A4u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089579CCu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x089579E0u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957A14u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957A74u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957A78u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957A90u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957AA0u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957AA8u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957AB8u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957AC0u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957AD4u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957AE4u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957AECu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957B04u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957B18u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957B2Cu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957B50u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957B60u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957B68u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957B78u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957B80u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957B94u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957B98u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957BA0u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957BA8u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957BB4u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957BBCu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957BC4u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957BF4u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957C30u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957C40u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957C60u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957C70u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957C84u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957CA4u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957CB4u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957CBCu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957CCCu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957CFCu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957D00u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957D08u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957D38u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957D7Cu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957D90u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957DB0u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957DDCu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957DE8u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957DF0u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957DF4u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957E38u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957E44u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957E4Cu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957E50u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957E68u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957E9Cu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957EC8u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957ED4u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957EE4u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957EF0u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957F14u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957F20u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957F3Cu, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957F68u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957F70u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957F90u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957FB0u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957FC8u, &recomp_unit_0339, "recomp_unit_0339");
    runtime.register_function(0x08957FE0u, &recomp_unit_0339, "recomp_unit_0339");
}
} // namespace psprecomp
