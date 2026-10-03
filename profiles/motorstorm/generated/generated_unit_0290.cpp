#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0290[1021] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 8, 0, 0, 9, 0, 0,
    0, 0, 0, 0, 10, 0, 11, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0,
    0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 20, 0, 0, 0, 21, 0, 22, 0, 23, 0, 0,
    0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 27, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 39, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0,
    49, 0, 0, 50, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0,
    0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0,
    0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0,
    71, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0,
    0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 97, 0, 98, 0, 0, 0, 99,
    100, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 107, 0, 0, 108, 0, 109, 0, 0, 0, 110,
    0, 0, 0, 0, 111, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0,
    0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137,
    0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0,
    143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145,
};
void recomp_unit_0290_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08926000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0290[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08926000;
    case 2u: goto L_08926008;
    case 3u: goto L_08926020;
    case 4u: goto L_08926030;
    case 5u: goto L_08926048;
    case 6u: goto L_08926050;
    case 7u: goto L_08926058;
    case 8u: goto L_08926068;
    case 9u: goto L_08926074;
    case 10u: goto L_08926090;
    case 11u: goto L_08926098;
    case 12u: goto L_089260A0;
    case 13u: goto L_089260B8;
    case 14u: goto L_089260DC;
    case 15u: goto L_089260F4;
    case 16u: goto L_08926110;
    case 17u: goto L_08926118;
    case 18u: goto L_08926134;
    case 19u: goto L_08926150;
    case 20u: goto L_08926154;
    case 21u: goto L_08926164;
    case 22u: goto L_0892616C;
    case 23u: goto L_08926174;
    case 24u: goto L_08926188;
    case 25u: goto L_089261A8;
    case 26u: goto L_089261B8;
    case 27u: goto L_089261C0;
    case 28u: goto L_089261CC;
    case 29u: goto L_089261E0;
    case 30u: goto L_089261EC;
    case 31u: goto L_08926228;
    case 32u: goto L_089262A8;
    case 33u: goto L_089262B0;
    case 34u: goto L_089262B8;
    case 35u: goto L_089262D8;
    case 36u: goto L_089262E4;
    case 37u: goto L_08926314;
    case 38u: goto L_0892631C;
    case 39u: goto L_08926328;
    case 40u: goto L_08926330;
    case 41u: goto L_08926344;
    case 42u: goto L_08926360;
    case 43u: goto L_08926370;
    case 44u: goto L_0892638C;
    case 45u: goto L_08926394;
    case 46u: goto L_089263BC;
    case 47u: goto L_089263C8;
    case 48u: goto L_089263F8;
    case 49u: goto L_08926400;
    case 50u: goto L_0892640C;
    case 51u: goto L_08926414;
    case 52u: goto L_08926428;
    case 53u: goto L_08926444;
    case 54u: goto L_08926454;
    case 55u: goto L_08926470;
    case 56u: goto L_08926478;
    case 57u: goto L_08926488;
    case 58u: goto L_0892649C;
    case 59u: goto L_089264B0;
    case 60u: goto L_089264CC;
    case 61u: goto L_089264DC;
    case 62u: goto L_089264F4;
    case 63u: goto L_08926508;
    case 64u: goto L_08926524;
    case 65u: goto L_08926534;
    case 66u: goto L_08926540;
    case 67u: goto L_08926564;
    case 68u: goto L_089265CC;
    case 69u: goto L_089265DC;
    case 70u: goto L_089265F8;
    case 71u: goto L_08926600;
    case 72u: goto L_08926604;
    case 73u: goto L_0892663C;
    case 74u: goto L_0892665C;
    case 75u: goto L_08926684;
    case 76u: goto L_0892669C;
    case 77u: goto L_089266B0;
    case 78u: goto L_089266E8;
    case 79u: goto L_089266F8;
    case 80u: goto L_089267BC;
    case 81u: goto L_089267EC;
    case 82u: goto L_08926824;
    case 83u: goto L_0892682C;
    case 84u: goto L_08926830;
    case 85u: goto L_08926868;
    case 86u: goto L_08926878;
    case 87u: goto L_0892688C;
    case 88u: goto L_08926894;
    case 89u: goto L_089268C4;
    case 90u: goto L_089268CC;
    case 91u: goto L_089268FC;
    case 92u: goto L_08926910;
    case 93u: goto L_08926928;
    case 94u: goto L_08926938;
    case 95u: goto L_08926948;
    case 96u: goto L_08926954;
    case 97u: goto L_08926964;
    case 98u: goto L_0892696C;
    case 99u: goto L_0892697C;
    case 100u: goto L_08926980;
    case 101u: goto L_08926988;
    case 102u: goto L_0892699C;
    case 103u: goto L_089269C4;
    case 104u: goto L_08926A20;
    case 105u: goto L_08926A3C;
    case 106u: goto L_08926A50;
    case 107u: goto L_08926A58;
    case 108u: goto L_08926A64;
    case 109u: goto L_08926A6C;
    case 110u: goto L_08926A7C;
    case 111u: goto L_08926A90;
    case 112u: goto L_08926A98;
    case 113u: goto L_08926AA0;
    case 114u: goto L_08926B5C;
    case 115u: goto L_08926B68;
    case 116u: goto L_08926B98;
    case 117u: goto L_08926BBC;
    case 118u: goto L_08926BEC;
    case 119u: goto L_08926C10;
    case 120u: goto L_08926C3C;
    case 121u: goto L_08926C60;
    case 122u: goto L_08926CF4;
    case 123u: goto L_08926D18;
    case 124u: goto L_08926D70;
    case 125u: goto L_08926D98;
    case 126u: goto L_08926DA4;
    case 127u: goto L_08926DA8;
    case 128u: goto L_08926E14;
    case 129u: goto L_08926E1C;
    case 130u: goto L_08926E34;
    case 131u: goto L_08926E44;
    case 132u: goto L_08926E4C;
    case 133u: goto L_08926E80;
    case 134u: goto L_08926E94;
    case 135u: goto L_08926EC4;
    case 136u: goto L_08926ECC;
    case 137u: goto L_08926EFC;
    case 138u: goto L_08926F04;
    case 139u: goto L_08926F30;
    case 140u: goto L_08926F48;
    case 141u: goto L_08926F5C;
    case 142u: goto L_08926F6C;
    case 143u: goto L_08926F80;
    case 144u: goto L_08926F98;
    case 145u: goto L_08926FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08926000:
    aot_gpr[31] = (0x08926008u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0594_entry, 594u, 96u, 0x08A567FCu>(ctx, &aot_mem) && ctx.pc == 0x08926008u) goto L_08926008;
    return;
L_08926008:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(64), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (0x08926020u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 17u, 0x08927270u>(ctx, &aot_mem) && ctx.pc == 0x08926020u) goto L_08926020;
    return;
L_08926020:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08926050;
      }
      goto L_08926030;
    }
