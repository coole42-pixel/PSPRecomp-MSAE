#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0079[1023] = {
    1, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 9, 0,
    0, 10, 0, 0, 0, 0, 11, 0, 0, 12, 13, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0,
    0, 0, 0, 17, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30,
    0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0,
    0, 0, 35, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0,
    0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 51, 0,
    52, 0, 0, 53, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 61, 0, 62, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 67, 0, 68, 69, 0, 0, 0, 70, 0, 71, 0,
    0, 0, 72, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0,
    78, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 84, 0, 0, 0,
    0, 0, 85, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 92, 0, 0, 93, 0, 94,
    0, 95, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100,
    0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0,
    0, 108, 0, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0,
    114, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 119, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122,
    0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0,
    0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167,
    0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 179, 0, 180, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0,
    188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0,
    0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 202,
};
void recomp_unit_0079_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08853004u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0079[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08853004;
    case 2u: goto L_0885300C;
    case 3u: goto L_08853014;
    case 4u: goto L_08853024;
    case 5u: goto L_08853034;
    case 6u: goto L_08853040;
    case 7u: goto L_0885305C;
    case 8u: goto L_08853068;
    case 9u: goto L_0885307C;
    case 10u: goto L_08853088;
    case 11u: goto L_0885309C;
    case 12u: goto L_088530A8;
    case 13u: goto L_088530AC;
    case 14u: goto L_088530C8;
    case 15u: goto L_088530D0;
    case 16u: goto L_088530F0;
    case 17u: goto L_08853110;
    case 18u: goto L_08853118;
    case 19u: goto L_08853120;
    case 20u: goto L_0885316C;
    case 21u: goto L_08853174;
    case 22u: goto L_088531BC;
    case 23u: goto L_088531C8;
    case 24u: goto L_088531E8;
    case 25u: goto L_08853204;
    case 26u: goto L_08853220;
    case 27u: goto L_0885323C;
    case 28u: goto L_08853258;
    case 29u: goto L_08853274;
    case 30u: goto L_08853280;
    case 31u: goto L_0885329C;
    case 32u: goto L_088532B8;
    case 33u: goto L_088532D4;
    case 34u: goto L_088532F0;
    case 35u: goto L_0885330C;
    case 36u: goto L_08853320;
    case 37u: goto L_08853328;
    case 38u: goto L_08853338;
    case 39u: goto L_08853368;
    case 40u: goto L_08853388;
    case 41u: goto L_088533B4;
    case 42u: goto L_088533C8;
    case 43u: goto L_088533CC;
    case 44u: goto L_088533D4;
    case 45u: goto L_088533F4;
    case 46u: goto L_08853404;
    case 47u: goto L_08853420;
    case 48u: goto L_08853450;
    case 49u: goto L_0885345C;
    case 50u: goto L_08853468;
    case 51u: goto L_0885347C;
    case 52u: goto L_08853484;
    case 53u: goto L_08853490;
    case 54u: goto L_08853498;
    case 55u: goto L_088534A4;
    case 56u: goto L_088534BC;
    case 57u: goto L_088534C8;
    case 58u: goto L_088534D4;
    case 59u: goto L_088534E4;
    case 60u: goto L_08853504;
    case 61u: goto L_08853510;
    case 62u: goto L_08853518;
    case 63u: goto L_08853524;
    case 64u: goto L_08853534;
    case 65u: goto L_08853544;
    case 66u: goto L_08853550;
    case 67u: goto L_08853558;
    case 68u: goto L_08853560;
    case 69u: goto L_08853564;
    case 70u: goto L_08853574;
    case 71u: goto L_0885357C;
    case 72u: goto L_0885358C;
    case 73u: goto L_08853594;
    case 74u: goto L_088535A0;
    case 75u: goto L_088535B8;
    case 76u: goto L_088535E4;
    case 77u: goto L_088535F0;
    case 78u: goto L_08853604;
    case 79u: goto L_08853610;
    case 80u: goto L_08853620;
    case 81u: goto L_08853640;
    case 82u: goto L_08853660;
    case 83u: goto L_0885366C;
    case 84u: goto L_08853674;
    case 85u: goto L_0885368C;
    case 86u: goto L_088536A0;
    case 87u: goto L_088536A8;
    case 88u: goto L_088536B0;
    case 89u: goto L_088536C0;
    case 90u: goto L_088536D8;
    case 91u: goto L_088536E0;
    case 92u: goto L_088536EC;
    case 93u: goto L_088536F8;
    case 94u: goto L_08853700;
    case 95u: goto L_08853708;
    case 96u: goto L_08853720;
    case 97u: goto L_08853728;
    case 98u: goto L_08853738;
    case 99u: goto L_0885376C;
    case 100u: goto L_08853780;
    case 101u: goto L_08853790;
    case 102u: goto L_088537A0;
    case 103u: goto L_088537BC;
    case 104u: goto L_088537C4;
    case 105u: goto L_088537D8;
    case 106u: goto L_088537E0;
    case 107u: goto L_088537F0;
    case 108u: goto L_08853808;
    case 109u: goto L_0885381C;
    case 110u: goto L_08853828;
    case 111u: goto L_08853830;
    case 112u: goto L_08853854;
    case 113u: goto L_08853870;
    case 114u: goto L_08853884;
    case 115u: goto L_0885388C;
    case 116u: goto L_08853894;
    case 117u: goto L_088538B4;
    case 118u: goto L_088538C0;
    case 119u: goto L_088538CC;
    case 120u: goto L_088538D0;
    case 121u: goto L_088538DC;
    case 122u: goto L_08853900;
    case 123u: goto L_08853910;
    case 124u: goto L_08853920;
    case 125u: goto L_0885392C;
    case 126u: goto L_08853940;
    case 127u: goto L_0885396C;
    case 128u: goto L_0885397C;
    case 129u: goto L_08853994;
    case 130u: goto L_088539AC;
    case 131u: goto L_088539C4;
    case 132u: goto L_088539DC;
    case 133u: goto L_088539F4;
    case 134u: goto L_08853A0C;
    case 135u: goto L_08853A20;
    case 136u: goto L_08853A2C;
    case 137u: goto L_08853A4C;
    case 138u: goto L_08853A54;
    case 139u: goto L_08853A64;
    case 140u: goto L_08853A70;
    case 141u: goto L_08853A90;
    case 142u: goto L_08853AAC;
    case 143u: goto L_08853AB4;
    case 144u: goto L_08853AD0;
    case 145u: goto L_08853ADC;
    case 146u: goto L_08853AF0;
    case 147u: goto L_08853B1C;
    case 148u: goto L_08853B2C;
    case 149u: goto L_08853B48;
    case 150u: goto L_08853B6C;
    case 151u: goto L_08853B94;
    case 152u: goto L_08853BB4;
    case 153u: goto L_08853BDC;
    case 154u: goto L_08853BFC;
    case 155u: goto L_08853C1C;
    case 156u: goto L_08853C24;
    case 157u: goto L_08853C30;
    case 158u: goto L_08853C40;
    case 159u: goto L_08853C4C;
    case 160u: goto L_08853C54;
    case 161u: goto L_08853C68;
    case 162u: goto L_08853C84;
    case 163u: goto L_08853C98;
    case 164u: goto L_08853CBC;
    case 165u: goto L_08853CC8;
    case 166u: goto L_08853CE0;
    case 167u: goto L_08853D00;
    case 168u: goto L_08853D0C;
    case 169u: goto L_08853D18;
    case 170u: goto L_08853D38;
    case 171u: goto L_08853D60;
    case 172u: goto L_08853D84;
    case 173u: goto L_08853DA4;
    case 174u: goto L_08853DCC;
    case 175u: goto L_08853DEC;
    case 176u: goto L_08853DF4;
    case 177u: goto L_08853E1C;
    case 178u: goto L_08853E28;
    case 179u: goto L_08853E38;
    case 180u: goto L_08853E40;
    case 181u: goto L_08853E50;
    case 182u: goto L_08853E58;
    case 183u: goto L_08853EA0;
    case 184u: goto L_08853EB4;
    case 185u: goto L_08853EC8;
    case 186u: goto L_08853EDC;
    case 187u: goto L_08853EF0;
    case 188u: goto L_08853F04;
    case 189u: goto L_08853F18;
    case 190u: goto L_08853F2C;
    case 191u: goto L_08853F40;
    case 192u: goto L_08853F54;
    case 193u: goto L_08853F68;
    case 194u: goto L_08853F7C;
    case 195u: goto L_08853F88;
    case 196u: goto L_08853F94;
    case 197u: goto L_08853FAC;
    case 198u: goto L_08853FBC;
    case 199u: goto L_08853FCC;
    case 200u: goto L_08853FDC;
    case 201u: goto L_08853FEC;
    case 202u: goto L_08853FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08853004:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08853034;
      }
      goto L_0885300C;
    }
