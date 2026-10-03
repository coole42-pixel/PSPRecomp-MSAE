#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0580[1023] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 25, 0, 0, 26,
    0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0,
    39, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 49, 0, 50,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0,
    55, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 59, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0,
    0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 79,
    0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0,
    0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 94, 0,
    95, 0, 0, 0, 96, 0, 97, 0, 98, 0, 0, 0, 0, 0, 99, 100, 0, 101, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107,
    0, 0, 0, 108, 109, 110, 0, 0, 111, 0, 112, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 117, 0, 118,
    119, 0, 0, 120, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 131, 132, 133, 0, 0, 0, 0,
    0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 137, 0, 0, 138, 0,
    139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 158, 0, 159,
};
void recomp_unit_0580_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A48004u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0580[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A48004;
    case 2u: goto L_08A4802C;
    case 3u: goto L_08A480DC;
    case 4u: goto L_08A4810C;
    case 5u: goto L_08A48114;
    case 6u: goto L_08A48128;
    case 7u: goto L_08A48138;
    case 8u: goto L_08A48148;
    case 9u: goto L_08A48164;
    case 10u: goto L_08A48170;
    case 11u: goto L_08A481AC;
    case 12u: goto L_08A481EC;
    case 13u: goto L_08A4820C;
    case 14u: goto L_08A48218;
    case 15u: goto L_08A48244;
    case 16u: goto L_08A48284;
    case 17u: goto L_08A482B0;
    case 18u: goto L_08A482D0;
    case 19u: goto L_08A482F4;
    case 20u: goto L_08A48324;
    case 21u: goto L_08A48330;
    case 22u: goto L_08A4833C;
    case 23u: goto L_08A48358;
    case 24u: goto L_08A48360;
    case 25u: goto L_08A48374;
    case 26u: goto L_08A48380;
    case 27u: goto L_08A48388;
    case 28u: goto L_08A483C0;
    case 29u: goto L_08A483F0;
    case 30u: goto L_08A48418;
    case 31u: goto L_08A48424;
    case 32u: goto L_08A48430;
    case 33u: goto L_08A4843C;
    case 34u: goto L_08A48448;
    case 35u: goto L_08A48454;
    case 36u: goto L_08A48460;
    case 37u: goto L_08A4846C;
    case 38u: goto L_08A48478;
    case 39u: goto L_08A48484;
    case 40u: goto L_08A48490;
    case 41u: goto L_08A4849C;
    case 42u: goto L_08A484A8;
    case 43u: goto L_08A484B4;
    case 44u: goto L_08A484C0;
    case 45u: goto L_08A484CC;
    case 46u: goto L_08A484D8;
    case 47u: goto L_08A484E4;
    case 48u: goto L_08A484F0;
    case 49u: goto L_08A484F8;
    case 50u: goto L_08A48500;
    case 51u: goto L_08A48534;
    case 52u: goto L_08A4853C;
    case 53u: goto L_08A4855C;
    case 54u: goto L_08A48578;
    case 55u: goto L_08A48584;
    case 56u: goto L_08A48590;
    case 57u: goto L_08A4859C;
    case 58u: goto L_08A485DC;
    case 59u: goto L_08A48624;
    case 60u: goto L_08A48628;
    case 61u: goto L_08A48668;
    case 62u: goto L_08A48694;
    case 63u: goto L_08A486A8;
    case 64u: goto L_08A486CC;
    case 65u: goto L_08A48710;
    case 66u: goto L_08A48758;
    case 67u: goto L_08A48760;
    case 68u: goto L_08A48768;
    case 69u: goto L_08A487A4;
    case 70u: goto L_08A487B0;
    case 71u: goto L_08A487BC;
    case 72u: goto L_08A48850;
    case 73u: goto L_08A48878;
    case 74u: goto L_08A48888;
    case 75u: goto L_08A48890;
    case 76u: goto L_08A488D0;
    case 77u: goto L_08A488E8;
    case 78u: goto L_08A488F0;
    case 79u: goto L_08A48900;
    case 80u: goto L_08A48908;
    case 81u: goto L_08A48918;
    case 82u: goto L_08A48948;
    case 83u: goto L_08A48954;
    case 84u: goto L_08A48974;
    case 85u: goto L_08A48984;
    case 86u: goto L_08A489C8;
    case 87u: goto L_08A489D8;
    case 88u: goto L_08A489E0;
    case 89u: goto L_08A48A24;
    case 90u: goto L_08A48A78;
    case 91u: goto L_08A48A9C;
    case 92u: goto L_08A48AA4;
    case 93u: goto L_08A48AF8;
    case 94u: goto L_08A48AFC;
    case 95u: goto L_08A48B04;
    case 96u: goto L_08A48B14;
    case 97u: goto L_08A48B1C;
    case 98u: goto L_08A48B24;
    case 99u: goto L_08A48B3C;
    case 100u: goto L_08A48B40;
    case 101u: goto L_08A48B48;
    case 102u: goto L_08A48B50;
    case 103u: goto L_08A48B58;
    case 104u: goto L_08A48BD0;
    case 105u: goto L_08A48C50;
    case 106u: goto L_08A48C64;
    case 107u: goto L_08A48C80;
    case 108u: goto L_08A48C90;
    case 109u: goto L_08A48C94;
    case 110u: goto L_08A48C98;
    case 111u: goto L_08A48CA4;
    case 112u: goto L_08A48CAC;
    case 113u: goto L_08A48CB4;
    case 114u: goto L_08A48CBC;
    case 115u: goto L_08A48CE4;
    case 116u: goto L_08A48CEC;
    case 117u: goto L_08A48CF8;
    case 118u: goto L_08A48D00;
    case 119u: goto L_08A48D04;
    case 120u: goto L_08A48D10;
    case 121u: goto L_08A48D1C;
    case 122u: goto L_08A48D24;
    case 123u: goto L_08A48D5C;
    case 124u: goto L_08A48D6C;
    case 125u: goto L_08A48D84;
    case 126u: goto L_08A48D98;
    case 127u: goto L_08A48DAC;
    case 128u: goto L_08A48DB8;
    case 129u: goto L_08A48DC4;
    case 130u: goto L_08A48DE0;
    case 131u: goto L_08A48DE8;
    case 132u: goto L_08A48DEC;
    case 133u: goto L_08A48DF0;
    case 134u: goto L_08A48E0C;
    case 135u: goto L_08A48E60;
    case 136u: goto L_08A48E68;
    case 137u: goto L_08A48E70;
    case 138u: goto L_08A48E7C;
    case 139u: goto L_08A48E84;
    case 140u: goto L_08A48EB4;
    case 141u: goto L_08A48EBC;
    case 142u: goto L_08A48EC0;
    case 143u: goto L_08A48EC8;
    case 144u: goto L_08A48EF0;
    case 145u: goto L_08A48F1C;
    case 146u: goto L_08A48F30;
    case 147u: goto L_08A48F3C;
    case 148u: goto L_08A48F50;
    case 149u: goto L_08A48F68;
    case 150u: goto L_08A48F70;
    case 151u: goto L_08A48F84;
    case 152u: goto L_08A48F98;
    case 153u: goto L_08A48FA0;
    case 154u: goto L_08A48FB0;
    case 155u: goto L_08A48FBC;
    case 156u: goto L_08A48FE0;
    case 157u: goto L_08A48FEC;
    case 158u: goto L_08A48FF4;
    case 159u: goto L_08A48FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A48004:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[3] = (aot_gpr[4] << (aot_gpr[17] & 31u));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[4]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4802C:
    aot_gpr[2] = ((aot_gpr[10] >> 24u) & 0x0000000Fu);
    aot_gpr[15] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[12] = (aot_gpr[11] + aot_gpr[7]);
    aot_gpr[3] = (aot_gpr[2] << 16u);
    aot_gpr[24] = (45824u << 16u);
    aot_gpr[13] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[25] = (aot_gpr[15] | aot_gpr[12]);
    aot_gpr[7] = (aot_gpr[3] | aot_gpr[24]);
    aot_gpr[14] = (45568u << 16u);
    aot_gpr[24] = (aot_gpr[4] ^ 3u);
    aot_gpr[15] = (2218u << 16u);
    aot_gpr[10] = ((aot_gpr[10] & ~0xFF000000u) | ((0u & 0x000000FFu) << 24u));
    aot_gpr[2] = (aot_gpr[24] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[3] = (59904u << 16u);
    aot_gpr[10] = (aot_gpr[10] | aot_gpr[14]);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(-18424)));
    aot_gpr[15] = (aot_gpr[6] << 10u);
    aot_gpr[4] = (aot_gpr[15] | aot_gpr[5]);
    aot_gpr[24] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (60160u << 16u);
    aot_gpr[15] = (aot_gpr[4] | aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[2] << 10u);
    aot_gpr[5] = (aot_gpr[4] | aot_gpr[13]);
    aot_gpr[6] = (60928u << 16u);
    aot_gpr[8] = (aot_gpr[5] | aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (46336u << 16u);
    aot_gpr[2] = ((aot_gpr[6] >> 24u) & 0x0000000Fu);
    aot_gpr[3] = (aot_gpr[13] << 10u);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[2] << 16u);
    aot_gpr[13] = (aot_gpr[3] | aot_gpr[11]);
    aot_gpr[11] = (aot_gpr[9] | aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = ((aot_gpr[6] & ~0xFF000000u) | ((0u & 0x000000FFu) << 24u));
    aot_gpr[2] = (46080u << 16u);
    aot_gpr[3] = (60416u << 16u);
    aot_gpr[25] = ((aot_gpr[25] & ~0x000003FFu) | ((0u & 0x000003FFu) << 0u));
    aot_gpr[9] = (aot_gpr[11] | aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[2]);
    { const bool branch_taken = aot_gpr[25] != 0u;
    aot_gpr[5] = (aot_gpr[13] | aot_gpr[3]);
      if (branch_taken) {
          goto L_08A4810C;
      }
      goto L_08A480DC;
    }
L_08A480DC:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[14] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[11] + static_cast<std::uint32_t>(4));
    aot_gpr[25] = (aot_gpr[7] + static_cast<std::uint32_t>(28));
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(8), aot_gpr[25]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[15]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(24), aot_gpr[24]);
    goto L_08A4810C;
