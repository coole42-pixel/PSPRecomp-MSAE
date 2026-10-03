#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0040[1016] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0,
    11, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0,
    16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25,
    0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 35, 0, 36, 0, 0, 0, 0, 0, 37,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 0,
    43, 0, 0, 44, 45, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49,
    0, 0, 50, 0, 0, 0, 51, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 56, 0, 57, 0, 0, 58, 0, 59,
    0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 66, 67, 0, 68, 0, 0, 0, 0,
    0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 71, 72, 0, 0, 0, 0, 73, 74, 0, 0, 0, 0, 75, 76, 0, 0, 0, 0, 77, 78, 0, 0,
    79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 96, 0, 0, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0,
    0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0,
    0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0,
    0, 0, 124, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0,
    130, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 0, 0,
    138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 151,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181,
};
void recomp_unit_0040_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0882C000u;
        entry_id = (entry_delta < 4064u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0040[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0882C000;
    case 2u: goto L_0882C01C;
    case 3u: goto L_0882C024;
    case 4u: goto L_0882C030;
    case 5u: goto L_0882C038;
    case 6u: goto L_0882C040;
    case 7u: goto L_0882C078;
    case 8u: goto L_0882C090;
    case 9u: goto L_0882C09C;
    case 10u: goto L_0882C0F4;
    case 11u: goto L_0882C100;
    case 12u: goto L_0882C10C;
    case 13u: goto L_0882C118;
    case 14u: goto L_0882C168;
    case 15u: goto L_0882C174;
    case 16u: goto L_0882C180;
    case 17u: goto L_0882C18C;
    case 18u: goto L_0882C1D0;
    case 19u: goto L_0882C1DC;
    case 20u: goto L_0882C1E8;
    case 21u: goto L_0882C1F4;
    case 22u: goto L_0882C238;
    case 23u: goto L_0882C248;
    case 24u: goto L_0882C25C;
    case 25u: goto L_0882C27C;
    case 26u: goto L_0882C288;
    case 27u: goto L_0882C290;
    case 28u: goto L_0882C2F0;
    case 29u: goto L_0882C304;
    case 30u: goto L_0882C320;
    case 31u: goto L_0882C328;
    case 32u: goto L_0882C330;
    case 33u: goto L_0882C33C;
    case 34u: goto L_0882C354;
    case 35u: goto L_0882C35C;
    case 36u: goto L_0882C364;
    case 37u: goto L_0882C37C;
    case 38u: goto L_0882C380;
    case 39u: goto L_0882C3BC;
    case 40u: goto L_0882C3D8;
    case 41u: goto L_0882C3E4;
    case 42u: goto L_0882C3F0;
    case 43u: goto L_0882C400;
    case 44u: goto L_0882C40C;
    case 45u: goto L_0882C410;
    case 46u: goto L_0882C41C;
    case 47u: goto L_0882C424;
    case 48u: goto L_0882C44C;
    case 49u: goto L_0882C47C;
    case 50u: goto L_0882C488;
    case 51u: goto L_0882C498;
    case 52u: goto L_0882C4A0;
    case 53u: goto L_0882C4B0;
    case 54u: goto L_0882C4C4;
    case 55u: goto L_0882C4D8;
    case 56u: goto L_0882C4E0;
    case 57u: goto L_0882C4E8;
    case 58u: goto L_0882C4F4;
    case 59u: goto L_0882C4FC;
    case 60u: goto L_0882C508;
    case 61u: goto L_0882C510;
    case 62u: goto L_0882C52C;
    case 63u: goto L_0882C534;
    case 64u: goto L_0882C53C;
    case 65u: goto L_0882C548;
    case 66u: goto L_0882C560;
    case 67u: goto L_0882C564;
    case 68u: goto L_0882C56C;
    case 69u: goto L_0882C588;
    case 70u: goto L_0882C594;
    case 71u: goto L_0882C5A8;
    case 72u: goto L_0882C5AC;
    case 73u: goto L_0882C5C0;
    case 74u: goto L_0882C5C4;
    case 75u: goto L_0882C5D8;
    case 76u: goto L_0882C5DC;
    case 77u: goto L_0882C5F0;
    case 78u: goto L_0882C5F4;
    case 79u: goto L_0882C600;
    case 80u: goto L_0882C60C;
    case 81u: goto L_0882C630;
    case 82u: goto L_0882C634;
    case 83u: goto L_0882C640;
    case 84u: goto L_0882C65C;
    case 85u: goto L_0882C664;
    case 86u: goto L_0882C670;
    case 87u: goto L_0882C68C;
    case 88u: goto L_0882C694;
    case 89u: goto L_0882C6CC;
    case 90u: goto L_0882C6DC;
    case 91u: goto L_0882C71C;
    case 92u: goto L_0882C724;
    case 93u: goto L_0882C734;
    case 94u: goto L_0882C74C;
    case 95u: goto L_0882C758;
    case 96u: goto L_0882C760;
    case 97u: goto L_0882C770;
    case 98u: goto L_0882C790;
    case 99u: goto L_0882C7BC;
    case 100u: goto L_0882C7D4;
    case 101u: goto L_0882C7E4;
    case 102u: goto L_0882C7EC;
    case 103u: goto L_0882C80C;
    case 104u: goto L_0882C818;
    case 105u: goto L_0882C83C;
    case 106u: goto L_0882C844;
    case 107u: goto L_0882C854;
    case 108u: goto L_0882C870;
    case 109u: goto L_0882C880;
    case 110u: goto L_0882C8B0;
    case 111u: goto L_0882C8B4;
    case 112u: goto L_0882C8BC;
    case 113u: goto L_0882C8F4;
    case 114u: goto L_0882C910;
    case 115u: goto L_0882C934;
    case 116u: goto L_0882C93C;
    case 117u: goto L_0882C94C;
    case 118u: goto L_0882C964;
    case 119u: goto L_0882C978;
    case 120u: goto L_0882C98C;
    case 121u: goto L_0882C9A0;
    case 122u: goto L_0882C9C0;
    case 123u: goto L_0882C9F0;
    case 124u: goto L_0882CA08;
    case 125u: goto L_0882CA10;
    case 126u: goto L_0882CA20;
    case 127u: goto L_0882CA54;
    case 128u: goto L_0882CA68;
    case 129u: goto L_0882CA78;
    case 130u: goto L_0882CA80;
    case 131u: goto L_0882CA90;
    case 132u: goto L_0882CA98;
    case 133u: goto L_0882CAB0;
    case 134u: goto L_0882CAC4;
    case 135u: goto L_0882CAD8;
    case 136u: goto L_0882CAE8;
    case 137u: goto L_0882CAF0;
    case 138u: goto L_0882CB00;
    case 139u: goto L_0882CB08;
    case 140u: goto L_0882CB80;
    case 141u: goto L_0882CB8C;
    case 142u: goto L_0882CBA0;
    case 143u: goto L_0882CBB4;
    case 144u: goto L_0882CBD8;
    case 145u: goto L_0882CBEC;
    case 146u: goto L_0882CC20;
    case 147u: goto L_0882CC44;
    case 148u: goto L_0882CC50;
    case 149u: goto L_0882CC64;
    case 150u: goto L_0882CC6C;
    case 151u: goto L_0882CC7C;
    case 152u: goto L_0882CCBC;
    case 153u: goto L_0882CCC8;
    case 154u: goto L_0882CCF0;
    case 155u: goto L_0882CCF8;
    case 156u: goto L_0882CD24;
    case 157u: goto L_0882CD34;
    case 158u: goto L_0882CD60;
    case 159u: goto L_0882CD7C;
    case 160u: goto L_0882CDA8;
    case 161u: goto L_0882CDB0;
    case 162u: goto L_0882CDC0;
    case 163u: goto L_0882CDD8;
    case 164u: goto L_0882CDEC;
    case 165u: goto L_0882CE00;
    case 166u: goto L_0882CE14;
    case 167u: goto L_0882CE38;
    case 168u: goto L_0882CE4C;
    case 169u: goto L_0882CE7C;
    case 170u: goto L_0882CEB0;
    case 171u: goto L_0882CEB8;
    case 172u: goto L_0882CEC0;
    case 173u: goto L_0882CEDC;
    case 174u: goto L_0882CF1C;
    case 175u: goto L_0882CF28;
    case 176u: goto L_0882CF50;
    case 177u: goto L_0882CF58;
    case 178u: goto L_0882CF84;
    case 179u: goto L_0882CF94;
    case 180u: goto L_0882CFC0;
    case 181u: goto L_0882CFDC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0882C000:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-2864)));
    aot_gpr[5] = (2214u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-13028)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0882C024;
      }
      goto L_0882C01C;
    }
