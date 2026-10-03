#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0029[1021] = {
    1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0,
    0, 12, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 19,
    0, 0, 20, 0, 21, 0, 0, 22, 0, 23, 24, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 35, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    47, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0,
    0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0,
    0, 56, 0, 0, 0, 57, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 64, 0, 0, 65, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 76, 0, 0, 0, 0, 0, 0,
    0, 0, 77, 78, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 81, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 84, 0, 0, 0,
    0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 88, 0, 89, 0, 0, 0, 0, 0, 0, 90,
    0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 95, 0, 0, 0, 0, 0, 0, 96, 97, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 117, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 0, 127,
    0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0,
    0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0,
    0, 140, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0,
    146, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157,
    0, 158, 0, 0, 159, 160, 0, 161, 0, 0, 162, 0, 163, 0, 0, 164, 165, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 168,
};
void recomp_unit_0029_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08821000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0029[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08821000;
    case 2u: goto L_08821008;
    case 3u: goto L_08821010;
    case 4u: goto L_08821018;
    case 5u: goto L_08821020;
    case 6u: goto L_08821028;
    case 7u: goto L_08821030;
    case 8u: goto L_08821038;
    case 9u: goto L_08821040;
    case 10u: goto L_08821050;
    case 11u: goto L_0882106C;
    case 12u: goto L_08821084;
    case 13u: goto L_08821090;
    case 14u: goto L_08821098;
    case 15u: goto L_088210C0;
    case 16u: goto L_088210D0;
    case 17u: goto L_088210E0;
    case 18u: goto L_088210EC;
    case 19u: goto L_088210FC;
    case 20u: goto L_08821108;
    case 21u: goto L_08821110;
    case 22u: goto L_0882111C;
    case 23u: goto L_08821124;
    case 24u: goto L_08821128;
    case 25u: goto L_08821130;
    case 26u: goto L_08821148;
    case 27u: goto L_08821154;
    case 28u: goto L_08821230;
    case 29u: goto L_0882124C;
    case 30u: goto L_08821254;
    case 31u: goto L_0882125C;
    case 32u: goto L_0882126C;
    case 33u: goto L_088212D0;
    case 34u: goto L_088212D8;
    case 35u: goto L_088212DC;
    case 36u: goto L_08821308;
    case 37u: goto L_088213CC;
    case 38u: goto L_088213D8;
    case 39u: goto L_08821408;
    case 40u: goto L_08821418;
    case 41u: goto L_0882142C;
    case 42u: goto L_08821438;
    case 43u: goto L_08821444;
    case 44u: goto L_08821468;
    case 45u: goto L_088214C0;
    case 46u: goto L_088214F0;
    case 47u: goto L_08821500;
    case 48u: goto L_08821510;
    case 49u: goto L_0882151C;
    case 50u: goto L_08821578;
    case 51u: goto L_08821588;
    case 52u: goto L_0882159C;
    case 53u: goto L_088215D0;
    case 54u: goto L_088215D8;
    case 55u: goto L_088215F8;
    case 56u: goto L_08821604;
    case 57u: goto L_08821614;
    case 58u: goto L_08821618;
    case 59u: goto L_08821628;
    case 60u: goto L_08821654;
    case 61u: goto L_088216D4;
    case 62u: goto L_08821724;
    case 63u: goto L_0882174C;
    case 64u: goto L_08821788;
    case 65u: goto L_08821794;
    case 66u: goto L_0882179C;
    case 67u: goto L_088217A4;
    case 68u: goto L_088217C0;
    case 69u: goto L_088217C8;
    case 70u: goto L_088217E4;
    case 71u: goto L_08821800;
    case 72u: goto L_0882181C;
    case 73u: goto L_08821834;
    case 74u: goto L_08821848;
    case 75u: goto L_08821860;
    case 76u: goto L_08821864;
    case 77u: goto L_08821888;
    case 78u: goto L_0882188C;
    case 79u: goto L_088218A4;
    case 80u: goto L_088218AC;
    case 81u: goto L_088218C4;
    case 82u: goto L_088218C8;
    case 83u: goto L_088218EC;
    case 84u: goto L_088218F0;
    case 85u: goto L_08821904;
    case 86u: goto L_0882191C;
    case 87u: goto L_08821954;
    case 88u: goto L_08821958;
    case 89u: goto L_08821960;
    case 90u: goto L_0882197C;
    case 91u: goto L_08821994;
    case 92u: goto L_0882199C;
    case 93u: goto L_088219CC;
    case 94u: goto L_088219D4;
    case 95u: goto L_088219D8;
    case 96u: goto L_088219F4;
    case 97u: goto L_088219F8;
    case 98u: goto L_08821A40;
    case 99u: goto L_08821A50;
    case 100u: goto L_08821A64;
    case 101u: goto L_08821AA4;
    case 102u: goto L_08821AC0;
    case 103u: goto L_08821AC8;
    case 104u: goto L_08821AD8;
    case 105u: goto L_08821AE4;
    case 106u: goto L_08821B0C;
    case 107u: goto L_08821B18;
    case 108u: goto L_08821B38;
    case 109u: goto L_08821B48;
    case 110u: goto L_08821B64;
    case 111u: goto L_08821B80;
    case 112u: goto L_08821BA0;
    case 113u: goto L_08821BA8;
    case 114u: goto L_08821BB8;
    case 115u: goto L_08821BD4;
    case 116u: goto L_08821BF0;
    case 117u: goto L_08821C10;
    case 118u: goto L_08821C14;
    case 119u: goto L_08821C50;
    case 120u: goto L_08821C5C;
    case 121u: goto L_08821C80;
    case 122u: goto L_08821CA4;
    case 123u: goto L_08821CB0;
    case 124u: goto L_08821CD4;
    case 125u: goto L_08821CE4;
    case 126u: goto L_08821CEC;
    case 127u: goto L_08821CFC;
    case 128u: goto L_08821D1C;
    case 129u: goto L_08821D28;
    case 130u: goto L_08821D4C;
    case 131u: goto L_08821D5C;
    case 132u: goto L_08821D64;
    case 133u: goto L_08821D74;
    case 134u: goto L_08821D98;
    case 135u: goto L_08821DA4;
    case 136u: goto L_08821DC8;
    case 137u: goto L_08821DD4;
    case 138u: goto L_08821DE0;
    case 139u: goto L_08821DF4;
    case 140u: goto L_08821E04;
    case 141u: goto L_08821E0C;
    case 142u: goto L_08821E1C;
    case 143u: goto L_08821E44;
    case 144u: goto L_08821E50;
    case 145u: goto L_08821E74;
    case 146u: goto L_08821E80;
    case 147u: goto L_08821E8C;
    case 148u: goto L_08821EA0;
    case 149u: goto L_08821EB0;
    case 150u: goto L_08821EB8;
    case 151u: goto L_08821EC8;
    case 152u: goto L_08821EF0;
    case 153u: goto L_08821EFC;
    case 154u: goto L_08821F38;
    case 155u: goto L_08821F44;
    case 156u: goto L_08821F70;
    case 157u: goto L_08821F7C;
    case 158u: goto L_08821F84;
    case 159u: goto L_08821F90;
    case 160u: goto L_08821F94;
    case 161u: goto L_08821F9C;
    case 162u: goto L_08821FA8;
    case 163u: goto L_08821FB0;
    case 164u: goto L_08821FBC;
    case 165u: goto L_08821FC0;
    case 166u: goto L_08821FD4;
    case 167u: goto L_08821FE4;
    case 168u: goto L_08821FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08821000:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08821018;
      }
      goto L_08821008;
    }
