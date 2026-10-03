#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0050[1023] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 8,
    0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 20,
    0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0,
    0, 33, 0, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 38, 0, 39, 0, 40, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0,
    0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0,
    0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 73, 0, 74, 0, 75, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0,
    0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0,
    0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98,
    0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0,
    0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0,
    0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0, 112, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 115, 116, 0, 0, 0, 117, 118,
    0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0,
    0, 127, 0, 128, 0, 129, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0,
    0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 140, 0, 141, 0, 142, 0, 0, 0, 0, 0,
    0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0,
    0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0,
    0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181,
};
void recomp_unit_0050_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08836004u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0050[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08836004;
    case 2u: goto L_0883601C;
    case 3u: goto L_08836024;
    case 4u: goto L_08836038;
    case 5u: goto L_08836044;
    case 6u: goto L_0883605C;
    case 7u: goto L_08836068;
    case 8u: goto L_08836080;
    case 9u: goto L_08836088;
    case 10u: goto L_08836094;
    case 11u: goto L_088360AC;
    case 12u: goto L_088360B8;
    case 13u: goto L_088360D0;
    case 14u: goto L_08836104;
    case 15u: goto L_0883610C;
    case 16u: goto L_08836114;
    case 17u: goto L_0883614C;
    case 18u: goto L_08836168;
    case 19u: goto L_08836174;
    case 20u: goto L_08836180;
    case 21u: goto L_08836198;
    case 22u: goto L_088361B8;
    case 23u: goto L_088361C0;
    case 24u: goto L_088361F0;
    case 25u: goto L_08836200;
    case 26u: goto L_0883622C;
    case 27u: goto L_08836248;
    case 28u: goto L_08836258;
    case 29u: goto L_08836260;
    case 30u: goto L_08836274;
    case 31u: goto L_08836294;
    case 32u: goto L_088362EC;
    case 33u: goto L_08836308;
    case 34u: goto L_08836318;
    case 35u: goto L_08836324;
    case 36u: goto L_08836330;
    case 37u: goto L_0883633C;
    case 38u: goto L_08836344;
    case 39u: goto L_0883634C;
    case 40u: goto L_08836354;
    case 41u: goto L_08836364;
    case 42u: goto L_08836370;
    case 43u: goto L_08836388;
    case 44u: goto L_088363AC;
    case 45u: goto L_088363D0;
    case 46u: goto L_088363D8;
    case 47u: goto L_088363F0;
    case 48u: goto L_0883642C;
    case 49u: goto L_08836434;
    case 50u: goto L_0883647C;
    case 51u: goto L_0883649C;
    case 52u: goto L_088364B4;
    case 53u: goto L_088364C0;
    case 54u: goto L_08836518;
    case 55u: goto L_08836550;
    case 56u: goto L_08836568;
    case 57u: goto L_08836598;
    case 58u: goto L_088365B4;
    case 59u: goto L_088365E0;
    case 60u: goto L_08836610;
    case 61u: goto L_08836634;
    case 62u: goto L_0883663C;
    case 63u: goto L_08836658;
    case 64u: goto L_08836690;
    case 65u: goto L_08836698;
    case 66u: goto L_088366B8;
    case 67u: goto L_088366C8;
    case 68u: goto L_088366D8;
    case 69u: goto L_088366F4;
    case 70u: goto L_08836710;
    case 71u: goto L_0883671C;
    case 72u: goto L_08836728;
    case 73u: goto L_08836730;
    case 74u: goto L_08836738;
    case 75u: goto L_08836740;
    case 76u: goto L_08836750;
    case 77u: goto L_08836758;
    case 78u: goto L_08836770;
    case 79u: goto L_08836794;
    case 80u: goto L_088367A4;
    case 81u: goto L_088367C8;
    case 82u: goto L_088367D4;
    case 83u: goto L_088367EC;
    case 84u: goto L_088367F4;
    case 85u: goto L_08836808;
    case 86u: goto L_08836814;
    case 87u: goto L_0883682C;
    case 88u: goto L_08836838;
    case 89u: goto L_08836850;
    case 90u: goto L_08836858;
    case 91u: goto L_08836864;
    case 92u: goto L_0883687C;
    case 93u: goto L_08836888;
    case 94u: goto L_088368A0;
    case 95u: goto L_088368C4;
    case 96u: goto L_088368CC;
    case 97u: goto L_088368D4;
    case 98u: goto L_08836900;
    case 99u: goto L_0883691C;
    case 100u: goto L_08836928;
    case 101u: goto L_08836940;
    case 102u: goto L_08836960;
    case 103u: goto L_08836978;
    case 104u: goto L_0883699C;
    case 105u: goto L_088369A4;
    case 106u: goto L_088369DC;
    case 107u: goto L_088369EC;
    case 108u: goto L_08836A10;
    case 109u: goto L_08836A20;
    case 110u: goto L_08836A2C;
    case 111u: goto L_08836A34;
    case 112u: goto L_08836A3C;
    case 113u: goto L_08836A44;
    case 114u: goto L_08836A54;
    case 115u: goto L_08836A68;
    case 116u: goto L_08836A6C;
    case 117u: goto L_08836A7C;
    case 118u: goto L_08836A80;
    case 119u: goto L_08836A8C;
    case 120u: goto L_08836AA4;
    case 121u: goto L_08836AB4;
    case 122u: goto L_08836AC0;
    case 123u: goto L_08836AD0;
    case 124u: goto L_08836AE0;
    case 125u: goto L_08836AEC;
    case 126u: goto L_08836AFC;
    case 127u: goto L_08836B08;
    case 128u: goto L_08836B10;
    case 129u: goto L_08836B18;
    case 130u: goto L_08836B20;
    case 131u: goto L_08836B28;
    case 132u: goto L_08836B44;
    case 133u: goto L_08836B50;
    case 134u: goto L_08836B68;
    case 135u: goto L_08836B88;
    case 136u: goto L_08836BA0;
    case 137u: goto L_08836BAC;
    case 138u: goto L_08836BC8;
    case 139u: goto L_08836BD0;
    case 140u: goto L_08836BDC;
    case 141u: goto L_08836BE4;
    case 142u: goto L_08836BEC;
    case 143u: goto L_08836C08;
    case 144u: goto L_08836C10;
    case 145u: goto L_08836C2C;
    case 146u: goto L_08836C38;
    case 147u: goto L_08836C4C;
    case 148u: goto L_08836C64;
    case 149u: goto L_08836C6C;
    case 150u: goto L_08836C94;
    case 151u: goto L_08836CB8;
    case 152u: goto L_08836CDC;
    case 153u: goto L_08836CF8;
    case 154u: goto L_08836D0C;
    case 155u: goto L_08836D18;
    case 156u: goto L_08836D30;
    case 157u: goto L_08836D50;
    case 158u: goto L_08836D78;
    case 159u: goto L_08836D94;
    case 160u: goto L_08836DB8;
    case 161u: goto L_08836DD4;
    case 162u: goto L_08836DF8;
    case 163u: goto L_08836E14;
    case 164u: goto L_08836E34;
    case 165u: goto L_08836E40;
    case 166u: goto L_08836E4C;
    case 167u: goto L_08836E70;
    case 168u: goto L_08836E94;
    case 169u: goto L_08836EB0;
    case 170u: goto L_08836EC4;
    case 171u: goto L_08836ED0;
    case 172u: goto L_08836EE8;
    case 173u: goto L_08836F08;
    case 174u: goto L_08836F30;
    case 175u: goto L_08836F4C;
    case 176u: goto L_08836F70;
    case 177u: goto L_08836F8C;
    case 178u: goto L_08836FB0;
    case 179u: goto L_08836FCC;
    case 180u: goto L_08836FEC;
    case 181u: goto L_08836FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08836004:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 100u);
    aot_gpr[31] = (0x0883601Cu);
    aot_gpr[7] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x0883601Cu) goto L_0883601C;
    return;
