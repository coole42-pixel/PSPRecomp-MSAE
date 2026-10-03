#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0529[1022] = {
    1, 0, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 6, 7, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0,
    0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0,
    0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0,
    0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 31, 0,
    0, 0, 0, 32, 33, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 36, 37, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 40, 41, 0,
    0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 44, 45, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 48, 49, 0, 0, 0, 0, 0, 50, 0,
    51, 0, 0, 0, 0, 52, 53, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0,
    0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 65,
    0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 73, 0,
    0, 74, 0, 0, 0, 75, 0, 76, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 79, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 94, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 104, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0,
    0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 115,
    0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 126, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    133, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0,
    0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 151, 0, 0, 152, 0, 153, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156,
    157, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163,
    164, 0, 165, 0, 0, 166, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169,
};
void recomp_unit_0529_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A15000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0529[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A15000;
    case 2u: goto L_08A1500C;
    case 3u: goto L_08A1501C;
    case 4u: goto L_08A15028;
    case 5u: goto L_08A15030;
    case 6u: goto L_08A15038;
    case 7u: goto L_08A1503C;
    case 8u: goto L_08A15048;
    case 9u: goto L_08A1505C;
    case 10u: goto L_08A15070;
    case 11u: goto L_08A15084;
    case 12u: goto L_08A15098;
    case 13u: goto L_08A150B0;
    case 14u: goto L_08A150B8;
    case 15u: goto L_08A150D0;
    case 16u: goto L_08A150E4;
    case 17u: goto L_08A150F8;
    case 18u: goto L_08A1510C;
    case 19u: goto L_08A15118;
    case 20u: goto L_08A15128;
    case 21u: goto L_08A15138;
    case 22u: goto L_08A15148;
    case 23u: goto L_08A15160;
    case 24u: goto L_08A15174;
    case 25u: goto L_08A15188;
    case 26u: goto L_08A1519C;
    case 27u: goto L_08A151B0;
    case 28u: goto L_08A151C4;
    case 29u: goto L_08A151D8;
    case 30u: goto L_08A151EC;
    case 31u: goto L_08A151F8;
    case 32u: goto L_08A1520C;
    case 33u: goto L_08A15210;
    case 34u: goto L_08A15224;
    case 35u: goto L_08A1522C;
    case 36u: goto L_08A15240;
    case 37u: goto L_08A15244;
    case 38u: goto L_08A15258;
    case 39u: goto L_08A15260;
    case 40u: goto L_08A15274;
    case 41u: goto L_08A15278;
    case 42u: goto L_08A1528C;
    case 43u: goto L_08A15294;
    case 44u: goto L_08A152A8;
    case 45u: goto L_08A152AC;
    case 46u: goto L_08A152C0;
    case 47u: goto L_08A152C8;
    case 48u: goto L_08A152DC;
    case 49u: goto L_08A152E0;
    case 50u: goto L_08A152F8;
    case 51u: goto L_08A15300;
    case 52u: goto L_08A15314;
    case 53u: goto L_08A15318;
    case 54u: goto L_08A15328;
    case 55u: goto L_08A1533C;
    case 56u: goto L_08A15350;
    case 57u: goto L_08A15364;
    case 58u: goto L_08A15378;
    case 59u: goto L_08A1538C;
    case 60u: goto L_08A153A0;
    case 61u: goto L_08A153B4;
    case 62u: goto L_08A153C8;
    case 63u: goto L_08A153DC;
    case 64u: goto L_08A153E4;
    case 65u: goto L_08A153FC;
    case 66u: goto L_08A15410;
    case 67u: goto L_08A15424;
    case 68u: goto L_08A15438;
    case 69u: goto L_08A1544C;
    case 70u: goto L_08A15460;
    case 71u: goto L_08A15468;
    case 72u: goto L_08A15470;
    case 73u: goto L_08A15478;
    case 74u: goto L_08A15484;
    case 75u: goto L_08A15494;
    case 76u: goto L_08A1549C;
    case 77u: goto L_08A154A8;
    case 78u: goto L_08A154BC;
    case 79u: goto L_08A154C8;
    case 80u: goto L_08A154CC;
    case 81u: goto L_08A15500;
    case 82u: goto L_08A15550;
    case 83u: goto L_08A15558;
    case 84u: goto L_08A15564;
    case 85u: goto L_08A15570;
    case 86u: goto L_08A15590;
    case 87u: goto L_08A155A4;
    case 88u: goto L_08A155AC;
    case 89u: goto L_08A15640;
    case 90u: goto L_08A15648;
    case 91u: goto L_08A1564C;
    case 92u: goto L_08A156A0;
    case 93u: goto L_08A156AC;
    case 94u: goto L_08A156B0;
    case 95u: goto L_08A156B4;
    case 96u: goto L_08A15728;
    case 97u: goto L_08A1573C;
    case 98u: goto L_08A1575C;
    case 99u: goto L_08A15780;
    case 100u: goto L_08A1579C;
    case 101u: goto L_08A157F4;
    case 102u: goto L_08A15820;
    case 103u: goto L_08A15828;
    case 104u: goto L_08A15838;
    case 105u: goto L_08A15844;
    case 106u: goto L_08A1584C;
    case 107u: goto L_08A15868;
    case 108u: goto L_08A15884;
    case 109u: goto L_08A15894;
    case 110u: goto L_08A158A0;
    case 111u: goto L_08A158AC;
    case 112u: goto L_08A158B8;
    case 113u: goto L_08A158C0;
    case 114u: goto L_08A158F8;
    case 115u: goto L_08A158FC;
    case 116u: goto L_08A1590C;
    case 117u: goto L_08A15948;
    case 118u: goto L_08A15954;
    case 119u: goto L_08A159B4;
    case 120u: goto L_08A159C8;
    case 121u: goto L_08A159D4;
    case 122u: goto L_08A15A2C;
    case 123u: goto L_08A15A38;
    case 124u: goto L_08A15A5C;
    case 125u: goto L_08A15A64;
    case 126u: goto L_08A15A6C;
    case 127u: goto L_08A15A94;
    case 128u: goto L_08A15AB8;
    case 129u: goto L_08A15AC8;
    case 130u: goto L_08A15ACC;
    case 131u: goto L_08A15B34;
    case 132u: goto L_08A15B48;
    case 133u: goto L_08A15B80;
    case 134u: goto L_08A15B88;
    case 135u: goto L_08A15B94;
    case 136u: goto L_08A15BA0;
    case 137u: goto L_08A15BB4;
    case 138u: goto L_08A15C70;
    case 139u: goto L_08A15C78;
    case 140u: goto L_08A15C84;
    case 141u: goto L_08A15C98;
    case 142u: goto L_08A15CAC;
    case 143u: goto L_08A15CB0;
    case 144u: goto L_08A15CDC;
    case 145u: goto L_08A15CE8;
    case 146u: goto L_08A15CF4;
    case 147u: goto L_08A15D10;
    case 148u: goto L_08A15D4C;
    case 149u: goto L_08A15D68;
    case 150u: goto L_08A15D90;
    case 151u: goto L_08A15D98;
    case 152u: goto L_08A15DA4;
    case 153u: goto L_08A15DAC;
    case 154u: goto L_08A15DB0;
    case 155u: goto L_08A15E60;
    case 156u: goto L_08A15E7C;
    case 157u: goto L_08A15E80;
    case 158u: goto L_08A15E84;
    case 159u: goto L_08A15EF0;
    case 160u: goto L_08A15F38;
    case 161u: goto L_08A15F48;
    case 162u: goto L_08A15F50;
    case 163u: goto L_08A15F7C;
    case 164u: goto L_08A15F80;
    case 165u: goto L_08A15F88;
    case 166u: goto L_08A15F94;
    case 167u: goto L_08A15F9C;
    case 168u: goto L_08A15FB0;
    case 169u: goto L_08A15FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A15000:
    aot_gpr[5] = (aot_gpr[30] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1500Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1500Cu) goto L_08A1500C;
    return;
L_08A1500C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(324)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(328)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) <= 0;
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A15038;
      }
      goto L_08A1501C;
    }