L_0882C01C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-2860), 0u);
      if (branch_taken) {
          goto L_0882C030;
      }
      goto L_0882C024;
    }
L_0882C024:
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-2856), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0882C030;
L_0882C030:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C038;
      }
      goto L_0882C038;
    }
L_0882C038:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C040:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2860)));
    aot_gpr[5] = (aot_gpr[4] ^ 1u);
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C248;
      }
      goto L_0882C078;
    }
L_0882C078:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0882C090u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 36u, 0x08A4A22Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C090u) goto L_0882C090;
    return;
L_0882C090:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0882C248;
      }
      goto L_0882C09C;
    }
L_0882C09C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28792)));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(0u));
    aot_gpr[7] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-25408)));
    aot_gpr[6] = (65280u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[5] = (16256u << 16u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[10] = (16128u << 16u);
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[10]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(24)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2856)));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[9]) >= 0;
    aot_fpr[13] = aot_fpr[12] - aot_fpr[13];
      if (branch_taken) {
          goto L_0882C100;
      }
      goto L_0882C0F4;
    }
L_0882C0F4:
    aot_gpr[9] = (20352u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_fpr[16] = aot_fpr[16] + aot_fpr[15];
    goto L_0882C100;
L_0882C100:
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
      if (branch_taken) {
          goto L_0882C118;
      }
      goto L_0882C10C;
    }
