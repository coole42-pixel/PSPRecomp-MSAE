#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0301[1024] = {
    1, 2, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 6, 7, 0, 0, 8, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 12, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 16, 0, 17, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0,
    0, 0, 24, 0, 0, 0, 0, 25, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 30, 31, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0,
    0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 48,
    0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53,
    0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58, 0, 59, 0, 0, 0, 0, 60, 0, 0, 61, 0, 62, 0, 63, 0, 0,
    64, 0, 65, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0,
    0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0, 78,
    0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 81, 0, 0, 82, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 89, 0, 0,
    90, 0, 0, 91, 0, 0, 92, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 97, 0, 0,
    0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 103, 104, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0,
    108, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 113, 0, 0, 0, 0,
    0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 119, 0, 120, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 125, 0, 0,
    0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 137, 0, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 145, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 154, 0, 155, 0, 156, 0, 0, 0, 157, 0, 158, 0, 0, 0, 159, 0,
    0, 160, 0, 0, 0, 0, 161, 0, 0, 162, 0, 163, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 168,
};
void recomp_unit_0301_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08931000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0301[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08931000;
    case 2u: goto L_08931004;
    case 3u: goto L_08931020;
    case 4u: goto L_08931028;
    case 5u: goto L_08931038;
    case 6u: goto L_08931040;
    case 7u: goto L_08931044;
    case 8u: goto L_08931050;
    case 9u: goto L_08931054;
    case 10u: goto L_08931098;
    case 11u: goto L_089310A4;
    case 12u: goto L_089310AC;
    case 13u: goto L_089310B0;
    case 14u: goto L_089310D0;
    case 15u: goto L_089310DC;
    case 16u: goto L_089310E4;
    case 17u: goto L_089310EC;
    case 18u: goto L_08931148;
    case 19u: goto L_0893115C;
    case 20u: goto L_089311B0;
    case 21u: goto L_089311C8;
    case 22u: goto L_089311D0;
    case 23u: goto L_089311F8;
    case 24u: goto L_08931208;
    case 25u: goto L_0893121C;
    case 26u: goto L_08931220;
    case 27u: goto L_08931334;
    case 28u: goto L_08931348;
    case 29u: goto L_08931354;
    case 30u: goto L_08931360;
    case 31u: goto L_08931364;
    case 32u: goto L_08931398;
    case 33u: goto L_089313C8;
    case 34u: goto L_089313D4;
    case 35u: goto L_089313E4;
    case 36u: goto L_089313F8;
    case 37u: goto L_08931404;
    case 38u: goto L_08931410;
    case 39u: goto L_08931450;
    case 40u: goto L_08931484;
    case 41u: goto L_089314D8;
    case 42u: goto L_08931504;
    case 43u: goto L_08931528;
    case 44u: goto L_08931548;
    case 45u: goto L_08931550;
    case 46u: goto L_08931558;
    case 47u: goto L_08931568;
    case 48u: goto L_0893157C;
    case 49u: goto L_08931588;
    case 50u: goto L_089315C0;
    case 51u: goto L_089315CC;
    case 52u: goto L_089315F4;
    case 53u: goto L_089315FC;
    case 54u: goto L_0893161C;
    case 55u: goto L_08931624;
    case 56u: goto L_0893162C;
    case 57u: goto L_08931634;
    case 58u: goto L_0893163C;
    case 59u: goto L_08931644;
    case 60u: goto L_08931658;
    case 61u: goto L_08931664;
    case 62u: goto L_0893166C;
    case 63u: goto L_08931674;
    case 64u: goto L_08931680;
    case 65u: goto L_08931688;
    case 66u: goto L_0893168C;
    case 67u: goto L_08931694;
    case 68u: goto L_089316F8;
    case 69u: goto L_08931704;
    case 70u: goto L_08931728;
    case 71u: goto L_08931730;
    case 72u: goto L_08931738;
    case 73u: goto L_08931740;
    case 74u: goto L_08931748;
    case 75u: goto L_08931758;
    case 76u: goto L_08931760;
    case 77u: goto L_08931774;
    case 78u: goto L_0893177C;
    case 79u: goto L_0893178C;
    case 80u: goto L_08931798;
    case 81u: goto L_089317A8;
    case 82u: goto L_089317B4;
    case 83u: goto L_089317BC;
    case 84u: goto L_089317C4;
    case 85u: goto L_089317E4;
    case 86u: goto L_08931818;
    case 87u: goto L_08931860;
    case 88u: goto L_0893186C;
    case 89u: goto L_08931874;
    case 90u: goto L_08931880;
    case 91u: goto L_0893188C;
    case 92u: goto L_08931898;
    case 93u: goto L_089318A0;
    case 94u: goto L_089318B4;
    case 95u: goto L_089318D8;
    case 96u: goto L_089318E0;
    case 97u: goto L_089318F4;
    case 98u: goto L_08931908;
    case 99u: goto L_08931924;
    case 100u: goto L_0893192C;
    case 101u: goto L_0893194C;
    case 102u: goto L_08931958;
    case 103u: goto L_08931960;
    case 104u: goto L_08931964;
    case 105u: goto L_08931994;
    case 106u: goto L_089319B0;
    case 107u: goto L_089319E8;
    case 108u: goto L_08931A00;
    case 109u: goto L_08931A08;
    case 110u: goto L_08931A20;
    case 111u: goto L_08931A60;
    case 112u: goto L_08931A68;
    case 113u: goto L_08931A6C;
    case 114u: goto L_08931A8C;
    case 115u: goto L_08931AB4;
    case 116u: goto L_08931ABC;
    case 117u: goto L_08931AC4;
    case 118u: goto L_08931ACC;
    case 119u: goto L_08931B0C;
    case 120u: goto L_08931B14;
    case 121u: goto L_08931B18;
    case 122u: goto L_08931B30;
    case 123u: goto L_08931B58;
    case 124u: goto L_08931B6C;
    case 125u: goto L_08931B74;
    case 126u: goto L_08931B88;
    case 127u: goto L_08931BC4;
    case 128u: goto L_08931BCC;
    case 129u: goto L_08931BD0;
    case 130u: goto L_08931BE8;
    case 131u: goto L_08931C24;
    case 132u: goto L_08931C2C;
    case 133u: goto L_08931C34;
    case 134u: goto L_08931C3C;
    case 135u: goto L_08931CE4;
    case 136u: goto L_08931CEC;
    case 137u: goto L_08931CF0;
    case 138u: goto L_08931D08;
    case 139u: goto L_08931D30;
    case 140u: goto L_08931D38;
    case 141u: goto L_08931D40;
    case 142u: goto L_08931D48;
    case 143u: goto L_08931E6C;
    case 144u: goto L_08931E74;
    case 145u: goto L_08931E78;
    case 146u: goto L_08931E90;
    case 147u: goto L_08931EA8;
    case 148u: goto L_08931EC0;
    case 149u: goto L_08931ECC;
    case 150u: goto L_08931ED8;
    case 151u: goto L_08931F0C;
    case 152u: goto L_08931F20;
    case 153u: goto L_08931F34;
    case 154u: goto L_08931F40;
    case 155u: goto L_08931F48;
    case 156u: goto L_08931F50;
    case 157u: goto L_08931F60;
    case 158u: goto L_08931F68;
    case 159u: goto L_08931F78;
    case 160u: goto L_08931F84;
    case 161u: goto L_08931F98;
    case 162u: goto L_08931FA4;
    case 163u: goto L_08931FAC;
    case 164u: goto L_08931FB4;
    case 165u: goto L_08931FC0;
    case 166u: goto L_08931FD8;
    case 167u: goto L_08931FE4;
    case 168u: goto L_08931FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08931000:
    aot_gpr[6] = (0u | 512u);
    goto L_08931004;
L_08931004:
    aot_gpr[7] = (aot_gpr[22] + static_cast<std::uint32_t>(7));
    aot_gpr[11] = (0u + static_cast<std::uint32_t>(-8));
    aot_gpr[22] = (aot_gpr[7] & aot_gpr[11]);
    aot_gpr[22] = (aot_gpr[22] & 65535u);
    aot_gpr[7] = (0u | 8u);
    if (aot_gpr[17] == aot_gpr[16]) {
    aot_gpr[7] = (0u | 4u);
        goto L_08931020;
    }
    goto L_08931020;
L_08931020:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[16];
    aot_gpr[21] = (0u | 64u);
      if (branch_taken) {
          goto L_08931044;
      }
      goto L_08931028;
    }