L_08A1501C:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A15030;
      }
      goto L_08A15028;
    }
L_08A15028:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A15030;
      }
      goto L_08A15030;
    }
L_08A15030:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[30]);
      if (branch_taken) {
          goto L_08A1503C;
      }
      goto L_08A15038;
    }
L_08A15038:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[30]);
    goto L_08A1503C;
L_08A1503C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(324), aot_gpr[4]);
    aot_gpr[31] = (0x08A15048u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0528_entry, 528u, 214u, 0x08A14E0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15048u) goto L_08A15048;
    return;
L_08A15048:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(336));
    aot_gpr[31] = (0x08A1505Cu);
    aot_gpr[30] = (aot_gpr[4] + static_cast<std::uint32_t>(-2372));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1505Cu) goto L_08A1505C;
    return;
L_08A1505C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A15070u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A15070u) goto L_08A15070;
    return;
L_08A15070:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(340));
    aot_gpr[31] = (0x08A15084u);
    aot_gpr[30] = (aot_gpr[4] + static_cast<std::uint32_t>(-2360));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A15084u) goto L_08A15084;
    return;
L_08A15084:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A15098u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A15098u) goto L_08A15098;
    return;
L_08A15098:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(340)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(336)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A150B8;
      }
      goto L_08A150B0;
    }