L_08A4810C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48114:
    aot_gpr[3] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-18424)));
    aot_gpr[4] = ((aot_gpr[4] & ~0xFF000000u) | ((0u & 0x000000FFu) << 24u));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(204), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48128:
    aot_gpr[3] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-18424)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(208), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48138:
    aot_gpr[3] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-18424)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(212), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48148:
    aot_gpr[3] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-18424)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A48164u);
    // nop
    goto L_08A4853C;
L_08A48164:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48170:
    aot_gpr[13] = (2218u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(-18424)));
    aot_gpr[11] = (aot_gpr[4] << 4u);
    aot_gpr[12] = (19456u << 16u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (aot_gpr[5] << 4u);
    aot_gpr[7] = (19712u << 16u);
    aot_gpr[4] = (aot_gpr[10] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[11] | aot_gpr[12]);
    aot_gpr[8] = (aot_gpr[3] | aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A481AC:
    aot_gpr[12] = (2218u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(-18424)));
    aot_gpr[7] = (aot_gpr[4] + 0u);
    aot_gpr[7] = ((aot_gpr[7] & ~0xFF000000u) | ((0u & 0x000000FFu) << 24u));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
    aot_gpr[11] = (23552u << 16u);
    aot_gpr[5] = (aot_gpr[7] | aot_gpr[11]);
    aot_gpr[3] = (aot_gpr[4] >> 24u);
    aot_gpr[7] = (aot_gpr[10] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (23808u << 16u);
    aot_gpr[8] = (aot_gpr[3] | aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A481EC:
    aot_gpr[3] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-18424)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A4820Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(7));
    goto L_08A48890;
L_08A4820C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48218:
    aot_gpr[10] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(-18424)));
    aot_gpr[9] = (aot_gpr[5] << 8u);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (50688u << 16u);
    aot_gpr[3] = (aot_gpr[8] | aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48244:
    aot_gpr[14] = (2218u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[14] + static_cast<std::uint32_t>(-18424)));
    aot_gpr[13] = (aot_gpr[5] << 8u);
    aot_gpr[10] = (51456u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(228)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(236), aot_gpr[5]);
    aot_gpr[12] = (aot_gpr[3] << 16u);
    aot_gpr[11] = (aot_gpr[12] | aot_gpr[13]);
    aot_gpr[9] = (aot_gpr[11] | aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[9] | aot_gpr[10]);
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(232), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48284:
    aot_gpr[10] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(-18424)));
    aot_gpr[9] = (aot_gpr[5] << 8u);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (50944u << 16u);
    aot_gpr[3] = (aot_gpr[8] | aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A482B0:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-18424)));
    aot_gpr[2] = (52224u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A482D0:
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-18424)));
    aot_gpr[7] = (59136u << 16u);
    aot_gpr[2] = (aot_gpr[4] | aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A482F4:
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[3] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-18424)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    aot_gpr[10] = (aot_gpr[6] + 0u);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (aot_gpr[3] + 0u);
    aot_gpr[6] = (aot_gpr[2] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A48324u);
    aot_gpr[7] = (aot_gpr[10] + 0u);
    goto L_08A48A24;
