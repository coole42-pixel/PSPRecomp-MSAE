#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0123[1021] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0,
    0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0,
    0, 7, 0, 8, 0, 9, 10, 0, 11, 0, 0, 0, 0, 0, 0, 12, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0,
    15, 0, 0, 16, 17, 0, 0, 18, 0, 0, 0, 0, 19, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 24, 0,
    0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29,
    0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 37, 0, 0,
    0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0,
    0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 57, 0, 0, 0, 0, 58, 0, 0,
    0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64,
    0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 71, 0, 72, 0,
    0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 0, 81, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 89, 0, 90, 0, 0, 91, 0,
    0, 92, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0,
    0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0,
    105, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 108, 0, 109, 0, 110, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0,
    0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 117, 0, 118,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 121, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 128, 0, 129, 130,
    0, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0,
    145, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 153, 0, 0,
    0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167,
    0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0,
    176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181,
};
void recomp_unit_0123_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0887F000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0123[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0887F000;
    case 2u: goto L_0887F074;
    case 3u: goto L_0887F098;
    case 4u: goto L_0887F0D0;
    case 5u: goto L_0887F0E4;
    case 6u: goto L_0887F0F4;
    case 7u: goto L_0887F104;
    case 8u: goto L_0887F10C;
    case 9u: goto L_0887F114;
    case 10u: goto L_0887F118;
    case 11u: goto L_0887F120;
    case 12u: goto L_0887F13C;
    case 13u: goto L_0887F140;
    case 14u: goto L_0887F16C;
    case 15u: goto L_0887F180;
    case 16u: goto L_0887F18C;
    case 17u: goto L_0887F190;
    case 18u: goto L_0887F19C;
    case 19u: goto L_0887F1B0;
    case 20u: goto L_0887F1B4;
    case 21u: goto L_0887F1CC;
    case 22u: goto L_0887F1E4;
    case 23u: goto L_0887F1EC;
    case 24u: goto L_0887F1F8;
    case 25u: goto L_0887F208;
    case 26u: goto L_0887F218;
    case 27u: goto L_0887F230;
    case 28u: goto L_0887F25C;
    case 29u: goto L_0887F27C;
    case 30u: goto L_0887F288;
    case 31u: goto L_0887F298;
    case 32u: goto L_0887F2A8;
    case 33u: goto L_0887F2B8;
    case 34u: goto L_0887F2C4;
    case 35u: goto L_0887F2D8;
    case 36u: goto L_0887F2E4;
    case 37u: goto L_0887F2F4;
    case 38u: goto L_0887F304;
    case 39u: goto L_0887F314;
    case 40u: goto L_0887F31C;
    case 41u: goto L_0887F330;
    case 42u: goto L_0887F390;
    case 43u: goto L_0887F39C;
    case 44u: goto L_0887F3A8;
    case 45u: goto L_0887F3F0;
    case 46u: goto L_0887F404;
    case 47u: goto L_0887F444;
    case 48u: goto L_0887F454;
    case 49u: goto L_0887F45C;
    case 50u: goto L_0887F468;
    case 51u: goto L_0887F478;
    case 52u: goto L_0887F488;
    case 53u: goto L_0887F4A4;
    case 54u: goto L_0887F4AC;
    case 55u: goto L_0887F4D0;
    case 56u: goto L_0887F4D8;
    case 57u: goto L_0887F4E0;
    case 58u: goto L_0887F4F4;
    case 59u: goto L_0887F504;
    case 60u: goto L_0887F514;
    case 61u: goto L_0887F52C;
    case 62u: goto L_0887F544;
    case 63u: goto L_0887F550;
    case 64u: goto L_0887F57C;
    case 65u: goto L_0887F588;
    case 66u: goto L_0887F590;
    case 67u: goto L_0887F5B0;
    case 68u: goto L_0887F5B8;
    case 69u: goto L_0887F5D0;
    case 70u: goto L_0887F5D8;
    case 71u: goto L_0887F5F0;
    case 72u: goto L_0887F5F8;
    case 73u: goto L_0887F604;
    case 74u: goto L_0887F60C;
    case 75u: goto L_0887F62C;
    case 76u: goto L_0887F634;
    case 77u: goto L_0887F640;
    case 78u: goto L_0887F64C;
    case 79u: goto L_0887F658;
    case 80u: goto L_0887F664;
    case 81u: goto L_0887F674;
    case 82u: goto L_0887F6AC;
    case 83u: goto L_0887F6E8;
    case 84u: goto L_0887F700;
    case 85u: goto L_0887F79C;
    case 86u: goto L_0887F7B4;
    case 87u: goto L_0887F7BC;
    case 88u: goto L_0887F7E0;
    case 89u: goto L_0887F7E4;
    case 90u: goto L_0887F7EC;
    case 91u: goto L_0887F7F8;
    case 92u: goto L_0887F804;
    case 93u: goto L_0887F810;
    case 94u: goto L_0887F820;
    case 95u: goto L_0887F840;
    case 96u: goto L_0887F850;
    case 97u: goto L_0887F860;
    case 98u: goto L_0887F874;
    case 99u: goto L_0887F884;
    case 100u: goto L_0887F88C;
    case 101u: goto L_0887F8B4;
    case 102u: goto L_0887F8C4;
    case 103u: goto L_0887F8DC;
    case 104u: goto L_0887F8EC;
    case 105u: goto L_0887F900;
    case 106u: goto L_0887F90C;
    case 107u: goto L_0887F914;
    case 108u: goto L_0887F92C;
    case 109u: goto L_0887F934;
    case 110u: goto L_0887F93C;
    case 111u: goto L_0887F944;
    case 112u: goto L_0887F954;
    case 113u: goto L_0887F974;
    case 114u: goto L_0887F998;
    case 115u: goto L_0887F9E0;
    case 116u: goto L_0887F9EC;
    case 117u: goto L_0887F9F4;
    case 118u: goto L_0887F9FC;
    case 119u: goto L_0887FA24;
    case 120u: goto L_0887FA30;
    case 121u: goto L_0887FA38;
    case 122u: goto L_0887FA3C;
    case 123u: goto L_0887FA64;
    case 124u: goto L_0887FA88;
    case 125u: goto L_0887FAAC;
    case 126u: goto L_0887FAD0;
    case 127u: goto L_0887FAE4;
    case 128u: goto L_0887FAF0;
    case 129u: goto L_0887FAF8;
    case 130u: goto L_0887FAFC;
    case 131u: goto L_0887FB0C;
    case 132u: goto L_0887FB14;
    case 133u: goto L_0887FB24;
    case 134u: goto L_0887FB2C;
    case 135u: goto L_0887FB4C;
    case 136u: goto L_0887FB68;
    case 137u: goto L_0887FB98;
    case 138u: goto L_0887FBAC;
    case 139u: goto L_0887FBD8;
    case 140u: goto L_0887FC24;
    case 141u: goto L_0887FC34;
    case 142u: goto L_0887FC40;
    case 143u: goto L_0887FC4C;
    case 144u: goto L_0887FC5C;
    case 145u: goto L_0887FC80;
    case 146u: goto L_0887FC88;
    case 147u: goto L_0887FC98;
    case 148u: goto L_0887FCAC;
    case 149u: goto L_0887FCB8;
    case 150u: goto L_0887FCC0;
    case 151u: goto L_0887FCDC;
    case 152u: goto L_0887FCE4;
    case 153u: goto L_0887FCF4;
    case 154u: goto L_0887FD08;
    case 155u: goto L_0887FD14;
    case 156u: goto L_0887FD20;
    case 157u: goto L_0887FD5C;
    case 158u: goto L_0887FDC0;
    case 159u: goto L_0887FDD0;
    case 160u: goto L_0887FDD8;
    case 161u: goto L_0887FDF4;
    case 162u: goto L_0887FE38;
    case 163u: goto L_0887FE54;
    case 164u: goto L_0887FE94;
    case 165u: goto L_0887FEAC;
    case 166u: goto L_0887FEB8;
    case 167u: goto L_0887FEFC;
    case 168u: goto L_0887FF0C;
    case 169u: goto L_0887FF1C;
    case 170u: goto L_0887FF28;
    case 171u: goto L_0887FF30;
    case 172u: goto L_0887FF38;
    case 173u: goto L_0887FF40;
    case 174u: goto L_0887FF54;
    case 175u: goto L_0887FF6C;
    case 176u: goto L_0887FF80;
    case 177u: goto L_0887FF9C;
    case 178u: goto L_0887FFBC;
    case 179u: goto L_0887FFC4;
    case 180u: goto L_0887FFE4;
    case 181u: goto L_0887FFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0887F000:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(316)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7504));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7048)));
    aot_gpr[5] = (16576u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[17] - aot_gpr[6]);
    aot_gpr[18] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), aot_gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0887F098;
      }
      goto L_0887F074;
    }