L_08A150B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A150B8;
      }
      goto L_08A150B8;
    }
L_08A150B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(332), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(516));
    aot_gpr[31] = (0x08A150D0u);
    aot_gpr[30] = (aot_gpr[4] + static_cast<std::uint32_t>(-2344));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A150D0u) goto L_08A150D0;
    return;
L_08A150D0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A150E4u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A150E4u) goto L_08A150E4;
    return;
L_08A150E4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(512));
    aot_gpr[31] = (0x08A150F8u);
    aot_gpr[30] = (aot_gpr[4] + static_cast<std::uint32_t>(-2324));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A150F8u) goto L_08A150F8;
    return;
L_08A150F8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1510Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1510Cu) goto L_08A1510C;
    return;
L_08A1510C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08A15118u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-2308));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A15118u) goto L_08A15118;
    return;
L_08A15118:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A15128u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A15128u) goto L_08A15128;
    return;
L_08A15128:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(112), aot_gpr[2]);
    aot_gpr[31] = (0x08A15138u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-2556));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A15138u) goto L_08A15138;
    return;
L_08A15138:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A15148u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A15148u) goto L_08A15148;
    return;
L_08A15148:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(108), aot_gpr[2]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(364));
    aot_gpr[31] = (0x08A15160u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-2588));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A15160u) goto L_08A15160;
    return;
L_08A15160:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A15174u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A15174u) goto L_08A15174;
    return;
L_08A15174:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(368));
    aot_gpr[31] = (0x08A15188u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-2616));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A15188u) goto L_08A15188;
    return;
L_08A15188:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1519Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1519Cu) goto L_08A1519C;
    return;
L_08A1519C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(432));
    aot_gpr[31] = (0x08A151B0u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-2292));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A151B0u) goto L_08A151B0;
    return;
L_08A151B0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A151C4u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A151C4u) goto L_08A151C4;
    return;
L_08A151C4:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(436));
    aot_gpr[31] = (0x08A151D8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2276));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 103u, 0x08A0063Cu>(ctx, &aot_mem) && ctx.pc == 0x08A151D8u) goto L_08A151D8;
    return;
L_08A151D8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A151ECu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2264));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A151ECu) goto L_08A151EC;
    return;
L_08A151EC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A15210;
      }
      goto L_08A151F8;
    }
L_08A151F8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A1520Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2628));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A1520Cu) goto L_08A1520C;
    return;
L_08A1520C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A15210;
L_08A15210:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A15224u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2248));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A15224u) goto L_08A15224;
    return;
L_08A15224:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A15244;
      }
      goto L_08A1522C;
    }
L_08A1522C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A15240u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2520));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A15240u) goto L_08A15240;
    return;
L_08A15240:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A15244;
L_08A15244:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08A15258u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2232));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A15258u) goto L_08A15258;
    return;
L_08A15258:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A15278;
      }
      goto L_08A15260;
    }
L_08A15260:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08A15274u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2468));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A15274u) goto L_08A15274;
    return;
L_08A15274:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A15278;
L_08A15278:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08A1528Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2216));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A1528Cu) goto L_08A1528C;
    return;
L_08A1528C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A152AC;
      }
      goto L_08A15294;
    }
L_08A15294:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08A152A8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2488));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A152A8u) goto L_08A152A8;
    return;
L_08A152A8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A152AC;
L_08A152AC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08A152C0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2192));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A152C0u) goto L_08A152C0;
    return;