L_08A48324:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48330:
    aot_gpr[3] = (aot_gpr[5] < static_cast<std::uint32_t>(22) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[8] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A48534;
      }
      goto L_08A4833C;
    }
L_08A4833C:
    aot_gpr[7] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(12308));
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48358:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (8704u << 16u);
    goto L_08A48360;
L_08A48360:
    aot_gpr[9] = (aot_gpr[6] | aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48374:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (8960u << 16u);
    goto L_08A48360;
L_08A48380:
    if (aot_gpr[6] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(164)));
        goto L_08A483F0;
    }
    goto L_08A48388;
L_08A48388:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(176)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(172)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(184)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(180)));
    aot_gpr[25] = (aot_gpr[7] << 10u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[15] = (aot_gpr[25] | aot_gpr[4]);
    aot_gpr[24] = (54272u << 16u);
    aot_gpr[11] = (aot_gpr[14] << 10u);
    aot_gpr[10] = (aot_gpr[15] | aot_gpr[24]);
    aot_gpr[13] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[11] | aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(168), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    goto L_08A483C0;
L_08A483C0:
    aot_gpr[12] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[25] = (5632u << 16u);
    aot_gpr[24] = (54528u << 16u);
    aot_gpr[15] = (aot_gpr[12] + static_cast<std::uint32_t>(12));
    aot_gpr[13] = (aot_gpr[4] | aot_gpr[25]);
    aot_gpr[14] = (aot_gpr[4] | aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[15]);
    aot_gpr[8] = (5376u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(8), aot_gpr[13]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A483F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(160)));
    aot_gpr[3] = (54272u << 16u);
    aot_gpr[10] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(168), 0u);
    aot_gpr[9] = (aot_gpr[11] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[10] << 10u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[9]);
    goto L_08A483C0;
L_08A48418:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (9216u << 16u);
    goto L_08A48360;
L_08A48424:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (8448u << 16u);
    goto L_08A48360;
L_08A48430:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (7424u << 16u);
    goto L_08A48360;
L_08A4843C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (8192u << 16u);
    goto L_08A48360;
L_08A48448:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (7936u << 16u);
    goto L_08A48360;
L_08A48454:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (7168u << 16u);
    goto L_08A48360;
L_08A48460:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (7680u << 16u);
    goto L_08A48360;
L_08A4846C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (5888u << 16u);
    goto L_08A48360;
L_08A48478:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (6144u << 16u);
    goto L_08A48360;
L_08A48484:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (6400u << 16u);
    goto L_08A48360;
L_08A48490:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (6656u << 16u);
    goto L_08A48360;
L_08A4849C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (6912u << 16u);
    goto L_08A48360;
L_08A484A8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (9472u << 16u);
    goto L_08A48360;
L_08A484B4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (9728u << 16u);
    goto L_08A48360;
L_08A484C0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (9984u << 16u);
    goto L_08A48360;
L_08A484CC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (10240u << 16u);
    goto L_08A48360;
L_08A484D8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (20736u << 16u);
    goto L_08A48360;
L_08A484E4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (14336u << 16u);
    goto L_08A48360;
L_08A484F0:
    if (aot_gpr[6] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(228), 0u);
        goto L_08A48500;
    }
    goto L_08A484F8;
L_08A484F8:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(228), aot_gpr[5]);
    goto L_08A48500;
L_08A48500:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(236)));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(228)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(232)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[14] = (aot_gpr[2] << 8u);
    aot_gpr[13] = (aot_gpr[15] << 16u);
    aot_gpr[11] = (aot_gpr[13] | aot_gpr[14]);
    aot_gpr[9] = (aot_gpr[11] | aot_gpr[12]);
    aot_gpr[10] = (51456u << 16u);
    aot_gpr[4] = (aot_gpr[9] | aot_gpr[10]);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    goto L_08A48534;
