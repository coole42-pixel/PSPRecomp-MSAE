#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0223[1013] = {
    1, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 6, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 10,
    0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 25, 0, 26, 0, 27, 0, 0, 0, 28, 0, 0, 29, 30, 0, 0, 0,
    31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0,
    0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0,
    0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55,
    0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0,
    0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0,
    0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 75, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 80, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0,
    85, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0, 0, 90, 0, 0, 91, 92, 0, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0,
    0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0,
    0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 105, 0, 106, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0,
    0, 115, 0, 116, 0, 117, 0, 0, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 0, 123, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 135, 0, 0, 136, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 141, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 148, 0, 149, 0, 0, 150, 0,
    0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 153, 0, 0, 154, 155, 0, 156, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 160,
    0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 173, 174, 175, 0, 0, 0, 176, 0, 177, 0, 0, 0, 178, 0,
    179, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191,
};
void recomp_unit_0223_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088E3004u;
        entry_id = (entry_delta < 4052u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0223[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088E3004;
    case 2u: goto L_088E3008;
    case 3u: goto L_088E3020;
    case 4u: goto L_088E3030;
    case 5u: goto L_088E303C;
    case 6u: goto L_088E3044;
    case 7u: goto L_088E3054;
    case 8u: goto L_088E3064;
    case 9u: goto L_088E3070;
    case 10u: goto L_088E3080;
    case 11u: goto L_088E308C;
    case 12u: goto L_088E30A4;
    case 13u: goto L_088E30B0;
    case 14u: goto L_088E30CC;
    case 15u: goto L_088E30DC;
    case 16u: goto L_088E3108;
    case 17u: goto L_088E3124;
    case 18u: goto L_088E3130;
    case 19u: goto L_088E313C;
    case 20u: goto L_088E315C;
    case 21u: goto L_088E316C;
    case 22u: goto L_088E31A0;
    case 23u: goto L_088E31A8;
    case 24u: goto L_088E31B8;
    case 25u: goto L_088E31C4;
    case 26u: goto L_088E31CC;
    case 27u: goto L_088E31D4;
    case 28u: goto L_088E31E4;
    case 29u: goto L_088E31F0;
    case 30u: goto L_088E31F4;
    case 31u: goto L_088E3204;
    case 32u: goto L_088E3210;
    case 33u: goto L_088E322C;
    case 34u: goto L_088E3250;
    case 35u: goto L_088E3298;
    case 36u: goto L_088E32B0;
    case 37u: goto L_088E32D0;
    case 38u: goto L_088E32DC;
    case 39u: goto L_088E32F8;
    case 40u: goto L_088E3310;
    case 41u: goto L_088E3324;
    case 42u: goto L_088E3330;
    case 43u: goto L_088E3344;
    case 44u: goto L_088E3358;
    case 45u: goto L_088E3360;
    case 46u: goto L_088E3368;
    case 47u: goto L_088E3390;
    case 48u: goto L_088E33C0;
    case 49u: goto L_088E33EC;
    case 50u: goto L_088E3408;
    case 51u: goto L_088E3410;
    case 52u: goto L_088E342C;
    case 53u: goto L_088E3448;
    case 54u: goto L_088E3468;
    case 55u: goto L_088E3480;
    case 56u: goto L_088E34A4;
    case 57u: goto L_088E34C0;
    case 58u: goto L_088E34D0;
    case 59u: goto L_088E34E4;
    case 60u: goto L_088E34FC;
    case 61u: goto L_088E3530;
    case 62u: goto L_088E3538;
    case 63u: goto L_088E3554;
    case 64u: goto L_088E355C;
    case 65u: goto L_088E356C;
    case 66u: goto L_088E3588;
    case 67u: goto L_088E35A4;
    case 68u: goto L_088E35BC;
    case 69u: goto L_088E35C0;
    case 70u: goto L_088E35D4;
    case 71u: goto L_088E35E8;
    case 72u: goto L_088E3608;
    case 73u: goto L_088E3610;
    case 74u: goto L_088E3640;
    case 75u: goto L_088E3644;
    case 76u: goto L_088E3650;
    case 77u: goto L_088E3664;
    case 78u: goto L_088E3680;
    case 79u: goto L_088E36B4;
    case 80u: goto L_088E36B8;
    case 81u: goto L_088E36CC;
    case 82u: goto L_088E36D8;
    case 83u: goto L_088E36E4;
    case 84u: goto L_088E36F0;
    case 85u: goto L_088E3704;
    case 86u: goto L_088E3710;
    case 87u: goto L_088E371C;
    case 88u: goto L_088E3728;
    case 89u: goto L_088E3738;
    case 90u: goto L_088E3744;
    case 91u: goto L_088E3750;
    case 92u: goto L_088E3754;
    case 93u: goto L_088E3764;
    case 94u: goto L_088E3770;
    case 95u: goto L_088E377C;
    case 96u: goto L_088E378C;
    case 97u: goto L_088E37A0;
    case 98u: goto L_088E37C0;
    case 99u: goto L_088E37EC;
    case 100u: goto L_088E37F4;
    case 101u: goto L_088E3808;
    case 102u: goto L_088E3820;
    case 103u: goto L_088E383C;
    case 104u: goto L_088E3850;
    case 105u: goto L_088E385C;
    case 106u: goto L_088E3864;
    case 107u: goto L_088E3874;
    case 108u: goto L_088E3894;
    case 109u: goto L_088E38A4;
    case 110u: goto L_088E38E8;
    case 111u: goto L_088E3910;
    case 112u: goto L_088E391C;
    case 113u: goto L_088E3930;
    case 114u: goto L_088E3978;
    case 115u: goto L_088E3988;
    case 116u: goto L_088E3990;
    case 117u: goto L_088E3998;
    case 118u: goto L_088E39A8;
    case 119u: goto L_088E39B0;
    case 120u: goto L_088E39B8;
    case 121u: goto L_088E39C0;
    case 122u: goto L_088E39C8;
    case 123u: goto L_088E39D4;
    case 124u: goto L_088E39D8;
    case 125u: goto L_088E3A04;
    case 126u: goto L_088E3A1C;
    case 127u: goto L_088E3A28;
    case 128u: goto L_088E3A40;
    case 129u: goto L_088E3A64;
    case 130u: goto L_088E3A70;
    case 131u: goto L_088E3A94;
    case 132u: goto L_088E3AA8;
    case 133u: goto L_088E3AB0;
    case 134u: goto L_088E3B3C;
    case 135u: goto L_088E3B40;
    case 136u: goto L_088E3B4C;
    case 137u: goto L_088E3B50;
    case 138u: goto L_088E3B70;
    case 139u: goto L_088E3B98;
    case 140u: goto L_088E3BBC;
    case 141u: goto L_088E3BC0;
    case 142u: goto L_088E3BD8;
    case 143u: goto L_088E3BE4;
    case 144u: goto L_088E3C34;
    case 145u: goto L_088E3C48;
    case 146u: goto L_088E3C50;
    case 147u: goto L_088E3C58;
    case 148u: goto L_088E3C68;
    case 149u: goto L_088E3C70;
    case 150u: goto L_088E3C7C;
    case 151u: goto L_088E3C98;
    case 152u: goto L_088E3CA0;
    case 153u: goto L_088E3CAC;
    case 154u: goto L_088E3CB8;
    case 155u: goto L_088E3CBC;
    case 156u: goto L_088E3CC4;
    case 157u: goto L_088E3CCC;
    case 158u: goto L_088E3CDC;
    case 159u: goto L_088E3CF8;
    case 160u: goto L_088E3D00;
    case 161u: goto L_088E3D20;
    case 162u: goto L_088E3D34;
    case 163u: goto L_088E3D3C;
    case 164u: goto L_088E3D4C;
    case 165u: goto L_088E3D58;
    case 166u: goto L_088E3D70;
    case 167u: goto L_088E3D80;
    case 168u: goto L_088E3DA4;
    case 169u: goto L_088E3DAC;
    case 170u: goto L_088E3DB4;
    case 171u: goto L_088E3DBC;
    case 172u: goto L_088E3DC4;
    case 173u: goto L_088E3DCC;
    case 174u: goto L_088E3DD0;
    case 175u: goto L_088E3DD4;
    case 176u: goto L_088E3DE4;
    case 177u: goto L_088E3DEC;
    case 178u: goto L_088E3DFC;
    case 179u: goto L_088E3E04;
    case 180u: goto L_088E3E14;
    case 181u: goto L_088E3E20;
    case 182u: goto L_088E3E38;
    case 183u: goto L_088E3E48;
    case 184u: goto L_088E3E68;
    case 185u: goto L_088E3EF8;
    case 186u: goto L_088E3F04;
    case 187u: goto L_088E3F94;
    case 188u: goto L_088E3FA4;
    case 189u: goto L_088E3FAC;
    case 190u: goto L_088E3FBC;
    case 191u: goto L_088E3FD4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088E3004:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(356), 0u);
    goto L_088E3008;
L_088E3008:
    aot_gpr[22] = (aot_gpr[16] << 2u);
    aot_gpr[23] = (0u | 0u);
    aot_gpr[22] = (aot_gpr[17] + aot_gpr[22]);
    aot_gpr[19] = (0u | 1u);
    aot_gpr[18] = (0u | 2u);
    aot_gpr[20] = (aot_gpr[17] | 0u);
    goto L_088E3020;
L_088E3020:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(860)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088E3030u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E3030u) goto L_088E3030;
    return;