L_08926030:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08926048u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08926048u) goto L_08926048;
    return;
L_08926048:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926058;
      }
      goto L_08926050;
    }
L_08926050:
    aot_gpr[31] = (0x08926058u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08926058u) goto L_08926058;
    return;
L_08926058:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[18] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089260A0;
      }
      goto L_08926068;
    }
L_08926068:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926098;
      }
      goto L_08926074;
    }
L_08926074:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08926090u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08926090u) goto L_08926090;
    return;
L_08926090:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089260A0;
      }
      goto L_08926098;
    }
L_08926098:
    aot_gpr[31] = (0x089260A0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x089260A0u) goto L_089260A0;
    return;
L_089260A0:
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
L_089260B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(42)));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08926164;
      }
      goto L_089260DC;
    }
L_089260DC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[5] = (0u | 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-17688)));
      if (branch_taken) {
          goto L_08926118;
      }
      goto L_089260F4;
    }
L_089260F4:
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (2194u << 16u);
    aot_gpr[6] = (0u | 224u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x08926110u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(23104));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 77u, 0x08A2D520u>(ctx, &aot_mem) && ctx.pc == 0x08926110u) goto L_08926110;
    return;
L_08926110:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08926118;
L_08926118:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-17688)));
      if (branch_taken) {
          goto L_08926154;
      }
      goto L_08926134;
    }
