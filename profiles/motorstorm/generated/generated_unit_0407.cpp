#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0407[969] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3,
    0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0,
    0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23,
    0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 41,
};
void recomp_unit_0407_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0899B000u;
        entry_id = (entry_delta < 3876u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0407[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0899B000;
    case 2u: goto L_0899B960;
    case 3u: goto L_0899B97C;
    case 4u: goto L_0899B990;
    case 5u: goto L_0899B9B4;
    case 6u: goto L_0899B9BC;
    case 7u: goto L_0899B9D0;
    case 8u: goto L_0899BA08;
    case 9u: goto L_0899BA94;
    case 10u: goto L_0899BAB8;
    case 11u: goto L_0899BAD0;
    case 12u: goto L_0899BAD8;
    case 13u: goto L_0899BAF8;
    case 14u: goto L_0899BB08;
    case 15u: goto L_0899BB50;
    case 16u: goto L_0899BB84;
    case 17u: goto L_0899BB8C;
    case 18u: goto L_0899BBD8;
    case 19u: goto L_0899BC18;
    case 20u: goto L_0899BC28;
    case 21u: goto L_0899BC34;
    case 22u: goto L_0899BC44;
    case 23u: goto L_0899BC7C;
    case 24u: goto L_0899BC84;
    case 25u: goto L_0899BC90;
    case 26u: goto L_0899BCA8;
    case 27u: goto L_0899BCE0;
    case 28u: goto L_0899BD1C;
    case 29u: goto L_0899BD2C;
    case 30u: goto L_0899BDB4;
    case 31u: goto L_0899BDDC;
    case 32u: goto L_0899BDEC;
    case 33u: goto L_0899BDF8;
    case 34u: goto L_0899BE10;
    case 35u: goto L_0899BE4C;
    case 36u: goto L_0899BE54;
    case 37u: goto L_0899BE58;
    case 38u: goto L_0899BE90;
    case 39u: goto L_0899BE98;
    case 40u: goto L_0899BEE8;
    case 41u: goto L_0899BF20;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0899B000:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[9]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[11]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 31));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[9]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[11]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 31));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[9]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[11]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 31));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[9]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[11]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 31));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[9]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[11]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 31));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[9]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[11]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 31));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (36635u << 16u);
    aot_gpr[8] = (aot_gpr[20] | aot_gpr[21]);
    aot_gpr[9] = (aot_gpr[9] | 48348u);
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[17]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[20] & aot_gpr[21]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[19], 27));
    aot_gpr[20] = (std::rotr(aot_gpr[20], 2));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (36635u << 16u);
    aot_gpr[8] = (aot_gpr[19] | aot_gpr[20]);
    aot_gpr[9] = (aot_gpr[9] | 48348u);
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[21]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[19] & aot_gpr[20]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[18], 27));
    aot_gpr[19] = (std::rotr(aot_gpr[19], 2));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (36635u << 16u);
    aot_gpr[8] = (aot_gpr[18] | aot_gpr[19]);
    aot_gpr[9] = (aot_gpr[9] | 48348u);
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[20]);
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[18] & aot_gpr[19]);
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[17], 27));
    aot_gpr[18] = (std::rotr(aot_gpr[18], 2));
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[9] = (36635u << 16u);
    aot_gpr[8] = (aot_gpr[17] | aot_gpr[18]);
    aot_gpr[9] = (aot_gpr[9] | 48348u);
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[19]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[17] & aot_gpr[18]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[21], 27));
    aot_gpr[17] = (std::rotr(aot_gpr[17], 2));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[9] = (36635u << 16u);
    aot_gpr[8] = (aot_gpr[21] | aot_gpr[17]);
    aot_gpr[9] = (aot_gpr[9] | 48348u);
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[18]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[21] & aot_gpr[17]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[20], 27));
    aot_gpr[21] = (std::rotr(aot_gpr[21], 2));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[9] = (36635u << 16u);
    aot_gpr[8] = (aot_gpr[20] | aot_gpr[21]);
    aot_gpr[9] = (aot_gpr[9] | 48348u);
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[17]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[20] & aot_gpr[21]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[19], 27));
    aot_gpr[20] = (std::rotr(aot_gpr[20], 2));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[9] = (36635u << 16u);
    aot_gpr[8] = (aot_gpr[19] | aot_gpr[20]);
    aot_gpr[9] = (aot_gpr[9] | 48348u);
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[21]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[19] & aot_gpr[20]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[18], 27));
    aot_gpr[19] = (std::rotr(aot_gpr[19], 2));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[9] = (36635u << 16u);
    aot_gpr[8] = (aot_gpr[18] | aot_gpr[19]);
    aot_gpr[9] = (aot_gpr[9] | 48348u);
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[20]);
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[18] & aot_gpr[19]);
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[17], 27));
    aot_gpr[18] = (std::rotr(aot_gpr[18], 2));
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[9] = (36635u << 16u);
    aot_gpr[8] = (aot_gpr[17] | aot_gpr[18]);
    aot_gpr[9] = (aot_gpr[9] | 48348u);
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[19]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[17] & aot_gpr[18]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[21], 27));
    aot_gpr[17] = (std::rotr(aot_gpr[17], 2));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[9] = (36635u << 16u);
    aot_gpr[8] = (aot_gpr[21] | aot_gpr[17]);
    aot_gpr[9] = (aot_gpr[9] | 48348u);
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[18]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[21] & aot_gpr[17]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[20], 27));
    aot_gpr[21] = (std::rotr(aot_gpr[21], 2));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[9] = (36635u << 16u);
    aot_gpr[8] = (aot_gpr[20] | aot_gpr[21]);
    aot_gpr[9] = (aot_gpr[9] | 48348u);
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[17]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[20] & aot_gpr[21]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[19], 27));
    aot_gpr[20] = (std::rotr(aot_gpr[20], 2));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[9] = (36635u << 16u);
    aot_gpr[8] = (aot_gpr[19] | aot_gpr[20]);
    aot_gpr[9] = (aot_gpr[9] | 48348u);
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[21]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[19] & aot_gpr[20]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[18], 27));
    aot_gpr[19] = (std::rotr(aot_gpr[19], 2));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[9] = (51810u << 16u);
    aot_gpr[8] = (aot_gpr[19] ^ aot_gpr[20]);
    aot_gpr[9] = (aot_gpr[9] | 49622u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[18]);
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[9]);
    aot_gpr[18] = (std::rotr(aot_gpr[18], 2));
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[17], 27));
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[3]);
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[9] = (51810u << 16u);
    aot_gpr[8] = (aot_gpr[18] ^ aot_gpr[19]);
    aot_gpr[9] = (aot_gpr[9] | 49622u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[17]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[9]);
    aot_gpr[17] = (std::rotr(aot_gpr[17], 2));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[21], 27));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[3]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[9] = (51810u << 16u);
    aot_gpr[8] = (aot_gpr[17] ^ aot_gpr[18]);
    aot_gpr[9] = (aot_gpr[9] | 49622u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[21]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[9]);
    aot_gpr[21] = (std::rotr(aot_gpr[21], 2));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[20], 27));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[3]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[9] = (51810u << 16u);
    aot_gpr[8] = (aot_gpr[21] ^ aot_gpr[17]);
    aot_gpr[9] = (aot_gpr[9] | 49622u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[20]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[9]);
    aot_gpr[20] = (std::rotr(aot_gpr[20], 2));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[19], 27));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[9]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[11]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 31));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[9]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[11]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 31));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[9]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[11]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 31));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[9]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[11]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 31));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[9]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[11]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 31));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[9]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[11]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 31));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[9]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[11]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 31));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[9]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[11]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 31));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[9]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[11]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 31));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[9]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[11]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 31));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[9]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[11]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 31));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[9]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[11]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 31));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[9]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[11]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 31));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[9]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[11]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 31));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[9]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[11]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 31));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[9]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[11]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 31));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (51810u << 16u);
    aot_gpr[8] = (aot_gpr[20] ^ aot_gpr[21]);
    aot_gpr[9] = (aot_gpr[9] | 49622u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[9]);
    aot_gpr[19] = (std::rotr(aot_gpr[19], 2));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[18], 27));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (51810u << 16u);
    aot_gpr[8] = (aot_gpr[19] ^ aot_gpr[20]);
    aot_gpr[9] = (aot_gpr[9] | 49622u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[18]);
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[9]);
    aot_gpr[18] = (std::rotr(aot_gpr[18], 2));
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[17], 27));
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[3]);
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (51810u << 16u);
    aot_gpr[8] = (aot_gpr[18] ^ aot_gpr[19]);
    aot_gpr[9] = (aot_gpr[9] | 49622u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[17]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[9]);
    aot_gpr[17] = (std::rotr(aot_gpr[17], 2));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[21], 27));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[3]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[9] = (51810u << 16u);
    aot_gpr[8] = (aot_gpr[17] ^ aot_gpr[18]);
    aot_gpr[9] = (aot_gpr[9] | 49622u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[21]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[9]);
    aot_gpr[21] = (std::rotr(aot_gpr[21], 2));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[20], 27));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[3]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[9] = (51810u << 16u);
    aot_gpr[8] = (aot_gpr[21] ^ aot_gpr[17]);
    aot_gpr[9] = (aot_gpr[9] | 49622u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[20]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[9]);
    aot_gpr[20] = (std::rotr(aot_gpr[20], 2));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[19], 27));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[9] = (51810u << 16u);
    aot_gpr[8] = (aot_gpr[20] ^ aot_gpr[21]);
    aot_gpr[9] = (aot_gpr[9] | 49622u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[9]);
    aot_gpr[19] = (std::rotr(aot_gpr[19], 2));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[18], 27));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[9] = (51810u << 16u);
    aot_gpr[8] = (aot_gpr[19] ^ aot_gpr[20]);
    aot_gpr[9] = (aot_gpr[9] | 49622u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[18]);
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[9]);
    aot_gpr[18] = (std::rotr(aot_gpr[18], 2));
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[17], 27));
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[3]);
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[9] = (51810u << 16u);
    aot_gpr[8] = (aot_gpr[18] ^ aot_gpr[19]);
    aot_gpr[9] = (aot_gpr[9] | 49622u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[17]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[9]);
    aot_gpr[17] = (std::rotr(aot_gpr[17], 2));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[21], 27));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[3]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[9] = (51810u << 16u);
    aot_gpr[8] = (aot_gpr[17] ^ aot_gpr[18]);
    aot_gpr[9] = (aot_gpr[9] | 49622u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[21]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[9]);
    aot_gpr[21] = (std::rotr(aot_gpr[21], 2));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[20], 27));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[3]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[9] = (51810u << 16u);
    aot_gpr[8] = (aot_gpr[21] ^ aot_gpr[17]);
    aot_gpr[9] = (aot_gpr[9] | 49622u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[20]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[9]);
    aot_gpr[20] = (std::rotr(aot_gpr[20], 2));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[19], 27));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[9] = (51810u << 16u);
    aot_gpr[8] = (aot_gpr[20] ^ aot_gpr[21]);
    aot_gpr[9] = (aot_gpr[9] | 49622u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[9]);
    aot_gpr[19] = (std::rotr(aot_gpr[19], 2));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[18], 27));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[9] = (51810u << 16u);
    aot_gpr[8] = (aot_gpr[19] ^ aot_gpr[20]);
    aot_gpr[9] = (aot_gpr[9] | 49622u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[18]);
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[9]);
    aot_gpr[18] = (std::rotr(aot_gpr[18], 2));
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[17], 27));
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[3]);
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[9] = (51810u << 16u);
    aot_gpr[8] = (aot_gpr[18] ^ aot_gpr[19]);
    aot_gpr[9] = (aot_gpr[9] | 49622u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[17]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[9]);
    aot_gpr[17] = (std::rotr(aot_gpr[17], 2));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[21], 27));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[3]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[9] = (51810u << 16u);
    aot_gpr[8] = (aot_gpr[17] ^ aot_gpr[18]);
    aot_gpr[9] = (aot_gpr[9] | 49622u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[21]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[9]);
    aot_gpr[21] = (std::rotr(aot_gpr[21], 2));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[20], 27));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[3]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[9] = (51810u << 16u);
    aot_gpr[8] = (aot_gpr[21] ^ aot_gpr[17]);
    aot_gpr[9] = (aot_gpr[9] | 49622u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[20]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[9]);
    aot_gpr[20] = (std::rotr(aot_gpr[20], 2));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[19], 27));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[9] = (51810u << 16u);
    aot_gpr[8] = (aot_gpr[20] ^ aot_gpr[21]);
    aot_gpr[9] = (aot_gpr[9] | 49622u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[9]);
    aot_gpr[19] = (std::rotr(aot_gpr[19], 2));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[18], 27));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[20]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[21]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899B960:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (((aot_gpr[8] & 0x000000FFu) << 24u) | ((aot_gpr[8] & 0x0000FF00u) << 8u) | ((aot_gpr[8] & 0x00FF0000u) >> 8u) | ((aot_gpr[8] & 0xFF000000u) >> 24u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_0899B960;
      }
      goto L_0899B97C;
    }