L_0883601C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088360D0;
      }
      goto L_08836024;
    }
L_08836024:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836088;
      }
      goto L_08836038;
    }
L_08836038:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x08836044u);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x08836044u) goto L_08836044;
    return;
L_08836044:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 100u);
    aot_gpr[31] = (0x0883605Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x0883605Cu) goto L_0883605C;
    return;
L_0883605C:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x08836068u);
    aot_gpr[5] = (0u | 57u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x08836068u) goto L_08836068;
    return;
L_08836068:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08836080u);
    aot_gpr[7] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x08836080u) goto L_08836080;
    return;
L_08836080:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088360D0;
      }
      goto L_08836088;
    }
L_08836088:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x08836094u);
    aot_gpr[5] = (0u | 52u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x08836094u) goto L_08836094;
    return;
L_08836094:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 100u);
    aot_gpr[31] = (0x088360ACu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x088360ACu) goto L_088360AC;
    return;
L_088360AC:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x088360B8u);
    aot_gpr[5] = (0u | 53u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x088360B8u) goto L_088360B8;
    return;
L_088360B8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088360D0u);
    aot_gpr[7] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x088360D0u) goto L_088360D0;
    return;
L_088360D0:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
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
L_08836104:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883610C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08836114:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(53)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0883614Cu);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 169u, 0x08835CACu>(ctx, &aot_mem) && ctx.pc == 0x0883614Cu) goto L_0883614C;
    return;
