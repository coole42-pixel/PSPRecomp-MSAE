#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0110[1018] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0,
    0, 0, 9, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 14, 0, 0, 0, 15, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18,
    0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 31, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34,
    0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 39, 0, 0, 40, 41, 0, 0, 0,
    0, 0, 0, 42, 43, 0, 0, 44, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 48, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 53, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 71, 72, 0, 0, 0, 73, 0,
    0, 74, 0, 75, 0, 0, 0, 0, 76, 77, 0, 0, 78, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 88,
    0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    97, 0, 0, 98, 0, 0, 0, 99, 0, 100, 0, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0, 0, 0, 0, 106, 0, 0, 107, 0, 108, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 112, 0, 0, 0,
    0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 0, 122, 123, 0, 124, 0, 0, 125, 126, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 129,
    0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 0, 135,
    136, 0, 0, 137, 0, 0, 138, 139, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143,
    0, 144, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 149, 0, 150, 0, 151, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 162, 0, 163, 0, 164, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 0, 172, 173, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 176, 0, 0, 177, 0, 0, 0, 178, 0, 179, 0, 180, 181, 0, 182, 0, 0, 0, 0, 0, 0,
    0, 0, 183, 0, 0, 0, 0, 0, 184, 185, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0,
    0, 0, 0, 0, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0,
    0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0,
    203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 206, 0, 0, 207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 0, 212, 0, 213, 0, 0,
    214, 0, 0, 215, 0, 216, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 221, 0, 0, 222,
};
void recomp_unit_0110_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08872004u;
        entry_id = (entry_delta < 4072u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0110[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08872004;
    case 2u: goto L_08872030;
    case 3u: goto L_08872038;
    case 4u: goto L_08872040;
    case 5u: goto L_08872058;
    case 6u: goto L_08872064;
    case 7u: goto L_08872074;
    case 8u: goto L_0887207C;
    case 9u: goto L_0887208C;
    case 10u: goto L_08872098;
    case 11u: goto L_088720A4;
    case 12u: goto L_088720B4;
    case 13u: goto L_088720BC;
    case 14u: goto L_088720C8;
    case 15u: goto L_088720D8;
    case 16u: goto L_088720E0;
    case 17u: goto L_088720F0;
    case 18u: goto L_08872100;
    case 19u: goto L_08872108;
    case 20u: goto L_08872114;
    case 21u: goto L_0887212C;
    case 22u: goto L_08872170;
    case 23u: goto L_0887217C;
    case 24u: goto L_08872194;
    case 25u: goto L_088721B0;
    case 26u: goto L_088721BC;
    case 27u: goto L_088721D0;
    case 28u: goto L_088721D8;
    case 29u: goto L_0887222C;
    case 30u: goto L_08872234;
    case 31u: goto L_08872240;
    case 32u: goto L_08872244;
    case 33u: goto L_08872258;
    case 34u: goto L_08872280;
    case 35u: goto L_0887228C;
    case 36u: goto L_088722A0;
    case 37u: goto L_088722C8;
    case 38u: goto L_088722E0;
    case 39u: goto L_088722E4;
    case 40u: goto L_088722F0;
    case 41u: goto L_088722F4;
    case 42u: goto L_08872310;
    case 43u: goto L_08872314;
    case 44u: goto L_08872320;
    case 45u: goto L_08872328;
    case 46u: goto L_08872334;
    case 47u: goto L_08872350;
    case 48u: goto L_08872354;
    case 49u: goto L_08872358;
    case 50u: goto L_08872364;
    case 51u: goto L_0887239C;
    case 52u: goto L_088723B4;
    case 53u: goto L_088723B8;
    case 54u: goto L_088723C4;
    case 55u: goto L_088723D8;
    case 56u: goto L_0887240C;
    case 57u: goto L_0887241C;
    case 58u: goto L_08872444;
    case 59u: goto L_08872488;
    case 60u: goto L_08872494;
    case 61u: goto L_088724AC;
    case 62u: goto L_088724C8;
    case 63u: goto L_088724E4;
    case 64u: goto L_088724EC;
    case 65u: goto L_08872544;
    case 66u: goto L_08872564;
    case 67u: goto L_08872588;
    case 68u: goto L_08872598;
    case 69u: goto L_088725D4;
    case 70u: goto L_088725DC;
    case 71u: goto L_088725E8;
    case 72u: goto L_088725EC;
    case 73u: goto L_088725FC;
    case 74u: goto L_08872608;
    case 75u: goto L_08872610;
    case 76u: goto L_08872624;
    case 77u: goto L_08872628;
    case 78u: goto L_08872634;
    case 79u: goto L_0887263C;
    case 80u: goto L_08872648;
    case 81u: goto L_08872664;
    case 82u: goto L_0887266C;
    case 83u: goto L_08872694;
    case 84u: goto L_088726A4;
    case 85u: goto L_088726C8;
    case 86u: goto L_088726F0;
    case 87u: goto L_088726FC;
    case 88u: goto L_08872700;
    case 89u: goto L_08872708;
    case 90u: goto L_0887271C;
    case 91u: goto L_08872730;
    case 92u: goto L_0887274C;
    case 93u: goto L_08872788;
    case 94u: goto L_08872794;
    case 95u: goto L_088727BC;
    case 96u: goto L_088727C4;
    case 97u: goto L_08872804;
    case 98u: goto L_08872810;
    case 99u: goto L_08872820;
    case 100u: goto L_08872828;
    case 101u: goto L_08872830;
    case 102u: goto L_08872838;
    case 103u: goto L_08872840;
    case 104u: goto L_08872848;
    case 105u: goto L_08872850;
    case 106u: goto L_08872864;
    case 107u: goto L_08872870;
    case 108u: goto L_08872878;
    case 109u: goto L_088728A8;
    case 110u: goto L_088728E4;
    case 111u: goto L_088728EC;
    case 112u: goto L_088728F4;
    case 113u: goto L_08872910;
    case 114u: goto L_08872918;
    case 115u: goto L_08872930;
    case 116u: goto L_08872938;
    case 117u: goto L_0887294C;
    case 118u: goto L_08872964;
    case 119u: goto L_08872990;
    case 120u: goto L_0887299C;
    case 121u: goto L_088729A8;
    case 122u: goto L_088729B8;
    case 123u: goto L_088729BC;
    case 124u: goto L_088729C4;
    case 125u: goto L_088729D0;
    case 126u: goto L_088729D4;
    case 127u: goto L_088729E8;
    case 128u: goto L_088729F8;
    case 129u: goto L_08872A00;
    case 130u: goto L_08872A18;
    case 131u: goto L_08872A2C;
    case 132u: goto L_08872A58;
    case 133u: goto L_08872A64;
    case 134u: goto L_08872A70;
    case 135u: goto L_08872A80;
    case 136u: goto L_08872A84;
    case 137u: goto L_08872A90;
    case 138u: goto L_08872A9C;
    case 139u: goto L_08872AA0;
    case 140u: goto L_08872AB4;
    case 141u: goto L_08872AC0;
    case 142u: goto L_08872AF0;
    case 143u: goto L_08872B00;
    case 144u: goto L_08872B08;
    case 145u: goto L_08872B10;
    case 146u: goto L_08872B1C;
    case 147u: goto L_08872B40;
    case 148u: goto L_08872B50;
    case 149u: goto L_08872B58;
    case 150u: goto L_08872B60;
    case 151u: goto L_08872B68;
    case 152u: goto L_08872B74;
    case 153u: goto L_08872BA4;
    case 154u: goto L_08872BB0;
    case 155u: goto L_08872BC0;
    case 156u: goto L_08872BC8;
    case 157u: goto L_08872BD0;
    case 158u: goto L_08872BF0;
    case 159u: goto L_08872C18;
    case 160u: goto L_08872C24;
    case 161u: goto L_08872C30;
    case 162u: goto L_08872C44;
    case 163u: goto L_08872C4C;
    case 164u: goto L_08872C54;
    case 165u: goto L_08872C58;
    case 166u: goto L_08872C60;
    case 167u: goto L_08872CA4;
    case 168u: goto L_08872CB4;
    case 169u: goto L_08872CBC;
    case 170u: goto L_08872CD0;
    case 171u: goto L_08872CD8;
    case 172u: goto L_08872CE4;
    case 173u: goto L_08872CE8;
    case 174u: goto L_08872D04;
    case 175u: goto L_08872D2C;
    case 176u: goto L_08872D30;
    case 177u: goto L_08872D3C;
    case 178u: goto L_08872D4C;
    case 179u: goto L_08872D54;
    case 180u: goto L_08872D5C;
    case 181u: goto L_08872D60;
    case 182u: goto L_08872D68;
    case 183u: goto L_08872D8C;
    case 184u: goto L_08872DA4;
    case 185u: goto L_08872DA8;
    case 186u: goto L_08872DB0;
    case 187u: goto L_08872DC8;
    case 188u: goto L_08872DE8;
    case 189u: goto L_08872DF8;
    case 190u: goto L_08872E18;
    case 191u: goto L_08872E20;
    case 192u: goto L_08872E28;
    case 193u: goto L_08872E30;
    case 194u: goto L_08872E38;
    case 195u: goto L_08872E58;
    case 196u: goto L_08872E64;
    case 197u: goto L_08872E70;
    case 198u: goto L_08872E90;
    case 199u: goto L_08872E9C;
    case 200u: goto L_08872EBC;
    case 201u: goto L_08872EDC;
    case 202u: goto L_08872EFC;
    case 203u: goto L_08872F04;
    case 204u: goto L_08872F24;
    case 205u: goto L_08872F30;
    case 206u: goto L_08872F38;
    case 207u: goto L_08872F44;
    case 208u: goto L_08872F4C;
    case 209u: goto L_08872F54;
    case 210u: goto L_08872F5C;
    case 211u: goto L_08872F64;
    case 212u: goto L_08872F70;
    case 213u: goto L_08872F78;
    case 214u: goto L_08872F84;
    case 215u: goto L_08872F90;
    case 216u: goto L_08872F98;
    case 217u: goto L_08872FA8;
    case 218u: goto L_08872FB0;
    case 219u: goto L_08872FCC;
    case 220u: goto L_08872FD4;
    case 221u: goto L_08872FDC;
    case 222u: goto L_08872FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08872004:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08872030u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08872030u) goto L_08872030;
    return;
L_08872030:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) <= 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 15 ? 1u : 0u);
      if (branch_taken) {
          goto L_08872108;
      }
      goto L_08872038;
    }