L_08931028:
    aot_gpr[21] = (0u | 32u);
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[19]) < 33 ? 1u : 0u);
    if (aot_gpr[11] != 0u) {
    aot_gpr[21] = (aot_gpr[19] | 0u);
        goto L_08931038;
    }
    goto L_08931038;
L_08931038:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[7]);
      if (branch_taken) {
          goto L_08931054;
      }
      goto L_08931040;
    }
L_08931040:
    aot_gpr[21] = (0u | 64u);
    goto L_08931044;
L_08931044:
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[19]) < 65 ? 1u : 0u);
    if (aot_gpr[11] != 0u) {
    aot_gpr[21] = (aot_gpr[19] | 0u);
        goto L_08931050;
    }
    goto L_08931050;
L_08931050:
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[7]);
    goto L_08931054;
L_08931054:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[19])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[6] & 65535u);
    aot_gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[21])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[23])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    aot_gpr[5] = (ctx.lo);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089310A4;
      }
      goto L_08931098;
    }
L_08931098:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[21] = (ctx.lo);
    aot_gpr[21] = (aot_gpr[21] & 65535u);
    goto L_089310A4;
L_089310A4:
    { const bool branch_taken = aot_gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089310B0;
      }
      goto L_089310AC;
    }
L_089310AC:
    aot_gpr[21] = (aot_gpr[30] | 0u);
    goto L_089310B0;
