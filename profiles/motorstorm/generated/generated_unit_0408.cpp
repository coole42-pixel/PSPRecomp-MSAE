#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0408[729] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9,
    0, 0, 10, 0, 0, 0, 0, 11, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21,
    0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 27,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0,
    0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 35, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 40, 41, 0, 0, 0, 0, 42,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 46, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0,
    0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0,
    0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0,
    0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 68,
};
void recomp_unit_0408_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0899C000u;
        entry_id = (entry_delta < 2916u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0408[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0899C000;
    case 2u: goto L_0899C4EC;
    case 3u: goto L_0899C51C;
    case 4u: goto L_0899C564;
    case 5u: goto L_0899C58C;
    case 6u: goto L_0899C59C;
    case 7u: goto L_0899C5CC;
    case 8u: goto L_0899C5EC;
    case 9u: goto L_0899C5FC;
    case 10u: goto L_0899C608;
    case 11u: goto L_0899C61C;
    case 12u: goto L_0899C624;
    case 13u: goto L_0899C630;
    case 14u: goto L_0899C648;
    case 15u: goto L_0899C680;
    case 16u: goto L_0899C6A8;
    case 17u: goto L_0899C6CC;
    case 18u: goto L_0899C6D4;
    case 19u: goto L_0899C6DC;
    case 20u: goto L_0899C6EC;
    case 21u: goto L_0899C6FC;
    case 22u: goto L_0899C70C;
    case 23u: goto L_0899C720;
    case 24u: goto L_0899C748;
    case 25u: goto L_0899C758;
    case 26u: goto L_0899C764;
    case 27u: goto L_0899C77C;
    case 28u: goto L_0899C7B8;
    case 29u: goto L_0899C7F8;
    case 30u: goto L_0899C804;
    case 31u: goto L_0899C81C;
    case 32u: goto L_0899C848;
    case 33u: goto L_0899C854;
    case 34u: goto L_0899C860;
    case 35u: goto L_0899C86C;
    case 36u: goto L_0899C870;
    case 37u: goto L_0899C89C;
    case 38u: goto L_0899C8C8;
    case 39u: goto L_0899C8D8;
    case 40u: goto L_0899C8E4;
    case 41u: goto L_0899C8E8;
    case 42u: goto L_0899C8FC;
    case 43u: goto L_0899C948;
    case 44u: goto L_0899C958;
    case 45u: goto L_0899C964;
    case 46u: goto L_0899C96C;
    case 47u: goto L_0899C9B4;
    case 48u: goto L_0899C9BC;
    case 49u: goto L_0899C9C4;
    case 50u: goto L_0899C9F4;
    case 51u: goto L_0899CA04;
    case 52u: goto L_0899CA14;
    case 53u: goto L_0899CA24;
    case 54u: goto L_0899CA38;
    case 55u: goto L_0899CA70;
    case 56u: goto L_0899CA78;
    case 57u: goto L_0899CA84;
    case 58u: goto L_0899CA94;
    case 59u: goto L_0899CAA0;
    case 60u: goto L_0899CAC0;
    case 61u: goto L_0899CAC8;
    case 62u: goto L_0899CAD8;
    case 63u: goto L_0899CAE4;
    case 64u: goto L_0899CB04;
    case 65u: goto L_0899CB2C;
    case 66u: goto L_0899CB3C;
    case 67u: goto L_0899CB48;
    case 68u: goto L_0899CB60;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0899C000:
    aot_gpr[8] = (std::rotr(aot_gpr[8], 21));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[3] = (~(0u | aot_gpr[8]));
    aot_gpr[3] = (aot_gpr[6] & aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[2]);
    aot_gpr[7] = (std::rotr(aot_gpr[7], 13));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[3] = (~(0u | aot_gpr[7]));
    aot_gpr[3] = (aot_gpr[4] & aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[8] & aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[11]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[2]);
    aot_gpr[6] = (std::rotr(aot_gpr[6], 29));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[3] = (~(0u | aot_gpr[6]));
    aot_gpr[3] = (aot_gpr[8] & aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[7] & aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[4] = (std::rotr(aot_gpr[4], 25));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[3] = (~(0u | aot_gpr[4]));
    aot_gpr[3] = (aot_gpr[7] & aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[6] & aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[12]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[2]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 21));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[3] = (~(0u | aot_gpr[8]));
    aot_gpr[3] = (aot_gpr[6] & aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[19]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[2]);
    aot_gpr[7] = (std::rotr(aot_gpr[7], 13));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[3] = (~(0u | aot_gpr[7]));
    aot_gpr[3] = (aot_gpr[4] & aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[8] & aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[9]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[2]);
    aot_gpr[6] = (std::rotr(aot_gpr[6], 29));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[3] = (~(0u | aot_gpr[6]));
    aot_gpr[3] = (aot_gpr[8] & aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[7] & aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[13]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[4] = (std::rotr(aot_gpr[4], 25));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[3] = (~(0u | aot_gpr[4]));
    aot_gpr[3] = (aot_gpr[7] & aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[6] & aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[2]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 21));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[2] = (~(0u | aot_gpr[8]));
    aot_gpr[3] = (aot_gpr[4] & aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[6] & aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[3] | aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[14]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[2]);
    aot_gpr[7] = (std::rotr(aot_gpr[7], 13));
    aot_gpr[2] = (aot_gpr[4] | aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[7] & aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[17] + aot_gpr[3]);
    aot_gpr[5] = (23170u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 31129u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[6] = (std::rotr(aot_gpr[6], 29));
    aot_gpr[2] = (aot_gpr[8] | aot_gpr[7]);
    aot_gpr[3] = (aot_gpr[8] & aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[6] & aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[15] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (std::rotr(aot_gpr[4], 27));
    aot_gpr[2] = (aot_gpr[7] | aot_gpr[6]);
    aot_gpr[3] = (aot_gpr[7] & aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[11] + aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[5]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 23));
    aot_gpr[2] = (aot_gpr[6] | aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[6] & aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[8] & aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[9] + aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[7] = (std::rotr(aot_gpr[7], 19));
    aot_gpr[2] = (aot_gpr[4] | aot_gpr[8]);
    aot_gpr[3] = (aot_gpr[4] & aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[7] & aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[22] + aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[6] = (std::rotr(aot_gpr[6], 29));
    aot_gpr[2] = (aot_gpr[8] | aot_gpr[7]);
    aot_gpr[3] = (aot_gpr[8] & aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[6] & aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[21] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (std::rotr(aot_gpr[4], 27));
    aot_gpr[2] = (aot_gpr[7] | aot_gpr[6]);
    aot_gpr[3] = (aot_gpr[7] & aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[5]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 23));
    aot_gpr[2] = (aot_gpr[6] | aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[6] & aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[8] & aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[13] + aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[7] = (std::rotr(aot_gpr[7], 19));
    aot_gpr[2] = (aot_gpr[4] | aot_gpr[8]);
    aot_gpr[3] = (aot_gpr[4] & aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[7] & aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[20] + aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[6] = (std::rotr(aot_gpr[6], 29));
    aot_gpr[2] = (aot_gpr[8] | aot_gpr[7]);
    aot_gpr[3] = (aot_gpr[8] & aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[6] & aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[18] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (std::rotr(aot_gpr[4], 27));
    aot_gpr[2] = (aot_gpr[7] | aot_gpr[6]);
    aot_gpr[3] = (aot_gpr[7] & aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[12] + aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[5]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 23));
    aot_gpr[2] = (aot_gpr[6] | aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[6] & aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[8] & aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[10] + aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[7] = (std::rotr(aot_gpr[7], 19));
    aot_gpr[2] = (aot_gpr[4] | aot_gpr[8]);
    aot_gpr[3] = (aot_gpr[4] & aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[7] & aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[23] + aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[6] = (std::rotr(aot_gpr[6], 29));
    aot_gpr[2] = (aot_gpr[8] | aot_gpr[7]);
    aot_gpr[3] = (aot_gpr[8] & aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[6] & aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (std::rotr(aot_gpr[4], 27));
    aot_gpr[2] = (aot_gpr[7] | aot_gpr[6]);
    aot_gpr[3] = (aot_gpr[7] & aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[19] + aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[5]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 23));
    aot_gpr[2] = (aot_gpr[6] | aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[6] & aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[8] & aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[14] + aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[7] = (std::rotr(aot_gpr[7], 19));
    aot_gpr[2] = (aot_gpr[8] ^ aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[4] ^ aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[3] = (28377u << 16u);
    aot_gpr[3] = (aot_gpr[3] | 60321u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[17]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[3]);
    aot_gpr[6] = (std::rotr(aot_gpr[6], 29));
    aot_gpr[2] = (aot_gpr[7] ^ aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[8] ^ aot_gpr[2]);
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[11]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[4] = (std::rotr(aot_gpr[4], 23));
    aot_gpr[2] = (aot_gpr[6] ^ aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[7] ^ aot_gpr[2]);
    aot_gpr[15] = (aot_gpr[15] + aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[15]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[3]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 21));
    aot_gpr[2] = (aot_gpr[4] ^ aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[6] ^ aot_gpr[2]);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[9]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[3]);
    aot_gpr[7] = (std::rotr(aot_gpr[7], 17));
    aot_gpr[2] = (aot_gpr[8] ^ aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[4] ^ aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[20]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[3]);
    aot_gpr[6] = (std::rotr(aot_gpr[6], 29));
    aot_gpr[2] = (aot_gpr[7] ^ aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[8] ^ aot_gpr[2]);
    aot_gpr[12] = (aot_gpr[12] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[12]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[4] = (std::rotr(aot_gpr[4], 23));
    aot_gpr[2] = (aot_gpr[6] ^ aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[7] ^ aot_gpr[2]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[18]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[3]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 21));
    aot_gpr[2] = (aot_gpr[4] ^ aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[6] ^ aot_gpr[2]);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[10]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[3]);
    aot_gpr[7] = (std::rotr(aot_gpr[7], 17));
    aot_gpr[2] = (aot_gpr[8] ^ aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[4] ^ aot_gpr[2]);
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[22]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[3]);
    aot_gpr[6] = (std::rotr(aot_gpr[6], 29));
    aot_gpr[2] = (aot_gpr[7] ^ aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[8] ^ aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[4] = (std::rotr(aot_gpr[4], 23));
    aot_gpr[2] = (aot_gpr[6] ^ aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[7] ^ aot_gpr[2]);
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[21]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[3]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 21));
    aot_gpr[2] = (aot_gpr[4] ^ aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[6] ^ aot_gpr[2]);
    aot_gpr[13] = (aot_gpr[13] + aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[13]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[3]);
    aot_gpr[7] = (std::rotr(aot_gpr[7], 17));
    aot_gpr[2] = (aot_gpr[8] ^ aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[4] ^ aot_gpr[2]);
    aot_gpr[23] = (aot_gpr[23] + aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[23]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[3]);
    aot_gpr[6] = (std::rotr(aot_gpr[6], 29));
    aot_gpr[2] = (aot_gpr[7] ^ aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[8] ^ aot_gpr[2]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (std::rotr(aot_gpr[4], 23));
    aot_gpr[2] = (aot_gpr[6] ^ aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[7] ^ aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[3]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 21));
    aot_gpr[2] = (aot_gpr[4] ^ aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[6] ^ aot_gpr[2]);
    aot_gpr[14] = (aot_gpr[14] + aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[14]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[3]);
    aot_gpr[7] = (std::rotr(aot_gpr[7], 17));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[31]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[30]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[31] = (0x0899C4ECu);
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C4ECu) goto L_0899C4EC;
    return;
L_0899C4EC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899C51C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[3] = (aot_gpr[6] << 3u);
    aot_gpr[21] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[3] = (aot_gpr[4] < aot_gpr[3] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[6] = ((aot_gpr[2] >> 3u) & 0x0000003Fu);
      if (branch_taken) {
          goto L_0899C5CC;
      }
      goto L_0899C564;
    }
L_0899C564:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[16] = (aot_gpr[2] - aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[19] >> 29u);
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[19] < aot_gpr[16] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(20), aot_gpr[3]);
      if (branch_taken) {
          goto L_0899C5EC;
      }
      goto L_0899C58C;
    }
L_0899C58C:
    aot_gpr[2] = (aot_gpr[6] + 0u);
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(24));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[6] = (0u + 0u);
    goto L_0899C59C;
L_0899C59C:
    aot_gpr[5] = (aot_gpr[21] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[19] - aot_gpr[3]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    (void)rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem); return;
L_0899C5CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[16] = (aot_gpr[2] - aot_gpr[6]);
    aot_gpr[3] = (aot_gpr[19] >> 29u);
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[19] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(20), aot_gpr[3]);
      if (branch_taken) {
          goto L_0899C58C;
      }
      goto L_0899C5EC;
    }
