#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0305[1020] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 11, 0, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 24, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0,
    0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 41, 0, 42, 0, 0, 0, 0, 43, 0, 44, 0, 45, 46, 0, 0, 0, 0, 0, 0,
    0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 53, 54, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0,
    0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 71, 0, 0, 0, 72, 0, 73, 0, 74, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 79, 0,
    0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 84, 0, 0, 85, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 90, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0,
    95, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 102, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 111, 0, 0, 0, 112, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0,
    0, 0, 119, 0, 120, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 125, 0, 0,
    0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 131, 0, 132, 0, 133,
    0, 134, 0, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 0, 148, 0, 0, 149, 150, 0, 0, 0, 0,
    0, 151, 0, 0, 0, 152, 0, 153, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 158,
};
void recomp_unit_0305_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08935000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0305[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08935000;
    case 2u: goto L_08935028;
    case 3u: goto L_08935038;
    case 4u: goto L_08935064;
    case 5u: goto L_08935090;
    case 6u: goto L_089350BC;
    case 7u: goto L_089350C8;
    case 8u: goto L_089350DC;
    case 9u: goto L_08935110;
    case 10u: goto L_0893513C;
    case 11u: goto L_08935140;
    case 12u: goto L_0893514C;
    case 13u: goto L_08935158;
    case 14u: goto L_08935164;
    case 15u: goto L_08935170;
    case 16u: goto L_0893519C;
    case 17u: goto L_089351AC;
    case 18u: goto L_089351B8;
    case 19u: goto L_089351C8;
    case 20u: goto L_089351E4;
    case 21u: goto L_0893520C;
    case 22u: goto L_08935258;
    case 23u: goto L_08935264;
    case 24u: goto L_08935278;
    case 25u: goto L_089352AC;
    case 26u: goto L_089352F8;
    case 27u: goto L_08935304;
    case 28u: goto L_08935318;
    case 29u: goto L_08935330;
    case 30u: goto L_08935340;
    case 31u: goto L_08935348;
    case 32u: goto L_08935350;
    case 33u: goto L_08935358;
    case 34u: goto L_089353A8;
    case 35u: goto L_089353B0;
    case 36u: goto L_089353B4;
    case 37u: goto L_089353EC;
    case 38u: goto L_08935400;
    case 39u: goto L_08935424;
    case 40u: goto L_0893542C;
    case 41u: goto L_08935434;
    case 42u: goto L_0893543C;
    case 43u: goto L_08935450;
    case 44u: goto L_08935458;
    case 45u: goto L_08935460;
    case 46u: goto L_08935464;
    case 47u: goto L_08935484;
    case 48u: goto L_089354A0;
    case 49u: goto L_089354A8;
    case 50u: goto L_089354B0;
    case 51u: goto L_089354B8;
    case 52u: goto L_08935580;
    case 53u: goto L_08935588;
    case 54u: goto L_0893558C;
    case 55u: goto L_0893559C;
    case 56u: goto L_089355B0;
    case 57u: goto L_089355BC;
    case 58u: goto L_089355D0;
    case 59u: goto L_089355DC;
    case 60u: goto L_089355E8;
    case 61u: goto L_08935600;
    case 62u: goto L_089356AC;
    case 63u: goto L_089356C8;
    case 64u: goto L_089356E0;
    case 65u: goto L_089356EC;
    case 66u: goto L_0893570C;
    case 67u: goto L_08935720;
    case 68u: goto L_08935750;
    case 69u: goto L_08935764;
    case 70u: goto L_08935770;
    case 71u: goto L_0893578C;
    case 72u: goto L_0893579C;
    case 73u: goto L_089357A4;
    case 74u: goto L_089357AC;
    case 75u: goto L_089357B4;
    case 76u: goto L_089357CC;
    case 77u: goto L_089357EC;
    case 78u: goto L_089357F4;
    case 79u: goto L_089357F8;
    case 80u: goto L_0893580C;
    case 81u: goto L_0893582C;
    case 82u: goto L_08935848;
    case 83u: goto L_08935850;
    case 84u: goto L_08935884;
    case 85u: goto L_08935890;
    case 86u: goto L_08935898;
    case 87u: goto L_089358A4;
    case 88u: goto L_089358D0;
    case 89u: goto L_089358D8;
    case 90u: goto L_089358DC;
    case 91u: goto L_089358F0;
    case 92u: goto L_08935918;
    case 93u: goto L_08935960;
    case 94u: goto L_08935978;
    case 95u: goto L_08935980;
    case 96u: goto L_08935988;
    case 97u: goto L_08935990;
    case 98u: goto L_08935B08;
    case 99u: goto L_08935B64;
    case 100u: goto L_08935BA0;
    case 101u: goto L_08935BA8;
    case 102u: goto L_08935BB0;
    case 103u: goto L_08935BB4;
    case 104u: goto L_08935BBC;
    case 105u: goto L_08935BE8;
    case 106u: goto L_08935C1C;
    case 107u: goto L_08935C28;
    case 108u: goto L_08935C38;
    case 109u: goto L_08935C50;
    case 110u: goto L_08935C60;
    case 111u: goto L_08935C68;
    case 112u: goto L_08935C78;
    case 113u: goto L_08935D24;
    case 114u: goto L_08935D2C;
    case 115u: goto L_08935D30;
    case 116u: goto L_08935D40;
    case 117u: goto L_08935D5C;
    case 118u: goto L_08935D6C;
    case 119u: goto L_08935D88;
    case 120u: goto L_08935D90;
    case 121u: goto L_08935D98;
    case 122u: goto L_08935DA0;
    case 123u: goto L_08935DE8;
    case 124u: goto L_08935DF0;
    case 125u: goto L_08935DF4;
    case 126u: goto L_08935E0C;
    case 127u: goto L_08935E28;
    case 128u: goto L_08935E40;
    case 129u: goto L_08935E50;
    case 130u: goto L_08935E5C;
    case 131u: goto L_08935E6C;
    case 132u: goto L_08935E74;
    case 133u: goto L_08935E7C;
    case 134u: goto L_08935E84;
    case 135u: goto L_08935E94;
    case 136u: goto L_08935EA0;
    case 137u: goto L_08935EAC;
    case 138u: goto L_08935EB4;
    case 139u: goto L_08935ECC;
    case 140u: goto L_08935EE4;
    case 141u: goto L_08935F00;
    case 142u: goto L_08935F1C;
    case 143u: goto L_08935F34;
    case 144u: goto L_08935F3C;
    case 145u: goto L_08935F44;
    case 146u: goto L_08935F4C;
    case 147u: goto L_08935F54;
    case 148u: goto L_08935F5C;
    case 149u: goto L_08935F68;
    case 150u: goto L_08935F6C;
    case 151u: goto L_08935F84;
    case 152u: goto L_08935F94;
    case 153u: goto L_08935F9C;
    case 154u: goto L_08935FA4;
    case 155u: goto L_08935FAC;
    case 156u: goto L_08935FC8;
    case 157u: goto L_08935FDC;
    case 158u: goto L_08935FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08935000:
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(1));
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(3));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(3));
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(16));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(3));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(3));
    aot_gpr[12] = (aot_gpr[24] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[12] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 149u, 0x08934E6Cu>(ctx, &aot_mem); return;
      }
      goto L_08935028;
    }