L_089310B0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[12])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (static_cast<std::uint32_t>(std::countl_zero(aot_gpr[21])));
    aot_gpr[6] = (aot_gpr[20] - aot_gpr[6]);
    aot_gpr[21] = (aot_gpr[30] << (aot_gpr[6] & 31u));
    aot_gpr[6] = (ctx.lo);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[21] = (aot_gpr[21] & 65535u);
      if (branch_taken) {
          goto L_089310DC;
      }
      goto L_089310D0;
    }
L_089310D0:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[4] = (ctx.lo);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    goto L_089310DC;
L_089310DC:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(std::countl_zero(aot_gpr[4])));
      if (branch_taken) {
          goto L_089310EC;
      }
      goto L_089310E4;
    }
L_089310E4:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(std::countl_zero(aot_gpr[4])));
    goto L_089310EC;
L_089310EC:
    aot_gpr[4] = (aot_gpr[20] - aot_gpr[4]);
    aot_gpr[30] = (aot_gpr[30] << (aot_gpr[4] & 31u));
    aot_gpr[30] = (aot_gpr[30] & 65535u);
    aot_gpr[4] = (aot_gpr[12] + aot_gpr[30]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[19] + aot_gpr[21]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[30]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (ctx.lo);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[31] = (0x08931148u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 61u, 0x08930540u>(ctx, &aot_mem) && ctx.pc == 0x08931148u) goto L_08931148;
    return;
L_08931148:
    aot_gpr[5] = (0u | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[12]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08931348;
      }
      goto L_0893115C;
    }
L_0893115C:
    aot_gpr[4] = (aot_gpr[10] << 8u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[19]);
    aot_gpr[7] = (47104u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[12]);
    aot_gpr[16] = (aot_gpr[4] | aot_gpr[7]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    aot_gpr[4] = (48896u << 16u);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[10] = (256u << 16u);
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[15] = (4736u << 16u);
    aot_gpr[14] = (1030u << 16u);
    aot_gpr[16] = (aot_gpr[16] | aot_gpr[3]);
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(-1));
    aot_gpr[15] = (aot_gpr[15] + static_cast<std::uint32_t>(387));
    aot_gpr[14] = (aot_gpr[14] + static_cast<std::uint32_t>(2));
    aot_gpr[18] = (40960u << 16u);
    aot_gpr[17] = (43008u << 16u);
    aot_gpr[31] = (51968u << 16u);
    aot_gpr[25] = (4096u << 16u);
    aot_gpr[24] = (256u << 16u);
    goto L_089311B0;
L_089311B0:
    aot_gpr[20] = (aot_gpr[5] + aot_gpr[30]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[20] & 65535u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[20]) ? 1u : 0u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_089311D0;
    }
    goto L_089311C8;
L_089311C8:
    aot_gpr[20] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089311D0;
L_089311D0:
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[19]) ? 1u : 0u);
    aot_gpr[8] = (ctx.lo);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[14] = aot_fpr[14] / aot_fpr[13];
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931334;
      }
      goto L_089311F8;
    }
L_089311F8:
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[19] = __builtin_bit_cast(float, aot_gpr[20]);
    aot_fpr[17] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[17])));
    aot_fpr[19] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[19])));
    goto L_08931208;
L_08931208:
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[21]);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931220;
      }
      goto L_0893121C;
    }
L_0893121C:
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_08931220;
L_08931220:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[23])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[1] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (ctx.lo);
    aot_fpr[2] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[2] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[2])));
    aot_fpr[2] = aot_fpr[2] / aot_fpr[16];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    aot_gpr[4] = (aot_gpr[11] & aot_gpr[10]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    aot_gpr[7] = (aot_gpr[11] >> 24u);
    aot_gpr[7] = (aot_gpr[7] & 15u);
    aot_gpr[7] = (aot_gpr[7] << 16u);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[17]);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[22]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[0])));
    aot_fpr[1] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[1])));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[1]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[6] >> 24u);
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[7] & 15u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 16u);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[25]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[6] & aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[2]));
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08931208;
      }
      goto L_08931334;
    }