L_08A48534:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4853C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[3] = (aot_gpr[5] & 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[11] = (aot_gpr[4] + 0u);
    aot_gpr[16] = (aot_gpr[5] & 1u);
    aot_gpr[25] = ((aot_gpr[5] >> 1u) & 0x00000001u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[24] = ((aot_gpr[5] >> 2u) & 0x00000001u);
      if (branch_taken) {
          goto L_08A48768;
      }
      goto L_08A4855C;
    }
L_08A4855C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(156)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(208)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(212)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[5];
    aot_gpr[2] = (aot_gpr[4] << 24u);
      if (branch_taken) {
          goto L_08A48760;
      }
      goto L_08A48578;
    }
L_08A48578:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[6];
    aot_gpr[2] = (aot_gpr[4] << 31u);
      if (branch_taken) {
          goto L_08A48760;
      }
      goto L_08A48584;
    }
L_08A48584:
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[7];
    aot_gpr[2] = (aot_gpr[4] << 28u);
      if (branch_taken) {
          goto L_08A48760;
      }
      goto L_08A48590;
    }
L_08A48590:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[4];
    aot_gpr[7] = (4096u << 16u);
      if (branch_taken) {
          goto L_08A486CC;
      }
      goto L_08A4859C;
    }
L_08A4859C:
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2048u << 16u);
    aot_gpr[13] = (aot_gpr[14] + static_cast<std::uint32_t>(200));
    aot_gpr[2] = ((aot_gpr[13] >> 24u) & 0x0000000Fu);
    aot_gpr[3] = (aot_gpr[2] << 16u);
    aot_gpr[12] = (aot_gpr[13] + 0u);
    aot_gpr[12] = ((aot_gpr[12] & ~0xFF000000u) | ((0u & 0x000000FFu) << 24u));
    aot_gpr[9] = (aot_gpr[3] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(8), aot_gpr[13]);
    aot_gpr[6] = (aot_gpr[12] | aot_gpr[5]);
    aot_gpr[12] = (0u + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[14] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[6] = (0u + 0u);
    goto L_08A485DC;
L_08A485DC:
    aot_gpr[7] = (aot_gpr[6] >> 31u);
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> 1u));
    aot_gpr[4] = (aot_gpr[13] << 1u);
    aot_gpr[14] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[15] = (aot_gpr[14] << 4u);
    aot_gpr[7] = (aot_gpr[15] + aot_gpr[14]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[15] = (aot_gpr[13] + aot_gpr[14]);
    aot_gpr[14] = (aot_gpr[15] << 6u);
    aot_gpr[13] = (aot_gpr[7] << 4u);
    aot_gpr[15] = (static_cast<std::int32_t>(aot_gpr[6]) < 16 ? 1u : 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[10]));
    { const bool branch_taken = aot_gpr[15] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A485DC;
      }
      goto L_08A48624;
    }
L_08A48624:
    aot_gpr[15] = (aot_gpr[24] << 10u);
    goto L_08A48628;
L_08A48628:
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[25] << 9u);
    aot_gpr[3] = (aot_gpr[16] << 8u);
    aot_gpr[14] = (aot_gpr[15] | aot_gpr[4]);
    aot_gpr[13] = (54016u << 16u);
    aot_gpr[7] = (aot_gpr[24] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[14] | aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[13] | 1u);
    aot_gpr[16] = (4736u << 16u);
    aot_gpr[25] = (aot_gpr[6] | aot_gpr[5]);
    aot_gpr[10] = (aot_gpr[16] | 284u);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[24] + static_cast<std::uint32_t>(0), aot_gpr[25]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[9] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[10]);
      if (branch_taken) {
          goto L_08A48694;
      }
      goto L_08A48668;
    }
L_08A48668:
    aot_gpr[25] = ((aot_gpr[9] >> 24u) & 0x0000000Fu);
    aot_gpr[16] = (aot_gpr[25] << 16u);
    aot_gpr[9] = ((aot_gpr[9] & ~0xFF000000u) | ((0u & 0x000000FFu) << 24u));
    aot_gpr[24] = (4096u << 16u);
    aot_gpr[10] = (256u << 16u);
    aot_gpr[2] = (aot_gpr[9] | aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[16] | aot_gpr[24]);
    aot_gpr[9] = (aot_gpr[7] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(8), aot_gpr[9]);
    goto L_08A48694;
L_08A48694:
    aot_gpr[6] = (6u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[12] | aot_gpr[6]);
    aot_gpr[12] = (1024u << 16u);
    aot_gpr[2] = (aot_gpr[7] | aot_gpr[12]);
    goto L_08A486A8;
L_08A486A8:
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[16] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[11] = (54016u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A486CC:
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(8)));
    aot_gpr[15] = (2048u << 16u);
    aot_gpr[5] = (4096u << 16u);
    aot_gpr[13] = (aot_gpr[14] + static_cast<std::uint32_t>(392));
    aot_gpr[12] = (aot_gpr[13] + 0u);
    aot_gpr[6] = ((aot_gpr[13] >> 24u) & 0x0000000Fu);
    aot_gpr[12] = ((aot_gpr[12] & ~0xFF000000u) | ((0u & 0x000000FFu) << 24u));
    aot_gpr[3] = (aot_gpr[6] << 16u);
    aot_gpr[2] = (aot_gpr[12] | aot_gpr[15]);
    aot_gpr[9] = (aot_gpr[3] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[12] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(8), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[14] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[9] + 0u);
    goto L_08A48710;
