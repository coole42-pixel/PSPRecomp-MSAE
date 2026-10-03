#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0159[1021] = {
    1, 0, 2, 0, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 10, 0, 11, 0, 0, 12, 0, 0, 0, 13, 0, 14, 0, 0, 15, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 18, 0, 0, 0, 19, 0, 20, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0, 0, 26, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 37, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 50, 0, 51,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 55, 0, 0, 56, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0,
    61, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0,
    0, 66, 0, 0, 0, 0, 67, 0, 68, 0, 69, 0, 70, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75,
    0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0,
    0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0,
    89, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0,
    0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0,
    0, 0, 103, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 117, 0,
    0, 118, 0, 0, 119, 0, 120, 0, 121, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 127, 0,
    0, 128, 0, 129, 0, 0, 0, 130, 0, 131, 0, 132, 0, 0, 133, 0, 0, 0, 134, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 138, 0, 0,
    0, 139, 0, 140, 0, 141, 0, 142, 0, 143, 0, 0, 144, 0, 145, 0, 146, 0, 147, 0, 0, 148, 0, 0, 149, 0, 150, 151, 0, 0, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 159, 0,
    160, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 171, 0, 172, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0,
    0, 0, 0, 179, 0, 180, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 184, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0,
    187, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 193, 0, 194, 0, 195,
};
void recomp_unit_0159_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088A3000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0159[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088A3000;
    case 2u: goto L_088A3008;
    case 3u: goto L_088A3018;
    case 4u: goto L_088A3020;
    case 5u: goto L_088A3030;
    case 6u: goto L_088A3054;
    case 7u: goto L_088A3080;
    case 8u: goto L_088A3094;
    case 9u: goto L_088A30A0;
    case 10u: goto L_088A30B0;
    case 11u: goto L_088A30B8;
    case 12u: goto L_088A30C4;
    case 13u: goto L_088A30D4;
    case 14u: goto L_088A30DC;
    case 15u: goto L_088A30E8;
    case 16u: goto L_088A30F0;
    case 17u: goto L_088A3130;
    case 18u: goto L_088A3134;
    case 19u: goto L_088A3144;
    case 20u: goto L_088A314C;
    case 21u: goto L_088A3150;
    case 22u: goto L_088A3178;
    case 23u: goto L_088A31A8;
    case 24u: goto L_088A31BC;
    case 25u: goto L_088A31C4;
    case 26u: goto L_088A31D0;
    case 27u: goto L_088A31E4;
    case 28u: goto L_088A31EC;
    case 29u: goto L_088A3200;
    case 30u: goto L_088A323C;
    case 31u: goto L_088A325C;
    case 32u: goto L_088A3290;
    case 33u: goto L_088A3298;
    case 34u: goto L_088A32B0;
    case 35u: goto L_088A3314;
    case 36u: goto L_088A3334;
    case 37u: goto L_088A3384;
    case 38u: goto L_088A338C;
    case 39u: goto L_088A339C;
    case 40u: goto L_088A33DC;
    case 41u: goto L_088A33E4;
    case 42u: goto L_088A3400;
    case 43u: goto L_088A3410;
    case 44u: goto L_088A3428;
    case 45u: goto L_088A3434;
    case 46u: goto L_088A3444;
    case 47u: goto L_088A3454;
    case 48u: goto L_088A3460;
    case 49u: goto L_088A346C;
    case 50u: goto L_088A3474;
    case 51u: goto L_088A347C;
    case 52u: goto L_088A3490;
    case 53u: goto L_088A34B0;
    case 54u: goto L_088A34B8;
    case 55u: goto L_088A34BC;
    case 56u: goto L_088A34C8;
    case 57u: goto L_088A34D0;
    case 58u: goto L_088A34DC;
    case 59u: goto L_088A34E8;
    case 60u: goto L_088A34F8;
    case 61u: goto L_088A3500;
    case 62u: goto L_088A3504;
    case 63u: goto L_088A3528;
    case 64u: goto L_088A3550;
    case 65u: goto L_088A3564;
    case 66u: goto L_088A3584;
    case 67u: goto L_088A3598;
    case 68u: goto L_088A35A0;
    case 69u: goto L_088A35A8;
    case 70u: goto L_088A35B0;
    case 71u: goto L_088A35B8;
    case 72u: goto L_088A35C0;
    case 73u: goto L_088A35E0;
    case 74u: goto L_088A36E0;
    case 75u: goto L_088A36FC;
    case 76u: goto L_088A371C;
    case 77u: goto L_088A3738;
    case 78u: goto L_088A3754;
    case 79u: goto L_088A3770;
    case 80u: goto L_088A3790;
    case 81u: goto L_088A37AC;
    case 82u: goto L_088A37C8;
    case 83u: goto L_088A37E4;
    case 84u: goto L_088A3804;
    case 85u: goto L_088A3820;
    case 86u: goto L_088A38CC;
    case 87u: goto L_088A38EC;
    case 88u: goto L_088A38F4;
    case 89u: goto L_088A3900;
    case 90u: goto L_088A3914;
    case 91u: goto L_088A3920;
    case 92u: goto L_088A3930;
    case 93u: goto L_088A393C;
    case 94u: goto L_088A3950;
    case 95u: goto L_088A3964;
    case 96u: goto L_088A3970;
    case 97u: goto L_088A3984;
    case 98u: goto L_088A39B0;
    case 99u: goto L_088A39C0;
    case 100u: goto L_088A39CC;
    case 101u: goto L_088A39E0;
    case 102u: goto L_088A39F4;
    case 103u: goto L_088A3A08;
    case 104u: goto L_088A3A14;
    case 105u: goto L_088A3A20;
    case 106u: goto L_088A3A34;
    case 107u: goto L_088A3A58;
    case 108u: goto L_088A3A70;
    case 109u: goto L_088A3A80;
    case 110u: goto L_088A3AA4;
    case 111u: goto L_088A3AD8;
    case 112u: goto L_088A3B1C;
    case 113u: goto L_088A3B24;
    case 114u: goto L_088A3B44;
    case 115u: goto L_088A3B68;
    case 116u: goto L_088A3B70;
    case 117u: goto L_088A3B78;
    case 118u: goto L_088A3B84;
    case 119u: goto L_088A3B90;
    case 120u: goto L_088A3B98;
    case 121u: goto L_088A3BA0;
    case 122u: goto L_088A3BA8;
    case 123u: goto L_088A3BB8;
    case 124u: goto L_088A3BC8;
    case 125u: goto L_088A3BD0;
    case 126u: goto L_088A3BF4;
    case 127u: goto L_088A3BF8;
    case 128u: goto L_088A3C04;
    case 129u: goto L_088A3C0C;
    case 130u: goto L_088A3C1C;
    case 131u: goto L_088A3C24;
    case 132u: goto L_088A3C2C;
    case 133u: goto L_088A3C38;
    case 134u: goto L_088A3C48;
    case 135u: goto L_088A3C50;
    case 136u: goto L_088A3C58;
    case 137u: goto L_088A3C60;
    case 138u: goto L_088A3C74;
    case 139u: goto L_088A3C84;
    case 140u: goto L_088A3C8C;
    case 141u: goto L_088A3C94;
    case 142u: goto L_088A3C9C;
    case 143u: goto L_088A3CA4;
    case 144u: goto L_088A3CB0;
    case 145u: goto L_088A3CB8;
    case 146u: goto L_088A3CC0;
    case 147u: goto L_088A3CC8;
    case 148u: goto L_088A3CD4;
    case 149u: goto L_088A3CE0;
    case 150u: goto L_088A3CE8;
    case 151u: goto L_088A3CEC;
    case 152u: goto L_088A3D10;
    case 153u: goto L_088A3D24;
    case 154u: goto L_088A3D2C;
    case 155u: goto L_088A3D44;
    case 156u: goto L_088A3D4C;
    case 157u: goto L_088A3D64;
    case 158u: goto L_088A3D70;
    case 159u: goto L_088A3D78;
    case 160u: goto L_088A3D80;
    case 161u: goto L_088A3D88;
    case 162u: goto L_088A3D9C;
    case 163u: goto L_088A3DB8;
    case 164u: goto L_088A3DD4;
    case 165u: goto L_088A3DEC;
    case 166u: goto L_088A3E10;
    case 167u: goto L_088A3E18;
    case 168u: goto L_088A3E24;
    case 169u: goto L_088A3E54;
    case 170u: goto L_088A3E64;
    case 171u: goto L_088A3E70;
    case 172u: goto L_088A3E78;
    case 173u: goto L_088A3E80;
    case 174u: goto L_088A3EA8;
    case 175u: goto L_088A3EC4;
    case 176u: goto L_088A3ECC;
    case 177u: goto L_088A3EE8;
    case 178u: goto L_088A3EF0;
    case 179u: goto L_088A3F0C;
    case 180u: goto L_088A3F14;
    case 181u: goto L_088A3F1C;
    case 182u: goto L_088A3F34;
    case 183u: goto L_088A3F44;
    case 184u: goto L_088A3F4C;
    case 185u: goto L_088A3F54;
    case 186u: goto L_088A3F5C;
    case 187u: goto L_088A3F80;
    case 188u: goto L_088A3F88;
    case 189u: goto L_088A3FA4;
    case 190u: goto L_088A3FB4;
    case 191u: goto L_088A3FC8;
    case 192u: goto L_088A3FD8;
    case 193u: goto L_088A3FE0;
    case 194u: goto L_088A3FE8;
    case 195u: goto L_088A3FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088A3000:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3020;
      }
      goto L_088A3008;
    }