L_08872038:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08872108;
      }
      goto L_08872040;
    }
L_08872040:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(7344)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872058:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08872064u);
    aot_gpr[5] = (0u | 92u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 197u, 0x08A3AA54u>(ctx, &aot_mem) && ctx.pc == 0x08872064u) goto L_08872064;
    return;
L_08872064:
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08872074u);
    aot_gpr[5] = (0u | 92u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 197u, 0x08A3AA54u>(ctx, &aot_mem) && ctx.pc == 0x08872074u) goto L_08872074;
    return;
L_08872074:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08872108;
      }
      goto L_0887207C;
    }
L_0887207C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0887208Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7288));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x0887208Cu) goto L_0887208C;
    return;
L_0887208C:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(9));
    aot_gpr[31] = (0x08872098u);
    aot_gpr[5] = (0u | 92u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 197u, 0x08A3AA54u>(ctx, &aot_mem) && ctx.pc == 0x08872098u) goto L_08872098;
    return;
L_08872098:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x088720A4u);
    aot_gpr[5] = (0u | 95u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 197u, 0x08A3AA54u>(ctx, &aot_mem) && ctx.pc == 0x088720A4u) goto L_088720A4;
    return;
L_088720A4:
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088720B4u);
    aot_gpr[5] = (0u | 46u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 197u, 0x08A3AA54u>(ctx, &aot_mem) && ctx.pc == 0x088720B4u) goto L_088720B4;
    return;