L_0899B97C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899B990:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4));
    aot_gpr[8] = (((aot_gpr[8] & 0x000000FFu) << 24u) | ((aot_gpr[8] & 0x0000FF00u) << 8u) | ((aot_gpr[8] & 0x00FF0000u) >> 8u) | ((aot_gpr[8] & 0xFF000000u) >> 24u));
    rt.memory().aot_store_word_left(aot_gpr[4] + static_cast<std::uint32_t>(3), aot_gpr[8]);
    rt.memory().aot_store_word_right(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0899B9BC;
      }
      goto L_0899B9B4;
    }
L_0899B9B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B990;
      }
      goto L_0899B9BC;
    }
L_0899B9BC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899B9D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899BA08:
    aot_gpr[14] = (aot_gpr[5] + 0u);
    aot_gpr[13] = (aot_gpr[4] + 0u);
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[4] + static_cast<std::uint32_t>(3), aot_gpr[3]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[14] + static_cast<std::uint32_t>(3), aot_gpr[7]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[4] + static_cast<std::uint32_t>(7), aot_gpr[4]));
    aot_gpr[8] = (rt.memory().aot_load_word_left(aot_gpr[14] + static_cast<std::uint32_t>(7), aot_gpr[8]));
    aot_gpr[9] = (rt.memory().aot_load_word_left(aot_gpr[14] + static_cast<std::uint32_t>(11), aot_gpr[9]));
    aot_gpr[10] = (rt.memory().aot_load_word_left(aot_gpr[14] + static_cast<std::uint32_t>(15), aot_gpr[10]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[13] + static_cast<std::uint32_t>(11), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[13] + static_cast<std::uint32_t>(15), aot_gpr[6]));
    aot_gpr[8] = (rt.memory().aot_load_word_right(aot_gpr[14] + static_cast<std::uint32_t>(4), aot_gpr[8]));
    aot_gpr[9] = (rt.memory().aot_load_word_right(aot_gpr[14] + static_cast<std::uint32_t>(8), aot_gpr[9]));
    aot_gpr[10] = (rt.memory().aot_load_word_right(aot_gpr[14] + static_cast<std::uint32_t>(12), aot_gpr[10]));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[7]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[13] + static_cast<std::uint32_t>(4), aot_gpr[4]));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[13] + static_cast<std::uint32_t>(8), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[13] + static_cast<std::uint32_t>(12), aot_gpr[6]));
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[11] = (aot_gpr[13] + 0u);
    aot_gpr[12] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[15] = (0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[7]);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[8]);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(11), aot_gpr[9]);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(15), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[10]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[9]);
    goto L_0899BA94;
