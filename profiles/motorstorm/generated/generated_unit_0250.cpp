#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0250[1023] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 7,
    0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0,
    0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18,
    0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 21, 22, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0,
    0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 0,
    0, 0, 33, 0, 0, 0, 34, 0, 0, 35, 0, 36, 0, 37, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41,
    0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 47, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 54,
    0, 55, 0, 56, 0, 57, 0, 58, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68,
    0, 69, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0,
    0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82,
    0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 88,
    0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 92, 93, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0,
    0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 102,
    0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0, 107, 0, 108, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0,
    0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 0, 117, 0, 118, 0, 119, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0,
    0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0,
    135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0,
    0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0,
    0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 159,
    0, 0, 160, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 163, 0, 0, 164, 0, 165, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0,
    0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 187,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197,
    0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 202, 0, 0, 0, 0, 203, 0, 204, 0, 205, 0, 206, 0, 207,
};
void recomp_unit_0250_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088FE000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0250[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088FE000;
    case 2u: goto L_088FE008;
    case 3u: goto L_088FE040;
    case 4u: goto L_088FE048;
    case 5u: goto L_088FE060;
    case 6u: goto L_088FE078;
    case 7u: goto L_088FE07C;
    case 8u: goto L_088FE090;
    case 9u: goto L_088FE098;
    case 10u: goto L_088FE0D0;
    case 11u: goto L_088FE0D8;
    case 12u: goto L_088FE0E4;
    case 13u: goto L_088FE108;
    case 14u: goto L_088FE120;
    case 15u: goto L_088FE134;
    case 16u: goto L_088FE138;
    case 17u: goto L_088FE140;
    case 18u: goto L_088FE17C;
    case 19u: goto L_088FE19C;
    case 20u: goto L_088FE1A8;
    case 21u: goto L_088FE1B8;
    case 22u: goto L_088FE1BC;
    case 23u: goto L_088FE1C4;
    case 24u: goto L_088FE1D8;
    case 25u: goto L_088FE1F8;
    case 26u: goto L_088FE214;
    case 27u: goto L_088FE22C;
    case 28u: goto L_088FE238;
    case 29u: goto L_088FE248;
    case 30u: goto L_088FE264;
    case 31u: goto L_088FE26C;
    case 32u: goto L_088FE274;
    case 33u: goto L_088FE288;
    case 34u: goto L_088FE298;
    case 35u: goto L_088FE2A4;
    case 36u: goto L_088FE2AC;
    case 37u: goto L_088FE2B4;
    case 38u: goto L_088FE2BC;
    case 39u: goto L_088FE2C8;
    case 40u: goto L_088FE2E4;
    case 41u: goto L_088FE2FC;
    case 42u: goto L_088FE308;
    case 43u: goto L_088FE328;
    case 44u: goto L_088FE33C;
    case 45u: goto L_088FE36C;
    case 46u: goto L_088FE374;
    case 47u: goto L_088FE378;
    case 48u: goto L_088FE390;
    case 49u: goto L_088FE3B4;
    case 50u: goto L_088FE3C0;
    case 51u: goto L_088FE3C8;
    case 52u: goto L_088FE3E0;
    case 53u: goto L_088FE3F4;
    case 54u: goto L_088FE3FC;
    case 55u: goto L_088FE404;
    case 56u: goto L_088FE40C;
    case 57u: goto L_088FE414;
    case 58u: goto L_088FE41C;
    case 59u: goto L_088FE430;
    case 60u: goto L_088FE43C;
    case 61u: goto L_088FE45C;
    case 62u: goto L_088FE470;
    case 63u: goto L_088FE490;
    case 64u: goto L_088FE4AC;
    case 65u: goto L_088FE4C4;
    case 66u: goto L_088FE4D0;
    case 67u: goto L_088FE4E0;
    case 68u: goto L_088FE4FC;
    case 69u: goto L_088FE504;
    case 70u: goto L_088FE50C;
    case 71u: goto L_088FE520;
    case 72u: goto L_088FE540;
    case 73u: goto L_088FE55C;
    case 74u: goto L_088FE578;
    case 75u: goto L_088FE584;
    case 76u: goto L_088FE58C;
    case 77u: goto L_088FE594;
    case 78u: goto L_088FE59C;
    case 79u: goto L_088FE5A4;
    case 80u: goto L_088FE5D0;
    case 81u: goto L_088FE5F4;
    case 82u: goto L_088FE5FC;
    case 83u: goto L_088FE608;
    case 84u: goto L_088FE618;
    case 85u: goto L_088FE644;
    case 86u: goto L_088FE668;
    case 87u: goto L_088FE670;
    case 88u: goto L_088FE67C;
    case 89u: goto L_088FE68C;
    case 90u: goto L_088FE6AC;
    case 91u: goto L_088FE6B8;
    case 92u: goto L_088FE6C8;
    case 93u: goto L_088FE6CC;
    case 94u: goto L_088FE6D4;
    case 95u: goto L_088FE6E8;
    case 96u: goto L_088FE708;
    case 97u: goto L_088FE724;
    case 98u: goto L_088FE73C;
    case 99u: goto L_088FE748;
    case 100u: goto L_088FE758;
    case 101u: goto L_088FE774;
    case 102u: goto L_088FE77C;
    case 103u: goto L_088FE784;
    case 104u: goto L_088FE798;
    case 105u: goto L_088FE7A8;
    case 106u: goto L_088FE7B4;
    case 107u: goto L_088FE7BC;
    case 108u: goto L_088FE7C4;
    case 109u: goto L_088FE7CC;
    case 110u: goto L_088FE7D8;
    case 111u: goto L_088FE7F4;
    case 112u: goto L_088FE80C;
    case 113u: goto L_088FE818;
    case 114u: goto L_088FE838;
    case 115u: goto L_088FE84C;
    case 116u: goto L_088FE870;
    case 117u: goto L_088FE894;
    case 118u: goto L_088FE89C;
    case 119u: goto L_088FE8A4;
    case 120u: goto L_088FE8AC;
    case 121u: goto L_088FE8B8;
    case 122u: goto L_088FE8C4;
    case 123u: goto L_088FE8E4;
    case 124u: goto L_088FE900;
    case 125u: goto L_088FE918;
    case 126u: goto L_088FE924;
    case 127u: goto L_088FE944;
    case 128u: goto L_088FE958;
    case 129u: goto L_088FE974;
    case 130u: goto L_088FE98C;
    case 131u: goto L_088FE998;
    case 132u: goto L_088FE9B8;
    case 133u: goto L_088FE9CC;
    case 134u: goto L_088FE9E8;
    case 135u: goto L_088FEA00;
    case 136u: goto L_088FEA0C;
    case 137u: goto L_088FEA2C;
    case 138u: goto L_088FEA40;
    case 139u: goto L_088FEA5C;
    case 140u: goto L_088FEA74;
    case 141u: goto L_088FEA80;
    case 142u: goto L_088FEAA0;
    case 143u: goto L_088FEAB4;
    case 144u: goto L_088FEAD0;
    case 145u: goto L_088FEAE8;
    case 146u: goto L_088FEAF4;
    case 147u: goto L_088FEB14;
    case 148u: goto L_088FEB28;
    case 149u: goto L_088FEB3C;
    case 150u: goto L_088FEB5C;
    case 151u: goto L_088FEB78;
    case 152u: goto L_088FEB90;
    case 153u: goto L_088FEB9C;
    case 154u: goto L_088FEBAC;
    case 155u: goto L_088FEBC8;
    case 156u: goto L_088FEBD0;
    case 157u: goto L_088FEBD8;
    case 158u: goto L_088FEBEC;
    case 159u: goto L_088FEBFC;
    case 160u: goto L_088FEC08;
    case 161u: goto L_088FEC18;
    case 162u: goto L_088FEC24;
    case 163u: goto L_088FEC34;
    case 164u: goto L_088FEC40;
    case 165u: goto L_088FEC48;
    case 166u: goto L_088FEC58;
    case 167u: goto L_088FEC64;
    case 168u: goto L_088FEC9C;
    case 169u: goto L_088FECBC;
    case 170u: goto L_088FECDC;
    case 171u: goto L_088FECF4;
    case 172u: goto L_088FED0C;
    case 173u: goto L_088FED24;
    case 174u: goto L_088FED38;
    case 175u: goto L_088FED44;
    case 176u: goto L_088FED50;
    case 177u: goto L_088FED5C;
    case 178u: goto L_088FED68;
    case 179u: goto L_088FED74;
    case 180u: goto L_088FEDA8;
    case 181u: goto L_088FEDB4;
    case 182u: goto L_088FEDC0;
    case 183u: goto L_088FEDCC;
    case 184u: goto L_088FEDD8;
    case 185u: goto L_088FEDE4;
    case 186u: goto L_088FEDF0;
    case 187u: goto L_088FEDFC;
    case 188u: goto L_088FEE34;
    case 189u: goto L_088FEE68;
    case 190u: goto L_088FEE9C;
    case 191u: goto L_088FEED0;
    case 192u: goto L_088FEF04;
    case 193u: goto L_088FEF14;
    case 194u: goto L_088FEF28;
    case 195u: goto L_088FEF48;
    case 196u: goto L_088FEF64;
    case 197u: goto L_088FEF7C;
    case 198u: goto L_088FEF88;
    case 199u: goto L_088FEF98;
    case 200u: goto L_088FEFB4;
    case 201u: goto L_088FEFBC;
    case 202u: goto L_088FEFC4;
    case 203u: goto L_088FEFD8;
    case 204u: goto L_088FEFE0;
    case 205u: goto L_088FEFE8;
    case 206u: goto L_088FEFF0;
    case 207u: goto L_088FEFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088FE000:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FE048;
      }
      goto L_088FE008;
    }