L_088720B4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08872108;
      }
      goto L_088720BC;
    }
L_088720BC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088720C8u);
    aot_gpr[5] = (0u | 92u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 197u, 0x08A3AA54u>(ctx, &aot_mem) && ctx.pc == 0x088720C8u) goto L_088720C8;
    return;
L_088720C8:
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088720D8u);
    aot_gpr[5] = (0u | 46u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 197u, 0x08A3AA54u>(ctx, &aot_mem) && ctx.pc == 0x088720D8u) goto L_088720D8;
    return;
L_088720D8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08872108;
      }
      goto L_088720E0;
    }
L_088720E0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088720F0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7300));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x088720F0u) goto L_088720F0;
    return;
L_088720F0:
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(10));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08872100u);
    aot_gpr[5] = (0u | 46u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 197u, 0x08A3AA54u>(ctx, &aot_mem) && ctx.pc == 0x08872100u) goto L_08872100;
    return;
L_08872100:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08872108;
      }
      goto L_08872108;
    }
L_08872108:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08872114u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08872114u) goto L_08872114;
    return;
L_08872114:
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
L_0887212C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(6192));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(6384));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25452), 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[17] = (2214u << 16u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(7312));
    goto L_08872170;
L_08872170:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0887217Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0887217Cu) goto L_0887217C;
    return;
L_0887217C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08872170;
      }
      goto L_08872194;
    }
L_08872194:
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
L_088721B0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6104));
    aot_gpr[5] = (0u | 0u);
    goto L_088721BC;
L_088721BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088721BC;
      }
      goto L_088721D0;
    }
L_088721D0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088721D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(25448)));
    aot_gpr[22] = (2216u << 16u);
    aot_gpr[20] = (2218u << 16u);
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(6016));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(6104));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[23] = (2216u << 16u);
      if (branch_taken) {
          goto L_08872240;
      }
      goto L_0887222C;
    }
L_0887222C:
    aot_gpr[31] = (0x08872234u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 30u, 0x0891D23Cu>(ctx, &aot_mem) && ctx.pc == 0x08872234u) goto L_08872234;
    return;
L_08872234:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-30480)));
      if (branch_taken) {
          goto L_08872244;
      }
      goto L_08872240;
    }
L_08872240:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-30480)));
    goto L_08872244;
L_08872244:
    aot_gpr[18] = (aot_gpr[22] | 0u);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-30480), aot_gpr[18]);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[20]);
    goto L_08872258;
L_08872258:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08872280u);
    aot_gpr[6] = (0u | 12u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08872280u) goto L_08872280;
    return;