L_0882C10C:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[15] = aot_fpr[15] + aot_fpr[17];
    goto L_0882C118;
L_0882C118:
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-25408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_fpr[18] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[18]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(24)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2856)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[13] = aot_fpr[17] - aot_fpr[13];
      if (branch_taken) {
          goto L_0882C174;
      }
      goto L_0882C168;
    }
L_0882C168:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[15];
    goto L_0882C174;
L_0882C174:
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
      if (branch_taken) {
          goto L_0882C18C;
      }
      goto L_0882C180;
    }
L_0882C180:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = aot_fpr[15] + aot_fpr[16];
    goto L_0882C18C;
L_0882C18C:
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-25408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(24)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
      if (branch_taken) {
          goto L_0882C1DC;
      }
      goto L_0882C1D0;
    }
L_0882C1D0:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = aot_fpr[14] + aot_fpr[12];
    goto L_0882C1DC;
L_0882C1DC:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_0882C1F4;
      }
      goto L_0882C1E8;
    }
L_0882C1E8:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_0882C1F4;
L_0882C1F4:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[6]);
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[31] = (0x0882C238u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(aot_gpr[8]));
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 92u, 0x08935918u>(ctx, &aot_mem) && ctx.pc == 0x0882C238u) goto L_0882C238;
    return;
L_0882C238:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0882C248u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 51u, 0x0892F518u>(ctx, &aot_mem) && ctx.pc == 0x0882C248u) goto L_0882C248;
    return;
L_0882C248:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C25C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23136), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C27C:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C288:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C290:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(108), aot_gpr[17]);
    aot_gpr[4] = (49024u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0882C2F0;
L_0882C2F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882C2F0;
      }
      goto L_0882C304;
    }
L_0882C304:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2852)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C35C;
      }
      goto L_0882C320;
    }
L_0882C320:
    aot_gpr[31] = (0x0882C328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x0882C328u) goto L_0882C328;
    return;
L_0882C328:
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_0882C380;
    }
    goto L_0882C330;
L_0882C330:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(104), 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0882C33C;
L_0882C33C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(64), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(80), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882C33C;
      }
      goto L_0882C354;
    }
L_0882C354:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_0882C380;
      }
      goto L_0882C35C;
    }
L_0882C35C:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0882C364;
L_0882C364:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(64), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(80), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882C364;
      }
      goto L_0882C37C;
    }
L_0882C37C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_0882C380;
L_0882C380:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(136), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(140), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(152), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(156), aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(168), 0u);
    aot_gpr[31] = (0x0882C3BCu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(172));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 71u, 0x08873408u>(ctx, &aot_mem) && ctx.pc == 0x0882C3BCu) goto L_0882C3BC;
    return;