L_0887F074:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7048)));
    aot_gpr[4] = (16576u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[18] = (0u | 1u);
    aot_fpr[12] = aot_fpr[14] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0887F098;
L_0887F098:
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7048)));
    aot_gpr[4] = (16576u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[22] = aot_fpr[22] / aot_fpr[12];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F674;
      }
      goto L_0887F0D0;
    }
L_0887F0D0:
    aot_gpr[4] = (aot_gpr[19] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F664;
      }
      goto L_0887F0E4;
    }
L_0887F0E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(21)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F664;
      }
      goto L_0887F0F4;
    }
L_0887F0F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
        goto L_0887F118;
    }
    goto L_0887F104;
L_0887F104:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0887F664;
      }
      goto L_0887F10C;
    }
L_0887F10C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0887F4AC;
      }
      goto L_0887F114;
    }
L_0887F114:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    goto L_0887F118;
L_0887F118:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F664;
      }
      goto L_0887F120;
    }
L_0887F120:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F4A4;
      }
      goto L_0887F13C;
    }
L_0887F13C:
    aot_gpr[4] = (aot_gpr[21] << 5u);
    goto L_0887F140;
L_0887F140:
    aot_gpr[5] = (aot_gpr[21] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[6] = (0u | 4u);
    aot_gpr[30] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] != aot_gpr[6]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
        goto L_0887F190;
    }
    goto L_0887F16C;