L_0883614C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9648));
    aot_gpr[31] = (0x08836168u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9572));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836168u) goto L_08836168;
    return;
L_08836168:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x08836174u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08836174u) goto L_08836174;
    return;
L_08836174:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (0x08836180u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 173u, 0x08835D24u>(ctx, &aot_mem) && ctx.pc == 0x08836180u) goto L_08836180;
    return;
L_08836180:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08836198:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23672), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088361B8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088361C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-9464));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088361F0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9444));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088361F0u) goto L_088361F0;
    return;
L_088361F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08836200u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08836200u) goto L_08836200;
    return;
L_08836200:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (49152u << 16u);
    aot_gpr[6] = (aot_gpr[4] & aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[5] = (aot_gpr[6] ^ aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836258;
      }
      goto L_0883622C;
    }
L_0883622C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x08836248u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 83u, 0x088DA534u>(ctx, &aot_mem) && ctx.pc == 0x08836248u) goto L_08836248;
    return;
L_08836248:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2197), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_08836260;
      }
      goto L_08836258;
    }
L_08836258:
    aot_gpr[31] = (0x08836260u);
    // nop
    goto L_088368D4;
L_08836260:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08836274:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23680), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08836294:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_gpr[21] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2148)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2194), static_cast<std::uint8_t>(0u));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-9424));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x088362ECu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9404));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088362ECu) goto L_088362EC;
    return;
L_088362EC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9388));
    aot_gpr[31] = (0x08836308u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9372));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836308u) goto L_08836308;
    return;
L_08836308:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08836318u);
    aot_gpr[5] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08836318u) goto L_08836318;
    return;
L_08836318:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836344;
      }
      goto L_08836324;
    }
L_08836324:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x08836330u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08836330u) goto L_08836330;
    return;
L_08836330:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0883633Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 34u, 0x088DA258u>(ctx, &aot_mem) && ctx.pc == 0x0883633Cu) goto L_0883633C;
    return;
L_0883633C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(4))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_08836344;
L_08836344:
    aot_gpr[31] = (0x0883634Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0883634Cu) goto L_0883634C;
    return;
L_0883634C:
    aot_gpr[31] = (0x08836354u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 136u, 0x0885A864u>(ctx, &aot_mem) && ctx.pc == 0x08836354u) goto L_08836354;
    return;
L_08836354:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x08836364u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08836364u) goto L_08836364;
    return;
L_08836364:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08836370u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 34u, 0x088DA258u>(ctx, &aot_mem) && ctx.pc == 0x08836370u) goto L_08836370;
    return;
L_08836370:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08836388u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9356));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836388u) goto L_08836388;
    return;
L_08836388:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2148)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[31] = (0x088363ACu);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(1430))))));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x088363ACu) goto L_088363AC;
    return;
L_088363AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2148)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(1424))))));
    aot_gpr[31] = (0x088363D0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x088363D0u) goto L_088363D0;
    return;
L_088363D0:
    aot_gpr[31] = (0x088363D8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088363D8u) goto L_088363D8;
    return;
L_088363D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[31] = (0x088363F0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088363F0u) goto L_088363F0;
    return;
L_088363F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(812)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883642C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08836434:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9388));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    aot_gpr[31] = (0x0883647Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9372));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883647Cu) goto L_0883647C;
    return;
L_0883647C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(-9424));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883649Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9356));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883649Cu) goto L_0883649C;
    return;
