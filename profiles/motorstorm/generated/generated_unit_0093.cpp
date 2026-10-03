#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0093[1018] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 12, 13, 0, 14, 0, 0, 0, 15, 0, 0, 16, 0, 0, 17,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22,
    0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 26, 0, 27, 0, 0, 0, 0, 0, 28, 0, 29, 0, 30, 0, 0,
    31, 0, 0, 32, 0, 33, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0,
    0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 55, 0, 0, 0, 0, 56, 0, 0, 57, 58, 0, 0, 0, 0, 59, 0, 0, 60, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63,
    0, 0, 0, 0, 64, 0, 0, 0, 65, 66, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0,
    0, 71, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 82, 83,
    0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89,
    0, 90, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0,
    0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0,
    0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 120,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0,
    125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 133, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0,
    138, 139, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 144, 0, 145, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 148, 0, 149, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153,
    0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 159, 0, 0, 160, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0,
    0, 0, 0, 166, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180,
    0, 0, 181, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0,
    0, 0, 0, 0, 0, 188, 0, 189, 0, 190, 191, 0, 0, 192, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196,
    0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 201,
};
void recomp_unit_0093_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08861000u;
        entry_id = (entry_delta < 4072u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0093[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08861000;
    case 2u: goto L_0886100C;
    case 3u: goto L_08861020;
    case 4u: goto L_08861034;
    case 5u: goto L_08861038;
    case 6u: goto L_08861044;
    case 7u: goto L_08861060;
    case 8u: goto L_08861080;
    case 9u: goto L_08861094;
    case 10u: goto L_088610B0;
    case 11u: goto L_088610C4;
    case 12u: goto L_088610C8;
    case 13u: goto L_088610CC;
    case 14u: goto L_088610D4;
    case 15u: goto L_088610E4;
    case 16u: goto L_088610F0;
    case 17u: goto L_088610FC;
    case 18u: goto L_08861124;
    case 19u: goto L_08861130;
    case 20u: goto L_08861140;
    case 21u: goto L_08861148;
    case 22u: goto L_0886117C;
    case 23u: goto L_08861194;
    case 24u: goto L_088611AC;
    case 25u: goto L_088611BC;
    case 26u: goto L_088611C4;
    case 27u: goto L_088611CC;
    case 28u: goto L_088611E4;
    case 29u: goto L_088611EC;
    case 30u: goto L_088611F4;
    case 31u: goto L_08861200;
    case 32u: goto L_0886120C;
    case 33u: goto L_08861214;
    case 34u: goto L_0886121C;
    case 35u: goto L_08861224;
    case 36u: goto L_08861240;
    case 37u: goto L_0886125C;
    case 38u: goto L_08861264;
    case 39u: goto L_088612C4;
    case 40u: goto L_088612E8;
    case 41u: goto L_08861300;
    case 42u: goto L_08861318;
    case 43u: goto L_08861320;
    case 44u: goto L_08861334;
    case 45u: goto L_0886133C;
    case 46u: goto L_08861344;
    case 47u: goto L_08861354;
    case 48u: goto L_088613A4;
    case 49u: goto L_088613D0;
    case 50u: goto L_088613E8;
    case 51u: goto L_0886140C;
    case 52u: goto L_08861430;
    case 53u: goto L_0886144C;
    case 54u: goto L_08861470;
    case 55u: goto L_08861484;
    case 56u: goto L_08861498;
    case 57u: goto L_088614A4;
    case 58u: goto L_088614A8;
    case 59u: goto L_088614BC;
    case 60u: goto L_088614C8;
    case 61u: goto L_088614CC;
    case 62u: goto L_088614E4;
    case 63u: goto L_088614FC;
    case 64u: goto L_08861510;
    case 65u: goto L_08861520;
    case 66u: goto L_08861524;
    case 67u: goto L_08861538;
    case 68u: goto L_08861548;
    case 69u: goto L_08861550;
    case 70u: goto L_0886156C;
    case 71u: goto L_08861584;
    case 72u: goto L_08861598;
    case 73u: goto L_088615A0;
    case 74u: goto L_088615B8;
    case 75u: goto L_088615C8;
    case 76u: goto L_08861600;
    case 77u: goto L_08861608;
    case 78u: goto L_08861618;
    case 79u: goto L_08861628;
    case 80u: goto L_08861660;
    case 81u: goto L_08861668;
    case 82u: goto L_08861678;
    case 83u: goto L_0886167C;
    case 84u: goto L_08861684;
    case 85u: goto L_088616A8;
    case 86u: goto L_088616B0;
    case 87u: goto L_088616D4;
    case 88u: goto L_088616EC;
    case 89u: goto L_088616FC;
    case 90u: goto L_08861704;
    case 91u: goto L_08861710;
    case 92u: goto L_08861724;
    case 93u: goto L_08861744;
    case 94u: goto L_08861760;
    case 95u: goto L_08861778;
    case 96u: goto L_08861798;
    case 97u: goto L_088617B8;
    case 98u: goto L_088617E8;
    case 99u: goto L_088617F8;
    case 100u: goto L_08861808;
    case 101u: goto L_08861820;
    case 102u: goto L_08861834;
    case 103u: goto L_08861848;
    case 104u: goto L_08861860;
    case 105u: goto L_08861880;
    case 106u: goto L_088618CC;
    case 107u: goto L_088618E0;
    case 108u: goto L_088618F0;
    case 109u: goto L_08861924;
    case 110u: goto L_08861930;
    case 111u: goto L_08861954;
    case 112u: goto L_0886195C;
    case 113u: goto L_08861988;
    case 114u: goto L_08861994;
    case 115u: goto L_088619A8;
    case 116u: goto L_088619B0;
    case 117u: goto L_088619B8;
    case 118u: goto L_088619E4;
    case 119u: goto L_088619F0;
    case 120u: goto L_088619FC;
    case 121u: goto L_08861A2C;
    case 122u: goto L_08861A38;
    case 123u: goto L_08861A44;
    case 124u: goto L_08861A74;
    case 125u: goto L_08861A80;
    case 126u: goto L_08861A94;
    case 127u: goto L_08861AB4;
    case 128u: goto L_08861AE0;
    case 129u: goto L_08861AEC;
    case 130u: goto L_08861AF8;
    case 131u: goto L_08861B24;
    case 132u: goto L_08861B30;
    case 133u: goto L_08861B38;
    case 134u: goto L_08861B3C;
    case 135u: goto L_08861B50;
    case 136u: goto L_08861B70;
    case 137u: goto L_08861B78;
    case 138u: goto L_08861B80;
    case 139u: goto L_08861B84;
    case 140u: goto L_08861B90;
    case 141u: goto L_08861BA8;
    case 142u: goto L_08861BC0;
    case 143u: goto L_08861BD8;
    case 144u: goto L_08861BE0;
    case 145u: goto L_08861BE8;
    case 146u: goto L_08861C14;
    case 147u: goto L_08861C20;
    case 148u: goto L_08861C30;
    case 149u: goto L_08861C38;
    case 150u: goto L_08861C3C;
    case 151u: goto L_08861C50;
    case 152u: goto L_08861C70;
    case 153u: goto L_08861C7C;
    case 154u: goto L_08861C84;
    case 155u: goto L_08861C8C;
    case 156u: goto L_08861CBC;
    case 157u: goto L_08861CC8;
    case 158u: goto L_08861CD4;
    case 159u: goto L_08861D04;
    case 160u: goto L_08861D10;
    case 161u: goto L_08861D18;
    case 162u: goto L_08861D20;
    case 163u: goto L_08861D4C;
    case 164u: goto L_08861D58;
    case 165u: goto L_08861D6C;
    case 166u: goto L_08861D8C;
    case 167u: goto L_08861D94;
    case 168u: goto L_08861D9C;
    case 169u: goto L_08861DA4;
    case 170u: goto L_08861DAC;
    case 171u: goto L_08861DB4;
    case 172u: goto L_08861DBC;
    case 173u: goto L_08861DE8;
    case 174u: goto L_08861DF4;
    case 175u: goto L_08861E00;
    case 176u: goto L_08861E30;
    case 177u: goto L_08861E3C;
    case 178u: goto L_08861E48;
    case 179u: goto L_08861E5C;
    case 180u: goto L_08861E7C;
    case 181u: goto L_08861E88;
    case 182u: goto L_08861E90;
    case 183u: goto L_08861E98;
    case 184u: goto L_08861EC8;
    case 185u: goto L_08861ED4;
    case 186u: goto L_08861EE0;
    case 187u: goto L_08861EF4;
    case 188u: goto L_08861F14;
    case 189u: goto L_08861F1C;
    case 190u: goto L_08861F24;
    case 191u: goto L_08861F28;
    case 192u: goto L_08861F34;
    case 193u: goto L_08861F3C;
    case 194u: goto L_08861F44;
    case 195u: goto L_08861F70;
    case 196u: goto L_08861F7C;
    case 197u: goto L_08861F88;
    case 198u: goto L_08861FB8;
    case 199u: goto L_08861FC4;
    case 200u: goto L_08861FD0;
    case 201u: goto L_08861FE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08861000:
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08861038;
      }
      goto L_0886100C;
    }
