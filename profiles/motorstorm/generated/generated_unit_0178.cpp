#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0178[1023] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0,
    19, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 25,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0,
    29, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33,
    0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 41, 0, 42, 0, 43, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52,
    0, 0, 0, 0, 53, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 58, 0, 59, 0, 0, 0, 0, 0, 60,
    0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 67, 0, 68, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 82, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0,
    0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0,
    0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 95, 0, 96, 0, 0,
    0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0,
    105, 0, 0, 106, 0, 0, 0, 107, 0, 0, 108, 0, 109, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 114, 0,
    0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 0, 122, 0, 0, 123, 0, 0,
    0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129,
    0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136,
    0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0,
    0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 150, 0, 151, 0, 152, 153, 0, 154,
    0, 0, 0, 0, 0, 155, 0, 156, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0,
    0, 160, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 178,
    0, 179, 0, 0, 180, 0, 0, 0, 0, 181, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 186,
};
void recomp_unit_0178_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088B6000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0178[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088B6000;
    case 2u: goto L_088B602C;
    case 3u: goto L_088B6044;
    case 4u: goto L_088B6064;
    case 5u: goto L_088B6070;
    case 6u: goto L_088B6074;
    case 7u: goto L_088B60B0;
    case 8u: goto L_088B60C4;
    case 9u: goto L_088B60D8;
    case 10u: goto L_088B60EC;
    case 11u: goto L_088B6118;
    case 12u: goto L_088B6160;
    case 13u: goto L_088B6198;
    case 14u: goto L_088B61A4;
    case 15u: goto L_088B61B0;
    case 16u: goto L_088B61B8;
    case 17u: goto L_088B61E0;
    case 18u: goto L_088B61EC;
    case 19u: goto L_088B6200;
    case 20u: goto L_088B6208;
    case 21u: goto L_088B6224;
    case 22u: goto L_088B6240;
    case 23u: goto L_088B6260;
    case 24u: goto L_088B6270;
    case 25u: goto L_088B627C;
    case 26u: goto L_088B62B8;
    case 27u: goto L_088B62C0;
    case 28u: goto L_088B62E4;
    case 29u: goto L_088B6300;
    case 30u: goto L_088B630C;
    case 31u: goto L_088B6324;
    case 32u: goto L_088B635C;
    case 33u: goto L_088B637C;
    case 34u: goto L_088B6388;
    case 35u: goto L_088B63A4;
    case 36u: goto L_088B63C4;
    case 37u: goto L_088B63F4;
    case 38u: goto L_088B6400;
    case 39u: goto L_088B642C;
    case 40u: goto L_088B6438;
    case 41u: goto L_088B6440;
    case 42u: goto L_088B6448;
    case 43u: goto L_088B6450;
    case 44u: goto L_088B6458;
    case 45u: goto L_088B6460;
    case 46u: goto L_088B6468;
    case 47u: goto L_088B649C;
    case 48u: goto L_088B6508;
    case 49u: goto L_088B6514;
    case 50u: goto L_088B6540;
    case 51u: goto L_088B6570;
    case 52u: goto L_088B657C;
    case 53u: goto L_088B6590;
    case 54u: goto L_088B6594;
    case 55u: goto L_088B65A4;
    case 56u: goto L_088B65BC;
    case 57u: goto L_088B65D4;
    case 58u: goto L_088B65DC;
    case 59u: goto L_088B65E4;
    case 60u: goto L_088B65FC;
    case 61u: goto L_088B6608;
    case 62u: goto L_088B6630;
    case 63u: goto L_088B6650;
    case 64u: goto L_088B6680;
    case 65u: goto L_088B66A4;
    case 66u: goto L_088B66B0;
    case 67u: goto L_088B66B8;
    case 68u: goto L_088B66C0;
    case 69u: goto L_088B66D0;
    case 70u: goto L_088B66D8;
    case 71u: goto L_088B66F8;
    case 72u: goto L_088B6710;
    case 73u: goto L_088B6718;
    case 74u: goto L_088B6764;
    case 75u: goto L_088B6770;
    case 76u: goto L_088B67AC;
    case 77u: goto L_088B67BC;
    case 78u: goto L_088B67C8;
    case 79u: goto L_088B67F4;
    case 80u: goto L_088B6820;
    case 81u: goto L_088B682C;
    case 82u: goto L_088B6844;
    case 83u: goto L_088B6848;
    case 84u: goto L_088B6878;
    case 85u: goto L_088B6898;
    case 86u: goto L_088B68CC;
    case 87u: goto L_088B68D8;
    case 88u: goto L_088B68EC;
    case 89u: goto L_088B6904;
    case 90u: goto L_088B690C;
    case 91u: goto L_088B692C;
    case 92u: goto L_088B693C;
    case 93u: goto L_088B695C;
    case 94u: goto L_088B6964;
    case 95u: goto L_088B696C;
    case 96u: goto L_088B6974;
    case 97u: goto L_088B6998;
    case 98u: goto L_088B69A4;
    case 99u: goto L_088B69B4;
    case 100u: goto L_088B69C0;
    case 101u: goto L_088B69D0;
    case 102u: goto L_088B69E0;
    case 103u: goto L_088B69EC;
    case 104u: goto L_088B69F8;
    case 105u: goto L_088B6A00;
    case 106u: goto L_088B6A0C;
    case 107u: goto L_088B6A1C;
    case 108u: goto L_088B6A28;
    case 109u: goto L_088B6A30;
    case 110u: goto L_088B6A40;
    case 111u: goto L_088B6A4C;
    case 112u: goto L_088B6A5C;
    case 113u: goto L_088B6A68;
    case 114u: goto L_088B6A78;
    case 115u: goto L_088B6A84;
    case 116u: goto L_088B6A94;
    case 117u: goto L_088B6AA0;
    case 118u: goto L_088B6AB0;
    case 119u: goto L_088B6AC0;
    case 120u: goto L_088B6ACC;
    case 121u: goto L_088B6AD8;
    case 122u: goto L_088B6AE8;
    case 123u: goto L_088B6AF4;
    case 124u: goto L_088B6B04;
    case 125u: goto L_088B6B20;
    case 126u: goto L_088B6B30;
    case 127u: goto L_088B6B4C;
    case 128u: goto L_088B6B5C;
    case 129u: goto L_088B6B7C;
    case 130u: goto L_088B6B8C;
    case 131u: goto L_088B6BAC;
    case 132u: goto L_088B6BBC;
    case 133u: goto L_088B6BCC;
    case 134u: goto L_088B6BDC;
    case 135u: goto L_088B6BEC;
    case 136u: goto L_088B6BFC;
    case 137u: goto L_088B6C0C;
    case 138u: goto L_088B6C1C;
    case 139u: goto L_088B6C2C;
    case 140u: goto L_088B6C3C;
    case 141u: goto L_088B6C4C;
    case 142u: goto L_088B6C5C;
    case 143u: goto L_088B6C6C;
    case 144u: goto L_088B6C7C;
    case 145u: goto L_088B6CF8;
    case 146u: goto L_088B6D0C;
    case 147u: goto L_088B6D28;
    case 148u: goto L_088B6D40;
    case 149u: goto L_088B6D58;
    case 150u: goto L_088B6D60;
    case 151u: goto L_088B6D68;
    case 152u: goto L_088B6D70;
    case 153u: goto L_088B6D74;
    case 154u: goto L_088B6D7C;
    case 155u: goto L_088B6D94;
    case 156u: goto L_088B6D9C;
    case 157u: goto L_088B6DA0;
    case 158u: goto L_088B6DA8;
    case 159u: goto L_088B6DEC;
    case 160u: goto L_088B6E04;
    case 161u: goto L_088B6E0C;
    case 162u: goto L_088B6E14;
    case 163u: goto L_088B6E44;
    case 164u: goto L_088B6E4C;
    case 165u: goto L_088B6E60;
    case 166u: goto L_088B6E80;
    case 167u: goto L_088B6E9C;
    case 168u: goto L_088B6EB8;
    case 169u: goto L_088B6EC0;
    case 170u: goto L_088B6ED4;
    case 171u: goto L_088B6EE4;
    case 172u: goto L_088B6F00;
    case 173u: goto L_088B6F18;
    case 174u: goto L_088B6F24;
    case 175u: goto L_088B6F40;
    case 176u: goto L_088B6F5C;
    case 177u: goto L_088B6F68;
    case 178u: goto L_088B6F7C;
    case 179u: goto L_088B6F84;
    case 180u: goto L_088B6F90;
    case 181u: goto L_088B6FA4;
    case 182u: goto L_088B6FA8;
    case 183u: goto L_088B6FB8;
    case 184u: goto L_088B6FD4;
    case 185u: goto L_088B6FE0;
    case 186u: goto L_088B6FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088B6000:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088B602Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0290_entry, 290u, 30u, 0x089261ECu>(ctx, &aot_mem) && ctx.pc == 0x088B602Cu) goto L_088B602C;
    return;