L_08926134:
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (2194u << 16u);
    aot_gpr[6] = (0u | 272u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x08926150u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(23612));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 77u, 0x08A2D520u>(ctx, &aot_mem) && ctx.pc == 0x08926150u) goto L_08926150;
    return;
L_08926150:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08926154;
L_08926154:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08926164;
L_08926164:
    aot_gpr[31] = (0x0892616Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0594_entry, 594u, 74u, 0x08A565B0u>(ctx, &aot_mem) && ctx.pc == 0x0892616Cu) goto L_0892616C;
    return;
L_0892616C:
    aot_gpr[31] = (0x08926174u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0594_entry, 594u, 83u, 0x08A566B4u>(ctx, &aot_mem) && ctx.pc == 0x08926174u) goto L_08926174;
    return;
L_08926174:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926188:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089261A8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089260B8;
L_089261A8:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(aot_gpr[16]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(42)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089261CC;
      }
      goto L_089261B8;
    }
L_089261B8:
    aot_gpr[31] = (0x089261C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 47u, 0x08931568u>(ctx, &aot_mem) && ctx.pc == 0x089261C0u) goto L_089261C0;
    return;
L_089261C0:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-6980), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_089261CC;
L_089261CC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089261E0:
    aot_gpr[4] = (0u << 24u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089261EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(42)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089262B0;
      }
      goto L_08926228;
    }
L_08926228:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<12u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 32u, 3u);
      ctx.read_vfpu_vector_ct<14u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 15u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<15u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<14u, 4u>(vfpu_d); }
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<110u, 1u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.execute_vfpu_vdot_ct<12u, 14u, 14u, 4u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<14u, 14u, 12u, 4u>();
    aot_gpr[4] = (49024u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<14u, 14u, 12u, 4u>();
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_089262B8;
      }
      goto L_089262A8;
    }
L_089262A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08926488;
      }
      goto L_089262B0;
    }
L_089262B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089267BC;
      }
      goto L_089262B8;
    }
L_089262B8:
    aot_gpr[18] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(112)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[22] = (2218u << 16u);
      if (branch_taken) {
          goto L_08926370;
      }
      goto L_089262D8;
    }
L_089262D8:
    aot_gpr[21] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-2928));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_089262E4;
L_089262E4:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(208)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08926314u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08926314u) goto L_08926314;
    return;
L_08926314:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926330;
      }
      goto L_0892631C;
    }
L_0892631C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08926328u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0594_entry, 594u, 100u, 0x08A56840u>(ctx, &aot_mem) && ctx.pc == 0x08926328u) goto L_08926328;
    return;
L_08926328:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926360;
      }
      goto L_08926330;
    }
L_08926330:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(164)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926360;
      }
      goto L_08926344;
    }
L_08926344:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    goto L_08926360;
L_08926360:
    aot_gpr[19] = (aot_gpr[20] | 0u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(112)));
    if (aot_gpr[20] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_089262E4;
    }
    goto L_08926370;
L_08926370:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926394;
      }
      goto L_0892638C;
    }
L_0892638C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08926394;
      }
      goto L_08926394;
    }
L_08926394:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[20] = (2218u << 16u);
      if (branch_taken) {
          goto L_08926454;
      }
      goto L_089263BC;
    }
L_089263BC:
    aot_gpr[21] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-2928));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089263C8;
L_089263C8:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(208)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089263F8u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089263F8u) goto L_089263F8;
    return;
L_089263F8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926414;
      }
      goto L_08926400;
    }
L_08926400:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x0892640Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0594_entry, 594u, 101u, 0x08A56874u>(ctx, &aot_mem) && ctx.pc == 0x0892640Cu) goto L_0892640C;
    return;
L_0892640C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926444;
      }
      goto L_08926414;
    }
