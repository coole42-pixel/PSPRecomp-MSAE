#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0409[1022] = {
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
    0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0,
    4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0,
    0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0,
    0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 31, 32, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 35, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37,
    0, 38, 0, 0, 0, 39, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43,
    0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 46, 0, 47, 0, 0, 0, 48, 0, 49, 0, 50, 0, 0, 0, 51, 0, 52, 0, 0, 53,
    0, 54, 0, 0, 0, 55, 0, 56, 0, 57, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 60, 0, 61, 0, 62, 0, 0, 0, 0, 0,
    0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 68, 0, 0, 69, 0, 70, 0, 71,
    0, 0, 72, 0, 0, 0, 0, 73, 0, 74, 0, 0, 75, 0, 0, 0, 0, 76, 0, 77, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 80,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 89, 0, 0, 0, 90,
};
void recomp_unit_0409_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0899D000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0409[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0899D000;
    case 2u: goto L_0899D720;
    case 3u: goto L_0899D774;
    case 4u: goto L_0899D780;
    case 5u: goto L_0899D79C;
    case 6u: goto L_0899D7F4;
    case 7u: goto L_0899D814;
    case 8u: goto L_0899D824;
    case 9u: goto L_0899D854;
    case 10u: goto L_0899D8A8;
    case 11u: goto L_0899D8B8;
    case 12u: goto L_0899D8D0;
    case 13u: goto L_0899D904;
    case 14u: goto L_0899D90C;
    case 15u: goto L_0899D970;
    case 16u: goto L_0899D9A0;
    case 17u: goto L_0899D9D4;
    case 18u: goto L_0899D9DC;
    case 19u: goto L_0899DA40;
    case 20u: goto L_0899DA64;
    case 21u: goto L_0899DA84;
    case 22u: goto L_0899DAA0;
    case 23u: goto L_0899DAD4;
    case 24u: goto L_0899DADC;
    case 25u: goto L_0899DB3C;
    case 26u: goto L_0899DB70;
    case 27u: goto L_0899DB7C;
    case 28u: goto L_0899DB80;
    case 29u: goto L_0899DBC0;
    case 30u: goto L_0899DBC8;
    case 31u: goto L_0899DBD8;
    case 32u: goto L_0899DBDC;
    case 33u: goto L_0899DC10;
    case 34u: goto L_0899DC18;
    case 35u: goto L_0899DC2C;
    case 36u: goto L_0899DC30;
    case 37u: goto L_0899DC7C;
    case 38u: goto L_0899DC84;
    case 39u: goto L_0899DC94;
    case 40u: goto L_0899DC98;
    case 41u: goto L_0899DCD0;
    case 42u: goto L_0899DCD8;
    case 43u: goto L_0899DCFC;
    case 44u: goto L_0899DD14;
    case 45u: goto L_0899DD24;
    case 46u: goto L_0899DD30;
    case 47u: goto L_0899DD38;
    case 48u: goto L_0899DD48;
    case 49u: goto L_0899DD50;
    case 50u: goto L_0899DD58;
    case 51u: goto L_0899DD68;
    case 52u: goto L_0899DD70;
    case 53u: goto L_0899DD7C;
    case 54u: goto L_0899DD84;
    case 55u: goto L_0899DD94;
    case 56u: goto L_0899DD9C;
    case 57u: goto L_0899DDA4;
    case 58u: goto L_0899DDB8;
    case 59u: goto L_0899DDC0;
    case 60u: goto L_0899DDD8;
    case 61u: goto L_0899DDE0;
    case 62u: goto L_0899DDE8;
    case 63u: goto L_0899DE0C;
    case 64u: goto L_0899DE30;
    case 65u: goto L_0899DE38;
    case 66u: goto L_0899DE48;
    case 67u: goto L_0899DE58;
    case 68u: goto L_0899DE60;
    case 69u: goto L_0899DE6C;
    case 70u: goto L_0899DE74;
    case 71u: goto L_0899DE7C;
    case 72u: goto L_0899DE88;
    case 73u: goto L_0899DE9C;
    case 74u: goto L_0899DEA4;
    case 75u: goto L_0899DEB0;
    case 76u: goto L_0899DEC4;
    case 77u: goto L_0899DECC;
    case 78u: goto L_0899DED8;
    case 79u: goto L_0899DEE0;
    case 80u: goto L_0899DEFC;
    case 81u: goto L_0899DF28;
    case 82u: goto L_0899DF34;
    case 83u: goto L_0899DF40;
    case 84u: goto L_0899DF6C;
    case 85u: goto L_0899DF7C;
    case 86u: goto L_0899DFA4;
    case 87u: goto L_0899DFD0;
    case 88u: goto L_0899DFD8;
    case 89u: goto L_0899DFE4;
    case 90u: goto L_0899DFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0899D000:
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[9]);
    aot_gpr[18] = (std::rotr(aot_gpr[18], 12));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[19]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[9] = (~(0u | aot_gpr[20]));
    aot_gpr[8] = (aot_gpr[18] & aot_gpr[20]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[19]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (8673u << 16u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 52710u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[9]);
    aot_gpr[17] = (std::rotr(aot_gpr[17], 27));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[9] = (~(0u | aot_gpr[19]));
    aot_gpr[8] = (aot_gpr[17] & aot_gpr[19]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[18]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (49975u << 16u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 2006u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[9]);
    aot_gpr[20] = (std::rotr(aot_gpr[20], 23));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[9] = (~(0u | aot_gpr[18]));
    aot_gpr[8] = (aot_gpr[20] & aot_gpr[18]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[17]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (62677u << 16u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 3463u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[9]);
    aot_gpr[19] = (std::rotr(aot_gpr[19], 18));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[20]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[9] = (~(0u | aot_gpr[17]));
    aot_gpr[8] = (aot_gpr[19] & aot_gpr[17]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[20]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (17754u << 16u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 5357u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[9]);
    aot_gpr[18] = (std::rotr(aot_gpr[18], 12));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[19]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[9] = (~(0u | aot_gpr[20]));
    aot_gpr[8] = (aot_gpr[18] & aot_gpr[20]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[19]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (43491u << 16u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 59653u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[9]);
    aot_gpr[17] = (std::rotr(aot_gpr[17], 27));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (~(0u | aot_gpr[19]));
    aot_gpr[8] = (aot_gpr[17] & aot_gpr[19]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[18]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (64751u << 16u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 41976u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[9]);
    aot_gpr[20] = (std::rotr(aot_gpr[20], 23));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[9] = (~(0u | aot_gpr[18]));
    aot_gpr[8] = (aot_gpr[20] & aot_gpr[18]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[17]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (26479u << 16u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 729u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[9]);
    aot_gpr[19] = (std::rotr(aot_gpr[19], 18));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[20]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[9] = (~(0u | aot_gpr[17]));
    aot_gpr[8] = (aot_gpr[19] & aot_gpr[17]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[20]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[9] = (36138u << 16u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 19594u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[9]);
    aot_gpr[18] = (std::rotr(aot_gpr[18], 12));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[19]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (aot_gpr[18] ^ aot_gpr[19]);
    aot_gpr[9] = (65530u << 16u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[20]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 14658u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[9]);
    aot_gpr[17] = (std::rotr(aot_gpr[17], 28));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (aot_gpr[17] ^ aot_gpr[18]);
    aot_gpr[9] = (34673u << 16u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[19]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 63105u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[9]);
    aot_gpr[20] = (std::rotr(aot_gpr[20], 21));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (aot_gpr[20] ^ aot_gpr[17]);
    aot_gpr[9] = (28061u << 16u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[18]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 24866u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[9]);
    aot_gpr[19] = (std::rotr(aot_gpr[19], 16));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[20]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[8] = (aot_gpr[19] ^ aot_gpr[20]);
    aot_gpr[9] = (64997u << 16u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[17]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 14348u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[9]);
    aot_gpr[18] = (std::rotr(aot_gpr[18], 9));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[19]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[18] ^ aot_gpr[19]);
    aot_gpr[9] = (42174u << 16u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[20]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 59972u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[9]);
    aot_gpr[17] = (std::rotr(aot_gpr[17], 28));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (aot_gpr[17] ^ aot_gpr[18]);
    aot_gpr[9] = (19422u << 16u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[19]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 53161u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[9]);
    aot_gpr[20] = (std::rotr(aot_gpr[20], 21));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[8] = (aot_gpr[20] ^ aot_gpr[17]);
    aot_gpr[9] = (63163u << 16u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[18]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 19296u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[9]);
    aot_gpr[19] = (std::rotr(aot_gpr[19], 16));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[20]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[8] = (aot_gpr[19] ^ aot_gpr[20]);
    aot_gpr[9] = (48831u << 16u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[17]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 48240u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[9]);
    aot_gpr[18] = (std::rotr(aot_gpr[18], 9));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[19]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[8] = (aot_gpr[18] ^ aot_gpr[19]);
    aot_gpr[9] = (10395u << 16u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[20]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 32454u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[9]);
    aot_gpr[17] = (std::rotr(aot_gpr[17], 28));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[17] ^ aot_gpr[18]);
    aot_gpr[9] = (60065u << 16u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[19]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 10234u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[9]);
    aot_gpr[20] = (std::rotr(aot_gpr[20], 21));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (aot_gpr[20] ^ aot_gpr[17]);
    aot_gpr[9] = (54511u << 16u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[18]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 12421u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[9]);
    aot_gpr[19] = (std::rotr(aot_gpr[19], 16));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[20]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (aot_gpr[19] ^ aot_gpr[20]);
    aot_gpr[9] = (1160u << 16u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[17]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 7429u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[9]);
    aot_gpr[18] = (std::rotr(aot_gpr[18], 9));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[19]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[8] = (aot_gpr[18] ^ aot_gpr[19]);
    aot_gpr[9] = (55764u << 16u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[20]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 53305u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[9]);
    aot_gpr[17] = (std::rotr(aot_gpr[17], 28));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[8] = (aot_gpr[17] ^ aot_gpr[18]);
    aot_gpr[9] = (59099u << 16u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[19]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 39397u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[9]);
    aot_gpr[20] = (std::rotr(aot_gpr[20], 21));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[8] = (aot_gpr[20] ^ aot_gpr[17]);
    aot_gpr[9] = (8098u << 16u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[18]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 31992u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[9]);
    aot_gpr[19] = (std::rotr(aot_gpr[19], 16));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[20]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[19] ^ aot_gpr[20]);
    aot_gpr[9] = (50348u << 16u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[17]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[9] | 22117u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[9]);
    aot_gpr[18] = (std::rotr(aot_gpr[18], 9));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[19]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (~(0u | aot_gpr[20]));
    aot_gpr[9] = (62505u << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[18]);
    aot_gpr[9] = (aot_gpr[9] | 8772u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[17] = (std::rotr(aot_gpr[17], 26));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[8] = (~(0u | aot_gpr[19]));
    aot_gpr[9] = (17194u << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[17]);
    aot_gpr[9] = (aot_gpr[9] | 65431u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[18]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[20] = (std::rotr(aot_gpr[20], 22));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[8] = (~(0u | aot_gpr[18]));
    aot_gpr[9] = (43924u << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[20]);
    aot_gpr[9] = (aot_gpr[9] | 9127u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[17]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[19] = (std::rotr(aot_gpr[19], 17));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[20]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (~(0u | aot_gpr[17]));
    aot_gpr[9] = (64659u << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[19]);
    aot_gpr[9] = (aot_gpr[9] | 41017u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[20]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[18] = (std::rotr(aot_gpr[18], 11));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[19]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[8] = (~(0u | aot_gpr[20]));
    aot_gpr[9] = (25947u << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[18]);
    aot_gpr[9] = (aot_gpr[9] | 22979u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[17] = (std::rotr(aot_gpr[17], 26));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (~(0u | aot_gpr[19]));
    aot_gpr[9] = (36620u << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[17]);
    aot_gpr[9] = (aot_gpr[9] | 52370u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[18]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[20] = (std::rotr(aot_gpr[20], 22));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[8] = (~(0u | aot_gpr[18]));
    aot_gpr[9] = (65519u << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[20]);
    aot_gpr[9] = (aot_gpr[9] | 62589u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[17]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[19] = (std::rotr(aot_gpr[19], 17));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[20]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (~(0u | aot_gpr[17]));
    aot_gpr[9] = (34180u << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[19]);
    aot_gpr[9] = (aot_gpr[9] | 24017u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[20]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[18] = (std::rotr(aot_gpr[18], 11));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[19]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (~(0u | aot_gpr[20]));
    aot_gpr[9] = (28584u << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[18]);
    aot_gpr[9] = (aot_gpr[9] | 32335u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[17] = (std::rotr(aot_gpr[17], 26));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[8] = (~(0u | aot_gpr[19]));
    aot_gpr[9] = (65068u << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[17]);
    aot_gpr[9] = (aot_gpr[9] | 59104u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[18]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[20] = (std::rotr(aot_gpr[20], 22));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (~(0u | aot_gpr[18]));
    aot_gpr[9] = (41729u << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[20]);
    aot_gpr[9] = (aot_gpr[9] | 17172u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[17]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[19] = (std::rotr(aot_gpr[19], 17));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[20]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[8] = (~(0u | aot_gpr[17]));
    aot_gpr[9] = (19976u << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[19]);
    aot_gpr[9] = (aot_gpr[9] | 4513u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[20]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[18] = (std::rotr(aot_gpr[18], 11));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[19]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (~(0u | aot_gpr[20]));
    aot_gpr[9] = (63315u << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[18]);
    aot_gpr[9] = (aot_gpr[9] | 32386u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[8]);
    aot_gpr[17] = (std::rotr(aot_gpr[17], 26));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (~(0u | aot_gpr[19]));
    aot_gpr[9] = (48442u << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[17]);
    aot_gpr[9] = (aot_gpr[9] | 62005u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[18]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[8]);
    aot_gpr[20] = (std::rotr(aot_gpr[20], 22));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (~(0u | aot_gpr[18]));
    aot_gpr[9] = (10967u << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[20]);
    aot_gpr[9] = (aot_gpr[9] | 53947u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[17]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[19] = (std::rotr(aot_gpr[19], 17));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[20]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[8] = (~(0u | aot_gpr[17]));
    aot_gpr[9] = (60294u << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[19]);
    aot_gpr[9] = (aot_gpr[9] | 54161u);
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[20]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[8]);
    aot_gpr[18] = (std::rotr(aot_gpr[18], 11));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[19]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D720:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[8] = (aot_gpr[8] >> 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[8] = (aot_gpr[8] >> 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[8] = (aot_gpr[8] >> 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[8] = (aot_gpr[8] >> 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[8] = (aot_gpr[8] >> 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[8] = (aot_gpr[8] >> 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) > 0;
    // nop
      if (branch_taken) {
          goto L_0899D720;
      }
      goto L_0899D774;
    }
L_0899D774:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D780:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    goto L_0899D8D0;
L_0899D79C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[3] ^ aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] ^ aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[2] ^ aot_gpr[8]);
    aot_gpr[3] = (aot_gpr[2] ^ aot_gpr[3]);
    rt.memory().aot_store_word_left(aot_gpr[5] + static_cast<std::uint32_t>(3), aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[2] ^ aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[2] ^ aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] ^ aot_gpr[8]);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store_word_left(aot_gpr[5] + static_cast<std::uint32_t>(7), aot_gpr[6]);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_right(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    rt.memory().aot_store_word_left(aot_gpr[5] + static_cast<std::uint32_t>(11), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    rt.memory().aot_store_word_left(aot_gpr[5] + static_cast<std::uint32_t>(15), aot_gpr[2]);
    jump_target = aot_gpr[31];
    rt.memory().aot_store_word_right(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D7F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x0899D814u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_0899D780;
L_0899D814:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0899D824u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    goto L_0899DAA0;
L_0899D824:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D854:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[4] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[4] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[4] + static_cast<std::uint32_t>(11), aot_gpr[7]));
    aot_gpr[8] = (rt.memory().aot_load_word_left(aot_gpr[4] + static_cast<std::uint32_t>(15), aot_gpr[8]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[8] = (rt.memory().aot_load_word_right(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[8]));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[7]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    aot_gpr[31] = (0x0899D8A8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    goto L_0899DAA0;
L_0899D8A8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0899D8B8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    goto L_0899D8D0;
L_0899D8B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D8D0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (23354u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] | 42580u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (30103u << 16u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (aot_gpr[3] | 2637u);
    aot_gpr[13] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[14] = (rt.memory().aot_load_word_left(aot_gpr[13] + static_cast<std::uint32_t>(3), aot_gpr[14]));
    aot_gpr[14] = (rt.memory().aot_load_word_right(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[14]));
    rt.memory().aot_store_word_left(aot_gpr[13] + static_cast<std::uint32_t>(3), 0u);
    rt.memory().aot_store_word_right(aot_gpr[13] + static_cast<std::uint32_t>(0), 0u);
    goto L_0899D904;
L_0899D904:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0899D970;
      }
      goto L_0899D90C;
    }
L_0899D90C:
    aot_gpr[11] = (aot_gpr[11] ^ aot_gpr[2]);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[8]);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[11]);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[11]);
    aot_gpr[10] = (std::rotr(aot_gpr[10], 25));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[10]);
    aot_gpr[10] = (aot_gpr[10] ^ aot_gpr[3]);
    aot_gpr[7] = (std::rotr(aot_gpr[9], 21));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[9] = (~(aot_gpr[7] | 0u));
    aot_gpr[8] = (std::rotr(aot_gpr[8], 15));
    aot_gpr[12] = (aot_gpr[10] & aot_gpr[9]);
    aot_gpr[1] = (aot_gpr[7] & aot_gpr[8]);
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[12]);
    aot_gpr[8] = (~(aot_gpr[8] | 0u));
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[1]);
    aot_gpr[1] = (rt.memory().aot_load_word_right(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[1]));
    aot_gpr[1] = (rt.memory().aot_load_word_left(aot_gpr[5] + static_cast<std::uint32_t>(3), aot_gpr[1]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[11] = (aot_gpr[11] ^ aot_gpr[1]);
    rt.memory().aot_store_word_right(aot_gpr[5] + static_cast<std::uint32_t>(-4), aot_gpr[11]);
    rt.memory().aot_store_word_left(aot_gpr[5] + static_cast<std::uint32_t>(-1), aot_gpr[11]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D904;
      }
      goto L_0899D970;
    }
L_0899D970:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[8] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[9]);
    aot_gpr[8] = (aot_gpr[10] + aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[10]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[11]);
    rt.memory().aot_store_word_left(aot_gpr[13] + static_cast<std::uint32_t>(3), aot_gpr[14]);
    rt.memory().aot_store_word_right(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D9A0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (23354u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] | 42580u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (30103u << 16u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (aot_gpr[3] | 2637u);
    aot_gpr[13] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[14] = (rt.memory().aot_load_word_left(aot_gpr[13] + static_cast<std::uint32_t>(3), aot_gpr[14]));
    aot_gpr[14] = (rt.memory().aot_load_word_right(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[14]));
    rt.memory().aot_store_word_left(aot_gpr[13] + static_cast<std::uint32_t>(3), 0u);
    rt.memory().aot_store_word_right(aot_gpr[13] + static_cast<std::uint32_t>(0), 0u);
    goto L_0899D9D4;
L_0899D9D4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0899DA40;
      }
      goto L_0899D9DC;
    }
L_0899D9DC:
    aot_gpr[11] = (aot_gpr[11] ^ aot_gpr[2]);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[8]);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[11]);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[11]);
    aot_gpr[10] = (std::rotr(aot_gpr[10], 25));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[10]);
    aot_gpr[10] = (aot_gpr[10] ^ aot_gpr[3]);
    aot_gpr[7] = (std::rotr(aot_gpr[9], 21));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[9] = (~(aot_gpr[7] | 0u));
    aot_gpr[8] = (std::rotr(aot_gpr[8], 15));
    aot_gpr[12] = (aot_gpr[10] & aot_gpr[9]);
    aot_gpr[1] = (aot_gpr[7] & aot_gpr[8]);
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[12]);
    aot_gpr[8] = (~(aot_gpr[8] | 0u));
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[1]);
    aot_gpr[1] = (rt.memory().aot_load_word_left(aot_gpr[5] + static_cast<std::uint32_t>(3), aot_gpr[1]));
    aot_gpr[1] = (rt.memory().aot_load_word_right(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[1]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[1] = (aot_gpr[1] ^ aot_gpr[11]);
    rt.memory().aot_store_word_left(aot_gpr[5] + static_cast<std::uint32_t>(-1), aot_gpr[1]);
    rt.memory().aot_store_word_right(aot_gpr[5] + static_cast<std::uint32_t>(-4), aot_gpr[1]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[11] = (aot_gpr[11] ^ aot_gpr[1]);
      if (branch_taken) {
          goto L_0899D9D4;
      }
      goto L_0899DA40;
    }
L_0899DA40:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[8] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[9]);
    aot_gpr[8] = (aot_gpr[10] + aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[10]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[11]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899DA84;
      }
      goto L_0899DA64;
    }
L_0899DA64:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[6] << 3u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] << (aot_gpr[6] & 31u));
    aot_gpr[8] = (0u - aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[1]);
    aot_gpr[11] = (aot_gpr[11] ^ aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[11]);
    goto L_0899DA84;
L_0899DA84:
    rt.memory().aot_store_word_left(aot_gpr[13] + static_cast<std::uint32_t>(3), aot_gpr[14]);
    rt.memory().aot_store_word_right(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DAA0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (23354u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] | 42580u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (30103u << 16u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (aot_gpr[3] | 2637u);
    aot_gpr[13] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[14] = (rt.memory().aot_load_word_left(aot_gpr[13] + static_cast<std::uint32_t>(3), aot_gpr[14]));
    aot_gpr[14] = (rt.memory().aot_load_word_right(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[14]));
    rt.memory().aot_store_word_left(aot_gpr[13] + static_cast<std::uint32_t>(3), 0u);
    rt.memory().aot_store_word_right(aot_gpr[13] + static_cast<std::uint32_t>(0), 0u);
    goto L_0899DAD4;
L_0899DAD4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0899DB3C;
      }
      goto L_0899DADC;
    }
L_0899DADC:
    aot_gpr[11] = (aot_gpr[11] ^ aot_gpr[2]);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[8]);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[11]);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[11]);
    aot_gpr[10] = (std::rotr(aot_gpr[10], 25));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[10]);
    aot_gpr[10] = (aot_gpr[10] ^ aot_gpr[3]);
    aot_gpr[7] = (std::rotr(aot_gpr[9], 21));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[9] = (~(aot_gpr[7] | 0u));
    aot_gpr[8] = (std::rotr(aot_gpr[8], 15));
    aot_gpr[12] = (aot_gpr[10] & aot_gpr[9]);
    aot_gpr[1] = (aot_gpr[7] & aot_gpr[8]);
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[12]);
    aot_gpr[8] = (~(aot_gpr[8] | 0u));
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[1]);
    aot_gpr[1] = (rt.memory().aot_load_word_right(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[1]));
    aot_gpr[1] = (rt.memory().aot_load_word_left(aot_gpr[5] + static_cast<std::uint32_t>(3), aot_gpr[1]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[11] = (aot_gpr[11] ^ aot_gpr[1]);
    // nop
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899DAD4;
      }
      goto L_0899DB3C;
    }
L_0899DB3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[8] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[9]);
    aot_gpr[8] = (aot_gpr[10] + aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[10]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[11]);
    rt.memory().aot_store_word_left(aot_gpr[13] + static_cast<std::uint32_t>(3), aot_gpr[14]);
    rt.memory().aot_store_word_right(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DB70:
    aot_gpr[7] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[8] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_0899DBC0;
      }
      goto L_0899DB7C;
    }