L_0883649C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088364B4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9336));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088364B4u) goto L_088364B4;
    return;
L_088364B4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088364C0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088364C0u) goto L_088364C0;
    return;
L_088364C0:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2224), aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2216));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<0u>(aot_fpr[12]));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<0u>(aot_fpr[14]));
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08836518u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 61u, 0x0888C31Cu>(ctx, &aot_mem) && ctx.pc == 0x08836518u) goto L_08836518;
    return;
L_08836518:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (16281u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x08836550u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 76u, 0x08834694u>(ctx, &aot_mem) && ctx.pc == 0x08836550u) goto L_08836550;
    return;
L_08836550:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_fpr[24] = __builtin_bit_cast(float, 0u);
    aot_gpr[18] = (aot_gpr[4] & 255u);
    aot_gpr[31] = (0x08836568u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 91u, 0x0888C524u>(ctx, &aot_mem) && ctx.pc == 0x08836568u) goto L_08836568;
    return;
L_08836568:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[2]);
    aot_gpr[8] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08836598u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 85u, 0x088347A4u>(ctx, &aot_mem) && ctx.pc == 0x08836598u) goto L_08836598;
    return;
L_08836598:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9324));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088365B4u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 82u, 0x08835528u>(ctx, &aot_mem) && ctx.pc == 0x088365B4u) goto L_088365B4;
    return;
L_088365B4:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088365E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08836610u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2232)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 154u, 0x088C5AB8u>(ctx, &aot_mem) && ctx.pc == 0x08836610u) goto L_08836610;
    return;
L_08836610:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2148)));
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08836634u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 233u, 0x088D8F9Cu>(ctx, &aot_mem) && ctx.pc == 0x08836634u) goto L_08836634;
    return;
L_08836634:
    aot_gpr[31] = (0x0883663Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2232)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 158u, 0x088C5AF8u>(ctx, &aot_mem) && ctx.pc == 0x0883663Cu) goto L_0883663C;
    return;
L_0883663C:
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
L_08836658:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2228)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(156)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836730;
      }
      goto L_08836690;
    }
L_08836690:
    aot_gpr[31] = (0x08836698u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08836434;
L_08836698:
    aot_gpr[19] = (2214u << 16u);
    aot_gpr[20] = (2218u << 16u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-9388));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088366B8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9372));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088366B8u) goto L_088366B8;
    return;
L_088366B8:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088366C8u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088366C8u) goto L_088366C8;
    return;
L_088366C8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x088366D8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 25u, 0x088DA1D8u>(ctx, &aot_mem) && ctx.pc == 0x088366D8u) goto L_088366D8;
    return;
L_088366D8:
    aot_gpr[5] = (16204u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (16128u << 16u);
    aot_gpr[31] = (0x088366F4u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 100u, 0x0885A63Cu>(ctx, &aot_mem) && ctx.pc == 0x088366F4u) goto L_088366F4;
    return;
L_088366F4:
    aot_gpr[18] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-9424));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08836710u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9356));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836710u) goto L_08836710;
    return;
L_08836710:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883671Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0883671Cu) goto L_0883671C;
    return;
L_0883671C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08836738;
      }
      goto L_08836728;
    }
L_08836728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836750;
      }
      goto L_08836730;
    }
L_08836730:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088368A0;
      }
      goto L_08836738;
    }
L_08836738:
    aot_gpr[31] = (0x08836740u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08836740u) goto L_08836740;
    return;
L_08836740:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08836750u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_088365E0;
L_08836750:
    aot_gpr[31] = (0x08836758u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08836758u) goto L_08836758;
    return;
L_08836758:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08836770u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9404));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836770u) goto L_08836770;
    return;
L_08836770:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088368A0;
      }
      goto L_08836794;
    }
L_08836794:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088367A4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088367A4u) goto L_088367A4;
    return;
L_088367A4:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (16256u << 16u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[6]);
      if (branch_taken) {
          goto L_088367F4;
      }
      goto L_088367C8;
    }
L_088367C8:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x088367D4u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x088367D4u) goto L_088367D4;
    return;
L_088367D4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 100u);
    aot_gpr[31] = (0x088367ECu);
    aot_gpr[7] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x088367ECu) goto L_088367EC;
    return;
L_088367EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088368A0;
      }
      goto L_088367F4;
    }