L_08821008:
    aot_gpr[31] = (0x08821010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 32u, 0x088CC2F8u>(ctx, &aot_mem) && ctx.pc == 0x08821010u) goto L_08821010;
    return;
L_08821010:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821040;
      }
      goto L_08821018;
    }
L_08821018:
    aot_gpr[31] = (0x08821020u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 79u, 0x0881F5F4u>(ctx, &aot_mem) && ctx.pc == 0x08821020u) goto L_08821020;
    return;
L_08821020:
    aot_gpr[31] = (0x08821028u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 115u, 0x0881F9D4u>(ctx, &aot_mem) && ctx.pc == 0x08821028u) goto L_08821028;
    return;
L_08821028:
    aot_gpr[31] = (0x08821030u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 101u, 0x088206BCu>(ctx, &aot_mem) && ctx.pc == 0x08821030u) goto L_08821030;
    return;
L_08821030:
    aot_gpr[31] = (0x08821038u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 156u, 0x08820A90u>(ctx, &aot_mem) && ctx.pc == 0x08821038u) goto L_08821038;
    return;
L_08821038:
    aot_gpr[31] = (0x08821040u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 213u, 0x08820F34u>(ctx, &aot_mem) && ctx.pc == 0x08821040u) goto L_08821040;
    return;
