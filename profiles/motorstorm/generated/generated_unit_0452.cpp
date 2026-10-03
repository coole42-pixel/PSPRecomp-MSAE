#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0452[1020] = {
    1, 0, 2, 0, 3, 0, 4, 0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 10, 0, 11, 0, 0, 0, 12,
    0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0, 17, 18, 0, 19, 0, 0, 0, 0, 0, 20, 0, 21, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 25, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 31,
    32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 36, 0, 0, 0, 0, 0, 37, 38,
    39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 42, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    44, 0, 45, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 48, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 53, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0,
    0, 0, 58, 0, 0, 0, 59, 0, 0, 60, 0, 61, 0, 62, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 70, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 73, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 78, 0, 79, 0, 0, 0,
    0, 80, 0, 0, 81, 0, 0, 82, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 87, 0,
    88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 93, 0, 0, 0, 94, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 98,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 104, 0, 0, 105, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0,
    0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 115, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0,
    0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 144, 0, 145,
    0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 152, 0, 153, 0, 0, 154,
    0, 155, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 171, 172, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175,
    0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179,
};
void recomp_unit_0452_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089C8000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0452[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089C8000;
    case 2u: goto L_089C8008;
    case 3u: goto L_089C8010;
    case 4u: goto L_089C8018;
    case 5u: goto L_089C8024;
    case 6u: goto L_089C802C;
    case 7u: goto L_089C8034;
    case 8u: goto L_089C8048;
    case 9u: goto L_089C805C;
    case 10u: goto L_089C8064;
    case 11u: goto L_089C806C;
    case 12u: goto L_089C807C;
    case 13u: goto L_089C8090;
    case 14u: goto L_089C80A8;
    case 15u: goto L_089C80B0;
    case 16u: goto L_089C80C4;
    case 17u: goto L_089C80CC;
    case 18u: goto L_089C80D0;
    case 19u: goto L_089C80D8;
    case 20u: goto L_089C80F0;
    case 21u: goto L_089C80F8;
    case 22u: goto L_089C8140;
    case 23u: goto L_089C814C;
    case 24u: goto L_089C8154;
    case 25u: goto L_089C8188;
    case 26u: goto L_089C8190;
    case 27u: goto L_089C8198;
    case 28u: goto L_089C82D4;
    case 29u: goto L_089C82E4;
    case 30u: goto L_089C82F4;
    case 31u: goto L_089C82FC;
    case 32u: goto L_089C8300;
    case 33u: goto L_089C831C;
    case 34u: goto L_089C8334;
    case 35u: goto L_089C835C;
    case 36u: goto L_089C8360;
    case 37u: goto L_089C8378;
    case 38u: goto L_089C837C;
    case 39u: goto L_089C8380;
    case 40u: goto L_089C83B8;
    case 41u: goto L_089C83C8;
    case 42u: goto L_089C83D4;
    case 43u: goto L_089C83D8;
    case 44u: goto L_089C8400;
    case 45u: goto L_089C8408;
    case 46u: goto L_089C841C;
    case 47u: goto L_089C8424;
    case 48u: goto L_089C8438;
    case 49u: goto L_089C8440;
    case 50u: goto L_089C844C;
    case 51u: goto L_089C849C;
    case 52u: goto L_089C84AC;
    case 53u: goto L_089C84B8;
    case 54u: goto L_089C84BC;
    case 55u: goto L_089C84CC;
    case 56u: goto L_089C84E4;
    case 57u: goto L_089C84F4;
    case 58u: goto L_089C8508;
    case 59u: goto L_089C8518;
    case 60u: goto L_089C8524;
    case 61u: goto L_089C852C;
    case 62u: goto L_089C8534;
    case 63u: goto L_089C8538;
    case 64u: goto L_089C856C;
    case 65u: goto L_089C85C0;
    case 66u: goto L_089C85D4;
    case 67u: goto L_089C8610;
    case 68u: goto L_089C8618;
    case 69u: goto L_089C8634;
    case 70u: goto L_089C863C;
    case 71u: goto L_089C8640;
    case 72u: goto L_089C8664;
    case 73u: goto L_089C8668;
    case 74u: goto L_089C8694;
    case 75u: goto L_089C86BC;
    case 76u: goto L_089C86D4;
    case 77u: goto L_089C86DC;
    case 78u: goto L_089C86E8;
    case 79u: goto L_089C86F0;
    case 80u: goto L_089C8704;
    case 81u: goto L_089C8710;
    case 82u: goto L_089C871C;
    case 83u: goto L_089C8720;
    case 84u: goto L_089C8730;
    case 85u: goto L_089C8758;
    case 86u: goto L_089C8760;
    case 87u: goto L_089C8778;
    case 88u: goto L_089C8780;
    case 89u: goto L_089C8788;
    case 90u: goto L_089C87A8;
    case 91u: goto L_089C87B0;
    case 92u: goto L_089C87B8;
    case 93u: goto L_089C880C;
    case 94u: goto L_089C881C;
    case 95u: goto L_089C8820;
    case 96u: goto L_089C8858;
    case 97u: goto L_089C8868;
    case 98u: goto L_089C887C;
    case 99u: goto L_089C88B8;
    case 100u: goto L_089C88DC;
    case 101u: goto L_089C88F4;
    case 102u: goto L_089C892C;
    case 103u: goto L_089C8940;
    case 104u: goto L_089C8948;
    case 105u: goto L_089C8954;
    case 106u: goto L_089C8958;
    case 107u: goto L_089C8968;
    case 108u: goto L_089C8984;
    case 109u: goto L_089C898C;
    case 110u: goto L_089C89AC;
    case 111u: goto L_089C89B4;
    case 112u: goto L_089C89BC;
    case 113u: goto L_089C89DC;
    case 114u: goto L_089C89E4;
    case 115u: goto L_089C89E8;
    case 116u: goto L_089C8A44;
    case 117u: goto L_089C8A50;
    case 118u: goto L_089C8A70;
    case 119u: goto L_089C8A8C;
    case 120u: goto L_089C8AAC;
    case 121u: goto L_089C8ABC;
    case 122u: goto L_089C8AC4;
    case 123u: goto L_089C8ACC;
    case 124u: goto L_089C8AD4;
    case 125u: goto L_089C8B08;
    case 126u: goto L_089C8B24;
    case 127u: goto L_089C8B28;
    case 128u: goto L_089C8B48;
    case 129u: goto L_089C8B54;
    case 130u: goto L_089C8B6C;
    case 131u: goto L_089C8B74;
    case 132u: goto L_089C8BA4;
    case 133u: goto L_089C8BA8;
    case 134u: goto L_089C8BCC;
    case 135u: goto L_089C8BD4;
    case 136u: goto L_089C8BE4;
    case 137u: goto L_089C8C0C;
    case 138u: goto L_089C8C14;
    case 139u: goto L_089C8C70;
    case 140u: goto L_089C8C80;
    case 141u: goto L_089C8CA8;
    case 142u: goto L_089C8CE0;
    case 143u: goto L_089C8CE8;
    case 144u: goto L_089C8CF4;
    case 145u: goto L_089C8CFC;
    case 146u: goto L_089C8D1C;
    case 147u: goto L_089C8D24;
    case 148u: goto L_089C8D2C;
    case 149u: goto L_089C8D34;
    case 150u: goto L_089C8D54;
    case 151u: goto L_089C8D60;
    case 152u: goto L_089C8D68;
    case 153u: goto L_089C8D70;
    case 154u: goto L_089C8D7C;
    case 155u: goto L_089C8D84;
    case 156u: goto L_089C8D8C;
    case 157u: goto L_089C8D94;
    case 158u: goto L_089C8DB4;
    case 159u: goto L_089C8DC0;
    case 160u: goto L_089C8DDC;
    case 161u: goto L_089C8DE8;
    case 162u: goto L_089C8E60;
    case 163u: goto L_089C8E68;
    case 164u: goto L_089C8E94;
    case 165u: goto L_089C8EA4;
    case 166u: goto L_089C8EAC;
    case 167u: goto L_089C8EC4;
    case 168u: goto L_089C8ECC;
    case 169u: goto L_089C8F08;
    case 170u: goto L_089C8F38;
    case 171u: goto L_089C8F3C;
    case 172u: goto L_089C8F40;
    case 173u: goto L_089C8F44;
    case 174u: goto L_089C8F70;
    case 175u: goto L_089C8F7C;
    case 176u: goto L_089C8F94;
    case 177u: goto L_089C8FBC;
    case 178u: goto L_089C8FD8;
    case 179u: goto L_089C8FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089C8000:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089C8010;
      }
      goto L_089C8008;
    }