L_08926414:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(164)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926444;
      }
      goto L_08926428;
    }
L_08926428:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    goto L_08926444;
L_08926444:
    aot_gpr[18] = (aot_gpr[19] | 0u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(112)));
    if (aot_gpr[19] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_089263C8;
    }
    goto L_08926454;
L_08926454:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926478;
      }
      goto L_08926470;
    }
L_08926470:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08926478;
      }
      goto L_08926478;
    }
L_08926478:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), aot_gpr[4]);
      if (branch_taken) {
          goto L_08926534;
      }
      goto L_08926488;
    }
L_08926488:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(112)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089264DC;
      }
      goto L_0892649C;
    }
L_0892649C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089264CC;
      }
      goto L_089264B0;
    }
L_089264B0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[9] = (aot_gpr[7] << 2u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_089264CC;
L_089264CC:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892649C;
      }
      goto L_089264DC;
    }
L_089264DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(112)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08926534;
      }
      goto L_089264F4;
    }
L_089264F4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(164)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926524;
      }
      goto L_08926508;
    }
L_08926508:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[9] = (aot_gpr[7] << 2u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08926524;
L_08926524:
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089264F4;
      }
      goto L_08926534;
    }
L_08926534:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926564;
      }
      goto L_08926540;
    }
L_08926540:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-12878))))));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08926564u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0595_entry, 595u, 12u, 0x08A570FCu>(ctx, &aot_mem) && ctx.pc == 0x08926564u) goto L_08926564;
    return;
L_08926564:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12864));
    aot_gpr[5] = (15293u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 12198u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<16u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<17u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<18u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<19u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<116u>(aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (ctx.lo);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (16128u << 16u);
      if (branch_taken) {
          goto L_089267BC;
      }
      goto L_089265CC;
    }
L_089265CC:
    aot_gpr[7] = (0u | 10u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[8] = (0u | 131u);
    aot_gpr[5] = (0u | 0u);
    goto L_089265DC;
L_089265DC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(168)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926600;
      }
      goto L_089265F8;
    }
L_089265F8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(125), static_cast<std::uint8_t>(aot_gpr[7]));
      if (branch_taken) {
          goto L_08926604;
      }
      goto L_08926600;
    }
L_08926600:
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(125), static_cast<std::uint8_t>(aot_gpr[8]));
    goto L_08926604;
L_08926604:
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<9u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<9u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(23u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (19u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(1u, 4u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    ctx.execute_vfpu_vi2x(9u, 1u, 4u, 0u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<10u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<42u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<74u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<96u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<106u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<11u, 10u, 116u, 4u>();
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(168)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(29)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892665C;
      }
      goto L_0892663C;
    }
L_0892663C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(120)));
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[9] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<13u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[9] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[9] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 44u, 4u);
      ctx.read_vfpu_vector_ct<8u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
      constexpr std::uint32_t vfpu_input_length = 4u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<8u, 4u>(vfpu_d); }
    goto L_0892665C;
L_0892665C:
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 48u, 3u);
      ctx.read_vfpu_vector_ct<8u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<19u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<8u, 4u>(vfpu_d); }
    ctx.vfpu_ctrl[0u] = 0x00000000u;
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<9u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<58u, 4u>(vfpu_d); }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(128)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[22])) && aot_fpr[13] == aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892669C;
      }
      goto L_08926684;
    }
L_08926684:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 3u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 3u>(vfpu_d); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089266F8;
      }
      goto L_0892669C;
    }
L_0892669C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(128)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089266E8;
      }
      goto L_089266B0;
    }
L_089266B0:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<116u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<11u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<11u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<11u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<11u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 2u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<75u, 2u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 2u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<75u, 2u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 2u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<75u, 2u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 2u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<75u, 2u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<65u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<67u, 1u>(vfpu_d); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089266F8;
      }
      goto L_089266E8;
    }
L_089266E8:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 3u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 3u>(vfpu_d); }
    goto L_089266F8;