L_0887F16C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[4] != aot_gpr[5]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
        goto L_0887F190;
    }
    goto L_0887F180;
L_0887F180:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    if (aot_gpr[30] == aot_gpr[4]) {
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(8)));
        goto L_0887F1B4;
    }
    goto L_0887F18C;
L_0887F18C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    goto L_0887F190;
L_0887F190:
    aot_gpr[5] = (0u | 5u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887F488;
      }
      goto L_0887F19C;
    }
L_0887F19C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887F488;
      }
      goto L_0887F1B0;
    }
L_0887F1B0:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(8)));
    goto L_0887F1B4;
L_0887F1B4:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_0887F1E4;
      }
      goto L_0887F1CC;
    }
L_0887F1CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] | 20u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(44), aot_gpr[4]);
      if (branch_taken) {
          goto L_0887F488;
      }
      goto L_0887F1E4;
    }
L_0887F1E4:
    if (aot_gpr[18] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[23]);
        goto L_0887F230;
    }
    goto L_0887F1EC;
L_0887F1EC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0887F1F8u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 109u, 0x088C69F8u>(ctx, &aot_mem) && ctx.pc == 0x0887F1F8u) goto L_0887F1F8;
    return;
L_0887F1F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(21)));
    if (aot_gpr[4] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[23]);
        goto L_0887F230;
    }
    goto L_0887F208;
L_0887F208:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[23]);
        goto L_0887F230;
    }
    goto L_0887F218;
L_0887F218:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] | 20u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(44), aot_gpr[4]);
      if (branch_taken) {
          goto L_0887F488;
      }
      goto L_0887F230;
    }
L_0887F230:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[30]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[22]);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0887F25Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 109u, 0x088C69F8u>(ctx, &aot_mem) && ctx.pc == 0x0887F25Cu) goto L_0887F25C;
    return;
L_0887F25C:
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(146));
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(148));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0887F27Cu);
    aot_gpr[7] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 92u, 0x088C67DCu>(ctx, &aot_mem) && ctx.pc == 0x0887F27Cu) goto L_0887F27C;
    return;
L_0887F27C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(144))))));
    aot_gpr[31] = (0x0887F288u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 57u, 0x088C6434u>(ctx, &aot_mem) && ctx.pc == 0x0887F288u) goto L_0887F288;
    return;
L_0887F288:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(146))))));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x0887F298u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 57u, 0x088C6434u>(ctx, &aot_mem) && ctx.pc == 0x0887F298u) goto L_0887F298;
    return;
L_0887F298:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(148))))));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x0887F2A8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 57u, 0x088C6434u>(ctx, &aot_mem) && ctx.pc == 0x0887F2A8u) goto L_0887F2A8;
    return;
L_0887F2A8:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[31] = (0x0887F2B8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 94u, 0x088C6878u>(ctx, &aot_mem) && ctx.pc == 0x0887F2B8u) goto L_0887F2B8;
    return;
L_0887F2B8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0887F2C4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 109u, 0x088C69F8u>(ctx, &aot_mem) && ctx.pc == 0x0887F2C4u) goto L_0887F2C4;
    return;
L_0887F2C4:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0887F2D8u);
    aot_gpr[7] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 92u, 0x088C67DCu>(ctx, &aot_mem) && ctx.pc == 0x0887F2D8u) goto L_0887F2D8;
    return;