L_08872280:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088722F4;
      }
      goto L_0887228C;
    }
L_0887228C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[18]);
      if (branch_taken) {
          goto L_088722F0;
      }
      goto L_088722A0;
    }
L_088722A0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[4] << 7u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088722C8u);
    aot_gpr[5] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088722C8u) goto L_088722C8;
    return;
L_088722C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088722F0;
      }
      goto L_088722E0;
    }
L_088722E0:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    goto L_088722E4;
L_088722E4:
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088722E4;
      }
      goto L_088722F0;
    }
L_088722F0:
    aot_gpr[16] = (aot_gpr[17] | 0u);
    goto L_088722F4;
L_088722F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08872320;
      }
      goto L_08872310;
    }
L_08872310:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08872314;
L_08872314:
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08872314;
      }
      goto L_08872320;
    }
L_08872320:
    if (aot_gpr[5] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
        goto L_08872358;
    }
    goto L_08872328;
L_08872328:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08872354;
      }
      goto L_08872334;
    }
L_08872334:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08872350u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08872350u) goto L_08872350;
    return;
L_08872350:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08872354;
L_08872354:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08872358;
L_08872358:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_088723C4;
      }
      goto L_08872364;
    }
L_08872364:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (aot_gpr[5] << 7u);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[4]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0887239Cu);
    aot_gpr[5] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887239Cu) goto L_0887239C;
    return;
L_0887239C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088723C4;
      }
      goto L_088723B4;
    }
L_088723B4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_088723B8;
L_088723B8:
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088723B8;
      }
      goto L_088723C4;
    }
L_088723C4:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[21] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08872258;
      }
      goto L_088723D8;
    }
L_088723D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-30480), aot_gpr[30]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887240C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0887241Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 120u, 0x08888C48u>(ctx, &aot_mem) && ctx.pc == 0x0887241Cu) goto L_0887241C;
    return;
L_0887241C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(25456)));
    aot_gpr[5] = (aot_gpr[2] ^ aot_gpr[5]);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(25457), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(25456), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872444:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(6192));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(6384));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25452), 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[17] = (2214u << 16u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(7312));
    goto L_08872488;
L_08872488:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08872494u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08872494u) goto L_08872494;
    return;
L_08872494:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08872488;
      }
      goto L_088724AC;
    }
L_088724AC:
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
L_088724C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1168));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(25457)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1160), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1164), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08872588;
      }
      goto L_088724E4;
    }
L_088724E4:
    aot_gpr[31] = (0x088724ECu);
    // nop
    goto L_08872444;
L_088724EC:
    aot_gpr[4] = (24948u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24932));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (28787u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28767));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (26469u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21084));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (21328u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11824));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (20041u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24400));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (16717u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24393));
    aot_gpr[5] = (0u | 20041u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[31] = (0x08872544u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08872544u) goto L_08872544;
    return;
L_08872544:
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25452)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6192));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[31] = (0x08872564u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08872564u) goto L_08872564;
    return;
L_08872564:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25452)));
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(6384));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(25452), aot_gpr[4]);
    goto L_08872588;
L_08872588:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1160)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1164)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1168));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872598:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(25448)));
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(6016));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (2216u << 16u);
      if (branch_taken) {
          goto L_088725E8;
      }
      goto L_088725D4;
    }
L_088725D4:
    aot_gpr[31] = (0x088725DCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 30u, 0x0891D23Cu>(ctx, &aot_mem) && ctx.pc == 0x088725DCu) goto L_088725DC;
    return;
L_088725DC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
      if (branch_taken) {
          goto L_088725EC;
      }
      goto L_088725E8;
    }
L_088725E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    goto L_088725EC;
L_088725EC:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-30480), aot_gpr[5]);
    aot_gpr[18] = (0u | 0u);
    goto L_088725FC;
L_088725FC:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08872694;
      }
      goto L_08872608;
    }
L_08872608:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08872694;
      }
      goto L_08872610;
    }
L_08872610:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08872634;
      }
      goto L_08872624;
    }
L_08872624:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08872628;
L_08872628:
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08872628;
      }
      goto L_08872634;
    }
L_08872634:
    if (aot_gpr[6] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), 0u);
        goto L_0887266C;
    }
    goto L_0887263C;
L_0887263C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), 0u);
        goto L_0887266C;
    }
    goto L_08872648;
L_08872648:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08872664u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08872664u) goto L_08872664;
    return;
L_08872664:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), 0u);
    goto L_0887266C;
L_0887266C:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08872694u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08872694u) goto L_08872694;
    return;
L_08872694:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088725FC;
      }
      goto L_088726A4;
    }
L_088726A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-30480), aot_gpr[17]);
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
L_088726C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x088726F0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7332));
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 87u, 0x0891E5E8u>(ctx, &aot_mem) && ctx.pc == 0x088726F0u) goto L_088726F0;
    return;