L_089C8008:
    aot_gpr[31] = (0x089C8010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 2u, 0x089C10C8u>(ctx, &aot_mem) && ctx.pc == 0x089C8010u) goto L_089C8010;
    return;
L_089C8010:
    aot_gpr[31] = (0x089C8018u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(576));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089C8018u) goto L_089C8018;
    return;
L_089C8018:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(580)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_089C8034;
      }
      goto L_089C8024;
    }
L_089C8024:
    aot_gpr[31] = (0x089C802Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 145u, 0x08A43764u>(ctx, &aot_mem) && ctx.pc == 0x089C802Cu) goto L_089C802C;
    return;
L_089C802C:
    aot_gpr[31] = (0x089C8034u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(580));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089C8034u) goto L_089C8034;
    return;
L_089C8034:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0451_entry, 451u, 255u, 0x089C7FF8u>(ctx, &aot_mem); return;
      }
      goto L_089C8048;
    }
L_089C8048:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089C806C;
      }
      goto L_089C805C;
    }
L_089C805C:
    aot_gpr[31] = (0x089C8064u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 145u, 0x08A43764u>(ctx, &aot_mem) && ctx.pc == 0x089C8064u) goto L_089C8064;
    return;
L_089C8064:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (2217u << 16u);
    goto L_089C806C;