L_08A48710:
    aot_gpr[15] = (aot_gpr[6] >> 31u);
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[15]);
    aot_gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> 1u));
    aot_gpr[4] = (aot_gpr[13] << 1u);
    aot_gpr[14] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[14] << 4u);
    aot_gpr[15] = (aot_gpr[7] + aot_gpr[14]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[13] + aot_gpr[14]);
    aot_gpr[14] = (aot_gpr[7] << 5u);
    aot_gpr[13] = (aot_gpr[15] << 4u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 32 ? 1u : 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[10]));
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A48710;
      }
      goto L_08A48758;
    }
L_08A48758:
    aot_gpr[15] = (aot_gpr[24] << 10u);
    goto L_08A48628;
L_08A48760:
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[2]);
    goto L_08A48590;
L_08A48768:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(180)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(172)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(184)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    aot_gpr[9] = (aot_gpr[3] - aot_gpr[13]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(156)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(208)));
    aot_gpr[15] = (aot_gpr[8] - aot_gpr[14]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(204)));
    aot_gpr[9] = (aot_gpr[15] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[3] << 24u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_08A48888;
      }
      goto L_08A487A4;
    }
L_08A487A4:
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[10];
    aot_gpr[2] = (aot_gpr[3] << 31u);
      if (branch_taken) {
          goto L_08A48888;
      }
      goto L_08A487B0;
    }
L_08A487B0:
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[7];
    aot_gpr[2] = (aot_gpr[3] << 28u);
      if (branch_taken) {
          goto L_08A48888;
      }
      goto L_08A487BC;
    }
L_08A487BC:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[24] << 10u);
    aot_gpr[3] = (aot_gpr[25] << 9u);
    aot_gpr[25] = (aot_gpr[10] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[16] << 8u);
    aot_gpr[24] = ((aot_gpr[25] >> 24u) & 0x0000000Fu);
    aot_gpr[2] = (54016u << 16u);
    aot_gpr[3] = (aot_gpr[4] | aot_gpr[6]);
    aot_gpr[16] = (aot_gpr[24] << 16u);
    aot_gpr[6] = (aot_gpr[2] | 1u);
    aot_gpr[25] = ((aot_gpr[25] & ~0xFF000000u) | ((0u & 0x000000FFu) << 24u));
    aot_gpr[2] = (2048u << 16u);
    aot_gpr[24] = (4096u << 16u);
    aot_gpr[5] = (4736u << 16u);
    aot_gpr[7] = (aot_gpr[25] | aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] | aot_gpr[24]);
    aot_gpr[25] = (aot_gpr[3] | aot_gpr[6]);
    aot_gpr[8] = (aot_gpr[13] + aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[10] + static_cast<std::uint32_t>(8));
    aot_gpr[9] = (aot_gpr[14] + aot_gpr[9]);
    aot_gpr[16] = (aot_gpr[5] | 284u);
    aot_gpr[2] = (aot_gpr[10] + static_cast<std::uint32_t>(40));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(8), aot_gpr[12]);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[12]);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(32), aot_gpr[25]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[14]));
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[15]));
      if (branch_taken) {
          goto L_08A48878;
      }
      goto L_08A48850;
    }
L_08A48850:
    aot_gpr[8] = ((aot_gpr[6] >> 24u) & 0x0000000Fu);
    aot_gpr[9] = (aot_gpr[8] << 16u);
    aot_gpr[6] = ((aot_gpr[6] & ~0xFF000000u) | ((0u & 0x000000FFu) << 24u));
    aot_gpr[15] = (256u << 16u);
    aot_gpr[12] = (aot_gpr[9] | aot_gpr[24]);
    aot_gpr[14] = (aot_gpr[6] | aot_gpr[15]);
    aot_gpr[13] = (aot_gpr[10] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(40), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(44), aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(8), aot_gpr[13]);
    goto L_08A48878;
L_08A48878:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(8)));
    aot_gpr[10] = (1030u << 16u);
    aot_gpr[2] = (aot_gpr[10] | 2u);
    goto L_08A486A8;
L_08A48888:
    aot_gpr[12] = (aot_gpr[12] | aot_gpr[2]);
    goto L_08A487BC;
L_08A48890:
    aot_gpr[13] = (aot_gpr[6] + 0u);
    aot_gpr[13] = ((aot_gpr[13] & ~0xFF000000u) | ((0u & 0x000000FFu) << 24u));
    aot_gpr[7] = (aot_gpr[6] >> 24u);
    aot_gpr[12] = (aot_gpr[5] & 1u);
    aot_gpr[8] = (aot_gpr[4] + 0u);
    aot_gpr[15] = (22016u << 16u);
    aot_gpr[4] = (21760u << 16u);
    aot_gpr[3] = (22272u << 16u);
    aot_gpr[2] = (22528u << 16u);
    aot_gpr[11] = (aot_gpr[5] & 4u);
    aot_gpr[10] = (aot_gpr[5] & 2u);
    aot_gpr[9] = (aot_gpr[13] | aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[13] | aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[13] | aot_gpr[15]);
    { const bool branch_taken = aot_gpr[12] == 0u;
    aot_gpr[5] = (aot_gpr[7] | aot_gpr[2]);
      if (branch_taken) {
          goto L_08A488E8;
      }
      goto L_08A488D0;
    }
L_08A488D0:
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[24] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[24] + static_cast<std::uint32_t>(4));
    aot_gpr[12] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08A488E8;
L_08A488E8:
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48900;
      }
      goto L_08A488F0;
    }
L_08A488F0:
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[10] = (aot_gpr[25] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[10]);
    goto L_08A48900;
L_08A48900:
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48918;
      }
      goto L_08A48908;
    }
L_08A48908:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[11] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    goto L_08A48918;
L_08A48918:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48948:
    aot_gpr[11] = (aot_gpr[5] << 1u);
    aot_gpr[10] = (aot_gpr[11] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[10] + static_cast<std::uint32_t>(143));
    goto L_08A48954;