L_0885300C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08853040;
      }
      goto L_08853014;
    }
L_08853014:
    aot_gpr[18] = (0u | 366u);
    aot_gpr[16] = (0u | 102u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08853040;
      }
      goto L_08853024;
    }
L_08853024:
    aot_gpr[18] = (0u | 362u);
    aot_gpr[16] = (0u | 214u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08853040;
      }
      goto L_08853034;
    }
L_08853034:
    aot_gpr[18] = (0u | 367u);
    aot_gpr[16] = (0u | 6u);
    aot_gpr[5] = (0u | 5u);
    goto L_08853040;
L_08853040:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0885305Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1152));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0885305Cu) goto L_0885305C;
    return;
L_0885305C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08853068u);
    aot_gpr[5] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08853068u) goto L_08853068;
    return;
L_08853068:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0885307Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1172));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0885307Cu) goto L_0885307C;
    return;
L_0885307C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08853088u);
    aot_gpr[5] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08853088u) goto L_08853088;
    return;
L_08853088:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0885309Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1188));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0885309Cu) goto L_0885309C;
    return;
L_0885309C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088530A8u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088530A8u) goto L_088530A8;
    return;
L_088530A8:
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[19]));
    goto L_088530AC;
L_088530AC:
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
L_088530C8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088530D0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24080), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088530F0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24088), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853110:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853118:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853120:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1256));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x0885316Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1272));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0885316Cu) goto L_0885316C;
    return;