L_08821040:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821050:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1116)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0882106Cu);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 162u, 0x0881EC98u>(ctx, &aot_mem) && ctx.pc == 0x0882106Cu) goto L_0882106C;
    return;
L_0882106C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(728)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08821084u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x08821084u) goto L_08821084;
    return;
L_08821084:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088210C0;
      }
      goto L_08821090;
    }
L_08821090:
    aot_gpr[31] = (0x08821098u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 81u, 0x088105E4u>(ctx, &aot_mem) && ctx.pc == 0x08821098u) goto L_08821098;
    return;
L_08821098:
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_gpr[9] = (16256u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x088210C0u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 124u, 0x0881D804u>(ctx, &aot_mem) && ctx.pc == 0x088210C0u) goto L_088210C0;
    return;
L_088210C0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088210D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088210E0u);
    // nop
    goto L_08821050;
L_088210E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088210EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088210FCu);
    // nop
    goto L_08821050;
L_088210FC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821108:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0882111C;
      }
      goto L_08821110;
    }
L_08821110:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (aot_gpr[6] ^ aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_0882111C;
L_0882111C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08821128;
      }
      goto L_08821124;
    }
L_08821124:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), 0u);
    goto L_08821128;
L_08821128:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821130:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08821154;
      }
      goto L_08821148;
    }
L_08821148:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08821154u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    goto L_08821108;
L_08821154:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(28), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(40)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(1124), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(1136), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(1132), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(1120), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(1128), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(1144), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(1140), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(1156), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(1160), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(1164), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(1168), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(1172), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(1176), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(1180), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(1184), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(1188), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(1372), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(1376), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(1148), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(1152), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821230:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1116)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0882124Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    goto L_08821130;
L_0882124C:
    aot_gpr[31] = (0x08821254u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 73u, 0x0881D4C4u>(ctx, &aot_mem) && ctx.pc == 0x08821254u) goto L_08821254;
    return;
L_08821254:
    aot_gpr[31] = (0x0882125Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08821050;
L_0882125C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882126C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-544));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(536), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(532), aot_gpr[23]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(488), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(492), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(508), aot_gpr[17]);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[17] = (0u | 1u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(484), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(496), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(500), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(504), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(512), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(516), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(520), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(524), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(528), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(540), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[7] = (2218u << 16u);
      if (branch_taken) {
          goto L_088212DC;
      }
      goto L_088212D0;
    }
L_088212D0:
    aot_gpr[31] = (0x088212D8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-4024)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 34u, 0x088242E4u>(ctx, &aot_mem) && ctx.pc == 0x088212D8u) goto L_088212D8;
    return;
L_088212D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    goto L_088212DC;
L_088212DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(484)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(160);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(176);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(192);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    aot_gpr[19] = (aot_gpr[23] | 0u);
    aot_gpr[18] = (aot_gpr[23] | 0u);
    goto L_08821308;
L_08821308:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(204)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[23] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[23] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[23] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[23] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[22] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<9u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[22] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<10u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[22] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<11u, 4u>(vfpu_value); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 4u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 40u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 44u, 4u);
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[23] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<13u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[23] + static_cast<std::uint32_t>(144);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[23] + static_cast<std::uint32_t>(160);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<15u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[23] + static_cast<std::uint32_t>(176);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[21] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[23] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[23] + static_cast<std::uint32_t>(144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<9u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[23] + static_cast<std::uint32_t>(160);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<10u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[23] + static_cast<std::uint32_t>(176);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<11u, 4u>(vfpu_value); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 4u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 40u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 44u, 4u);
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(416);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<13u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(432);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (0u | 0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(448);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[18] | 0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<15u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(464);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[17]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<13u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<15u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088213CC;
L_088213CC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(408)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08821408;
      }
      goto L_088213D8;
    }
L_088213D8:
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[17]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(408)));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[17]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(144);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_08821408;
L_08821408:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088213CC;
      }
      goto L_08821418;
    }
L_08821418:
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(352);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(368);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(384);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const bool branch_taken = aot_gpr[16] == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(400);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_08821444;
      }
      goto L_0882142C;
    }