L_08935028:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935038:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(22324), 0u);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(-28992));
    aot_gpr[9] = (2216u << 16u);
    aot_gpr[8] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (2216u << 16u);
      if (branch_taken) {
          goto L_089350C8;
      }
      goto L_08935064;
    }
L_08935064:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(-29004), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-29000), 0u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-28996), 0u);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08935090u);
    aot_gpr[5] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x08935090u) goto L_08935090;
    return;
L_08935090:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28992), aot_gpr[2]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29004)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[6] << 6u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[31] = (0x089350BCu);
    aot_gpr[5] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x089350BCu) goto L_089350BC;
    return;
L_089350BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_089350DC;
      }
      goto L_089350C8;
    }
L_089350C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(-29004), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-29000), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-28996), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-28992), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    goto L_089350DC;
L_089350DC:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22336));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(133), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(134), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(135), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(136), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28984), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935110:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (2219u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(22312)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(-28992));
      if (branch_taken) {
          goto L_08935170;
      }
      goto L_0893513C;
    }
L_0893513C:
    aot_gpr[18] = (aot_gpr[19] + static_cast<std::uint32_t>(22312));
    goto L_08935140;
L_08935140:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0893514Cu);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 78u, 0x08A585A8u>(ctx, &aot_mem) && ctx.pc == 0x0893514Cu) goto L_0893514C;
    return;