L_088B602C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6044:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(41)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B60D8;
      }
      goto L_088B6064;
    }
L_088B6064:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088B6074;
      }
      goto L_088B6070;
    }
L_088B6070:
    aot_gpr[17] = (0u | 1u);
    goto L_088B6074;
L_088B6074:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[6] = (aot_gpr[29] | 0u);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[7] = (aot_gpr[17] | 0u);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[5] | 0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[31] = (0x088B60B0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0312_entry, 312u, 180u, 0x0893CE1Cu>(ctx, &aot_mem) && ctx.pc == 0x088B60B0u) goto L_088B60B0;
    return;
L_088B60B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088B60C4u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0312_entry, 312u, 180u, 0x0893CE1Cu>(ctx, &aot_mem) && ctx.pc == 0x088B60C4u) goto L_088B60C4;
    return;
L_088B60C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088B60D8u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0312_entry, 312u, 180u, 0x0893CE1Cu>(ctx, &aot_mem) && ctx.pc == 0x088B60D8u) goto L_088B60D8;
    return;
L_088B60D8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B60EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088B6118u);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B6118u) goto L_088B6118;
    return;
L_088B6118:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6160:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-29332), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x088B6198u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088B6198u) goto L_088B6198;
    return;
L_088B6198:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (2216u << 16u);
        goto L_088B61B8;
    }
    goto L_088B61A4;