L_0882142C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08821438u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 155u, 0x08922B84u>(ctx, &aot_mem) && ctx.pc == 0x08821438u) goto L_08821438;
    return;
L_08821438:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882142C;
      }
      goto L_08821444;
    }
L_08821444:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(352);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(368);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(384);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[20] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(400);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08821308;
      }
      goto L_08821468;
    }
L_08821468:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(416);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(432);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(448);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(464);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(480), static_cast<std::uint8_t>(aot_gpr[30]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(481))))));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<4u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<5u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[4] << 6u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<6u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[6] = (aot_gpr[23] + aot_gpr[4]);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<7u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(144);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(216));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(160);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[7] = (aot_gpr[30] | 0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(176);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(192);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088214C0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0255_entry, 255u, 9u, 0x08903160u>(ctx, &aot_mem) && ctx.pc == 0x088214C0u) goto L_088214C0;
    return;
L_088214C0:
    aot_gpr[22] = (0u | 0u);
    { const std::uint32_t vfpu_address = aot_gpr[23] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16230u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 26214u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[22] = (0u | 1u);
        goto L_088214F0;
    }
    goto L_088214F0;
L_088214F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(484)));
    aot_gpr[22] = (aot_gpr[22] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08821A40;
      }
      goto L_08821500;
    }
L_08821500:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x08821510u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0249_entry, 249u, 15u, 0x088FD148u>(ctx, &aot_mem) && ctx.pc == 0x08821510u) goto L_08821510;
    return;
L_08821510:
    aot_gpr[30] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0882151Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0248_entry, 248u, 144u, 0x088FCB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0882151Cu) goto L_0882151C;
    return;
L_0882151C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(208);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_gpr[18] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (15395u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 55050u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (17030u << 16u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[4] | 7341u);
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_08821588;
      }
      goto L_08821578;
    }
L_08821578:
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<21u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(224);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_08821588;
L_08821588:
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_088215D0;
      }
      goto L_0882159C;
    }
L_0882159C:
    aot_gpr[4] = (16250u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 57672u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(208);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(32)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7652)));
      if (branch_taken) {
          goto L_08821654;
      }
      goto L_088215D0;
    }
L_088215D0:
    aot_gpr[31] = (0x088215D8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0248_entry, 248u, 18u, 0x088FC160u>(ctx, &aot_mem) && ctx.pc == 0x088215D8u) goto L_088215D8;
    return;
L_088215D8:
    aot_gpr[4] = (16204u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((aot_fpr[0] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7652)));
      if (branch_taken) {
          goto L_08821628;
      }
      goto L_088215F8;
    }
L_088215F8:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(224);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08821614;
      }
      goto L_08821604;
    }
L_08821604:
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[24] = aot_fpr[24] + aot_fpr[13];
      if (branch_taken) {
          goto L_08821618;
      }
      goto L_08821614;
    }
L_08821614:
    aot_fpr[24] = aot_fpr[24] + aot_fpr[22];
    goto L_08821618;
L_08821618:
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(208);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_08821628;
L_08821628:
    aot_gpr[4] = (16268u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(208);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(208);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    goto L_08821654;
L_08821654:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(244), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(248), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(244)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(248)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[5]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(240);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
        goto L_08821724;
    }
    goto L_088216D4;
L_088216D4:
    aot_gpr[4] = (16192u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(336), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<48u>(aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(336);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 48u, 3u>();
    ctx.execute_vfpu_vocp(48u, 48u, 1u);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(288);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<22u, 22u, 48u, 3u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<22u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(288);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.execute_vfpu_vdot_ct<48u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<48u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 48u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(288);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    goto L_08821724;
L_08821724:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(324), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(328), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(304);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08821788;
      }
      goto L_0882174C;
    }
L_0882174C:
    aot_gpr[4] = (16576u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<48u>(aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[23] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<22u, 22u, 48u, 3u>();
    aot_gpr[4] = (16281u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<22u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(320);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<48u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 48u, 3u>();
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(304);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_08821834;
      }
      goto L_08821788;
    }
L_08821788:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882181C;
      }
      goto L_08821794;
    }
L_08821794:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08821800;
      }
      goto L_0882179C;
    }
L_0882179C:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088217C0;
      }
      goto L_088217A4;
    }
