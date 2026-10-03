#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0277[1014] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 17, 0, 0, 0, 0, 18,
    0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    23, 0, 24, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 34, 0, 0, 35, 0, 36, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0,
    40, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 50, 51, 52, 0, 0, 53, 0, 0, 54, 0, 0,
    0, 55, 0, 0, 0, 0, 0, 56, 57, 58, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 62, 63, 0, 0, 0, 0, 0, 64, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0,
    68, 69, 0, 0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 73, 0, 0, 74, 0, 0, 75, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0,
    0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0,
    89, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 98, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 0, 110, 111, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 119, 0, 120, 121, 0,
    0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 124, 0, 0, 0, 125, 0, 0, 126, 127, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133,
    0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 137, 0, 0, 138, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 142,
    0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 147, 0, 0, 148, 0, 0, 0, 0,
    0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 160, 0, 161, 0, 162, 0, 0, 163, 164,
    0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 170, 171,
    0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0,
    177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185,
    0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189,
};
void recomp_unit_0277_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08919000u;
        entry_id = (entry_delta < 4056u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0277[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08919000;
    case 2u: goto L_08919010;
    case 3u: goto L_08919044;
    case 4u: goto L_0891905C;
    case 5u: goto L_08919068;
    case 6u: goto L_08919078;
    case 7u: goto L_08919080;
    case 8u: goto L_089190B8;
    case 9u: goto L_089190C8;
    case 10u: goto L_089190D4;
    case 11u: goto L_08919104;
    case 12u: goto L_08919114;
    case 13u: goto L_08919124;
    case 14u: goto L_0891913C;
    case 15u: goto L_08919154;
    case 16u: goto L_08919160;
    case 17u: goto L_08919168;
    case 18u: goto L_0891917C;
    case 19u: goto L_08919194;
    case 20u: goto L_089191B4;
    case 21u: goto L_089191C8;
    case 22u: goto L_089191D0;
    case 23u: goto L_08919200;
    case 24u: goto L_08919208;
    case 25u: goto L_0891921C;
    case 26u: goto L_08919228;
    case 27u: goto L_08919234;
    case 28u: goto L_08919240;
    case 29u: goto L_0891924C;
    case 30u: goto L_0891926C;
    case 31u: goto L_08919290;
    case 32u: goto L_08919298;
    case 33u: goto L_089192A0;
    case 34u: goto L_089192AC;
    case 35u: goto L_089192B8;
    case 36u: goto L_089192C0;
    case 37u: goto L_089192C8;
    case 38u: goto L_089192D0;
    case 39u: goto L_089192F4;
    case 40u: goto L_08919300;
    case 41u: goto L_0891930C;
    case 42u: goto L_08919318;
    case 43u: goto L_08919324;
    case 44u: goto L_08919344;
    case 45u: goto L_0891935C;
    case 46u: goto L_0891938C;
    case 47u: goto L_089193A4;
    case 48u: goto L_089193B0;
    case 49u: goto L_089193C0;
    case 50u: goto L_089193D4;
    case 51u: goto L_089193D8;
    case 52u: goto L_089193DC;
    case 53u: goto L_089193E8;
    case 54u: goto L_089193F4;
    case 55u: goto L_08919404;
    case 56u: goto L_0891941C;
    case 57u: goto L_08919420;
    case 58u: goto L_08919424;
    case 59u: goto L_08919430;
    case 60u: goto L_08919438;
    case 61u: goto L_08919448;
    case 62u: goto L_0891945C;
    case 63u: goto L_08919460;
    case 64u: goto L_08919478;
    case 65u: goto L_089194A8;
    case 66u: goto L_089194CC;
    case 67u: goto L_089194F0;
    case 68u: goto L_08919500;
    case 69u: goto L_08919504;
    case 70u: goto L_0891951C;
    case 71u: goto L_08919524;
    case 72u: goto L_0891952C;
    case 73u: goto L_08919534;
    case 74u: goto L_08919540;
    case 75u: goto L_0891954C;
    case 76u: goto L_08919550;
    case 77u: goto L_0891956C;
    case 78u: goto L_08919584;
    case 79u: goto L_089195E4;
    case 80u: goto L_089195F4;
    case 81u: goto L_08919638;
    case 82u: goto L_08919648;
    case 83u: goto L_08919650;
    case 84u: goto L_089196A4;
    case 85u: goto L_089196CC;
    case 86u: goto L_089196DC;
    case 87u: goto L_089196E8;
    case 88u: goto L_089196F4;
    case 89u: goto L_08919700;
    case 90u: goto L_0891970C;
    case 91u: goto L_08919720;
    case 92u: goto L_08919730;
    case 93u: goto L_0891973C;
    case 94u: goto L_08919794;
    case 95u: goto L_0891979C;
    case 96u: goto L_089197B0;
    case 97u: goto L_089197B8;
    case 98u: goto L_089197CC;
    case 99u: goto L_089197D0;
    case 100u: goto L_089197EC;
    case 101u: goto L_0891982C;
    case 102u: goto L_0891989C;
    case 103u: goto L_089198C4;
    case 104u: goto L_089198D4;
    case 105u: goto L_089198E4;
    case 106u: goto L_08919900;
    case 107u: goto L_08919914;
    case 108u: goto L_0891991C;
    case 109u: goto L_08919924;
    case 110u: goto L_08919930;
    case 111u: goto L_08919934;
    case 112u: goto L_0891993C;
    case 113u: goto L_08919948;
    case 114u: goto L_08919954;
    case 115u: goto L_089199B0;
    case 116u: goto L_089199C0;
    case 117u: goto L_089199D0;
    case 118u: goto L_089199D8;
    case 119u: goto L_089199EC;
    case 120u: goto L_089199F4;
    case 121u: goto L_089199F8;
    case 122u: goto L_08919A18;
    case 123u: goto L_08919A20;
    case 124u: goto L_08919A28;
    case 125u: goto L_08919A38;
    case 126u: goto L_08919A44;
    case 127u: goto L_08919A48;
    case 128u: goto L_08919A4C;
    case 129u: goto L_08919A94;
    case 130u: goto L_08919B14;
    case 131u: goto L_08919B40;
    case 132u: goto L_08919B58;
    case 133u: goto L_08919B7C;
    case 134u: goto L_08919B8C;
    case 135u: goto L_08919BA4;
    case 136u: goto L_08919BB8;
    case 137u: goto L_08919BBC;
    case 138u: goto L_08919BC8;
    case 139u: goto L_08919BD0;
    case 140u: goto L_08919BD8;
    case 141u: goto L_08919BF4;
    case 142u: goto L_08919BFC;
    case 143u: goto L_08919C1C;
    case 144u: goto L_08919C30;
    case 145u: goto L_08919C4C;
    case 146u: goto L_08919C58;
    case 147u: goto L_08919C60;
    case 148u: goto L_08919C6C;
    case 149u: goto L_08919C84;
    case 150u: goto L_08919CA8;
    case 151u: goto L_08919CB4;
    case 152u: goto L_08919CB8;
    case 153u: goto L_08919CD0;
    case 154u: goto L_08919CF0;
    case 155u: goto L_08919D20;
    case 156u: goto L_08919D2C;
    case 157u: goto L_08919D3C;
    case 158u: goto L_08919D48;
    case 159u: goto L_08919D54;
    case 160u: goto L_08919D5C;
    case 161u: goto L_08919D64;
    case 162u: goto L_08919D6C;
    case 163u: goto L_08919D78;
    case 164u: goto L_08919D7C;
    case 165u: goto L_08919D8C;
    case 166u: goto L_08919D94;
    case 167u: goto L_08919DC8;
    case 168u: goto L_08919DD8;
    case 169u: goto L_08919DE4;
    case 170u: goto L_08919DF8;
    case 171u: goto L_08919DFC;
    case 172u: goto L_08919E1C;
    case 173u: goto L_08919E28;
    case 174u: goto L_08919E48;
    case 175u: goto L_08919E60;
    case 176u: goto L_08919E74;
    case 177u: goto L_08919E80;
    case 178u: goto L_08919EA0;
    case 179u: goto L_08919EB8;
    case 180u: goto L_08919EC4;
    case 181u: goto L_08919ED0;
    case 182u: goto L_08919EE0;
    case 183u: goto L_08919EEC;
    case 184u: goto L_08919F6C;
    case 185u: goto L_08919F7C;
    case 186u: goto L_08919F94;
    case 187u: goto L_08919FA8;
    case 188u: goto L_08919FC4;
    case 189u: goto L_08919FD4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08919000:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(aot_gpr[5]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(136), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08919010:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891917C;
      }
      goto L_08919044;
    }
L_08919044:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[7] = (aot_gpr[18] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08919168;
      }
      goto L_0891905C;
    }