L_088FE008:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (16964u << 16u);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FE048;
      }
      goto L_088FE040;
    }
L_088FE040:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(472), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_088FE048;
L_088FE048:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2004)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[28]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
        goto L_088FE07C;
    }
    goto L_088FE060;
L_088FE060:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2004)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FE090;
      }
      goto L_088FE078;
    }
L_088FE078:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    goto L_088FE07C;
L_088FE07C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1988)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FE0D8;
      }
      goto L_088FE090;
    }
L_088FE090:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FE0D8;
      }
      goto L_088FE098;
    }
L_088FE098:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (16840u << 16u);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088FE0D8;
      }
      goto L_088FE0D0;
    }
L_088FE0D0:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(472), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_088FE0D8;
L_088FE0D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(472)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FE134;
      }
      goto L_088FE0E4;
    }
L_088FE0E4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(480)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[20];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(480), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(704)));
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[21]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FE120;
      }
      goto L_088FE108;
    }
L_088FE108:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(704)));
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[22]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FE138;
      }
      goto L_088FE120;
    }
L_088FE120:
    aot_gpr[4] = (18804u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 9216u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(480), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088FE138;
      }
      goto L_088FE134;
    }
L_088FE134:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(480), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    goto L_088FE138;
L_088FE138:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(471), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (aot_gpr[17] | 0u);
    goto L_088FE140;