L_088217A4:
    aot_gpr[4] = (16448u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<48u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 48u, 3u>();
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(304);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_08821834;
      }
      goto L_088217C0;
    }
L_088217C0:
    { const bool branch_taken = aot_gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_088217E4;
      }
      goto L_088217C8;
    }
L_088217C8:
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<48u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 48u, 3u>();
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(304);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_08821834;
      }
      goto L_088217E4;
    }
L_088217E4:
    aot_gpr[4] = (16288u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<48u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 48u, 3u>();
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(304);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_08821834;
      }
      goto L_08821800;
    }
L_08821800:
    aot_gpr[4] = (16544u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<48u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 48u, 3u>();
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(304);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_08821834;
      }
      goto L_0882181C;
    }
L_0882181C:
    aot_gpr[4] = (16704u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<48u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 48u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(304);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_08821834;
L_08821834:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(240);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { const bool branch_taken = aot_gpr[22] == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(240);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_088218AC;
      }
      goto L_08821848;
    }
L_08821848:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(19363))))));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882188C;
      }
      goto L_08821860;
    }
L_08821860:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(3696));
    goto L_08821864;
L_08821864:
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(240);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(19363))))));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_08821864;
      }
      goto L_08821888;
    }
L_08821888:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(32)));
    goto L_0882188C;
L_0882188C:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(320);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(320);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    aot_gpr[31] = (0x088218A4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0254_entry, 254u, 132u, 0x08902F44u>(ctx, &aot_mem) && ctx.pc == 0x088218A4u) goto L_088218A4;
    return;
L_088218A4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088218F0;
      }
      goto L_088218AC;
    }
L_088218AC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(19363))))));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088218F0;
      }
      goto L_088218C4;
    }
L_088218C4:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(3696));
    goto L_088218C8;
L_088218C8:
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(240);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(19363))))));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_088218C8;
      }
      goto L_088218EC;
    }
L_088218EC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(32)));
    goto L_088218F0;
L_088218F0:
    aot_gpr[4] = (15779u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 55050u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[31] = (0x08821904u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0255_entry, 255u, 2u, 0x08903070u>(ctx, &aot_mem) && ctx.pc == 0x08821904u) goto L_08821904;
    return;
L_08821904:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(19363))))));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(3696));
      if (branch_taken) {
          goto L_08821958;
      }
      goto L_0882191C;
    }
L_0882191C:
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(19363))))));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_0882191C;
      }
      goto L_08821954;
    }
L_08821954:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(32)));
    goto L_08821958;
L_08821958:
    aot_gpr[31] = (0x08821960u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0253_entry, 253u, 11u, 0x089010F8u>(ctx, &aot_mem) && ctx.pc == 0x08821960u) goto L_08821960;
    return;
L_08821960:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(19416), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(408)));
    aot_gpr[31] = (0x0882197Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(176));
    if (rt.invoke_chained_direct<&recomp_unit_0257_entry, 257u, 60u, 0x08905760u>(ctx, &aot_mem) && ctx.pc == 0x0882197Cu) goto L_0882197C;
    return;
L_0882197C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(484)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(732)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_0882199C;
      }
      goto L_08821994;
    }
L_08821994:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(19408), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(32)));
    goto L_0882199C;
L_0882199C:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(208);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16752u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (16800u << 16u);
      if (branch_taken) {
          goto L_088219D8;
      }
      goto L_088219CC;
    }
L_088219CC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(19396), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
      if (branch_taken) {
          goto L_088219F8;
      }
      goto L_088219D4;
    }
L_088219D4:
    aot_gpr[5] = (16800u << 16u);
    goto L_088219D8;
L_088219D8:
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] | 61238u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[26] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_088219F4;
    }
    goto L_088219F4;
L_088219F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(19396), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    goto L_088219F8;
L_088219F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3000));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1)));
    aot_gpr[6] = (aot_gpr[6] << 24u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(19248));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 24u));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2))))));
    aot_gpr[7] = (aot_gpr[7] << 24u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 24u));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(3))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[31] = (0x08821A40u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0252_entry, 252u, 6u, 0x08900074u>(ctx, &aot_mem) && ctx.pc == 0x08821A40u) goto L_08821A40;
    return;
L_08821A40:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4024)));
    aot_gpr[31] = (0x08821A50u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 118u, 0x08823E08u>(ctx, &aot_mem) && ctx.pc == 0x08821A50u) goto L_08821A50;
    return;