L_0891905C:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08919068u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 11u, 0x0891814Cu>(ctx, &aot_mem) && ctx.pc == 0x08919068u) goto L_08919068;
    return;
L_08919068:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08919078u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0271_entry, 271u, 41u, 0x08913490u>(ctx, &aot_mem) && ctx.pc == 0x08919078u) goto L_08919078;
    return;
L_08919078:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089190B8;
      }
      goto L_08919080;
    }
L_08919080:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 0u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 36u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 40u, 4u);
      ctx.eat_vfpu_prefixes(); }
    ctx.execute_vfpu_vmmov(0u, 8u, 4u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_089190B8;
L_089190B8:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x089190C8u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0271_entry, 271u, 43u, 0x089134C4u>(ctx, &aot_mem) && ctx.pc == 0x089190C8u) goto L_089190C8;
    return;
L_089190C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919154;
      }
      goto L_089190D4;
    }
L_089190D4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30456)));
    aot_gpr[4] = (16656u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (15744u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08919104u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 158u, 0x08918FB8u>(ctx, &aot_mem) && ctx.pc == 0x08919104u) goto L_08919104;
    return;
L_08919104:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919154;
      }
      goto L_08919114;
    }
L_08919114:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919154;
      }
      goto L_08919124;
    }
L_08919124:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26520)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0891913Cu);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 161u, 0x08918FF0u>(ctx, &aot_mem) && ctx.pc == 0x0891913Cu) goto L_0891913C;
    return;