L_0893514C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935164;
      }
      goto L_08935158;
    }
L_08935158:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x08935164u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 129u, 0x08934A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08935164u) goto L_08935164;
    return;
L_08935164:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(22312)));
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935140;
      }
      goto L_08935170;
    }
L_08935170:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-29004), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-29000), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28996), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28984), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28992)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089351AC;
      }
      goto L_0893519C;
    }
L_0893519C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x089351ACu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x089351ACu) goto L_089351AC;
    return;
L_089351AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089351C8;
      }
      goto L_089351B8;
    }
L_089351B8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x089351C8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x089351C8u) goto L_089351C8;
    return;
L_089351C8:
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
L_089351E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-29000)));
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-29004)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08935264;
      }
      goto L_0893520C;
    }
L_0893520C:
    aot_gpr[8] = (2216u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-28996)));
    aot_gpr[10] = (2216u << 16u);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (aot_gpr[8] << 2u);
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(-28992));
    aot_gpr[4] = (aot_gpr[5] << 6u);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[10]);
    aot_gpr[9] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[9]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-29000), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x08935258u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 139u, 0x08934B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08935258u) goto L_08935258;
    return;
L_08935258:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2816u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08935264;
L_08935264:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935278:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-29000)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29004)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[6] < aot_gpr[9] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08935304;
      }
      goto L_089352AC;
    }
L_089352AC:
    aot_gpr[9] = (2216u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(-28996)));
    aot_gpr[11] = (2216u << 16u);
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[9] = (aot_gpr[9] << 2u);
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(-28992));
    aot_gpr[4] = (aot_gpr[6] << 6u);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[11]);
    aot_gpr[10] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[10]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-29000), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089352F8u);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 148u, 0x08934DB0u>(ctx, &aot_mem) && ctx.pc == 0x089352F8u) goto L_089352F8;
    return;
L_089352F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2816u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08935304;
L_08935304:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935318:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089353EC;
      }
      goto L_08935330;
    }
L_08935330:
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29052)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935348;
      }
      goto L_08935340;
    }
L_08935340:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08935358;
      }
      goto L_08935348;
    }
L_08935348:
    aot_gpr[31] = (0x08935350u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x08935350u) goto L_08935350;
    return;
L_08935350:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    goto L_08935358;
L_08935358:
    aot_gpr[6] = (aot_gpr[16] >> 24u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (aot_gpr[6] & 15u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (4096u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[16] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (2560u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_089353B4;
      }
      goto L_089353A8;
    }
L_089353A8:
    aot_gpr[31] = (0x089353B0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x089353B0u) goto L_089353B0;
    return;
L_089353B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_089353B4;
L_089353B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(22336));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(133)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(133), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(134)));
    aot_gpr[6] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(134), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(135)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(135), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(136)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-28984), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(136), aot_gpr[4]);
    goto L_089353EC;
L_089353EC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935400:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0893542C;
      }
      goto L_08935424;
    }
L_08935424:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0893543C;
      }
      goto L_0893542C;
    }
L_0893542C:
    aot_gpr[31] = (0x08935434u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x08935434u) goto L_08935434;
    return;