L_089C806C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C807Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(78)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C807Cu) goto L_089C807C;
    return;
L_089C807C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089C8090u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089C8090u) goto L_089C8090;
    return;
L_089C8090:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(140), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(104), 0u);
    aot_gpr[31] = (0x089C80A8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 40u, 0x089C61D0u>(ctx, &aot_mem) && ctx.pc == 0x089C80A8u) goto L_089C80A8;
    return;
L_089C80A8:
    aot_gpr[31] = (0x089C80B0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089C80B0u) goto L_089C80B0;
    return;
L_089C80B0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C80C4:
    aot_gpr[16] = (0u + 0u);
    goto L_089C80D0;
L_089C80CC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    goto L_089C80D0;
L_089C80D0:
    aot_gpr[31] = (0x089C80D8u);
    aot_gpr[4] = (aot_gpr[3] + aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089C80D8u) goto L_089C80D8;
    return;
L_089C80D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(88)));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089C80CC;
      }
      goto L_089C80F0;
    }
L_089C80F0:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0451_entry, 451u, 250u, 0x089C7FD0u>(ctx, &aot_mem); return;
L_089C80F8:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(2792)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089C8154;
      }
      goto L_089C8140;
    }
L_089C8140:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089C814Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(248));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089C814Cu) goto L_089C814C;
    return;
L_089C814C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C8188;
      }
      goto L_089C8154;
    }
L_089C8154:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8188:
    aot_gpr[31] = (0x089C8190u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 40u, 0x089C61D0u>(ctx, &aot_mem) && ctx.pc == 0x089C8190u) goto L_089C8190;
    return;
L_089C8190:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C8154;
      }
      goto L_089C8198;
    }
L_089C8198:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(100), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(56), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(60), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(84), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(44)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(148), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(152), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(52)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(156), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(160), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(60)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(164), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(168), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(172), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(176), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(180), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(84)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(188), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(112), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[3] << 6u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[3]);
    aot_gpr[31] = (0x089C82D4u);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089C82D4u) goto L_089C82D4;
    return;
L_089C82D4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_089C8534;
      }
      goto L_089C82E4;
    }
L_089C82E4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C8300;
      }
      goto L_089C82F4;
    }
L_089C82F4:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(10));
    goto L_089C8360;
L_089C82FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    goto L_089C8300;
L_089C8300:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31));
    aot_gpr[5] = (aot_gpr[5] >> 5u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(576));
    aot_gpr[31] = (0x089C831Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089C831Cu) goto L_089C831C;
    return;
L_089C831C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(576)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C8534;
      }
      goto L_089C8334;
    }
L_089C8334:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(436), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(580), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089C82FC;
      }
      goto L_089C835C;
    }
L_089C835C:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(10));
    goto L_089C8360;
L_089C8360:
    aot_gpr[30] = (2204u << 16u);
    aot_gpr[23] = (2204u << 16u);
    aot_gpr[22] = (2204u << 16u);
    aot_gpr[21] = (2204u << 16u);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    goto L_089C83D8;
L_089C8378:
    aot_gpr[2] = (2217u << 16u);
    goto L_089C837C;
L_089C837C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    goto L_089C8380;
L_089C8380:
    aot_gpr[3] = (aot_gpr[23] + static_cast<std::uint32_t>(30556));
    aot_gpr[2] = (aot_gpr[30] + static_cast<std::uint32_t>(10728));
    aot_gpr[6] = (aot_gpr[22] + static_cast<std::uint32_t>(15036));
    aot_gpr[7] = (aot_gpr[21] + static_cast<std::uint32_t>(11000));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(124)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C83B8u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C83B8u) goto L_089C83B8;
    return;