L_0891913C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26516)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08919154u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    goto L_08919000;
L_08919154:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08919160u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 154u, 0x08918F1Cu>(ctx, &aot_mem) && ctx.pc == 0x08919160u) goto L_08919160;
    return;
L_08919160:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891917C;
      }
      goto L_08919168;
    }
L_08919168:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919044;
      }
      goto L_0891917C;
    }
L_0891917C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08919194:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-30456), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089191B4:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08919200;
      }
      goto L_089191C8;
    }
L_089191C8:
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-30448));
    goto L_089191D0;
L_089191D0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[2] >> 24u);
    aot_gpr[8] = (aot_gpr[9] ^ aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[8] << 2u);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] << 8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] ^ aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089191D0;
      }
      goto L_08919200;
    }
L_08919200:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08919208:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0891921Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-21728));
    if (rt.invoke_chained_direct<&recomp_unit_0591_entry, 591u, 184u, 0x08A53E0Cu>(ctx, &aot_mem) && ctx.pc == 0x0891921Cu) goto L_0891921C;
    return;
L_0891921C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x08919228u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-29380));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08919228u) goto L_08919228;
    return;
L_08919228:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[31] = (0x08919234u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-13032));
    if (rt.invoke_chained_direct<&recomp_unit_0591_entry, 591u, 192u, 0x08A53E80u>(ctx, &aot_mem) && ctx.pc == 0x08919234u) goto L_08919234;
    return;
L_08919234:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x08919240u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-29368));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08919240u) goto L_08919240;
    return;
L_08919240:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891924C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08919344;
      }
      goto L_0891926C;
    }
L_0891926C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1144));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089192C0;
      }
      goto L_08919290;
    }
L_08919290:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_089192A0;
      }
      goto L_08919298;
    }
L_08919298:
    aot_gpr[31] = (0x089192A0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0591_entry, 591u, 206u, 0x08A53F34u>(ctx, &aot_mem) && ctx.pc == 0x089192A0u) goto L_089192A0;
    return;
L_089192A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x089192ACu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 11u, 0x08A540A8u>(ctx, &aot_mem) && ctx.pc == 0x089192ACu) goto L_089192AC;
    return;
L_089192AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x089192B8u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 33u, 0x08A5421Cu>(ctx, &aot_mem) && ctx.pc == 0x089192B8u) goto L_089192B8;
    return;
L_089192B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891930C;
      }
      goto L_089192C0;
    }
L_089192C0:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_089192F4;
      }
      goto L_089192C8;
    }
L_089192C8:
    aot_gpr[31] = (0x089192D0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0591_entry, 591u, 206u, 0x08A53F34u>(ctx, &aot_mem) && ctx.pc == 0x089192D0u) goto L_089192D0;
    return;
L_089192D0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089192F4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089192F4u) goto L_089192F4;
    return;
L_089192F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x08919300u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 11u, 0x08A540A8u>(ctx, &aot_mem) && ctx.pc == 0x08919300u) goto L_08919300;
    return;
L_08919300:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x0891930Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 33u, 0x08A5421Cu>(ctx, &aot_mem) && ctx.pc == 0x0891930Cu) goto L_0891930C;
    return;
L_0891930C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08919318u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x08919318u) goto L_08919318;
    return;
L_08919318:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08919344;
      }
      goto L_08919324;
    }
L_08919324:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08919344u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08919344u) goto L_08919344;
    return;
L_08919344:
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
L_0891935C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0891938Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x0891938Cu) goto L_0891938C;
    return;
L_0891938C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1144));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089193DC;
      }
      goto L_089193A4;
    }
L_089193A4:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089193B0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0591_entry, 591u, 200u, 0x08A53EF4u>(ctx, &aot_mem) && ctx.pc == 0x089193B0u) goto L_089193B0;
    return;