L_088FE140:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE17C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-32560), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE19C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088FE1BC;
      }
      goto L_088FE1A8;
    }
L_088FE1A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088FE1BC;
      }
      goto L_088FE1B8;
    }
L_088FE1B8:
    aot_gpr[5] = (0u | 1u);
    goto L_088FE1BC;
L_088FE1BC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE1C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088FE1D8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 32u, 0x089183A4u>(ctx, &aot_mem) && ctx.pc == 0x088FE1D8u) goto L_088FE1D8;
    return;
L_088FE1D8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(176));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE1F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088FE274;
      }
      goto L_088FE214;
    }
L_088FE214:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(176));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088FE22Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 41u, 0x0891842Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE22Cu) goto L_088FE22C;
    return;
L_088FE22C:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088FE274;
      }
      goto L_088FE238;
    }
L_088FE238:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FE26C;
      }
      goto L_088FE248;
    }
L_088FE248:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088FE264u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FE264u) goto L_088FE264;
    return;
L_088FE264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FE274;
      }
      goto L_088FE26C;
    }
L_088FE26C:
    aot_gpr[31] = (0x088FE274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x088FE274u) goto L_088FE274;
    return;
L_088FE274:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE288:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088FE298u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 88u, 0x088CF67Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE298u) goto L_088FE298;
    return;