L_0899C5EC:
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[6]);
    aot_gpr[31] = (0x0899C5FCu);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0899C5FCu) goto L_0899C5FC;
    return;
L_0899C5FC:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x0899C608u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0407_entry, 407u, 39u, 0x0899BE98u>(ctx, &aot_mem) && ctx.pc == 0x0899C608u) goto L_0899C608;
    return;
L_0899C608:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(63));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[19] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_0899C59C;
      }
      goto L_0899C61C;
    }
L_0899C61C:
    aot_gpr[17] = (aot_gpr[16] + 0u);
    aot_gpr[16] = (aot_gpr[21] + aot_gpr[16]);
    goto L_0899C624;
L_0899C624:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0899C630u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0407_entry, 407u, 39u, 0x0899BE98u>(ctx, &aot_mem) && ctx.pc == 0x0899C630u) goto L_0899C630;
    return;
L_0899C630:
    aot_gpr[2] = (aot_gpr[17] + static_cast<std::uint32_t>(127));
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[19] ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_0899C624;
      }
      goto L_0899C648;
    }
L_0899C648:
    aot_gpr[6] = (aot_gpr[3] + 0u);
    aot_gpr[2] = (0u + 0u);
    aot_gpr[5] = (aot_gpr[21] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[19] - aot_gpr[3]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    (void)rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem); return;