L_0899BA94:
    aot_gpr[2] = (aot_gpr[12] + aot_gpr[14]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[29] + aot_gpr[12]);
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[3] ^ aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr[3]));
    { const bool branch_taken = aot_gpr[12] != aot_gpr[15];
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899BA94;
      }
      goto L_0899BAB8;
    }
L_0899BAB8:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[7] = (aot_gpr[2] + static_cast<std::uint32_t>(-17000));
    aot_gpr[8] = (0u + 0u);
    aot_gpr[3] = (0u + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(18));
    goto L_0899BAD0;
L_0899BAD0:
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[7]);
    goto L_0899BAD8;
L_0899BAD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] ^ aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[3] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[7]);
      if (branch_taken) {
          goto L_0899BAD8;
      }
      goto L_0899BAF8;
    }
L_0899BAF8:
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[9];
    aot_gpr[3] = (aot_gpr[2] & 255u);
      if (branch_taken) {
          goto L_0899BAD0;
      }
      goto L_0899BB08;
    }
L_0899BB08:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store_word_left(aot_gpr[13] + static_cast<std::uint32_t>(3), aot_gpr[3]);
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[9] = (aot_gpr[2] + static_cast<std::uint32_t>(-17000));
    rt.memory().aot_store_word_right(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[13] + 0u);
    aot_gpr[7] = (0u + 0u);
    rt.memory().aot_store_word_left(aot_gpr[13] + static_cast<std::uint32_t>(7), aot_gpr[4]);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_right(aot_gpr[13] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store_word_left(aot_gpr[13] + static_cast<std::uint32_t>(11), aot_gpr[5]);
    rt.memory().aot_store_word_right(aot_gpr[13] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    rt.memory().aot_store_word_left(aot_gpr[13] + static_cast<std::uint32_t>(15), aot_gpr[2]);
    rt.memory().aot_store_word_right(aot_gpr[13] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[13] + static_cast<std::uint32_t>(31)));
    goto L_0899BB50;
L_0899BB50:
    aot_gpr[3] = (aot_gpr[14] + aot_gpr[7]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] ^ aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[9]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899BB50;
      }
      goto L_0899BB84;
    }