L_0886100C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(180)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08861038;
      }
      goto L_08861020;
    }
L_08861020:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(184)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08861038;
      }
      goto L_08861034;
    }
L_08861034:
    aot_gpr[4] = (0u | 1u);
    goto L_08861038;
L_08861038:
    aot_gpr[2] = (aot_gpr[4] & 255u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861044:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_088610CC;
      }
      goto L_08861060;
    }
L_08861060:
    aot_gpr[8] = (17948u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    aot_gpr[8] = (aot_gpr[8] | 16374u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_088610C4;
      }
      goto L_08861080;
    }
L_08861080:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[8] = (50716u << 16u);
      if (branch_taken) {
          goto L_088610C4;
      }
      goto L_08861094;
    }
L_08861094:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(172)));
    aot_gpr[8] = (aot_gpr[8] | 16374u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[7] = (0u | 1u);
        goto L_088610C8;
    }
    goto L_088610B0;
L_088610B0:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(180)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[7] = (aot_gpr[7] & 255u);
      if (branch_taken) {
          goto L_088610CC;
      }
      goto L_088610C4;
    }
L_088610C4:
    aot_gpr[7] = (0u | 1u);
    goto L_088610C8;
L_088610C8:
    aot_gpr[7] = (aot_gpr[7] & 255u);
    goto L_088610CC;