L_0899C680:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x0899C6A8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0407_entry, 407u, 35u, 0x0899BE4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C6A8u) goto L_0899C6A8;
    return;
L_0899C6A8:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-23104));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[7] = ((aot_gpr[2] >> 3u) & 0x0000003Fu);
    aot_gpr[3] = (aot_gpr[7] < static_cast<std::uint32_t>(56) ? 1u : 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(56));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[6] = (aot_gpr[2] - aot_gpr[7]);
      if (branch_taken) {
          goto L_0899C6D4;
      }
      goto L_0899C6CC;
    }
L_0899C6CC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(120));
    aot_gpr[6] = (aot_gpr[2] - aot_gpr[7]);
    goto L_0899C6D4;
L_0899C6D4:
    aot_gpr[31] = (0x0899C6DCu);
    // nop
    goto L_0899C51C;
L_0899C6DC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x0899C6ECu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8));
    goto L_0899C51C;
L_0899C6EC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0899C6FCu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0407_entry, 407u, 35u, 0x0899BE4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C6FCu) goto L_0899C6FC;
    return;
L_0899C6FC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x0899C70Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C70Cu) goto L_0899C70C;
    return;
L_0899C70C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899C720:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[31] = (0x0899C748u);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0407_entry, 407u, 34u, 0x0899BE10u>(ctx, &aot_mem) && ctx.pc == 0x0899C748u) goto L_0899C748;
    return;
