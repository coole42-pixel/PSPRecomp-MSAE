#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0071[1022] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 20, 0, 0, 21, 0, 22, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 27,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32,
    0, 0, 33, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0,
    0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0,
    0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0,
    0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0,
    0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86,
    0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 96,
    0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0,
    111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 120, 0, 0,
    0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 130, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 137, 0, 138, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147,
    0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 153, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163,
};
void recomp_unit_0071_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0884B000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0071[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0884B000;
    case 2u: goto L_0884B00C;
    case 3u: goto L_0884B03C;
    case 4u: goto L_0884B048;
    case 5u: goto L_0884B06C;
    case 6u: goto L_0884B080;
    case 7u: goto L_0884B0B0;
    case 8u: goto L_0884B0BC;
    case 9u: goto L_0884B100;
    case 10u: goto L_0884B114;
    case 11u: goto L_0884B144;
    case 12u: goto L_0884B150;
    case 13u: goto L_0884B15C;
    case 14u: goto L_0884B170;
    case 15u: goto L_0884B1A0;
    case 16u: goto L_0884B1AC;
    case 17u: goto L_0884B1B4;
    case 18u: goto L_0884B1C4;
    case 19u: goto L_0884B1D8;
    case 20u: goto L_0884B208;
    case 21u: goto L_0884B214;
    case 22u: goto L_0884B21C;
    case 23u: goto L_0884B220;
    case 24u: goto L_0884B234;
    case 25u: goto L_0884B264;
    case 26u: goto L_0884B270;
    case 27u: goto L_0884B27C;
    case 28u: goto L_0884B290;
    case 29u: goto L_0884B2A4;
    case 30u: goto L_0884B2B8;
    case 31u: goto L_0884B2CC;
    case 32u: goto L_0884B2FC;
    case 33u: goto L_0884B308;
    case 34u: goto L_0884B310;
    case 35u: goto L_0884B320;
    case 36u: goto L_0884B338;
    case 37u: goto L_0884B368;
    case 38u: goto L_0884B374;
    case 39u: goto L_0884B38C;
    case 40u: goto L_0884B3A8;
    case 41u: goto L_0884B3D8;
    case 42u: goto L_0884B3E8;
    case 43u: goto L_0884B3F8;
    case 44u: goto L_0884B40C;
    case 45u: goto L_0884B43C;
    case 46u: goto L_0884B448;
    case 47u: goto L_0884B460;
    case 48u: goto L_0884B478;
    case 49u: goto L_0884B4A8;
    case 50u: goto L_0884B4B4;
    case 51u: goto L_0884B4CC;
    case 52u: goto L_0884B4E4;
    case 53u: goto L_0884B514;
    case 54u: goto L_0884B520;
    case 55u: goto L_0884B538;
    case 56u: goto L_0884B550;
    case 57u: goto L_0884B580;
    case 58u: goto L_0884B58C;
    case 59u: goto L_0884B5B0;
    case 60u: goto L_0884B5C8;
    case 61u: goto L_0884B5F8;
    case 62u: goto L_0884B604;
    case 63u: goto L_0884B610;
    case 64u: goto L_0884B62C;
    case 65u: goto L_0884B65C;
    case 66u: goto L_0884B668;
    case 67u: goto L_0884B680;
    case 68u: goto L_0884B698;
    case 69u: goto L_0884B6C8;
    case 70u: goto L_0884B6D4;
    case 71u: goto L_0884B6F4;
    case 72u: goto L_0884B708;
    case 73u: goto L_0884B714;
    case 74u: goto L_0884B73C;
    case 75u: goto L_0884B748;
    case 76u: goto L_0884B764;
    case 77u: goto L_0884B778;
    case 78u: goto L_0884B7A8;
    case 79u: goto L_0884B7B4;
    case 80u: goto L_0884B7CC;
    case 81u: goto L_0884B7E0;
    case 82u: goto L_0884B810;
    case 83u: goto L_0884B81C;
    case 84u: goto L_0884B834;
    case 85u: goto L_0884B84C;
    case 86u: goto L_0884B87C;
    case 87u: goto L_0884B888;
    case 88u: goto L_0884B8A0;
    case 89u: goto L_0884B8B8;
    case 90u: goto L_0884B8E8;
    case 91u: goto L_0884B8F4;
    case 92u: goto L_0884B910;
    case 93u: goto L_0884B928;
    case 94u: goto L_0884B958;
    case 95u: goto L_0884B964;
    case 96u: goto L_0884B97C;
    case 97u: goto L_0884B994;
    case 98u: goto L_0884B9C4;
    case 99u: goto L_0884B9D0;
    case 100u: goto L_0884B9E8;
    case 101u: goto L_0884BA00;
    case 102u: goto L_0884BA30;
    case 103u: goto L_0884BA3C;
    case 104u: goto L_0884BA54;
    case 105u: goto L_0884BA68;
    case 106u: goto L_0884BA98;
    case 107u: goto L_0884BAA4;
    case 108u: goto L_0884BAB0;
    case 109u: goto L_0884BAC4;
    case 110u: goto L_0884BAF4;
    case 111u: goto L_0884BB00;
    case 112u: goto L_0884BB18;
    case 113u: goto L_0884BB30;
    case 114u: goto L_0884BB60;
    case 115u: goto L_0884BB6C;
    case 116u: goto L_0884BB98;
    case 117u: goto L_0884BBB0;
    case 118u: goto L_0884BBE0;
    case 119u: goto L_0884BBEC;
    case 120u: goto L_0884BBF4;
    case 121u: goto L_0884BC04;
    case 122u: goto L_0884BC1C;
    case 123u: goto L_0884BC4C;
    case 124u: goto L_0884BC58;
    case 125u: goto L_0884BC84;
    case 126u: goto L_0884BC9C;
    case 127u: goto L_0884BCCC;
    case 128u: goto L_0884BCD8;
    case 129u: goto L_0884BCE4;
    case 130u: goto L_0884BCF8;
    case 131u: goto L_0884BD28;
    case 132u: goto L_0884BD34;
    case 133u: goto L_0884BD3C;
    case 134u: goto L_0884BD4C;
    case 135u: goto L_0884BD60;
    case 136u: goto L_0884BD90;
    case 137u: goto L_0884BD9C;
    case 138u: goto L_0884BDA4;
    case 139u: goto L_0884BDA8;
    case 140u: goto L_0884BDC0;
    case 141u: goto L_0884BDD8;
    case 142u: goto L_0884BE08;
    case 143u: goto L_0884BE14;
    case 144u: goto L_0884BE2C;
    case 145u: goto L_0884BE40;
    case 146u: goto L_0884BE70;
    case 147u: goto L_0884BE7C;
    case 148u: goto L_0884BE88;
    case 149u: goto L_0884BE9C;
    case 150u: goto L_0884BECC;
    case 151u: goto L_0884BED8;
    case 152u: goto L_0884BEE4;
    case 153u: goto L_0884BEF8;
    case 154u: goto L_0884BF28;
    case 155u: goto L_0884BF34;
    case 156u: goto L_0884BF4C;
    case 157u: goto L_0884BF64;
    case 158u: goto L_0884BF94;
    case 159u: goto L_0884BFA0;
    case 160u: goto L_0884BFAC;
    case 161u: goto L_0884BFC4;
    case 162u: goto L_0884BFDC;
    case 163u: goto L_0884BFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0884B000:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3208), aot_gpr[17]);
    aot_gpr[31] = (0x0884B00Cu);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884B00Cu) goto L_0884B00C;
    return;