L_088610CC:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088610E4;
      }
      goto L_088610D4;
    }
L_088610D4:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x088610E4u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 133u, 0x08860F54u>(ctx, &aot_mem) && ctx.pc == 0x088610E4u) goto L_088610E4;
    return;
L_088610E4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088610F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08861124;
      }
      goto L_088610FC;
    }
L_088610FC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(376)));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(376), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (65535u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(376)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[7] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(376), aot_gpr[6]);
    goto L_08861124;
L_08861124:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08861140;
      }
      goto L_08861130;
    }
L_08861130:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    goto L_08861140;
L_08861140:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861148:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0886117Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(40), 0u);
    goto L_088610F0;
L_0886117C:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(84), 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(104), aot_gpr[4]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861194:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 8u));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] << (aot_gpr[4] & 31u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088611AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(92)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 33 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_088611F4;
      }
      goto L_088611BC;
    }
L_088611BC:
    if (aot_gpr[6] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 32 ? 1u : 0u);
        goto L_088611E4;
    }
    goto L_088611C4;
L_088611C4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0886125C;
      }
      goto L_088611CC;
    }
L_088611CC:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[5]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(4240)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088611E4:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886125C;
      }
      goto L_088611EC;
    }
L_088611EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886125C;
      }
      goto L_088611F4;
    }
L_088611F4:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 65 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 128u);
      if (branch_taken) {
          goto L_08861214;
      }
      goto L_08861200;
    }
L_08861200:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088611EC;
      }
      goto L_0886120C;
    }
L_0886120C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886125C;
      }
      goto L_08861214;
    }
L_08861214:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088611EC;
      }
      goto L_0886121C;
    }
L_0886121C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886125C;
      }
      goto L_08861224;
    }
L_08861224:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(52));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24412)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0886125C;
      }
      goto L_08861240;
    }
L_08861240:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(52));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24416)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0886125C;
      }
      goto L_0886125C;
    }
L_0886125C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861264:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(732)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(408)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-31924)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088612C4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08861194;
L_088612C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), aot_gpr[2]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (0u | 2u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[8] == aot_gpr[9]) {
    aot_gpr[6] = (0u | 1u);
        goto L_088612E8;
    }
    goto L_088612E8;
L_088612E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(96), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 4u);
    aot_gpr[8] = (0u | 3u);
    if (aot_gpr[7] != aot_gpr[8]) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08861300;
    }
    goto L_08861300;
L_08861300:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(96), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(736)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08861320;
      }
      goto L_08861318;
    }
L_08861318:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(736)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08861320;
L_08861320:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(368)));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (0x08861334u);
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 68u, 0x0894B4D0u>(ctx, &aot_mem) && ctx.pc == 0x08861334u) goto L_08861334;
    return;