L_088726F0:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (2218u << 16u);
      if (branch_taken) {
          goto L_08872730;
      }
      goto L_088726FC;
    }
L_088726FC:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(6104));
    goto L_08872700;
L_08872700:
    aot_gpr[31] = (0x08872708u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 168u, 0x088BFF78u>(ctx, &aot_mem) && ctx.pc == 0x08872708u) goto L_08872708;
    return;
L_08872708:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[18] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x0887271Cu);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 101u, 0x08A39528u>(ctx, &aot_mem) && ctx.pc == 0x0887271Cu) goto L_0887271C;
    return;
L_0887271C:
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08872700;
      }
      goto L_08872730;
    }
L_08872730:
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
L_0887274C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
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
    aot_gpr[31] = (0x08872788u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7320));
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 87u, 0x0891E5E8u>(ctx, &aot_mem) && ctx.pc == 0x08872788u) goto L_08872788;
    return;
L_08872788:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_08872878;
      }
      goto L_08872794;
    }
L_08872794:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6016));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6104));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[30] = (0u | 2u);
    aot_gpr[23] = (0u | 10u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[22] = (0u | 12u);
    aot_gpr[21] = (0u | 8u);
    aot_gpr[20] = (0u | 9u);
    goto L_088727BC;
L_088727BC:
    aot_gpr[31] = (0x088727C4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 168u, 0x088BFF78u>(ctx, &aot_mem) && ctx.pc == 0x088727C4u) goto L_088727C4;
    return;
L_088727C4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[16] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] << 7u);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x08872804u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08872804u) goto L_08872804;
    return;
L_08872804:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08872810u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 101u, 0x08A39528u>(ctx, &aot_mem) && ctx.pc == 0x08872810u) goto L_08872810;
    return;
L_08872810:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(128), aot_gpr[2]);
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = aot_gpr[16] == aot_gpr[4];
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08872848;
      }
      goto L_08872820;
    }
L_08872820:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[30];
    // nop
      if (branch_taken) {
          goto L_08872848;
      }
      goto L_08872828;
    }
L_08872828:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[23];
    // nop
      if (branch_taken) {
          goto L_08872848;
      }
      goto L_08872830;
    }
L_08872830:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_08872848;
      }
      goto L_08872838;
    }
L_08872838:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_08872848;
      }
      goto L_08872840;
    }
L_08872840:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_08872864;
      }
      goto L_08872848;
    }
L_08872848:
    aot_gpr[31] = (0x08872850u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 101u, 0x08A39528u>(ctx, &aot_mem) && ctx.pc == 0x08872850u) goto L_08872850;
    return;
L_08872850:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(132), aot_gpr[2]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08872870;
      }
      goto L_08872864;
    }
L_08872864:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(132), 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08872870;
L_08872870:
    { const bool branch_taken = aot_gpr[17] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[18]);
      if (branch_taken) {
          goto L_088727BC;
      }
      goto L_08872878;
    }
L_08872878:
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
L_088728A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(25457)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08872AC0;
      }
      goto L_088728E4;
    }
L_088728E4:
    aot_gpr[31] = (0x088728ECu);
    // nop
    goto L_08872598;
L_088728EC:
    aot_gpr[31] = (0x088728F4u);
    // nop
    goto L_088721B0;
L_088728F4:
    aot_gpr[23] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(25448)));
    aot_gpr[22] = (2216u << 16u);
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (2215u << 16u);
      if (branch_taken) {
          goto L_08872930;
      }
      goto L_08872910;
    }
L_08872910:
    aot_gpr[31] = (0x08872918u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 30u, 0x0891D23Cu>(ctx, &aot_mem) && ctx.pc == 0x08872918u) goto L_08872918;
    return;
L_08872918:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(25452)));
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[30] = (aot_gpr[2] | 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08872938;
      }
      goto L_08872930;
    }
L_08872930:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(25452)));
    goto L_08872938;
L_08872938:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-30480), aot_gpr[30]);
      if (branch_taken) {
          goto L_088729E8;
      }
      goto L_0887294C;
    }
L_0887294C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6192));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[19] = (2215u << 16u);
    goto L_08872964;
L_08872964:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(25448)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[31] = (0x08872990u);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 255u, 0x08876EA0u>(ctx, &aot_mem) && ctx.pc == 0x08872990u) goto L_08872990;
    return;
L_08872990:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_088729D4;
      }
      goto L_0887299C;
    }
L_0887299C:
    aot_gpr[16] = (aot_gpr[5] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088729BC;
      }
      goto L_088729A8;
    }
L_088729A8:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088729B8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 124u, 0x0891D888u>(ctx, &aot_mem) && ctx.pc == 0x088729B8u) goto L_088729B8;
    return;
L_088729B8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088729BC;
L_088729BC:
    aot_gpr[31] = (0x088729C4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(25444), aot_gpr[4]);
    goto L_088726C8;
L_088729C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088729D0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088729D0u) goto L_088729D0;
    return;