L_08935434:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[17] = (0u | 1u);
    goto L_0893543C;
L_0893543C:
    aot_gpr[6] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(-29052));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08935450u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(22336));
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 139u, 0x08934B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08935450u) goto L_08935450;
    return;
L_08935450:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935464;
      }
      goto L_08935458;
    }
L_08935458:
    aot_gpr[31] = (0x08935460u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x08935460u) goto L_08935460;
    return;
L_08935460:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_08935464;
L_08935464:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28984), 0u);
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
L_08935484:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089354A8;
      }
      goto L_089354A0;
    }
L_089354A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089354B8;
      }
      goto L_089354A8;
    }
L_089354A8:
    aot_gpr[31] = (0x089354B0u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x089354B0u) goto L_089354B0;
    return;
L_089354B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    goto L_089354B8;
L_089354B8:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (5888u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (24064u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (16640u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[9] = (23296u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] >> 8u);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (23552u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (6144u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (6400u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (6656u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (6912u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_0893558C;
      }
      goto L_08935580;
    }
L_08935580:
    aot_gpr[31] = (0x08935588u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x08935588u) goto L_08935588;
    return;
L_08935588:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_0893558C;
L_0893558C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893559C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089355B0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28984)));
    goto L_08935318;
L_089355B0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089355BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089355D0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22312));
    if (rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 86u, 0x08A585FCu>(ctx, &aot_mem) && ctx.pc == 0x089355D0u) goto L_089355D0;
    return;
L_089355D0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x089355DCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-28980));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089355DCu) goto L_089355DC;
    return;
L_089355DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089355E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08935600u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x08935600u) goto L_08935600;
    return;
L_08935600:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1872));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (8448u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(82), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(84), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(88), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089356AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0893570C;
      }
      goto L_089356C8;
    }
L_089356C8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1872));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089356E0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x089356E0u) goto L_089356E0;
    return;
L_089356E0:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0893570C;
      }
      goto L_089356EC;
    }
L_089356EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0893570Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893570Cu) goto L_0893570C;
    return;
L_0893570C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935720:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(-28940)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0893580C;
      }
      goto L_08935750;
    }
L_08935750:
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(-28937)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (2216u << 16u);
      if (branch_taken) {
          goto L_0893578C;
      }
      goto L_08935764;
    }
L_08935764:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28952)));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0893578C;
      }
      goto L_08935770;
    }
L_08935770:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893580C;
      }
      goto L_0893578C;
    }
L_0893578C:
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-29052)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089357A4;
      }
      goto L_0893579C;
    }
L_0893579C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089357B4;
      }
      goto L_089357A4;
    }
L_089357A4:
    aot_gpr[31] = (0x089357ACu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x089357ACu) goto L_089357AC;
    return;
L_089357AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[19] = (0u | 1u);
    goto L_089357B4;
L_089357B4:
    aot_gpr[5] = (aot_gpr[20] + static_cast<std::uint32_t>(-29052));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089357CCu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0306_entry, 306u, 80u, 0x08936B44u>(ctx, &aot_mem) && ctx.pc == 0x089357CCu) goto L_089357CC;
    return;
L_089357CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28804)));
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(-28937), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-28952), aot_gpr[16]);
      if (branch_taken) {
          goto L_089357F8;
      }
      goto L_089357EC;
    }
L_089357EC:
    aot_gpr[31] = (0x089357F4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x089357F4u) goto L_089357F4;
    return;
L_089357F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_089357F8;
L_089357F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    goto L_0893580C;
L_0893580C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893582C:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28952), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-28940), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-28938), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935848:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935850:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-28937), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28952), 0u);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (2216u << 16u);
      if (branch_taken) {
          goto L_08935890;
      }
      goto L_08935884;
    }
L_08935884:
    aot_gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28928)));
      if (branch_taken) {
          goto L_089358A4;
      }
      goto L_08935890;
    }
L_08935890:
    aot_gpr[31] = (0x08935898u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x08935898u) goto L_08935898;
    return;