L_0887F2D8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(144))))));
    aot_gpr[31] = (0x0887F2E4u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 57u, 0x088C6434u>(ctx, &aot_mem) && ctx.pc == 0x0887F2E4u) goto L_0887F2E4;
    return;
L_0887F2E4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(146))))));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x0887F2F4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 57u, 0x088C6434u>(ctx, &aot_mem) && ctx.pc == 0x0887F2F4u) goto L_0887F2F4;
    return;
L_0887F2F4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(148))))));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x0887F304u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 57u, 0x088C6434u>(ctx, &aot_mem) && ctx.pc == 0x0887F304u) goto L_0887F304;
    return;
L_0887F304:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    aot_gpr[31] = (0x0887F314u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 94u, 0x088C6878u>(ctx, &aot_mem) && ctx.pc == 0x0887F314u) goto L_0887F314;
    return;
L_0887F314:
    aot_gpr[31] = (0x0887F31Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 98u, 0x088C6944u>(ctx, &aot_mem) && ctx.pc == 0x0887F31Cu) goto L_0887F31C;
    return;
L_0887F31C:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[4] = (aot_gpr[2] & 64u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
      if (branch_taken) {
          goto L_0887F3F0;
      }
      goto L_0887F330;
    }
L_0887F330:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_fpr[16] = aot_fpr[12] - aot_fpr[22];
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const float fs = aot_fpr[18]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[18] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[18] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    aot_fpr[18] = aot_fpr[18] + aot_fpr[12];
    aot_fpr[15] = aot_fpr[15] + aot_fpr[17];
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[31] = (0x0887F390u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 142u, 0x0887EA9Cu>(ctx, &aot_mem) && ctx.pc == 0x0887F390u) goto L_0887F390;
    return;
L_0887F390:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[31] = (0x0887F39Cu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 142u, 0x0887EA9Cu>(ctx, &aot_mem) && ctx.pc == 0x0887F39Cu) goto L_0887F39C;
    return;
L_0887F39C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[31] = (0x0887F3A8u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(120));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 142u, 0x0887EA9Cu>(ctx, &aot_mem) && ctx.pc == 0x0887F3A8u) goto L_0887F3A8;
    return;
L_0887F3A8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    { const float fs = aot_fpr[18]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = aot_fpr[17] + aot_fpr[16];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0887F3F0;
L_0887F3F0:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(84));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(88));
    aot_gpr[31] = (0x0887F404u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 58u, 0x0888467Cu>(ctx, &aot_mem) && ctx.pc == 0x0887F404u) goto L_0887F404;
    return;
L_0887F404:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(3020)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[23] + aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[23] + static_cast<std::uint32_t>(32));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0887F444u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887F444u) goto L_0887F444;
    return;
L_0887F444:
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0887F454u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 31u, 0x088CF218u>(ctx, &aot_mem) && ctx.pc == 0x0887F454u) goto L_0887F454;
    return;
L_0887F454:
    aot_gpr[31] = (0x0887F45Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 98u, 0x088C6944u>(ctx, &aot_mem) && ctx.pc == 0x0887F45Cu) goto L_0887F45C;
    return;
L_0887F45C:
    aot_gpr[4] = (aot_gpr[2] & 32u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F478;
      }
      goto L_0887F468;
    }
L_0887F468:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(24), aot_gpr[4]);
      if (branch_taken) {
          goto L_0887F488;
      }
      goto L_0887F478;
    }
L_0887F478:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    goto L_0887F488;
L_0887F488:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[21] << 5u);
      if (branch_taken) {
          goto L_0887F140;
      }
      goto L_0887F4A4;
    }
L_0887F4A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F664;
      }
      goto L_0887F4AC;
    }
L_0887F4AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(412)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F4D8;
      }
      goto L_0887F4D0;
    }
L_0887F4D0:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_0887F4D8;
L_0887F4D8:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F664;
      }
      goto L_0887F4E0;
    }
L_0887F4E0:
    aot_gpr[23] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[30] = (aot_gpr[23] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (0x0887F4F4u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 58u, 0x088C6458u>(ctx, &aot_mem) && ctx.pc == 0x0887F4F4u) goto L_0887F4F4;
    return;
L_0887F4F4:
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(144), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x0887F504u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 58u, 0x088C6458u>(ctx, &aot_mem) && ctx.pc == 0x0887F504u) goto L_0887F504;
    return;
L_0887F504:
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(146), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x0887F514u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 58u, 0x088C6458u>(ctx, &aot_mem) && ctx.pc == 0x0887F514u) goto L_0887F514;
    return;