L_0899BB84:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899BB8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[21] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[16] = (aot_gpr[2] - aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[3] = (aot_gpr[3] & 15u);
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(48), aot_gpr[3]);
      if (branch_taken) {
          goto L_0899BC18;
      }
      goto L_0899BBD8;
    }
L_0899BBD8:
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[3] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[5] = (aot_gpr[21] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[19] - aot_gpr[7]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    (void)rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem); return;
L_0899BC18:
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[31] = (0x0899BC28u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0899BC28u) goto L_0899BC28;
    return;
L_0899BC28:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x0899BC34u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    goto L_0899BA08;
L_0899BC34:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(15));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_0899BC7C;
      }
      goto L_0899BC44;
    }
L_0899BC44:
    aot_gpr[7] = (aot_gpr[16] + 0u);
    aot_gpr[3] = (0u + 0u);
    aot_gpr[5] = (aot_gpr[21] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[19] - aot_gpr[7]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    (void)rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem); return;
L_0899BC7C:
    aot_gpr[17] = (aot_gpr[16] + 0u);
    aot_gpr[16] = (aot_gpr[21] + aot_gpr[16]);
    goto L_0899BC84;
L_0899BC84:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0899BC90u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    goto L_0899BA08;
L_0899BC90:
    aot_gpr[2] = (aot_gpr[17] + static_cast<std::uint32_t>(31));
    aot_gpr[7] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[19] ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[7] + 0u);
      if (branch_taken) {
          goto L_0899BC84;
      }
      goto L_0899BCA8;
    }