L_08A152C0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A152E0;
      }
      goto L_08A152C8;
    }
L_08A152C8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08A152DCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2508));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A152DCu) goto L_08A152DC;
    return;
L_08A152DC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A152E0;
L_08A152E0:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A152F8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2168));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A152F8u) goto L_08A152F8;
    return;
L_08A152F8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A15318;
      }
      goto L_08A15300;
    }
L_08A15300:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A15314u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2456));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A15314u) goto L_08A15314;
    return;
L_08A15314:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A15318;
L_08A15318:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(464));
    aot_gpr[31] = (0x08A15328u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-2144));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A15328u) goto L_08A15328;
    return;
L_08A15328:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1533Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1533Cu) goto L_08A1533C;
    return;
L_08A1533C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(468));
    aot_gpr[31] = (0x08A15350u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-2132));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A15350u) goto L_08A15350;
    return;
L_08A15350:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A15364u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A15364u) goto L_08A15364;
    return;
L_08A15364:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(472));
    aot_gpr[31] = (0x08A15378u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2116));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A15378u) goto L_08A15378;
    return;
L_08A15378:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(476));
    aot_gpr[31] = (0x08A1538Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2100));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A1538Cu) goto L_08A1538C;
    return;
L_08A1538C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(488));
    aot_gpr[31] = (0x08A153A0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2084));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A153A0u) goto L_08A153A0;
    return;
L_08A153A0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(492));
    aot_gpr[31] = (0x08A153B4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2056));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A153B4u) goto L_08A153B4;
    return;
L_08A153B4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(480));
    aot_gpr[31] = (0x08A153C8u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-2028));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A153C8u) goto L_08A153C8;
    return;
L_08A153C8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A153DCu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A153DCu) goto L_08A153DC;
    return;
L_08A153DC:
    aot_gpr[31] = (0x08A153E4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0527_entry, 527u, 205u, 0x08A13C68u>(ctx, &aot_mem) && ctx.pc == 0x08A153E4u) goto L_08A153E4;
    return;
L_08A153E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(404), aot_gpr[2]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(508));
    aot_gpr[31] = (0x08A153FCu);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-2016));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A153FCu) goto L_08A153FC;
    return;
L_08A153FC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A15410u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A15410u) goto L_08A15410;
    return;
L_08A15410:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(500));
    aot_gpr[31] = (0x08A15424u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-2000));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A15424u) goto L_08A15424;
    return;
L_08A15424:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A15438u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A15438u) goto L_08A15438;
    return;
L_08A15438:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(504));
    aot_gpr[31] = (0x08A1544Cu);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-1976));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1544Cu) goto L_08A1544C;
    return;
L_08A1544C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A15460u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A15460u) goto L_08A15460;
    return;
L_08A15460:
    aot_gpr[31] = (0x08A15468u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0527_entry, 527u, 206u, 0x08A13C88u>(ctx, &aot_mem) && ctx.pc == 0x08A15468u) goto L_08A15468;
    return;
L_08A15468:
    aot_gpr[31] = (0x08A15470u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0527_entry, 527u, 239u, 0x08A13EACu>(ctx, &aot_mem) && ctx.pc == 0x08A15470u) goto L_08A15470;
    return;
L_08A15470:
    aot_gpr[31] = (0x08A15478u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0527_entry, 527u, 222u, 0x08A13DE4u>(ctx, &aot_mem) && ctx.pc == 0x08A15478u) goto L_08A15478;
    return;
L_08A15478:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(376)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A15494;
      }
      goto L_08A15484;
    }
L_08A15484:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(328)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A1549C;
      }
      goto L_08A15494;
    }
L_08A15494:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(376), 0u);
    aot_gpr[4] = (2215u << 16u);
    goto L_08A1549C;
L_08A1549C:
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(520));
    aot_gpr[31] = (0x08A154A8u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-1948));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A154A8u) goto L_08A154A8;
    return;
L_08A154A8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A154BCu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A154BCu) goto L_08A154BC;
    return;
L_08A154BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(520)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A154CC;
      }
      goto L_08A154C8;
    }
L_08A154C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(524), aot_gpr[4]);
    goto L_08A154CC;
L_08A154CC:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A15500:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-256));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(468)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), aot_gpr[20]);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[20] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(464)));
      if (branch_taken) {
          goto L_08A15648;
      }
      goto L_08A15550;
    }