L_088E3030:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E30CC;
      }
      goto L_088E303C;
    }
L_088E303C:
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E30B0;
      }
      goto L_088E3044;
    }
L_088E3044:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(816)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[19];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088E3070;
      }
      goto L_088E3054;
    }
L_088E3054:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088E3064u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0222_entry, 222u, 194u, 0x088E2DACu>(ctx, &aot_mem) && ctx.pc == 0x088E3064u) goto L_088E3064;
    return;
L_088E3064:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[23]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(832), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
    goto L_088E3070;
L_088E3070:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088E3080u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0222_entry, 222u, 141u, 0x088E2958u>(ctx, &aot_mem) && ctx.pc == 0x088E3080u) goto L_088E3080;
    return;
L_088E3080:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(192))))));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_088E30A4;
      }
      goto L_088E308C;
    }
L_088E308C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(972)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088E30A4u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E30A4u) goto L_088E30A4;
    return;
L_088E30A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(356)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(356), aot_gpr[4]);
    goto L_088E30B0;
L_088E30B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(204)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(56)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088E30CCu);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0222_entry, 222u, 180u, 0x088E2C48u>(ctx, &aot_mem) && ctx.pc == 0x088E30CCu) goto L_088E30CC;
    return;
L_088E30CC:
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[23]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E3020;
      }
      goto L_088E30DC;
    }