L_089193B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089193D8;
      }
      goto L_089193C0;
    }
L_089193C0:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089193D4u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0591_entry, 591u, 22u, 0x08A53168u>(ctx, &aot_mem) && ctx.pc == 0x089193D4u) goto L_089193D4;
    return;
L_089193D4:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_089193D8;
L_089193D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    goto L_089193DC;
L_089193DC:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919424;
      }
      goto L_089193E8;
    }
L_089193E8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089193F4u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0591_entry, 591u, 201u, 0x08A53EFCu>(ctx, &aot_mem) && ctx.pc == 0x089193F4u) goto L_089193F4;
    return;
L_089193F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08919420;
      }
      goto L_08919404;
    }
L_08919404:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0891941Cu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 56u, 0x08A54390u>(ctx, &aot_mem) && ctx.pc == 0x0891941Cu) goto L_0891941C;
    return;
L_0891941C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_08919420;
L_08919420:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    goto L_08919424;
L_08919424:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089194A8;
      }
      goto L_08919430;
    }
L_08919430:
    aot_gpr[31] = (0x08919438u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0591_entry, 591u, 202u, 0x08A53F04u>(ctx, &aot_mem) && ctx.pc == 0x08919438u) goto L_08919438;
    return;
L_08919438:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08919460;
      }
      goto L_08919448;
    }
L_08919448:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0891945Cu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 65u, 0x08A54484u>(ctx, &aot_mem) && ctx.pc == 0x0891945Cu) goto L_0891945C;
    return;
L_0891945C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_08919460;
L_08919460:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089194A8;
      }
      goto L_08919478;
    }
L_08919478:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08919478;
      }
      goto L_089194A8;
    }
L_089194A8:
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
L_089194CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089194F0u);
    aot_gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089194F0u) goto L_089194F0;
    return;
L_089194F0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (0u | 224u);
      if (branch_taken) {
          goto L_08919540;
      }
      goto L_08919500;
    }
L_08919500:
    aot_gpr[5] = (0u | 192u);
    goto L_08919504;
L_08919504:
    aot_gpr[7] = (aot_gpr[16] + aot_gpr[18]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[8] = (aot_gpr[7] & 224u);
    { const bool branch_taken = aot_gpr[8] != aot_gpr[6];
    aot_gpr[7] = (aot_gpr[7] & 192u);
      if (branch_taken) {
          goto L_08919524;
      }
      goto L_0891951C;
    }
L_0891951C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08919534;
      }
      goto L_08919524;
    }
L_08919524:
    if (aot_gpr[7] != aot_gpr[5]) {
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08919534;
    }
    goto L_0891952C;
L_0891952C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08919534;
      }
      goto L_08919534;
    }
L_08919534:
    aot_gpr[7] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08919504;
      }
      goto L_08919540;
    }
L_08919540:
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919550;
      }
      goto L_0891954C;
    }
L_0891954C:
    aot_gpr[17] = (aot_gpr[4] | 0u);
    goto L_08919550;
L_08919550:
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_0891956C:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (0u | 224u);
    aot_gpr[2] = (aot_gpr[2] & 255u);
    aot_gpr[7] = (aot_gpr[2] & 224u);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_089195E4;
      }
      goto L_08919584;
    }
L_08919584:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-225));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[8]);
    aot_gpr[9] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-129));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[7] = (aot_gpr[7] & 65535u);
    aot_gpr[9] = (aot_gpr[9] & 255u);
    aot_gpr[8] = (aot_gpr[9] & aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] << 12u);
    aot_gpr[7] = (aot_gpr[7] << 6u);
    aot_gpr[8] = (aot_gpr[8] & 65535u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    aot_gpr[2] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[6]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
      if (branch_taken) {
          goto L_08919648;
      }
      goto L_089195E4;
    }
L_089195E4:
    aot_gpr[6] = (aot_gpr[2] & 192u);
    aot_gpr[7] = (0u | 192u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08919638;
      }
      goto L_089195F4;
    }
L_089195F4:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-193));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-129));
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] & 65535u);
    aot_gpr[6] = (aot_gpr[6] << 6u);
    aot_gpr[2] = (0u | 2u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[6]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
      if (branch_taken) {
          goto L_08919648;
      }
      goto L_08919638;
    }
L_08919638:
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (aot_gpr[2] & 255u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[7]));
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[6]);
    goto L_08919648;
L_08919648:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08919650:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[22] = (aot_gpr[6] | 0u);
    aot_fpr[24] = __builtin_bit_cast(float, 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[31] = (0x089196A4u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    goto L_089194CC;
L_089196A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[30] = (aot_gpr[2] | 0u);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[30] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_089197EC;
      }
      goto L_089196CC;
    }