L_08931334:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_089311B0;
      }
      goto L_08931348;
    }
L_08931348:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931364;
      }
      goto L_08931354;
    }
L_08931354:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[31] = (0x08931360u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x08931360u) goto L_08931360;
    return;
L_08931360:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_08931364;
L_08931364:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08931398:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(-29122)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931504;
      }
      goto L_089313C8;
    }
L_089313C8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x089313D4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29088)));
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 16u, 0x08940218u>(ctx, &aot_mem) && ctx.pc == 0x089313D4u) goto L_089313D4;
    return;
L_089313D4:
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29092)));
    aot_gpr[31] = (0x089313E4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 19u, 0x08940244u>(ctx, &aot_mem) && ctx.pc == 0x089313E4u) goto L_089313E4;
    return;
L_089313E4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28792)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[31] = (0x089313F8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29084)));
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 55u, 0x08945B58u>(ctx, &aot_mem) && ctx.pc == 0x089313F8u) goto L_089313F8;
    return;
L_089313F8:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x08931404u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 50u, 0x0893F5DCu>(ctx, &aot_mem) && ctx.pc == 0x08931404u) goto L_08931404;
    return;
L_08931404:
    aot_gpr[4] = (0u | 1808u);
    aot_gpr[31] = (0x08931410u);
    aot_gpr[5] = (0u | 1912u);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 108u, 0x08930A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08931410u) goto L_08931410;
    return;
L_08931410:
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    aot_gpr[5] = (aot_gpr[5] & 3u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[7] = (~(aot_gpr[5] | 0u));
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(-28816)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[7]);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x08931450u);
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x08931450u) goto L_08931450;
    return;
L_08931450:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7912)));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29112));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-29104));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08931484u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x08931484u) goto L_08931484;
    return;
L_08931484:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29092)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(36)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (aot_gpr[11] | 0u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(24)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(26)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[13]);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[10] = (aot_gpr[10] & 65535u);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089314D8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[14]);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 167u, 0x08930EF4u>(ctx, &aot_mem) && ctx.pc == 0x089314D8u) goto L_089314D8;
    return;
L_089314D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 3u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(-29122), static_cast<std::uint8_t>(0u));
    goto L_08931504;
L_08931504:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08931528:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-29122)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931550;
      }
      goto L_08931548;
    }
L_08931548:
    aot_gpr[31] = (0x08931550u);
    // nop
    goto L_08931398;
L_08931550:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931558;
      }
      goto L_08931558;
    }
L_08931558:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08931568:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0893157Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 182u, 0x08A47E30u>(ctx, &aot_mem) && ctx.pc == 0x0893157Cu) goto L_0893157C;
    return;
L_0893157C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08931588:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x089315C0u);
    aot_gpr[16] = (aot_gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 171u, 0x08A47D8Cu>(ctx, &aot_mem) && ctx.pc == 0x089315C0u) goto L_089315C0;
    return;
L_089315C0:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x089315CCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 182u, 0x08A47E30u>(ctx, &aot_mem) && ctx.pc == 0x089315CCu) goto L_089315CC;
    return;
L_089315CC:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[17] = (2219u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(21337), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[18] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-29076), 0u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(21304));
    aot_gpr[23] = (2219u << 16u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[30] = (2219u << 16u);
      if (branch_taken) {
          goto L_0893168C;
      }
      goto L_089315F4;
    }
L_089315F4:
    aot_gpr[31] = (0x089315FCu);
    // nop
    ctx.pc = 0x08A5AF44u;
    return;
L_089315FC:
    aot_gpr[20] = (2219u << 16u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(21376)));
    aot_gpr[22] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-29080)));
    aot_gpr[21] = (aot_gpr[2] - aot_gpr[21]);
    aot_gpr[5] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08931658;
      }
      goto L_0893161C;
    }
L_0893161C:
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08931634;
      }
      goto L_08931624;
    }
L_08931624:
    aot_gpr[31] = (0x0893162Cu);
    // nop
    ctx.pc = 0x08A5AF34u;
    return;
L_0893162C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893163C;
      }
      goto L_08931634;
    }
L_08931634:
    aot_gpr[31] = (0x0893163Cu);
    aot_gpr[4] = (0u | 10u);
    ctx.pc = 0x08A5B094u;
    return;