L_088729D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(25444), 0u);
    goto L_088729D4;
L_088729D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(25452)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08872964;
      }
      goto L_088729E8;
    }
L_088729E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[31] = (0x088729F8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-30480), aot_gpr[4]);
    goto L_088721D8;
L_088729F8:
    aot_gpr[31] = (0x08872A00u);
    // nop
    goto L_088721B0;
L_08872A00:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-30480), aot_gpr[30]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(25452)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_08872AB4;
      }
      goto L_08872A18;
    }
L_08872A18:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6192));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[19] = (2215u << 16u);
    goto L_08872A2C;
L_08872A2C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(25448)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[31] = (0x08872A58u);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 255u, 0x08876EA0u>(ctx, &aot_mem) && ctx.pc == 0x08872A58u) goto L_08872A58;
    return;
L_08872A58:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_08872AA0;
      }
      goto L_08872A64;
    }
L_08872A64:
    aot_gpr[16] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08872A84;
      }
      goto L_08872A70;
    }
L_08872A70:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08872A80u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 124u, 0x0891D888u>(ctx, &aot_mem) && ctx.pc == 0x08872A80u) goto L_08872A80;
    return;
L_08872A80:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08872A84;
L_08872A84:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(25444), aot_gpr[5]);
    aot_gpr[31] = (0x08872A90u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_0887274C;
L_08872A90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08872A9Cu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08872A9Cu) goto L_08872A9C;
    return;
L_08872A9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(25444), 0u);
    goto L_08872AA0;
L_08872AA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(25452)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08872A2C;
      }
      goto L_08872AB4;
    }
L_08872AB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-30480), aot_gpr[4]);
    goto L_08872AC0;
L_08872AC0:
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
L_08872AF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08872B00u);
    // nop
    goto L_0887240C;
L_08872B00:
    aot_gpr[31] = (0x08872B08u);
    // nop
    goto L_088724C8;
L_08872B08:
    aot_gpr[31] = (0x08872B10u);
    // nop
    goto L_088728A8;
L_08872B10:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872B1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(25458), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08872B40u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(25448), static_cast<std::uint8_t>(aot_gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 120u, 0x08888C48u>(ctx, &aot_mem) && ctx.pc == 0x08872B40u) goto L_08872B40;
    return;
L_08872B40:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[31] = (0x08872B50u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(25456), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0887212C;
L_08872B50:
    aot_gpr[31] = (0x08872B58u);
    // nop
    goto L_088721B0;
L_08872B58:
    aot_gpr[31] = (0x08872B60u);
    // nop
    goto L_088721D8;
L_08872B60:
    aot_gpr[31] = (0x08872B68u);
    // nop
    goto L_08872AF0;
L_08872B68:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872B74:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(6192));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[16] = (2214u << 16u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(7312));
    goto L_08872BA4;
L_08872BA4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08872BB0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08872BB0u) goto L_08872BB0;
    return;
L_08872BB0:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08872BA4;
      }
      goto L_08872BC0;
    }
L_08872BC0:
    aot_gpr[31] = (0x08872BC8u);
    // nop
    goto L_08872598;
L_08872BC8:
    aot_gpr[31] = (0x08872BD0u);
    // nop
    goto L_088721B0;
L_08872BD0:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(25458), static_cast<std::uint8_t>(0u));
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
L_08872BF0:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(6016));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08872C54;
      }
      goto L_08872C18;
    }
L_08872C18:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    goto L_08872C24;
L_08872C24:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = aot_gpr[10] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08872C4C;
      }
      goto L_08872C30;
    }
L_08872C30:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(136));
    aot_gpr[10] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(136));
      if (branch_taken) {
          goto L_08872C24;
      }
      goto L_08872C44;
    }
L_08872C44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08872C54;
      }
      goto L_08872C4C;
    }
L_08872C4C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[9] + aot_gpr[8]);
      if (branch_taken) {
          goto L_08872C58;
      }
      goto L_08872C54;
    }
L_08872C54:
    aot_gpr[2] = (0u | 0u);
    goto L_08872C58;
L_08872C58:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872C60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6016));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08872CE4;
      }
      goto L_08872CA4;
    }
L_08872CA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08872CB4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08872CB4u) goto L_08872CB4;
    return;
L_08872CB4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08872CD8;
      }
      goto L_08872CBC;
    }
L_08872CBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(136));
      if (branch_taken) {
          goto L_08872CA4;
      }
      goto L_08872CD0;
    }
L_08872CD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08872CE4;
      }
      goto L_08872CD8;
    }
L_08872CD8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
      if (branch_taken) {
          goto L_08872CE8;
      }
      goto L_08872CE4;
    }
L_08872CE4:
    aot_gpr[2] = (0u | 0u);
    goto L_08872CE8;
L_08872CE8:
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
L_08872D04:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(6016));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08872D5C;
      }
      goto L_08872D2C;
    }