L_0884B00C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3208)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884B03Cu);
    aot_gpr[6] = (0u | 20u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B03Cu) goto L_0884B03C;
    return;
L_0884B03C:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B06C;
      }
      goto L_0884B048;
    }
L_0884B048:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10552));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884B06C;
L_0884B06C:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3212), aot_gpr[16]);
    aot_gpr[31] = (0x0884B080u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884B080u) goto L_0884B080;
    return;
L_0884B080:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3212)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884B0B0u);
    aot_gpr[6] = (0u | 52u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B0B0u) goto L_0884B0B0;
    return;
L_0884B0B0:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B100;
      }
      goto L_0884B0BC;
    }
L_0884B0BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10528));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884B100;
L_0884B100:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3216), aot_gpr[16]);
    aot_gpr[31] = (0x0884B114u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884B114u) goto L_0884B114;
    return;
L_0884B114:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3216)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884B144u);
    aot_gpr[6] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B144u) goto L_0884B144;
    return;
L_0884B144:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0884B15C;
      }
      goto L_0884B150;
    }
L_0884B150:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10640));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884B15C;
L_0884B15C:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3220), aot_gpr[16]);
    aot_gpr[31] = (0x0884B170u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884B170u) goto L_0884B170;
    return;
L_0884B170:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3220)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884B1A0u);
    aot_gpr[6] = (0u | 124u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B1A0u) goto L_0884B1A0;
    return;