L_088E30DC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3108:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(960), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E315C;
      }
      goto L_088E3124;
    }
L_088E3124:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(176)));
    aot_gpr[31] = (0x088E3130u);
    aot_gpr[5] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3130u) goto L_088E3130;
    return;
L_088E3130:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(960), aot_gpr[2]);
      if (branch_taken) {
          goto L_088E315C;
      }
      goto L_088E313C;
    }
L_088E313C:
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(896);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(912);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(928);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(944);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088E315C;
L_088E315C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E316C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088E31A8;
      }
      goto L_088E31A0;
    }
L_088E31A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E322C;
      }
      goto L_088E31A8;
    }
L_088E31A8:
    aot_gpr[20] = (aot_gpr[16] << 2u);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[17] + aot_gpr[20]);
    aot_gpr[19] = (aot_gpr[29] | 0u);
    goto L_088E31B8;
L_088E31B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(860)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_088E31F0;
      }
      goto L_088E31C4;
    }
L_088E31C4:
    aot_gpr[31] = (0x088E31CCu);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E31CCu) goto L_088E31CC;
    return;
L_088E31CC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E31F0;
      }
      goto L_088E31D4;
    }
L_088E31D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(860)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x088E31E4u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E31E4u) goto L_088E31E4;
    return;
L_088E31E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_088E31F4;
      }
      goto L_088E31F0;
    }
L_088E31F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), 0u);
    goto L_088E31F4;
L_088E31F4:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E31B8;
      }
      goto L_088E3204;
    }
L_088E3204:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(876)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E322C;
      }
      goto L_088E3210;
    }
L_088E3210:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(204)));
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(21))))));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088E322Cu);
    aot_gpr[9] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 134u, 0x088CEBFCu>(ctx, &aot_mem) && ctx.pc == 0x088E322Cu) goto L_088E322C;
    return;
L_088E322C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3250:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(812)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3390;
      }
      goto L_088E3298;
    }
L_088E3298:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[30] = (0u | 20u);
    aot_gpr[23] = (0u | 21u);
    aot_gpr[22] = (aot_gpr[5] + static_cast<std::uint32_t>(360));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[21] = (aot_gpr[5] + static_cast<std::uint32_t>(488));
    goto L_088E32B0;