L_08872D2C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08872D30;
L_08872D30:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08872D54;
      }
      goto L_08872D3C;
    }
L_08872D3C:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(136));
      if (branch_taken) {
          goto L_08872D30;
      }
      goto L_08872D4C;
    }
L_08872D4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08872D5C;
      }
      goto L_08872D54;
    }
L_08872D54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08872D60;
      }
      goto L_08872D5C;
    }
L_08872D5C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08872D60;
L_08872D60:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872D68:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(6016));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08872DA4;
      }
      goto L_08872D8C;
    }
L_08872D8C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] << 7u);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
      if (branch_taken) {
          goto L_08872DA8;
      }
      goto L_08872DA4;
    }
L_08872DA4:
    aot_gpr[2] = (0u | 0u);
    goto L_08872DA8;
L_08872DA8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872DB0:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6104));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872DC8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25440), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872DE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08872DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 202u, 0x08880D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08872DF8u) goto L_08872DF8;
    return;
L_08872DF8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(112));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08872E18u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08872E18u) goto L_08872E18;
    return;
L_08872E18:
    aot_gpr[31] = (0x08872E20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 71u, 0x0881766Cu>(ctx, &aot_mem) && ctx.pc == 0x08872E20u) goto L_08872E20;
    return;
L_08872E20:
    aot_gpr[31] = (0x08872E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 99u, 0x08884B30u>(ctx, &aot_mem) && ctx.pc == 0x08872E28u) goto L_08872E28;
    return;
L_08872E28:
    aot_gpr[31] = (0x08872E30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 74u, 0x0882E520u>(ctx, &aot_mem) && ctx.pc == 0x08872E30u) goto L_08872E30;
    return;
L_08872E30:
    aot_gpr[31] = (0x08872E38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 83u, 0x0882BCD0u>(ctx, &aot_mem) && ctx.pc == 0x08872E38u) goto L_08872E38;
    return;
L_08872E38:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5272)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(112));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08872E58u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08872E58u) goto L_08872E58;
    return;
L_08872E58:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08872E64u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7480)));
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 36u, 0x088C72FCu>(ctx, &aot_mem) && ctx.pc == 0x08872E64u) goto L_08872E64;
    return;
L_08872E64:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08872E70u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7340)));
    if (rt.invoke_chained_direct<&recomp_unit_0265_entry, 265u, 119u, 0x0890DDC0u>(ctx, &aot_mem) && ctx.pc == 0x08872E70u) goto L_08872E70;
    return;
L_08872E70:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4024)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(112));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08872E90u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08872E90u) goto L_08872E90;
    return;
L_08872E90:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08872E9Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2096)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 97u, 0x0880FAB0u>(ctx, &aot_mem) && ctx.pc == 0x08872E9Cu) goto L_08872E9C;
    return;
L_08872E9C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(112));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08872EBCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08872EBCu) goto L_08872EBC;
    return;
L_08872EBC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(112));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08872EDCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08872EDCu) goto L_08872EDC;
    return;
L_08872EDC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-3948)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(112));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08872EFCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08872EFCu) goto L_08872EFC;
    return;
L_08872EFC:
    aot_gpr[31] = (0x08872F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 164u, 0x088AFF50u>(ctx, &aot_mem) && ctx.pc == 0x08872F04u) goto L_08872F04;
    return;
L_08872F04:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5260)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(112));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08872F24u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08872F24u) goto L_08872F24;
    return;
L_08872F24:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08872F30u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7520)));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 86u, 0x0880B710u>(ctx, &aot_mem) && ctx.pc == 0x08872F30u) goto L_08872F30;
    return;
L_08872F30:
    aot_gpr[31] = (0x08872F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0260_entry, 260u, 36u, 0x08908280u>(ctx, &aot_mem) && ctx.pc == 0x08872F38u) goto L_08872F38;
    return;
L_08872F38:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08872F44u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5264)));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 106u, 0x0885F6C4u>(ctx, &aot_mem) && ctx.pc == 0x08872F44u) goto L_08872F44;
    return;
L_08872F44:
    aot_gpr[31] = (0x08872F4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 159u, 0x088B9E3Cu>(ctx, &aot_mem) && ctx.pc == 0x08872F4Cu) goto L_08872F4C;
    return;
L_08872F4C:
    aot_gpr[31] = (0x08872F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 225u, 0x08873D80u>(ctx, &aot_mem) && ctx.pc == 0x08872F54u) goto L_08872F54;
    return;
L_08872F54:
    aot_gpr[31] = (0x08872F5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 180u, 0x0886EE8Cu>(ctx, &aot_mem) && ctx.pc == 0x08872F5Cu) goto L_08872F5C;
    return;
L_08872F5C:
    aot_gpr[31] = (0x08872F64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 135u, 0x0887EA04u>(ctx, &aot_mem) && ctx.pc == 0x08872F64u) goto L_08872F64;
    return;