L_088FE298:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE2A4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE2AC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE2B4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE2BC:
    aot_gpr[2] = (2215u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-28840));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE2C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088FE328;
      }
      goto L_088FE2E4;
    }
L_088FE2E4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(232));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088FE2FCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 76u, 0x08918630u>(ctx, &aot_mem) && ctx.pc == 0x088FE2FCu) goto L_088FE2FC;
    return;
L_088FE2FC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088FE328;
      }
      goto L_088FE308;
    }
L_088FE308:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088FE328u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FE328u) goto L_088FE328;
    return;
L_088FE328:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE33C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(732)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] ^ 1u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FE378;
      }
      goto L_088FE36C;
    }
L_088FE36C:
    aot_gpr[31] = (0x088FE374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0263_entry, 263u, 25u, 0x0890B254u>(ctx, &aot_mem) && ctx.pc == 0x088FE374u) goto L_088FE374;
    return;
L_088FE374:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(732)));
    goto L_088FE378;
L_088FE378:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] ^ 1u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088FE41C;
      }
      goto L_088FE390;
    }
L_088FE390:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6928));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-6828)));
    aot_gpr[5] = (aot_gpr[6] ^ aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FE41C;
      }
      goto L_088FE3B4;
    }
L_088FE3B4:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088FE3C0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 18u, 0x088B0144u>(ctx, &aot_mem) && ctx.pc == 0x088FE3C0u) goto L_088FE3C0;
    return;
L_088FE3C0:
    aot_gpr[31] = (0x088FE3C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 14u, 0x088B0100u>(ctx, &aot_mem) && ctx.pc == 0x088FE3C8u) goto L_088FE3C8;
    return;
L_088FE3C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] & 256u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088FE414;
      }
      goto L_088FE3E0;
    }
L_088FE3E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(22292)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FE414;
      }
      goto L_088FE3F4;
    }
L_088FE3F4:
    aot_gpr[31] = (0x088FE3FCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 146u, 0x08817FA8u>(ctx, &aot_mem) && ctx.pc == 0x088FE3FCu) goto L_088FE3FC;
    return;
L_088FE3FC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FE414;
      }
      goto L_088FE404;
    }
L_088FE404:
    aot_gpr[31] = (0x088FE40Cu);
    aot_gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 70u, 0x0881764Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE40Cu) goto L_088FE40C;
    return;
L_088FE40C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FE41C;
      }
      goto L_088FE414;
    }
L_088FE414:
    aot_gpr[31] = (0x088FE41Cu);
    aot_gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 70u, 0x0881764Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE41Cu) goto L_088FE41C;
    return;
L_088FE41C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE430:
    aot_gpr[2] = (2215u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-28820));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE43C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-32504), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE45C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088FE470u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 32u, 0x089183A4u>(ctx, &aot_mem) && ctx.pc == 0x088FE470u) goto L_088FE470;
    return;
L_088FE470:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(272));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE490:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088FE50C;
      }
      goto L_088FE4AC;
    }
L_088FE4AC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(272));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088FE4C4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 41u, 0x0891842Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE4C4u) goto L_088FE4C4;
    return;
L_088FE4C4:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088FE50C;
      }
      goto L_088FE4D0;
    }
L_088FE4D0:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FE504;
      }
      goto L_088FE4E0;
    }
L_088FE4E0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088FE4FCu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FE4FCu) goto L_088FE4FC;
    return;
L_088FE4FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FE50C;
      }
      goto L_088FE504;
    }
L_088FE504:
    aot_gpr[31] = (0x088FE50Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x088FE50Cu) goto L_088FE50C;
    return;
L_088FE50C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE520:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(732)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088FE578;
      }
      goto L_088FE540;
    }
L_088FE540:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(424)));
    aot_gpr[5] = (aot_gpr[5] ^ 1u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_088FE578;
      }
      goto L_088FE55C;
    }