L_088367F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836858;
      }
      goto L_08836808;
    }
L_08836808:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x08836814u);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x08836814u) goto L_08836814;
    return;
L_08836814:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 100u);
    aot_gpr[31] = (0x0883682Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x0883682Cu) goto L_0883682C;
    return;
L_0883682C:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x08836838u);
    aot_gpr[5] = (0u | 57u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x08836838u) goto L_08836838;
    return;
L_08836838:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08836850u);
    aot_gpr[7] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x08836850u) goto L_08836850;
    return;
L_08836850:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088368A0;
      }
      goto L_08836858;
    }
L_08836858:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x08836864u);
    aot_gpr[5] = (0u | 52u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x08836864u) goto L_08836864;
    return;
L_08836864:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 100u);
    aot_gpr[31] = (0x0883687Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x0883687Cu) goto L_0883687C;
    return;
L_0883687C:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x08836888u);
    aot_gpr[5] = (0u | 53u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x08836888u) goto L_08836888;
    return;
L_08836888:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088368A0u);
    aot_gpr[7] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x088368A0u) goto L_088368A0;
    return;
L_088368A0:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
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
L_088368C4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088368CC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088368D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08836900u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088365E0;
L_08836900:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9424));
    aot_gpr[31] = (0x0883691Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9356));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883691Cu) goto L_0883691C;
    return;
L_0883691C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x08836928u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08836928u) goto L_08836928;
    return;
L_08836928:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08836940:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23688), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08836960:
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(2148)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1944)));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    goto L_08836978;
L_08836978:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(2148)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[5]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(1948)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08836978;
      }
      goto L_0883699C;
    }
L_0883699C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088369A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(-9296));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088369DCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9276));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088369DCu) goto L_088369DC;
    return;
L_088369DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088369ECu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x088369ECu) goto L_088369EC;
    return;
L_088369EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[6] = (16384u << 16u);
    aot_gpr[6] = (aot_gpr[4] ^ aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08836A8C;
      }
      goto L_08836A10;
    }
L_08836A10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
      if (branch_taken) {
          goto L_08836A3C;
      }
      goto L_08836A20;
    }
L_08836A20:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x08836A2Cu);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 205u, 0x088DAD24u>(ctx, &aot_mem) && ctx.pc == 0x08836A2Cu) goto L_08836A2C;
    return;
L_08836A2C:
    aot_gpr[31] = (0x08836A34u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 118u, 0x088D9898u>(ctx, &aot_mem) && ctx.pc == 0x08836A34u) goto L_08836A34;
    return;
L_08836A34:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
      if (branch_taken) {
          goto L_08836A80;
      }
      goto L_08836A3C;
    }
L_08836A3C:
    aot_gpr[31] = (0x08836A44u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 145u, 0x088DA944u>(ctx, &aot_mem) && ctx.pc == 0x08836A44u) goto L_08836A44;
    return;
L_08836A44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08836A54u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 108u, 0x088D97B4u>(ctx, &aot_mem) && ctx.pc == 0x08836A54u) goto L_08836A54;
    return;
L_08836A54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
      if (branch_taken) {
          goto L_08836A6C;
      }
      goto L_08836A68;
    }
L_08836A68:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    goto L_08836A6C;
L_08836A6C:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x08836A7Cu);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 27u, 0x088DB31Cu>(ctx, &aot_mem) && ctx.pc == 0x08836A7Cu) goto L_08836A7C;
    return;
L_08836A7C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    goto L_08836A80;
L_08836A80:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(2197), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08836B50;
      }
      goto L_08836A8C;
    }
L_08836A8C:
    aot_gpr[6] = (32768u << 16u);
    aot_gpr[6] = (aot_gpr[4] ^ aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
      if (branch_taken) {
          goto L_08836B50;
      }
      goto L_08836AA4;
    }
L_08836AA4:
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836B50;
      }
      goto L_08836AB4;
    }
L_08836AB4:
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[31] = (0x08836AC0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 136u, 0x088D99DCu>(ctx, &aot_mem) && ctx.pc == 0x08836AC0u) goto L_08836AC0;
    return;
L_08836AC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08836AFC;
      }
      goto L_08836AD0;
    }
L_08836AD0:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(36))))));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08836B50;
      }
      goto L_08836AE0;
    }