L_08A48954:
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[24] = (aot_gpr[2] << 24u);
    aot_gpr[7] = ((aot_gpr[7] & ~0xFF000000u) | ((0u & 0x000000FFu) << 24u));
    aot_gpr[15] = (aot_gpr[24] | aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[14] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48974:
    aot_gpr[13] = (aot_gpr[5] << 1u);
    aot_gpr[12] = (aot_gpr[13] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[12] + static_cast<std::uint32_t>(144));
    goto L_08A48954;
L_08A48984:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[15] = (aot_gpr[5] << 1u);
    aot_gpr[13] = (aot_gpr[15] + aot_gpr[5]);
    aot_gpr[10] = (aot_gpr[7] + 0u);
    aot_gpr[14] = (aot_gpr[13] + static_cast<std::uint32_t>(143));
    aot_gpr[4] = (aot_gpr[13] + static_cast<std::uint32_t>(144));
    aot_gpr[10] = ((aot_gpr[10] & ~0xFF000000u) | ((0u & 0x000000FFu) << 24u));
    aot_gpr[7] = (aot_gpr[11] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[14] << 24u);
    aot_gpr[2] = (aot_gpr[4] << 24u);
    aot_gpr[12] = (aot_gpr[5] | aot_gpr[10]);
    aot_gpr[9] = (aot_gpr[2] | aot_gpr[10]);
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A489C8:
    aot_gpr[3] = (aot_gpr[5] << 1u);
    aot_gpr[25] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[25] + static_cast<std::uint32_t>(145));
    goto L_08A48954;
L_08A489D8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A489E0:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[5] << 1u);
    aot_gpr[12] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (aot_gpr[12] + static_cast<std::uint32_t>(144));
    aot_gpr[11] = (aot_gpr[12] + static_cast<std::uint32_t>(145));
    aot_gpr[6] = ((aot_gpr[6] & ~0xFF000000u) | ((0u & 0x000000FFu) << 24u));
    aot_gpr[24] = (aot_gpr[10] + static_cast<std::uint32_t>(4));
    aot_gpr[13] = (aot_gpr[5] << 24u);
    aot_gpr[9] = (aot_gpr[11] << 24u);
    aot_gpr[4] = (aot_gpr[13] | aot_gpr[6]);
    aot_gpr[25] = (aot_gpr[9] | aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[24] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[24] + static_cast<std::uint32_t>(0), aot_gpr[25]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48A24:
    aot_gpr[12] = (aot_gpr[6] << 10u);
    aot_gpr[13] = (54272u << 16u);
    aot_gpr[25] = (aot_gpr[12] | aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[9] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[12] = (aot_gpr[25] | aot_gpr[13]);
    aot_gpr[24] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(168)));
    aot_gpr[14] = (aot_gpr[24] + static_cast<std::uint32_t>(-1));
    aot_gpr[11] = (aot_gpr[9] << 10u);
    aot_gpr[10] = (aot_gpr[4] + 0u);
    aot_gpr[15] = (aot_gpr[11] | aot_gpr[14]);
    aot_gpr[4] = (5632u << 16u);
    aot_gpr[3] = (54528u << 16u);
    aot_gpr[11] = (aot_gpr[15] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(172), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[15] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(176), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(180), aot_gpr[14]);
    { const bool branch_taken = aot_gpr[13] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(184), aot_gpr[9]);
      if (branch_taken) {
          goto L_08A48A9C;
      }
      goto L_08A48A78;
    }
L_08A48A78:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (5376u << 16u);
    aot_gpr[5] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[11]);
    goto L_08A48A9C;
L_08A48A9C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48AA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    aot_gpr[8] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[10] = (aot_gpr[8] & 65535u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[11]) >> 31u));
    aot_gpr[12] = (aot_gpr[13] >> 28u);
    aot_gpr[5] = (aot_gpr[11] + aot_gpr[12]);
    aot_gpr[5] = ((aot_gpr[5] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    aot_gpr[4] = (aot_gpr[11] - aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[4] << 1u);
    aot_gpr[9] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[8] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[9] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[10]));
    aot_gpr[5] = (aot_gpr[6] + 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[8]);
      if (branch_taken) {
          goto L_08A48B14;
      }
      goto L_08A48AF8;
    }
L_08A48AF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_08A48AFC;
L_08A48AFC:
    aot_gpr[31] = (0x08A48B04u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5AFD4u;
    return;
L_08A48B04:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48B14:
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A48B1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A48B1Cu) goto L_08A48B1C;
    return;
L_08A48B1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_08A48AFC;
L_08A48B24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[6] + 0u);
      if (branch_taken) {
          goto L_08A48B48;
      }
      goto L_08A48B3C;
    }
L_08A48B3C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08A48B40;
L_08A48B40:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48B48:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08A48B50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A48B50u) goto L_08A48B50;
    return;
L_08A48B50:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08A48B40;
L_08A48B58:
    aot_gpr[3] = (2218u << 16u);
    aot_gpr[14] = (aot_gpr[3] + static_cast<std::uint32_t>(-18496));
    aot_gpr[15] = (0u + static_cast<std::uint32_t>(480));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(60), aot_gpr[15]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(272));
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[13] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[12] = (0u + static_cast<std::uint32_t>(100));
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (0u + static_cast<std::uint32_t>(480));
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(40), aot_gpr[15]);
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(272));
    aot_gpr[9] = (0u | 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(52), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(56), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(72), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(68), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[14] + static_cast<std::uint32_t>(76));
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(64), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[14] + static_cast<std::uint32_t>(324));
    goto L_08A48BD0;
L_08A48BD0:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(148), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(152), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(156), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(160), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(164), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(168), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(172), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(176), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(180), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(184), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(216), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(220), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(224), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(188), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(192), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(196), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(200), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(204), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(208), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(212), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(228), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(236), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(232), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(240), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(244), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(252));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) >= 0;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(252));
      if (branch_taken) {
          goto L_08A48BD0;
      }
      goto L_08A48C50;
    }