L_088E32B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(194))))));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(860)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088E32D0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E32D0u) goto L_088E32D0;
    return;
L_088E32D0:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3358;
      }
      goto L_088E32DC;
    }
L_088E32DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088E3358;
      }
      goto L_088E32F8;
    }
L_088E32F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[30];
    // nop
      if (branch_taken) {
          goto L_088E3324;
      }
      goto L_088E3310;
    }
L_088E3310:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088E3324u);
    aot_gpr[7] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 68u, 0x08828A20u>(ctx, &aot_mem) && ctx.pc == 0x088E3324u) goto L_088E3324;
    return;
L_088E3324:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[23];
    // nop
      if (branch_taken) {
          goto L_088E3344;
      }
      goto L_088E3330;
    }
L_088E3330:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088E3344u);
    aot_gpr[7] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 68u, 0x08828A20u>(ctx, &aot_mem) && ctx.pc == 0x088E3344u) goto L_088E3344;
    return;
L_088E3344:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E32F8;
      }
      goto L_088E3358;
    }
L_088E3358:
    aot_gpr[31] = (0x088E3360u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 74u, 0x08828AD0u>(ctx, &aot_mem) && ctx.pc == 0x088E3360u) goto L_088E3360;
    return;
L_088E3360:
    aot_gpr[31] = (0x088E3368u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 74u, 0x08828AD0u>(ctx, &aot_mem) && ctx.pc == 0x088E3368u) goto L_088E3368;
    return;
L_088E3368:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(812)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(32));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088E32B0;
      }
      goto L_088E3390;
    }
L_088E3390:
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
L_088E33C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(812)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(780));
      if (branch_taken) {
          goto L_088E34E4;
      }
      goto L_088E33EC;
    }
L_088E33EC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(194))))));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(860)));
    aot_gpr[31] = (0x088E3408u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E3408u) goto L_088E3408;
    return;
L_088E3408:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E34D0;
      }
      goto L_088E3410;
    }
L_088E3410:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(194))))));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(860)));
    aot_gpr[31] = (0x088E342Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E342Cu) goto L_088E342C;
    return;
L_088E342C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088E34D0;
      }
      goto L_088E3448;
    }
L_088E3448:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-11));
    aot_gpr[10] = (aot_gpr[4] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E34C0;
      }
      goto L_088E3468;
    }
L_088E3468:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-32512)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3480:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(88)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[7] = (aot_gpr[7] | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(88), aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088E34C0;
      }
      goto L_088E34A4;
    }
L_088E34A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(88)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[7] = (aot_gpr[7] | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(88), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    goto L_088E34C0;
L_088E34C0:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E3448;
      }
      goto L_088E34D0;
    }
L_088E34D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(812)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088E33EC;
      }
      goto L_088E34E4;
    }
L_088E34E4:
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
L_088E34FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(812)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 20u);
      if (branch_taken) {
          goto L_088E35E8;
      }
      goto L_088E3530;
    }
L_088E3530:
    aot_gpr[18] = (0u | 1u);
    aot_gpr[19] = (aot_gpr[16] | 0u);
    goto L_088E3538;
L_088E3538:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(194))))));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(860)));
    aot_gpr[31] = (0x088E3554u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E3554u) goto L_088E3554;
    return;
L_088E3554:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E35D4;
      }
      goto L_088E355C;
    }
L_088E355C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(816)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_088E35D4;
      }
      goto L_088E356C;
    }
L_088E356C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(194))))));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(860)));
    aot_gpr[31] = (0x088E3588u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E3588u) goto L_088E3588;
    return;
L_088E3588:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088E35D4;
      }
      goto L_088E35A4;
    }
L_088E35A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088E35C0;
      }
      goto L_088E35BC;
    }
L_088E35BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(836), aot_gpr[4]);
    goto L_088E35C0;
L_088E35C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E35A4;
      }
      goto L_088E35D4;
    }
L_088E35D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(812)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E3538;
      }
      goto L_088E35E8;
    }
L_088E35E8:
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
L_088E3608:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3610:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(192))))));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088E3664;
      }
      goto L_088E3640;
    }
L_088E3640:
    aot_gpr[18] = (2218u << 16u);
    goto L_088E3644;
L_088E3644:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[31] = (0x088E3650u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 73u, 0x088998E0u>(ctx, &aot_mem) && ctx.pc == 0x088E3650u) goto L_088E3650;
    return;