L_089266F8:
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<0u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(28u, 3u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(29u, 3u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<2u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(30u, 3u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<3u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (16u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(31u, 3u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    ctx.execute_vfpu_vi2x(0u, 28u, 4u, 3u);
    ctx.execute_vfpu_vi2x(1u, 29u, 4u, 3u);
    ctx.execute_vfpu_vi2x(2u, 30u, 4u, 3u);
    ctx.execute_vfpu_vi2x(3u, 31u, 4u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<59u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<33u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<60u, 4u>(vfpu_d); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<34u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<10u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<10u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<10u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<10u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 2u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<74u, 2u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 2u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<74u, 2u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 2u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<74u, 2u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 2u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<74u, 2u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<8u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<8u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 3u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<8u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<8u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 3u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<61u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<33u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<62u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<34u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<63u, 4u>(vfpu_d); }
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(168)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 2u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<68u, 2u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<24u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 2u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<68u, 2u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<27u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<24u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<25u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<59u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<57u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<26u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<56u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<58u, 1u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<24u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<28u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<25u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<29u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<26u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<30u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<27u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<31u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(128));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089265DC;
      }
      goto L_089267BC;
    }
L_089267BC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089267EC:
    aot_gpr[5] = (255u << 16u);
    aot_gpr[6] = (65280u << 16u);
    aot_gpr[5] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[4] & aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] >> 8u);
    aot_gpr[6] = (aot_gpr[6] >> 24u);
    aot_gpr[7] = (aot_gpr[4] & 255u);
    aot_gpr[2] = (aot_gpr[5] | aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] & 65280u);
    aot_gpr[5] = (aot_gpr[7] << 24u);
    aot_gpr[4] = (aot_gpr[4] << 8u);
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926824:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08926868;
      }
      goto L_0892682C;
    }
L_0892682C:
    aot_gpr[8] = (0u | 65521u);
    goto L_08926830;
L_08926830:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[10]);
    { const std::uint32_t dividend = aot_gpr[9]; const std::uint32_t divisor = aot_gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (ctx.hi);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[10] + aot_gpr[9]);
    { const std::uint32_t dividend = aot_gpr[9]; const std::uint32_t divisor = aot_gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[9] = (ctx.hi);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08926830;
      }
      goto L_08926868;
    }
L_08926868:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[9]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926878:
    aot_gpr[2] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (2219u << 16u);
      if (branch_taken) {
          goto L_089268C4;
      }
      goto L_0892688C;
    }
L_0892688C:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-12800));
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[4]);
    goto L_08926894;
L_08926894:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[2] ^ aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[8] = (aot_gpr[8] << 2u);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] >> 8u);
    aot_gpr[2] = (aot_gpr[8] ^ aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[4]);
      if (branch_taken) {
          goto L_08926894;
      }
      goto L_089268C4;
    }
L_089268C4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089268CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x089268FCu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_089267EC;
L_089268FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08926910u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08926910u) goto L_08926910;
    return;
L_08926910:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x08926928u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08926928u) goto L_08926928;
    return;
L_08926928:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08926954;
      }
      goto L_08926938;
    }
L_08926938:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08926948u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08926948u) goto L_08926948;
    return;
L_08926948:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08926954;
L_08926954:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08926964u);
    aot_gpr[6] = (0u | 4u);
    goto L_08926878;
L_08926964:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08926980;
      }
      goto L_0892696C;
    }
L_0892696C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0892697Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_08926878;
L_0892697C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_08926980;
L_08926980:
    aot_gpr[31] = (0x08926988u);
    aot_gpr[4] = (~(aot_gpr[17] | 0u));
    goto L_089267EC;
L_08926988:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x0892699Cu);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0892699Cu) goto L_0892699C;
    return;
L_0892699C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
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
L_089269C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 137u);
    aot_gpr[5] = (0u | 80u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 78u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (0u | 71u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 13u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (0u | 10u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 26u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08926A20u);
    aot_gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08926A20u) goto L_08926A20;
    return;
L_08926A20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926A3C:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12800));
    aot_gpr[5] = (60857u << 16u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-31968));
    goto L_08926A50;