L_0899DB7C:
    aot_gpr[9] = (0u + 0u);
    goto L_0899DB80;
L_0899DB80:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(1)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(3)));
    aot_gpr[3] = (aot_gpr[3] << 8u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[4] << 16u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[9] < aot_gpr[6] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0899DB80;
      }
      goto L_0899DBC0;
    }
L_0899DBC0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DBC8:
    aot_gpr[10] = (aot_gpr[6] + 0u);
    aot_gpr[8] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_0899DC10;
      }
      goto L_0899DBD8;
    }
L_0899DBD8:
    aot_gpr[9] = (0u + 0u);
    goto L_0899DBDC;
L_0899DBDC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[9] < aot_gpr[10] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[2] >> 24u);
    aot_gpr[3] = (aot_gpr[2] >> 8u);
    aot_gpr[4] = (aot_gpr[2] >> 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0899DBDC;
      }
      goto L_0899DC10;
    }
L_0899DC10:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DC18:
    aot_gpr[2] = (aot_gpr[6] + 0u);
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000003u) | ((0u & 0x00000003u) << 0u));
    aot_gpr[7] = (aot_gpr[2] + aot_gpr[5]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_0899DC7C;
      }
      goto L_0899DC2C;
    }
L_0899DC2C:
    aot_gpr[8] = (0u + 0u);
    goto L_0899DC30;