L_08A15550:
    if (static_cast<std::int32_t>(aot_gpr[5]) <= 0) {
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
        goto L_08A1564C;
    }
    goto L_08A15558;
L_08A15558:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(360)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_08A15570;
      }
      goto L_08A15564;
    }
L_08A15564:
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(496)));
    aot_fpr[22] = aot_fpr[22] + aot_fpr[12];
    goto L_08A15570;
L_08A15570:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(472)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(476)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A15590u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A15590u) goto L_08A15590;
    return;
L_08A15590:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(468)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(464)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(404)));
      if (branch_taken) {
          goto L_08A155AC;
      }
      goto L_08A155A4;
    }
L_08A155A4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(488)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(492)));
    goto L_08A155AC;
L_08A155AC:
    aot_gpr[8] = (aot_gpr[19] + static_cast<std::uint32_t>(20));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[11] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[5]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[9]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[10]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[22];
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    aot_fpr[13] = aot_fpr[15] + aot_fpr[13];
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(88));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(480)));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    jump_target = aot_gpr[10];
    aot_gpr[31] = (0x08A15640u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A15640u) goto L_08A15640;
    return;
L_08A15640:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(468)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(464)));
    goto L_08A15648;
L_08A15648:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    goto L_08A1564C;
L_08A1564C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[12];
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(392)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(396)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(404)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(352)));
      if (branch_taken) {
          goto L_08A156B0;
      }
      goto L_08A156A0;
    }
L_08A156A0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(524)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[8] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A156B4;
      }
      goto L_08A156AC;
    }
L_08A156AC:
    aot_gpr[5] = (0u | 1u);
    goto L_08A156B0;
L_08A156B0:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    goto L_08A156B4;
L_08A156B4:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[20]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(376)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(424)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(416)));
    aot_gpr[2] = (aot_gpr[5] | 0u);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(428)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(420)));
    aot_gpr[5] = (aot_gpr[3] << 5u);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(400)));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[10] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    aot_gpr[6] = (aot_gpr[10] | 0u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[10] = (aot_gpr[13] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    aot_gpr[8] = (aot_gpr[11] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[12] | 0u);
    aot_gpr[11] = (aot_gpr[14] | 0u);
    jump_target = aot_gpr[15];
    aot_gpr[31] = (0x08A15728u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A15728u) goto L_08A15728;
    return;
L_08A15728:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(324)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_08A1590C;
      }
      goto L_08A1573C;
    }
L_08A1573C:
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (16544u << 16u);
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(100));
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[21] = (aot_gpr[19] + static_cast<std::uint32_t>(144));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    goto L_08A1575C;
L_08A1575C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(384)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(352)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[17] << 5u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(324)));
        goto L_08A158FC;
    }
    goto L_08A15780;
L_08A15780:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[20]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(388)));
    aot_gpr[20] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A1579Cu);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 59u, 0x08A0E384u>(ctx, &aot_mem) && ctx.pc == 0x08A1579Cu) goto L_08A1579C;
    return;
L_08A1579C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(388)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(392)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(352)));
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[20]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[30] + aot_gpr[6]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A157F4u);
    aot_gpr[6] = (aot_gpr[9] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A157F4u) goto L_08A157F4;
    return;
L_08A157F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(352)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(464)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[20]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_fpr[15] = aot_fpr[14] + aot_fpr[12];
      if (branch_taken) {
          goto L_08A15838;
      }
      goto L_08A15820;
    }
L_08A15820:
    if (static_cast<std::int32_t>(aot_gpr[4]) < 0) {
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
        goto L_08A15884;
    }
    goto L_08A15828;
L_08A15828:
    aot_fpr[12] = aot_fpr[24] + aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A15894;
      }
      goto L_08A15838;
    }
L_08A15838:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A15868;
      }
      goto L_08A15844;
    }
L_08A15844:
    if (aot_gpr[4] == 0u) {
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
        goto L_08A15884;
    }
    goto L_08A1584C;
L_08A1584C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_fpr[13] = aot_fpr[24] + aot_fpr[13];
    aot_fpr[12] = aot_fpr[15] + aot_fpr[12];
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A15894;
      }
      goto L_08A15868;
    }
L_08A15868:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[15] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A15894;
      }
      goto L_08A15884;
    }