L_088A3008:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1900)));
    aot_gpr[31] = (0x088A3018u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 90u, 0x088BC654u>(ctx, &aot_mem) && ctx.pc == 0x088A3018u) goto L_088A3018;
    return;
L_088A3018:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088A3020;
      }
      goto L_088A3020;
    }
L_088A3020:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088A3144;
      }
      goto L_088A3030;
    }
L_088A3030:
    aot_gpr[4] = (aot_gpr[20] << 8u);
    aot_gpr[5] = (0u - aot_gpr[4]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(716))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088A3134;
      }
      goto L_088A3054;
    }
L_088A3054:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(716))))));
    aot_gpr[5] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[22] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[22] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088A3134;
      }
      goto L_088A3080;
    }
L_088A3080:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088A30B8;
      }
      goto L_088A3094;
    }
L_088A3094:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A30DC;
      }
      goto L_088A30A0;
    }
L_088A30A0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1900)));
    aot_gpr[31] = (0x088A30B0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 71u, 0x088BC4F4u>(ctx, &aot_mem) && ctx.pc == 0x088A30B0u) goto L_088A30B0;
    return;
L_088A30B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088A30DC;
      }
      goto L_088A30B8;
    }
L_088A30B8:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A30DC;
      }
      goto L_088A30C4;
    }