L_0885316C:
    aot_gpr[31] = (0x08853174u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08853174u) goto L_08853174;
    return;
L_08853174:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[23] = (2214u << 16u);
    aot_gpr[22] = (2214u << 16u);
    aot_gpr[18] = (57344u << 16u);
    aot_gpr[21] = (2214u << 16u);
    aot_gpr[20] = (2214u << 16u);
    aot_gpr[19] = (2214u << 16u);
    aot_gpr[30] = (0u | 5u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1296));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1312));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1332));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1356));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1384));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[6];
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1404));
      if (branch_taken) {
          goto L_08853274;
      }
      goto L_088531BC;
    }
L_088531BC:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088531C8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088531C8u) goto L_088531C8;
    return;
L_088531C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[30] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088531E8u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088531E8u) goto L_088531E8;
    return;
L_088531E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08853204u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08853204u) goto L_08853204;
    return;
L_08853204:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08853220u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08853220u) goto L_08853220;
    return;
L_08853220:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0885323Cu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0885323Cu) goto L_0885323C;
    return;
L_0885323C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08853258u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08853258u) goto L_08853258;
    return;
L_08853258:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[30] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[30] | 0u);
      if (branch_taken) {
          goto L_08853320;
      }
      goto L_08853274;
    }
L_08853274:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08853280u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08853280u) goto L_08853280;
    return;
L_08853280:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0885329Cu);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0885329Cu) goto L_0885329C;
    return;
L_0885329C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088532B8u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088532B8u) goto L_088532B8;
    return;
L_088532B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088532D4u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088532D4u) goto L_088532D4;
    return;
L_088532D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088532F0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088532F0u) goto L_088532F0;
    return;
L_088532F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0885330Cu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0885330Cu) goto L_0885330C;
    return;
L_0885330C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[16] = (0u | 0u);
    goto L_08853320;
L_08853320:
    aot_gpr[31] = (0x08853328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x08853328u) goto L_08853328;
    return;
L_08853328:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08853338u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 47u, 0x0884A458u>(ctx, &aot_mem) && ctx.pc == 0x08853338u) goto L_08853338;
    return;
L_08853338:
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
L_08853368:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24096), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853388:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x088533B4u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 33u, 0x0888A274u>(ctx, &aot_mem) && ctx.pc == 0x088533B4u) goto L_088533B4;
    return;