L_0887F514:
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(144))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(146))))));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(148))))));
    aot_gpr[31] = (0x0887F52Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 91u, 0x088C67A8u>(ctx, &aot_mem) && ctx.pc == 0x0887F52Cu) goto L_0887F52C;
    return;
L_0887F52C:
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(164));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(168));
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0887F544u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 65u, 0x088847E8u>(ctx, &aot_mem) && ctx.pc == 0x0887F544u) goto L_0887F544;
    return;
L_0887F544:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0887F550u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 93u, 0x088C6804u>(ctx, &aot_mem) && ctx.pc == 0x0887F550u) goto L_0887F550;
    return;
L_0887F550:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(56));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (17150u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[31] = (0x0887F57Cu);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 95u, 0x088C6914u>(ctx, &aot_mem) && ctx.pc == 0x0887F57Cu) goto L_0887F57C;
    return;
L_0887F57C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0887F590;
      }
      goto L_0887F588;
    }
L_0887F588:
    aot_gpr[4] = (aot_gpr[4] | 1u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_0887F590;
L_0887F590:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F5B8;
      }
      goto L_0887F5B0;
    }
L_0887F5B0:
    aot_gpr[4] = (aot_gpr[4] | 2u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_0887F5B8;
L_0887F5B8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16)));
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F5D8;
      }
      goto L_0887F5D0;
    }
L_0887F5D0:
    aot_gpr[4] = (aot_gpr[4] | 4u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_0887F5D8;
L_0887F5D8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F5F8;
      }
      goto L_0887F5F0;
    }
L_0887F5F0:
    aot_gpr[4] = (aot_gpr[4] | 8u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_0887F5F8;
L_0887F5F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F60C;
      }
      goto L_0887F604;
    }
L_0887F604:
    aot_gpr[4] = (aot_gpr[4] | 16u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_0887F60C;
L_0887F60C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(492)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4000));
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F634;
      }
      goto L_0887F62C;
    }
L_0887F62C:
    aot_gpr[4] = (aot_gpr[4] | 32u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_0887F634;
L_0887F634:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F64C;
      }
      goto L_0887F640;
    }
L_0887F640:
    aot_gpr[4] = (aot_gpr[4] | 64u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_0887F64C;
L_0887F64C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0887F658u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 97u, 0x088C6934u>(ctx, &aot_mem) && ctx.pc == 0x0887F658u) goto L_0887F658;
    return;
L_0887F658:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0887F664u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 109u, 0x088C69F8u>(ctx, &aot_mem) && ctx.pc == 0x0887F664u) goto L_0887F664;
    return;
L_0887F664:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887F0D0;
      }
      goto L_0887F674;
    }
L_0887F674:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F6AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24760));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(52)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28636)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4444)));
      if (branch_taken) {
          goto L_0887F914;
      }
      goto L_0887F6E8;
    }
L_0887F6E8:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(24))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F900;
      }
      goto L_0887F700;
    }
L_0887F700:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7048)));
    aot_gpr[5] = (16576u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[15] = __builtin_bit_cast(float, 0u);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[14];
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[6] = (18804u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] | 9216u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (0u | 4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2137), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2136), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2140), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2144), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2148), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2152), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2156), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2160), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2164), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2168), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7504));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(24))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0887F7E4;
      }
      goto L_0887F79C;
    }
L_0887F79C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F7E4;
      }
      goto L_0887F7B4;
    }
L_0887F7B4:
    aot_gpr[31] = (0x0887F7BCu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 111u, 0x088C6A28u>(ctx, &aot_mem) && ctx.pc == 0x0887F7BCu) goto L_0887F7BC;
    return;
L_0887F7BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x0887F7E0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 59u, 0x088B0410u>(ctx, &aot_mem) && ctx.pc == 0x0887F7E0u) goto L_0887F7E0;
    return;
L_0887F7E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_0887F7E4;
L_0887F7E4:
    aot_gpr[31] = (0x0887F7ECu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 99u, 0x088C6950u>(ctx, &aot_mem) && ctx.pc == 0x0887F7ECu) goto L_0887F7EC;
    return;
L_0887F7EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x0887F7F8u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 99u, 0x088C6950u>(ctx, &aot_mem) && ctx.pc == 0x0887F7F8u) goto L_0887F7F8;
    return;
L_0887F7F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x0887F804u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 99u, 0x088C6950u>(ctx, &aot_mem) && ctx.pc == 0x0887F804u) goto L_0887F804;
    return;
L_0887F804:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0887F900;
      }
      goto L_0887F810;
    }