L_0899DC30:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-4));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (aot_gpr[3] << 24u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(1)));
    aot_gpr[2] = (aot_gpr[2] << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(2)));
    aot_gpr[2] = (aot_gpr[2] << 8u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(3)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[3]);
      if (branch_taken) {
          goto L_0899DC30;
      }
      goto L_0899DC7C;
    }
L_0899DC7C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DC84:
    aot_gpr[2] = (aot_gpr[6] + 0u);
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000003u) | ((0u & 0x00000003u) << 0u));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (aot_gpr[2] + aot_gpr[4]);
      if (branch_taken) {
          goto L_0899DCD0;
      }
      goto L_0899DC94;
    }
L_0899DC94:
    aot_gpr[8] = (0u + 0u);
    goto L_0899DC98;
L_0899DC98:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-4));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(3)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[6] ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(2)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] >> 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[3]));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0899DC98;
      }
      goto L_0899DCD0;
    }
L_0899DCD0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DCD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(512));
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0899DCFCu);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0899DCFCu) goto L_0899DCFC;
    return;
L_0899DCFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DD14:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] & 1u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] ^ 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DD24:
    aot_gpr[3] = (0u + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(128));
    goto L_0899DD38;
L_0899DD30:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899DD50;
      }
      goto L_0899DD38;
    }