L_088533B4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[18] = (0u | 97u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[18] = (0u | 65u);
        goto L_088533C8;
    }
    goto L_088533C8;
L_088533C8:
    aot_gpr[17] = (0u | 0u);
    goto L_088533CC;
L_088533CC:
    aot_gpr[31] = (0x088533D4u);
    aot_gpr[5] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088533D4u) goto L_088533D4;
    return;
L_088533D4:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[18] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x088533F4u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 33u, 0x0888A274u>(ctx, &aot_mem) && ctx.pc == 0x088533F4u) goto L_088533F4;
    return;
L_088533F4:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[17]) < 26 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088533CC;
      }
      goto L_08853404;
    }
L_08853404:
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
L_08853420:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[7] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08853450u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    goto L_08853388;
L_08853450:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885345C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853468:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(18)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08853498;
      }
      goto L_0885347C;
    }
L_0885347C:
    aot_gpr[31] = (0x08853484u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_0885345C;
L_08853484:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(19)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08853498;
      }
      goto L_08853490;
    }
L_08853490:
    aot_gpr[31] = (0x08853498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 48u, 0x0886D300u>(ctx, &aot_mem) && ctx.pc == 0x08853498u) goto L_08853498;
    return;
L_08853498:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088534A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088534BCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x088534BCu) goto L_088534BC;
    return;
L_088534BC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088534D4;
      }
      goto L_088534C8;
    }
L_088534C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(0u));
    goto L_088534D4;
L_088534D4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088534E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08853504u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08853504u) goto L_08853504;
    return;
L_08853504:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < 13 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088535A0;
      }
      goto L_08853510;
    }
L_08853510:
    aot_gpr[31] = (0x08853518u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x08853518u) goto L_08853518;
    return;
L_08853518:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x08853524u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 33u, 0x0888A274u>(ctx, &aot_mem) && ctx.pc == 0x08853524u) goto L_08853524;
    return;
L_08853524:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08853534u);
    aot_gpr[5] = (0u | 27u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08853534u) goto L_08853534;
    return;
L_08853534:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08853544u);
    aot_gpr[5] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08853544u) goto L_08853544;
    return;
L_08853544:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08853558;
      }
      goto L_08853550;
    }
L_08853550:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08853564;
      }
      goto L_08853558;
    }
L_08853558:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08853564;
      }
      goto L_08853560;
    }
L_08853560:
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    goto L_08853564;
L_08853564:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08853574u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1456));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08853574u) goto L_08853574;
    return;
L_08853574:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08853594;
      }
      goto L_0885357C;
    }
L_0885357C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885358Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1460));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x0885358Cu) goto L_0885358C;
    return;
L_0885358C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088535A0;
      }
      goto L_08853594;
    }
L_08853594:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088535A0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088535A0u) goto L_088535A0;
    return;
L_088535A0:
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
L_088535B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088535E4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 33u, 0x0888A274u>(ctx, &aot_mem) && ctx.pc == 0x088535E4u) goto L_088535E4;
    return;
L_088535E4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088535F0u);
    aot_gpr[5] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088535F0u) goto L_088535F0;
    return;
L_088535F0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 185u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[4] = (0u | 186u);
        goto L_08853604;
    }
    goto L_08853604;
L_08853604:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[31] = (0x08853610u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08853388;
L_08853610:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853620:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08853640u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1432));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08853640u) goto L_08853640;
    return;
L_08853640:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08853674;
      }
      goto L_08853660;
    }
L_08853660:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x0885366Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088534A4;
L_0885366C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08853728;
      }
      goto L_08853674;
    }
L_08853674:
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[5] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08853708;
      }
      goto L_0885368C;
    }
L_0885368C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088536B0;
      }
      goto L_088536A0;
    }
L_088536A0:
    aot_gpr[31] = (0x088536A8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0885345C;
L_088536A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08853728;
      }
      goto L_088536B0;
    }
L_088536B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088536E0;
      }
      goto L_088536C0;
    }
L_088536C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088536D8u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088536D8u) goto L_088536D8;
    return;
L_088536D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08853728;
      }
      goto L_088536E0;
    }
L_088536E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088536F8;
      }
      goto L_088536EC;
    }
L_088536EC:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x088536F8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0885345C;
L_088536F8:
    aot_gpr[31] = (0x08853700u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088534E4;
L_08853700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08853728;
      }
      goto L_08853708;
    }