L_088A30C4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1900)));
    aot_gpr[31] = (0x088A30D4u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 90u, 0x088BC654u>(ctx, &aot_mem) && ctx.pc == 0x088A30D4u) goto L_088A30D4;
    return;
L_088A30D4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088A30DC;
      }
      goto L_088A30DC;
    }
L_088A30DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088A30F0;
      }
      goto L_088A30E8;
    }
L_088A30E8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3134;
      }
      goto L_088A30F0;
    }
L_088A30F0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(105))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 8u);
    aot_gpr[6] = (0u - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(232));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(4))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(236))))));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] << 16u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 16u));
    aot_gpr[31] = (0x088A3130u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(26516)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 67u, 0x088A5844u>(ctx, &aot_mem) && ctx.pc == 0x088A3130u) goto L_088A3130;
    return;
L_088A3130:
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[2]);
    goto L_088A3134;
L_088A3134:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A3030;
      }
      goto L_088A3144;
    }
L_088A3144:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_088A3150;
      }
      goto L_088A314C;
    }
L_088A314C:
    aot_gpr[2] = (0u | 0u);
    goto L_088A3150;
L_088A3150:
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
L_088A3178:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(7972)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[16] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(7972), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088A31A8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(26516)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 59u, 0x088A57E8u>(ctx, &aot_mem) && ctx.pc == 0x088A31A8u) goto L_088A31A8;
    return;
L_088A31A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(7976)));
    aot_gpr[4] = (aot_gpr[2] & 65535u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A31C4;
      }
      goto L_088A31BC;
    }
L_088A31BC:
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(7976), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_088A31C4;
L_088A31C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(26516)));
    aot_gpr[31] = (0x088A31D0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(7976)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 74u, 0x088A5894u>(ctx, &aot_mem) && ctx.pc == 0x088A31D0u) goto L_088A31D0;
    return;
L_088A31D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(7978)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A31EC;
      }
      goto L_088A31E4;
    }
L_088A31E4:
    aot_gpr[4] = (aot_gpr[16] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(7978), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088A31EC;
L_088A31EC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A3200:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(105))))));
    aot_gpr[4] = (aot_gpr[4] << 8u);
    aot_gpr[6] = (0u - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[31] = (0x088A323Cu);
    aot_gpr[19] = (aot_gpr[5] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 178u, 0x0889FEB8u>(ctx, &aot_mem) && ctx.pc == 0x088A323Cu) goto L_088A323C;
    return;
L_088A323C:
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(24776));
    aot_gpr[18] = (aot_gpr[2] + static_cast<std::uint32_t>(1336));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088A325Cu);
    aot_gpr[6] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088A325Cu) goto L_088A325C;
    return;
L_088A325C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(25353)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(25360)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[31] = (0x088A3290u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(238))))));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 96u, 0x0881C72Cu>(ctx, &aot_mem) && ctx.pc == 0x088A3290u) goto L_088A3290;
    return;
L_088A3290:
    aot_gpr[31] = (0x088A3298u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 88u, 0x0881C658u>(ctx, &aot_mem) && ctx.pc == 0x088A3298u) goto L_088A3298;
    return;
L_088A3298:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (0u | 1u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 3u);
        goto L_088A32B0;
    }
    goto L_088A32B0;
L_088A32B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088A3314u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3314u) goto L_088A3314;
    return;
L_088A3314:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A3334:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (aot_gpr[5] << 8u);
    aot_gpr[7] = (0u - aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(720), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A338C;
      }
      goto L_088A3384;
    }