L_088E3650:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(192))))));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E3644;
      }
      goto L_088E3664;
    }
L_088E3664:
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
L_088E3680:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(192))))));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088E37A0;
      }
      goto L_088E36B4;
    }
L_088E36B4:
    aot_gpr[17] = (2218u << 16u);
    goto L_088E36B8;
L_088E36B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(812)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(860)));
      if (branch_taken) {
          goto L_088E3704;
      }
      goto L_088E36CC;
    }
L_088E36CC:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088E36D8u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E36D8u) goto L_088E36D8;
    return;
L_088E36D8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E36F0;
      }
      goto L_088E36E4;
    }
L_088E36E4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088E36F0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-4020)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 87u, 0x088999ECu>(ctx, &aot_mem) && ctx.pc == 0x088E36F0u) goto L_088E36F0;
    return;
L_088E36F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(812)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(860)));
      if (branch_taken) {
          goto L_088E36CC;
      }
      goto L_088E3704;
    }
L_088E3704:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x088E3710u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E3710u) goto L_088E3710;
    return;
L_088E3710:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3728;
      }
      goto L_088E371C;
    }
L_088E371C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088E3728u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-4020)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 87u, 0x088999ECu>(ctx, &aot_mem) && ctx.pc == 0x088E3728u) goto L_088E3728;
    return;
L_088E3728:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(860)));
    aot_gpr[5] = (0u | 5u);
    aot_gpr[31] = (0x088E3738u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E3738u) goto L_088E3738;
    return;
L_088E3738:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3750;
      }
      goto L_088E3744;
    }
L_088E3744:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088E3750u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-4020)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 87u, 0x088999ECu>(ctx, &aot_mem) && ctx.pc == 0x088E3750u) goto L_088E3750;
    return;
L_088E3750:
    aot_gpr[20] = (0u | 2u);
    goto L_088E3754;
L_088E3754:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(860)));
    aot_gpr[6] = (aot_gpr[20] + static_cast<std::uint32_t>(-2));
    aot_gpr[31] = (0x088E3764u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E3764u) goto L_088E3764;
    return;
L_088E3764:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E377C;
      }
      goto L_088E3770;
    }
L_088E3770:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088E377Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-4020)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 87u, 0x088999ECu>(ctx, &aot_mem) && ctx.pc == 0x088E377Cu) goto L_088E377C;
    return;
L_088E377C:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3754;
      }
      goto L_088E378C;
    }
L_088E378C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(192))))));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E36B8;
      }
      goto L_088E37A0;
    }
L_088E37A0:
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
L_088E37C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(192))))));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088E3808;
      }
      goto L_088E37EC;
    }
L_088E37EC:
    aot_gpr[31] = (0x088E37F4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(868)));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 79u, 0x088DE618u>(ctx, &aot_mem) && ctx.pc == 0x088E37F4u) goto L_088E37F4;
    return;
L_088E37F4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(192))))));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E37EC;
      }
      goto L_088E3808;
    }
L_088E3808:
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
L_088E3820:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(880)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3850;
      }
      goto L_088E383C;
    }
L_088E383C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-3948)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088E3850u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 24u, 0x088C61B8u>(ctx, &aot_mem) && ctx.pc == 0x088E3850u) goto L_088E3850;
    return;
L_088E3850:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(856)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3864;
      }
      goto L_088E385C;
    }
L_088E385C:
    aot_gpr[31] = (0x088E3864u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 194u, 0x088DDF08u>(ctx, &aot_mem) && ctx.pc == 0x088E3864u) goto L_088E3864;
    return;
L_088E3864:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3874:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] & 255u);
    aot_gpr[2] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088E391C;
      }
      goto L_088E3894;
    }
L_088E3894:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088E38A4u);
    aot_gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088E38A4u) goto L_088E38A4;
    return;
L_088E38A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(128)));
    aot_gpr[5] = (0u | 32768u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (0u < aot_gpr[17] ? 1u : 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(138), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (24948u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24900));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (20563u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20575));
    aot_gpr[5] = (0u | 92u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088E38E8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088E38E8u) goto L_088E38E8;
    return;
L_088E38E8:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-3948)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088E3910u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E3910u) goto L_088E3910;
    return;
L_088E3910:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[31] = (0x088E391Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-3948)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088E391Cu) goto L_088E391C;
    return;