L_08926A50:
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[8] = (0u | 0u);
    goto L_08926A58;
L_08926A58:
    aot_gpr[9] = (aot_gpr[7] & 1u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[7] = (aot_gpr[7] >> 1u);
      if (branch_taken) {
          goto L_08926A6C;
      }
      goto L_08926A64;
    }
L_08926A64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[7] ^ aot_gpr[5]);
      if (branch_taken) {
          goto L_08926A6C;
      }
      goto L_08926A6C;
    }
L_08926A6C:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[8] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926A58;
      }
      goto L_08926A7C;
    }
L_08926A7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[6] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08926A50;
      }
      goto L_08926A90;
    }
L_08926A90:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926A98:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926AA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (1u << 16u);
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[31]);
    aot_gpr[31] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[31]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[10] & 255u);
    aot_gpr[10] = (0u | 33u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    aot_gpr[20] = (aot_gpr[7] | 0u);
    aot_gpr[14] = (aot_gpr[11] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[17]);
    aot_gpr[4] = (0u | 8u);
    aot_gpr[12] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[24] = (2216u << 16u);
    aot_gpr[15] = (65280u << 16u);
    aot_gpr[17] = (255u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[30]);
    aot_gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[31]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[7]);
    aot_gpr[7] = (ctx.hi);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[10] = (ctx.lo);
    aot_gpr[11] = (aot_gpr[10] + aot_gpr[10]);
    aot_gpr[13] = (aot_gpr[10] + aot_gpr[11]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[13] = (aot_gpr[13] + aot_gpr[5]);
      if (branch_taken) {
          goto L_08926B68;
      }
      goto L_08926B5C;
    }
L_08926B5C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[7]);
    goto L_08926B68;
L_08926B68:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[10] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[7] << 2u);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[13] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(33));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(18));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[24] + static_cast<std::uint32_t>(-29308)));
      if (branch_taken) {
          goto L_08926BEC;
      }
      goto L_08926B98;
    }
L_08926B98:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x08926BBCu);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 217u, 0x0891CF84u>(ctx, &aot_mem) && ctx.pc == 0x08926BBCu) goto L_08926BBC;
    return;
L_08926BBC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[7] = (aot_gpr[2] | 0u);
    aot_gpr[12] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (0u | 8u);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[24] = (2216u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[15] = (65280u << 16u);
      if (branch_taken) {
          goto L_08926C3C;
      }
      goto L_08926BEC;
    }
L_08926BEC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x08926C10u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x08926C10u) goto L_08926C10;
    return;
L_08926C10:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[7] = (aot_gpr[2] | 0u);
    aot_gpr[12] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (0u | 8u);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[24] = (2216u << 16u);
    aot_gpr[15] = (65280u << 16u);
    goto L_08926C3C;
L_08926C3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[7]);
    aot_gpr[31] = (0x08926C60u);
    aot_gpr[4] = (aot_gpr[12] | 0u);
    goto L_089269C4;
L_08926C60:
    aot_gpr[4] = (65280u << 16u);
    aot_gpr[5] = (aot_gpr[16] & aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] >> 24u);
    aot_gpr[6] = (aot_gpr[16] & aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (aot_gpr[6] >> 16u);
    aot_gpr[6] = (aot_gpr[16] & 65280u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (aot_gpr[6] >> 8u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (aot_gpr[16] & 255u);
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[4] >> 24u);
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[5] >> 16u);
    aot_gpr[5] = (aot_gpr[6] & 65280u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[5] >> 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    aot_gpr[6] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (0u | 13u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08926CF4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-25928));
    goto L_089268CC;
L_08926CF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(6));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[5]);
    aot_gpr[31] = (0x08926D18u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 217u, 0x0891CF84u>(ctx, &aot_mem) && ctx.pc == 0x08926D18u) goto L_08926D18;
    return;
L_08926D18:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[4] = (0u | 120u);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[11] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (0u | 218u);
    PSPRECOMP_AOT_STORE8(aot_gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[7] = (aot_gpr[22] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[6]);
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (0u | 0u);
    aot_gpr[13] = (aot_gpr[11] | 0u);
    aot_gpr[4] = (0u | 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08926F98;
      }
      goto L_08926D70;
    }