L_08872F64:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08872F70u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1900)));
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 18u, 0x088BC128u>(ctx, &aot_mem) && ctx.pc == 0x08872F70u) goto L_08872F70;
    return;
L_08872F70:
    aot_gpr[31] = (0x08872F78u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 70u, 0x0881764Cu>(ctx, &aot_mem) && ctx.pc == 0x08872F78u) goto L_08872F78;
    return;
L_08872F78:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08872F84u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 97u, 0x0882D738u>(ctx, &aot_mem) && ctx.pc == 0x08872F84u) goto L_08872F84;
    return;
L_08872F84:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08872F90u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2092)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 10u, 0x088120ECu>(ctx, &aot_mem) && ctx.pc == 0x08872F90u) goto L_08872F90;
    return;
L_08872F90:
    aot_gpr[31] = (0x08872F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0269_entry, 269u, 54u, 0x089115A0u>(ctx, &aot_mem) && ctx.pc == 0x08872F98u) goto L_08872F98;
    return;
L_08872F98:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08872FB0;
      }
      goto L_08872FA8;
    }
L_08872FA8:
    aot_gpr[31] = (0x08872FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 80u, 0x088935FCu>(ctx, &aot_mem) && ctx.pc == 0x08872FB0u) goto L_08872FB0;
    return;
L_08872FB0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28644)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08872FD4;
      }
      goto L_08872FCC;
    }
L_08872FCC:
    aot_gpr[31] = (0x08872FD4u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 125u, 0x08865A40u>(ctx, &aot_mem) && ctx.pc == 0x08872FD4u) goto L_08872FD4;
    return;
L_08872FD4:
    aot_gpr[31] = (0x08872FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 166u, 0x088BDF20u>(ctx, &aot_mem) && ctx.pc == 0x08872FDCu) goto L_08872FDC;
    return;
L_08872FDC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872FE8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    ctx.pc = 0x08873000u; return;
}

void recomp_unit_0110(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0110_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_110(Runtime &runtime) {
    runtime.register_generated_unit(110u, 0x08872000u, 4096u, &recomp_unit_0110, &recomp_unit_0110_entry);
    runtime.register_function(0x08872004u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872030u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872038u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872040u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872058u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872064u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872074u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x0887207Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x0887208Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872098u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088720A4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088720B4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088720BCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088720C8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088720D8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088720E0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088720F0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872100u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872108u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872114u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x0887212Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872170u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x0887217Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872194u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088721B0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088721BCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088721D0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088721D8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x0887222Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872234u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872240u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872244u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872258u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872280u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x0887228Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088722A0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088722C8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088722E0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088722E4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088722F0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088722F4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872310u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872314u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872320u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872328u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872334u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872350u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872354u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872358u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872364u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x0887239Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088723B4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088723B8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088723C4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088723D8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x0887240Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x0887241Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872444u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872488u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872494u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088724ACu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088724C8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088724E4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088724ECu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872544u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872564u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872588u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872598u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088725D4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088725DCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088725E8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088725ECu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088725FCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872608u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872610u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872624u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872628u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872634u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x0887263Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872648u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872664u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x0887266Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872694u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088726A4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088726C8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088726F0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088726FCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872700u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872708u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x0887271Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872730u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x0887274Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872788u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872794u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088727BCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088727C4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872804u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872810u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872820u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872828u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872830u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872838u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872840u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872848u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872850u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872864u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872870u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872878u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088728A8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088728E4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088728ECu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088728F4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872910u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872918u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872930u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872938u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x0887294Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872964u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872990u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x0887299Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088729A8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088729B8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088729BCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088729C4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088729D0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088729D4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088729E8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x088729F8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872A00u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872A18u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872A2Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872A58u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872A64u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872A70u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872A80u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872A84u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872A90u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872A9Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872AA0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872AB4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872AC0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872AF0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872B00u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872B08u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872B10u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872B1Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872B40u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872B50u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872B58u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872B60u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872B68u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872B74u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872BA4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872BB0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872BC0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872BC8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872BD0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872BF0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872C18u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872C24u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872C30u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872C44u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872C4Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872C54u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872C58u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872C60u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872CA4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872CB4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872CBCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872CD0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872CD8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872CE4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872CE8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872D04u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872D2Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872D30u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872D3Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872D4Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872D54u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872D5Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872D60u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872D68u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872D8Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872DA4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872DA8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872DB0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872DC8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872DE8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872DF8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872E18u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872E20u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872E28u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872E30u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872E38u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872E58u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872E64u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872E70u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872E90u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872E9Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872EBCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872EDCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872EFCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872F04u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872F24u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872F30u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872F38u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872F44u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872F4Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872F54u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872F5Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872F64u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872F70u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872F78u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872F84u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872F90u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872F98u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872FA8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872FB0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872FCCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872FD4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872FDCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x08872FE8u, &recomp_unit_0110, "recomp_unit_0110");
}
} // namespace psprecomp