L_089C83B8:
    aot_gpr[19] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u | 54017u);
    { const bool branch_taken = aot_gpr[19] != aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C8440;
      }
      goto L_089C83C8;
    }
L_089C83C8:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(78), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089C8440;
      }
      goto L_089C83D4;
    }
L_089C83D4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089C83D8;
L_089C83D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(78)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_089C8378;
      }
      goto L_089C8400;
    }
L_089C8400:
    aot_gpr[31] = (0x089C8408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 56u, 0x0899053Cu>(ctx, &aot_mem) && ctx.pc == 0x089C8408u) goto L_089C8408;
    return;
L_089C8408:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(78), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(78)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089C837C;
      }
      goto L_089C841C;
    }
L_089C841C:
    aot_gpr[31] = (0x089C8424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 56u, 0x0899053Cu>(ctx, &aot_mem) && ctx.pc == 0x089C8424u) goto L_089C8424;
    return;
L_089C8424:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(78), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(78)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089C8400;
      }
      goto L_089C8438;
    }
L_089C8438:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    goto L_089C8380;
L_089C8440:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C8518;
      }
      goto L_089C844C;
    }
L_089C844C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(65) ? 1u : 0u);
    if (aot_gpr[4] == 0u) aot_gpr[2] = (aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(88), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(92), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(136), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[2] = (aot_gpr[5] << 4u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[31] = (0x089C849Cu);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089C849Cu) goto L_089C849C;
    return;
L_089C849C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_089C8534;
      }
      goto L_089C84AC;
    }
L_089C84AC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_089C84F4;
      }
      goto L_089C84B8;
    }
L_089C84B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089C84BC;
L_089C84BC:
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[16]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089C84CCu);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089C84CCu) goto L_089C84CC;
    return;
L_089C84CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089C8534;
      }
      goto L_089C84E4;
    }
L_089C84E4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_089C84BC;
    }
    goto L_089C84F4;
L_089C84F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    aot_gpr[5] = (aot_gpr[2] << 1u);
    aot_gpr[31] = (0x089C8508u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089C8508u) goto L_089C8508;
    return;
L_089C8508:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089C8538;
      }
      goto L_089C8518;
    }
L_089C8518:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089C8154;
      }
      goto L_089C8524;
    }
L_089C8524:
    aot_gpr[31] = (0x089C852Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 19u, 0x0899312Cu>(ctx, &aot_mem) && ctx.pc == 0x089C852Cu) goto L_089C852C;
    return;
L_089C852C:
    aot_gpr[3] = (aot_gpr[19] + 0u);
    goto L_089C8154;
L_089C8534:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_089C8538;
L_089C8538:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(100));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C856C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(9));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089C85C0u);
    aot_gpr[5] = (aot_gpr[2] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089C85C0u) goto L_089C85C0;
    return;
L_089C85C0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u | 65534u);
      if (branch_taken) {
          goto L_089C8610;
      }
      goto L_089C85D4;
    }
L_089C85D4:
    aot_gpr[2] = (aot_gpr[6] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[30]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[6]);
    aot_gpr[2] = (0u | 65534u);
    goto L_089C8610;
L_089C8610:
    { const bool branch_taken = aot_gpr[18] == aot_gpr[2];
    aot_gpr[5] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089C8694;
      }
      goto L_089C8618;
    }
L_089C8618:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[7] = (aot_gpr[20] + 0u);
    aot_gpr[8] = (aot_gpr[21] + 0u);
    aot_gpr[9] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C8634u);
    aot_gpr[10] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 104u, 0x089C367Cu>(ctx, &aot_mem) && ctx.pc == 0x089C8634u) goto L_089C8634;
    return;
L_089C8634:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C8664;
      }
      goto L_089C863C;
    }
L_089C863C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_089C8640;
L_089C8640:
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (aot_gpr[2] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    goto L_089C8664;
L_089C8664:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_089C8668;
L_089C8668:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8694:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[7] & 65535u);
    aot_gpr[2] = (aot_gpr[3] << 1u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = (aot_gpr[2] >> 4u);
    aot_gpr[2] = (aot_gpr[2] << 4u);
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089C8640;
      }
      goto L_089C86BC;
    }