L_08821A50:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(176));
    aot_gpr[31] = (0x08821A64u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0257_entry, 257u, 61u, 0x0890576Cu>(ctx, &aot_mem) && ctx.pc == 0x08821A64u) goto L_08821A64;
    return;
L_08821A64:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(488)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(492)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(496)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(500)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(504)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(508)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(512)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(516)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(520)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(524)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(528)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(532)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(536)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(540)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821AA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[9] = (aot_gpr[5] & 255u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08821AC0u);
    aot_gpr[5] = (0u | 0u);
    goto L_08821108;
L_08821AC0:
    aot_gpr[31] = (0x08821AC8u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 121u, 0x0881D7C8u>(ctx, &aot_mem) && ctx.pc == 0x08821AC8u) goto L_08821AC8;
    return;
L_08821AC8:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[5] = (aot_gpr[10] | 0u);
    aot_gpr[31] = (0x08821AD8u);
    aot_gpr[6] = (aot_gpr[9] | 0u);
    goto L_0882126C;
L_08821AD8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821AE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[2] = (aot_gpr[5] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[11] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 18u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08821B0Cu);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x08821B0Cu) goto L_08821B0C;
    return;
L_08821B0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821C50;
      }
      goto L_08821B18;
    }
L_08821B18:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (16236u << 16u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[15]));
    aot_gpr[4] = (aot_gpr[4] | 32296u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_08821BA8;
      }
      goto L_08821B38;
    }
L_08821B38:
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08821BA0;
      }
      goto L_08821B48;
    }
L_08821B48:
    aot_gpr[4] = (16067u << 16u);
    aot_gpr[5] = (aot_gpr[4] | 58406u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08821BA0;
      }
      goto L_08821B64;
    }
L_08821B64:
    aot_gpr[4] = (48835u << 16u);
    aot_gpr[5] = (aot_gpr[4] | 58406u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_08821BA0;
      }
      goto L_08821B80;
    }
L_08821B80:
    aot_gpr[4] = (49004u << 16u);
    aot_gpr[5] = (aot_gpr[4] | 32296u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (0u | 5u);
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[4] = (0u | 4u);
        goto L_08821BA0;
    }
    goto L_08821BA0;
L_08821BA0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (2214u << 16u);
      if (branch_taken) {
          goto L_08821C14;
      }
      goto L_08821BA8;
    }
L_08821BA8:
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08821C10;
      }
      goto L_08821BB8;
    }
L_08821BB8:
    aot_gpr[4] = (16067u << 16u);
    aot_gpr[5] = (aot_gpr[4] | 58406u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (0u | 8u);
      if (branch_taken) {
          goto L_08821C10;
      }
      goto L_08821BD4;
    }
L_08821BD4:
    aot_gpr[4] = (48835u << 16u);
    aot_gpr[5] = (aot_gpr[4] | 58406u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (0u | 7u);
      if (branch_taken) {
          goto L_08821C10;
      }
      goto L_08821BF0;
    }
L_08821BF0:
    aot_gpr[4] = (49004u << 16u);
    aot_gpr[5] = (aot_gpr[4] | 32296u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (0u | 5u);
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[4] = (0u | 6u);
        goto L_08821C10;
    }
    goto L_08821C10;
L_08821C10:
    aot_gpr[5] = (2214u << 16u);
    goto L_08821C14;
L_08821C14:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-14948)));
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_fpr[14] = aot_fpr[14] - aot_fpr[15];
    aot_gpr[4] = (15923u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 13107u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 18u);
    aot_gpr[4] = (aot_gpr[11] | 0u);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[31] = (0x08821C50u);
    aot_fpr[12] = aot_fpr[15] + aot_fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 72u, 0x0881F4FCu>(ctx, &aot_mem) && ctx.pc == 0x08821C50u) goto L_08821C50;
    return;
L_08821C50:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821C5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1364)));
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[5] = (0u | 45u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (0u | 12u);
        goto L_08821C80;
    }
    goto L_08821C80;
L_08821C80:
    aot_gpr[7] = (15923u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    aot_gpr[7] = (aot_gpr[7] | 13107u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (16256u << 16u);
    aot_gpr[5] = (0u | 20u);
    aot_gpr[31] = (0x08821CA4u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 72u, 0x0881F4FCu>(ctx, &aot_mem) && ctx.pc == 0x08821CA4u) goto L_08821CA4;
    return;
L_08821CA4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821CB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1364)));
    aot_gpr[7] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[7] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          goto L_08821CEC;
      }
      goto L_08821CD4;
    }