L_08836AE0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08836AECu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 67u, 0x0883848Cu>(ctx, &aot_mem) && ctx.pc == 0x08836AECu) goto L_08836AEC;
    return;
L_08836AEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1944), aot_gpr[4]);
      if (branch_taken) {
          goto L_08836B50;
      }
      goto L_08836AFC;
    }
L_08836AFC:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836B18;
      }
      goto L_08836B08;
    }
L_08836B08:
    aot_gpr[31] = (0x08836B10u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 74u, 0x08838560u>(ctx, &aot_mem) && ctx.pc == 0x08836B10u) goto L_08836B10;
    return;
L_08836B10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836B50;
      }
      goto L_08836B18;
    }
L_08836B18:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836B50;
      }
      goto L_08836B20;
    }
L_08836B20:
    aot_gpr[31] = (0x08836B28u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x08836B28u) goto L_08836B28;
    return;
L_08836B28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(204)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(23)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836B50;
      }
      goto L_08836B44;
    }
L_08836B44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x08836B50u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 95u, 0x088DB8A8u>(ctx, &aot_mem) && ctx.pc == 0x08836B50u) goto L_08836B50;
    return;
L_08836B50:
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
L_08836B68:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23696), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08836B88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08836BD0;
      }
      goto L_08836BA0;
    }
L_08836BA0:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836C2C;
      }
      goto L_08836BAC;
    }
L_08836BAC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9256));
    aot_gpr[31] = (0x08836BC8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8944));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836BC8u) goto L_08836BC8;
    return;
L_08836BC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836C2C;
      }
      goto L_08836BD0;
    }
L_08836BD0:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08836BEC;
      }
      goto L_08836BDC;
    }
L_08836BDC:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836C10;
      }
      goto L_08836BE4;
    }
L_08836BE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836C2C;
      }
      goto L_08836BEC;
    }
L_08836BEC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9256));
    aot_gpr[31] = (0x08836C08u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8916));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836C08u) goto L_08836C08;
    return;
L_08836C08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836C2C;
      }
      goto L_08836C10;
    }
L_08836C10:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9256));
    aot_gpr[31] = (0x08836C2Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8888));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836C2Cu) goto L_08836C2C;
    return;
L_08836C2C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08836C38:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(36))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[5] = (0u | 0u);
    goto L_08836C4C;
L_08836C4C:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(38))))));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08836C4C;
      }
      goto L_08836C64;
    }
L_08836C64:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08836C6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08836E40;
      }
      goto L_08836C94;
    }
L_08836C94:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(-9256));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(-9088));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08836CB8u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836CB8u) goto L_08836CB8;
    return;
L_08836CB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08836CDCu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836CDCu) goto L_08836CDC;
    return;
L_08836CDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (61440u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[31] = (0x08836CF8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x08836CF8u) goto L_08836CF8;
    return;
L_08836CF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08836D0Cu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08836D0Cu) goto L_08836D0C;
    return;
L_08836D0C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08836D18u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 58u, 0x0888A3D0u>(ctx, &aot_mem) && ctx.pc == 0x08836D18u) goto L_08836D18;
    return;
L_08836D18:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(-9064));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08836D30u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836D30u) goto L_08836D30;
    return;
L_08836D30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08836D50u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836D50u) goto L_08836D50;
    return;
L_08836D50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (4096u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[19]);
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[21] = (aot_gpr[5] + static_cast<std::uint32_t>(-9040));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08836D78u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836D78u) goto L_08836D78;
    return;
L_08836D78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08836D94u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836D94u) goto L_08836D94;
    return;
L_08836D94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[21] = (aot_gpr[5] + static_cast<std::uint32_t>(-9016));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08836DB8u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836DB8u) goto L_08836DB8;
    return;
L_08836DB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08836DD4u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836DD4u) goto L_08836DD4;
    return;
L_08836DD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[21] = (aot_gpr[5] + static_cast<std::uint32_t>(-8992));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08836DF8u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836DF8u) goto L_08836DF8;
    return;
L_08836DF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08836E14u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836E14u) goto L_08836E14;
    return;
L_08836E14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08836E34u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8968));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836E34u) goto L_08836E34;
    return;
L_08836E34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08836E40;
L_08836E40:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08836FFC;
      }
      goto L_08836E4C;
    }