L_0882C3BC:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C3D8:
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_0882C41C;
      }
      goto L_0882C3E4;
    }
L_0882C3E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(163)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C41C;
      }
      goto L_0882C3F0;
    }
L_0882C3F0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(152)));
    aot_gpr[5] = (0u | 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(156), aot_gpr[6]);
      if (branch_taken) {
          goto L_0882C410;
      }
      goto L_0882C400;
    }
L_0882C400:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(162)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C410;
      }
      goto L_0882C40C;
    }
L_0882C40C:
    aot_gpr[5] = (0u | 1u);
    goto L_0882C410;
L_0882C410:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_0882C41C;
L_0882C41C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C424:
    aot_gpr[2] = (aot_gpr[11] | 0u);
    aot_gpr[3] = (aot_gpr[9] | 0u);
    aot_gpr[12] = (aot_gpr[8] | 0u);
    aot_gpr[11] = (aot_gpr[5] & 255u);
    aot_gpr[9] = (aot_gpr[6] & 255u);
    aot_gpr[8] = (aot_gpr[7] & 255u);
    aot_gpr[7] = (aot_gpr[12] & 255u);
    aot_gpr[5] = (aot_gpr[2] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[6] = (aot_gpr[3] & 255u);
      if (branch_taken) {
          goto L_0882C65C;
      }
      goto L_0882C44C;
    }
L_0882C44C:
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(172)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    aot_fpr[15] = aot_fpr[15] + aot_fpr[12];
    aot_fpr[16] = aot_fpr[16] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(172), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(176), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) & 0x7FFFFFFFu);
    aot_fpr[15] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[16] <= aot_fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0882C4D8;
      }
      goto L_0882C47C;
    }
L_0882C47C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C498;
      }
      goto L_0882C488;
    }
L_0882C488:
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0882C4B0;
      }
      goto L_0882C498;
    }
L_0882C498:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C4C4;
      }
      goto L_0882C4A0;
    }
L_0882C4A0:
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0882C4C4;
      }
      goto L_0882C4B0;
    }
L_0882C4B0:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr[2]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
      if (branch_taken) {
          goto L_0882C4E0;
      }
      goto L_0882C4C4;
    }
L_0882C4C4:
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) & 0x7FFFFFFFu);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(144)));
    aot_fpr[14] = aot_fpr[16] + aot_fpr[14];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_0882C4E0;
      }
      goto L_0882C4D8;
    }
L_0882C4D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    goto L_0882C4E0;
L_0882C4E0:
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C4F4;
      }
      goto L_0882C4E8;
    }
L_0882C4E8:
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(180)));
    aot_fpr[16] = aot_fpr[16] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(180), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    goto L_0882C4F4;
L_0882C4F4:
    { const bool branch_taken = aot_gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C508;
      }
      goto L_0882C4FC;
    }
L_0882C4FC:
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(184)));
    aot_fpr[16] = aot_fpr[16] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(184), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    goto L_0882C508;
L_0882C508:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C52C;
      }
      goto L_0882C510;
    }
L_0882C510:
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(188)));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(132)));
    aot_fpr[18] = aot_fpr[16] + aot_fpr[12];
    aot_fpr[16] = aot_fpr[17] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(188), __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
      if (branch_taken) {
          goto L_0882C534;
      }
      goto L_0882C52C;
    }
L_0882C52C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    goto L_0882C534;
L_0882C534:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C560;
      }
      goto L_0882C53C;
    }
L_0882C53C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(162)));
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C564;
      }
      goto L_0882C548;
    }
L_0882C548:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(192)));
    aot_gpr[11] = (0u | 1u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(192), aot_gpr[8]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(aot_gpr[11]));
      if (branch_taken) {
          goto L_0882C564;
      }
      goto L_0882C560;
    }
L_0882C560:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(0u));
    goto L_0882C564;
L_0882C564:
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C588;
      }
      goto L_0882C56C;
    }
L_0882C56C:
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(136)));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(140)));
    aot_fpr[12] = aot_fpr[15] + aot_fpr[12];
    aot_fpr[15] = aot_fpr[17] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(136), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(140), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
      if (branch_taken) {
          goto L_0882C594;
      }
      goto L_0882C588;
    }