L_088B61A4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088B61B0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088B60EC;
L_088B61B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6224;
      }
      goto L_088B61B8;
    }
L_088B61B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088B61E0u);
    aot_gpr[6] = (0u | 80u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B61E0u) goto L_088B61E0;
    return;
L_088B61E0:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088B6208;
      }
      goto L_088B61EC;
    }
L_088B61EC:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088B6200u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_088B649C;
L_088B6200:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_088B6208;
L_088B6208:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_088B6224;
L_088B6224:
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
L_088B6240:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(72), static_cast<std::uint16_t>(aot_gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6260:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088B6270u);
    aot_gpr[5] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 20u, 0x089191B4u>(ctx, &aot_mem) && ctx.pc == 0x088B6270u) goto L_088B6270;
    return;
L_088B6270:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B627C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-320));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088B62B8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B62B8u) goto L_088B62B8;
    return;
L_088B62B8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6300;
      }
      goto L_088B62C0;
    }
L_088B62C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088B62E4u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B62E4u) goto L_088B62E4;
    return;
L_088B62E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088B6388;
      }
      goto L_088B6300;
    }
L_088B6300:
    aot_gpr[4] = (0u | 19u);
    aot_gpr[31] = (0x088B630Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 158u, 0x08872BF0u>(ctx, &aot_mem) && ctx.pc == 0x088B630Cu) goto L_088B630C;
    return;
L_088B630C:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088B6324u);
    aot_gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088B6324u) goto L_088B6324;
    return;
L_088B6324:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[16]);
    aot_gpr[4] = (0u | 32768u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(280), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (24948u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24900));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (20563u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20575));
    aot_gpr[5] = (0u | 92u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088B635Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088B635Cu) goto L_088B635C;
    return;
L_088B635C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088B637Cu);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B637Cu) goto L_088B637C;
    return;
L_088B637C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088B6388u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088B6388u) goto L_088B6388;
    return;
L_088B6388:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B63A4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27928), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B63C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088B63F4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B63F4u) goto L_088B63F4;
    return;
L_088B63F4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6400:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088B642Cu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B642Cu) goto L_088B642C;
    return;
L_088B642C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6438:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6440:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6448:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6450:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6458:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6460:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6468:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (65409u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32640));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), aot_gpr[6]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(72), static_cast<std::uint16_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(aot_gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B649C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24568));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(128)));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(132)));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(136)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[7] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(-3576));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x088B6508u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(136)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 178u, 0x08877CF8u>(ctx, &aot_mem) && ctx.pc == 0x088B6508u) goto L_088B6508;
    return;