L_08861334:
    aot_gpr[31] = (0x0886133Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088611AC;
L_0886133C:
    aot_gpr[31] = (0x08861344u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088610F0;
L_08861344:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861354:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2060)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (0u | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(220)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[6] = (0u | 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    if (!ctx.fpu_condition()) {
    aot_gpr[6] = (0u | 0u);
        goto L_088613A4;
    }
    goto L_088613A4;
L_088613A4:
    aot_gpr[17] = (aot_gpr[17] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[8] = (16247u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(376)));
    aot_gpr[8] = (aot_gpr[8] | 18154u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[6] = (0u | 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[6] = (0u | 4u);
        goto L_088613D0;
    }
    goto L_088613D0;
L_088613D0:
    aot_gpr[17] = (aot_gpr[17] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(240)));
    aot_gpr[6] = (0u | 8u);
    if (aot_gpr[7] != 0u) {
    aot_gpr[6] = (0u | 0u);
        goto L_088613E8;
    }
    goto L_088613E8;
L_088613E8:
    aot_gpr[17] = (aot_gpr[17] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(376)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[7] & 16u);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    if (aot_gpr[7] != 0u) {
    aot_gpr[6] = (0u | 16u);
        goto L_0886140C;
    }
    goto L_0886140C;
L_0886140C:
    aot_gpr[17] = (aot_gpr[17] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(28044)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    if (aot_gpr[7] == aot_gpr[8]) {
    aot_gpr[6] = (0u | 256u);
        goto L_08861430;
    }
    goto L_08861430;
L_08861430:
    aot_gpr[17] = (aot_gpr[17] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(2080));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (0u | 0u);
    if (aot_gpr[7] != 0u) {
    aot_gpr[6] = (0u | 512u);
        goto L_0886144C;
    }
    goto L_0886144C;
L_0886144C:
    aot_gpr[17] = (aot_gpr[17] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(376)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] & 4096u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[6] = (0u | 1024u);
        goto L_08861470;
    }
    goto L_08861470;
L_08861470:
    aot_gpr[17] = (aot_gpr[17] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088614A8;
      }
      goto L_08861484;
    }
L_08861484:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1900)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08861498u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 71u, 0x088BC4F4u>(ctx, &aot_mem) && ctx.pc == 0x08861498u) goto L_08861498;
    return;
L_08861498:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088614A8;
      }
      goto L_088614A4;
    }
L_088614A4:
    aot_gpr[18] = (0u | 2048u);
    goto L_088614A8;
L_088614A8:
    aot_gpr[17] = (aot_gpr[17] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088614CC;
      }
      goto L_088614BC;
    }
L_088614BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(183)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088614CC;
      }
      goto L_088614C8;
    }
L_088614C8:
    aot_gpr[18] = (0u | 32u);
    goto L_088614CC;
L_088614CC:
    aot_gpr[17] = (aot_gpr[17] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (0u | 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[18] = (0u | 8192u);
        goto L_088614E4;
    }
    goto L_088614E4;
L_088614E4:
    aot_gpr[17] = (aot_gpr[17] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[18] = (0u | 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[18] = (0u | 4096u);
        goto L_088614FC;
    }
    goto L_088614FC;
L_088614FC:
    aot_gpr[17] = (aot_gpr[17] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[17] & 16u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08861520;
      }
      goto L_08861510;
    }
L_08861510:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[4] & 32u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08861524;
      }
      goto L_08861520;
    }
L_08861520:
    aot_gpr[18] = (0u | 32768u);
    goto L_08861524;
L_08861524:
    aot_gpr[17] = (aot_gpr[17] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[17] & 8192u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08861548;
      }
      goto L_08861538;
    }
L_08861538:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[4] & 4096u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] | aot_gpr[18]);
      if (branch_taken) {
          goto L_08861550;
      }
      goto L_08861548;
    }
L_08861548:
    aot_gpr[18] = (0u | 16384u);
    aot_gpr[4] = (aot_gpr[17] | aot_gpr[18]);
    goto L_08861550;
L_08861550:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[4]);
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
L_0886156C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(144)));
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886167C;
      }
      goto L_08861584;
    }
L_08861584:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(92)));
    aot_gpr[10] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886167C;
      }
      goto L_08861598;
    }
L_08861598:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[8] = (0u | 0u);
    goto L_088615A0;