L_0887F810:
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[31] = (0x0887F820u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5596));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 171u, 0x08873AD8u>(ctx, &aot_mem) && ctx.pc == 0x0887F820u) goto L_0887F820;
    return;
L_0887F820:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25348)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5596));
      if (branch_taken) {
          goto L_0887F860;
      }
      goto L_0887F840;
    }
L_0887F840:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0887F850u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 168u, 0x08873ABCu>(ctx, &aot_mem) && ctx.pc == 0x0887F850u) goto L_0887F850;
    return;
L_0887F850:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_0887F884;
      }
      goto L_0887F860;
    }
L_0887F860:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x0887F874u);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 162u, 0x08873A38u>(ctx, &aot_mem) && ctx.pc == 0x0887F874u) goto L_0887F874;
    return;
L_0887F874:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    goto L_0887F884;
L_0887F884:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F8B4;
      }
      goto L_0887F88C;
    }
L_0887F88C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(27456)));
    aot_gpr[6] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(160), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(27424)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(152), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    goto L_0887F8B4;
L_0887F8B4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F8DC;
      }
      goto L_0887F8C4;
    }
L_0887F8C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(27456)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(148), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    goto L_0887F8DC;
L_0887F8DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F900;
      }
      goto L_0887F8EC;
    }
L_0887F8EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(27456)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(152), aot_gpr[4]);
    goto L_0887F900;
L_0887F900:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0887F914;
      }
      goto L_0887F90C;
    }
L_0887F90C:
    aot_gpr[31] = (0x0887F914u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 206u, 0x0887EFD8u>(ctx, &aot_mem) && ctx.pc == 0x0887F914u) goto L_0887F914;
    return;
L_0887F914:
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
L_0887F92C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F934:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F93C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F944:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(22)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F954:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25752), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F974:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0887F998u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 104u, 0x0887E814u>(ctx, &aot_mem) && ctx.pc == 0x0887F998u) goto L_0887F998;
    return;
L_0887F998:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6844));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (0u | 7u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[17] = (1u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0887F9E0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887F9E0u) goto L_0887F9E0;
    return;
L_0887F9E0:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (aot_gpr[18] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[20]);
        goto L_0887F9FC;
    }
    goto L_0887F9EC;
L_0887F9EC:
    aot_gpr[31] = (0x0887F9F4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 70u, 0x088C6608u>(ctx, &aot_mem) && ctx.pc == 0x0887F9F4u) goto L_0887F9F4;
    return;
L_0887F9F4:
    aot_gpr[20] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    goto L_0887F9FC;
L_0887F9FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0887FA24u);
    aot_gpr[5] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887FA24u) goto L_0887FA24;
    return;
L_0887FA24:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FA3C;
      }
      goto L_0887FA30;
    }
L_0887FA30:
    aot_gpr[31] = (0x0887FA38u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 70u, 0x088C6608u>(ctx, &aot_mem) && ctx.pc == 0x0887FA38u) goto L_0887FA38;
    return;
L_0887FA38:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_0887FA3C;
L_0887FA3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[31] = (0x0887FA64u);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 76u, 0x088C6674u>(ctx, &aot_mem) && ctx.pc == 0x0887FA64u) goto L_0887FA64;
    return;
L_0887FA64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[31] = (0x0887FA88u);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 76u, 0x088C6674u>(ctx, &aot_mem) && ctx.pc == 0x0887FA88u) goto L_0887FA88;
    return;
L_0887FA88:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_0887FAAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0887FB4C;
      }
      goto L_0887FAD0;
    }
L_0887FAD0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6844));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[17] | 0u);
    goto L_0887FAE4;
L_0887FAE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FAFC;
      }
      goto L_0887FAF0;
    }
L_0887FAF0:
    aot_gpr[31] = (0x0887FAF8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 72u, 0x088C6630u>(ctx, &aot_mem) && ctx.pc == 0x0887FAF8u) goto L_0887FAF8;
    return;
L_0887FAF8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), 0u);
    goto L_0887FAFC;
L_0887FAFC:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887FAE4;
      }
      goto L_0887FB0C;
    }
L_0887FB0C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_0887FB24;
      }
      goto L_0887FB14;
    }
L_0887FB14:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24840));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_0887FB24;
L_0887FB24:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0887FB4C;
      }
      goto L_0887FB2C;
    }
L_0887FB2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0887FB4Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887FB4Cu) goto L_0887FB4C;
    return;
L_0887FB4C:
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
L_0887FB68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_0887FB98;
L_0887FB98:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887FB98;
      }
      goto L_0887FBAC;
    }