L_0899DD38:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0899DD30;
      }
      goto L_0899DD48;
    }
L_0899DD48:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DD50:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DD58:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_0899DD70;
      }
      goto L_0899DD68;
    }
L_0899DD68:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DD70:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(128));
    goto L_0899DD84;
L_0899DD7C:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899DD9C;
      }
      goto L_0899DD84;
    }
L_0899DD84:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0899DD7C;
      }
      goto L_0899DD94;
    }
L_0899DD94:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DD9C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DDA4:
    aot_gpr[8] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[5] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(512));
    goto L_0899DDC0;
L_0899DDB8:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_0899DDE0;
      }
      goto L_0899DDC0;
    }
L_0899DDC0:
    aot_gpr[2] = (aot_gpr[8] + aot_gpr[6]);
    aot_gpr[3] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0899DDB8;
      }
      goto L_0899DDD8;
    }
L_0899DDD8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DDE0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DDE8:
    aot_gpr[2] = (aot_gpr[5] >> 5u);
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] << (aot_gpr[5] & 31u));
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[3]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DE0C:
    aot_gpr[3] = (aot_gpr[5] >> 5u);
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] << (aot_gpr[5] & 31u));
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[4]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DE30:
    aot_gpr[6] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0899DE38;
L_0899DE38:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[2] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_0899DE6C;
      }
      goto L_0899DE48;
    }