L_089196CC:
    aot_gpr[4] = (20352u << 16u);
    aot_gpr[18] = (0u | 32u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[16] = (0u | 13u);
    goto L_089196DC;
L_089196DC:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x089196E8u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_0891956C;
L_089196E8:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[18];
    aot_gpr[22] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089197B8;
      }
      goto L_089196F4;
    }
L_089196F4:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08919700u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 185u, 0x0891EBC8u>(ctx, &aot_mem) && ctx.pc == 0x08919700u) goto L_08919700;
    return;
L_08919700:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919794;
      }
      goto L_0891970C;
    }
L_0891970C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(20))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_fpr[24] = aot_fpr[24] + aot_fpr[12];
      if (branch_taken) {
          goto L_0891973C;
      }
      goto L_08919720;
    }
L_08919720:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08919730u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 190u, 0x0891EC34u>(ctx, &aot_mem) && ctx.pc == 0x08919730u) goto L_08919730;
    return;
L_08919730:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[24] = aot_fpr[24] + aot_fpr[12];
    goto L_0891973C;
L_0891973C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(108)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<0u>(aot_fpr[12]));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(21))))));
    aot_fpr[12] = aot_fpr[24] + aot_fpr[12];
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(64)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[24] = aot_fpr[12] + aot_fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_fpr[24] = aot_fpr[24] + aot_fpr[14];
      if (branch_taken) {
          goto L_089197D0;
      }
      goto L_08919794;
    }
L_08919794:
    { const bool branch_taken = aot_gpr[19] == aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_089197D0;
      }
      goto L_0891979C;
    }
L_0891979C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(56)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    if (static_cast<std::int32_t>(aot_gpr[4]) < 0) {
    aot_fpr[12] = aot_fpr[12] + aot_fpr[22];
        goto L_089197B0;
    }
    goto L_089197B0;
L_089197B0:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[24] = aot_fpr[24] + aot_fpr[12];
      if (branch_taken) {
          goto L_089197D0;
      }
      goto L_089197B8;
    }
L_089197B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(56)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    if (static_cast<std::int32_t>(aot_gpr[4]) < 0) {
    aot_fpr[12] = aot_fpr[12] + aot_fpr[22];
        goto L_089197CC;
    }
    goto L_089197CC;
L_089197CC:
    aot_fpr[24] = aot_fpr[24] + aot_fpr[12];
    goto L_089197D0;
L_089197D0:
    aot_gpr[21] = (aot_gpr[19] | 0u);
    aot_fpr[24] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<0u>(aot_fpr[24]));
    aot_fpr[24] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[24])));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[30] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089196DC;
      }
      goto L_089197EC;
    }
L_089197EC:
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891982C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[24] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[21] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    aot_gpr[31] = (0x0891989Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_089194CC;
L_0891989C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[16] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08919A38;
      }
      goto L_089198C4;
    }
L_089198C4:
    aot_gpr[4] = (20352u << 16u);
    aot_gpr[30] = (0u | 10u);
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[23] = (0u | 13u);
    goto L_089198D4;
L_089198D4:
    aot_gpr[10] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089198E4u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_0891956C;
L_089198E4:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[19] - aot_gpr[10]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[4]);
    aot_gpr[4] = (0u | 32u);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891991C;
      }
      goto L_08919900;
    }
L_08919900:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[30] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[30])));
    if (static_cast<std::int32_t>(aot_gpr[4]) < 0) {
    aot_fpr[30] = aot_fpr[30] + aot_fpr[28];
        goto L_08919914;
    }
    goto L_08919914;
L_08919914:
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[30]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[30] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[30] = fs * ft; }
      if (branch_taken) {
          goto L_089199F8;
      }
      goto L_0891991C;
    }
L_0891991C:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[30];
    // nop
      if (branch_taken) {
          goto L_0891993C;
      }
      goto L_08919924;
    }
L_08919924:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919934;
      }
      goto L_08919930;
    }
L_08919930:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[21]);
    goto L_08919934;
L_08919934:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08919A4C;
      }
      goto L_0891993C;
    }
L_0891993C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08919948u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 185u, 0x0891EBC8u>(ctx, &aot_mem) && ctx.pc == 0x08919948u) goto L_08919948;
    return;
L_08919948:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089199D0;
      }
      goto L_08919954;
    }
L_08919954:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(108)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(72)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(20))))));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(21))))));
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[15];
    aot_fpr[30] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_fpr[30] = aot_fpr[12] + aot_fpr[30];
      if (branch_taken) {
          goto L_089199F4;
      }
      goto L_089199B0;
    }