L_088B6508:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), aot_gpr[2]);
    aot_gpr[31] = (0x088B6514u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0288_entry, 288u, 93u, 0x08924778u>(ctx, &aot_mem) && ctx.pc == 0x088B6514u) goto L_088B6514;
    return;
L_088B6514:
    aot_gpr[6] = (2194u << 16u);
    aot_gpr[8] = (2187u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 192u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(20312));
    aot_gpr[31] = (0x088B6540u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(25540));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 75u, 0x08A2D4CCu>(ctx, &aot_mem) && ctx.pc == 0x088B6540u) goto L_088B6540;
    return;
L_088B6540:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088B6570u);
    aot_gpr[6] = (0u | 12u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B6570u) goto L_088B6570;
    return;
L_088B6570:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6594;
      }
      goto L_088B657C;
    }
L_088B657C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (0x088B6590u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0288_entry, 288u, 112u, 0x08924990u>(ctx, &aot_mem) && ctx.pc == 0x088B6590u) goto L_088B6590;
    return;
L_088B6590:
    aot_gpr[18] = (aot_gpr[19] | 0u);
    goto L_088B6594;
L_088B6594:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088B65FC;
      }
      goto L_088B65A4;
    }
L_088B65A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[20] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088B65FC;
      }
      goto L_088B65BC;
    }
L_088B65BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088B65D4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0312_entry, 312u, 176u, 0x0893CDF8u>(ctx, &aot_mem) && ctx.pc == 0x088B65D4u) goto L_088B65D4;
    return;
L_088B65D4:
    { const bool branch_taken = aot_gpr[21] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_088B65E4;
      }
      goto L_088B65DC;
    }
L_088B65DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_088B65FC;
      }
      goto L_088B65E4;
    }
L_088B65E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[20] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B65BC;
      }
      goto L_088B65FC;
    }
L_088B65FC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088B6608u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_088B6468;
L_088B6608:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6630:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B66F8;
      }
      goto L_088B6650;
    }
L_088B6650:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3576));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (2187u << 16u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (0u | 192u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x088B6680u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(25600));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 107u, 0x08A2D844u>(ctx, &aot_mem) && ctx.pc == 0x088B6680u) goto L_088B6680;
    return;
L_088B6680:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088B66A4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B66A4u) goto L_088B66A4;
    return;
L_088B66A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(75)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B66B8;
      }
      goto L_088B66B0;
    }
L_088B66B0:
    aot_gpr[31] = (0x088B66B8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 60u, 0x088773A4u>(ctx, &aot_mem) && ctx.pc == 0x088B66B8u) goto L_088B66B8;
    return;
L_088B66B8:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_088B66D0;
      }
      goto L_088B66C0;
    }
L_088B66C0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24568));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_088B66D0;
L_088B66D0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B66F8;
      }
      goto L_088B66D8;
    }
L_088B66D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088B66F8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B66F8u) goto L_088B66F8;
    return;
L_088B66F8:
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
L_088B6710:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6718:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088B6764u);
    aot_gpr[6] = (0u | 80u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B6764u) goto L_088B6764;
    return;
L_088B6764:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_088B67AC;
      }
      goto L_088B6770;
    }
L_088B6770:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24568));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2)));
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3576));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    goto L_088B67AC;
L_088B67AC:
    aot_gpr[20] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr[31] = (0x088B67BCu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_088B6468;
L_088B67BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (0x088B67C8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0288_entry, 288u, 93u, 0x08924778u>(ctx, &aot_mem) && ctx.pc == 0x088B67C8u) goto L_088B67C8;
    return;
L_088B67C8:
    aot_gpr[6] = (2194u << 16u);
    aot_gpr[8] = (2187u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 192u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(20312));
    aot_gpr[31] = (0x088B67F4u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(25540));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 75u, 0x08A2D4CCu>(ctx, &aot_mem) && ctx.pc == 0x088B67F4u) goto L_088B67F4;
    return;
L_088B67F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088B6820u);
    aot_gpr[6] = (0u | 12u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B6820u) goto L_088B6820;
    return;
L_088B6820:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6848;
      }
      goto L_088B682C;
    }
L_088B682C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(60)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (0x088B6844u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0288_entry, 288u, 112u, 0x08924990u>(ctx, &aot_mem) && ctx.pc == 0x088B6844u) goto L_088B6844;
    return;
L_088B6844:
    aot_gpr[19] = (aot_gpr[17] | 0u);
    goto L_088B6848;