L_08836E4C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-9256));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(-9064));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08836E70u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836E70u) goto L_08836E70;
    return;
L_08836E70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08836E94u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836E94u) goto L_08836E94;
    return;
L_08836E94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (61440u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[31] = (0x08836EB0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x08836EB0u) goto L_08836EB0;
    return;
L_08836EB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08836EC4u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08836EC4u) goto L_08836EC4;
    return;
L_08836EC4:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08836ED0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 58u, 0x0888A3D0u>(ctx, &aot_mem) && ctx.pc == 0x08836ED0u) goto L_08836ED0;
    return;
L_08836ED0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(-9088));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08836EE8u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836EE8u) goto L_08836EE8;
    return;
L_08836EE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08836F08u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836F08u) goto L_08836F08;
    return;
L_08836F08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (4096u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[5] + static_cast<std::uint32_t>(-9040));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08836F30u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836F30u) goto L_08836F30;
    return;
L_08836F30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08836F4Cu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836F4Cu) goto L_08836F4C;
    return;
L_08836F4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[5] + static_cast<std::uint32_t>(-9016));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08836F70u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836F70u) goto L_08836F70;
    return;
L_08836F70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08836F8Cu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836F8Cu) goto L_08836F8C;
    return;
L_08836F8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[5] + static_cast<std::uint32_t>(-8992));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08836FB0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836FB0u) goto L_08836FB0;
    return;
L_08836FB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08836FCCu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836FCCu) goto L_08836FCC;
    return;
L_08836FCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08836FECu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8968));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08836FECu) goto L_08836FEC;
    return;
L_08836FEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[19]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 49u, 0x0883752Cu>(ctx, &aot_mem); return;
      }
      goto L_08836FFC;
    }
L_08836FFC:
    aot_gpr[4] = (0u | 2u);
    ctx.pc = 0x08837000u; return;
}

void recomp_unit_0050(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0050_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_50(Runtime &runtime) {
    runtime.register_generated_unit(50u, 0x08836000u, 4096u, &recomp_unit_0050, &recomp_unit_0050_entry);
    runtime.register_function(0x08836004u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x0883601Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836024u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836038u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836044u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x0883605Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836068u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836080u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836088u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836094u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088360ACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088360B8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088360D0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836104u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x0883610Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836114u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x0883614Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836168u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836174u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836180u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836198u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088361B8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088361C0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088361F0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836200u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x0883622Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836248u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836258u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836260u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836274u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836294u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088362ECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836308u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836318u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836324u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836330u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x0883633Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836344u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x0883634Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836354u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836364u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836370u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836388u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088363ACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088363D0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088363D8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088363F0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x0883642Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836434u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x0883647Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x0883649Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088364B4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088364C0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836518u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836550u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836568u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836598u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088365B4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088365E0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836610u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836634u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x0883663Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836658u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836690u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836698u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088366B8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088366C8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088366D8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088366F4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836710u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x0883671Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836728u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836730u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836738u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836740u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836750u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836758u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836770u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836794u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088367A4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088367C8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088367D4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088367ECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088367F4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836808u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836814u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x0883682Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836838u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836850u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836858u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836864u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x0883687Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836888u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088368A0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088368C4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088368CCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088368D4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836900u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x0883691Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836928u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836940u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836960u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836978u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x0883699Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088369A4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088369DCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088369ECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836A10u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836A20u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836A2Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836A34u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836A3Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836A44u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836A54u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836A68u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836A6Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836A7Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836A80u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836A8Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836AA4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836AB4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836AC0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836AD0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836AE0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836AECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836AFCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836B08u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836B10u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836B18u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836B20u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836B28u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836B44u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836B50u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836B68u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836B88u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836BA0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836BACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836BC8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836BD0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836BDCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836BE4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836BECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836C08u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836C10u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836C2Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836C38u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836C4Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836C64u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836C6Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836C94u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836CB8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836CDCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836CF8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836D0Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836D18u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836D30u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836D50u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836D78u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836D94u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836DB8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836DD4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836DF8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836E14u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836E34u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836E40u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836E4Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836E70u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836E94u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836EB0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836EC4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836ED0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836EE8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836F08u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836F30u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836F4Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836F70u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836F8Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836FB0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836FCCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836FECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x08836FFCu, &recomp_unit_0050, "recomp_unit_0050");
}
} // namespace psprecomp