L_0899C748:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0899C758u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    goto L_0899C51C;
L_0899C758:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x0899C764u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    goto L_0899C680;
L_0899C764:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899C77C:
    aot_gpr[2] = (4146u << 16u);
    aot_gpr[3] = (26437u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 21622u);
    aot_gpr[3] = (aot_gpr[3] | 8961u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[2] = (61389u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 43913u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[3] = (39098u << 16u);
    aot_gpr[3] = (aot_gpr[3] | 56574u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899C7B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[3] < aot_gpr[6] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (aot_gpr[2] & 63u);
      if (branch_taken) {
          goto L_0899C804;
      }
      goto L_0899C7F8;
    }
L_0899C7F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    goto L_0899C804;
L_0899C804:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[17] = (aot_gpr[2] - aot_gpr[7]);
    aot_gpr[3] = (aot_gpr[18] < aot_gpr[17] ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[7] + 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[20] = (aot_gpr[19] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_0899C848;
      }
      goto L_0899C81C;
    }
L_0899C81C:
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    (void)rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem); return;
L_0899C848:
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[7]);
    aot_gpr[31] = (0x0899C854u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0899C854u) goto L_0899C854;
    return;
L_0899C854:
    aot_gpr[18] = (aot_gpr[18] - aot_gpr[17]);
    aot_gpr[31] = (0x0899C860u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    goto L_0899CB60;
L_0899C860:
    aot_gpr[2] = (aot_gpr[18] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[17]);
      if (branch_taken) {
          goto L_0899C8E4;
      }
      goto L_0899C86C;
    }
