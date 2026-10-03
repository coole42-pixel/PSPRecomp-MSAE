#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0141[991] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0,
    3, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 10,
    0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0,
    0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0,
    0, 25, 0, 0, 0, 0, 26, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 0, 31, 0, 0, 32, 0, 0,
    0, 0, 0, 0, 33, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 42,
    0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 50, 0, 0, 51, 0, 0, 0, 52, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 57, 0, 58, 59, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0,
    0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0,
    70, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 74, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0, 81, 0, 0, 0, 0, 82, 0, 0,
    83, 84, 0, 85, 0, 0, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 93, 0, 0, 94, 0, 95,
    0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 100, 0, 0, 101, 102, 0, 0, 0, 103, 0, 0, 104, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0,
    0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139,
    0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0,
    0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0,
    157, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168,
};
void recomp_unit_0141_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08891000u;
        entry_id = (entry_delta < 3964u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0141[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08891000;
    case 2u: goto L_08891064;
    case 3u: goto L_08891080;
    case 4u: goto L_0889109C;
    case 5u: goto L_088910A4;
    case 6u: goto L_088910C4;
    case 7u: goto L_088910C8;
    case 8u: goto L_088910D8;
    case 9u: goto L_088910E8;
    case 10u: goto L_088910FC;
    case 11u: goto L_0889110C;
    case 12u: goto L_08891114;
    case 13u: goto L_08891138;
    case 14u: goto L_0889113C;
    case 15u: goto L_08891158;
    case 16u: goto L_08891168;
    case 17u: goto L_08891180;
    case 18u: goto L_088911A0;
    case 19u: goto L_088911A8;
    case 20u: goto L_088911D4;
    case 21u: goto L_088911F4;
    case 22u: goto L_08891204;
    case 23u: goto L_08891218;
    case 24u: goto L_0889126C;
    case 25u: goto L_08891284;
    case 26u: goto L_08891298;
    case 27u: goto L_0889129C;
    case 28u: goto L_088912C0;
    case 29u: goto L_088912D0;
    case 30u: goto L_088912D8;
    case 31u: goto L_088912E8;
    case 32u: goto L_088912F4;
    case 33u: goto L_08891310;
    case 34u: goto L_08891318;
    case 35u: goto L_08891324;
    case 36u: goto L_08891330;
    case 37u: goto L_0889133C;
    case 38u: goto L_08891348;
    case 39u: goto L_08891350;
    case 40u: goto L_0889135C;
    case 41u: goto L_08891378;
    case 42u: goto L_0889137C;
    case 43u: goto L_08891384;
    case 44u: goto L_088913A4;
    case 45u: goto L_088913B4;
    case 46u: goto L_088913BC;
    case 47u: goto L_088913D4;
    case 48u: goto L_088913E0;
    case 49u: goto L_08891400;
    case 50u: goto L_08891408;
    case 51u: goto L_08891414;
    case 52u: goto L_08891424;
    case 53u: goto L_0889142C;
    case 54u: goto L_0889143C;
    case 55u: goto L_0889144C;
    case 56u: goto L_0889145C;
    case 57u: goto L_08891498;
    case 58u: goto L_088914A0;
    case 59u: goto L_088914A4;
    case 60u: goto L_088914B0;
    case 61u: goto L_088914C8;
    case 62u: goto L_088914E4;
    case 63u: goto L_088914EC;
    case 64u: goto L_08891504;
    case 65u: goto L_08891524;
    case 66u: goto L_08891534;
    case 67u: goto L_08891544;
    case 68u: goto L_08891558;
    case 69u: goto L_08891574;
    case 70u: goto L_08891580;
    case 71u: goto L_0889158C;
    case 72u: goto L_08891598;
    case 73u: goto L_088915A4;
    case 74u: goto L_088915AC;
    case 75u: goto L_088915B0;
    case 76u: goto L_088915B8;
    case 77u: goto L_088915C0;
    case 78u: goto L_088915C8;
    case 79u: goto L_088915D0;
    case 80u: goto L_088915D8;
    case 81u: goto L_088915E0;
    case 82u: goto L_088915F4;
    case 83u: goto L_08891600;
    case 84u: goto L_08891604;
    case 85u: goto L_0889160C;
    case 86u: goto L_0889161C;
    case 87u: goto L_08891624;
    case 88u: goto L_0889162C;
    case 89u: goto L_08891634;
    case 90u: goto L_0889163C;
    case 91u: goto L_08891654;
    case 92u: goto L_08891660;
    case 93u: goto L_08891668;
    case 94u: goto L_08891674;
    case 95u: goto L_0889167C;
    case 96u: goto L_0889168C;
    case 97u: goto L_08891694;
    case 98u: goto L_088916BC;
    case 99u: goto L_088916C4;
    case 100u: goto L_088916C8;
    case 101u: goto L_088916D4;
    case 102u: goto L_088916D8;
    case 103u: goto L_088916E8;
    case 104u: goto L_088916F4;
    case 105u: goto L_0889173C;
    case 106u: goto L_088917EC;
    case 107u: goto L_08891818;
    case 108u: goto L_08891830;
    case 109u: goto L_08891850;
    case 110u: goto L_088918AC;
    case 111u: goto L_088918D0;
    case 112u: goto L_088918DC;
    case 113u: goto L_088918F0;
    case 114u: goto L_08891904;
    case 115u: goto L_08891918;
    case 116u: goto L_08891928;
    case 117u: goto L_08891938;
    case 118u: goto L_08891948;
    case 119u: goto L_0889195C;
    case 120u: goto L_08891974;
    case 121u: goto L_08891984;
    case 122u: goto L_0889199C;
    case 123u: goto L_088919AC;
    case 124u: goto L_088919C0;
    case 125u: goto L_088919CC;
    case 126u: goto L_08891A18;
    case 127u: goto L_08891A34;
    case 128u: goto L_08891A40;
    case 129u: goto L_08891A5C;
    case 130u: goto L_08891A68;
    case 131u: goto L_08891A80;
    case 132u: goto L_08891A98;
    case 133u: goto L_08891AA0;
    case 134u: goto L_08891AF0;
    case 135u: goto L_08891B10;
    case 136u: goto L_08891B30;
    case 137u: goto L_08891B44;
    case 138u: goto L_08891B60;
    case 139u: goto L_08891B7C;
    case 140u: goto L_08891B90;
    case 141u: goto L_08891BA0;
    case 142u: goto L_08891BAC;
    case 143u: goto L_08891BB8;
    case 144u: goto L_08891BC8;
    case 145u: goto L_08891BD4;
    case 146u: goto L_08891BE8;
    case 147u: goto L_08891BF8;
    case 148u: goto L_08891C30;
    case 149u: goto L_08891C74;
    case 150u: goto L_08891C8C;
    case 151u: goto L_08891CA0;
    case 152u: goto L_08891CA8;
    case 153u: goto L_08891CBC;
    case 154u: goto L_08891CC8;
    case 155u: goto L_08891CD8;
    case 156u: goto L_08891CEC;
    case 157u: goto L_08891D00;
    case 158u: goto L_08891D10;
    case 159u: goto L_08891D18;
    case 160u: goto L_08891D5C;
    case 161u: goto L_08891D68;
    case 162u: goto L_08891D74;
    case 163u: goto L_08891DB8;
    case 164u: goto L_08891E5C;
    case 165u: goto L_08891E70;
    case 166u: goto L_08891E90;
    case 167u: goto L_08891F24;
    case 168u: goto L_08891F78;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08891000:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[9]);
    aot_gpr[22] = (0u | 0u);
    aot_gpr[23] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[21] = (aot_gpr[10] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[20] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[11]);
      if (branch_taken) {
          goto L_088916F4;
      }
      goto L_08891064;
    }