L_08853708:
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08853728;
      }
      goto L_08853720;
    }
L_08853720:
    aot_gpr[31] = (0x08853728u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088535B8;
L_08853728:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853738:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0885376Cu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 111u, 0x08893820u>(ctx, &aot_mem) && ctx.pc == 0x0885376Cu) goto L_0885376C;
    return;
L_0885376C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08853780u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 39u, 0x0888D26Cu>(ctx, &aot_mem) && ctx.pc == 0x08853780u) goto L_08853780;
    return;
L_08853780:
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08853790u);
    aot_gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08853790u) goto L_08853790;
    return;
L_08853790:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088537A0u);
    aot_gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088537A0u) goto L_088537A0;
    return;
L_088537A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[4] & 2u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088537C4;
      }
      goto L_088537BC;
    }
L_088537BC:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08853830;
      }
      goto L_088537C4;
    }
L_088537C4:
    aot_gpr[4] = (aot_gpr[4] & 4u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    if (aot_gpr[4] == 0u) {
    aot_fpr[20] = aot_fpr[12] + aot_fpr[20];
        goto L_08853830;
    }
    goto L_088537D8;
L_088537D8:
    aot_gpr[31] = (0x088537E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x088537E0u) goto L_088537E0;
    return;
L_088537E0:
    aot_gpr[19] = (aot_gpr[3] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x088537F0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x088537F0u) goto L_088537F0;
    return;
L_088537F0:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1452)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1448)));
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08853808u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08853808u) goto L_08853808;
    return;
L_08853808:
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x0885381Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x0885381Cu) goto L_0885381C;
    return;
L_0885381C:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08853828u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 5u, 0x08A40050u>(ctx, &aot_mem) && ctx.pc == 0x08853828u) goto L_08853828;
    return;
L_08853828:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_08853830;
      }
      goto L_08853830;
    }
L_08853830:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853854:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (8192u << 16u);
    aot_gpr[7] = (aot_gpr[6] & aot_gpr[4]);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08853884;
      }
      goto L_08853870;
    }
L_08853870:
    aot_gpr[4] = (57344u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_0885388C;
      }
      goto L_08853884;
    }
L_08853884:
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_0885388C;
L_0885388C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853894:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(20))))));
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < 12 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_088538C0;
      }
      goto L_088538B4;
    }
L_088538B4:
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088538D0;
      }
      goto L_088538C0;
    }
L_088538C0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088538CCu);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    goto L_08853854;
L_088538CC:
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    goto L_088538D0;
L_088538D0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088538DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08853900u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    goto L_08853620;
L_08853900:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x08853910u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 111u, 0x08893820u>(ctx, &aot_mem) && ctx.pc == 0x08853910u) goto L_08853910;
    return;
L_08853910:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08853920u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08853738;
L_08853920:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885392Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08853894;
L_0885392C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853940:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0885396Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0885396Cu) goto L_0885396C;
    return;
L_0885396C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[31] = (0x0885397Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 88u, 0x088936C4u>(ctx, &aot_mem) && ctx.pc == 0x0885397Cu) goto L_0885397C;
    return;
L_0885397C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08853994u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1464));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08853994u) goto L_08853994;
    return;
L_08853994:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088539ACu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1476));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x088539ACu) goto L_088539AC;
    return;
L_088539AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088539C4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1484));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x088539C4u) goto L_088539C4;
    return;
L_088539C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088539DCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1488));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x088539DCu) goto L_088539DC;
    return;
L_088539DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088539F4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1496));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x088539F4u) goto L_088539F4;
    return;
L_088539F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08853A0Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1504));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08853A0Cu) goto L_08853A0C;
    return;
L_08853A0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x08853A20u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 111u, 0x08893820u>(ctx, &aot_mem) && ctx.pc == 0x08853A20u) goto L_08853A20;
    return;
L_08853A20:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08853A2Cu);
    aot_gpr[5] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08853A2Cu) goto L_08853A2C;
    return;
L_08853A2C:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[4]);
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
L_08853A4C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853A54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08853A64u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08853A64u) goto L_08853A64;
    return;
L_08853A64:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853A70:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24104), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853A90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08853AACu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08853AACu) goto L_08853AAC;
    return;