L_088615A0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(144)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[6] & 1u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08861608;
      }
      goto L_088615B8;
    }
L_088615B8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(100)));
    aot_gpr[11] = (aot_gpr[6] & 64u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_08861608;
      }
      goto L_088615C8;
    }
L_088615C8:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(96));
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[11] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[11] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[11]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08861608;
      }
      goto L_08861600;
    }
L_08861600:
    aot_gpr[6] = (aot_gpr[6] | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(100), aot_gpr[6]);
    goto L_08861608;
L_08861608:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[6] & 2u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08861668;
      }
      goto L_08861618;
    }
L_08861618:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(100)));
    aot_gpr[11] = (aot_gpr[6] & 128u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_08861668;
      }
      goto L_08861628;
    }
L_08861628:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(96));
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[11] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[11] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[11]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08861668;
      }
      goto L_08861660;
    }
L_08861660:
    aot_gpr[6] = (aot_gpr[6] | 128u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(100), aot_gpr[6]);
    goto L_08861668;
L_08861668:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088615A0;
      }
      goto L_08861678;
    }
L_08861678:
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_0886167C;
L_0886167C:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861684:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(388)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(388)));
    aot_gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[4] = (0u | 1u);
        goto L_088616A8;
    }
    goto L_088616A8;
L_088616A8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088616B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[2] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[6] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08861704;
      }
      goto L_088616D4;
    }
L_088616D4:
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[6]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(4304)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088616EC:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088616FCu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_08861684;
L_088616FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08861704;
      }
      goto L_08861704;
    }
L_08861704:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861710:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    aot_gpr[5] = (aot_gpr[6] ^ aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861724:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24408), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861744:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861760:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861778:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24424), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861798:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24432), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088617B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    if (aot_gpr[8] != 0u) {
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[5]);
        goto L_088617E8;
    }
    goto L_088617E8;
L_088617E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[7] = (0u | 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[5]);
        goto L_088617F8;
    }
    goto L_088617F8;
L_088617F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[7] = (0u | 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[5]);
        goto L_08861808;
    }
    goto L_08861808;
L_08861808:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08861848;
      }
      goto L_08861820;
    }
L_08861820:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08861834u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 153u, 0x0885BA50u>(ctx, &aot_mem) && ctx.pc == 0x08861834u) goto L_08861834;
    return;
L_08861834:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(208));
      if (branch_taken) {
          goto L_08861820;
      }
      goto L_08861848;
    }
L_08861848:
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
L_08861860:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24440), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08861880:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088618CCu);
    aot_gpr[6] = (0u | 20u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088618CCu) goto L_088618CC;
    return;
L_088618CC:
    aot_gpr[20] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(5112));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (2218u << 16u);
      if (branch_taken) {
          goto L_088618F0;
      }
      goto L_088618E0;
    }
L_088618E0:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6732));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_088618F0;
L_088618F0:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(5236), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (1u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(12256));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08861924u);
    aot_gpr[5] = (0u | 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08861924u) goto L_08861924;
    return;
L_08861924:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0886195C;
      }
      goto L_08861930;
    }
L_08861930:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-13392));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[7] = (2192u << 16u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (0u | 19440u);
    aot_gpr[31] = (0x08861954u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1604));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x08861954u) goto L_08861954;
    return;
L_08861954:
    aot_gpr[16] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (2218u << 16u);
    goto L_0886195C;
L_0886195C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-4024), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08861988u);
    aot_gpr[6] = (0u | 576u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08861988u) goto L_08861988;
    return;
L_08861988:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088619B8;
      }
      goto L_08861994;
    }
L_08861994:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4936));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x088619A8u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 159u, 0x08A4CA64u>(ctx, &aot_mem) && ctx.pc == 0x088619A8u) goto L_088619A8;
    return;
L_088619A8:
    aot_gpr[31] = (0x088619B0u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 159u, 0x08A4CA64u>(ctx, &aot_mem) && ctx.pc == 0x088619B0u) goto L_088619B0;
    return;
L_088619B0:
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (2218u << 16u);
    goto L_088619B8;
L_088619B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(5260), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088619E4u);
    aot_gpr[6] = (0u | 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088619E4u) goto L_088619E4;
    return;
L_088619E4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_088619FC;
      }
      goto L_088619F0;
    }
L_088619F0:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6476));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_088619FC;
L_088619FC:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-4020), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08861A2Cu);
    aot_gpr[6] = (0u | 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08861A2Cu) goto L_08861A2C;
    return;