L_088FE55C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4444)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x088FE578u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 173u, 0x088CEF14u>(ctx, &aot_mem) && ctx.pc == 0x088FE578u) goto L_088FE578;
    return;
L_088FE578:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE584:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE58C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE594:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE59C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE5A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(732)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] ^ 1u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088FE608;
      }
      goto L_088FE5D0;
    }
L_088FE5D0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6928));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-6828)));
    aot_gpr[4] = (aot_gpr[5] ^ aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FE608;
      }
      goto L_088FE5F4;
    }
L_088FE5F4:
    aot_gpr[31] = (0x088FE5FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 22u, 0x088B0188u>(ctx, &aot_mem) && ctx.pc == 0x088FE5FCu) goto L_088FE5FC;
    return;
L_088FE5FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x088FE608u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(428)));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 70u, 0x0881764Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE608u) goto L_088FE608;
    return;
L_088FE608:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE618:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(732)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] ^ 1u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088FE67C;
      }
      goto L_088FE644;
    }
L_088FE644:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6928));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-6828)));
    aot_gpr[4] = (aot_gpr[5] ^ aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FE67C;
      }
      goto L_088FE668;
    }
L_088FE668:
    aot_gpr[31] = (0x088FE670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 22u, 0x088B0188u>(ctx, &aot_mem) && ctx.pc == 0x088FE670u) goto L_088FE670;
    return;
L_088FE670:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x088FE67Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(428)));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 70u, 0x0881764Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE67Cu) goto L_088FE67C;
    return;
L_088FE67C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE68C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-32496), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE6AC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088FE6CC;
      }
      goto L_088FE6B8;
    }
L_088FE6B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088FE6CC;
      }
      goto L_088FE6C8;
    }
L_088FE6C8:
    aot_gpr[5] = (0u | 1u);
    goto L_088FE6CC;
L_088FE6CC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE6D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088FE6E8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 32u, 0x089183A4u>(ctx, &aot_mem) && ctx.pc == 0x088FE6E8u) goto L_088FE6E8;
    return;
L_088FE6E8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(448));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE708:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088FE784;
      }
      goto L_088FE724;
    }
L_088FE724:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(448));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088FE73Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 41u, 0x0891842Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE73Cu) goto L_088FE73C;
    return;
L_088FE73C:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088FE784;
      }
      goto L_088FE748;
    }
L_088FE748:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FE77C;
      }
      goto L_088FE758;
    }
L_088FE758:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088FE774u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FE774u) goto L_088FE774;
    return;
L_088FE774:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FE784;
      }
      goto L_088FE77C;
    }
L_088FE77C:
    aot_gpr[31] = (0x088FE784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x088FE784u) goto L_088FE784;
    return;
L_088FE784:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE798:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088FE7A8u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 88u, 0x088CF67Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE7A8u) goto L_088FE7A8;
    return;
L_088FE7A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE7B4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE7BC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE7C4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE7CC:
    aot_gpr[2] = (2215u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-28648));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE7D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088FE838;
      }
      goto L_088FE7F4;
    }
L_088FE7F4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(504));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088FE80Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 76u, 0x08918630u>(ctx, &aot_mem) && ctx.pc == 0x088FE80Cu) goto L_088FE80C;
    return;
L_088FE80C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088FE838;
      }
      goto L_088FE818;
    }
L_088FE818:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088FE838u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FE838u) goto L_088FE838;
    return;
L_088FE838:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE84C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(732)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] ^ 1u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088FE8AC;
      }
      goto L_088FE870;
    }
L_088FE870:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6928));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-6828)));
    aot_gpr[4] = (aot_gpr[5] ^ aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FE8AC;
      }
      goto L_088FE894;
    }
L_088FE894:
    aot_gpr[31] = (0x088FE89Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 18u, 0x088B0144u>(ctx, &aot_mem) && ctx.pc == 0x088FE89Cu) goto L_088FE89C;
    return;
L_088FE89C:
    aot_gpr[31] = (0x088FE8A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 14u, 0x088B0100u>(ctx, &aot_mem) && ctx.pc == 0x088FE8A4u) goto L_088FE8A4;
    return;