L_089C86BC:
    aot_gpr[3] = (0u + 0u);
    aot_gpr[18] = (0u + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[9] = (aot_gpr[19] & 16384u);
    aot_gpr[8] = (aot_gpr[29] + 0u);
    goto L_089C8704;
L_089C86D4:
    if (aot_gpr[9] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_089C8720;
    }
    goto L_089C86DC;
L_089C86DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_089C8720;
    }
    goto L_089C86E8;
L_089C86E8:
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    goto L_089C86F0;
L_089C86F0:
    aot_gpr[2] = (aot_gpr[7] & 65535u);
    aot_gpr[3] = (aot_gpr[3] & 65535u);
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089C8758;
      }
      goto L_089C8704;
    }
L_089C8704:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(444)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
        goto L_089C86F0;
    }
    goto L_089C8710;
L_089C8710:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C86D4;
      }
      goto L_089C871C;
    }
L_089C871C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C8720;
L_089C8720:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-3));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
        goto L_089C86F0;
    }
    goto L_089C8730;
L_089C8730:
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[3] & 65535u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[7] & 65535u);
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089C8704;
      }
      goto L_089C8758;
    }
L_089C8758:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089C8780;
      }
      goto L_089C8760;
    }
L_089C8760:
    aot_gpr[7] = (aot_gpr[19] + 0u);
    aot_gpr[8] = (aot_gpr[20] + 0u);
    aot_gpr[9] = (aot_gpr[21] + 0u);
    aot_gpr[10] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C8778u);
    aot_gpr[11] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 153u, 0x089C1B60u>(ctx, &aot_mem) && ctx.pc == 0x089C8778u) goto L_089C8778;
    return;
L_089C8778:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C8664;
      }
      goto L_089C8780;
    }
L_089C8780:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089C863C;
      }
      goto L_089C8788;
    }
L_089C8788:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(88)));
    aot_gpr[6] = (aot_gpr[20] + 0u);
    aot_gpr[7] = (aot_gpr[21] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C87A8u);
    aot_gpr[8] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C87A8u) goto L_089C87A8;
    return;
L_089C87A8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C863C;
      }
      goto L_089C87B0;
    }
L_089C87B0:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_089C8668;
L_089C87B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[9] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[8] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[11] + 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
      if (branch_taken) {
          goto L_089C881C;
      }
      goto L_089C880C;
    }
L_089C880C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[19] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(64)));
        goto L_089C8858;
    }
    goto L_089C881C;
L_089C881C:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    goto L_089C8820;
L_089C8820:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8858:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089C8868u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089C8868u) goto L_089C8868;
    return;
L_089C8868:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
        goto L_089C88B8;
    }
    goto L_089C887C;
L_089C887C:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[30]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    goto L_089C88B8;
L_089C88B8:
    aot_gpr[6] = (aot_gpr[19] - aot_gpr[17]);
    aot_gpr[8] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (aot_gpr[2] << 1u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = (aot_gpr[2] >> 4u);
    aot_gpr[2] = (aot_gpr[2] << 4u);
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    aot_gpr[12] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089C89E8;
      }
      goto L_089C88DC;
    }
L_089C88DC:
    aot_gpr[7] = (0u + 0u);
    aot_gpr[2] = (0u + 0u);
    aot_gpr[19] = (0u + 0u);
    aot_gpr[10] = (0u + 0u);
    aot_gpr[11] = (aot_gpr[21] & 16384u);
    aot_gpr[9] = (aot_gpr[29] + 0u);
    goto L_089C88F4;
L_089C88F4:
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[7] >> 3u);
    aot_gpr[2] = (aot_gpr[4] << 6u);
    aot_gpr[3] = (aot_gpr[4] << 3u);
    aot_gpr[5] = (aot_gpr[20] + aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[7] & 7u);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> (aot_gpr[4] & 31u)));
    aot_gpr[2] = (aot_gpr[2] ^ 1u);
    aot_gpr[2] = (aot_gpr[2] & 1u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[3] << 3u);
      if (branch_taken) {
          goto L_089C8968;
      }
      goto L_089C892C;
    }
L_089C892C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(448)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_089C8958;
    }
    goto L_089C8940;
L_089C8940:
    if (aot_gpr[11] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_089C8958;
    }
    goto L_089C8948;
L_089C8948:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(52)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(1));
        goto L_089C8968;
    }
    goto L_089C8954;
L_089C8954:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C8958;
L_089C8958:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-3));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE16(aot_gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[17]));
        goto L_089C8A44;
    }
    goto L_089C8968;