L_0887FBAC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(7904), static_cast<std::uint8_t>(0u));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4444), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-6476), aot_gpr[18]);
    aot_gpr[31] = (0x0887FBD8u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 27u, 0x0882C290u>(ctx, &aot_mem) && ctx.pc == 0x0887FBD8u) goto L_0887FBD8;
    return;
L_0887FBD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(424), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(27416)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887FC34;
      }
      goto L_0887FC24;
    }
L_0887FC24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
      if (branch_taken) {
          goto L_0887FC40;
      }
      goto L_0887FC34;
    }
L_0887FC34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    goto L_0887FC40;
L_0887FC40:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0887FC4Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 157u, 0x088B1AE8u>(ctx, &aot_mem) && ctx.pc == 0x0887FC4Cu) goto L_0887FC4C;
    return;
L_0887FC4C:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(27980), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x0887FC5Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 58u, 0x088B73F4u>(ctx, &aot_mem) && ctx.pc == 0x0887FC5Cu) goto L_0887FC5C;
    return;
L_0887FC5C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27976)));
    aot_gpr[19] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FC98;
      }
      goto L_0887FC80;
    }
L_0887FC80:
    aot_gpr[31] = (0x0887FC88u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 58u, 0x088B73F4u>(ctx, &aot_mem) && ctx.pc == 0x0887FC88u) goto L_0887FC88;
    return;
L_0887FC88:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0887FC80;
      }
      goto L_0887FC98;
    }
L_0887FC98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(296));
      if (branch_taken) {
          goto L_0887FD08;
      }
      goto L_0887FCAC;
    }
L_0887FCAC:
    aot_gpr[20] = (0u | 4u);
    aot_gpr[21] = (0u | 5u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    goto L_0887FCB8;
L_0887FCB8:
    aot_gpr[31] = (0x0887FCC0u);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 27u, 0x0882C290u>(ctx, &aot_mem) && ctx.pc == 0x0887FCC0u) goto L_0887FCC0;
    return;
L_0887FCC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[5] | 20u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_0887FCE4;
      }
      goto L_0887FCDC;
    }
L_0887FCDC:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_0887FCF4;
      }
      goto L_0887FCE4;
    }
L_0887FCE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (aot_gpr[5] | 8192u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(376), aot_gpr[5]);
    goto L_0887FCF4;
L_0887FCF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(296));
      if (branch_taken) {
          goto L_0887FCB8;
      }
      goto L_0887FD08;
    }
L_0887FD08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x0887FD14u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 99u, 0x088C6950u>(ctx, &aot_mem) && ctx.pc == 0x0887FD14u) goto L_0887FD14;
    return;
L_0887FD14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x0887FD20u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 99u, 0x088C6950u>(ctx, &aot_mem) && ctx.pc == 0x0887FD20u) goto L_0887FD20;
    return;
L_0887FD20:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FD5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-288));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[22]);
    aot_gpr[22] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4444)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(244), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(248), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(252), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[7] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0887FDD8;
      }
      goto L_0887FDC0;
    }
L_0887FDC0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7504));
    aot_gpr[31] = (0x0887FDD0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 218u, 0x08873CE0u>(ctx, &aot_mem) && ctx.pc == 0x0887FDD0u) goto L_0887FDD0;
    return;
L_0887FDD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 64u, 0x088806BCu>(ctx, &aot_mem); return;
      }
      goto L_0887FDD8;
    }
L_0887FDD8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28636)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 64u, 0x088806BCu>(ctx, &aot_mem); return;
      }
      goto L_0887FDF4;
    }
L_0887FDF4:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23220)));
    aot_gpr[6] = (2218u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(316)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7504));
    aot_gpr[5] = (20352u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[6]);
    aot_gpr[8] = (0u | 1u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_0887FE54;
      }
      goto L_0887FE38;
    }
L_0887FE38:
    aot_gpr[9] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    goto L_0887FE54;
L_0887FE54:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
    aot_gpr[6] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7652)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[12];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(188), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    if (static_cast<std::int32_t>(aot_gpr[4]) < 0) {
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
        goto L_0887FE94;
    }
    goto L_0887FE94;
L_0887FE94:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7048)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[7]);
      if (branch_taken) {
          goto L_0887FEB8;
      }
      goto L_0887FEAC;
    }
L_0887FEAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(188), static_cast<std::uint8_t>(aot_gpr[8]));
    goto L_0887FEB8;
L_0887FEB8:
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[4]);
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4000));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[4]);
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (16256u << 16u);
    aot_gpr[23] = (0u | 1u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[5]);
    goto L_0887FEFC;