L_088B6848:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(56), aot_gpr[19]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_088B6878:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27936), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6898:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088B68CCu);
    aot_gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088B68CCu) goto L_088B68CC;
    return;
L_088B68CC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B68D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088B68ECu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_088B6898;
L_088B68EC:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6904:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B690C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088B692Cu);
    aot_gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088B692Cu) goto L_088B692C;
    return;
L_088B692C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-3951)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B6964;
      }
      goto L_088B693C;
    }
L_088B693C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24760));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28636)));
    aot_gpr[4] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[7];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6976));
      if (branch_taken) {
          goto L_088B6974;
      }
      goto L_088B695C;
    }
L_088B695C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088B696C;
      }
      goto L_088B6964;
    }
L_088B6964:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6C6C;
      }
      goto L_088B696C;
    }
L_088B696C:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088B6A00;
      }
      goto L_088B6974;
    }
L_088B6974:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] | 128u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(17))))));
    aot_gpr[5] = (aot_gpr[5] & 3u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B69A4;
      }
      goto L_088B6998;
    }
L_088B6998:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] | 12u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    goto L_088B69A4;
L_088B69A4:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(18))))));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B69C0;
      }
      goto L_088B69B4;
    }
L_088B69B4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    goto L_088B69C0;
L_088B69C0:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(20))))));
    aot_gpr[6] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B69E0;
      }
      goto L_088B69D0;
    }
L_088B69D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] | 256u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(20))))));
    goto L_088B69E0;
L_088B69E0:
    aot_gpr[4] = (aot_gpr[5] & 3u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B69F8;
      }
      goto L_088B69EC;
    }
L_088B69EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] | 768u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    goto L_088B69F8;
L_088B69F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6C6C;
      }
      goto L_088B6A00;
    }
L_088B6A00:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088B6A30;
      }
      goto L_088B6A0C;
    }
L_088B6A0C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(18))))));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6A28;
      }
      goto L_088B6A1C;
    }
L_088B6A1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    goto L_088B6A28;
L_088B6A28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6C6C;
      }
      goto L_088B6A30;
    }
L_088B6A30:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(16))))));
    aot_gpr[5] = (aot_gpr[5] & 3u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6A4C;
      }
      goto L_088B6A40;
    }
L_088B6A40:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    goto L_088B6A4C;
L_088B6A4C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(17))))));
    aot_gpr[5] = (aot_gpr[5] & 3u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6A68;
      }
      goto L_088B6A5C;
    }
L_088B6A5C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] | 12u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    goto L_088B6A68;
L_088B6A68:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(18))))));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6A84;
      }
      goto L_088B6A78;
    }
L_088B6A78:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    goto L_088B6A84;
L_088B6A84:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(19))))));
    aot_gpr[5] = (aot_gpr[5] & 3u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6AA0;
      }
      goto L_088B6A94;
    }
L_088B6A94:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] | 192u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    goto L_088B6AA0;
L_088B6AA0:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(20))))));
    aot_gpr[6] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6AC0;
      }
      goto L_088B6AB0;
    }
L_088B6AB0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] | 256u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(20))))));
    goto L_088B6AC0;
L_088B6AC0:
    aot_gpr[5] = (aot_gpr[5] & 3u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6AD8;
      }
      goto L_088B6ACC;
    }
L_088B6ACC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] | 768u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    goto L_088B6AD8;
L_088B6AD8:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(21))))));
    aot_gpr[5] = (aot_gpr[5] & 3u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6AF4;
      }
      goto L_088B6AE8;
    }
L_088B6AE8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] | 3072u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    goto L_088B6AF4;
L_088B6AF4:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(8))))));
    aot_gpr[5] = (aot_gpr[5] & 3u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_088B6B20;
      }
      goto L_088B6B04;
    }
L_088B6B04:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6544));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (aot_gpr[6] | 12288u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    goto L_088B6B20;
L_088B6B20:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(9))))));
    aot_gpr[5] = (aot_gpr[5] & 3u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_088B6B4C;
      }
      goto L_088B6B30;
    }
L_088B6B30:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6544));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(9)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (aot_gpr[6] | 49152u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    goto L_088B6B4C;
L_088B6B4C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(10))))));
    aot_gpr[5] = (aot_gpr[5] & 3u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_088B6B7C;
      }
      goto L_088B6B5C;
    }