L_08853AAC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08853ADC;
      }
      goto L_08853AB4;
    }
L_08853AB4:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08853AD0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1528));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08853AD0u) goto L_08853AD0;
    return;
L_08853AD0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_08853ADC;
L_08853ADC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853AF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08853B1Cu);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    goto L_08853420;
L_08853B1C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08853B2Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1540));
    goto L_08853A54;
L_08853B2C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(1544));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08853B48u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1564));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08853B48u) goto L_08853B48;
    return;
L_08853B48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08853B6Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1584));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08853B6Cu) goto L_08853B6C;
    return;
L_08853B6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08853B94u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1612));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08853B94u) goto L_08853B94;
    return;
L_08853B94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08853BB4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1624));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08853BB4u) goto L_08853BB4;
    return;
L_08853BB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
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
L_08853BDC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24112), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853BFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08853C1Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08853C1Cu) goto L_08853C1C;
    return;
L_08853C1C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08853CC8;
      }
      goto L_08853C24;
    }
L_08853C24:
    aot_gpr[17] = (0u | 1u);
    aot_gpr[31] = (0x08853C30u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 33u, 0x0886D1F0u>(ctx, &aot_mem) && ctx.pc == 0x08853C30u) goto L_08853C30;
    return;
L_08853C30:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08853C40u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 113u, 0x08876620u>(ctx, &aot_mem) && ctx.pc == 0x08853C40u) goto L_08853C40;
    return;
L_08853C40:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08853C4Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 1u, 0x088D7004u>(ctx, &aot_mem) && ctx.pc == 0x08853C4Cu) goto L_08853C4C;
    return;
L_08853C4C:
    aot_gpr[31] = (0x08853C54u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08853A4C;
L_08853C54:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08853C68u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08853C68u) goto L_08853C68;
    return;
L_08853C68:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(25236), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x08853C84u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1640));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08853C84u) goto L_08853C84;
    return;
L_08853C84:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08853C98u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1652));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08853C98u) goto L_08853C98;
    return;
L_08853C98:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1672));
    aot_gpr[31] = (0x08853CBCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08853CBCu) goto L_08853CBC;
    return;
L_08853CBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_08853CC8;
L_08853CC8:
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
L_08853CE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08853D00u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08853420;
L_08853D00:
    aot_gpr[4] = (0u | 72u);
    aot_gpr[31] = (0x08853D0Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08853D0Cu) goto L_08853D0C;
    return;
L_08853D0C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08853D18u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_08853A54;
L_08853D18:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(1652));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08853D38u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1692));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08853D38u) goto L_08853D38;
    return;
L_08853D38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08853D60u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1712));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08853D60u) goto L_08853D60;
    return;
L_08853D60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08853D84u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1740));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08853D84u) goto L_08853D84;
    return;
L_08853D84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08853DA4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1752));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08853DA4u) goto L_08853DA4;
    return;
L_08853DA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
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
L_08853DCC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24120), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853DEC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853DF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1768));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08853E1Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1784));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08853E1Cu) goto L_08853E1C;
    return;
L_08853E1C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08853E28u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x08853E28u) goto L_08853E28;
    return;
L_08853E28:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08853E40;
      }
      goto L_08853E38;
    }
L_08853E38:
    aot_gpr[31] = (0x08853E40u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08853E40u) goto L_08853E40;
    return;
L_08853E40:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853E50:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853E58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-416));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(372), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(376), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(380), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(384), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(388), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(392), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(400), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(404), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(408), aot_gpr[31]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08853EA0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1768));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08853EA0u) goto L_08853EA0;
    return;
L_08853EA0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08853EB4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1784));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08853EB4u) goto L_08853EB4;
    return;
L_08853EB4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08853EC8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1804));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08853EC8u) goto L_08853EC8;
    return;
L_08853EC8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08853EDCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1824));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08853EDCu) goto L_08853EDC;
    return;
L_08853EDC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08853EF0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1840));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08853EF0u) goto L_08853EF0;
    return;
L_08853EF0:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08853F04u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1860));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08853F04u) goto L_08853F04;
    return;
L_08853F04:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08853F18u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1880));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08853F18u) goto L_08853F18;
    return;
L_08853F18:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08853F2Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1900));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08853F2Cu) goto L_08853F2C;
    return;
L_08853F2C:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08853F40u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1920));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08853F40u) goto L_08853F40;
    return;