L_08A15884:
    aot_fpr[13] = aot_fpr[14] + aot_fpr[13];
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08A15894;
L_08A15894:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(372)));
    if (aot_gpr[4] != aot_gpr[23]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(408)));
        goto L_08A158C0;
    }
    goto L_08A158A0;
L_08A158A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(376)));
    if (aot_gpr[17] != aot_gpr[4]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(408)));
        goto L_08A158C0;
    }
    goto L_08A158AC;
L_08A158AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(524)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(408)));
        goto L_08A158C0;
    }
    goto L_08A158B8;
L_08A158B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(412)));
      if (branch_taken) {
          goto L_08A158C0;
      }
      goto L_08A158C0;
    }
L_08A158C0:
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(404)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(388)));
    aot_gpr[4] = (aot_gpr[30] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    aot_gpr[9] = (aot_gpr[16] | 0u);
    aot_gpr[11] = (0u | 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08A158F8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[21]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A158F8u) goto L_08A158F8;
    return;
L_08A158F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(324)));
    goto L_08A158FC;
L_08A158FC:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A1575C;
      }
      goto L_08A1590C;
    }
L_08A1590C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(464)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(336)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[18] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08A159C8;
      }
      goto L_08A15948;
    }
L_08A15948:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    goto L_08A15954;
L_08A15954:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(356)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(468)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(344)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(372)));
    aot_gpr[7] = (aot_gpr[18] + aot_gpr[7]);
    aot_gpr[8] = (aot_gpr[7] ^ aot_gpr[5]);
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(104));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[6]);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x08A159B4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A159B4u) goto L_08A159B4;
    return;
L_08A159B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(336)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A15954;
      }
      goto L_08A159C8;
    }
L_08A159C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(360)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
      if (branch_taken) {
          goto L_08A15A2C;
      }
      goto L_08A159D4;
    }
L_08A159D4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(356)));
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-16)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(496)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[9] = (aot_gpr[4] + static_cast<std::uint32_t>(104));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08A15A2Cu);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A15A2Cu) goto L_08A15A2C;
    return;
L_08A15A2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(340)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A15FF4;
      }
      goto L_08A15A38;
    }
L_08A15A38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A15A5Cu);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A15A5Cu) goto L_08A15A5C;
    return;
L_08A15A5C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08A15A6C;
      }
      goto L_08A15A64;
    }
L_08A15A64:
    aot_gpr[31] = (0x08A15A6Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0527_entry, 527u, 134u, 0x08A13748u>(ctx, &aot_mem) && ctx.pc == 0x08A15A6Cu) goto L_08A15A6C;
    return;
L_08A15A6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(448)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(444)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(440)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(332)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(324)));
      if (branch_taken) {
          goto L_08A15CDC;
      }
      goto L_08A15A94;
    }
L_08A15A94:
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1936));
    aot_gpr[6] = (aot_gpr[19] + static_cast<std::uint32_t>(144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[7]);
    aot_gpr[7] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[6]);
    aot_gpr[8] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[8]);
    goto L_08A15AB8;
L_08A15AB8:
    aot_gpr[22] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A15CB0;
      }
      goto L_08A15AC8;
    }
L_08A15AC8:
    aot_gpr[20] = (0u | 0u);
    goto L_08A15ACC;
L_08A15ACC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(384)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(344)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(348)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[16] << 3u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[17] + aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[6]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(352)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[16] << 5u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(432)));
    if (aot_gpr[18] == 0u) {
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
        goto L_08A15B34;
    }
    goto L_08A15B34;
L_08A15B34:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A15B48u);
    aot_gpr[6] = (aot_gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 59u, 0x08A0E384u>(ctx, &aot_mem) && ctx.pc == 0x08A15B48u) goto L_08A15B48;
    return;
L_08A15B48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(344)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(348)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[11] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[2] | 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(352)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[16]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(432)));
      if (branch_taken) {
          goto L_08A15B88;
      }
      goto L_08A15B80;
    }
L_08A15B80:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_08A15B88;
      }
      goto L_08A15B88;
    }
L_08A15B88:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[13] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A15BB4;
      }
      goto L_08A15B94;
    }
L_08A15B94:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(524)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[13] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A15BB4;
      }
      goto L_08A15BA0;
    }