L_0884B1A0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0884B1C4;
      }
      goto L_0884B1AC;
    }
L_0884B1AC:
    aot_gpr[31] = (0x0884B1B4u);
    aot_gpr[5] = (0u | 124u);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 12u, 0x08A2D0B8u>(ctx, &aot_mem) && ctx.pc == 0x0884B1B4u) goto L_0884B1B4;
    return;
L_0884B1B4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10616));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884B1C4;
L_0884B1C4:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3224), aot_gpr[17]);
    aot_gpr[31] = (0x0884B1D8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884B1D8u) goto L_0884B1D8;
    return;
L_0884B1D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3224)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884B208u);
    aot_gpr[6] = (0u | 628u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B208u) goto L_0884B208;
    return;
L_0884B208:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B220;
      }
      goto L_0884B214;
    }
L_0884B214:
    aot_gpr[31] = (0x0884B21Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 212u, 0x08858EA4u>(ctx, &aot_mem) && ctx.pc == 0x0884B21Cu) goto L_0884B21C;
    return;
L_0884B21C:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884B220;
L_0884B220:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3228), aot_gpr[17]);
    aot_gpr[31] = (0x0884B234u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884B234u) goto L_0884B234;
    return;
L_0884B234:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3228)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884B264u);
    aot_gpr[6] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B264u) goto L_0884B264;
    return;
L_0884B264:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0884B27C;
      }
      goto L_0884B270;
    }
L_0884B270:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10208));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884B27C;
L_0884B27C:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3232), aot_gpr[16]);
    aot_gpr[31] = (0x0884B290u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884B290u) goto L_0884B290;
    return;
L_0884B290:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3232)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[31] = (0x0884B2A4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884B2A4u) goto L_0884B2A4;
    return;
L_0884B2A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3232)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[31] = (0x0884B2B8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884B2B8u) goto L_0884B2B8;
    return;
L_0884B2B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3232)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[31] = (0x0884B2CCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884B2CCu) goto L_0884B2CC;
    return;
L_0884B2CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3232)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884B2FCu);
    aot_gpr[6] = (0u | 140u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B2FCu) goto L_0884B2FC;
    return;
L_0884B2FC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0884B320;
      }
      goto L_0884B308;
    }
L_0884B308:
    aot_gpr[31] = (0x0884B310u);
    aot_gpr[5] = (0u | 140u);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 12u, 0x08A2D0B8u>(ctx, &aot_mem) && ctx.pc == 0x0884B310u) goto L_0884B310;
    return;
L_0884B310:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-9168));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884B320;
L_0884B320:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3240), aot_gpr[17]);
    aot_gpr[31] = (0x0884B338u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1932));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884B338u) goto L_0884B338;
    return;
L_0884B338:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3240)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884B368u);
    aot_gpr[6] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B368u) goto L_0884B368;
    return;
L_0884B368:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B38C;
      }
      goto L_0884B374;
    }
L_0884B374:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-9296));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884B38C;
L_0884B38C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[20]);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3252), aot_gpr[16]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[31] = (0x0884B3A8u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884B3A8u) goto L_0884B3A8;
    return;