L_08891064:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[30] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-12));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(49) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088914A4;
      }
      goto L_08891080;
    }
L_08891080:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(12784)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889109C:
    { const bool branch_taken = aot_gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_088910C8;
      }
      goto L_088910A4;
    }
L_088910A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[6] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088910C4u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 5u, 0x0888C050u>(ctx, &aot_mem) && ctx.pc == 0x088910C4u) goto L_088910C4;
    return;
L_088910C4:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    goto L_088910C8;
L_088910C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088910D8u);
    aot_gpr[5] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088910D8u) goto L_088910D8;
    return;
L_088910D8:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088910E8u);
    aot_gpr[5] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088910E8u) goto L_088910E8;
    return;
L_088910E8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088914A4;
      }
      goto L_088910FC;
    }
L_088910FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0889110Cu);
    aot_gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0889110Cu) goto L_0889110C;
    return;
L_0889110C:
    { const bool branch_taken = aot_gpr[22] != 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0889113C;
      }
      goto L_08891114;
    }
L_08891114:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[6] = (0u < aot_gpr[4] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08891138u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 5u, 0x0888C050u>(ctx, &aot_mem) && ctx.pc == 0x08891138u) goto L_08891138;
    return;
L_08891138:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    goto L_0889113C;
L_0889113C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 11u);
    aot_gpr[31] = (0x08891158u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08891158u) goto L_08891158;
    return;