L_08861A2C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08861A44;
      }
      goto L_08861A38;
    }
L_08861A38:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1888));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08861A44;
L_08861A44:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-3948), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08861A74u);
    aot_gpr[6] = (0u | 24u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08861A74u) goto L_08861A74;
    return;
L_08861A74:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_08861AB4;
      }
      goto L_08861A80;
    }
L_08861A80:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3104));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x08861A94u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 158u, 0x08A4CA48u>(ctx, &aot_mem) && ctx.pc == 0x08861A94u) goto L_08861A94;
    return;
L_08861A94:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1368));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1224));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (2218u << 16u);
    goto L_08861AB4;
L_08861AB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7492), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08861AE0u);
    aot_gpr[6] = (0u | 60u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08861AE0u) goto L_08861AE0;
    return;
L_08861AE0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08861AF8;
      }
      goto L_08861AEC;
    }
L_08861AEC:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1584));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08861AF8;
L_08861AF8:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(5104), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08861B24u);
    aot_gpr[6] = (0u | 592u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08861B24u) goto L_08861B24;
    return;
L_08861B24:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08861B3C;
      }
      goto L_08861B30;
    }
L_08861B30:
    aot_gpr[31] = (0x08861B38u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 110u, 0x08809874u>(ctx, &aot_mem) && ctx.pc == 0x08861B38u) goto L_08861B38;
    return;
L_08861B38:
    aot_gpr[16] = (aot_gpr[18] | 0u);
    goto L_08861B3C;
L_08861B3C:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7520), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08861B78;
      }
      goto L_08861B50;
    }
L_08861B50:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08861B70u);
    aot_gpr[6] = (0u | 8816u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08861B70u) goto L_08861B70;
    return;
L_08861B70:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08861B84;
      }
      goto L_08861B78;
    }
L_08861B78:
    aot_gpr[31] = (0x08861B80u);
    aot_gpr[4] = (0u | 8816u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x08861B80u) goto L_08861B80;
    return;
L_08861B80:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_08861B84;
L_08861B84:
    aot_gpr[21] = (aot_gpr[18] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_08861BE8;
      }
      goto L_08861B90;
    }
L_08861B90:
    aot_gpr[7] = (2188u << 16u);
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(32));
    aot_gpr[5] = (0u | 36u);
    aot_gpr[6] = (0u | 64u);
    aot_gpr[31] = (0x08861BA8u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(27552));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x08861BA8u) goto L_08861BA8;
    return;
L_08861BA8:
    aot_gpr[7] = (2213u << 16u);
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(7792));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (0u | 48u);
    aot_gpr[31] = (0x08861BC0u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-13816));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x08861BC0u) goto L_08861BC0;
    return;
L_08861BC0:
    aot_gpr[7] = (2195u << 16u);
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(8000));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (0u | 92u);
    aot_gpr[31] = (0x08861BD8u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(21992));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x08861BD8u) goto L_08861BD8;
    return;
L_08861BD8:
    aot_gpr[31] = (0x08861BE0u);
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(8184));
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x08861BE0u) goto L_08861BE0;
    return;
L_08861BE0:
    aot_gpr[16] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (2218u << 16u);
    goto L_08861BE8;
L_08861BE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7480), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08861C14u);
    aot_gpr[6] = (0u | 11344u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08861C14u) goto L_08861C14;
    return;
L_08861C14:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08861C3C;
      }
      goto L_08861C20;
    }
L_08861C20:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(904));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x08861C30u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(320));
    if (rt.invoke_chained_direct<&recomp_unit_0267_entry, 267u, 44u, 0x0890F6ECu>(ctx, &aot_mem) && ctx.pc == 0x08861C30u) goto L_08861C30;
    return;
L_08861C30:
    aot_gpr[31] = (0x08861C38u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(11056));
    if (rt.invoke_chained_direct<&recomp_unit_0268_entry, 268u, 74u, 0x089109A8u>(ctx, &aot_mem) && ctx.pc == 0x08861C38u) goto L_08861C38;
    return;
L_08861C38:
    aot_gpr[16] = (aot_gpr[18] | 0u);
    goto L_08861C3C;
L_08861C3C:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7340), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08861C7C;
      }
      goto L_08861C50;
    }
L_08861C50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08861C70u);
    aot_gpr[6] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08861C70u) goto L_08861C70;
    return;