L_0893163C:
    aot_gpr[31] = (0x08931644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 153u, 0x08943ACCu>(ctx, &aot_mem) && ctx.pc == 0x08931644u) goto L_08931644;
    return;
L_08931644:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-29080)));
    aot_gpr[4] = (aot_gpr[21] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-29076), aot_gpr[4]);
      if (branch_taken) {
          goto L_08931680;
      }
      goto L_08931658;
    }
L_08931658:
    aot_gpr[21] = (aot_gpr[4] - aot_gpr[21]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[21]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08931680;
      }
      goto L_08931664;
    }
L_08931664:
    aot_gpr[31] = (0x0893166Cu);
    // nop
    ctx.pc = 0x08A5AF34u;
    return;
L_0893166C:
    aot_gpr[31] = (0x08931674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 153u, 0x08943ACCu>(ctx, &aot_mem) && ctx.pc == 0x08931674u) goto L_08931674;
    return;
L_08931674:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[21]) > 0;
    // nop
      if (branch_taken) {
          goto L_08931664;
      }
      goto L_08931680;
    }
L_08931680:
    aot_gpr[31] = (0x08931688u);
    // nop
    ctx.pc = 0x08A5AF44u;
    return;
L_08931688:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(21376), aot_gpr[2]);
    goto L_0893168C;
L_0893168C:
    aot_gpr[31] = (0x08931694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 132u, 0x08A47944u>(ctx, &aot_mem) && ctx.pc == 0x08931694u) goto L_08931694;
    return;
L_08931694:
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(21380), aot_gpr[2]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7912)));
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(7920));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(7912), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] ^ 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(21328), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-22112), aot_gpr[4]);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-12896)));
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[31] = (0x089316F8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(21332), aot_gpr[4]);
    ctx.pc = 0x08A5AFA4u;
    return;
L_089316F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(21338)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(21316)));
      if (branch_taken) {
          goto L_089317A8;
      }
      goto L_08931704;
    }
L_08931704:
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(21288));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(21296)));
    aot_gpr[31] = (0x08931728u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 64u, 0x08A473A8u>(ctx, &aot_mem) && ctx.pc == 0x08931728u) goto L_08931728;
    return;
L_08931728:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08931774;
      }
      goto L_08931730;
    }
L_08931730:
    aot_gpr[31] = (0x08931738u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 18u, 0x08A482D0u>(ctx, &aot_mem) && ctx.pc == 0x08931738u) goto L_08931738;
    return;
L_08931738:
    aot_gpr[31] = (0x08931740u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 7u, 0x08A48138u>(ctx, &aot_mem) && ctx.pc == 0x08931740u) goto L_08931740;
    return;
L_08931740:
    aot_gpr[31] = (0x08931748u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 6u, 0x08A48128u>(ctx, &aot_mem) && ctx.pc == 0x08931748u) goto L_08931748;
    return;
L_08931748:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-6980)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931760;
      }
      goto L_08931758;
    }
L_08931758:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-6980), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08931774;
      }
      goto L_08931760;
    }
L_08931760:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(21316)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[31] = (0x08931774u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 114u, 0x08A477B4u>(ctx, &aot_mem) && ctx.pc == 0x08931774u) goto L_08931774;
    return;
L_08931774:
    aot_gpr[31] = (0x0893177Cu);
    aot_gpr[4] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 98u, 0x08A47610u>(ctx, &aot_mem) && ctx.pc == 0x0893177Cu) goto L_0893177C;
    return;
L_0893177C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2244)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931798;
      }
      goto L_0893178C;
    }
L_0893178C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08931798u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 182u, 0x08A47E30u>(ctx, &aot_mem) && ctx.pc == 0x08931798u) goto L_08931798;
    return;
L_08931798:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(21316)));
    aot_gpr[23] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (aot_gpr[23] & 1u);
      if (branch_taken) {
          goto L_089317B4;
      }
      goto L_089317A8;
    }
L_089317A8:
    PSPRECOMP_AOT_STORE8(aot_gpr[23] + static_cast<std::uint32_t>(21338), static_cast<std::uint8_t>(0u));
    aot_gpr[23] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[23] = (aot_gpr[23] & 1u);
    goto L_089317B4;
L_089317B4:
    aot_gpr[31] = (0x089317BCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(21316), aot_gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 55u, 0x089304E4u>(ctx, &aot_mem) && ctx.pc == 0x089317BCu) goto L_089317BC;
    return;
L_089317BC:
    aot_gpr[31] = (0x089317C4u);
    // nop
    ctx.pc = 0x08A5AFA4u;
    return;