L_088A3384:
    aot_gpr[31] = (0x088A338Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 190u, 0x088A0C88u>(ctx, &aot_mem) && ctx.pc == 0x088A338Cu) goto L_088A338C;
    return;
L_088A338C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A3504;
      }
      goto L_088A339C;
    }
L_088A339C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(716))))));
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[20] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[5] | 20u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A3504;
      }
      goto L_088A33DC;
    }
L_088A33DC:
    aot_gpr[31] = (0x088A33E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088A33E4u) goto L_088A33E4;
    return;
L_088A33E4:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(104), 0u);
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(40));
    aot_gpr[21] = (0u | 1u);
    aot_gpr[31] = (0x088A3400u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 40u, 0x0882C3D8u>(ctx, &aot_mem) && ctx.pc == 0x088A3400u) goto L_088A3400;
    return;
L_088A3400:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1900)));
    aot_gpr[31] = (0x088A3410u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 21u, 0x088BC15Cu>(ctx, &aot_mem) && ctx.pc == 0x088A3410u) goto L_088A3410;
    return;
L_088A3410:
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(228), static_cast<std::uint8_t>(aot_gpr[21]));
    aot_gpr[4] = (aot_gpr[17] << 4u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(220)));
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(108));
      if (branch_taken) {
          goto L_088A3454;
      }
      goto L_088A3428;
    }
L_088A3428:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3444;
      }
      goto L_088A3434;
    }
L_088A3434:
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A3434;
      }
      goto L_088A3444;
    }
L_088A3444:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7508)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(105))))));
      if (branch_taken) {
          goto L_088A3460;
      }
      goto L_088A3454;
    }
L_088A3454:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(220), aot_gpr[17]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(105))))));
    goto L_088A3460;
L_088A3460:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    goto L_088A346C;
L_088A346C:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088A347C;
      }
      goto L_088A3474;
    }
L_088A3474:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088A34BC;
      }
      goto L_088A347C;
    }
L_088A347C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(716))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[8]) < 0;
    aot_gpr[9] = (aot_gpr[8] << 5u);
      if (branch_taken) {
          goto L_088A34B8;
      }
      goto L_088A3490;
    }
L_088A3490:
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[8] = (aot_gpr[8] << 3u);
    aot_gpr[8] = (aot_gpr[9] + aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[19] + aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A34B8;
      }
      goto L_088A34B0;
    }
L_088A34B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088A34C8;
      }
      goto L_088A34B8;
    }
L_088A34B8:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_088A34BC;
L_088A34BC:
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[6]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(768));
      if (branch_taken) {
          goto L_088A346C;
      }
      goto L_088A34C8;
    }
L_088A34C8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3504;
      }
      goto L_088A34D0;
    }
L_088A34D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(204));
      if (branch_taken) {
          goto L_088A3500;
      }
      goto L_088A34DC;
    }
L_088A34DC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A34F8;
      }
      goto L_088A34E8;
    }
L_088A34E8:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A34E8;
      }
      goto L_088A34F8;
    }
L_088A34F8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_088A3504;
      }
      goto L_088A3500;
    }
L_088A3500:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(220), aot_gpr[5]);
    goto L_088A3504;
L_088A3504:
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
L_088A3528:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-288));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088A35B8;
      }
      goto L_088A3550;
    }
L_088A3550:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A35B0;
      }
      goto L_088A3564;
    }
L_088A3564:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    aot_gpr[5] = (aot_gpr[16] << 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(224));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A35A8;
      }
      goto L_088A3584;
    }
L_088A3584:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    aot_gpr[31] = (0x088A3598u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 189u, 0x088A0C6Cu>(ctx, &aot_mem) && ctx.pc == 0x088A3598u) goto L_088A3598;
    return;
L_088A3598:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088A35C0;
      }
      goto L_088A35A0;
    }
L_088A35A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3B24;
      }
      goto L_088A35A8;
    }
L_088A35A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3B24;
      }
      goto L_088A35B0;
    }
L_088A35B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3B24;
      }
      goto L_088A35B8;
    }
L_088A35B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3B24;
      }
      goto L_088A35C0;
    }
L_088A35C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (2048u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[19] = (aot_gpr[4] - aot_gpr[19]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) <= 0;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088A3B1C;
      }
      goto L_088A35E0;
    }
L_088A35E0:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(aot_gpr[4]));
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(160);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[19]);
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[13] / aot_fpr[12];
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(24))))));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (18175u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 65024u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] / aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(26))))));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] / aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(28))))));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] / aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088A36FC;
      }
      goto L_088A36E0;
    }
L_088A36E0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[14] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088A36FC;
L_088A36FC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088A3738;
      }
      goto L_088A371C;
    }
L_088A371C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088A3738;
L_088A3738:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088A3770;
      }
      goto L_088A3754;
    }