L_08926D70:
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[31]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    aot_gpr[25] = (0u | 3u);
    aot_gpr[24] = (0u | 1u);
    aot_gpr[15] = (0u | 2u);
    aot_gpr[4] = (ctx.hi);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    goto L_08926D98;
L_08926D98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[22] != aot_gpr[4];
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08926DA8;
      }
      goto L_08926DA4;
    }
L_08926DA4:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_08926DA8;
L_08926DA8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[22] ^ aot_gpr[4]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[13] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (ctx.lo);
    aot_gpr[7] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[5] = (aot_gpr[6] & 65280u);
    aot_gpr[5] = (aot_gpr[5] >> 8u);
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-256));
    aot_gpr[6] = (~(aot_gpr[6] | 0u));
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (~(aot_gpr[5] | 0u));
    aot_gpr[11] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[13] = (aot_gpr[11] | 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[23] = (aot_gpr[13] | 0u);
      if (branch_taken) {
          goto L_08926F6C;
      }
      goto L_08926E14;
    }
L_08926E14:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[30])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[21])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[31] = (ctx.lo);
    goto L_08926E1C;
L_08926E1C:
    PSPRECOMP_AOT_STORE8(aot_gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[11] = (aot_gpr[13] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[10] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[13] = (aot_gpr[11] | 0u);
      if (branch_taken) {
          goto L_08926F5C;
      }
      goto L_08926E34;
    }
L_08926E34:
    aot_gpr[9] = (aot_gpr[31] << 2u);
    aot_gpr[8] = (aot_gpr[31] + aot_gpr[31]);
    aot_gpr[9] = (aot_gpr[20] + aot_gpr[9]);
    aot_gpr[8] = (aot_gpr[20] + aot_gpr[8]);
    goto L_08926E44;
L_08926E44:
    { const bool branch_taken = aot_gpr[14] != aot_gpr[25];
    aot_gpr[11] = (aot_gpr[13] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08926E80;
      }
      goto L_08926E4C;
    }
L_08926E4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (aot_gpr[4] & 65280u);
    aot_gpr[6] = (aot_gpr[6] >> 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] >> 16u);
    aot_gpr[11] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[13] = (aot_gpr[11] | 0u);
      if (branch_taken) {
          goto L_08926F48;
      }
      goto L_08926E80;
    }
L_08926E80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    { const bool branch_taken = aot_gpr[14] != 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08926EC4;
      }
      goto L_08926E94;
    }
L_08926E94:
    aot_gpr[5] = (aot_gpr[4] & 31u);
    aot_gpr[7] = (aot_gpr[5] << 3u);
    aot_gpr[5] = (aot_gpr[4] & 2016u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 5u));
    aot_gpr[4] = (aot_gpr[4] & 63488u);
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 11u));
    aot_gpr[5] = (aot_gpr[4] << 3u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          goto L_08926F30;
      }
      goto L_08926EC4;
    }
L_08926EC4:
    { const bool branch_taken = aot_gpr[14] != aot_gpr[24];
    // nop
      if (branch_taken) {
          goto L_08926EFC;
      }
      goto L_08926ECC;
    }
L_08926ECC:
    aot_gpr[5] = (aot_gpr[4] & 31u);
    aot_gpr[7] = (aot_gpr[5] << 3u);
    aot_gpr[5] = (aot_gpr[4] & 992u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 5u));
    aot_gpr[4] = (aot_gpr[4] & 31744u);
    aot_gpr[6] = (aot_gpr[5] << 3u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 10u));
    aot_gpr[5] = (aot_gpr[4] << 3u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          goto L_08926F30;
      }
      goto L_08926EFC;
    }
L_08926EFC:
    { const bool branch_taken = aot_gpr[14] != aot_gpr[15];
    // nop
      if (branch_taken) {
          goto L_08926F30;
      }
      goto L_08926F04;
    }