L_08935898:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28928)));
    goto L_089358A4;
L_089358A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(-29052));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] >> 8u);
    aot_gpr[8] = (53248u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_089358DC;
      }
      goto L_089358D0;
    }
L_089358D0:
    aot_gpr[31] = (0x089358D8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x089358D8u) goto L_089358D8;
    return;
L_089358D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_089358DC;
L_089358DC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089358F0:
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28944)));
    aot_gpr[5] = (2216u << 16u);
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28948)));
    aot_fpr[13] = aot_fpr[12] - aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28944), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = aot_fpr[14] + aot_fpr[13];
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-28948), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935918:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-28940)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[21] = (aot_gpr[5] & 255u);
    aot_gpr[20] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[7] & 255u);
      if (branch_taken) {
          goto L_08935BBC;
      }
      goto L_08935960;
    }
L_08935960:
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    aot_gpr[17] = (15872u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(14));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (16128u << 16u);
      if (branch_taken) {
          goto L_08935980;
      }
      goto L_08935978;
    }
L_08935978:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08935990;
      }
      goto L_08935980;
    }
L_08935980:
    aot_gpr[31] = (0x08935988u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x08935988u) goto L_08935988;
    return;
L_08935988:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[5] = (0u | 1u);
    goto L_08935990;
L_08935990:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (0u < aot_gpr[22] ? 1u : 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (8448u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (0u < aot_gpr[21] ? 1u : 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (8704u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (0u < aot_gpr[20] ? 1u : 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (5888u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (7424u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (57088u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(50));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (57344u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (57600u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (21248u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (22016u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (22272u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (22528u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (22528u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(255));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (0u < aot_gpr[19] ? 1u : 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (7680u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[7] = (18944u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[20]) || std::isnan(aot_fpr[12])) && aot_fpr[20] == aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (19200u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_08935B64;
      }
      goto L_08935B08;
    }
L_08935B08:
    aot_gpr[6] = (16128u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
    aot_gpr[6] = (17792u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (50560u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[12];
    aot_fpr[13] = aot_fpr[14] / aot_fpr[13];
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] >> 8u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[16]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08935BA0;
      }
      goto L_08935B64;
    }
L_08935B64:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (48896u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[6] = (aot_gpr[7] | 1024u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] >> 8u);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_08935BA0;
L_08935BA0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935BB4;
      }
      goto L_08935BA8;
    }
L_08935BA8:
    aot_gpr[31] = (0x08935BB0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x08935BB0u) goto L_08935BB0;
    return;
L_08935BB0:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_08935BB4;
L_08935BB4:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28952), 0u);
    goto L_08935BBC;
L_08935BBC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
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
L_08935BE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (aot_gpr[4] & 255u);
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(-28935), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(-28935)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935C28;
      }
      goto L_08935C1C;
    }
L_08935C1C:
    aot_gpr[5] = (2216u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-28933), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08935D40;
      }
      goto L_08935C28;
    }
L_08935C28:
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(-28934)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935D40;
      }
      goto L_08935C38;
    }
L_08935C38:
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29052)));
    aot_gpr[18] = (2219u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(22336));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (6144u << 16u);
      if (branch_taken) {
          goto L_08935C60;
      }
      goto L_08935C50;
    }
L_08935C50:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(132)));
    aot_gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[5] | aot_gpr[16]);
      if (branch_taken) {
          goto L_08935C78;
      }
      goto L_08935C60;
    }
L_08935C60:
    aot_gpr[31] = (0x08935C68u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x08935C68u) goto L_08935C68;
    return;
L_08935C68:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(132)));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[16] = (aot_gpr[5] | aot_gpr[16]);
    goto L_08935C78;
L_08935C78:
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (6400u << 16u);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(133)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(134)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (6656u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(135)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (6912u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(136)));
    aot_gpr[7] = (256u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (23552u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (23808u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(255));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_08935D30;
      }
      goto L_08935D24;
    }