L_088A3754:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[14] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088A3770;
L_088A3770:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088A37AC;
      }
      goto L_088A3790;
    }
L_088A3790:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088A37AC;
L_088A37AC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088A37E4;
      }
      goto L_088A37C8;
    }
L_088A37C8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[14] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088A37E4;
L_088A37E4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088A3820;
      }
      goto L_088A3804;
    }
L_088A3804:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088A3820;
L_088A3820:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[19]);
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[13] / aot_fpr[12];
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(144);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(160);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(192);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (2048u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(31)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(30))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(210), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(716))))));
    aot_gpr[5] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(31)));
    aot_gpr[4] = (aot_gpr[4] & 128u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[18] >> 27u);
      if (branch_taken) {
          goto L_088A38EC;
      }
      goto L_088A38CC;
    }
L_088A38CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(492), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3016)));
    aot_gpr[5] = (aot_gpr[5] | 4u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3016), aot_gpr[5]);
      if (branch_taken) {
          goto L_088A38F4;
      }
      goto L_088A38EC;
    }
L_088A38EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(492), static_cast<std::uint8_t>(0u));
    goto L_088A38F4;
L_088A38F4:
    aot_gpr[4] = (aot_gpr[18] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3930;
      }
      goto L_088A3900;
    }
L_088A3900:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3016)));
    aot_gpr[4] = (aot_gpr[4] & 8u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A3920;
      }
      goto L_088A3914;
    }
L_088A3914:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x088A3920u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0233_entry, 233u, 46u, 0x088ED59Cu>(ctx, &aot_mem) && ctx.pc == 0x088A3920u) goto L_088A3920;
    return;
L_088A3920:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3016)));
    aot_gpr[5] = (aot_gpr[5] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3016), aot_gpr[5]);
    goto L_088A3930;
L_088A3930:
    aot_gpr[4] = (aot_gpr[18] & 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3950;
      }
      goto L_088A393C;
    }
L_088A393C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3016)));
    aot_gpr[5] = (aot_gpr[5] | 128u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3016), aot_gpr[5]);
      if (branch_taken) {
          goto L_088A3964;
      }
      goto L_088A3950;
    }
L_088A3950:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3016)));
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3016), aot_gpr[5]);
    goto L_088A3964;
L_088A3964:
    aot_gpr[4] = (aot_gpr[18] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A39C0;
      }
      goto L_088A3970;
    }
L_088A3970:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3016)));
    aot_gpr[4] = (aot_gpr[4] & 16u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A39B0;
      }
      goto L_088A3984;
    }
L_088A3984:
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (17658u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088A39B0u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 124u, 0x088CB888u>(ctx, &aot_mem) && ctx.pc == 0x088A39B0u) goto L_088A39B0;
    return;
L_088A39B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3016)));
    aot_gpr[5] = (aot_gpr[5] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3016), aot_gpr[5]);
    goto L_088A39C0;
L_088A39C0:
    aot_gpr[4] = (aot_gpr[18] & 4u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3A08;
      }
      goto L_088A39CC;
    }
L_088A39CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3016)));
    aot_gpr[4] = (aot_gpr[4] & 32u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A39F4;
      }
      goto L_088A39E0;
    }
L_088A39E0:
    aot_gpr[5] = (18804u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (aot_gpr[5] | 9216u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(220), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088A39F4;
L_088A39F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3016)));
    aot_gpr[5] = (aot_gpr[5] | 32u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3016), aot_gpr[5]);
      if (branch_taken) {
          goto L_088A3A14;
      }
      goto L_088A3A08;
    }
L_088A3A08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(48)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(220), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088A3A14;
L_088A3A14:
    aot_gpr[4] = (aot_gpr[18] & 8u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3A80;
      }
      goto L_088A3A20;
    }
L_088A3A20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3016)));
    aot_gpr[4] = (aot_gpr[4] & 64u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_088A3A70;
      }
      goto L_088A3A34;
    }
L_088A3A34:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(712), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(716), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(728)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A3A70;
      }
      goto L_088A3A58;
    }
L_088A3A58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(732)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(500), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(504), aot_gpr[6]);
    goto L_088A3A70;
L_088A3A70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3016)));
    aot_gpr[5] = (aot_gpr[5] | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3016), aot_gpr[5]);
    goto L_088A3A80;
L_088A3A80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(31)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] & 32u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3016)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 2u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A3B1C;
      }
      goto L_088A3AA4;
    }
L_088A3AA4:
    aot_gpr[4] = (0u | 1u);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(218), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(148));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(152));
    aot_gpr[31] = (0x088A3AD8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 58u, 0x0888467Cu>(ctx, &aot_mem) && ctx.pc == 0x088A3AD8u) goto L_088A3AD8;
    return;