L_088E391C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3930:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    aot_gpr[22] = (aot_gpr[7] & 255u);
    aot_gpr[21] = (aot_gpr[8] & 255u);
    aot_gpr[20] = (aot_gpr[9] & 255u);
    aot_gpr[23] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_088E39D4;
      }
      goto L_088E3978;
    }
L_088E3978:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(128)));
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[31] = (0x088E3988u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-3948)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088E3988u) goto L_088E3988;
    return;
L_088E3988:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3998;
      }
      goto L_088E3990;
    }
L_088E3990:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E39B8;
      }
      goto L_088E3998;
    }
L_088E3998:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088E39A8u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    goto L_088E3874;
L_088E39A8:
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[23] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E39C0;
      }
      goto L_088E39B0;
    }
L_088E39B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E39D4;
      }
      goto L_088E39B8;
    }
L_088E39B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E39D8;
      }
      goto L_088E39C0;
    }
L_088E39C0:
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E39D4;
      }
      goto L_088E39C8;
    }
L_088E39C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-3948)));
    aot_gpr[31] = (0x088E39D4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 24u, 0x088C61B8u>(ctx, &aot_mem) && ctx.pc == 0x088E39D4u) goto L_088E39D4;
    return;
L_088E39D4:
    aot_gpr[2] = (aot_gpr[23] | 0u);
    goto L_088E39D8;
L_088E39D8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3A04:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[9] = (0u | 30u);
      if (branch_taken) {
          goto L_088E3AA8;
      }
      goto L_088E3A1C;
    }
L_088E3A1C:
    aot_gpr[7] = (0u | 31u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[8] = (1u << 16u);
    goto L_088E3A28;
L_088E3A28:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[11]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_088E3A64;
      }
      goto L_088E3A40;
    }
L_088E3A40:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(204)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(88)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(48)));
    aot_gpr[3] = (aot_gpr[3] | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(88), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    goto L_088E3A64;
L_088E3A64:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088E3A94;
      }
      goto L_088E3A70;
    }
L_088E3A70:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(204)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(88)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(52)));
    aot_gpr[3] = (aot_gpr[3] | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(88), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    goto L_088E3A94;
L_088E3A94:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[5] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E3A28;
      }
      goto L_088E3AA8;
    }
L_088E3AA8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3AB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    aot_gpr[2] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[7] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[8] & 255u);
    aot_gpr[22] = (aot_gpr[23] + aot_gpr[5]);
    aot_gpr[9] = (aot_gpr[9] & 255u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(860)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(204)));
    aot_gpr[4] = (aot_gpr[10] & 255u);
    aot_gpr[8] = (aot_gpr[6] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    aot_gpr[21] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[16] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[6]);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[21] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[16] = (aot_gpr[16] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[30] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[7]);
      if (branch_taken) {
          goto L_088E3B40;
      }
      goto L_088E3B3C;
    }
L_088E3B3C:
    aot_gpr[11] = (0u | 8u);
    goto L_088E3B40;
L_088E3B40:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088E3B50;
      }
      goto L_088E3B4C;
    }
L_088E3B4C:
    aot_gpr[6] = (0u | 1u);
    goto L_088E3B50;
L_088E3B50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[11]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3BC0;
      }
      goto L_088E3B70;
    }
L_088E3B70:
    aot_gpr[9] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(860)));
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x088E3B98u);
    aot_gpr[8] = (aot_gpr[11] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 9u, 0x088E70BCu>(ctx, &aot_mem) && ctx.pc == 0x088E3B98u) goto L_088E3B98;
    return;
L_088E3B98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(860)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(204)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088E3BBCu);
    aot_gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 58u, 0x088E73ECu>(ctx, &aot_mem) && ctx.pc == 0x088E3BBCu) goto L_088E3BBC;
    return;
L_088E3BBC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(204)));
    goto L_088E3BC0;
L_088E3BC0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[30]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(812)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (17096u << 16u);
      if (branch_taken) {
          goto L_088E3FBC;
      }
      goto L_088E3BD8;
    }
L_088E3BD8:
    aot_gpr[30] = (0u | 20u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(20))))));
    goto L_088E3BE4;
L_088E3BE4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (aot_gpr[8] << 3u);
    aot_gpr[6] = (aot_gpr[8] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[8] + aot_gpr[6]);
    aot_gpr[17] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[6] = (ctx.lo);
    aot_gpr[8] = (aot_gpr[6] << 3u);
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[21]);
      if (branch_taken) {
          goto L_088E3FAC;
      }
      goto L_088E3C34;
    }