L_08891158:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08891168u);
    aot_gpr[5] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08891168u) goto L_08891168;
    return;
L_08891168:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088911A0;
      }
      goto L_08891180;
    }
L_08891180:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[8] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088911A0u);
    aot_gpr[9] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 35u, 0x0889032Cu>(ctx, &aot_mem) && ctx.pc == 0x088911A0u) goto L_088911A0;
    return;
L_088911A0:
    { const bool branch_taken = aot_gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889129C;
      }
      goto L_088911A8;
    }
L_088911A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[16]);
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6932)));
    aot_gpr[4] = (49844u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] - aot_fpr[26];
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    aot_gpr[31] = (0x088911D4u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x088911D4u) goto L_088911D4;
    return;
L_088911D4:
    aot_gpr[16] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x088911F4u);
    aot_fpr[12] = aot_fpr[22] - aot_fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x088911F4u) goto L_088911F4;
    return;
L_088911F4:
    aot_fpr[30] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]) ^ 0x80000000u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[31] = (0x08891204u);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x08891204u) goto L_08891204;
    return;
L_08891204:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-25184)));
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x08891218u);
    aot_fpr[12] = aot_fpr[30] - aot_fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x08891218u) goto L_08891218;
    return;
L_08891218:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[18] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[18] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[15] = aot_fpr[15] - aot_fpr[17];
    aot_fpr[16] = aot_fpr[16] - aot_fpr[18];
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[15] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[26] < aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08891284;
      }
      goto L_0889126C;
    }
L_0889126C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[24] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[24] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_fpr[24] = aot_fpr[12] + aot_fpr[24];
      if (branch_taken) {
          goto L_08891298;
      }
      goto L_08891284;
    }
L_08891284:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[24] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[24] = fs * ft; }
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[24] = aot_fpr[24] + aot_fpr[13];
    goto L_08891298;
L_08891298:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    goto L_0889129C;
L_0889129C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[19]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (0x088912C0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 88u, 0x08944C94u>(ctx, &aot_mem) && ctx.pc == 0x088912C0u) goto L_088912C0;
    return;
L_088912C0:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x088912D0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 88u, 0x08944C94u>(ctx, &aot_mem) && ctx.pc == 0x088912D0u) goto L_088912D0;
    return;
L_088912D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088914A4;
      }
      goto L_088912D8;
    }
L_088912D8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08891310;
      }
      goto L_088912E8;
    }
L_088912E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08891310;
      }
      goto L_088912F4;
    }
L_088912F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08891310u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08891310u) goto L_08891310;
    return;
L_08891310:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[16]);
      if (branch_taken) {
          goto L_088914A4;
      }
      goto L_08891318;
    }