L_088A3AD8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(244), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(248), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(252), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(31)));
    aot_gpr[5] = (18804u << 16u);
    aot_gpr[6] = (aot_gpr[4] & 64u);
    aot_gpr[4] = (aot_gpr[5] | 9216u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088A3B1Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 33u, 0x088CC30Cu>(ctx, &aot_mem) && ctx.pc == 0x088A3B1Cu) goto L_088A3B1C;
    return;
L_088A3B1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3B24;
      }
      goto L_088A3B24;
    }
L_088A3B24:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A3B44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088A3BA0;
      }
      goto L_088A3B68;
    }
L_088A3B68:
    aot_gpr[31] = (0x088A3B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x088A3B70u) goto L_088A3B70;
    return;
L_088A3B70:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3B98;
      }
      goto L_088A3B78;
    }
L_088A3B78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x088A3B84u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 75u, 0x089833BCu>(ctx, &aot_mem) && ctx.pc == 0x088A3B84u) goto L_088A3B84;
    return;
L_088A3B84:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A3BA8;
      }
      goto L_088A3B90;
    }
L_088A3B90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3BD0;
      }
      goto L_088A3B98;
    }
L_088A3B98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 56u, 0x088A439Cu>(ctx, &aot_mem); return;
      }
      goto L_088A3BA0;
    }
L_088A3BA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 56u, 0x088A439Cu>(ctx, &aot_mem); return;
      }
      goto L_088A3BA8;
    }
L_088A3BA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x088A3BB8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x088A3BB8u) goto L_088A3BB8;
    return;
L_088A3BB8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 41u);
    aot_gpr[31] = (0x088A3BC8u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 146u, 0x08962A68u>(ctx, &aot_mem) && ctx.pc == 0x088A3BC8u) goto L_088A3BC8;
    return;
L_088A3BC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 56u, 0x088A439Cu>(ctx, &aot_mem); return;
      }
      goto L_088A3BD0;
    }
L_088A3BD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(24760));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28636)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A3BF8;
      }
      goto L_088A3BF4;
    }
L_088A3BF4:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    goto L_088A3BF8;
L_088A3BF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3C24;
      }
      goto L_088A3C04;
    }
L_088A3C04:
    aot_gpr[31] = (0x088A3C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x088A3C0Cu) goto L_088A3C0C;
    return;
L_088A3C0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A3C2C;
      }
      goto L_088A3C1C;
    }
L_088A3C1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3C50;
      }
      goto L_088A3C24;
    }
L_088A3C24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 56u, 0x088A439Cu>(ctx, &aot_mem); return;
      }
      goto L_088A3C2C;
    }
L_088A3C2C:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x088A3C38u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x088A3C38u) goto L_088A3C38;
    return;
L_088A3C38:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 42u);
    aot_gpr[31] = (0x088A3C48u);
    aot_gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 146u, 0x08962A68u>(ctx, &aot_mem) && ctx.pc == 0x088A3C48u) goto L_088A3C48;
    return;
L_088A3C48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 56u, 0x088A439Cu>(ctx, &aot_mem); return;
      }
      goto L_088A3C50;
    }
L_088A3C50:
    aot_gpr[31] = (0x088A3C58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x088A3C58u) goto L_088A3C58;
    return;
L_088A3C58:
    aot_gpr[31] = (0x088A3C60u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 146u, 0x08964AB8u>(ctx, &aot_mem) && ctx.pc == 0x088A3C60u) goto L_088A3C60;
    return;
L_088A3C60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 56u, 0x088A439Cu>(ctx, &aot_mem); return;
      }
      goto L_088A3C74;
    }
L_088A3C74:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088A3E80;
      }
      goto L_088A3C84;
    }
L_088A3C84:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088A3F5C;
      }
      goto L_088A3C8C;
    }
L_088A3C8C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A3FF0;
      }
      goto L_088A3C94;
    }
L_088A3C94:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 42u, 0x088A42E8u>(ctx, &aot_mem); return;
      }
      goto L_088A3C9C;
    }
L_088A3C9C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 55u, 0x088A4394u>(ctx, &aot_mem); return;
      }
      goto L_088A3CA4;
    }
L_088A3CA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    if (aot_gpr[4] != 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_088A3CEC;
    }
    goto L_088A3CB0;
L_088A3CB0:
    if (aot_gpr[17] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_088A3CEC;
    }
    goto L_088A3CB8;
L_088A3CB8:
    aot_gpr[31] = (0x088A3CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x088A3CC0u) goto L_088A3CC0;
    return;
L_088A3CC0:
    aot_gpr[31] = (0x088A3CC8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 200u, 0x08964E38u>(ctx, &aot_mem) && ctx.pc == 0x088A3CC8u) goto L_088A3CC8;
    return;
L_088A3CC8:
    aot_gpr[8] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088A3CD4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 214u, 0x088A2E74u>(ctx, &aot_mem) && ctx.pc == 0x088A3CD4u) goto L_088A3CD4;
    return;