L_089317C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(21316)));
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21312)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089317E4u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 64u, 0x08A473A8u>(ctx, &aot_mem) && ctx.pc == 0x089317E4u) goto L_089317E4;
    return;
L_089317E4:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(21337), static_cast<std::uint8_t>(0u));
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
L_08931818:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[22]);
    aot_gpr[16] = (aot_gpr[4] & 255u);
    aot_gpr[22] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[30]);
    aot_gpr[17] = (aot_gpr[6] & 255u);
    aot_gpr[30] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[23] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_0893186C;
      }
      goto L_08931860;
    }
L_08931860:
    aot_gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08931880;
      }
      goto L_0893186C;
    }
L_0893186C:
    aot_gpr[31] = (0x08931874u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x08931874u) goto L_08931874;
    return;
L_08931874:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08931880;
L_08931880:
    aot_gpr[4] = (aot_gpr[16] | aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893194C;
      }
      goto L_0893188C;
    }
L_0893188C:
    aot_gpr[4] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28792)));
      if (branch_taken) {
          goto L_089318E0;
      }
      goto L_08931898;
    }
L_08931898:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089318E0;
      }
      goto L_089318A0;
    }
L_089318A0:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (0x089318B4u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 54u, 0x08945B34u>(ctx, &aot_mem) && ctx.pc == 0x089318B4u) goto L_089318B4;
    return;
L_089318B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (aot_gpr[30] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[23] | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[10] = (0u | 1u);
    aot_gpr[31] = (0x089318D8u);
    aot_gpr[11] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 62u, 0x089305B0u>(ctx, &aot_mem) && ctx.pc == 0x089318D8u) goto L_089318D8;
    return;
L_089318D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893194C;
      }
      goto L_089318E0;
    }
L_089318E0:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (0x089318F4u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 54u, 0x08945B34u>(ctx, &aot_mem) && ctx.pc == 0x089318F4u) goto L_089318F4;
    return;
L_089318F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_0893192C;
      }
      goto L_08931908;
    }
L_08931908:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (aot_gpr[23] | 0u);
    aot_gpr[11] = (0u | 1u);
    aot_gpr[31] = (0x08931924u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 79u, 0x08930778u>(ctx, &aot_mem) && ctx.pc == 0x08931924u) goto L_08931924;
    return;
L_08931924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893194C;
      }
      goto L_0893192C;
    }
L_0893192C:
    aot_gpr[2] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (aot_gpr[23] | 0u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[31] = (0x0893194Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 79u, 0x08930778u>(ctx, &aot_mem) && ctx.pc == 0x0893194Cu) goto L_0893194C;
    return;
L_0893194C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931964;
      }
      goto L_08931958;
    }
L_08931958:
    aot_gpr[31] = (0x08931960u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x08931960u) goto L_08931960;
    return;
L_08931960:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_08931964;
L_08931964:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08931994:
    aot_gpr[6] = (2219u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21320)));
    aot_gpr[7] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(21324)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089319B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[18] = (19456u << 16u);
      if (branch_taken) {
          goto L_08931A00;
      }
      goto L_089319E8;
    }
L_089319E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(21320)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] << 4u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] | aot_gpr[18]);
      if (branch_taken) {
          goto L_08931A20;
      }
      goto L_08931A00;
    }
L_08931A00:
    aot_gpr[31] = (0x08931A08u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x08931A08u) goto L_08931A08;
    return;
L_08931A08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(21320)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] << 4u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[17] = (aot_gpr[17] | aot_gpr[18]);
    goto L_08931A20;
L_08931A20:
    aot_gpr[5] = (aot_gpr[20] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (2219u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(21324)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[6] << 4u);
    aot_gpr[8] = (19712u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08931A6C;
      }
      goto L_08931A60;
    }
L_08931A60:
    aot_gpr[31] = (0x08931A68u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x08931A68u) goto L_08931A68;
    return;
L_08931A68:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_08931A6C;
L_08931A6C:
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
L_08931A8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08931ABC;
      }
      goto L_08931AB4;
    }
L_08931AB4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08931ACC;
      }
      goto L_08931ABC;
    }
L_08931ABC:
    aot_gpr[31] = (0x08931AC4u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x08931AC4u) goto L_08931AC4;
    return;
L_08931AC4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    goto L_08931ACC;
L_08931ACC:
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (aot_gpr[17] << 4u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (19456u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[16] << 4u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (19712u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08931B18;
      }
      goto L_08931B0C;
    }
L_08931B0C:
    aot_gpr[31] = (0x08931B14u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x08931B14u) goto L_08931B14;
    return;
L_08931B14:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_08931B18;
L_08931B18:
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
L_08931B30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (19456u << 16u);
      if (branch_taken) {
          goto L_08931B6C;
      }
      goto L_08931B58;
    }