L_0884B3A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3252)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884B3D8u);
    aot_gpr[6] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B3D8u) goto L_0884B3D8;
    return;
L_0884B3D8:
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_0884B3F8;
      }
      goto L_0884B3E8;
    }
L_0884B3E8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-9320));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884B3F8;
L_0884B3F8:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3256), aot_gpr[16]);
    aot_gpr[31] = (0x0884B40Cu);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884B40Cu) goto L_0884B40C;
    return;
L_0884B40C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3256)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884B43Cu);
    aot_gpr[6] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B43Cu) goto L_0884B43C;
    return;
L_0884B43C:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B460;
      }
      goto L_0884B448;
    }
L_0884B448:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8824));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884B460;
L_0884B460:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3260), aot_gpr[16]);
    aot_gpr[31] = (0x0884B478u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1912));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884B478u) goto L_0884B478;
    return;
L_0884B478:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3260)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884B4A8u);
    aot_gpr[6] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B4A8u) goto L_0884B4A8;
    return;
L_0884B4A8:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B4CC;
      }
      goto L_0884B4B4;
    }
L_0884B4B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8760));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884B4CC;
L_0884B4CC:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3264), aot_gpr[16]);
    aot_gpr[31] = (0x0884B4E4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1900));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884B4E4u) goto L_0884B4E4;
    return;
L_0884B4E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3264)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884B514u);
    aot_gpr[6] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B514u) goto L_0884B514;
    return;
L_0884B514:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B538;
      }
      goto L_0884B520;
    }
L_0884B520:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-9528));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884B538;
L_0884B538:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3268), aot_gpr[16]);
    aot_gpr[31] = (0x0884B550u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1884));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884B550u) goto L_0884B550;
    return;
L_0884B550:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3268)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884B580u);
    aot_gpr[6] = (0u | 20u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B580u) goto L_0884B580;
    return;
L_0884B580:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B5B0;
      }
      goto L_0884B58C;
    }
L_0884B58C:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8952));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884B5B0;
L_0884B5B0:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3272), aot_gpr[16]);
    aot_gpr[31] = (0x0884B5C8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1868));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884B5C8u) goto L_0884B5C8;
    return;
L_0884B5C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3272)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884B5F8u);
    aot_gpr[6] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B5F8u) goto L_0884B5F8;
    return;
L_0884B5F8:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0884B610;
      }
      goto L_0884B604;
    }
L_0884B604:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-11360));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884B610;
L_0884B610:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[20] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(3276), aot_gpr[16]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (0x0884B62Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884B62Cu) goto L_0884B62C;
    return;
L_0884B62C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(3276)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884B65Cu);
    aot_gpr[6] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B65Cu) goto L_0884B65C;
    return;
L_0884B65C:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_0884B680;
      }
      goto L_0884B668;
    }
L_0884B668:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-11336));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884B680;
L_0884B680:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[20] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(3280), aot_gpr[16]);
    aot_gpr[31] = (0x0884B698u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884B698u) goto L_0884B698;
    return;
L_0884B698:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(3280)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884B6C8u);
    aot_gpr[6] = (0u | 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B6C8u) goto L_0884B6C8;
    return;
L_0884B6C8:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_0884B6F4;
      }
      goto L_0884B6D4;
    }
L_0884B6D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-11272));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884B6F4;
L_0884B6F4:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3284), aot_gpr[16]);
    aot_gpr[31] = (0x0884B708u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884B708u) goto L_0884B708;
    return;
L_0884B708:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3284)));
    aot_gpr[31] = (0x0884B714u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 65u, 0x08832550u>(ctx, &aot_mem) && ctx.pc == 0x0884B714u) goto L_0884B714;
    return;
L_0884B714:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884B73Cu);
    aot_gpr[6] = (0u | 12u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B73Cu) goto L_0884B73C;
    return;
L_0884B73C:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B764;
      }
      goto L_0884B748;
    }
L_0884B748:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10120));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884B764;
L_0884B764:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3292), aot_gpr[16]);
    aot_gpr[31] = (0x0884B778u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884B778u) goto L_0884B778;
    return;