L_0899DE48:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0899DE6C;
      }
      goto L_0899DE58;
    }
L_0899DE58:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0899DE38;
      }
      goto L_0899DE60;
    }
L_0899DE60:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_0899DE48;
      }
      goto L_0899DE6C;
    }
L_0899DE6C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DE74:
    aot_gpr[6] = (0u + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0899DE7C;
L_0899DE7C:
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[3] - aot_gpr[5]);
      if (branch_taken) {
          goto L_0899DED8;
      }
      goto L_0899DE88;
    }
L_0899DE88:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0899DEC4;
      }
      goto L_0899DE9C;
    }
L_0899DE9C:
    if (aot_gpr[6] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0899DE7C;
    }
    goto L_0899DEA4;
L_0899DEA4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899DECC;
      }
      goto L_0899DEB0;
    }
L_0899DEB0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0899DE9C;
      }
      goto L_0899DEC4;
    }
L_0899DEC4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DECC:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DED8:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DEE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-528));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(512), aot_gpr[16]);
    aot_gpr[7] = (aot_gpr[5] + 0u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(516), aot_gpr[31]);
    aot_gpr[8] = (aot_gpr[29] + 0u);
    aot_gpr[9] = (aot_gpr[5] + static_cast<std::uint32_t>(512));
    goto L_0899DEFC;