L_08931B58:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(21320)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[5] << 4u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] | aot_gpr[16]);
      if (branch_taken) {
          goto L_08931B88;
      }
      goto L_08931B6C;
    }
L_08931B6C:
    aot_gpr[31] = (0x08931B74u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x08931B74u) goto L_08931B74;
    return;
L_08931B74:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(21320)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[5] << 4u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[17] = (aot_gpr[17] | aot_gpr[16]);
    goto L_08931B88;
L_08931B88:
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (19712u << 16u);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (2219u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(21324)));
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] << 4u);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_08931BD0;
      }
      goto L_08931BC4;
    }
L_08931BC4:
    aot_gpr[31] = (0x08931BCCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x08931BCCu) goto L_08931BCC;
    return;
L_08931BCC:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_08931BD0;
L_08931BD0:
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
L_08931BE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] & 65535u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2120), static_cast<std::uint16_t>(aot_gpr[18]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 65535u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2122), static_cast<std::uint16_t>(aot_gpr[17]));
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931C2C;
      }
      goto L_08931C24;
    }
L_08931C24:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08931C3C;
      }
      goto L_08931C2C;
    }
L_08931C2C:
    aot_gpr[31] = (0x08931C34u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x08931C34u) goto L_08931C34;
    return;
L_08931C34:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    goto L_08931C3C;
L_08931C3C:
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[18]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[18]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[6] = (aot_gpr[6] >> 31u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (17408u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] >> 8u);
    aot_gpr[7] = (aot_gpr[8] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] >> 8u);
    aot_gpr[8] = (18176u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (54784u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[17] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (55040u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[18] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_08931CF0;
      }
      goto L_08931CE4;
    }
L_08931CE4:
    aot_gpr[31] = (0x08931CECu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x08931CECu) goto L_08931CEC;
    return;
L_08931CEC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_08931CF0;
L_08931CF0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08931D08:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08931D38;
      }
      goto L_08931D30;
    }
L_08931D30:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08931D48;
      }
      goto L_08931D38;
    }
L_08931D38:
    aot_gpr[31] = (0x08931D40u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x08931D40u) goto L_08931D40;
    return;
L_08931D40:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    goto L_08931D48;
L_08931D48:
    aot_gpr[6] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-22112), aot_gpr[17]);
    aot_gpr[7] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12896), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(-29052));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (53760u << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[10]);
    aot_gpr[10] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-22112)));
    aot_gpr[10] = (256u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(24)));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[10]);
    aot_gpr[11] = (39936u << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[11]);
    aot_gpr[11] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-22112)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(45)));
    aot_gpr[8] = (aot_gpr[8] << 3u);
    aot_gpr[9] = (aot_gpr[9] & 255u);
    aot_gpr[9] = (aot_gpr[9] & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[9] = (40192u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[9] = (40448u << 16u);
    aot_gpr[11] = (40704u << 16u);
    aot_gpr[2] = (ctx.lo);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-12896)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[10]);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-12896)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(45)));
    aot_gpr[7] = (aot_gpr[7] << 3u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[8] = (aot_gpr[8] & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[6] << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[11]);
    aot_gpr[5] = (ctx.lo);
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_08931E78;
      }
      goto L_08931E6C;
    }
L_08931E6C:
    aot_gpr[31] = (0x08931E74u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x08931E74u) goto L_08931E74;
    return;
L_08931E74:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_08931E78;
L_08931E78:
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
L_08931E90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08931EA8u);
    // nop
    ctx.pc = 0x08A5AF1Cu;
    return;
L_08931EA8:
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21380)));
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(21360)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    aot_gpr[6] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08931ECC;
      }
      goto L_08931EC0;
    }
L_08931EC0:
    aot_gpr[4] = (2219u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(21364)));
      if (branch_taken) {
          goto L_08931ECC;
      }
      goto L_08931ECC;
    }
L_08931ECC:
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[31] = (0x08931ED8u);
    aot_gpr[17] = (aot_gpr[5] + aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 17u, 0x08A482B0u>(ctx, &aot_mem) && ctx.pc == 0x08931ED8u) goto L_08931ED8;
    return;