L_089C8968:
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[3] & 65535u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[7] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C88F4;
      }
      goto L_089C8984;
    }
L_089C8984:
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[6] = (aot_gpr[10] + 0u);
      if (branch_taken) {
          goto L_089C89B4;
      }
      goto L_089C898C;
    }
L_089C898C:
    aot_gpr[5] = (aot_gpr[12] + 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[7] = (aot_gpr[21] + 0u);
    aot_gpr[8] = (aot_gpr[22] + 0u);
    aot_gpr[9] = (aot_gpr[23] + 0u);
    aot_gpr[10] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C89ACu);
    aot_gpr[11] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 153u, 0x089C1B60u>(ctx, &aot_mem) && ctx.pc == 0x089C89ACu) goto L_089C89AC;
    return;
L_089C89AC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C8820;
      }
      goto L_089C89B4;
    }
L_089C89B4:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089C89E4;
      }
      goto L_089C89BC;
    }
L_089C89BC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(88)));
    aot_gpr[6] = (aot_gpr[22] + 0u);
    aot_gpr[7] = (aot_gpr[23] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C89DCu);
    aot_gpr[8] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C89DCu) goto L_089C89DC;
    return;
L_089C89DC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C8820;
      }
      goto L_089C89E4;
    }
L_089C89E4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_089C89E8;
L_089C89E8:
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (aot_gpr[2] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[5] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8A44:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(2));
    goto L_089C8968;
L_089C8A50:
    aot_gpr[10] = (aot_gpr[5] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[7] = (0u | 61440u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[11] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 153u, 0x089C1B60u>(ctx, &aot_mem); return;
L_089C8A70:
    aot_gpr[9] = (aot_gpr[6] + 0u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[6] = (0u | 61440u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[10] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 104u, 0x089C367Cu>(ctx, &aot_mem); return;
L_089C8A8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[10] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[11] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[7] = (aot_gpr[7] & 65535u);
      if (branch_taken) {
          goto L_089C8ABC;
      }
      goto L_089C8AAC;
    }
L_089C8AAC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8ABC:
    aot_gpr[31] = (0x089C8AC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 153u, 0x089C1B60u>(ctx, &aot_mem) && ctx.pc == 0x089C8AC4u) goto L_089C8AC4;
    return;
L_089C8AC4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C8AAC;
      }
      goto L_089C8ACC;
    }
L_089C8ACC:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8AD4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(25) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[20]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
      if (branch_taken) {
          goto L_089C8BA4;
      }
      goto L_089C8B08;
    }
L_089C8B08:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (352u << 16u);
    aot_gpr[6] = (aot_gpr[3] << (aot_gpr[6] & 31u));
    aot_gpr[2] = (aot_gpr[2] | 2048u);
    aot_gpr[2] = (aot_gpr[6] & aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_089C8B48;
      }
      goto L_089C8B24;
    }
L_089C8B24:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089C8B28;
L_089C8B28:
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
L_089C8B48:
    aot_gpr[2] = (aot_gpr[6] & 8u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[6] & 1024u);
      if (branch_taken) {
          goto L_089C8BCC;
      }
      goto L_089C8B54;
    }
L_089C8B54:
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089C8B6Cu);
    aot_gpr[8] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0455_entry, 455u, 186u, 0x089CBD6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C8B6Cu) goto L_089C8B6C;
    return;
L_089C8B6C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C8B24;
      }
      goto L_089C8B74;
    }
L_089C8B74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(6)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (aot_gpr[4] << 6u);
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(468)));
    if (aot_gpr[3] == aot_gpr[6]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(436)));
        goto L_089C8CE0;
    }
    goto L_089C8BA4;
L_089C8BA4:
    aot_gpr[16] = (0u + 0u);
    goto L_089C8BA8;
L_089C8BA8:
    aot_gpr[2] = (aot_gpr[16] + 0u);
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
L_089C8BCC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_089C8BA8;
      }
      goto L_089C8BD4;
    }
L_089C8BD4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (aot_gpr[5] & 65535u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089C8BA8;
      }
      goto L_089C8BE4;
    }
L_089C8BE4:
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(10));
    aot_gpr[8] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    aot_gpr[31] = (0x089C8C0Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0455_entry, 455u, 192u, 0x089CBDF0u>(ctx, &aot_mem) && ctx.pc == 0x089C8C0Cu) goto L_089C8C0C;
    return;
L_089C8C0C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C8B24;
      }
      goto L_089C8C14;
    }