L_088B6B5C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6544));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(10)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (3u << 16u);
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    goto L_088B6B7C;
L_088B6B7C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(11))))));
    aot_gpr[5] = (aot_gpr[5] & 3u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_088B6BAC;
      }
      goto L_088B6B8C;
    }
L_088B6B8C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6544));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(11)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (12u << 16u);
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    goto L_088B6BAC;
L_088B6BAC:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (aot_gpr[5] & 3u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6BCC;
      }
      goto L_088B6BBC;
    }
L_088B6BBC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (48u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    goto L_088B6BCC;
L_088B6BCC:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(13))))));
    aot_gpr[5] = (aot_gpr[5] & 3u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6BEC;
      }
      goto L_088B6BDC;
    }
L_088B6BDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (192u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    goto L_088B6BEC;
L_088B6BEC:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(14))))));
    aot_gpr[5] = (aot_gpr[5] & 3u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6C0C;
      }
      goto L_088B6BFC;
    }
L_088B6BFC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (768u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    goto L_088B6C0C;
L_088B6C0C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(15))))));
    aot_gpr[5] = (aot_gpr[5] & 3u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6C2C;
      }
      goto L_088B6C1C;
    }
L_088B6C1C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (3072u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    goto L_088B6C2C;
L_088B6C2C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(23))))));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6C4C;
      }
      goto L_088B6C3C;
    }
L_088B6C3C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (4096u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    goto L_088B6C4C;
L_088B6C4C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(37))))));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6C6C;
      }
      goto L_088B6C5C;
    }
L_088B6C5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    goto L_088B6C6C;
L_088B6C6C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6C7C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(33)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(34)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(33)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(34)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(35)));
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[4] = (16000u << 16u);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_gpr[5] = (16128u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[15];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6CF8:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(aot_gpr[5]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(aot_gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6D0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (192u << 16u);
    aot_gpr[5] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B6D68;
      }
      goto L_088B6D28;
    }
L_088B6D28:
    aot_gpr[5] = (768u << 16u);
    aot_gpr[5] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B6D60;
      }
      goto L_088B6D40;
    }
L_088B6D40:
    aot_gpr[5] = (3072u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6D70;
      }
      goto L_088B6D58;
    }
L_088B6D58:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_088B6D74;
      }
      goto L_088B6D60;
    }
L_088B6D60:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_088B6D74;
      }
      goto L_088B6D68;
    }
L_088B6D68:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B6D74;
      }
      goto L_088B6D70;
    }
L_088B6D70:
    aot_gpr[2] = (0u | 0u);
    goto L_088B6D74;
L_088B6D74:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6D7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] & 16u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6D9C;
      }
      goto L_088B6D94;
    }
L_088B6D94:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B6DA0;
      }
      goto L_088B6D9C;
    }
L_088B6D9C:
    aot_gpr[2] = (0u | 0u);
    goto L_088B6DA0;
L_088B6DA0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6DA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7508)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4444)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B6E0C;
      }
      goto L_088B6DEC;
    }
L_088B6DEC:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27412)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[20] + static_cast<std::uint32_t>(2080));
      if (branch_taken) {
          goto L_088B6E14;
      }
      goto L_088B6E04;
    }
L_088B6E04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6ED4;
      }
      goto L_088B6E0C;
    }
L_088B6E0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 46u, 0x088B7328u>(ctx, &aot_mem); return;
      }
      goto L_088B6E14;
    }
L_088B6E14:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (17150u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (17150u << 16u);
      if (branch_taken) {
          goto L_088B6E4C;
      }
      goto L_088B6E44;
    }
L_088B6E44:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_088B6E60;
      }
      goto L_088B6E4C;
    }
L_088B6E4C:
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
        goto L_088B6E60;
    }
    goto L_088B6E60;
L_088B6E60:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(376)));
    aot_gpr[4] = (aot_gpr[4] & 128u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          goto L_088B6EB8;
      }
      goto L_088B6E80;
    }
L_088B6E80:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(376)));
    aot_gpr[6] = (16u << 16u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B6EB8;
      }
      goto L_088B6E9C;
    }
L_088B6E9C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(376)));
    aot_gpr[6] = (32u << 16u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6EC0;
      }
      goto L_088B6EB8;
    }
L_088B6EB8:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(128));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_088B6EC0;
L_088B6EC0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(27412)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088B6ED4u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 149u, 0x088ACE30u>(ctx, &aot_mem) && ctx.pc == 0x088B6ED4u) goto L_088B6ED4;
    return;