L_088E3C34:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(860)));
      if (branch_taken) {
          goto L_088E3C70;
      }
      goto L_088E3C48;
    }
L_088E3C48:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_088E3C70;
      }
      goto L_088E3C50;
    }
L_088E3C50:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E3C70;
      }
      goto L_088E3C58;
    }
L_088E3C58:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088E3C68u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E3C68u) goto L_088E3C68;
    return;
L_088E3C68:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(860)));
    goto L_088E3C70;
L_088E3C70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3CA0;
      }
      goto L_088E3C7C;
    }
L_088E3C7C:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 8u);
    aot_gpr[31] = (0x088E3C98u);
    aot_gpr[9] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 9u, 0x088E70BCu>(ctx, &aot_mem) && ctx.pc == 0x088E3C98u) goto L_088E3C98;
    return;
L_088E3C98:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(860)));
    goto L_088E3CA0;
L_088E3CA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_088E3CBC;
    }
    goto L_088E3CAC;
L_088E3CAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3D00;
      }
      goto L_088E3CB8;
    }
L_088E3CB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_088E3CBC;
L_088E3CBC:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3D00;
      }
      goto L_088E3CC4;
    }
L_088E3CC4:
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3D00;
      }
      goto L_088E3CCC;
    }
L_088E3CCC:
    aot_gpr[6] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088E3CDCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E3CDCu) goto L_088E3CDC;
    return;
L_088E3CDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088E3CF8u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E3CF8u) goto L_088E3CF8;
    return;
L_088E3CF8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(860)));
    goto L_088E3D00;
L_088E3D00:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(204)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x088E3D20u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 58u, 0x088E73ECu>(ctx, &aot_mem) && ctx.pc == 0x088E3D20u) goto L_088E3D20;
    return;
L_088E3D20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(860)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088E3D34u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E3D34u) goto L_088E3D34;
    return;
L_088E3D34:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3DE4;
      }
      goto L_088E3D3C;
    }
L_088E3D3C:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[19] + static_cast<std::uint32_t>(11));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(860)));
    aot_gpr[16] = (0u | 0u);
    goto L_088E3D4C;
L_088E3D4C:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088E3D58u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E3D58u) goto L_088E3D58;
    return;
L_088E3D58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3DE4;
      }
      goto L_088E3D70;
    }
L_088E3D70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(860)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088E3D80u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E3D80u) goto L_088E3D80;
    return;
L_088E3D80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (0u | 11u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (0u | 12u);
      if (branch_taken) {
          goto L_088E3DBC;
      }
      goto L_088E3DA4;
    }
L_088E3DA4:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (0u | 13u);
      if (branch_taken) {
          goto L_088E3DBC;
      }
      goto L_088E3DAC;
    }
L_088E3DAC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (0u | 14u);
      if (branch_taken) {
          goto L_088E3DBC;
      }
      goto L_088E3DB4;
    }
L_088E3DB4:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E3DD4;
      }
      goto L_088E3DBC;
    }
L_088E3DBC:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3DCC;
      }
      goto L_088E3DC4;
    }
L_088E3DC4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), aot_gpr[20]);
      if (branch_taken) {
          goto L_088E3DD0;
      }
      goto L_088E3DCC;
    }
L_088E3DCC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), 0u);
    goto L_088E3DD0;
L_088E3DD0:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_088E3DD4;
L_088E3DD4:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(860)));
      if (branch_taken) {
          goto L_088E3D4C;
      }
      goto L_088E3DE4;
    }
L_088E3DE4:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3FA4;
      }
      goto L_088E3DEC;
    }
L_088E3DEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(860)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088E3DFCu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E3DFCu) goto L_088E3DFC;
    return;
L_088E3DFC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3FA4;
      }
      goto L_088E3E04;
    }
L_088E3E04:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(860)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[18] = (0u | 21u);
    goto L_088E3E14;
L_088E3E14:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088E3E20u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E3E20u) goto L_088E3E20;
    return;
L_088E3E20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3FA4;
      }
      goto L_088E3E38;
    }
L_088E3E38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(860)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088E3E48u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E3E48u) goto L_088E3E48;
    return;
L_088E3E48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_088E3EF8;
      }
      goto L_088E3E68;
    }