L_0899BCA8:
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[3] = (0u + 0u);
    aot_gpr[5] = (aot_gpr[21] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[19] - aot_gpr[7]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    (void)rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem); return;
L_0899BCE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[2]);
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-23172));
    aot_gpr[3] = (aot_gpr[6] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[31] = (0x0899BD1Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_0899BB8C;
L_0899BD1C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x0899BD2Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    goto L_0899BB8C;
L_0899BD2C:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    rt.memory().aot_store_word_left(aot_gpr[17] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    rt.memory().aot_store_word_right(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[17] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    rt.memory().aot_store_word_left(aot_gpr[17] + static_cast<std::uint32_t>(11), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[17] + static_cast<std::uint32_t>(15), aot_gpr[5]);
    rt.memory().aot_store_word_right(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899BDB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    aot_gpr[31] = (0x0899BDDCu);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    goto L_0899B9D0;
L_0899BDDC:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0899BDECu);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    goto L_0899BB8C;
L_0899BDEC:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x0899BDF8u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    goto L_0899BCE0;
L_0899BDF8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899BE10:
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
L_0899BE4C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_0899BE90;
      }
      goto L_0899BE54;
    }
L_0899BE54:
    aot_gpr[8] = (0u + 0u);
    goto L_0899BE58;
L_0899BE58:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[6] ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] >> 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(2)));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(3)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0899BE58;
      }
      goto L_0899BE90;
    }