L_089199B0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089199C0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 190u, 0x0891EC34u>(ctx, &aot_mem) && ctx.pc == 0x089199C0u) goto L_089199C0;
    return;
L_089199C0:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[30] = aot_fpr[30] + aot_fpr[12];
      if (branch_taken) {
          goto L_089199F4;
      }
      goto L_089199D0;
    }
L_089199D0:
    if (aot_gpr[16] == aot_gpr[23]) {
    aot_fpr[30] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
        goto L_089199F4;
    }
    goto L_089199D8;
L_089199D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[30] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[30])));
    if (static_cast<std::int32_t>(aot_gpr[4]) < 0) {
    aot_fpr[30] = aot_fpr[30] + aot_fpr[28];
        goto L_089199EC;
    }
    goto L_089199EC;
L_089199EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089199F4;
      }
      goto L_089199F4;
    }
L_089199F4:
    { const float fs = aot_fpr[30]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[30] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[30] = fs * ft; }
    goto L_089199F8;
L_089199F8:
    aot_gpr[18] = (aot_gpr[16] | 0u);
    aot_fpr[30] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<0u>(aot_fpr[30]));
    aot_fpr[30] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[30])));
    aot_fpr[12] = aot_fpr[30] + aot_fpr[26];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08919A20;
      }
      goto L_08919A18;
    }
L_08919A18:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[26] = aot_fpr[30] + aot_fpr[26];
      if (branch_taken) {
          goto L_08919A28;
      }
      goto L_08919A20;
    }
L_08919A20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919A38;
      }
      goto L_08919A28;
    }
L_08919A28:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089198D4;
      }
      goto L_08919A38;
    }
L_08919A38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919A48;
      }
      goto L_08919A44;
    }
L_08919A44:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[21]);
    goto L_08919A48;
L_08919A48:
    aot_gpr[2] = (aot_gpr[20] | 0u);
    goto L_08919A4C;
L_08919A4C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08919A94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-224));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_fpr[26] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[23]);
    aot_fpr[28] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[17] = (aot_gpr[9] | 0u);
    aot_fpr[30] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[23] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[31]);
    aot_gpr[31] = (0x08919B14u);
    aot_gpr[4] = (aot_gpr[10] | 0u);
    goto L_089194CC;
L_08919B14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[16] << 2u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[11] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08919B7C;
      }
      goto L_08919B40;
    }
L_08919B40:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[11]);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[4] = (aot_gpr[11] | 0u);
    aot_gpr[31] = (0x08919B58u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08919650;
L_08919B58:
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[18] = (2216u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    aot_fpr[16] = aot_fpr[16] - aot_fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
      if (branch_taken) {
          goto L_08919BBC;
      }
      goto L_08919B7C;
    }
L_08919B7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[11]);
    aot_gpr[4] = (aot_gpr[17] & 4u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (2216u << 16u);
      if (branch_taken) {
          goto L_08919BB8;
      }
      goto L_08919B8C;
    }
L_08919B8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[11]);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[4] = (aot_gpr[11] | 0u);
    aot_gpr[31] = (0x08919BA4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08919650;
L_08919BA4:
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    aot_fpr[16] = aot_fpr[16] - aot_fpr[0];
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
      if (branch_taken) {
          goto L_08919BBC;
      }
      goto L_08919BB8;
    }
L_08919BB8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    goto L_08919BBC;
L_08919BBC:
    aot_gpr[4] = (aot_gpr[17] & 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] & 32u);
      if (branch_taken) {
          goto L_08919BD0;
      }
      goto L_08919BC8;
    }
L_08919BC8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_08919C30;
      }
      goto L_08919BD0;
    }
L_08919BD0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] & 64u);
      if (branch_taken) {
          goto L_08919BF4;
      }
      goto L_08919BD8;
    }
L_08919BD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(76)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
      if (branch_taken) {
          goto L_08919C30;
      }
      goto L_08919BF4;
    }
L_08919BF4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_08919C1C;
      }
      goto L_08919BFC;
    }
L_08919BFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(72)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
      if (branch_taken) {
          goto L_08919C30;
      }
      goto L_08919C1C;
    }
L_08919C1C:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[17]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    goto L_08919C30;
L_08919C30:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<0u>(aot_fpr[16]));
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<0u>(aot_fpr[12]));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08919C58;
      }
      goto L_08919C4C;
    }
L_08919C4C:
    aot_gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08919C6C;
      }
      goto L_08919C58;
    }
L_08919C58:
    aot_gpr[31] = (0x08919C60u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x08919C60u) goto L_08919C60;
    return;