L_089C8C14:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(14)));
    aot_gpr[3] = (aot_gpr[2] << 4u);
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[7] & 65535u);
    aot_gpr[4] = (aot_gpr[3] << 2u);
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[5] = (aot_gpr[3] << 6u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] - aot_gpr[3]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[16] = (aot_gpr[18] + aot_gpr[3]);
      if (branch_taken) {
          goto L_089C8BA4;
      }
      goto L_089C8C70;
    }
L_089C8C70:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(92)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(21)));
      if (branch_taken) {
          goto L_089C8CFC;
      }
      goto L_089C8C80;
    }
L_089C8C80:
    aot_gpr[4] = (aot_gpr[7] & 65535u);
    aot_gpr[3] = (aot_gpr[4] << 6u);
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(488)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(21)));
        goto L_089C8D94;
    }
    goto L_089C8CA8;
L_089C8CA8:
    aot_gpr[4] = (aot_gpr[7] & 65535u);
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[3] = (aot_gpr[4] << 6u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(21)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] << 1u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (0u + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(470), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089C8B24;
L_089C8CE0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089C8BA4;
      }
      goto L_089C8CE8;
    }
L_089C8CE8:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089C8CF4u);
    aot_gpr[7] = (0u | 54003u);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 23u, 0x089C3188u>(ctx, &aot_mem) && ctx.pc == 0x089C8CF4u) goto L_089C8CF4;
    return;
L_089C8CF4:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089C8B28;
L_089C8CFC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[2] << 1u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(470)));
    aot_gpr[2] = (aot_gpr[3] - aot_gpr[5]);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_gpr[2]))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(32767) ? 1u : 0u);
      if (branch_taken) {
          goto L_089C8D34;
      }
      goto L_089C8D1C;
    }
L_089C8D1C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_gpr[5]))));
      if (branch_taken) {
          goto L_089C8BA4;
      }
      goto L_089C8D24;
    }
L_089C8D24:
    if (static_cast<std::int32_t>(aot_gpr[2]) >= 0) {
    aot_gpr[16] = (0u + 0u);
        goto L_089C8BA8;
    }
    goto L_089C8D2C;
L_089C8D2C:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(470), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(14)));
    goto L_089C8D34;
L_089C8D34:
    aot_gpr[4] = (aot_gpr[8] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[8] = (aot_gpr[7] & 65535u);
    aot_gpr[3] = (0u + 0u);
    aot_gpr[10] = (0u | 65535u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_089C8D54;
L_089C8D54:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[20] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C8D7C;
      }
      goto L_089C8D60;
    }
L_089C8D60:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_089C8D7C;
      }
      goto L_089C8D68;
    }
L_089C8D68:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[10];
    // nop
      if (branch_taken) {
          goto L_089C8D7C;
      }
      goto L_089C8D70;
    }
L_089C8D70:
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
    goto L_089C8D7C;
L_089C8D7C:
    if (aot_gpr[3] != aot_gpr[9]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_089C8D54;
    }
    goto L_089C8D84;
L_089C8D84:
    if (aot_gpr[6] != 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(18)));
        goto L_089C8DC0;
    }
    goto L_089C8D8C;
L_089C8D8C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_089C8C80;
L_089C8D94:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(136)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(188)));
    aot_gpr[9] = (aot_gpr[16] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C8DB4u);
    aot_gpr[10] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C8DB4u) goto L_089C8DB4;
    return;
L_089C8DB4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(14)));
    goto L_089C8CA8;
L_089C8DC0:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[10] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (0x089C8DDCu);
    aot_gpr[11] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 153u, 0x089C1B60u>(ctx, &aot_mem) && ctx.pc == 0x089C8DDCu) goto L_089C8DDC;
    return;
L_089C8DDC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(14)));
    goto L_089C8C80;
L_089C8DE8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[7] << 6u);
    aot_gpr[2] = (aot_gpr[7] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(392));
    aot_gpr[2] = (0u + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(460), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(6)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(392), 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(468), static_cast<std::uint16_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(380), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(376), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(24), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(28), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8E60:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8E68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] & 65535u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089C8E94u);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 155u, 0x089C2C30u>(ctx, &aot_mem) && ctx.pc == 0x089C8E94u) goto L_089C8E94;
    return;
L_089C8E94:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089C8EAC;
      }
      goto L_089C8EA4;
    }
L_089C8EA4:
    aot_gpr[31] = (0x089C8EACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 155u, 0x089C2C30u>(ctx, &aot_mem) && ctx.pc == 0x089C8EACu) goto L_089C8EAC;
    return;