L_08A48C50:
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[7] = (aot_gpr[8] + static_cast<std::uint32_t>(-18544));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-18544), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48C64:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[3] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[3] + static_cast<std::uint32_t>(-18496));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_08A48C94;
      }
      goto L_08A48C80;
    }
L_08A48C80:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
        goto L_08A48CA4;
    }
    goto L_08A48C90;
L_08A48C90:
    aot_gpr[3] = (0u + 0u);
    goto L_08A48C94;
L_08A48C94:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08A48C98;
L_08A48C98:
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48CA4:
    aot_gpr[31] = (0x08A48CACu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.pc = 0x08A5AF14u;
    return;
L_08A48CAC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A48C90;
      }
      goto L_08A48CB4;
    }
L_08A48CB4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08A48C98;
L_08A48CBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[3] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(30));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[6] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_08A48D10;
      }
      goto L_08A48CE4;
    }
L_08A48CE4:
    aot_gpr[31] = (0x08A48CECu);
    // nop
    ctx.pc = 0x08A5A854u;
    return;
L_08A48CEC:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(30));
      if (branch_taken) {
          goto L_08A48D00;
      }
      goto L_08A48CF8;
    }
L_08A48CF8:
    aot_gpr[31] = (0x08A48D00u);
    // nop
    ctx.pc = 0x08A5A864u;
    return;
L_08A48D00:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08A48D04;
L_08A48D04:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48D10:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08A48D1Cu);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(30));
    ctx.pc = 0x08A5A85Cu;
    return;
L_08A48D1C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08A48D04;
L_08A48D24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08A48D5Cu);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    goto L_08A48E0C;
L_08A48D5C:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (32768u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) < 0;
    aot_gpr[4] = (aot_gpr[2] | 264u);
      if (branch_taken) {
          goto L_08A48DF0;
      }
      goto L_08A48D6C;
    }
L_08A48D6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (32768u << 16u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (aot_gpr[4] & 15u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    aot_gpr[4] = (aot_gpr[7] | 4u);
      if (branch_taken) {
          goto L_08A48DF0;
      }
      goto L_08A48D84;
    }
L_08A48D84:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1)));
    aot_gpr[9] = (32768u << 16u);
    aot_gpr[3] = (aot_gpr[8] & 32u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[4] = (aot_gpr[9] | 4u);
      if (branch_taken) {
          goto L_08A48DF0;
      }
      goto L_08A48D98;
    }
L_08A48D98:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08A48DACu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0382_entry, 382u, 16u, 0x089820D0u>(ctx, &aot_mem) && ctx.pc == 0x08A48DACu) goto L_08A48DAC;
    return;
L_08A48DAC:
    aot_gpr[7] = (aot_gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A48DF0;
      }
      goto L_08A48DB8;
    }
L_08A48DB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[5] = (0u + 0u);
    goto L_08A48DC4;
L_08A48DC4:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[5] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[11]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A48DC4;
      }
      goto L_08A48DE0;
    }
L_08A48DE0:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A48DEC;
      }
      goto L_08A48DE8;
    }
L_08A48DE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    goto L_08A48DEC;
L_08A48DEC:
    aot_gpr[4] = (aot_gpr[7] + 0u);
    goto L_08A48DF0;
L_08A48DF0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48E0C:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1)));
    aot_gpr[2] = (2114u << 16u);
    aot_gpr[25] = (aot_gpr[12] << 8u);
    aot_gpr[11] = (aot_gpr[25] | aot_gpr[10]);
    aot_gpr[14] = (aot_gpr[2] | 4229u);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[11]) * static_cast<std::uint64_t>(aot_gpr[14]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[14] = (32768u << 16u);
    aot_gpr[13] = (aot_gpr[4] + 0u);
    aot_gpr[9] = (aot_gpr[4] + 0u);
    aot_gpr[15] = (ctx.hi);
    aot_gpr[24] = (aot_gpr[11] - aot_gpr[15]);
    aot_gpr[3] = (aot_gpr[24] >> 1u);
    aot_gpr[25] = (aot_gpr[15] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[25] >> 4u);
    aot_gpr[24] = (aot_gpr[2] << 5u);
    aot_gpr[15] = (aot_gpr[24] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[11] - aot_gpr[15]);
    aot_gpr[2] = (aot_gpr[3] & 65535u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[11] = (aot_gpr[14] | 264u);
      if (branch_taken) {
          goto L_08A48EC0;
      }
      goto L_08A48E60;
    }
L_08A48E60:
    if (aot_gpr[5] != 0u) {
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[12]));
        goto L_08A48E68;
    }
    goto L_08A48E68;
L_08A48E68:
    if (aot_gpr[6] != 0u) {
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[10]));
        goto L_08A48E70;
    }
    goto L_08A48E70;
L_08A48E70:
    aot_gpr[4] = (aot_gpr[10] & 32u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A48EB4;
      }
      goto L_08A48E7C;
    }
L_08A48E7C:
    if (aot_gpr[7] == 0u) {
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
        goto L_08A48EB4;
    }
    goto L_08A48E84;
L_08A48E84:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[13] + static_cast<std::uint32_t>(2)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(1)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(2)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(3)));
    aot_gpr[15] = (aot_gpr[3] << 24u);
    aot_gpr[24] = (aot_gpr[14] << 16u);
    aot_gpr[5] = (aot_gpr[15] | aot_gpr[24]);
    aot_gpr[13] = (aot_gpr[11] << 8u);
    aot_gpr[10] = (aot_gpr[5] | aot_gpr[13]);
    aot_gpr[6] = (aot_gpr[10] | aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    goto L_08A48EB4;
L_08A48EB4:
    if (aot_gpr[8] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[9]);
        goto L_08A48EBC;
    }
    goto L_08A48EBC;