L_08919C60:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08919C6C;
L_08919C6C:
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[28]) || std::isnan(aot_fpr[20])) && aot_fpr[28] == aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
      if (branch_taken) {
          goto L_08919CB8;
      }
      goto L_08919C84;
    }
L_08919C84:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]) ^ 0x80000000u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x08919CA8u);
    aot_fpr[12] = aot_fpr[20] - aot_fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x08919CA8u) goto L_08919CA8;
    return;
L_08919CA8:
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[31] = (0x08919CB4u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x08919CB4u) goto L_08919CB4;
    return;
L_08919CB4:
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08919CB8;
L_08919CB8:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(104)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0278_entry, 278u, 45u, 0x0891A638u>(ctx, &aot_mem); return;
      }
      goto L_08919CD0;
    }
L_08919CD0:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[19]);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[4]);
    aot_gpr[4] = (16128u << 16u);
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(68));
    aot_gpr[30] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[4]);
    goto L_08919CF0;
L_08919CF0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[21] ? 1u : 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 32u);
      if (branch_taken) {
          goto L_08919D8C;
      }
      goto L_08919D20;
    }
L_08919D20:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x08919D2Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0891956C;
L_08919D2C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08919D3Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 185u, 0x0891EBC8u>(ctx, &aot_mem) && ctx.pc == 0x08919D3Cu) goto L_08919D3C;
    return;
L_08919D3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[19];
    aot_gpr[5] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08919D7C;
      }
      goto L_08919D48;
    }
L_08919D48:
    aot_gpr[6] = (0u | 10u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (0u | 9u);
      if (branch_taken) {
          goto L_08919D7C;
      }
      goto L_08919D54;
    }
L_08919D54:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (0u | 13u);
      if (branch_taken) {
          goto L_08919D7C;
      }
      goto L_08919D5C;
    }
L_08919D5C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08919D7C;
      }
      goto L_08919D64;
    }
L_08919D64:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919D7C;
      }
      goto L_08919D6C;
    }
L_08919D6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08919D7C;
      }
      goto L_08919D78;
    }
L_08919D78:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08919D7C;
L_08919D7C:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[21] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919D20;
      }
      goto L_08919D8C;
    }
L_08919D8C:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0278_entry, 278u, 42u, 0x0891A5F4u>(ctx, &aot_mem); return;
      }
      goto L_08919D94;
    }
L_08919D94:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[20]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(108)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08919DC8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x08919DC8u) goto L_08919DC8;
    return;
L_08919DC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x08919DD8u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 19u, 0x08A4C160u>(ctx, &aot_mem) && ctx.pc == 0x08919DD8u) goto L_08919DD8;
    return;
L_08919DD8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08919DF8;
      }
      goto L_08919DE4;
    }
L_08919DE4:
    aot_gpr[5] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
    aot_gpr[19] = (aot_gpr[5] << 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[4] + aot_gpr[19]);
      if (branch_taken) {
          goto L_08919DFC;
      }
      goto L_08919DF8;
    }
L_08919DF8:
    aot_gpr[19] = (aot_gpr[4] | 0u);
    goto L_08919DFC;
L_08919DFC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[5]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[21] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0278_entry, 278u, 41u, 0x0891A5DCu>(ctx, &aot_mem); return;
      }
      goto L_08919E1C;
    }
L_08919E1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[31] = (0x08919E28u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    goto L_0891956C;
L_08919E28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[2]);
    aot_gpr[5] = (20352u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (0u | 32u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08919E74;
      }
      goto L_08919E48;
    }
L_08919E48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    if (static_cast<std::int32_t>(aot_gpr[4]) < 0) {
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
        goto L_08919E60;
    }
    goto L_08919E60;
L_08919E60:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[18]);
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0278_entry, 278u, 39u, 0x0891A5C0u>(ctx, &aot_mem); return;
      }
      goto L_08919E74;
    }
L_08919E74:
    aot_gpr[5] = (0u | 10u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08919EB8;
      }
      goto L_08919E80;
    }
L_08919E80:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    if (static_cast<std::int32_t>(aot_gpr[4]) < 0) {
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
        goto L_08919EA0;
    }
    goto L_08919EA0;
L_08919EA0:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[18]);
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0278_entry, 278u, 39u, 0x0891A5C0u>(ctx, &aot_mem); return;
      }
      goto L_08919EB8;
    }
L_08919EB8:
    aot_gpr[5] = (0u | 13u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[18]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0278_entry, 278u, 39u, 0x0891A5C0u>(ctx, &aot_mem); return;
      }
      goto L_08919EC4;
    }
L_08919EC4:
    aot_gpr[5] = (0u | 9u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[18]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0278_entry, 278u, 39u, 0x0891A5C0u>(ctx, &aot_mem); return;
      }
      goto L_08919ED0;
    }