L_0899DEFC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[9];
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0899DEFC;
      }
      goto L_0899DF28;
    }
L_0899DF28:
    aot_gpr[5] = (aot_gpr[6] + 0u);
    aot_gpr[31] = (0x0899DF34u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 81u, 0x0899F578u>(ctx, &aot_mem) && ctx.pc == 0x0899DF34u) goto L_0899DF34;
    return;
L_0899DF34:
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(512));
    goto L_0899DF40;
L_0899DF40:
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
          goto L_0899DF40;
      }
      goto L_0899DF6C;
    }
L_0899DF6C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(516)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(512)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DF7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-544));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(524), aot_gpr[19]);
    aot_gpr[6] = (aot_gpr[5] + 0u);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(528), aot_gpr[31]);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (aot_gpr[5] + static_cast<std::uint32_t>(512));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(520), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(516), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(512), aot_gpr[16]);
    goto L_0899DFA4;
L_0899DFA4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0899DFA4;
      }
      goto L_0899DFD0;
    }
L_0899DFD0:
    aot_gpr[31] = (0x0899DFD8u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 22u, 0x0899F0D0u>(ctx, &aot_mem) && ctx.pc == 0x0899DFD8u) goto L_0899DFD8;
    return;
L_0899DFD8:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x0899DFE4u);
    aot_gpr[17] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 22u, 0x0899F0D0u>(ctx, &aot_mem) && ctx.pc == 0x0899DFE4u) goto L_0899DFE4;
    return;