L_08891318:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08891324u);
    aot_gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08891324u) goto L_08891324;
    return;
L_08891324:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889137C;
      }
      goto L_08891330;
    }
L_08891330:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x0889133Cu);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 33u, 0x0888A274u>(ctx, &aot_mem) && ctx.pc == 0x0889133Cu) goto L_0889133C;
    return;
L_0889133C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889137C;
      }
      goto L_08891348;
    }
L_08891348:
    aot_gpr[31] = (0x08891350u);
    aot_gpr[5] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08891350u) goto L_08891350;
    return;
L_08891350:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889137C;
      }
      goto L_0889135C;
    }
L_0889135C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889137C;
      }
      goto L_08891378;
    }
L_08891378:
    aot_gpr[30] = (0u | 1u);
    goto L_0889137C;
L_0889137C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[16]);
      if (branch_taken) {
          goto L_088914A4;
      }
      goto L_08891384;
    }
L_08891384:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7048)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088913BC;
      }
      goto L_088913A4;
    }
L_088913A4:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(5296)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088913BC;
      }
      goto L_088913B4;
    }
L_088913B4:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088913BC;
L_088913BC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08891400;
      }
      goto L_088913D4;
    }
L_088913D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08891400;
      }
      goto L_088913E0;
    }
L_088913E0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[9] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08891400u);
    aot_gpr[10] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 172u, 0x08890B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08891400u) goto L_08891400;
    return;
L_08891400:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[16]);
      if (branch_taken) {
          goto L_088914A4;
      }
      goto L_08891408;
    }
L_08891408:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08891424;
      }
      goto L_08891414;
    }
L_08891414:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08891424u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 59u, 0x0888A3D8u>(ctx, &aot_mem) && ctx.pc == 0x08891424u) goto L_08891424;
    return;
L_08891424:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[16]);
      if (branch_taken) {
          goto L_088914A4;
      }
      goto L_0889142C;
    }
L_0889142C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0889143Cu);
    aot_gpr[5] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0889143Cu) goto L_0889143C;
    return;
L_0889143C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0889144Cu);
    aot_gpr[5] = (0u | 52u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0889144Cu) goto L_0889144C;
    return;
L_0889144C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0889145Cu);
    aot_gpr[5] = (0u | 51u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0889145Cu) goto L_0889145C;
    return;
L_0889145C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[5] = (4096u << 16u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[9] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[8] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[10] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08891498u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 197u, 0x0888CD48u>(ctx, &aot_mem) && ctx.pc == 0x08891498u) goto L_08891498;
    return;
L_08891498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088914A4;
      }
      goto L_088914A0;
    }
L_088914A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[16]);
    goto L_088914A4;
L_088914A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_088914EC;
      }
      goto L_088914B0;
    }
L_088914B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & 2048u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08891524;
      }
      goto L_088914C8;
    }
L_088914C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[5] | 2048u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[31] = (0x088914E4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 169u, 0x08889954u>(ctx, &aot_mem) && ctx.pc == 0x088914E4u) goto L_088914E4;
    return;
L_088914E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08891524;
      }
      goto L_088914EC;
    }
L_088914EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & 2048u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08891524;
      }
      goto L_08891504;
    }
L_08891504:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[31] = (0x08891524u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 169u, 0x08889954u>(ctx, &aot_mem) && ctx.pc == 0x08891524u) goto L_08891524;
    return;
L_08891524:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08891544;
      }
      goto L_08891534;
    }
L_08891534:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[16]);
      if (branch_taken) {
          goto L_088916D8;
      }
      goto L_08891544;
    }
L_08891544:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-18));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088915D8;
      }
      goto L_08891558;
    }
L_08891558:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-18));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(12984)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08891574:
    aot_gpr[19] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088915D8;
      }
      goto L_08891580;
    }
L_08891580:
    aot_gpr[19] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088915D8;
      }
      goto L_0889158C;
    }