L_088FE8A4:
    aot_gpr[31] = (0x088FE8ACu);
    aot_gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 70u, 0x0881764Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE8ACu) goto L_088FE8AC;
    return;
L_088FE8AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE8B8:
    aot_gpr[2] = (2215u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-28624));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE8C4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-32488), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE8E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088FE944;
      }
      goto L_088FE900;
    }
L_088FE900:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(328));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088FE918u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 76u, 0x08918630u>(ctx, &aot_mem) && ctx.pc == 0x088FE918u) goto L_088FE918;
    return;
L_088FE918:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088FE944;
      }
      goto L_088FE924;
    }
L_088FE924:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088FE944u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FE944u) goto L_088FE944;
    return;
L_088FE944:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE958:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088FE9B8;
      }
      goto L_088FE974;
    }
L_088FE974:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(368));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088FE98Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 76u, 0x08918630u>(ctx, &aot_mem) && ctx.pc == 0x088FE98Cu) goto L_088FE98C;
    return;
L_088FE98C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088FE9B8;
      }
      goto L_088FE998;
    }
L_088FE998:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088FE9B8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FE9B8u) goto L_088FE9B8;
    return;
L_088FE9B8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE9CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088FEA2C;
      }
      goto L_088FE9E8;
    }
L_088FE9E8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(408));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088FEA00u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 76u, 0x08918630u>(ctx, &aot_mem) && ctx.pc == 0x088FEA00u) goto L_088FEA00;
    return;
L_088FEA00:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088FEA2C;
      }
      goto L_088FEA0C;
    }
L_088FEA0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088FEA2Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FEA2Cu) goto L_088FEA2C;
    return;
L_088FEA2C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FEA40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088FEAA0;
      }
      goto L_088FEA5C;
    }
L_088FEA5C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(232));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088FEA74u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 76u, 0x08918630u>(ctx, &aot_mem) && ctx.pc == 0x088FEA74u) goto L_088FEA74;
    return;
L_088FEA74:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088FEAA0;
      }
      goto L_088FEA80;
    }
L_088FEA80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088FEAA0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FEAA0u) goto L_088FEAA0;
    return;
L_088FEAA0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FEAB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088FEB14;
      }
      goto L_088FEAD0;
    }
L_088FEAD0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(504));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088FEAE8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 76u, 0x08918630u>(ctx, &aot_mem) && ctx.pc == 0x088FEAE8u) goto L_088FEAE8;
    return;
L_088FEAE8:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088FEB14;
      }
      goto L_088FEAF4;
    }
L_088FEAF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088FEB14u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FEB14u) goto L_088FEB14;
    return;
L_088FEB14:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FEB28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088FEB3Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 87u, 0x089186DCu>(ctx, &aot_mem) && ctx.pc == 0x088FEB3Cu) goto L_088FEB3C;
    return;
L_088FEB3C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(544));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FEB5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088FEBD8;
      }
      goto L_088FEB78;
    }
L_088FEB78:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(544));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088FEB90u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 90u, 0x08918710u>(ctx, &aot_mem) && ctx.pc == 0x088FEB90u) goto L_088FEB90;
    return;
L_088FEB90:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088FEBD8;
      }
      goto L_088FEB9C;
    }
L_088FEB9C:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FEBD0;
      }
      goto L_088FEBAC;
    }
L_088FEBAC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088FEBC8u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FEBC8u) goto L_088FEBC8;
    return;
L_088FEBC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FEBD8;
      }
      goto L_088FEBD0;
    }
L_088FEBD0:
    aot_gpr[31] = (0x088FEBD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x088FEBD8u) goto L_088FEBD8;
    return;
L_088FEBD8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FEBEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088FEBFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 98u, 0x08918790u>(ctx, &aot_mem) && ctx.pc == 0x088FEBFCu) goto L_088FEBFC;
    return;
L_088FEBFC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FEC08:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088FEC18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 100u, 0x089187BCu>(ctx, &aot_mem) && ctx.pc == 0x088FEC18u) goto L_088FEC18;
    return;