L_08A15BA0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(460)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(456)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(452)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[6]);
    aot_gpr[13] = (aot_gpr[5] | 0u);
    goto L_08A15BB4;
L_08A15BB4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(464)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(356)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(468)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[11] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[8] + static_cast<std::uint32_t>(112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[2] + aot_gpr[20]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[12] = (aot_gpr[10] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    aot_gpr[7] = (aot_gpr[30] | 0u);
    aot_gpr[9] = (aot_gpr[23] | 0u);
    aot_gpr[10] = (aot_gpr[16] | 0u);
    aot_gpr[11] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[14];
    aot_gpr[31] = (0x08A15C70u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[13]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A15C70u) goto L_08A15C70;
    return;
L_08A15C70:
    if (aot_gpr[16] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(324)));
        goto L_08A15C98;
    }
    goto L_08A15C78;
L_08A15C78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(524)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(324)));
        goto L_08A15C98;
    }
    goto L_08A15C84;
L_08A15C84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(448)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(444)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(440)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(324)));
    goto L_08A15C98;
L_08A15C98:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A15ACC;
      }
      goto L_08A15CAC;
    }
L_08A15CAC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(332)));
    goto L_08A15CB0;
L_08A15CB0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[6]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[7]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[8]);
      if (branch_taken) {
          goto L_08A15AB8;
      }
      goto L_08A15CDC;
    }
L_08A15CDC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(360)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08A15E80;
      }
      goto L_08A15CE8;
    }
L_08A15CE8:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[6] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(468)));
        goto L_08A15E84;
    }
    goto L_08A15CF4;
L_08A15CF4:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(144));
    aot_gpr[30] = (2215u << 16u);
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(132));
    aot_gpr[21] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[4]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-1936));
    goto L_08A15D10;
L_08A15D10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(384)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[16] << 3u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(352)));
    aot_gpr[16] = (aot_gpr[16] << 5u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[16]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(432)));
    if (aot_gpr[17] == 0u) {
    aot_gpr[17] = (aot_gpr[30] | 0u);
        goto L_08A15D4C;
    }
    goto L_08A15D4C;
L_08A15D4C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[23]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[23] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A15D68u);
    aot_gpr[6] = (aot_gpr[12] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 59u, 0x08A0E384u>(ctx, &aot_mem) && ctx.pc == 0x08A15D68u) goto L_08A15D68;
    return;
L_08A15D68:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(360)));
    aot_gpr[3] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(352)));
    aot_gpr[13] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[23]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = aot_gpr[13] == 0u;
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
      if (branch_taken) {
          goto L_08A15D98;
      }
      goto L_08A15D90;
    }
L_08A15D90:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(464)));
      if (branch_taken) {
          goto L_08A15DB0;
      }
      goto L_08A15D98;
    }
L_08A15D98:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A15DAC;
      }
      goto L_08A15DA4;
    }
L_08A15DA4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_08A15DAC;
      }
      goto L_08A15DAC;
    }
L_08A15DAC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(464)));
    goto L_08A15DB0;
L_08A15DB0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(36)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(468)));
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(496)));
    aot_fpr[14] = aot_fpr[15] + aot_fpr[14];
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(448)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(444)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[16];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[17];
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[10] + static_cast<std::uint32_t>(112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[18]);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[12]);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[11] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[14];
    aot_gpr[31] = (0x08A15E60u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[13]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A15E60u) goto L_08A15E60;
    return;
L_08A15E60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(324)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(32));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(360)));
      if (branch_taken) {
          goto L_08A15D10;
      }
      goto L_08A15E7C;
    }
L_08A15E7C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(332)));
    goto L_08A15E80;
L_08A15E80:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(468)));
    goto L_08A15E84;
L_08A15E84:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(464)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[6]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(36)));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = aot_fpr[15] + aot_fpr[13];
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(328)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(340)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(508)));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(504)));
      if (branch_taken) {
          goto L_08A15F38;
      }
      goto L_08A15EF0;
    }
L_08A15EF0:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(380)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(384)));
    aot_gpr[2] = (aot_gpr[10] << 2u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[10]);
    aot_gpr[10] = (aot_gpr[11] + aot_gpr[2]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[10]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    aot_fpr[19] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = aot_fpr[16] - aot_fpr[14];
    aot_fpr[14] = aot_fpr[14] / aot_fpr[15];
    aot_fpr[19] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[19])));
    aot_fpr[15] = aot_fpr[19] / aot_fpr[15];
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A15F48;
      }
      goto L_08A15F38;
    }