L_0882C588:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(136), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(140), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    goto L_0882C594;
L_0882C594:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_fpu_condition((aot_fpr[16] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0882C5AC;
      }
      goto L_0882C5A8;
    }
L_0882C5A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(200), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    goto L_0882C5AC;
L_0882C5AC:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0882C5C4;
      }
      goto L_0882C5C0;
    }
L_0882C5C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(204), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0882C5C4;
L_0882C5C4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0882C5DC;
      }
      goto L_0882C5D8;
    }
L_0882C5D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(208), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    goto L_0882C5DC;
L_0882C5DC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0882C5F4;
      }
      goto L_0882C5F0;
    }
L_0882C5F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(212), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_0882C5F4;
L_0882C5F4:
    aot_gpr[8] = (aot_gpr[10] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(aot_gpr[8]));
      if (branch_taken) {
          goto L_0882C630;
      }
      goto L_0882C600;
    }
L_0882C600:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(161)));
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C634;
      }
      goto L_0882C60C;
    }
L_0882C60C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(168)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(168), aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(196), aot_gpr[7]);
    aot_gpr[7] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(aot_gpr[7]));
      if (branch_taken) {
          goto L_0882C634;
      }
      goto L_0882C630;
    }
L_0882C630:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    goto L_0882C634;
L_0882C634:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(165)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C65C;
      }
      goto L_0882C640;
    }
L_0882C640:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(168)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(168), aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(196), aot_gpr[7]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(0u));
    goto L_0882C65C;
L_0882C65C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(152), aot_gpr[10]);
      if (branch_taken) {
          goto L_0882C68C;
      }
      goto L_0882C664;
    }
L_0882C664:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(163)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C68C;
      }
      goto L_0882C670;
    }
L_0882C670:
    aot_gpr[5] = (aot_gpr[10] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(156), aot_gpr[10]);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_0882C68C;
L_0882C68C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C694:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0882C6CCu);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    goto L_0882C27C;
L_0882C6CC:
    aot_gpr[2] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C6DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(264));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0882C71Cu);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C71Cu) goto L_0882C71C;
    return;
L_0882C71C:
    aot_gpr[31] = (0x0882C724u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
    goto L_0882C288;
L_0882C724:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C734:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0882C74Cu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
    goto L_0882C290;
L_0882C74C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C760;
      }
      goto L_0882C758;
    }
L_0882C758:
    aot_gpr[31] = (0x0882C760u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0249_entry, 249u, 14u, 0x088FD130u>(ctx, &aot_mem) && ctx.pc == 0x0882C760u) goto L_0882C760;
    return;
L_0882C760:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C770:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23144), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C790:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (2179u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (0u | 15u);
    aot_gpr[6] = (0u | 296u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0882C7BCu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-14700));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x0882C7BCu) goto L_0882C7BC;
    return;
L_0882C7BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4444), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C7D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_0882C80C;
      }
      goto L_0882C7E4;
    }
L_0882C7E4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_0882C80C;
      }
      goto L_0882C7EC;
    }
L_0882C7EC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0882C80Cu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882C80Cu) goto L_0882C80C;
    return;
L_0882C80C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C818:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4444), 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    goto L_0882C83C;
L_0882C83C:
    aot_gpr[31] = (0x0882C844u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0882C6DC;
L_0882C844:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 15 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(296));
      if (branch_taken) {
          goto L_0882C83C;
      }
      goto L_0882C854;
    }
L_0882C854:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
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
L_0882C870:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(15) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C8B0;
      }
      goto L_0882C880;
    }
L_0882C880:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[6] << 5u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] << 3u);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_0882C8B4;
      }
      goto L_0882C8B0;
    }
L_0882C8B0:
    aot_gpr[2] = (0u | 0u);
    goto L_0882C8B4;
L_0882C8B4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C8BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x0882C8F4u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_0882C818;
L_0882C8F4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27976)));
    aot_gpr[16] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[30] = (2218u << 16u);
      if (branch_taken) {
          goto L_0882C9C0;
      }
      goto L_0882C910;
    }
L_0882C910:
    aot_gpr[23] = (2218u << 16u);
    aot_gpr[22] = (2218u << 16u);
    aot_gpr[21] = (2218u << 16u);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-2848));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-2592));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-6816));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-2336));
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[18] = (2218u << 16u);
    goto L_0882C934;