L_0889158C:
    aot_gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088915D8;
      }
      goto L_08891598;
    }
L_08891598:
    aot_gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_088915D8;
      }
      goto L_088915A4;
    }
L_088915A4:
    { const bool branch_taken = aot_gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_088915B0;
      }
      goto L_088915AC;
    }
L_088915AC:
    aot_gpr[19] = (0u | 4u);
    goto L_088915B0;
L_088915B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088915D8;
      }
      goto L_088915B8;
    }
L_088915B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 7u);
      if (branch_taken) {
          goto L_088915D8;
      }
      goto L_088915C0;
    }
L_088915C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 5u);
      if (branch_taken) {
          goto L_088915D8;
      }
      goto L_088915C8;
    }
L_088915C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 6u);
      if (branch_taken) {
          goto L_088915D8;
      }
      goto L_088915D0;
    }
L_088915D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 22u);
      if (branch_taken) {
          goto L_088915D8;
      }
      goto L_088915D8;
    }
L_088915D8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_088916D4;
      }
      goto L_088915E0;
    }
L_088915E0:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] == aot_gpr[4]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08891604;
    }
    goto L_088915F4;
L_088915F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_088916D4;
      }
      goto L_08891600;
    }
L_08891600:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_08891604;
L_08891604:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088916D4;
      }
      goto L_0889160C;
    }
L_0889160C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088916D4;
      }
      goto L_0889161C;
    }
L_0889161C:
    aot_gpr[31] = (0x08891624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 104u, 0x08894868u>(ctx, &aot_mem) && ctx.pc == 0x08891624u) goto L_08891624;
    return;
L_08891624:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088916D4;
      }
      goto L_0889162C;
    }
L_0889162C:
    aot_gpr[31] = (0x08891634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 129u, 0x0889A85Cu>(ctx, &aot_mem) && ctx.pc == 0x08891634u) goto L_08891634;
    return;
L_08891634:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088916D4;
      }
      goto L_0889163C;
    }
L_0889163C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7932)));
    aot_gpr[4] = (aot_gpr[4] ^ 9u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088916D4;
      }
      goto L_08891654;
    }
L_08891654:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-28696)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088916D4;
      }
      goto L_08891660;
    }
L_08891660:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0889167C;
      }
      goto L_08891668;
    }
L_08891668:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08891674u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 88u, 0x088827F0u>(ctx, &aot_mem) && ctx.pc == 0x08891674u) goto L_08891674;
    return;
L_08891674:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0889168C;
      }
      goto L_0889167C;
    }
L_0889167C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6976));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    goto L_0889168C;
L_0889168C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088916D4;
      }
      goto L_08891694;
    }
L_08891694:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[9] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088916BCu);
    aot_gpr[10] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 172u, 0x08890B1Cu>(ctx, &aot_mem) && ctx.pc == 0x088916BCu) goto L_088916BC;
    return;
L_088916BC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088916C8;
      }
      goto L_088916C4;
    }
L_088916C4:
    aot_gpr[16] = (0u | 21u);
    goto L_088916C8;
L_088916C8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088916D4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 20u, 0x08890200u>(ctx, &aot_mem) && ctx.pc == 0x088916D4u) goto L_088916D4;
    return;
L_088916D4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_088916D8;
L_088916D8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088916E8u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 26u, 0x088942BCu>(ctx, &aot_mem) && ctx.pc == 0x088916E8u) goto L_088916E8;
    return;
L_088916E8:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08891064;
      }
      goto L_088916F4;
    }
L_088916F4:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889173C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-288));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(248), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[3] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[23]);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[21]);
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(12))))));
    aot_gpr[2] = (aot_gpr[11] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[11] = (aot_gpr[10] | 0u);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[9] | 0u);
    aot_gpr[12] = (aot_gpr[21] + aot_gpr[21]);
    aot_gpr[9] = (aot_gpr[7] | 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[13] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(244), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(252), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[31]);
    aot_gpr[31] = (0x088917ECu);
    aot_gpr[6] = (aot_gpr[12] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 214u, 0x08A4BF5Cu>(ctx, &aot_mem) && ctx.pc == 0x088917ECu) goto L_088917EC;
    return;