L_0884B778:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884B7A8u);
    aot_gpr[6] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B7A8u) goto L_0884B7A8;
    return;
L_0884B7A8:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B7CC;
      }
      goto L_0884B7B4;
    }
L_0884B7B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10056));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884B7CC;
L_0884B7CC:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3296), aot_gpr[16]);
    aot_gpr[31] = (0x0884B7E0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884B7E0u) goto L_0884B7E0;
    return;
L_0884B7E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3296)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884B810u);
    aot_gpr[6] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B810u) goto L_0884B810;
    return;
L_0884B810:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B834;
      }
      goto L_0884B81C;
    }
L_0884B81C:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-9592));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884B834;
L_0884B834:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3300), aot_gpr[16]);
    aot_gpr[31] = (0x0884B84Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1824));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884B84Cu) goto L_0884B84C;
    return;
L_0884B84C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3300)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884B87Cu);
    aot_gpr[6] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B87Cu) goto L_0884B87C;
    return;
L_0884B87C:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B8A0;
      }
      goto L_0884B888;
    }
L_0884B888:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-11424));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884B8A0;
L_0884B8A0:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3304), aot_gpr[16]);
    aot_gpr[31] = (0x0884B8B8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1812));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884B8B8u) goto L_0884B8B8;
    return;
L_0884B8B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3304)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884B8E8u);
    aot_gpr[6] = (0u | 12u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B8E8u) goto L_0884B8E8;
    return;
L_0884B8E8:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B910;
      }
      goto L_0884B8F4;
    }
L_0884B8F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10296));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884B910;
L_0884B910:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3308), aot_gpr[16]);
    aot_gpr[31] = (0x0884B928u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1796));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884B928u) goto L_0884B928;
    return;
L_0884B928:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884B958u);
    aot_gpr[6] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B958u) goto L_0884B958;
    return;
L_0884B958:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B97C;
      }
      goto L_0884B964;
    }
L_0884B964:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10184));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884B97C;
L_0884B97C:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3312), aot_gpr[16]);
    aot_gpr[31] = (0x0884B994u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1784));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884B994u) goto L_0884B994;
    return;
L_0884B994:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3312)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884B9C4u);
    aot_gpr[6] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884B9C4u) goto L_0884B9C4;
    return;
L_0884B9C4:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B9E8;
      }
      goto L_0884B9D0;
    }
L_0884B9D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8696));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884B9E8;
L_0884B9E8:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3316), aot_gpr[16]);
    aot_gpr[31] = (0x0884BA00u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1772));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884BA00u) goto L_0884BA00;
    return;
L_0884BA00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3316)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884BA30u);
    aot_gpr[6] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884BA30u) goto L_0884BA30;
    return;
L_0884BA30:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BA54;
      }
      goto L_0884BA3C;
    }
L_0884BA3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8360));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884BA54;
L_0884BA54:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3244), aot_gpr[16]);
    aot_gpr[31] = (0x0884BA68u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884BA68u) goto L_0884BA68;
    return;
L_0884BA68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3244)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884BA98u);
    aot_gpr[6] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884BA98u) goto L_0884BA98;
    return;
L_0884BA98:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0884BAB0;
      }
      goto L_0884BAA4;
    }
L_0884BAA4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8568));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884BAB0;
L_0884BAB0:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3248), aot_gpr[16]);
    aot_gpr[31] = (0x0884BAC4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884BAC4u) goto L_0884BAC4;
    return;
L_0884BAC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3248)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884BAF4u);
    aot_gpr[6] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884BAF4u) goto L_0884BAF4;
    return;
L_0884BAF4:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BB18;
      }
      goto L_0884BB00;
    }
L_0884BB00:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-9800));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884BB18;
L_0884BB18:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3320), aot_gpr[16]);
    aot_gpr[31] = (0x0884BB30u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1760));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884BB30u) goto L_0884BB30;
    return;
L_0884BB30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3320)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884BB60u);
    aot_gpr[6] = (0u | 28u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884BB60u) goto L_0884BB60;
    return;
L_0884BB60:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BB98;
      }
      goto L_0884BB6C;
    }