L_0882C934:
    aot_gpr[31] = (0x0882C93Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 58u, 0x088B73F4u>(ctx, &aot_mem) && ctx.pc == 0x0882C93Cu) goto L_0882C93C;
    return;
L_0882C93C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0882C94Cu);
    aot_gpr[5] = (0u | 1u);
    goto L_0882C870;
L_0882C94C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4444), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(-2080)));
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (aot_gpr[30] | 0u);
        goto L_0882C964;
    }
    goto L_0882C964;
L_0882C964:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(-2080)));
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (aot_gpr[23] | 0u);
        goto L_0882C978;
    }
    goto L_0882C978;
L_0882C978:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(-6824)));
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (aot_gpr[22] | 0u);
        goto L_0882C98C;
    }
    goto L_0882C98C;
L_0882C98C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(-6824)));
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (aot_gpr[21] | 0u);
        goto L_0882C9A0;
    }
    goto L_0882C9A0;
L_0882C9A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(152), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C934;
      }
      goto L_0882C9C0;
    }
L_0882C9C0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C9F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x0882CA08u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_0882C818;
L_0882CA08:
    aot_gpr[31] = (0x0882CA10u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 58u, 0x088B73F4u>(ctx, &aot_mem) && ctx.pc == 0x0882CA10u) goto L_0882CA10;
    return;
L_0882CA10:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0882CA20u);
    aot_gpr[5] = (0u | 1u);
    goto L_0882C870;
L_0882CA20:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4444), aot_gpr[4]);
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(-2080)));
    aot_gpr[9] = (2218u << 16u);
    aot_gpr[10] = (2218u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-2848));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(-2592));
    aot_gpr[11] = (0u | 15u);
    aot_gpr[3] = (2218u << 16u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (aot_gpr[9] | 0u);
        goto L_0882CA54;
    }
    goto L_0882CA54;
L_0882CA54:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(-2080)));
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (aot_gpr[10] | 0u);
        goto L_0882CA68;
    }
    goto L_0882CA68;
L_0882CA68:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(-6824)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0882CA80;
      }
      goto L_0882CA78;
    }
L_0882CA78:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6816));
    goto L_0882CA80;
L_0882CA80:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(-6824)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0882CA98;
      }
      goto L_0882CA90;
    }
L_0882CA90:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2336));
    goto L_0882CA98;
L_0882CA98:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(152), aot_gpr[11]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0882CAB0u);
    aot_gpr[5] = (0u | 5u);
    goto L_0882C870;
L_0882CAB0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(-2080)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[17] = (0u | 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[17] = (aot_gpr[9] | 0u);
        goto L_0882CAC4;
    }
    goto L_0882CAC4;
L_0882CAC4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(-2080)));
    aot_gpr[17] = (0u | 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[17] = (aot_gpr[10] | 0u);
        goto L_0882CAD8;
    }
    goto L_0882CAD8;
L_0882CAD8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(-6824)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0882CAF0;
      }
      goto L_0882CAE8;
    }
L_0882CAE8:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-6816));
    goto L_0882CAF0;
L_0882CAF0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(-6824)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (0u | 0u);
      if (branch_taken) {
          goto L_0882CB08;
      }
      goto L_0882CB00;
    }
L_0882CB00:
    aot_gpr[3] = (2218u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-2336));
    goto L_0882CB08;
L_0882CB08:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(152), aot_gpr[11]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-13016));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-13008));
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-13000));
    aot_gpr[7] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-12992));
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12984));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12976));
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-12968));
    aot_gpr[7] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-12960));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    aot_gpr[13] = (2214u << 16u);
    aot_gpr[3] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[7]);
    aot_gpr[12] = (aot_gpr[29] | 0u);
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(-12952));
    goto L_0882CB80;
L_0882CB80:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0882CB8Cu);
    aot_gpr[5] = (0u | 4u);
    goto L_0882C870;
L_0882CB8C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(-2080)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (aot_gpr[9] | 0u);
        goto L_0882CBA0;
    }
    goto L_0882CBA0;
L_0882CBA0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(-2080)));
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (aot_gpr[10] | 0u);
        goto L_0882CBB4;
    }
    goto L_0882CBB4;
L_0882CBB4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(152), aot_gpr[11]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[3] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882CB80;
      }
      goto L_0882CBD8;
    }