L_0899C86C:
    aot_gpr[2] = (0u + 0u);
    goto L_0899C870;
L_0899C870:
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    (void)rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem); return;
L_0899C89C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0899C89C;
      }
      goto L_0899C8C8;
    }
L_0899C8C8:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-64));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x0899C8D8u);
    aot_gpr[16] = (aot_gpr[8] + 0u);
    goto L_0899CB60;
L_0899C8D8:
    aot_gpr[2] = (aot_gpr[18] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_0899C870;
      }
      goto L_0899C8E4;
    }
L_0899C8E4:
    aot_gpr[2] = (aot_gpr[16] | aot_gpr[20]);
    goto L_0899C8E8;
L_0899C8E8:
    aot_gpr[2] = (aot_gpr[2] & 3u);
    aot_gpr[7] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0899C89C;
      }
      goto L_0899C8FC;
    }
L_0899C8FC:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(-5), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(-1), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0899C8FC;
      }
      goto L_0899C948;
    }
L_0899C948:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-64));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x0899C958u);
    aot_gpr[16] = (aot_gpr[8] + 0u);
    goto L_0899CB60;
L_0899C958:
    aot_gpr[2] = (aot_gpr[18] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (aot_gpr[16] | aot_gpr[20]);
        goto L_0899C8E8;
    }
    goto L_0899C964;
L_0899C964:
    aot_gpr[2] = (0u + 0u);
    goto L_0899C870;
L_0899C96C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(56));
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-23040));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (aot_gpr[6] & 63u);
    aot_gpr[7] = (aot_gpr[8] < static_cast<std::uint32_t>(56) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[8]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
      if (branch_taken) {
          goto L_0899C9BC;
      }
      goto L_0899C9B4;
    }
L_0899C9B4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(120));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[8]);
    goto L_0899C9BC;
L_0899C9BC:
    aot_gpr[31] = (0x0899C9C4u);
    aot_gpr[6] = (aot_gpr[2] + 0u);
    goto L_0899C7B8;
L_0899C9C4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[2] >> 29u);
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[31] = (0x0899C9F4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 2u, 0x0899D720u>(ctx, &aot_mem) && ctx.pc == 0x0899C9F4u) goto L_0899C9F4;
    return;
L_0899C9F4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x0899CA04u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8));
    goto L_0899C7B8;
L_0899CA04:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0899CA14u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 2u, 0x0899D720u>(ctx, &aot_mem) && ctx.pc == 0x0899CA14u) goto L_0899CA14;
    return;
L_0899CA14:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x0899CA24u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0899CA24u) goto L_0899CA24;
    return;
L_0899CA24:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899CA38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[31]);
    aot_gpr[31] = (0x0899CA70u);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    goto L_0899C77C;
L_0899CA70:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[6] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_0899CA84;
      }
      goto L_0899CA78;
    }
L_0899CA78:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_0899CAC0;
      }
      goto L_0899CA84;
    }
L_0899CA84:
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x0899CA94u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_0899C7B8;
L_0899CA94:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x0899CAA0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    goto L_0899C96C;
L_0899CAA0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899CAC0:
    aot_gpr[31] = (0x0899CAC8u);
    // nop
    goto L_0899C7B8;