L_0884BB6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-9992));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884BB98;
L_0884BB98:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3324), aot_gpr[16]);
    aot_gpr[31] = (0x0884BBB0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1740));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884BBB0u) goto L_0884BBB0;
    return;
L_0884BBB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3324)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884BBE0u);
    aot_gpr[6] = (0u | 292u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884BBE0u) goto L_0884BBE0;
    return;
L_0884BBE0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0884BC04;
      }
      goto L_0884BBEC;
    }
L_0884BBEC:
    aot_gpr[31] = (0x0884BBF4u);
    aot_gpr[5] = (0u | 292u);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 12u, 0x08A2D0B8u>(ctx, &aot_mem) && ctx.pc == 0x0884BBF4u) goto L_0884BBF4;
    return;
L_0884BBF4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-9928));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884BC04;
L_0884BC04:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3328), aot_gpr[17]);
    aot_gpr[31] = (0x0884BC1Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1728));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884BC1Cu) goto L_0884BC1C;
    return;
L_0884BC1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3328)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884BC4Cu);
    aot_gpr[6] = (0u | 28u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884BC4Cu) goto L_0884BC4C;
    return;
L_0884BC4C:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BC84;
      }
      goto L_0884BC58;
    }
L_0884BC58:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-9864));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884BC84;
L_0884BC84:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3332), aot_gpr[16]);
    aot_gpr[31] = (0x0884BC9Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1708));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884BC9Cu) goto L_0884BC9C;
    return;
L_0884BC9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3332)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884BCCCu);
    aot_gpr[6] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884BCCCu) goto L_0884BCCC;
    return;
L_0884BCCC:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0884BCE4;
      }
      goto L_0884BCD8;
    }
L_0884BCD8:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-11568));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884BCE4;
L_0884BCE4:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3352), aot_gpr[16]);
    aot_gpr[31] = (0x0884BCF8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884BCF8u) goto L_0884BCF8;
    return;
L_0884BCF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3352)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884BD28u);
    aot_gpr[6] = (0u | 1584u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884BD28u) goto L_0884BD28;
    return;
L_0884BD28:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0884BD4C;
      }
      goto L_0884BD34;
    }
L_0884BD34:
    aot_gpr[31] = (0x0884BD3Cu);
    aot_gpr[5] = (0u | 1584u);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 12u, 0x08A2D0B8u>(ctx, &aot_mem) && ctx.pc == 0x0884BD3Cu) goto L_0884BD3C;
    return;
L_0884BD3C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8208));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884BD4C;
L_0884BD4C:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3356), aot_gpr[17]);
    aot_gpr[31] = (0x0884BD60u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884BD60u) goto L_0884BD60;
    return;
L_0884BD60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3356)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884BD90u);
    aot_gpr[6] = (0u | 736u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884BD90u) goto L_0884BD90;
    return;
L_0884BD90:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BDA8;
      }
      goto L_0884BD9C;
    }
L_0884BD9C:
    aot_gpr[31] = (0x0884BDA4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 30u, 0x0885623Cu>(ctx, &aot_mem) && ctx.pc == 0x0884BDA4u) goto L_0884BDA4;
    return;
L_0884BDA4:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0884BDA8;
L_0884BDA8:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3360), aot_gpr[17]);
    aot_gpr[31] = (0x0884BDC0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1668));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884BDC0u) goto L_0884BDC0;
    return;
L_0884BDC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3360)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0884BDD8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1652));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884BDD8u) goto L_0884BDD8;
    return;
L_0884BDD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884BE08u);
    aot_gpr[6] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884BE08u) goto L_0884BE08;
    return;
L_0884BE08:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BE2C;
      }
      goto L_0884BE14;
    }
L_0884BE14:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-9016));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884BE2C;
L_0884BE2C:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3364), aot_gpr[16]);
    aot_gpr[31] = (0x0884BE40u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884BE40u) goto L_0884BE40;
    return;
L_0884BE40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3364)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884BE70u);
    aot_gpr[6] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884BE70u) goto L_0884BE70;
    return;