L_0882CBD8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882CBEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[31]);
    aot_gpr[31] = (0x0882CC20u);
    aot_gpr[23] = (aot_gpr[4] | 0u);
    goto L_0882C818;
L_0882CC20:
    aot_gpr[30] = (2218u << 16u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(-2076))))));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-2072)));
    aot_gpr[6] = (aot_gpr[5] ^ 3u);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_0882CC50;
      }
      goto L_0882CC44;
    }
L_0882CC44:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
      if (branch_taken) {
          goto L_0882CC6C;
      }
      goto L_0882CC50;
    }
L_0882CC50:
    aot_gpr[5] = (aot_gpr[5] ^ 2u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CC6C;
      }
      goto L_0882CC64;
    }
L_0882CC64:
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    goto L_0882CC6C;
L_0882CC6C:
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0882CD60;
      }
      goto L_0882CC7C;
    }
L_0882CC7C:
    aot_gpr[22] = (aot_gpr[4] + static_cast<std::uint32_t>(-2064));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(-1104));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-144));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(816));
    aot_gpr[22] = (aot_gpr[19] + aot_gpr[22]);
    aot_gpr[21] = (aot_gpr[19] + aot_gpr[21]);
    aot_gpr[20] = (aot_gpr[19] + aot_gpr[20]);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1776));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1840));
    goto L_0882CCBC;
L_0882CCBC:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0882CCC8u);
    aot_gpr[5] = (0u | 2u);
    goto L_0882C870;
L_0882CCC8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    if (aot_gpr[5] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[23]);
        goto L_0882CCF8;
    }
    goto L_0882CCF0;
L_0882CCF0:
    aot_gpr[4] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[23]);
    goto L_0882CCF8;
L_0882CCF8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(152), aot_gpr[4]);
    aot_gpr[23] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[23]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[5] = (aot_gpr[4] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[31] = (0x0882CD24u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0882CD24u) goto L_0882CD24;
    return;
L_0882CD24:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(264));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0882CD34u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0882CD34u) goto L_0882CD34;
    return;
L_0882CD34:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(-2076))))));
    aot_gpr[8] = (aot_gpr[23] | 0u);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(64));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(64));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(64));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(64));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0882CCBC;
      }
      goto L_0882CD60;
    }
L_0882CD60:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27976)));
    aot_gpr[16] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0882CE4C;
      }
      goto L_0882CD7C;
    }
L_0882CD7C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2848));
    aot_gpr[30] = (2218u << 16u);
    aot_gpr[22] = (2218u << 16u);
    aot_gpr[21] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-2592));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-6816));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-2336));
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[20] = (2215u << 16u);
    goto L_0882CDA8;
L_0882CDA8:
    aot_gpr[31] = (0x0882CDB0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 58u, 0x088B73F4u>(ctx, &aot_mem) && ctx.pc == 0x0882CDB0u) goto L_0882CDB0;
    return;
L_0882CDB0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0882CDC0u);
    aot_gpr[5] = (0u | 1u);
    goto L_0882C870;
L_0882CDC0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(4444), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(-2080)));
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_0882CDD8;
    }
    goto L_0882CDD8;
L_0882CDD8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(-2080)));
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (aot_gpr[30] | 0u);
        goto L_0882CDEC;
    }
    goto L_0882CDEC;
L_0882CDEC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(-6824)));
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (aot_gpr[22] | 0u);
        goto L_0882CE00;
    }
    goto L_0882CE00;
L_0882CE00:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(-6824)));
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (aot_gpr[21] | 0u);
        goto L_0882CE14;
    }
    goto L_0882CE14;
L_0882CE14:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(152), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(264));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x0882CE38u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0882CE38u) goto L_0882CE38;
    return;
L_0882CE38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882CDA8;
      }
      goto L_0882CE4C;
    }
L_0882CE4C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882CE7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    aot_gpr[31] = (0x0882CEB0u);
    aot_gpr[30] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x0882CEB0u) goto L_0882CEB0;
    return;
L_0882CEB0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 11u, 0x0882D0B4u>(ctx, &aot_mem); return;
      }
      goto L_0882CEB8;
    }
L_0882CEB8:
    aot_gpr[31] = (0x0882CEC0u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    goto L_0882C818;
L_0882CEC0:
    aot_gpr[23] = (2218u << 16u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(-2076))))));
    aot_gpr[8] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0882CFC0;
      }
      goto L_0882CEDC;
    }