L_08A48EBC:
    aot_gpr[11] = (0u + 0u);
    goto L_08A48EC0;
L_08A48EC0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[11] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48EC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (2218u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-16120)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0581_entry, 581u, 1u, 0x08A49004u>(ctx, &aot_mem); return;
      }
      goto L_08A48EF0;
    }
L_08A48EF0:
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[3] = (aot_gpr[6] + static_cast<std::uint32_t>(-16000));
    aot_gpr[7] = (aot_gpr[8] + static_cast<std::uint32_t>(-16112));
    aot_gpr[2] = (2218u << 16u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-11360), aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-12400));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-11364), aot_gpr[3]);
    aot_gpr[3] = (0u + 0u);
    goto L_08A48F1C;
L_08A48F1C:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[3] < static_cast<std::uint32_t>(512) ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A48F1C;
      }
      goto L_08A48F30;
    }
L_08A48F30:
    aot_gpr[10] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[10] + static_cast<std::uint32_t>(-11888));
    aot_gpr[3] = (0u + 0u);
    goto L_08A48F3C;
L_08A48F3C:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (aot_gpr[3] < static_cast<std::uint32_t>(512) ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A48F3C;
      }
      goto L_08A48F50;
    }
L_08A48F50:
    aot_gpr[12] = (2218u << 16u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(448));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x08A48F68u);
    aot_gpr[16] = (aot_gpr[12] + static_cast<std::uint32_t>(-11376));
    ctx.pc = 0x08A5AB94u;
    return;
L_08A48F68:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0581_entry, 581u, 1u, 0x08A49004u>(ctx, &aot_mem); return;
      }
      goto L_08A48F70;
    }
L_08A48F70:
    aot_gpr[13] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[13] + static_cast<std::uint32_t>(-11352));
    aot_gpr[19] = (aot_gpr[16] + 0u);
    aot_gpr[17] = (0u + 0u);
    aot_gpr[14] = (aot_gpr[17] << 2u);
    goto L_08A48F84;
L_08A48F84:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x08A48F98u);
    aot_gpr[16] = (aot_gpr[14] + aot_gpr[18]);
    ctx.pc = 0x08A5AB94u;
    return;
L_08A48F98:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A48FE0;
      }
      goto L_08A48FA0;
    }
L_08A48FA0:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[15] = (static_cast<std::int32_t>(aot_gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[15] != 0u;
    aot_gpr[14] = (aot_gpr[17] << 2u);
      if (branch_taken) {
          goto L_08A48F84;
      }
      goto L_08A48FB0;
    }
L_08A48FB0:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-16120), aot_gpr[16]);
    goto L_08A48FBC;
L_08A48FBC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48FE0:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) < 0;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_08A48FFC;
      }
      goto L_08A48FEC;
    }
L_08A48FEC:
    aot_gpr[31] = (0x08A48FF4u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.pc = 0x08A5AB9Cu;
    return;
L_08A48FF4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) >= 0;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_08A48FEC;
      }
      goto L_08A48FFC;
    }
L_08A48FFC:
    aot_gpr[31] = (0x08A49004u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08A5AB9Cu;
    return;
}

void recomp_unit_0580(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0580_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_580(Runtime &runtime) {
    runtime.register_generated_unit(580u, 0x08A48000u, 4096u, &recomp_unit_0580, &recomp_unit_0580_entry);
    runtime.register_function(0x08A48004u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A4802Cu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A480DCu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A4810Cu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48114u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48128u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48138u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48148u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48164u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48170u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A481ACu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A481ECu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A4820Cu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48218u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48244u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48284u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A482B0u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A482D0u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A482F4u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48324u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48330u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A4833Cu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48358u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48360u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48374u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48380u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48388u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A483C0u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A483F0u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48418u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48424u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48430u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A4843Cu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48448u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48454u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48460u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A4846Cu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48478u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48484u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48490u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A4849Cu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A484A8u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A484B4u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A484C0u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A484CCu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A484D8u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A484E4u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A484F0u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A484F8u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48500u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48534u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A4853Cu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A4855Cu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48578u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48584u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48590u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A4859Cu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A485DCu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48624u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48628u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48668u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48694u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A486A8u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A486CCu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48710u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48758u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48760u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48768u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A487A4u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A487B0u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A487BCu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48850u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48878u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48888u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48890u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A488D0u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A488E8u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A488F0u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48900u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48908u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48918u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48948u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48954u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48974u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48984u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A489C8u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A489D8u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A489E0u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48A24u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48A78u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48A9Cu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48AA4u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48AF8u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48AFCu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48B04u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48B14u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48B1Cu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48B24u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48B3Cu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48B40u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48B48u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48B50u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48B58u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48BD0u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48C50u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48C64u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48C80u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48C90u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48C94u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48C98u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48CA4u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48CACu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48CB4u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48CBCu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48CE4u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48CECu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48CF8u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48D00u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48D04u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48D10u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48D1Cu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48D24u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48D5Cu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48D6Cu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48D84u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48D98u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48DACu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48DB8u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48DC4u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48DE0u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48DE8u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48DECu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48DF0u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48E0Cu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48E60u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48E68u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48E70u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48E7Cu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48E84u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48EB4u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48EBCu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48EC0u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48EC8u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48EF0u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48F1Cu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48F30u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48F3Cu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48F50u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48F68u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48F70u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48F84u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48F98u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48FA0u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48FB0u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48FBCu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48FE0u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48FECu, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48FF4u, &recomp_unit_0580, "recomp_unit_0580");
    runtime.register_function(0x08A48FFCu, &recomp_unit_0580, "recomp_unit_0580");
}
} // namespace psprecomp