L_08821CD4:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 16u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (0u | 13u);
        goto L_08821CE4;
    }
    goto L_08821CE4;
L_08821CE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08821CFC;
      }
      goto L_08821CEC;
    }
L_08821CEC:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 17u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (0u | 14u);
        goto L_08821CFC;
    }
    goto L_08821CFC;
L_08821CFC:
    aot_gpr[7] = (2214u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-14944)));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[5] = (0u | 15u);
    aot_gpr[31] = (0x08821D1Cu);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 72u, 0x0881F4FCu>(ctx, &aot_mem) && ctx.pc == 0x08821D1Cu) goto L_08821D1C;
    return;
L_08821D1C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821D28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1364)));
    aot_gpr[7] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[7] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          goto L_08821D64;
      }
      goto L_08821D4C;
    }
L_08821D4C:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 16u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (0u | 13u);
        goto L_08821D5C;
    }
    goto L_08821D5C;
L_08821D5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08821D74;
      }
      goto L_08821D64;
    }
L_08821D64:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 17u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (0u | 14u);
        goto L_08821D74;
    }
    goto L_08821D74;
L_08821D74:
    aot_gpr[7] = (2214u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-14940)));
    aot_gpr[7] = (16153u << 16u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[7] = (aot_gpr[7] | 39322u);
    aot_gpr[5] = (0u | 15u);
    aot_gpr[31] = (0x08821D98u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 72u, 0x0881F4FCu>(ctx, &aot_mem) && ctx.pc == 0x08821D98u) goto L_08821D98;
    return;
L_08821D98:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821DA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[2] = (aot_gpr[5] & 255u);
    aot_gpr[11] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08821DC8u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x08821DC8u) goto L_08821DC8;
    return;
L_08821DC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821E44;
      }
      goto L_08821DD4;
    }
L_08821DD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(1364)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821E44;
      }
      goto L_08821DE0;
    }
L_08821DE0:
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (aot_gpr[2] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_08821E0C;
      }
      goto L_08821DF4;
    }
L_08821DF4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 25u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 23u);
        goto L_08821E04;
    }
    goto L_08821E04;
L_08821E04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08821E1C;
      }
      goto L_08821E0C;
    }
L_08821E0C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 31u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 23u);
        goto L_08821E1C;
    }
    goto L_08821E1C;
L_08821E1C:
    aot_gpr[7] = (15923u << 16u);
    aot_gpr[7] = (aot_gpr[7] | 13107u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (16256u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[11] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[31] = (0x08821E44u);
    aot_gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 72u, 0x0881F4FCu>(ctx, &aot_mem) && ctx.pc == 0x08821E44u) goto L_08821E44;
    return;
L_08821E44:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821E50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[2] = (aot_gpr[5] & 255u);
    aot_gpr[11] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08821E74u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x08821E74u) goto L_08821E74;
    return;
L_08821E74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821EF0;
      }
      goto L_08821E80;
    }
L_08821E80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(1364)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821EF0;
      }
      goto L_08821E8C;
    }
L_08821E8C:
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (aot_gpr[2] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_08821EB8;
      }
      goto L_08821EA0;
    }
L_08821EA0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 26u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 23u);
        goto L_08821EB0;
    }
    goto L_08821EB0;
L_08821EB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08821EC8;
      }
      goto L_08821EB8;
    }
L_08821EB8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 32u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 23u);
        goto L_08821EC8;
    }
    goto L_08821EC8;
L_08821EC8:
    aot_gpr[7] = (15923u << 16u);
    aot_gpr[7] = (aot_gpr[7] | 13107u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (16256u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[11] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[31] = (0x08821EF0u);
    aot_gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 72u, 0x0881F4FCu>(ctx, &aot_mem) && ctx.pc == 0x08821EF0u) goto L_08821EF0;
    return;
L_08821EF0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821EFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[11] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08821F38u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0881EB28u>(ctx, &aot_mem) && ctx.pc == 0x08821F38u) goto L_08821F38;
    return;
L_08821F38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 8u, 0x0882207Cu>(ctx, &aot_mem); return;
      }
      goto L_08821F44;
    }