L_08A15F38:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    goto L_08A15F48;
L_08A15F48:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08A15F7C;
      }
      goto L_08A15F50;
    }
L_08A15F50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(344)));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    aot_fpr[19] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[20] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[19])));
    aot_fpr[20] = aot_fpr[20] / aot_fpr[16];
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[0] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[0])));
    aot_fpr[16] = aot_fpr[0] / aot_fpr[16];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A15F80;
      }
      goto L_08A15F7C;
    }
L_08A15F7C:
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    goto L_08A15F80;
L_08A15F80:
    if (aot_gpr[8] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
        goto L_08A15F94;
    }
    goto L_08A15F88;
L_08A15F88:
    aot_gpr[8] = (aot_gpr[19] + static_cast<std::uint32_t>(144));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(508), aot_gpr[8]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    goto L_08A15F94;
L_08A15F94:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A15FB0;
      }
      goto L_08A15F9C;
    }
L_08A15F9C:
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(496)));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[19] = aot_fpr[19] + aot_fpr[0];
    aot_fpr[12] = aot_fpr[19] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08A15FB0;
L_08A15FB0:
    aot_fpr[19] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(120));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(60));
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    aot_gpr[7] = (aot_gpr[8] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    jump_target = aot_gpr[10];
    aot_gpr[31] = (0x08A15FF4u);
    aot_fpr[18] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A15FF4u) goto L_08A15FF4;
    return;
L_08A15FF4:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.pc = 0x08A16000u; return;
}

void recomp_unit_0529(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0529_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_529(Runtime &runtime) {
    runtime.register_generated_unit(529u, 0x08A15000u, 4096u, &recomp_unit_0529, &recomp_unit_0529_entry);
    runtime.register_function(0x08A15000u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A1500Cu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A1501Cu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15028u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15030u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15038u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A1503Cu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15048u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A1505Cu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15070u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15084u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15098u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A150B0u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A150B8u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A150D0u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A150E4u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A150F8u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A1510Cu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15118u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15128u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15138u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15148u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15160u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15174u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15188u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A1519Cu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A151B0u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A151C4u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A151D8u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A151ECu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A151F8u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A1520Cu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15210u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15224u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A1522Cu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15240u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15244u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15258u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15260u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15274u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15278u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A1528Cu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15294u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A152A8u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A152ACu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A152C0u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A152C8u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A152DCu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A152E0u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A152F8u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15300u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15314u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15318u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15328u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A1533Cu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15350u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15364u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15378u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A1538Cu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A153A0u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A153B4u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A153C8u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A153DCu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A153E4u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A153FCu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15410u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15424u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15438u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A1544Cu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15460u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15468u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15470u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15478u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15484u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15494u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A1549Cu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A154A8u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A154BCu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A154C8u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A154CCu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15500u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15550u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15558u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15564u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15570u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15590u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A155A4u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A155ACu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15640u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15648u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A1564Cu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A156A0u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A156ACu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A156B0u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A156B4u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15728u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A1573Cu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A1575Cu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15780u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A1579Cu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A157F4u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15820u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15828u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15838u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15844u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A1584Cu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15868u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15884u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15894u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A158A0u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A158ACu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A158B8u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A158C0u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A158F8u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A158FCu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A1590Cu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15948u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15954u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A159B4u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A159C8u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A159D4u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15A2Cu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15A38u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15A5Cu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15A64u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15A6Cu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15A94u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15AB8u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15AC8u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15ACCu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15B34u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15B48u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15B80u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15B88u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15B94u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15BA0u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15BB4u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15C70u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15C78u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15C84u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15C98u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15CACu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15CB0u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15CDCu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15CE8u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15CF4u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15D10u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15D4Cu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15D68u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15D90u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15D98u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15DA4u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15DACu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15DB0u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15E60u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15E7Cu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15E80u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15E84u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15EF0u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15F38u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15F48u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15F50u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15F7Cu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15F80u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15F88u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15F94u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15F9Cu, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15FB0u, &recomp_unit_0529, "recomp_unit_0529");
    runtime.register_function(0x08A15FF4u, &recomp_unit_0529, "recomp_unit_0529");
}
} // namespace psprecomp