L_088917EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & 4096u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[2]);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[13]);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[12]);
      if (branch_taken) {
          goto L_088918AC;
      }
      goto L_08891818;
    }
L_08891818:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08891830u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x08891830u) goto L_08891830;
    return;
L_08891830:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_fpr[28] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x08891850u);
    aot_fpr[12] = aot_fpr[26] - aot_fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x08891850u) goto L_08891850;
    return;
L_08891850:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    { const float fs = aot_fpr[28]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    { const float fs = aot_fpr[28]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_fpr[15] = aot_fpr[15] + aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    goto L_088918AC;
L_088918AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(12))))));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889195C;
      }
      goto L_088918D0;
    }
L_088918D0:
    aot_gpr[4] = (16512u << 16u);
    aot_gpr[16] = (0u | 0u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    goto L_088918DC;
L_088918DC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[16]);
    aot_gpr[31] = (0x088918F0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 88u, 0x08944C94u>(ctx, &aot_mem) && ctx.pc == 0x088918F0u) goto L_088918F0;
    return;
L_088918F0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[16]);
    aot_gpr[31] = (0x08891904u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 88u, 0x08944C94u>(ctx, &aot_mem) && ctx.pc == 0x08891904u) goto L_08891904;
    return;
L_08891904:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[20])) && aot_fpr[12] == aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08891928;
      }
      goto L_08891918;
    }
L_08891918:
    aot_fpr[12] = aot_fpr[12] + aot_fpr[22];
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08891928;
L_08891928:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[20])) && aot_fpr[13] == aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08891948;
      }
      goto L_08891938;
    }
L_08891938:
    aot_fpr[12] = aot_fpr[13] + aot_fpr[22];
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08891948;
L_08891948:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(12))))));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088918DC;
      }
      goto L_0889195C;
    }
L_0889195C:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[21]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08891974u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 91u, 0x08944CF8u>(ctx, &aot_mem) && ctx.pc == 0x08891974u) goto L_08891974;
    return;
L_08891974:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08891984u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 88u, 0x08944C94u>(ctx, &aot_mem) && ctx.pc == 0x08891984u) goto L_08891984;
    return;
L_08891984:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0889199Cu);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 91u, 0x08944CF8u>(ctx, &aot_mem) && ctx.pc == 0x0889199Cu) goto L_0889199C;
    return;
L_0889199C:
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08891CA0;
      }
      goto L_088919AC;
    }
L_088919AC:
    aot_gpr[4] = (16128u << 16u);
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(148));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(156));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(164));
    goto L_088919C0;
L_088919C0:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(12))))));
    aot_gpr[31] = (0x088919CCu);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 130u, 0x0888B85Cu>(ctx, &aot_mem) && ctx.pc == 0x088919CCu) goto L_088919CC;
    return;
L_088919CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[2] << 3u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[30] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_fpr[13] = aot_fpr[14] + aot_fpr[13];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[8]));
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[8]));
      if (branch_taken) {
          goto L_08891A34;
      }
      goto L_08891A18;
    }
L_08891A18:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08891A98;
      }
      goto L_08891A34;
    }
L_08891A34:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08891A5C;
      }
      goto L_08891A40;
    }
L_08891A40:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08891A98;
      }
      goto L_08891A5C;
    }
L_08891A5C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
        goto L_08891A80;
    }
    goto L_08891A68;
L_08891A68:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08891A98;
      }
      goto L_08891A80;
    }
L_08891A80:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08891A98;
L_08891A98:
    if (aot_gpr[23] == 0u) {
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
        goto L_08891AF0;
    }
    goto L_08891AA0;