L_08935D24:
    aot_gpr[31] = (0x08935D2Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x08935D2Cu) goto L_08935D2C;
    return;
L_08935D2C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_08935D30;
L_08935D30:
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(-28934), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 255u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-28933), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08935D40;
L_08935D40:
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
L_08935D5C:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2216u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-28912), static_cast<std::uint8_t>(aot_gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935D6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935D90;
      }
      goto L_08935D88;
    }
L_08935D88:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08935DA0;
      }
      goto L_08935D90;
    }
L_08935D90:
    aot_gpr[31] = (0x08935D98u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x08935D98u) goto L_08935D98;
    return;
L_08935D98:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    goto L_08935DA0;
L_08935DA0:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (56576u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (56575u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (9216u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_08935DF4;
      }
      goto L_08935DE8;
    }
L_08935DE8:
    aot_gpr[31] = (0x08935DF0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x08935DF0u) goto L_08935DF0;
    return;
L_08935DF0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_08935DF4;
L_08935DF4:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-28912), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935E0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08935E28u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x08935E28u) goto L_08935E28;
    return;
L_08935E28:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1872));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935F00;
      }
      goto L_08935E40;
    }
L_08935E40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(43)));
    aot_gpr[5] = (0u | 6u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08935E6C;
      }
      goto L_08935E50;
    }
L_08935E50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28916)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935E6C;
      }
      goto L_08935E5C;
    }
L_08935E5C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(72), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08935EAC;
      }
      goto L_08935E6C;
    }
L_08935E6C:
    aot_gpr[31] = (0x08935E74u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0591_entry, 591u, 21u, 0x08A53158u>(ctx, &aot_mem) && ctx.pc == 0x08935E74u) goto L_08935E74;
    return;
L_08935E74:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935E94;
      }
      goto L_08935E7C;
    }
L_08935E7C:
    aot_gpr[31] = (0x08935E84u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 25u, 0x0891C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08935E84u) goto L_08935E84;
    return;
L_08935E84:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08935EAC;
      }
      goto L_08935E94;
    }
L_08935E94:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08935EA0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 73u, 0x08A4B414u>(ctx, &aot_mem) && ctx.pc == 0x08935EA0u) goto L_08935EA0;
    return;
L_08935EA0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(76)));
    goto L_08935EAC;
L_08935EAC:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935F34;
      }
      goto L_08935EB4;
    }
L_08935EB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(35)));
    aot_gpr[4] = (aot_gpr[4] & 64u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935EE4;
      }
      goto L_08935ECC;
    }
L_08935ECC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(35)));
    aot_gpr[4] = (aot_gpr[4] & 32u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935F34;
      }
      goto L_08935EE4;
    }
L_08935EE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (2u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
      if (branch_taken) {
          goto L_08935F34;
      }
      goto L_08935F00;
    }
L_08935F00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (65280u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] >> 24u);
    aot_gpr[5] = (0u | 255u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08935F34;
      }
      goto L_08935F1C;
    }
L_08935F1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (2u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    goto L_08935F34;
L_08935F34:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935F6C;
      }
      goto L_08935F3C;
    }
L_08935F3C:
    aot_gpr[31] = (0x08935F44u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0591_entry, 591u, 21u, 0x08A53158u>(ctx, &aot_mem) && ctx.pc == 0x08935F44u) goto L_08935F44;
    return;
L_08935F44:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935F5C;
      }
      goto L_08935F4C;
    }
L_08935F4C:
    aot_gpr[31] = (0x08935F54u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 25u, 0x0891C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08935F54u) goto L_08935F54;
    return;
L_08935F54:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(76), aot_gpr[2]);
      if (branch_taken) {
          goto L_08935F6C;
      }
      goto L_08935F5C;
    }
L_08935F5C:
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x08935F68u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 73u, 0x08A4B414u>(ctx, &aot_mem) && ctx.pc == 0x08935F68u) goto L_08935F68;
    return;