L_0882CEDC:
    aot_gpr[22] = (aot_gpr[4] + static_cast<std::uint32_t>(-2064));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(-1104));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-144));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(816));
    aot_gpr[22] = (aot_gpr[19] + aot_gpr[22]);
    aot_gpr[21] = (aot_gpr[19] + aot_gpr[21]);
    aot_gpr[20] = (aot_gpr[19] + aot_gpr[20]);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1776));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1840));
    goto L_0882CF1C;
L_0882CF1C:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x0882CF28u);
    aot_gpr[5] = (0u | 2u);
    goto L_0882C870;
L_0882CF28:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    if (aot_gpr[5] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[30]);
        goto L_0882CF58;
    }
    goto L_0882CF50;
L_0882CF50:
    aot_gpr[4] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[30]);
    goto L_0882CF58;
L_0882CF58:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(152), aot_gpr[4]);
    aot_gpr[30] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[30]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[5] = (aot_gpr[4] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[31] = (0x0882CF84u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0882CF84u) goto L_0882CF84;
    return;
L_0882CF84:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(264));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0882CF94u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0882CF94u) goto L_0882CF94;
    return;
L_0882CF94:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(-2076))))));
    aot_gpr[8] = (aot_gpr[30] | 0u);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(64));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(64));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(64));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(64));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0882CF1C;
      }
      goto L_0882CFC0;
    }
L_0882CFC0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27976)));
    aot_gpr[16] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 10u, 0x0882D0ACu>(ctx, &aot_mem); return;
      }
      goto L_0882CFDC;
    }
L_0882CFDC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2848));
    aot_gpr[23] = (2218u << 16u);
    aot_gpr[22] = (2218u << 16u);
    aot_gpr[21] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-2592));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-6816));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-2336));
    aot_gpr[19] = (2218u << 16u);
    ctx.pc = 0x0882D000u; return;
}

void recomp_unit_0040(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0040_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_40(Runtime &runtime) {
    runtime.register_generated_unit(40u, 0x0882C000u, 4096u, &recomp_unit_0040, &recomp_unit_0040_entry);
    runtime.register_function(0x0882C000u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C01Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C024u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C030u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C038u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C040u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C078u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C090u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C09Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C0F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C100u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C10Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C118u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C168u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C174u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C180u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C18Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C1D0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C1DCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C1E8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C1F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C238u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C248u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C25Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C27Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C288u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C290u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C2F0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C304u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C320u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C328u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C330u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C33Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C354u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C35Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C364u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C37Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C380u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C3BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C3D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C3E4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C3F0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C400u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C40Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C410u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C41Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C424u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C44Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C47Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C488u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C498u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C4A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C4B0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C4C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C4D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C4E0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C4E8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C4F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C4FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C508u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C510u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C52Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C534u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C53Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C548u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C560u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C564u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C56Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C588u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C594u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C5A8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C5ACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C5C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C5C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C5D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C5DCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C5F0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C5F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C600u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C60Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C630u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C634u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C640u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C65Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C664u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C670u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C68Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C694u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C6CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C6DCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C71Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C724u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C734u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C74Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C758u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C760u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C770u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C790u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C7BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C7D4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C7E4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C7ECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C80Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C818u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C83Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C844u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C854u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C870u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C880u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C8B0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C8B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C8BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C8F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C910u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C934u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C93Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C94Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C964u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C978u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C98Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C9A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C9C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882C9F0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CA08u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CA10u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CA20u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CA54u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CA68u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CA78u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CA80u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CA90u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CA98u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CAB0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CAC4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CAD8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CAE8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CAF0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CB00u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CB08u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CB80u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CB8Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CBA0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CBB4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CBD8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CBECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CC20u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CC44u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CC50u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CC64u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CC6Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CC7Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CCBCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CCC8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CCF0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CCF8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CD24u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CD34u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CD60u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CD7Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CDA8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CDB0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CDC0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CDD8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CDECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CE00u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CE14u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CE38u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CE4Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CE7Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CEB0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CEB8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CEC0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CEDCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CF1Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CF28u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CF50u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CF58u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CF84u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CF94u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CFC0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x0882CFDCu, &recomp_unit_0040, "recomp_unit_0040");
}
} // namespace psprecomp