L_08891AA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[23] + static_cast<std::uint32_t>(24)));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] + aot_fpr[20];
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[23] + static_cast<std::uint32_t>(26)));
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[17] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[17])));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[15] = aot_fpr[15] + aot_fpr[20];
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08891B10;
      }
      goto L_08891AF0;
    }
L_08891AF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(12))))));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_08891B10;
L_08891B10:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08891B30u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 130u, 0x0888B85Cu>(ctx, &aot_mem) && ctx.pc == 0x08891B30u) goto L_08891B30;
    return;
L_08891B30:
    aot_gpr[7] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[30]);
    aot_gpr[31] = (0x08891B44u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 130u, 0x0888B85Cu>(ctx, &aot_mem) && ctx.pc == 0x08891B44u) goto L_08891B44;
    return;
L_08891B44:
    aot_gpr[6] = (aot_gpr[7] << 3u);
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(132));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08891B60u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 88u, 0x08944C94u>(ctx, &aot_mem) && ctx.pc == 0x08891B60u) goto L_08891B60;
    return;
L_08891B60:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[18] << 3u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(140));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08891B7Cu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 88u, 0x08944C94u>(ctx, &aot_mem) && ctx.pc == 0x08891B7Cu) goto L_08891B7C;
    return;
L_08891B7C:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(124));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08891B90u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 89u, 0x08944CB8u>(ctx, &aot_mem) && ctx.pc == 0x08891B90u) goto L_08891B90;
    return;
L_08891B90:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08891BA0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 89u, 0x08944CB8u>(ctx, &aot_mem) && ctx.pc == 0x08891BA0u) goto L_08891BA0;
    return;
L_08891BA0:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08891BACu);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 92u, 0x08944D20u>(ctx, &aot_mem) && ctx.pc == 0x08891BACu) goto L_08891BAC;
    return;
L_08891BAC:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08891BB8u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 92u, 0x08944D20u>(ctx, &aot_mem) && ctx.pc == 0x08891BB8u) goto L_08891BB8;
    return;
L_08891BB8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08891BC8u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 88u, 0x08944C94u>(ctx, &aot_mem) && ctx.pc == 0x08891BC8u) goto L_08891BC8;
    return;
L_08891BC8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08891BD4u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 92u, 0x08944D20u>(ctx, &aot_mem) && ctx.pc == 0x08891BD4u) goto L_08891BD4;
    return;
L_08891BD4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08891BE8u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 90u, 0x08944CDCu>(ctx, &aot_mem) && ctx.pc == 0x08891BE8u) goto L_08891BE8;
    return;
L_08891BE8:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(172));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08891BF8u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 88u, 0x08944C94u>(ctx, &aot_mem) && ctx.pc == 0x08891BF8u) goto L_08891BF8;
    return;
L_08891BF8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[23]);
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_08891C74;
      }
      goto L_08891C30;
    }
L_08891C30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[23] + static_cast<std::uint32_t>(24)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[20];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[23] + static_cast<std::uint32_t>(26)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[20];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08891C8C;
      }
      goto L_08891C74;
    }
L_08891C74:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_08891C8C;
L_08891C8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[7] = (aot_gpr[30] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088919C0;
      }
      goto L_08891CA0;
    }
L_08891CA0:
    aot_gpr[31] = (0x08891CA8u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x08891CA8u) goto L_08891CA8;
    return;
L_08891CA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[23]);
    aot_gpr[4] = (aot_gpr[4] | 10u);
    { const bool branch_taken = aot_gpr[23] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[4]);
      if (branch_taken) {
          goto L_08891CC8;
      }
      goto L_08891CBC;
    }
L_08891CBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[4]);
    goto L_08891CC8;
L_08891CC8:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08891CD8u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x08891CD8u) goto L_08891CD8;
    return;
L_08891CD8:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[31] = (0x08891CECu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 27u, 0x0892F26Cu>(ctx, &aot_mem) && ctx.pc == 0x08891CECu) goto L_08891CEC;
    return;