L_088FEC18:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FEC24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088FEC34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 86u, 0x089186BCu>(ctx, &aot_mem) && ctx.pc == 0x088FEC34u) goto L_088FEC34;
    return;
L_088FEC34:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FEC40:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FEC48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088FEC58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 89u, 0x08918708u>(ctx, &aot_mem) && ctx.pc == 0x088FEC58u) goto L_088FEC58;
    return;
L_088FEC58:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FEC64:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(5968));
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[7] = (2219u << 16u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-22064));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088FEC9Cu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-22016));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 67u, 0x089185A4u>(ctx, &aot_mem) && ctx.pc == 0x088FEC9Cu) goto L_088FEC9C;
    return;
L_088FEC9C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-7456));
    aot_gpr[7] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088FECBCu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-21984));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 67u, 0x089185A4u>(ctx, &aot_mem) && ctx.pc == 0x088FECBCu) goto L_088FECBC;
    return;
L_088FECBC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-6880));
    aot_gpr[7] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088FECDCu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-21888));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 67u, 0x089185A4u>(ctx, &aot_mem) && ctx.pc == 0x088FECDCu) goto L_088FECDC;
    return;
L_088FECDC:
    aot_gpr[7] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088FECF4u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-21952));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 67u, 0x089185A4u>(ctx, &aot_mem) && ctx.pc == 0x088FECF4u) goto L_088FECF4;
    return;
L_088FECF4:
    aot_gpr[7] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088FED0Cu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-21920));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 67u, 0x089185A4u>(ctx, &aot_mem) && ctx.pc == 0x088FED0Cu) goto L_088FED0C;
    return;
L_088FED0C:
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
L_088FED24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088FED38u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-22064));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 70u, 0x089185ECu>(ctx, &aot_mem) && ctx.pc == 0x088FED38u) goto L_088FED38;
    return;
L_088FED38:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088FED44u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5968));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 70u, 0x089185ECu>(ctx, &aot_mem) && ctx.pc == 0x088FED44u) goto L_088FED44;
    return;
L_088FED44:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088FED50u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7456));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 70u, 0x089185ECu>(ctx, &aot_mem) && ctx.pc == 0x088FED50u) goto L_088FED50;
    return;
L_088FED50:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088FED5Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6880));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 70u, 0x089185ECu>(ctx, &aot_mem) && ctx.pc == 0x088FED5Cu) goto L_088FED5C;
    return;
L_088FED5C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FED68:
    aot_gpr[2] = (2215u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-28584));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FED74:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-32480), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088FEDA8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-22064));
    goto L_088FEF14;
L_088FEDA8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x088FEDB4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32476));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x088FEDB4u) goto L_088FEDB4;
    return;
L_088FEDB4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088FEDC0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5968));
    goto L_088FE45C;
L_088FEDC0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x088FEDCCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32464));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x088FEDCCu) goto L_088FEDCC;
    return;
L_088FEDCC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088FEDD8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7456));
    goto L_088FE1C4;
L_088FEDD8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x088FEDE4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32452));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x088FEDE4u) goto L_088FEDE4;
    return;
L_088FEDE4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088FEDF0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6880));
    goto L_088FE6D4;
L_088FEDF0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x088FEDFCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32440));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x088FEDFCu) goto L_088FEDFC;
    return;
L_088FEDFC:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-22016));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-22016), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(328));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x088FEE34u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32428));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x088FEE34u) goto L_088FEE34;
    return;
L_088FEE34:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-21984));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-21984), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(232));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x088FEE68u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32416));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x088FEE68u) goto L_088FEE68;
    return;
L_088FEE68:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-21952));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-21952), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(368));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x088FEE9Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32404));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x088FEE9Cu) goto L_088FEE9C;
    return;
L_088FEE9C:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-21920));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-21920), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(408));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x088FEED0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32392));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x088FEED0u) goto L_088FEED0;
    return;
L_088FEED0:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-21888));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-21888), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(504));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x088FEF04u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32380));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x088FEF04u) goto L_088FEF04;
    return;