L_088E3E68:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(204)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(20))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (ctx.lo);
    aot_gpr[7] = (aot_gpr[6] << 3u);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[21]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[12] = aot_fpr[12] / aot_fpr[20];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (aot_gpr[5] | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (aot_gpr[5] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(204)));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(20))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(36)));
    aot_gpr[7] = (ctx.lo);
    aot_gpr[8] = (aot_gpr[7] << 3u);
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(9)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[12] = aot_fpr[12] / aot_fpr[20];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088E3EF8;
L_088E3EF8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[30];
    // nop
      if (branch_taken) {
          goto L_088E3F94;
      }
      goto L_088E3F04;
    }
L_088E3F04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(204)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(20))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (ctx.lo);
    aot_gpr[7] = (aot_gpr[6] << 3u);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[21]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(6)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[12] = aot_fpr[12] / aot_fpr[20];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (aot_gpr[5] | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (aot_gpr[5] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(204)));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(20))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(36)));
    aot_gpr[7] = (ctx.lo);
    aot_gpr[8] = (aot_gpr[7] << 3u);
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(7)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[12] = aot_fpr[12] / aot_fpr[20];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088E3F94;
L_088E3F94:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(860)));
      if (branch_taken) {
          goto L_088E3E14;
      }
      goto L_088E3FA4;
    }
L_088E3FA4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(204)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(812)));
    goto L_088E3FAC;
L_088E3FAC:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(20))))));
        goto L_088E3BE4;
    }
    goto L_088E3FBC;
L_088E3FBC:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_088E3FD4;
L_088E3FD4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(20))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[7] = (ctx.lo);
    aot_gpr[8] = (aot_gpr[7] << 3u);
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(2))))));
    ctx.pc = 0x088E4000u; return;
}

void recomp_unit_0223(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0223_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_223(Runtime &runtime) {
    runtime.register_generated_unit(223u, 0x088E3000u, 4096u, &recomp_unit_0223, &recomp_unit_0223_entry);
    runtime.register_function(0x088E3004u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3008u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3020u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3030u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E303Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3044u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3054u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3064u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3070u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3080u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E308Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E30A4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E30B0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E30CCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E30DCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3108u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3124u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3130u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E313Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E315Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E316Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E31A0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E31A8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E31B8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E31C4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E31CCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E31D4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E31E4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E31F0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E31F4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3204u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3210u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E322Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3250u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3298u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E32B0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E32D0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E32DCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E32F8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3310u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3324u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3330u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3344u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3358u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3360u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3368u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3390u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E33C0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E33ECu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3408u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3410u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E342Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3448u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3468u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3480u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E34A4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E34C0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E34D0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E34E4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E34FCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3530u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3538u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3554u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E355Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E356Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3588u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E35A4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E35BCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E35C0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E35D4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E35E8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3608u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3610u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3640u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3644u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3650u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3664u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3680u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E36B4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E36B8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E36CCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E36D8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E36E4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E36F0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3704u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3710u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E371Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3728u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3738u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3744u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3750u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3754u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3764u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3770u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E377Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E378Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E37A0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E37C0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E37ECu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E37F4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3808u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3820u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E383Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3850u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E385Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3864u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3874u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3894u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E38A4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E38E8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3910u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E391Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3930u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3978u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3988u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3990u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3998u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E39A8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E39B0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E39B8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E39C0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E39C8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E39D4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E39D8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3A04u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3A1Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3A28u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3A40u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3A64u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3A70u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3A94u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3AA8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3AB0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3B3Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3B40u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3B4Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3B50u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3B70u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3B98u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3BBCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3BC0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3BD8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3BE4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3C34u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3C48u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3C50u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3C58u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3C68u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3C70u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3C7Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3C98u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3CA0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3CACu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3CB8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3CBCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3CC4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3CCCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3CDCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3CF8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3D00u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3D20u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3D34u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3D3Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3D4Cu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3D58u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3D70u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3D80u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3DA4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3DACu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3DB4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3DBCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3DC4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3DCCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3DD0u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3DD4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3DE4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3DECu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3DFCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3E04u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3E14u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3E20u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3E38u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3E48u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3E68u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3EF8u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3F04u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3F94u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3FA4u, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3FACu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3FBCu, &recomp_unit_0223, "recomp_unit_0223");
    runtime.register_function(0x088E3FD4u, &recomp_unit_0223, "recomp_unit_0223");
}
} // namespace psprecomp