L_089C8EAC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8EC4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8ECC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[17]);
    aot_gpr[2] = (0u | 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[16]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[18] == aot_gpr[2];
    aot_gpr[17] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089C8F38;
      }
      goto L_089C8F08;
    }
L_089C8F08:
    aot_gpr[3] = (aot_gpr[18] << 6u);
    aot_gpr[2] = (aot_gpr[18] << 3u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[18]);
    aot_gpr[20] = (aot_gpr[2] << 3u);
    aot_gpr[3] = (aot_gpr[5] + aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(468)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[3]);
      if (branch_taken) {
          goto L_089C8F70;
      }
      goto L_089C8F38;
    }
L_089C8F38:
    aot_gpr[4] = (0u + 0u);
    goto L_089C8F3C;
L_089C8F3C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    goto L_089C8F40;
L_089C8F40:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    goto L_089C8F44;
L_089C8F44:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8F70:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089C8F3C;
      }
      goto L_089C8F7C;
    }
L_089C8F7C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (0u + 0u);
    aot_gpr[30] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[2]);
    aot_gpr[22] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), 0u);
    goto L_089C8F94;
L_089C8F94:
    aot_gpr[3] = (aot_gpr[16] << 6u);
    aot_gpr[2] = (aot_gpr[16] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[19] = (aot_gpr[2] << 3u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
        (void)rt.invoke_chained_direct<&recomp_unit_0453_entry, 453u, 7u, 0x089C9070u>(ctx, &aot_mem); return;
    }
    goto L_089C8FBC;
L_089C8FBC:
    aot_gpr[2] = (aot_gpr[3] << 2u);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-12756));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8FD8:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(10));
    aot_gpr[31] = (0x089C8FECu);
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089C8FECu) goto L_089C8FEC;
    return;
L_089C8FEC:
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[29] + 0u);
    ctx.pc = 0x089C9000u; return;
}

void recomp_unit_0452(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0452_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_452(Runtime &runtime) {
    runtime.register_generated_unit(452u, 0x089C8000u, 4096u, &recomp_unit_0452, &recomp_unit_0452_entry);
    runtime.register_function(0x089C8000u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8008u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8010u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8018u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8024u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C802Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8034u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8048u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C805Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8064u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C806Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C807Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8090u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C80A8u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C80B0u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C80C4u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C80CCu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C80D0u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C80D8u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C80F0u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C80F8u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8140u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C814Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8154u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8188u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8190u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8198u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C82D4u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C82E4u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C82F4u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C82FCu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8300u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C831Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8334u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C835Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8360u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8378u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C837Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8380u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C83B8u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C83C8u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C83D4u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C83D8u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8400u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8408u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C841Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8424u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8438u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8440u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C844Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C849Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C84ACu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C84B8u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C84BCu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C84CCu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C84E4u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C84F4u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8508u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8518u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8524u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C852Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8534u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8538u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C856Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C85C0u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C85D4u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8610u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8618u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8634u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C863Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8640u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8664u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8668u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8694u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C86BCu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C86D4u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C86DCu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C86E8u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C86F0u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8704u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8710u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C871Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8720u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8730u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8758u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8760u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8778u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8780u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8788u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C87A8u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C87B0u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C87B8u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C880Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C881Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8820u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8858u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8868u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C887Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C88B8u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C88DCu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C88F4u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C892Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8940u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8948u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8954u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8958u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8968u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8984u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C898Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C89ACu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C89B4u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C89BCu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C89DCu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C89E4u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C89E8u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8A44u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8A50u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8A70u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8A8Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8AACu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8ABCu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8AC4u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8ACCu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8AD4u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8B08u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8B24u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8B28u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8B48u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8B54u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8B6Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8B74u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8BA4u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8BA8u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8BCCu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8BD4u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8BE4u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8C0Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8C14u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8C70u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8C80u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8CA8u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8CE0u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8CE8u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8CF4u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8CFCu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8D1Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8D24u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8D2Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8D34u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8D54u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8D60u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8D68u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8D70u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8D7Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8D84u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8D8Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8D94u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8DB4u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8DC0u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8DDCu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8DE8u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8E60u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8E68u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8E94u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8EA4u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8EACu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8EC4u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8ECCu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8F08u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8F38u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8F3Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8F40u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8F44u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8F70u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8F7Cu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8F94u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8FBCu, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8FD8u, &recomp_unit_0452, "recomp_unit_0452");
    runtime.register_function(0x089C8FECu, &recomp_unit_0452, "recomp_unit_0452");
}
} // namespace psprecomp