L_08861C70:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
      if (branch_taken) {
          goto L_08861C8C;
      }
      goto L_08861C7C;
    }
L_08861C7C:
    aot_gpr[31] = (0x08861C84u);
    aot_gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x08861C84u) goto L_08861C84;
    return;
L_08861C84:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    goto L_08861C8C;
L_08861C8C:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(2096), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08861CBCu);
    aot_gpr[6] = (0u | 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08861CBCu) goto L_08861CBC;
    return;
L_08861CBC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08861CD4;
      }
      goto L_08861CC8;
    }
L_08861CC8:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-14408));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08861CD4;
L_08861CD4:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-4016), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08861D04u);
    aot_gpr[6] = (0u | 4448u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08861D04u) goto L_08861D04;
    return;
L_08861D04:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_08861D20;
      }
      goto L_08861D10;
    }
L_08861D10:
    aot_gpr[31] = (0x08861D18u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 98u, 0x0882C790u>(ctx, &aot_mem) && ctx.pc == 0x08861D18u) goto L_08861D18;
    return;
L_08861D18:
    aot_gpr[16] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (2218u << 16u);
    goto L_08861D20;
L_08861D20:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7508), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08861D4Cu);
    aot_gpr[6] = (0u | 208u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08861D4Cu) goto L_08861D4C;
    return;
L_08861D4C:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_08861DBC;
      }
      goto L_08861D58;
    }
L_08861D58:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3152));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x08861D6Cu);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 56u, 0x08A4C3E0u>(ctx, &aot_mem) && ctx.pc == 0x08861D6Cu) goto L_08861D6C;
    return;
L_08861D6C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7848));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7792));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[31] = (0x08861D8Cu);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 138u, 0x08A4C8E0u>(ctx, &aot_mem) && ctx.pc == 0x08861D8Cu) goto L_08861D8C;
    return;
L_08861D8C:
    aot_gpr[31] = (0x08861D94u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(108));
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 138u, 0x08A4C8E0u>(ctx, &aot_mem) && ctx.pc == 0x08861D94u) goto L_08861D94;
    return;
L_08861D94:
    aot_gpr[31] = (0x08861D9Cu);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(120));
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 138u, 0x08A4C8E0u>(ctx, &aot_mem) && ctx.pc == 0x08861D9Cu) goto L_08861D9C;
    return;
L_08861D9C:
    aot_gpr[31] = (0x08861DA4u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(132));
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 139u, 0x08A4C8F4u>(ctx, &aot_mem) && ctx.pc == 0x08861DA4u) goto L_08861DA4;
    return;
L_08861DA4:
    aot_gpr[31] = (0x08861DACu);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 139u, 0x08A4C8F4u>(ctx, &aot_mem) && ctx.pc == 0x08861DACu) goto L_08861DAC;
    return;
L_08861DAC:
    aot_gpr[31] = (0x08861DB4u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(156));
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 139u, 0x08A4C8F4u>(ctx, &aot_mem) && ctx.pc == 0x08861DB4u) goto L_08861DB4;
    return;
L_08861DB4:
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (2218u << 16u);
    goto L_08861DBC;
L_08861DBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(5264), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08861DE8u);
    aot_gpr[6] = (0u | 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08861DE8u) goto L_08861DE8;
    return;
L_08861DE8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08861E00;
      }
      goto L_08861DF4;
    }
L_08861DF4:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12424));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08861E00;
L_08861E00:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(5244), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08861E30u);
    aot_gpr[6] = (0u | 20u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08861E30u) goto L_08861E30;
    return;
L_08861E30:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08861E48;
      }
      goto L_08861E3C;
    }
L_08861E3C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3368));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08861E48;
L_08861E48:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7512), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08861E88;
      }
      goto L_08861E5C;
    }
L_08861E5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08861E7Cu);
    aot_gpr[6] = (0u | 28u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08861E7Cu) goto L_08861E7C;
    return;
L_08861E7C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
      if (branch_taken) {
          goto L_08861E98;
      }
      goto L_08861E88;
    }
L_08861E88:
    aot_gpr[31] = (0x08861E90u);
    aot_gpr[4] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x08861E90u) goto L_08861E90;
    return;
L_08861E90:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    goto L_08861E98;
L_08861E98:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-6936), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08861EC8u);
    aot_gpr[6] = (0u | 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08861EC8u) goto L_08861EC8;
    return;