L_08926F04:
    aot_gpr[5] = (aot_gpr[4] & 15u);
    aot_gpr[7] = (aot_gpr[5] << 4u);
    aot_gpr[5] = (aot_gpr[4] & 240u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 4u));
    aot_gpr[4] = (aot_gpr[4] & 3840u);
    aot_gpr[6] = (aot_gpr[5] << 4u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 8u));
    aot_gpr[5] = (aot_gpr[4] << 4u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    goto L_08926F30;
L_08926F30:
    PSPRECOMP_AOT_STORE8(aot_gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE8(aot_gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[13] = (aot_gpr[11] | 0u);
    goto L_08926F48;
L_08926F48:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[10] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08926E44;
      }
      goto L_08926F5C;
    }
L_08926F5C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[31] = (aot_gpr[31] + aot_gpr[21]);
      if (branch_taken) {
          goto L_08926E1C;
      }
      goto L_08926F6C;
    }
L_08926F6C:
    aot_gpr[7] = (aot_gpr[11] - aot_gpr[23]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (0x08926F80u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    goto L_08926824;
L_08926F80:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[22] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[30] = (aot_gpr[19] + aot_gpr[30]);
      if (branch_taken) {
          goto L_08926D98;
      }
      goto L_08926F98;
    }
L_08926F98:
    aot_gpr[5] = (65280u << 16u);
    aot_gpr[5] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] >> 24u);
    PSPRECOMP_AOT_STORE8(aot_gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[6] = (aot_gpr[4] & aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[13] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] >> 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (aot_gpr[4] & 65280u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] >> 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08926FF0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-25920));
    goto L_089268CC;
L_08926FF0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08927000u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    (void)rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0290(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0290_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_290(Runtime &runtime) {
    runtime.register_generated_unit(290u, 0x08926000u, 4096u, &recomp_unit_0290, &recomp_unit_0290_entry);
    runtime.register_function(0x08926000u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926008u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926020u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926030u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926048u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926050u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926058u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926068u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926074u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926090u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926098u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089260A0u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089260B8u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089260DCu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089260F4u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926110u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926118u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926134u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926150u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926154u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926164u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x0892616Cu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926174u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926188u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089261A8u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089261B8u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089261C0u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089261CCu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089261E0u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089261ECu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926228u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089262A8u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089262B0u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089262B8u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089262D8u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089262E4u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926314u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x0892631Cu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926328u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926330u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926344u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926360u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926370u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x0892638Cu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926394u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089263BCu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089263C8u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089263F8u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926400u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x0892640Cu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926414u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926428u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926444u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926454u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926470u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926478u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926488u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x0892649Cu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089264B0u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089264CCu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089264DCu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089264F4u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926508u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926524u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926534u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926540u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926564u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089265CCu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089265DCu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089265F8u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926600u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926604u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x0892663Cu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x0892665Cu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926684u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x0892669Cu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089266B0u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089266E8u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089266F8u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089267BCu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089267ECu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926824u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x0892682Cu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926830u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926868u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926878u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x0892688Cu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926894u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089268C4u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089268CCu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089268FCu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926910u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926928u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926938u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926948u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926954u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926964u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x0892696Cu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x0892697Cu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926980u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926988u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x0892699Cu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x089269C4u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926A20u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926A3Cu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926A50u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926A58u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926A64u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926A6Cu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926A7Cu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926A90u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926A98u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926AA0u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926B5Cu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926B68u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926B98u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926BBCu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926BECu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926C10u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926C3Cu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926C60u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926CF4u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926D18u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926D70u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926D98u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926DA4u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926DA8u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926E14u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926E1Cu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926E34u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926E44u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926E4Cu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926E80u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926E94u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926EC4u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926ECCu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926EFCu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926F04u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926F30u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926F48u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926F5Cu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926F6Cu, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926F80u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926F98u, &recomp_unit_0290, "recomp_unit_0290");
    runtime.register_function(0x08926FF0u, &recomp_unit_0290, "recomp_unit_0290");
}
} // namespace psprecomp