L_08891CEC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(120));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08891D00u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 13u, 0x08A4C0E4u>(ctx, &aot_mem) && ctx.pc == 0x08891D00u) goto L_08891D00;
    return;
L_08891D00:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08891D5C;
      }
      goto L_08891D10;
    }
L_08891D10:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 16u);
    goto L_08891D18;
L_08891D18:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(32));
    aot_gpr[8] = (aot_gpr[4] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08891D18;
      }
      goto L_08891D5C;
    }
L_08891D5C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08891D68u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 43u, 0x0892F434u>(ctx, &aot_mem) && ctx.pc == 0x08891D68u) goto L_08891D68;
    return;
L_08891D68:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08891D74u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 62u, 0x089356ACu>(ctx, &aot_mem) && ctx.pc == 0x08891D74u) goto L_08891D74;
    return;
L_08891D74:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(244)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(248)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(252)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08891DB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-272));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(248), aot_gpr[21]);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[23]);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[8] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(60));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[8]);
    aot_gpr[17] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[16]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(aot_gpr[17]));
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(aot_gpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(244), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(252), aot_gpr[22]);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[4]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[21] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[10]);
      if (branch_taken) {
          goto L_08891F24;
      }
      goto L_08891E5C;
    }
L_08891E5C:
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 1u);
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]) ^ 0x80000000u);
    aot_gpr[31] = (0x08891E70u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x08891E70u) goto L_08891E70;
    return;
L_08891E70:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x08891E90u);
    aot_fpr[12] = aot_fpr[24] - aot_fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x08891E90u) goto L_08891E90;
    return;
L_08891E90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08891F78;
      }
      goto L_08891F24;
    }
L_08891F24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(48)));
    goto L_08891F78;
L_08891F78:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[6]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint16_t>(aot_gpr[17]));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(106), static_cast<std::uint16_t>(aot_gpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[5] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    ctx.pc = 0x08892000u; return;
}

void recomp_unit_0141(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0141_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_141(Runtime &runtime) {
    runtime.register_generated_unit(141u, 0x08891000u, 4096u, &recomp_unit_0141, &recomp_unit_0141_entry);
    runtime.register_function(0x08891000u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891064u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891080u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x0889109Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088910A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088910C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088910C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088910D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088910E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088910FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x0889110Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891114u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891138u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x0889113Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891158u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891168u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891180u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088911A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088911A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088911D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088911F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891204u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891218u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x0889126Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891284u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891298u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x0889129Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088912C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088912D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088912D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088912E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088912F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891310u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891318u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891324u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891330u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x0889133Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891348u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891350u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x0889135Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891378u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x0889137Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891384u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088913A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088913B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088913BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088913D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088913E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891400u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891408u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891414u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891424u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x0889142Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x0889143Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x0889144Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x0889145Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891498u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088914A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088914A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088914B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088914C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088914E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088914ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891504u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891524u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891534u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891544u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891558u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891574u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891580u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x0889158Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891598u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088915A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088915ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088915B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088915B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088915C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088915C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088915D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088915D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088915E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088915F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891600u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891604u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x0889160Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x0889161Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891624u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x0889162Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891634u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x0889163Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891654u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891660u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891668u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891674u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x0889167Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x0889168Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891694u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088916BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088916C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088916C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088916D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088916D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088916E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088916F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x0889173Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088917ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891818u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891830u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891850u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088918ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088918D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088918DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088918F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891904u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891918u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891928u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891938u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891948u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x0889195Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891974u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891984u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x0889199Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088919ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088919C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x088919CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891A18u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891A34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891A40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891A5Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891A68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891A80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891A98u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891AA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891AF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891B10u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891B30u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891B44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891B60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891B7Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891B90u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891BA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891BACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891BB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891BC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891BD4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891BE8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891BF8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891C30u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891C74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891C8Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891CA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891CA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891CBCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891CC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891CD8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891CECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891D00u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891D10u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891D18u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891D5Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891D68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891D74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891DB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891E5Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891E70u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891E90u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891F24u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08891F78u, &recomp_unit_0141, "recomp_unit_0141");
}
} // namespace psprecomp