L_0899BE90:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899BE98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[31]);
    aot_gpr[25] = (aot_gpr[4] + 0u);
    aot_gpr[6] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[30]);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_0899BEE8;
L_0899BEE8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(1)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(3)));
    aot_gpr[3] = (aot_gpr[3] << 8u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[4] << 16u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[7];
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0899BEE8;
      }
      goto L_0899BF20;
    }
L_0899BF20:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (~(0u | aot_gpr[31]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (aot_gpr[31] & aot_gpr[30]);
    aot_gpr[2] = (aot_gpr[24] & aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[17]);
    aot_gpr[6] = (aot_gpr[3] + aot_gpr[6]);
    aot_gpr[6] = (std::rotr(aot_gpr[6], 29));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (~(0u | aot_gpr[6]));
    aot_gpr[4] = (aot_gpr[31] & aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[30] & aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[22]);
    aot_gpr[4] = (aot_gpr[24] + aot_gpr[4]);
    aot_gpr[4] = (std::rotr(aot_gpr[4], 25));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (~(0u | aot_gpr[4]));
    aot_gpr[2] = (aot_gpr[31] & aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[6] & aot_gpr[4]);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[20]);
    aot_gpr[8] = (aot_gpr[30] + aot_gpr[8]);
    aot_gpr[8] = (std::rotr(aot_gpr[8], 21));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (~(0u | aot_gpr[8]));
    aot_gpr[2] = (aot_gpr[6] & aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[4] & aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[23]);
    aot_gpr[7] = (aot_gpr[31] + aot_gpr[7]);
    aot_gpr[7] = (std::rotr(aot_gpr[7], 13));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (~(0u | aot_gpr[7]));
    aot_gpr[3] = (aot_gpr[4] & aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[8] & aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[15]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[2]);
    aot_gpr[6] = (std::rotr(aot_gpr[6], 29));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (~(0u | aot_gpr[6]));
    aot_gpr[3] = (aot_gpr[8] & aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[7] & aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[4] = (std::rotr(aot_gpr[4], 25));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[3] = (~(0u | aot_gpr[4]));
    aot_gpr[3] = (aot_gpr[7] & aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[6] & aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[18]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[2]);
    ctx.pc = 0x0899C000u; return;
}

void recomp_unit_0407(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0407_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_407(Runtime &runtime) {
    runtime.register_generated_unit(407u, 0x0899B000u, 4096u, &recomp_unit_0407, &recomp_unit_0407_entry);
    runtime.register_function(0x0899B000u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899B960u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899B97Cu, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899B990u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899B9B4u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899B9BCu, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899B9D0u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BA08u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BA94u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BAB8u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BAD0u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BAD8u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BAF8u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BB08u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BB50u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BB84u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BB8Cu, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BBD8u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BC18u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BC28u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BC34u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BC44u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BC7Cu, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BC84u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BC90u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BCA8u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BCE0u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BD1Cu, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BD2Cu, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BDB4u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BDDCu, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BDECu, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BDF8u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BE10u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BE4Cu, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BE54u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BE58u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BE90u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BE98u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BEE8u, &recomp_unit_0407, "recomp_unit_0407");
    runtime.register_function(0x0899BF20u, &recomp_unit_0407, "recomp_unit_0407");
}
} // namespace psprecomp