L_088FEF04:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FEF14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088FEF28u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 32u, 0x089183A4u>(ctx, &aot_mem) && ctx.pc == 0x088FEF28u) goto L_088FEF28;
    return;
L_088FEF28:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(608));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FEF48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088FEFC4;
      }
      goto L_088FEF64;
    }
L_088FEF64:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(608));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088FEF7Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 41u, 0x0891842Cu>(ctx, &aot_mem) && ctx.pc == 0x088FEF7Cu) goto L_088FEF7C;
    return;
L_088FEF7C:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088FEFC4;
      }
      goto L_088FEF88;
    }
L_088FEF88:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FEFBC;
      }
      goto L_088FEF98;
    }
L_088FEF98:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088FEFB4u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FEFB4u) goto L_088FEFB4;
    return;
L_088FEFB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FEFC4;
      }
      goto L_088FEFBC;
    }
L_088FEFBC:
    aot_gpr[31] = (0x088FEFC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x088FEFC4u) goto L_088FEFC4;
    return;
L_088FEFC4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FEFD8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FEFE0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FEFE8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FEFF0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FEFF8:
    aot_gpr[2] = (2215u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-28560));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0250(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0250_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_250(Runtime &runtime) {
    runtime.register_generated_unit(250u, 0x088FE000u, 4096u, &recomp_unit_0250, &recomp_unit_0250_entry);
    runtime.register_function(0x088FE000u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE008u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE040u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE048u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE060u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE078u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE07Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE090u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE098u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE0D0u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE0D8u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE0E4u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE108u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE120u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE134u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE138u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE140u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE17Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE19Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE1A8u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE1B8u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE1BCu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE1C4u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE1D8u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE1F8u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE214u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE22Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE238u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE248u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE264u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE26Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE274u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE288u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE298u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE2A4u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE2ACu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE2B4u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE2BCu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE2C8u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE2E4u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE2FCu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE308u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE328u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE33Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE36Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE374u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE378u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE390u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE3B4u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE3C0u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE3C8u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE3E0u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE3F4u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE3FCu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE404u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE40Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE414u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE41Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE430u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE43Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE45Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE470u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE490u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE4ACu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE4C4u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE4D0u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE4E0u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE4FCu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE504u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE50Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE520u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE540u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE55Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE578u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE584u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE58Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE594u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE59Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE5A4u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE5D0u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE5F4u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE5FCu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE608u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE618u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE644u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE668u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE670u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE67Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE68Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE6ACu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE6B8u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE6C8u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE6CCu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE6D4u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE6E8u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE708u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE724u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE73Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE748u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE758u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE774u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE77Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE784u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE798u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE7A8u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE7B4u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE7BCu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE7C4u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE7CCu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE7D8u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE7F4u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE80Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE818u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE838u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE84Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE870u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE894u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE89Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE8A4u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE8ACu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE8B8u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE8C4u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE8E4u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE900u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE918u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE924u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE944u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE958u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE974u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE98Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE998u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE9B8u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE9CCu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FE9E8u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEA00u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEA0Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEA2Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEA40u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEA5Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEA74u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEA80u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEAA0u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEAB4u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEAD0u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEAE8u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEAF4u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEB14u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEB28u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEB3Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEB5Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEB78u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEB90u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEB9Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEBACu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEBC8u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEBD0u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEBD8u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEBECu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEBFCu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEC08u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEC18u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEC24u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEC34u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEC40u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEC48u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEC58u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEC64u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEC9Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FECBCu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FECDCu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FECF4u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FED0Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FED24u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FED38u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FED44u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FED50u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FED5Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FED68u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FED74u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEDA8u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEDB4u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEDC0u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEDCCu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEDD8u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEDE4u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEDF0u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEDFCu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEE34u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEE68u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEE9Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEED0u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEF04u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEF14u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEF28u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEF48u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEF64u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEF7Cu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEF88u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEF98u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEFB4u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEFBCu, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEFC4u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEFD8u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEFE0u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEFE8u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEFF0u, &recomp_unit_0250, "recomp_unit_0250");
    runtime.register_function(0x088FEFF8u, &recomp_unit_0250, "recomp_unit_0250");
}
} // namespace psprecomp