L_0887FEFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 41u, 0x08880418u>(ctx, &aot_mem); return;
      }
      goto L_0887FF0C;
    }
L_0887FF0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(21)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 41u, 0x08880418u>(ctx, &aot_mem); return;
      }
      goto L_0887FF1C;
    }
L_0887FF1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_0887FF38;
    }
    goto L_0887FF28;
L_0887FF28:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 41u, 0x08880418u>(ctx, &aot_mem); return;
      }
      goto L_0887FF30;
    }
L_0887FF30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 21u, 0x0888027Cu>(ctx, &aot_mem); return;
      }
      goto L_0887FF38;
    }
L_0887FF38:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 41u, 0x08880418u>(ctx, &aot_mem); return;
      }
      goto L_0887FF40;
    }
L_0887FF40:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 20u, 0x08880274u>(ctx, &aot_mem); return;
      }
      goto L_0887FF54;
    }
L_0887FF54:
    aot_gpr[7] = (aot_gpr[9] + aot_gpr[20]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 5u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 19u, 0x08880264u>(ctx, &aot_mem); return;
      }
      goto L_0887FF6C;
    }
L_0887FF6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 19u, 0x08880264u>(ctx, &aot_mem); return;
      }
      goto L_0887FF80;
    }
L_0887FF80:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_0887FFBC;
      }
      goto L_0887FF9C;
    }
L_0887FF9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] | 20u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7508)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 19u, 0x08880264u>(ctx, &aot_mem); return;
      }
      goto L_0887FFBC;
    }
L_0887FFBC:
    { const bool branch_taken = aot_gpr[23] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 19u, 0x08880264u>(ctx, &aot_mem); return;
      }
      goto L_0887FFC4;
    }
L_0887FFC4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[4] = (aot_gpr[5] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | 8u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
      if (branch_taken) {
          goto L_0887FFF0;
      }
      goto L_0887FFE4;
    }
L_0887FFE4:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0887FFF0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 109u, 0x088C69F8u>(ctx, &aot_mem) && ctx.pc == 0x0887FFF0u) goto L_0887FFF0;
    return;
L_0887FFF0:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(146));
    aot_gpr[31] = (0x08880004u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(148));
    (void)rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 92u, 0x088C67DCu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0123(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0123_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_123(Runtime &runtime) {
    runtime.register_generated_unit(123u, 0x0887F000u, 4096u, &recomp_unit_0123, &recomp_unit_0123_entry);
    runtime.register_function(0x0887F000u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F074u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F098u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F0D0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F0E4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F0F4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F104u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F10Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F114u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F118u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F120u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F13Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F140u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F16Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F180u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F18Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F190u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F19Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F1B0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F1B4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F1CCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F1E4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F1ECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F1F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F208u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F218u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F230u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F25Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F27Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F288u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F298u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F2A8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F2B8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F2C4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F2D8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F2E4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F2F4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F304u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F314u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F31Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F330u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F390u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F39Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F3A8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F3F0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F404u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F444u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F454u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F45Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F468u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F478u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F488u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F4A4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F4ACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F4D0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F4D8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F4E0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F4F4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F504u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F514u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F52Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F544u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F550u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F57Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F588u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F590u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F5B0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F5B8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F5D0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F5D8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F5F0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F5F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F604u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F60Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F62Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F634u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F640u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F64Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F658u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F664u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F674u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F6ACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F6E8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F700u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F79Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F7B4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F7BCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F7E0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F7E4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F7ECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F7F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F804u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F810u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F820u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F840u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F850u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F860u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F874u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F884u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F88Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F8B4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F8C4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F8DCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F8ECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F900u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F90Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F914u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F92Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F934u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F93Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F944u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F954u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F974u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F998u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F9E0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F9ECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F9F4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887F9FCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FA24u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FA30u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FA38u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FA3Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FA64u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FA88u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FAACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FAD0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FAE4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FAF0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FAF8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FAFCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FB0Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FB14u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FB24u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FB2Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FB4Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FB68u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FB98u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FBACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FBD8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FC24u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FC34u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FC40u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FC4Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FC5Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FC80u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FC88u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FC98u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FCACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FCB8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FCC0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FCDCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FCE4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FCF4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FD08u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FD14u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FD20u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FD5Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FDC0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FDD0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FDD8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FDF4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FE38u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FE54u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FE94u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FEACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FEB8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FEFCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FF0Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FF1Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FF28u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FF30u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FF38u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FF40u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FF54u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FF6Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FF80u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FF9Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FFBCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FFC4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FFE4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x0887FFF0u, &recomp_unit_0123, "recomp_unit_0123");
}
} // namespace psprecomp