L_088B6ED4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27420)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088B6FA8;
      }
      goto L_088B6EE4;
    }
L_088B6EE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(192)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088B6F18;
      }
      goto L_088B6F00;
    }
L_088B6F00:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26508)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(105))))));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(85))))));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    goto L_088B6F18;
L_088B6F18:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B6F5C;
      }
      goto L_088B6F24;
    }
L_088B6F24:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(420)));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B6F5C;
      }
      goto L_088B6F40;
    }
L_088B6F40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28044)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6F84;
      }
      goto L_088B6F5C;
    }
L_088B6F5C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088B6F68u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    goto L_088B6CF8;
L_088B6F68:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[22] << 24u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27420)));
    aot_gpr[31] = (0x088B6F7Cu);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 157u, 0x088B1AE8u>(ctx, &aot_mem) && ctx.pc == 0x088B6F7Cu) goto L_088B6F7C;
    return;
L_088B6F7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6FA4;
      }
      goto L_088B6F84;
    }
L_088B6F84:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088B6F90u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    goto L_088B6C7C;
L_088B6F90:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[2] << 24u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27420)));
    aot_gpr[31] = (0x088B6FA4u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 157u, 0x088B1AE8u>(ctx, &aot_mem) && ctx.pc == 0x088B6FA4u) goto L_088B6FA4;
    return;
L_088B6FA4:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    goto L_088B6FA8;
L_088B6FA8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27448)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 2u, 0x088B7008u>(ctx, &aot_mem); return;
      }
      goto L_088B6FB8;
    }
L_088B6FB8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(156)));
    aot_gpr[4] = (20224u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_088B6FE0;
      }
      goto L_088B6FD4;
    }
L_088B6FD4:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088B6FF8;
      }
      goto L_088B6FE0;
    }
L_088B6FE0:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[4] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    goto L_088B6FF8;
L_088B6FF8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(27448)));
    ctx.pc = 0x088B7000u; return;
}

void recomp_unit_0178(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0178_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_178(Runtime &runtime) {
    runtime.register_generated_unit(178u, 0x088B6000u, 4096u, &recomp_unit_0178, &recomp_unit_0178_entry);
    runtime.register_function(0x088B6000u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B602Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6044u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6064u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6070u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6074u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B60B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B60C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B60D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B60ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6118u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6160u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6198u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B61A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B61B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B61B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B61E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B61ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6200u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6208u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6224u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6240u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6260u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6270u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B627Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B62B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B62C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B62E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6300u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B630Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6324u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B635Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B637Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6388u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B63A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B63C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B63F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6400u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B642Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6438u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6440u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6448u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6450u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6458u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6460u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6468u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B649Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6508u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6514u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6540u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6570u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B657Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6590u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6594u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B65A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B65BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B65D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B65DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B65E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B65FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6608u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6630u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6650u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6680u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B66A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B66B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B66B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B66C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B66D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B66D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B66F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6710u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6718u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6764u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6770u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B67ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B67BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B67C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B67F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6820u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B682Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6844u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6848u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6878u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6898u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B68CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B68D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B68ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6904u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B690Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B692Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B693Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B695Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6964u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B696Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6974u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6998u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B69A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B69B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B69C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B69D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B69E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B69ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B69F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6A00u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6A0Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6A1Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6A28u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6A30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6A40u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6A4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6A5Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6A68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6A78u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6A84u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6A94u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6AA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6AB0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6AC0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6ACCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6AD8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6AE8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6AF4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6B04u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6B20u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6B30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6B4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6B5Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6B7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6B8Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6BACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6BBCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6BCCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6BDCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6BECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6BFCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6C0Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6C1Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6C2Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6C3Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6C4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6C5Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6C6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6C7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6CF8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6D0Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6D28u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6D40u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6D58u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6D60u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6D68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6D70u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6D74u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6D7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6D94u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6D9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6DA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6DA8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6DECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6E04u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6E0Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6E14u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6E44u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6E4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6E60u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6E80u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6E9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6EB8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6EC0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6ED4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6EE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6F00u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6F18u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6F24u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6F40u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6F5Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6F68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6F7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6F84u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6F90u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6FA4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6FA8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6FB8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6FD4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6FE0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x088B6FF8u, &recomp_unit_0178, "recomp_unit_0178");
}
} // namespace psprecomp