L_08931ED8:
    aot_gpr[2] = (0u | 512u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 480u);
    aot_gpr[8] = (0u | 272u);
    aot_gpr[9] = (0u | 512u);
    aot_gpr[10] = (aot_gpr[16] | 0u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[31] = (0x08931F0Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 2u, 0x08A4802Cu>(ctx, &aot_mem) && ctx.pc == 0x08931F0Cu) goto L_08931F0C;
    return;
L_08931F0C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08931F20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[6] = (aot_gpr[7] & 255u);
      if (branch_taken) {
          goto L_08931F40;
      }
      goto L_08931F34;
    }
L_08931F34:
    aot_gpr[7] = (2216u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-29308)));
      if (branch_taken) {
          goto L_08931F48;
      }
      goto L_08931F40;
    }
L_08931F40:
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-29060)));
    goto L_08931F48;
L_08931F48:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931F68;
      }
      goto L_08931F50;
    }
L_08931F50:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08931F60u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 180u, 0x0891CD38u>(ctx, &aot_mem) && ctx.pc == 0x08931F60u) goto L_08931F60;
    return;
L_08931F60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08931F78;
      }
      goto L_08931F68;
    }
L_08931F68:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08931F78u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x08931F78u) goto L_08931F78;
    return;
L_08931F78:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08931F84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08931FA4;
      }
      goto L_08931F98;
    }
L_08931F98:
    aot_gpr[4] = (2216u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
      if (branch_taken) {
          goto L_08931FAC;
      }
      goto L_08931FA4;
    }
L_08931FA4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29060)));
    goto L_08931FAC;
L_08931FAC:
    aot_gpr[31] = (0x08931FB4u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08931FB4u) goto L_08931FB4;
    return;
L_08931FB4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08931FC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29060)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08931FD8u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 33u, 0x0891D264u>(ctx, &aot_mem) && ctx.pc == 0x08931FD8u) goto L_08931FD8;
    return;
L_08931FD8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08931FE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08931FFCu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 114u, 0x08A48CBCu>(ctx, &aot_mem) && ctx.pc == 0x08931FFCu) goto L_08931FFC;
    return;
L_08931FFC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08932000u; return;
}

void recomp_unit_0301(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0301_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_301(Runtime &runtime) {
    runtime.register_generated_unit(301u, 0x08931000u, 4096u, &recomp_unit_0301, &recomp_unit_0301_entry);
    runtime.register_function(0x08931000u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931004u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931020u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931028u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931038u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931040u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931044u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931050u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931054u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931098u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089310A4u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089310ACu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089310B0u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089310D0u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089310DCu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089310E4u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089310ECu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931148u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x0893115Cu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089311B0u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089311C8u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089311D0u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089311F8u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931208u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x0893121Cu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931220u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931334u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931348u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931354u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931360u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931364u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931398u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089313C8u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089313D4u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089313E4u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089313F8u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931404u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931410u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931450u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931484u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089314D8u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931504u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931528u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931548u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931550u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931558u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931568u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x0893157Cu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931588u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089315C0u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089315CCu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089315F4u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089315FCu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x0893161Cu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931624u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x0893162Cu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931634u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x0893163Cu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931644u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931658u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931664u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x0893166Cu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931674u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931680u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931688u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x0893168Cu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931694u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089316F8u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931704u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931728u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931730u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931738u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931740u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931748u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931758u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931760u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931774u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x0893177Cu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x0893178Cu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931798u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089317A8u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089317B4u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089317BCu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089317C4u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089317E4u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931818u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931860u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x0893186Cu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931874u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931880u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x0893188Cu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931898u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089318A0u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089318B4u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089318D8u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089318E0u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089318F4u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931908u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931924u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x0893192Cu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x0893194Cu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931958u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931960u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931964u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931994u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089319B0u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x089319E8u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931A00u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931A08u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931A20u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931A60u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931A68u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931A6Cu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931A8Cu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931AB4u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931ABCu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931AC4u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931ACCu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931B0Cu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931B14u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931B18u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931B30u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931B58u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931B6Cu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931B74u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931B88u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931BC4u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931BCCu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931BD0u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931BE8u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931C24u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931C2Cu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931C34u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931C3Cu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931CE4u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931CECu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931CF0u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931D08u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931D30u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931D38u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931D40u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931D48u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931E6Cu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931E74u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931E78u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931E90u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931EA8u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931EC0u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931ECCu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931ED8u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931F0Cu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931F20u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931F34u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931F40u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931F48u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931F50u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931F60u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931F68u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931F78u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931F84u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931F98u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931FA4u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931FACu, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931FB4u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931FC0u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931FD8u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931FE4u, &recomp_unit_0301, "recomp_unit_0301");
    runtime.register_function(0x08931FFCu, &recomp_unit_0301, "recomp_unit_0301");
}
} // namespace psprecomp