L_08821F44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1364)));
    aot_gpr[11] = (aot_gpr[11] & 255u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[7] = (20224u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1104)));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[11] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_08821F84;
      }
      goto L_08821F70;
    }
L_08821F70:
    aot_gpr[18] = (0u | 21u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[18] = (0u | 18u);
        goto L_08821F7C;
    }
    goto L_08821F7C;
L_08821F7C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[11] & 255u);
      if (branch_taken) {
          goto L_08821F94;
      }
      goto L_08821F84;
    }
L_08821F84:
    aot_gpr[18] = (0u | 27u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[18] = (0u | 20u);
        goto L_08821F90;
    }
    goto L_08821F90;
L_08821F90:
    aot_gpr[5] = (aot_gpr[11] & 255u);
    goto L_08821F94;
L_08821F94:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_08821FB0;
      }
      goto L_08821F9C;
    }
L_08821F9C:
    aot_gpr[19] = (0u | 22u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[19] = (0u | 18u);
        goto L_08821FA8;
    }
    goto L_08821FA8;
L_08821FA8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_08821FC0;
      }
      goto L_08821FB0;
    }
L_08821FB0:
    aot_gpr[19] = (0u | 28u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[19] = (0u | 20u);
        goto L_08821FBC;
    }
    goto L_08821FBC;
L_08821FBC:
    aot_gpr[4] = (2218u << 16u);
    goto L_08821FC0;
L_08821FC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7516)));
    aot_gpr[20] = (aot_gpr[19] - aot_gpr[18]);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x08821FD4u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x08821FD4u) goto L_08821FD4;
    return;
L_08821FD4:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[20]);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[20]) >= 0;
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
      if (branch_taken) {
          goto L_08821FF0;
      }
      goto L_08821FE4;
    }
L_08821FE4:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    goto L_08821FF0;
L_08821FF0:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
        (void)rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 2u, 0x08822010u>(ctx, &aot_mem); return;
    }
    (void)rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 1u, 0x08822004u>(ctx, &aot_mem); return;
}

void recomp_unit_0029(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0029_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_29(Runtime &runtime) {
    runtime.register_generated_unit(29u, 0x08821000u, 4096u, &recomp_unit_0029, &recomp_unit_0029_entry);
    runtime.register_function(0x08821000u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821008u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821010u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821018u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821020u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821028u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821030u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821038u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821040u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821050u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0882106Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821084u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821090u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821098u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088210C0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088210D0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088210E0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088210ECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088210FCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821108u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821110u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0882111Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821124u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821128u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821130u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821148u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821154u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821230u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0882124Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821254u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0882125Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0882126Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088212D0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088212D8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088212DCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821308u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088213CCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088213D8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821408u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821418u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0882142Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821438u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821444u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821468u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088214C0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088214F0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821500u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821510u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0882151Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821578u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821588u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0882159Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088215D0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088215D8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088215F8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821604u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821614u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821618u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821628u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821654u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088216D4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821724u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0882174Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821788u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821794u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0882179Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088217A4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088217C0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088217C8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088217E4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821800u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0882181Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821834u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821848u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821860u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821864u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821888u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0882188Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088218A4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088218ACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088218C4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088218C8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088218ECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088218F0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821904u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0882191Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821954u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821958u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821960u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0882197Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821994u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0882199Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088219CCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088219D4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088219D8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088219F4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088219F8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821A40u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821A50u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821A64u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821AA4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821AC0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821AC8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821AD8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821AE4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821B0Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821B18u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821B38u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821B48u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821B64u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821B80u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821BA0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821BA8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821BB8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821BD4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821BF0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821C10u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821C14u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821C50u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821C5Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821C80u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821CA4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821CB0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821CD4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821CE4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821CECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821CFCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821D1Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821D28u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821D4Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821D5Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821D64u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821D74u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821D98u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821DA4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821DC8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821DD4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821DE0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821DF4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821E04u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821E0Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821E1Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821E44u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821E50u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821E74u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821E80u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821E8Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821EA0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821EB0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821EB8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821EC8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821EF0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821EFCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821F38u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821F44u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821F70u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821F7Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821F84u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821F90u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821F94u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821F9Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821FA8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821FB0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821FBCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821FC0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821FD4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821FE4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08821FF0u, &recomp_unit_0029, "recomp_unit_0029");
}
} // namespace psprecomp