L_08935F68:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(76), aot_gpr[2]);
    goto L_08935F6C;
L_08935F6C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[5] & 32768u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08935FAC;
      }
      goto L_08935F84;
    }
L_08935F84:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(43)));
    aot_gpr[7] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[7];
    aot_gpr[7] = (0u | 2u);
      if (branch_taken) {
          goto L_08935FAC;
      }
      goto L_08935F94;
    }
L_08935F94:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[7];
    aot_gpr[7] = (0u | 4u);
      if (branch_taken) {
          goto L_08935FAC;
      }
      goto L_08935F9C;
    }
L_08935F9C:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[7];
    aot_gpr[7] = (0u | 5u);
      if (branch_taken) {
          goto L_08935FAC;
      }
      goto L_08935FA4;
    }
L_08935FA4:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08935FC8;
      }
      goto L_08935FAC;
    }
L_08935FAC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (2u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    goto L_08935FC8;
L_08935FC8:
    aot_gpr[6] = (aot_gpr[5] & 8192u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935FEC;
      }
      goto L_08935FDC;
    }
L_08935FDC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[6] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(88), aot_gpr[6]);
    goto L_08935FEC;
L_08935FEC:
    aot_gpr[5] = (aot_gpr[5] & 16384u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0306_entry, 306u, 2u, 0x0893600Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0306_entry, 306u, 1u, 0x08936000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0305(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0305_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_305(Runtime &runtime) {
    runtime.register_generated_unit(305u, 0x08935000u, 4096u, &recomp_unit_0305, &recomp_unit_0305_entry);
    runtime.register_function(0x08935000u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935028u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935038u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935064u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935090u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089350BCu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089350C8u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089350DCu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935110u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x0893513Cu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935140u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x0893514Cu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935158u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935164u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935170u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x0893519Cu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089351ACu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089351B8u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089351C8u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089351E4u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x0893520Cu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935258u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935264u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935278u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089352ACu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089352F8u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935304u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935318u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935330u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935340u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935348u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935350u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935358u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089353A8u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089353B0u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089353B4u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089353ECu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935400u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935424u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x0893542Cu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935434u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x0893543Cu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935450u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935458u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935460u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935464u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935484u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089354A0u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089354A8u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089354B0u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089354B8u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935580u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935588u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x0893558Cu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x0893559Cu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089355B0u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089355BCu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089355D0u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089355DCu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089355E8u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935600u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089356ACu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089356C8u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089356E0u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089356ECu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x0893570Cu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935720u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935750u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935764u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935770u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x0893578Cu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x0893579Cu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089357A4u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089357ACu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089357B4u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089357CCu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089357ECu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089357F4u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089357F8u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x0893580Cu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x0893582Cu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935848u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935850u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935884u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935890u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935898u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089358A4u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089358D0u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089358D8u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089358DCu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x089358F0u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935918u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935960u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935978u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935980u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935988u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935990u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935B08u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935B64u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935BA0u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935BA8u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935BB0u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935BB4u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935BBCu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935BE8u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935C1Cu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935C28u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935C38u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935C50u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935C60u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935C68u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935C78u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935D24u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935D2Cu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935D30u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935D40u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935D5Cu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935D6Cu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935D88u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935D90u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935D98u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935DA0u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935DE8u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935DF0u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935DF4u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935E0Cu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935E28u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935E40u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935E50u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935E5Cu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935E6Cu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935E74u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935E7Cu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935E84u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935E94u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935EA0u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935EACu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935EB4u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935ECCu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935EE4u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935F00u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935F1Cu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935F34u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935F3Cu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935F44u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935F4Cu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935F54u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935F5Cu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935F68u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935F6Cu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935F84u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935F94u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935F9Cu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935FA4u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935FACu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935FC8u, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935FDCu, &recomp_unit_0305, "recomp_unit_0305");
    runtime.register_function(0x08935FECu, &recomp_unit_0305, "recomp_unit_0305");
}
} // namespace psprecomp