L_088A3CD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A3CE8;
      }
      goto L_088A3CE0;
    }
L_088A3CE0:
    aot_gpr[31] = (0x088A3CE8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 26u, 0x088A21C0u>(ctx, &aot_mem) && ctx.pc == 0x088A3CE8u) goto L_088A3CE8;
    return;
L_088A3CE8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_088A3CEC;
L_088A3CEC:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7048)));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088A3D9C;
      }
      goto L_088A3D10;
    }
L_088A3D10:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088A3D24u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 207u, 0x088A2DFCu>(ctx, &aot_mem) && ctx.pc == 0x088A3D24u) goto L_088A3D24;
    return;
L_088A3D24:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3D4C;
      }
      goto L_088A3D2C;
    }
L_088A3D2C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088A3D44u);
    aot_gpr[7] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 23u, 0x088A2158u>(ctx, &aot_mem) && ctx.pc == 0x088A3D44u) goto L_088A3D44;
    return;
L_088A3D44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3D64;
      }
      goto L_088A3D4C;
    }
L_088A3D4C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088A3D64u);
    aot_gpr[7] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 23u, 0x088A2158u>(ctx, &aot_mem) && ctx.pc == 0x088A3D64u) goto L_088A3D64;
    return;
L_088A3D64:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x088A3D70u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 167u, 0x088A2B38u>(ctx, &aot_mem) && ctx.pc == 0x088A3D70u) goto L_088A3D70;
    return;
L_088A3D70:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3D9C;
      }
      goto L_088A3D78;
    }
L_088A3D78:
    aot_gpr[31] = (0x088A3D80u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 19u, 0x088A2134u>(ctx, &aot_mem) && ctx.pc == 0x088A3D80u) goto L_088A3D80;
    return;
L_088A3D80:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3D9C;
      }
      goto L_088A3D88;
    }
L_088A3D88:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x088A3D9Cu);
    aot_gpr[7] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 23u, 0x088A2158u>(ctx, &aot_mem) && ctx.pc == 0x088A3D9Cu) goto L_088A3D9C;
    return;
L_088A3D9C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28636)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A3E78;
      }
      goto L_088A3DB8;
    }
L_088A3DB8:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(105))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x088A3DD4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 189u, 0x088A0C6Cu>(ctx, &aot_mem) && ctx.pc == 0x088A3DD4u) goto L_088A3DD4;
    return;
L_088A3DD4:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(217), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3E64;
      }
      goto L_088A3DEC;
    }
L_088A3DEC:
    aot_gpr[5] = (aot_gpr[4] << 8u);
    aot_gpr[7] = (0u - aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(720)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A3E18;
      }
      goto L_088A3E10;
    }
L_088A3E10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3E54;
      }
      goto L_088A3E18;
    }
L_088A3E18:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(716))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_088A3E54;
      }
      goto L_088A3E24;
    }
L_088A3E24:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(716))))));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[7] = (aot_gpr[5] << 5u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(152)));
    aot_gpr[7] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_088A3E54;
L_088A3E54:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A3DEC;
      }
      goto L_088A3E64;
    }
L_088A3E64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x088A3E70u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 39u, 0x08983204u>(ctx, &aot_mem) && ctx.pc == 0x088A3E70u) goto L_088A3E70;
    return;
L_088A3E70:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088A3E78;
L_088A3E78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 56u, 0x088A439Cu>(ctx, &aot_mem); return;
      }
      goto L_088A3E80;
    }
L_088A3E80:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7048)));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088A3EC4;
      }
      goto L_088A3EA8;
    }
L_088A3EA8:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088A3EC4u);
    aot_gpr[7] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 23u, 0x088A2158u>(ctx, &aot_mem) && ctx.pc == 0x088A3EC4u) goto L_088A3EC4;
    return;
L_088A3EC4:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3F4C;
      }
      goto L_088A3ECC;
    }
L_088A3ECC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[31] = (0x088A3EE8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 219u, 0x088A2EBCu>(ctx, &aot_mem) && ctx.pc == 0x088A3EE8u) goto L_088A3EE8;
    return;
L_088A3EE8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3F4C;
      }
      goto L_088A3EF0;
    }
L_088A3EF0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A3F4C;
      }
      goto L_088A3F0C;
    }
L_088A3F0C:
    aot_gpr[31] = (0x088A3F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 231u, 0x0889AD54u>(ctx, &aot_mem) && ctx.pc == 0x088A3F14u) goto L_088A3F14;
    return;
L_088A3F14:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A3F4C;
      }
      goto L_088A3F1C;
    }
L_088A3F1C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), aot_gpr[6]);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[31] = (0x088A3F34u);
    aot_gpr[7] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 23u, 0x088A2158u>(ctx, &aot_mem) && ctx.pc == 0x088A3F34u) goto L_088A3F34;
    return;