L_0899DFE4:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0410_entry, 410u, 16u, 0x0899E0ACu>(ctx, &aot_mem); return;
      }
      goto L_0899DFF4;
    }
L_0899DFF4:
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(528)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0410_entry, 410u, 15u, 0x0899E094u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0410_entry, 410u, 1u, 0x0899E000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0409(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0409_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_409(Runtime &runtime) {
    runtime.register_generated_unit(409u, 0x0899D000u, 4096u, &recomp_unit_0409, &recomp_unit_0409_entry);
    runtime.register_function(0x0899D000u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899D720u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899D774u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899D780u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899D79Cu, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899D7F4u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899D814u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899D824u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899D854u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899D8A8u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899D8B8u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899D8D0u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899D904u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899D90Cu, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899D970u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899D9A0u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899D9D4u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899D9DCu, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DA40u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DA64u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DA84u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DAA0u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DAD4u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DADCu, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DB3Cu, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DB70u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DB7Cu, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DB80u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DBC0u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DBC8u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DBD8u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DBDCu, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DC10u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DC18u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DC2Cu, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DC30u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DC7Cu, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DC84u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DC94u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DC98u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DCD0u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DCD8u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DCFCu, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DD14u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DD24u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DD30u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DD38u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DD48u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DD50u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DD58u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DD68u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DD70u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DD7Cu, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DD84u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DD94u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DD9Cu, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DDA4u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DDB8u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DDC0u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DDD8u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DDE0u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DDE8u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DE0Cu, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DE30u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DE38u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DE48u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DE58u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DE60u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DE6Cu, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DE74u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DE7Cu, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DE88u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DE9Cu, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DEA4u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DEB0u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DEC4u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DECCu, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DED8u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DEE0u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DEFCu, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DF28u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DF34u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DF40u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DF6Cu, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DF7Cu, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DFA4u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DFD0u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DFD8u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DFE4u, &recomp_unit_0409, "recomp_unit_0409");
    runtime.register_function(0x0899DFF4u, &recomp_unit_0409, "recomp_unit_0409");
}
} // namespace psprecomp