L_08853F40:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08853F54u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1940));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08853F54u) goto L_08853F54;
    return;
L_08853F54:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08853F68u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1960));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08853F68u) goto L_08853F68;
    return;
L_08853F68:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08853F7Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1980));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08853F7Cu) goto L_08853F7C;
    return;
L_08853F7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[2]);
    aot_gpr[31] = (0x08853F88u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08853F88u) goto L_08853F88;
    return;
L_08853F88:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08853F94u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08853F94u) goto L_08853F94;
    return;
L_08853F94:
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(15001));
    aot_gpr[4] = (0u | 77u);
    aot_gpr[31] = (0x08853FACu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08853FACu) goto L_08853FAC;
    return;
L_08853FAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[2]);
    aot_gpr[4] = (0u | 73u);
    aot_gpr[31] = (0x08853FBCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08853FBCu) goto L_08853FBC;
    return;
L_08853FBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[2]);
    aot_gpr[4] = (0u | 76u);
    aot_gpr[31] = (0x08853FCCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08853FCCu) goto L_08853FCC;
    return;
L_08853FCC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[2]);
    aot_gpr[4] = (0u | 79u);
    aot_gpr[31] = (0x08853FDCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08853FDCu) goto L_08853FDC;
    return;
L_08853FDC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[2]);
    aot_gpr[4] = (0u | 74u);
    aot_gpr[31] = (0x08853FECu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08853FECu) goto L_08853FEC;
    return;
L_08853FEC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[2]);
    aot_gpr[4] = (0u | 78u);
    aot_gpr[31] = (0x08853FFCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08853FFCu) goto L_08853FFC;
    return;
L_08853FFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[2]);
    ctx.pc = 0x08854000u; return;
}

void recomp_unit_0079(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0079_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_79(Runtime &runtime) {
    runtime.register_generated_unit(79u, 0x08853000u, 4096u, &recomp_unit_0079, &recomp_unit_0079_entry);
    runtime.register_function(0x08853004u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0885300Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853014u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853024u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853034u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853040u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0885305Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853068u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0885307Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853088u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0885309Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088530A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088530ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088530C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088530D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088530F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853110u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853118u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853120u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0885316Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853174u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088531BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088531C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088531E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853204u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853220u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0885323Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853258u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853274u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853280u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0885329Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088532B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088532D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088532F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0885330Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853320u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853328u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853338u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853368u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853388u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088533B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088533C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088533CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088533D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088533F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853404u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853420u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853450u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0885345Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853468u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0885347Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853484u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853490u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853498u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088534A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088534BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088534C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088534D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088534E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853504u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853510u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853518u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853524u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853534u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853544u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853550u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853558u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853560u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853564u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853574u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0885357Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0885358Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853594u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088535A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088535B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088535E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088535F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853604u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853610u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853620u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853640u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853660u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0885366Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853674u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0885368Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088536A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088536A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088536B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088536C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088536D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088536E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088536ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088536F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853700u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853708u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853720u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853728u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853738u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0885376Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853780u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853790u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088537A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088537BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088537C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088537D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088537E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088537F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853808u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0885381Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853828u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853830u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853854u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853870u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853884u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0885388Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853894u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088538B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088538C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088538CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088538D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088538DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853900u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853910u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853920u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0885392Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853940u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0885396Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0885397Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853994u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088539ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088539C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088539DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x088539F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853A0Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853A20u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853A2Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853A4Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853A54u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853A64u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853A70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853A90u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853AACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853AB4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853AD0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853ADCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853AF0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853B1Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853B2Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853B48u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853B6Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853B94u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853BB4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853BDCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853BFCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853C1Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853C24u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853C30u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853C40u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853C4Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853C54u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853C68u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853C84u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853C98u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853CBCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853CC8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853CE0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853D00u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853D0Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853D18u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853D38u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853D60u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853D84u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853DA4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853DCCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853DECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853DF4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853E1Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853E28u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853E38u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853E40u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853E50u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853E58u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853EA0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853EB4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853EC8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853EDCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853EF0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853F04u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853F18u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853F2Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853F40u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853F54u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853F68u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853F7Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853F88u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853F94u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853FACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853FBCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853FCCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853FDCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853FECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08853FFCu, &recomp_unit_0079, "recomp_unit_0079");
}
} // namespace psprecomp