L_088A3F34:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[31] = (0x088A3F44u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088A3F44u) goto L_088A3F44;
    return;
L_088A3F44:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088A3F4C;
L_088A3F4C:
    aot_gpr[31] = (0x088A3F54u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 79u, 0x088A1918u>(ctx, &aot_mem) && ctx.pc == 0x088A3F54u) goto L_088A3F54;
    return;
L_088A3F54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 56u, 0x088A439Cu>(ctx, &aot_mem); return;
      }
      goto L_088A3F5C;
    }
L_088A3F5C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[31] = (0x088A3F80u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6408));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 218u, 0x08873CE0u>(ctx, &aot_mem) && ctx.pc == 0x088A3F80u) goto L_088A3F80;
    return;
L_088A3F80:
    aot_gpr[31] = (0x088A3F88u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 79u, 0x088A1918u>(ctx, &aot_mem) && ctx.pc == 0x088A3F88u) goto L_088A3F88;
    return;
L_088A3F88:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28636)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A3FE8;
      }
      goto L_088A3FA4;
    }
L_088A3FA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), aot_gpr[4]);
      if (branch_taken) {
          goto L_088A3FC8;
      }
      goto L_088A3FB4;
    }
L_088A3FB4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 5u);
    aot_gpr[31] = (0x088A3FC8u);
    aot_gpr[7] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 23u, 0x088A2158u>(ctx, &aot_mem) && ctx.pc == 0x088A3FC8u) goto L_088A3FC8;
    return;
L_088A3FC8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (0x088A3FD8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7504));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 218u, 0x08873CE0u>(ctx, &aot_mem) && ctx.pc == 0x088A3FD8u) goto L_088A3FD8;
    return;
L_088A3FD8:
    aot_gpr[31] = (0x088A3FE0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 101u, 0x088A1A7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A3FE0u) goto L_088A3FE0;
    return;
L_088A3FE0:
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088A3FE8;
L_088A3FE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 56u, 0x088A439Cu>(ctx, &aot_mem); return;
      }
      goto L_088A3FF0;
    }
L_088A3FF0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    ctx.pc = 0x088A4000u; return;
}

void recomp_unit_0159(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0159_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_159(Runtime &runtime) {
    runtime.register_generated_unit(159u, 0x088A3000u, 4096u, &recomp_unit_0159, &recomp_unit_0159_entry);
    runtime.register_function(0x088A3000u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3008u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3018u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3020u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3030u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3054u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3080u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3094u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A30A0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A30B0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A30B8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A30C4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A30D4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A30DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A30E8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A30F0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3130u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3134u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3144u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A314Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3150u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3178u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A31A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A31BCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A31C4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A31D0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A31E4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A31ECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3200u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A323Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A325Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3290u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3298u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A32B0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3314u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3334u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3384u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A338Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A339Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A33DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A33E4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3400u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3410u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3428u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3434u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3444u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3454u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3460u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A346Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3474u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A347Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3490u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A34B0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A34B8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A34BCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A34C8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A34D0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A34DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A34E8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A34F8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3500u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3504u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3528u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3550u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3564u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3584u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3598u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A35A0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A35A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A35B0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A35B8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A35C0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A35E0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A36E0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A36FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A371Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3738u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3754u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3770u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3790u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A37ACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A37C8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A37E4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3804u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3820u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A38CCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A38ECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A38F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3900u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3914u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3920u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3930u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A393Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3950u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3964u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3970u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3984u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A39B0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A39C0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A39CCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A39E0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A39F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3A08u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3A14u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3A20u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3A34u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3A58u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3A70u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3A80u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3AA4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3AD8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3B1Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3B24u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3B44u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3B68u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3B70u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3B78u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3B84u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3B90u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3B98u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3BA0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3BA8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3BB8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3BC8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3BD0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3BF4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3BF8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3C04u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3C0Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3C1Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3C24u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3C2Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3C38u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3C48u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3C50u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3C58u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3C60u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3C74u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3C84u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3C8Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3C94u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3C9Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3CA4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3CB0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3CB8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3CC0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3CC8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3CD4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3CE0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3CE8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3CECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3D10u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3D24u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3D2Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3D44u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3D4Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3D64u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3D70u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3D78u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3D80u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3D88u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3D9Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3DB8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3DD4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3DECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3E10u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3E18u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3E24u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3E54u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3E64u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3E70u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3E78u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3E80u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3EA8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3EC4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3ECCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3EE8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3EF0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3F0Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3F14u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3F1Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3F34u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3F44u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3F4Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3F54u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3F5Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3F80u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3F88u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3FA4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3FB4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3FC8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3FD8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3FE0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3FE8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x088A3FF0u, &recomp_unit_0159, "recomp_unit_0159");
}
} // namespace psprecomp