L_08919ED0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[18]);
    aot_gpr[31] = (0x08919EE0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 185u, 0x0891EBC8u>(ctx, &aot_mem) && ctx.pc == 0x08919EE0u) goto L_08919EE0;
    return;
L_08919EE0:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0278_entry, 278u, 35u, 0x0891A570u>(ctx, &aot_mem); return;
      }
      goto L_08919EEC;
    }
L_08919EEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(72)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_fpr[13] = aot_fpr[14] - aot_fpr[16];
    aot_fpr[18] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[18])));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[30]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[28] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<0u>(aot_fpr[12]));
    aot_fpr[28] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[28])));
    aot_fpr[24] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<0u>(aot_fpr[13]));
    aot_fpr[24] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[24])));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(20))))));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[17] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919F94;
      }
      goto L_08919F6C;
    }
L_08919F6C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08919F7Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 190u, 0x0891EC34u>(ctx, &aot_mem) && ctx.pc == 0x08919F7Cu) goto L_08919F7C;
    return;
L_08919F7C:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08919F94;
L_08919F94:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(22)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    if (aot_gpr[4] != aot_gpr[5]) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
        (void)rt.invoke_chained_direct<&recomp_unit_0278_entry, 278u, 34u, 0x0891A528u>(ctx, &aot_mem); return;
    }
    goto L_08919FA8;
L_08919FA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[18]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[12])) && aot_fpr[13] == aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0278_entry, 278u, 13u, 0x0891A228u>(ctx, &aot_mem); return;
      }
      goto L_08919FC4;
    }
L_08919FC4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0278_entry, 278u, 2u, 0x0891A018u>(ctx, &aot_mem); return;
      }
      goto L_08919FD4;
    }
L_08919FD4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[26];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    ctx.pc = 0x0891A000u; return;
}

void recomp_unit_0277(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0277_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_277(Runtime &runtime) {
    runtime.register_generated_unit(277u, 0x08919000u, 4096u, &recomp_unit_0277, &recomp_unit_0277_entry);
    runtime.register_function(0x08919000u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919010u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919044u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x0891905Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919068u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919078u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919080u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089190B8u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089190C8u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089190D4u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919104u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919114u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919124u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x0891913Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919154u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919160u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919168u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x0891917Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919194u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089191B4u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089191C8u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089191D0u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919200u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919208u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x0891921Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919228u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919234u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919240u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x0891924Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x0891926Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919290u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919298u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089192A0u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089192ACu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089192B8u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089192C0u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089192C8u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089192D0u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089192F4u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919300u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x0891930Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919318u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919324u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919344u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x0891935Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x0891938Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089193A4u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089193B0u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089193C0u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089193D4u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089193D8u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089193DCu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089193E8u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089193F4u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919404u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x0891941Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919420u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919424u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919430u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919438u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919448u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x0891945Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919460u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919478u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089194A8u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089194CCu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089194F0u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919500u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919504u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x0891951Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919524u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x0891952Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919534u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919540u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x0891954Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919550u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x0891956Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919584u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089195E4u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089195F4u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919638u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919648u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919650u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089196A4u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089196CCu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089196DCu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089196E8u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089196F4u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919700u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x0891970Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919720u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919730u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x0891973Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919794u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x0891979Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089197B0u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089197B8u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089197CCu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089197D0u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089197ECu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x0891982Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x0891989Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089198C4u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089198D4u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089198E4u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919900u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919914u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x0891991Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919924u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919930u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919934u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x0891993Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919948u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919954u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089199B0u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089199C0u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089199D0u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089199D8u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089199ECu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089199F4u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x089199F8u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919A18u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919A20u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919A28u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919A38u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919A44u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919A48u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919A4Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919A94u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919B14u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919B40u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919B58u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919B7Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919B8Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919BA4u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919BB8u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919BBCu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919BC8u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919BD0u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919BD8u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919BF4u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919BFCu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919C1Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919C30u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919C4Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919C58u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919C60u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919C6Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919C84u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919CA8u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919CB4u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919CB8u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919CD0u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919CF0u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919D20u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919D2Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919D3Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919D48u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919D54u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919D5Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919D64u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919D6Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919D78u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919D7Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919D8Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919D94u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919DC8u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919DD8u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919DE4u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919DF8u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919DFCu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919E1Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919E28u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919E48u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919E60u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919E74u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919E80u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919EA0u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919EB8u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919EC4u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919ED0u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919EE0u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919EECu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919F6Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919F7Cu, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919F94u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919FA8u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919FC4u, &recomp_unit_0277, "recomp_unit_0277");
    runtime.register_function(0x08919FD4u, &recomp_unit_0277, "recomp_unit_0277");
}
} // namespace psprecomp