L_08861EC8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08861EE0;
      }
      goto L_08861ED4;
    }
L_08861ED4:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7756));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08861EE0;
L_08861EE0:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(5268), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08861F1C;
      }
      goto L_08861EF4;
    }
L_08861EF4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08861F14u);
    aot_gpr[6] = (0u | 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08861F14u) goto L_08861F14;
    return;
L_08861F14:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08861F28;
      }
      goto L_08861F1C;
    }
L_08861F1C:
    aot_gpr[31] = (0x08861F24u);
    aot_gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x08861F24u) goto L_08861F24;
    return;
L_08861F24:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_08861F28;
L_08861F28:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (2218u << 16u);
        goto L_08861F44;
    }
    goto L_08861F34;
L_08861F34:
    aot_gpr[31] = (0x08861F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 153u, 0x0880FFF8u>(ctx, &aot_mem) && ctx.pc == 0x08861F3Cu) goto L_08861F3C;
    return;
L_08861F3C:
    aot_gpr[16] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (2218u << 16u);
    goto L_08861F44;
L_08861F44:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7476), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08861F70u);
    aot_gpr[6] = (0u | 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08861F70u) goto L_08861F70;
    return;
L_08861F70:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08861F88;
      }
      goto L_08861F7C;
    }
L_08861F7C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2968));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08861F88;
L_08861F88:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(5240), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08861FB8u);
    aot_gpr[6] = (0u | 44u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08861FB8u) goto L_08861FB8;
    return;
L_08861FB8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08861FD0;
      }
      goto L_08861FC4;
    }
L_08861FC4:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3712));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08861FD0;
L_08861FD0:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(5272), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 2u, 0x08862010u>(ctx, &aot_mem); return;
      }
      goto L_08861FE4;
    }
L_08861FE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08862004u);
    aot_gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    (void)rt.invoke_chained_call(ctx, &aot_mem);
    return;
}

void recomp_unit_0093(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0093_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_93(Runtime &runtime) {
    runtime.register_generated_unit(93u, 0x08861000u, 4096u, &recomp_unit_0093, &recomp_unit_0093_entry);
    runtime.register_function(0x08861000u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0886100Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861020u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861034u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861038u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861044u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861060u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861080u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861094u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088610B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088610C4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088610C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088610CCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088610D4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088610E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088610F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088610FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861124u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861130u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861140u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861148u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0886117Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861194u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088611ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088611BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088611C4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088611CCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088611E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088611ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088611F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861200u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0886120Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861214u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0886121Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861224u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861240u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0886125Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861264u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088612C4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088612E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861300u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861318u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861320u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861334u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0886133Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861344u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861354u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088613A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088613D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088613E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0886140Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861430u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0886144Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861470u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861484u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861498u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088614A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088614A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088614BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088614C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088614CCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088614E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088614FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861510u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861520u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861524u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861538u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861548u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861550u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0886156Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861584u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861598u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088615A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088615B8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088615C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861600u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861608u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861618u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861628u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861660u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861668u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861678u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0886167Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861684u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088616A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088616B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088616D4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088616ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088616FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861704u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861710u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861724u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861744u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861760u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861778u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861798u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088617B8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088617E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088617F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861808u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861820u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861834u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861848u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861860u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861880u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088618CCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088618E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088618F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861924u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861930u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861954u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0886195Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861988u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861994u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088619A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088619B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088619B8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088619E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088619F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x088619FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861A2Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861A38u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861A44u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861A74u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861A80u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861A94u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861AB4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861AE0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861AECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861AF8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861B24u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861B30u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861B38u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861B3Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861B50u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861B70u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861B78u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861B80u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861B84u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861B90u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861BA8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861BC0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861BD8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861BE0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861BE8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861C14u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861C20u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861C30u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861C38u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861C3Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861C50u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861C70u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861C7Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861C84u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861C8Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861CBCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861CC8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861CD4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861D04u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861D10u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861D18u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861D20u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861D4Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861D58u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861D6Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861D8Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861D94u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861D9Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861DA4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861DACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861DB4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861DBCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861DE8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861DF4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861E00u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861E30u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861E3Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861E48u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861E5Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861E7Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861E88u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861E90u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861E98u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861EC8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861ED4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861EE0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861EF4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861F14u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861F1Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861F24u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861F28u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861F34u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861F3Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861F44u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861F70u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861F7Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861F88u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861FB8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861FC4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861FD0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08861FE4u, &recomp_unit_0093, "recomp_unit_0093");
}
} // namespace psprecomp