L_0899CAC8:
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x0899CAD8u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_0899C7B8;
L_0899CAD8:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x0899CAE4u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    goto L_0899C96C;
L_0899CAE4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899CB04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[31] = (0x0899CB2Cu);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    goto L_0899C77C;
L_0899CB2C:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0899CB3Cu);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    goto L_0899C7B8;
L_0899CB3C:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x0899CB48u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    goto L_0899C96C;
L_0899CB48:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899CB60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (~(0u | aot_gpr[18]));
    aot_gpr[8] = (aot_gpr[18] & aot_gpr[19]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[20]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (55146u << 16u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 42104u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[9]);
    aot_gpr[17] = (std::rotr(aot_gpr[17], 25));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (~(0u | aot_gpr[17]));
    aot_gpr[8] = (aot_gpr[17] & aot_gpr[18]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[19]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (59591u << 16u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 46934u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[9]);
    aot_gpr[20] = (std::rotr(aot_gpr[20], 20));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (~(0u | aot_gpr[20]));
    aot_gpr[8] = (aot_gpr[20] & aot_gpr[17]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[18]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (9248u << 16u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 28891u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[9]);
    aot_gpr[19] = (std::rotr(aot_gpr[19], 15));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[20]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[9] = (~(0u | aot_gpr[19]));
    aot_gpr[8] = (aot_gpr[19] & aot_gpr[20]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[17]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (49597u << 16u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 52974u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[9]);
    aot_gpr[18] = (std::rotr(aot_gpr[18], 10));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[19]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[9] = (~(0u | aot_gpr[18]));
    aot_gpr[8] = (aot_gpr[18] & aot_gpr[19]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[20]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (62844u << 16u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 4015u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[9]);
    aot_gpr[17] = (std::rotr(aot_gpr[17], 25));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[9] = (~(0u | aot_gpr[17]));
    aot_gpr[8] = (aot_gpr[17] & aot_gpr[18]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[19]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (18311u << 16u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 50730u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[9]);
    aot_gpr[20] = (std::rotr(aot_gpr[20], 20));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[9] = (~(0u | aot_gpr[20]));
    aot_gpr[8] = (aot_gpr[20] & aot_gpr[17]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[18]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (43056u << 16u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 17939u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[9]);
    aot_gpr[19] = (std::rotr(aot_gpr[19], 15));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[20]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[9] = (~(0u | aot_gpr[19]));
    aot_gpr[8] = (aot_gpr[19] & aot_gpr[20]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[17]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (64838u << 16u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 38145u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[9]);
    aot_gpr[18] = (std::rotr(aot_gpr[18], 10));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[19]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[9] = (~(0u | aot_gpr[18]));
    aot_gpr[8] = (aot_gpr[18] & aot_gpr[19]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[20]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (27008u << 16u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 39128u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[9]);
    aot_gpr[17] = (std::rotr(aot_gpr[17], 25));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[9] = (~(0u | aot_gpr[17]));
    aot_gpr[8] = (aot_gpr[17] & aot_gpr[18]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[19]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (35652u << 16u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 63407u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[9]);
    aot_gpr[20] = (std::rotr(aot_gpr[20], 20));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[9] = (~(0u | aot_gpr[20]));
    aot_gpr[8] = (aot_gpr[20] & aot_gpr[17]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[18]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (65535u << 16u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 23473u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[9]);
    aot_gpr[19] = (std::rotr(aot_gpr[19], 15));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[20]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[9] = (~(0u | aot_gpr[19]));
    aot_gpr[8] = (aot_gpr[19] & aot_gpr[20]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[17]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (35164u << 16u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 55230u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[9]);
    aot_gpr[18] = (std::rotr(aot_gpr[18], 10));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[19]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[9] = (~(0u | aot_gpr[18]));
    aot_gpr[8] = (aot_gpr[18] & aot_gpr[19]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[20]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (27536u << 16u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 4386u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[9]);
    aot_gpr[17] = (std::rotr(aot_gpr[17], 25));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[9] = (~(0u | aot_gpr[17]));
    aot_gpr[8] = (aot_gpr[17] & aot_gpr[18]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[19]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (64920u << 16u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 29075u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[9]);
    aot_gpr[20] = (std::rotr(aot_gpr[20], 20));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[9] = (~(0u | aot_gpr[20]));
    aot_gpr[8] = (aot_gpr[20] & aot_gpr[17]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[18]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (42617u << 16u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 17294u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[9]);
    aot_gpr[19] = (std::rotr(aot_gpr[19], 15));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[20]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[9] = (~(0u | aot_gpr[19]));
    aot_gpr[8] = (aot_gpr[19] & aot_gpr[20]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[17]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (18868u << 16u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 2081u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[9]);
    aot_gpr[18] = (std::rotr(aot_gpr[18], 10));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[19]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (~(0u | aot_gpr[20]));
    aot_gpr[8] = (aot_gpr[18] & aot_gpr[20]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[19]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (63006u << 16u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 9570u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[9]);
    aot_gpr[17] = (std::rotr(aot_gpr[17], 27));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[9] = (~(0u | aot_gpr[19]));
    aot_gpr[8] = (aot_gpr[17] & aot_gpr[19]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[18]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (49216u << 16u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 45888u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[9]);
    aot_gpr[20] = (std::rotr(aot_gpr[20], 23));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[9] = (~(0u | aot_gpr[18]));
    aot_gpr[8] = (aot_gpr[20] & aot_gpr[18]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[17]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (9822u << 16u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 23121u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[9]);
    aot_gpr[19] = (std::rotr(aot_gpr[19], 18));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[20]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (~(0u | aot_gpr[17]));
    aot_gpr[8] = (aot_gpr[19] & aot_gpr[17]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[20]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (59830u << 16u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 51114u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[9]);
    aot_gpr[18] = (std::rotr(aot_gpr[18], 12));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[19]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[9] = (~(0u | aot_gpr[20]));
    aot_gpr[8] = (aot_gpr[18] & aot_gpr[20]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[19]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (54831u << 16u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 4189u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[9]);
    aot_gpr[17] = (std::rotr(aot_gpr[17], 27));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[9] = (~(0u | aot_gpr[19]));
    aot_gpr[8] = (aot_gpr[17] & aot_gpr[19]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[18]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (580u << 16u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 5203u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[9]);
    aot_gpr[20] = (std::rotr(aot_gpr[20], 23));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[9] = (~(0u | aot_gpr[18]));
    aot_gpr[8] = (aot_gpr[20] & aot_gpr[18]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[17]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (55457u << 16u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 59009u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[9]);
    aot_gpr[19] = (std::rotr(aot_gpr[19], 18));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[20]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[9] = (~(0u | aot_gpr[17]));
    aot_gpr[8] = (aot_gpr[19] & aot_gpr[17]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[20]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (59347u << 16u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 64456u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    ctx.pc = 0x0899D000u; return;
}

void recomp_unit_0408(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0408_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_408(Runtime &runtime) {
    runtime.register_generated_unit(408u, 0x0899C000u, 4096u, &recomp_unit_0408, &recomp_unit_0408_entry);
    runtime.register_function(0x0899C000u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C4ECu, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C51Cu, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C564u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C58Cu, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C59Cu, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C5CCu, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C5ECu, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C5FCu, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C608u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C61Cu, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C624u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C630u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C648u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C680u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C6A8u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C6CCu, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C6D4u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C6DCu, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C6ECu, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C6FCu, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C70Cu, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C720u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C748u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C758u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C764u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C77Cu, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C7B8u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C7F8u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C804u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C81Cu, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C848u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C854u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C860u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C86Cu, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C870u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C89Cu, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C8C8u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C8D8u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C8E4u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C8E8u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C8FCu, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C948u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C958u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C964u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C96Cu, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C9B4u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C9BCu, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C9C4u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899C9F4u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899CA04u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899CA14u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899CA24u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899CA38u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899CA70u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899CA78u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899CA84u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899CA94u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899CAA0u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899CAC0u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899CAC8u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899CAD8u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899CAE4u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899CB04u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899CB2Cu, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899CB3Cu, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899CB48u, &recomp_unit_0408, "recomp_unit_0408");
    runtime.register_function(0x0899CB60u, &recomp_unit_0408, "recomp_unit_0408");
}
} // namespace psprecomp