L_0884BE70:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0884BE88;
      }
      goto L_0884BE7C;
    }
L_0884BE7C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-9464));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884BE88;
L_0884BE88:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3368), aot_gpr[16]);
    aot_gpr[31] = (0x0884BE9Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884BE9Cu) goto L_0884BE9C;
    return;
L_0884BE9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3368)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884BECCu);
    aot_gpr[6] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884BECCu) goto L_0884BECC;
    return;
L_0884BECC:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0884BEE4;
      }
      goto L_0884BED8;
    }
L_0884BED8:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7912));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884BEE4;
L_0884BEE4:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3372), aot_gpr[16]);
    aot_gpr[31] = (0x0884BEF8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884BEF8u) goto L_0884BEF8;
    return;
L_0884BEF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3372)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884BF28u);
    aot_gpr[6] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884BF28u) goto L_0884BF28;
    return;
L_0884BF28:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BF4C;
      }
      goto L_0884BF34;
    }
L_0884BF34:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-9104));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884BF4C;
L_0884BF4C:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3144), aot_gpr[16]);
    aot_gpr[31] = (0x0884BF64u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1632));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884BF64u) goto L_0884BF64;
    return;
L_0884BF64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3144)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0884BF94u);
    aot_gpr[6] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884BF94u) goto L_0884BF94;
    return;
L_0884BF94:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0884BFAC;
      }
      goto L_0884BFA0;
    }
L_0884BFA0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-9656));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_0884BFAC;
L_0884BFAC:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(3344), aot_gpr[16]);
    aot_gpr[31] = (0x0884BFC4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1612));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884BFC4u) goto L_0884BFC4;
    return;
L_0884BFC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3344)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0884BFDCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1596));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884BFDCu) goto L_0884BFDC;
    return;
L_0884BFDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3344)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0884BFF4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1576));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884BFF4u) goto L_0884BFF4;
    return;
L_0884BFF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(3344)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    ctx.pc = 0x0884C000u; return;
}

void recomp_unit_0071(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0071_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_71(Runtime &runtime) {
    runtime.register_generated_unit(71u, 0x0884B000u, 4096u, &recomp_unit_0071, &recomp_unit_0071_entry);
    runtime.register_function(0x0884B000u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B00Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B03Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B048u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B06Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B080u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B0B0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B0BCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B100u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B114u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B144u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B150u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B15Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B170u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B1A0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B1ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B1B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B1C4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B1D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B208u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B214u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B21Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B220u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B234u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B264u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B270u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B27Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B290u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B2A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B2B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B2CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B2FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B308u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B310u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B320u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B338u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B368u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B374u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B38Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B3A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B3D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B3E8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B3F8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B40Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B43Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B448u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B460u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B478u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B4A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B4B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B4CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B4E4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B514u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B520u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B538u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B550u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B580u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B58Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B5B0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B5C8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B5F8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B604u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B610u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B62Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B65Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B668u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B680u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B698u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B6C8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B6D4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B6F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B708u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B714u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B73Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B748u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B764u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B778u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B7A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B7B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B7CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B7E0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B810u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B81Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B834u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B84Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B87Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B888u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B8A0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B8B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B8E8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B8F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B910u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B928u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B958u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B964u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B97Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B994u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B9C4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B9D0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884B9E8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BA00u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BA30u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BA3Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BA54u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BA68u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BA98u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BAA4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BAB0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BAC4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BAF4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BB00u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BB18u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BB30u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BB60u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BB6Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BB98u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BBB0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BBE0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BBECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BBF4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BC04u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BC1Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BC4Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BC58u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BC84u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BC9Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BCCCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BCD8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BCE4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BCF8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BD28u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BD34u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BD3Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BD4Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BD60u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BD90u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BD9Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BDA4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BDA8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BDC0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BDD8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BE08u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BE14u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BE2Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BE40u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BE70u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BE7Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BE88u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BE9Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BECCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BED8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BEE4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BEF8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BF28u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BF34u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BF4Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BF64u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BF94u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BFA0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BFACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BFC4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BFDCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0884BFF4u, &recomp_unit_0071, "recomp_unit_0071");
}
} // namespace psprecomp
