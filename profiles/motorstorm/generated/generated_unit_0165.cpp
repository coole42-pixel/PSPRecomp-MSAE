#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0165[1022] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0,
    0, 23, 0, 0, 24, 0, 0, 0, 25, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 30, 31, 0, 32,
    0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 36, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0,
    44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 52, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 56, 0, 57, 0, 58, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0,
    68, 0, 0, 69, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 72, 73, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 76, 77, 0, 0, 78, 0,
    79, 0, 0, 80, 0, 81, 0, 0, 82, 83, 0, 0, 84, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 89, 0, 90, 0, 0, 0, 91,
    0, 0, 92, 93, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 96, 0, 97, 0, 0, 0, 98, 0, 99, 0, 100, 0, 0, 101, 0, 0, 102, 0,
    0, 103, 104, 0, 0, 105, 106, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 109, 110, 0, 0, 111, 112, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 114, 0, 115, 0, 0, 116, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0,
    0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 137, 0,
    138, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0,
    0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 156, 0, 0, 157, 0, 0, 158, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163,
    0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0,
    0, 169, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 176, 0, 0, 0,
    0, 0, 177, 0, 178, 0, 0, 0, 179, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0,
    184, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0,
    0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204,
};
void recomp_unit_0165_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088A9000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0165[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088A9000;
    case 2u: goto L_088A9010;
    case 3u: goto L_088A9040;
    case 4u: goto L_088A9058;
    case 5u: goto L_088A9078;
    case 6u: goto L_088A9080;
    case 7u: goto L_088A9090;
    case 8u: goto L_088A90E0;
    case 9u: goto L_088A9100;
    case 10u: goto L_088A9138;
    case 11u: goto L_088A913C;
    case 12u: goto L_088A9154;
    case 13u: goto L_088A9168;
    case 14u: goto L_088A9174;
    case 15u: goto L_088A919C;
    case 16u: goto L_088A91F4;
    case 17u: goto L_088A9208;
    case 18u: goto L_088A9220;
    case 19u: goto L_088A9234;
    case 20u: goto L_088A9254;
    case 21u: goto L_088A925C;
    case 22u: goto L_088A9278;
    case 23u: goto L_088A9284;
    case 24u: goto L_088A9290;
    case 25u: goto L_088A92A0;
    case 26u: goto L_088A92A8;
    case 27u: goto L_088A92B8;
    case 28u: goto L_088A92E0;
    case 29u: goto L_088A92E8;
    case 30u: goto L_088A92F0;
    case 31u: goto L_088A92F4;
    case 32u: goto L_088A92FC;
    case 33u: goto L_088A9308;
    case 34u: goto L_088A9320;
    case 35u: goto L_088A9330;
    case 36u: goto L_088A9338;
    case 37u: goto L_088A9348;
    case 38u: goto L_088A9354;
    case 39u: goto L_088A9378;
    case 40u: goto L_088A93A0;
    case 41u: goto L_088A93D8;
    case 42u: goto L_088A93E8;
    case 43u: goto L_088A93F8;
    case 44u: goto L_088A9400;
    case 45u: goto L_088A9434;
    case 46u: goto L_088A9464;
    case 47u: goto L_088A9470;
    case 48u: goto L_088A9490;
    case 49u: goto L_088A949C;
    case 50u: goto L_088A94A8;
    case 51u: goto L_088A94E8;
    case 52u: goto L_088A94EC;
    case 53u: goto L_088A9500;
    case 54u: goto L_088A9528;
    case 55u: goto L_088A953C;
    case 56u: goto L_088A9544;
    case 57u: goto L_088A954C;
    case 58u: goto L_088A9554;
    case 59u: goto L_088A9558;
    case 60u: goto L_088A9568;
    case 61u: goto L_088A9578;
    case 62u: goto L_088A9590;
    case 63u: goto L_088A95A8;
    case 64u: goto L_088A95AC;
    case 65u: goto L_088A95CC;
    case 66u: goto L_088A95DC;
    case 67u: goto L_088A95F4;
    case 68u: goto L_088A9600;
    case 69u: goto L_088A960C;
    case 70u: goto L_088A9614;
    case 71u: goto L_088A9620;
    case 72u: goto L_088A9638;
    case 73u: goto L_088A963C;
    case 74u: goto L_088A9650;
    case 75u: goto L_088A965C;
    case 76u: goto L_088A9668;
    case 77u: goto L_088A966C;
    case 78u: goto L_088A9678;
    case 79u: goto L_088A9680;
    case 80u: goto L_088A968C;
    case 81u: goto L_088A9694;
    case 82u: goto L_088A96A0;
    case 83u: goto L_088A96A4;
    case 84u: goto L_088A96B0;
    case 85u: goto L_088A96B8;
    case 86u: goto L_088A96C4;
    case 87u: goto L_088A96D0;
    case 88u: goto L_088A96DC;
    case 89u: goto L_088A96E4;
    case 90u: goto L_088A96EC;
    case 91u: goto L_088A96FC;
    case 92u: goto L_088A9708;
    case 93u: goto L_088A970C;
    case 94u: goto L_088A9724;
    case 95u: goto L_088A972C;
    case 96u: goto L_088A9738;
    case 97u: goto L_088A9740;
    case 98u: goto L_088A9750;
    case 99u: goto L_088A9758;
    case 100u: goto L_088A9760;
    case 101u: goto L_088A976C;
    case 102u: goto L_088A9778;
    case 103u: goto L_088A9784;
    case 104u: goto L_088A9788;
    case 105u: goto L_088A9794;
    case 106u: goto L_088A9798;
    case 107u: goto L_088A97A8;
    case 108u: goto L_088A97B4;
    case 109u: goto L_088A97CC;
    case 110u: goto L_088A97D0;
    case 111u: goto L_088A97DC;
    case 112u: goto L_088A97E0;
    case 113u: goto L_088A9800;
    case 114u: goto L_088A9808;
    case 115u: goto L_088A9810;
    case 116u: goto L_088A981C;
    case 117u: goto L_088A9830;
    case 118u: goto L_088A9838;
    case 119u: goto L_088A9860;
    case 120u: goto L_088A9874;
    case 121u: goto L_088A988C;
    case 122u: goto L_088A9898;
    case 123u: goto L_088A98CC;
    case 124u: goto L_088A98F0;
    case 125u: goto L_088A9900;
    case 126u: goto L_088A9910;
    case 127u: goto L_088A9928;
    case 128u: goto L_088A9950;
    case 129u: goto L_088A9958;
    case 130u: goto L_088A9970;
    case 131u: goto L_088A9984;
    case 132u: goto L_088A9998;
    case 133u: goto L_088A99C0;
    case 134u: goto L_088A99E0;
    case 135u: goto L_088A99E8;
    case 136u: goto L_088A99F0;
    case 137u: goto L_088A99F8;
    case 138u: goto L_088A9A00;
    case 139u: goto L_088A9A08;
    case 140u: goto L_088A9A10;
    case 141u: goto L_088A9A18;
    case 142u: goto L_088A9A6C;
    case 143u: goto L_088A9A84;
    case 144u: goto L_088A9AA0;
    case 145u: goto L_088A9AB8;
    case 146u: goto L_088A9AC0;
    case 147u: goto L_088A9AD0;
    case 148u: goto L_088A9AD8;
    case 149u: goto L_088A9AF8;
    case 150u: goto L_088A9B0C;
    case 151u: goto L_088A9B58;
    case 152u: goto L_088A9B64;
    case 153u: goto L_088A9BA0;
    case 154u: goto L_088A9BBC;
    case 155u: goto L_088A9BD0;
    case 156u: goto L_088A9C0C;
    case 157u: goto L_088A9C18;
    case 158u: goto L_088A9C24;
    case 159u: goto L_088A9C28;
    case 160u: goto L_088A9C38;
    case 161u: goto L_088A9C50;
    case 162u: goto L_088A9C54;
    case 163u: goto L_088A9C7C;
    case 164u: goto L_088A9C9C;
    case 165u: goto L_088A9CC4;
    case 166u: goto L_088A9CDC;
    case 167u: goto L_088A9CE8;
    case 168u: goto L_088A9CF4;
    case 169u: goto L_088A9D04;
    case 170u: goto L_088A9D10;
    case 171u: goto L_088A9D20;
    case 172u: goto L_088A9D38;
    case 173u: goto L_088A9D3C;
    case 174u: goto L_088A9D4C;
    case 175u: goto L_088A9D6C;
    case 176u: goto L_088A9D70;
    case 177u: goto L_088A9D88;
    case 178u: goto L_088A9D90;
    case 179u: goto L_088A9DA0;
    case 180u: goto L_088A9DA4;
    case 181u: goto L_088A9DAC;
    case 182u: goto L_088A9DCC;
    case 183u: goto L_088A9DEC;
    case 184u: goto L_088A9E00;
    case 185u: goto L_088A9E04;
    case 186u: goto L_088A9E1C;
    case 187u: goto L_088A9E38;
    case 188u: goto L_088A9E4C;
    case 189u: goto L_088A9E5C;
    case 190u: goto L_088A9E70;
    case 191u: goto L_088A9E80;
    case 192u: goto L_088A9EA8;
    case 193u: goto L_088A9EB4;
    case 194u: goto L_088A9EC8;
    case 195u: goto L_088A9F14;
    case 196u: goto L_088A9F2C;
    case 197u: goto L_088A9F34;
    case 198u: goto L_088A9F4C;
    case 199u: goto L_088A9F78;
    case 200u: goto L_088A9F88;
    case 201u: goto L_088A9F90;
    case 202u: goto L_088A9FBC;
    case 203u: goto L_088A9FE8;
    case 204u: goto L_088A9FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088A9000:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A9010u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 46u, 0x088C0344u>(ctx, &aot_mem) && ctx.pc == 0x088A9010u) goto L_088A9010;
    return;
L_088A9010:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(108)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[23]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(108), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(80), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088A913C;
      }
      goto L_088A9040;
    }
L_088A9040:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 11u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[31] = (0x088A9058u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 158u, 0x08872BF0u>(ctx, &aot_mem) && ctx.pc == 0x088A9058u) goto L_088A9058;
    return;
L_088A9058:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(352)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (0x088A9078u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088A9078u) goto L_088A9078;
    return;
L_088A9078:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9138;
      }
      goto L_088A9080;
    }
L_088A9080:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088A9090u);
    aot_gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9090u) goto L_088A9090;
    return;
L_088A9090:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 11u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 32768u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(324), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(328), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[4] = (24948u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24900));
    aot_gpr[6] = (20563u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(20575));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (0u | 92u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088A90E0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088A90E0u) goto L_088A90E0;
    return;
L_088A90E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088A9100u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A9100u) goto L_088A9100;
    return;
L_088A9100:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(108)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(108), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(108), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(80), 0u);
    goto L_088A9138;
L_088A9138:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_088A913C;
L_088A913C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(80));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 216u, 0x088A8FDCu>(ctx, &aot_mem); return;
      }
      goto L_088A9154;
    }
L_088A9154:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A91F4;
      }
      goto L_088A9168;
    }
L_088A9168:
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (2218u << 16u);
    goto L_088A9174;
L_088A9174:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(336), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(340), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(344), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(5272)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088A919Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 25u, 0x088B627Cu>(ctx, &aot_mem) && ctx.pc == 0x088A919Cu) goto L_088A919C;
    return;
L_088A919C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(336);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_088A9174;
      }
      goto L_088A91F4;
    }
L_088A91F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088A9234;
      }
      goto L_088A9208;
    }
L_088A9208:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088A9220u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 170u, 0x088A7DF8u>(ctx, &aot_mem) && ctx.pc == 0x088A9220u) goto L_088A9220;
    return;
L_088A9220:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A9208;
      }
      goto L_088A9234;
    }
L_088A9234:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(56), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(60), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088A92A0;
      }
      goto L_088A9254;
    }
L_088A9254:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    goto L_088A925C;
L_088A925C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A9284;
      }
      goto L_088A9278;
    }
L_088A9278:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(56), aot_gpr[4]);
      if (branch_taken) {
          goto L_088A9290;
      }
      goto L_088A9284;
    }
L_088A9284:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(24), aot_gpr[8]);
    goto L_088A9290;
L_088A9290:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A925C;
      }
      goto L_088A92A0;
    }
L_088A92A0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A92FC;
      }
      goto L_088A92A8;
    }
L_088A92A8:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] << 2u);
      if (branch_taken) {
          goto L_088A92E8;
      }
      goto L_088A92B8;
    }
L_088A92B8:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[8]);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x088A92E0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A92E0u) goto L_088A92E0;
    return;
L_088A92E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088A92F4;
      }
      goto L_088A92E8;
    }
L_088A92E8:
    aot_gpr[31] = (0x088A92F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x088A92F0u) goto L_088A92F0;
    return;
L_088A92F0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_088A92F4;
L_088A92F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(56), 0u);
    goto L_088A92FC;
L_088A92FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9330;
      }
      goto L_088A9308;
    }
L_088A9308:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (2213u << 16u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (0u | 12u);
    aot_gpr[31] = (0x088A9320u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-3016));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x088A9320u) goto L_088A9320;
    return;
L_088A9320:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(52), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(24), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088A9338;
      }
      goto L_088A9330;
    }
L_088A9330:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(52), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_088A9338;
L_088A9338:
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[7] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A93F8;
      }
      goto L_088A9348;
    }
L_088A9348:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[9] = (aot_gpr[19] + static_cast<std::uint32_t>(40));
    aot_gpr[8] = (0u | 0u);
    goto L_088A9354;
L_088A9354:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
        goto L_088A93A0;
    }
    goto L_088A9378;
L_088A9378:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(60)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(56), aot_gpr[5]);
      if (branch_taken) {
          goto L_088A93E8;
      }
      goto L_088A93A0;
    }
L_088A93A0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(52)));
    aot_gpr[10] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[10]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(52)));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[31] = (0x088A93D8u);
    aot_gpr[4] = (aot_gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 50u, 0x08A4F398u>(ctx, &aot_mem) && ctx.pc == 0x088A93D8u) goto L_088A93D8;
    return;
L_088A93D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    goto L_088A93E8;
L_088A93E8:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[7] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A9354;
      }
      goto L_088A93F8;
    }
L_088A93F8:
    aot_gpr[31] = (0x088A9400u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 139u, 0x088A8A58u>(ctx, &aot_mem) && ctx.pc == 0x088A9400u) goto L_088A9400;
    return;
L_088A9400:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(356)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(360)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(364)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(368)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(372)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(376)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(380)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(384)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(388)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(392)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9434:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-192));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088A94A8;
      }
      goto L_088A9464;
    }
L_088A9464:
    aot_gpr[18] = (3840u << 16u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_088A9470;
L_088A9470:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(108)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[5] >> 24u);
    aot_gpr[5] = (aot_gpr[5] & 8u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A949C;
      }
      goto L_088A9490;
    }
L_088A9490:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088A949Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(5288)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 90u, 0x088B86FCu>(ctx, &aot_mem) && ctx.pc == 0x088A949Cu) goto L_088A949C;
    return;
L_088A949C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[19] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
        goto L_088A9470;
    }
    goto L_088A94A8;
L_088A94A8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088A9568;
      }
      goto L_088A94E8;
    }
L_088A94E8:
    aot_gpr[18] = (0u | 0u);
    goto L_088A94EC;
L_088A94EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088A9500u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 122u, 0x088A7900u>(ctx, &aot_mem) && ctx.pc == 0x088A9500u) goto L_088A9500;
    return;
L_088A9500:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[4] = (aot_gpr[20] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = aot_fpr[14] - aot_fpr[12];
    aot_gpr[31] = (0x088A9528u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 87u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9528u) goto L_088A9528;
    return;
L_088A9528:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((aot_fpr[0] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A954C;
      }
      goto L_088A953C;
    }
L_088A953C:
    aot_gpr[31] = (0x088A9544u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 45u, 0x088A82D0u>(ctx, &aot_mem) && ctx.pc == 0x088A9544u) goto L_088A9544;
    return;
L_088A9544:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_088A9558;
      }
      goto L_088A954C;
    }
L_088A954C:
    aot_gpr[31] = (0x088A9554u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 98u, 0x088A7768u>(ctx, &aot_mem) && ctx.pc == 0x088A9554u) goto L_088A9554;
    return;
L_088A9554:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_088A9558;
L_088A9558:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A94EC;
      }
      goto L_088A9568;
    }
L_088A9568:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A963C;
      }
      goto L_088A9578;
    }
L_088A9578:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_fpr[20] = std::sqrt(aot_fpr[20]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[17] < static_cast<std::uint32_t>(129) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_088A95AC;
      }
      goto L_088A9590;
    }
L_088A9590:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (0u | 128u);
    aot_gpr[31] = (0x088A95A8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(29016));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088A95A8u) goto L_088A95A8;
    return;
L_088A95A8:
    aot_gpr[17] = (0u | 128u);
    goto L_088A95AC;
L_088A95AC:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5288)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 128u);
    aot_gpr[31] = (0x088A95CCu);
    aot_gpr[8] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 121u, 0x088B8984u>(ctx, &aot_mem) && ctx.pc == 0x088A95CCu) goto L_088A95CC;
    return;
L_088A95CC:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(129) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A9600;
      }
      goto L_088A95DC;
    }
L_088A95DC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(84));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (0u | 128u);
    aot_gpr[31] = (0x088A95F4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(29072));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088A95F4u) goto L_088A95F4;
    return;
L_088A95F4:
    aot_gpr[4] = (0u | 128u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[19] = (0u | 128u);
    goto L_088A9600;
L_088A9600:
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A963C;
      }
      goto L_088A960C;
    }
L_088A960C:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9638;
      }
      goto L_088A9614;
    }
L_088A9614:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088A9620u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 195u, 0x088A8E34u>(ctx, &aot_mem) && ctx.pc == 0x088A9620u) goto L_088A9620;
    return;
L_088A9620:
    aot_gpr[5] = (aot_gpr[19] << 2u);
    aot_gpr[6] = (2187u << 16u);
    aot_gpr[5] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088A9638u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29132));
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 26u, 0x08A4F1E4u>(ctx, &aot_mem) && ctx.pc == 0x088A9638u) goto L_088A9638;
    return;
L_088A9638:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    goto L_088A963C;
L_088A963C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088A96FC;
      }
      goto L_088A9650;
    }
L_088A9650:
    aot_gpr[21] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
    aot_gpr[20] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    aot_gpr[18] = (aot_gpr[16] | 0u);
    goto L_088A965C;
L_088A965C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A968C;
      }
      goto L_088A9668;
    }
L_088A9668:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(64)));
    goto L_088A966C;
L_088A966C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088A9680;
      }
      goto L_088A9678;
    }
L_088A9678:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A968C;
      }
      goto L_088A9680;
    }
L_088A9680:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A966C;
      }
      goto L_088A968C;
    }
L_088A968C:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A96EC;
      }
      goto L_088A9694;
    }
L_088A9694:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A96C4;
      }
      goto L_088A96A0;
    }
L_088A96A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(64)));
    goto L_088A96A4;
L_088A96A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A96B8;
      }
      goto L_088A96B0;
    }
L_088A96B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A96C4;
      }
      goto L_088A96B8;
    }
L_088A96B8:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A96A4;
      }
      goto L_088A96C4;
    }
L_088A96C4:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088A96D0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 54u, 0x08A4F3E4u>(ctx, &aot_mem) && ctx.pc == 0x088A96D0u) goto L_088A96D0;
    return;
L_088A96D0:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088A96DCu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 50u, 0x08A4F398u>(ctx, &aot_mem) && ctx.pc == 0x088A96DCu) goto L_088A96DC;
    return;
L_088A96DC:
    aot_gpr[31] = (0x088A96E4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 45u, 0x088A82D0u>(ctx, &aot_mem) && ctx.pc == 0x088A96E4u) goto L_088A96E4;
    return;
L_088A96E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_088A96EC;
L_088A96EC:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A965C;
      }
      goto L_088A96FC;
    }
L_088A96FC:
    aot_gpr[17] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_088A9788;
      }
      goto L_088A9708;
    }
L_088A9708:
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
    goto L_088A970C;
L_088A970C:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088A9750;
      }
      goto L_088A9724;
    }
L_088A9724:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_088A972C;
L_088A972C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[9] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A9740;
      }
      goto L_088A9738;
    }
L_088A9738:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_088A9750;
      }
      goto L_088A9740;
    }
L_088A9740:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A972C;
      }
      goto L_088A9750;
    }
L_088A9750:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A9778;
      }
      goto L_088A9758;
    }
L_088A9758:
    aot_gpr[31] = (0x088A9760u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 98u, 0x088A7768u>(ctx, &aot_mem) && ctx.pc == 0x088A9760u) goto L_088A9760;
    return;
L_088A9760:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088A976Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 54u, 0x08A4F3E4u>(ctx, &aot_mem) && ctx.pc == 0x088A976Cu) goto L_088A976C;
    return;
L_088A976C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088A9778u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 50u, 0x08A4F398u>(ctx, &aot_mem) && ctx.pc == 0x088A9778u) goto L_088A9778;
    return;
L_088A9778:
    aot_gpr[17] = (aot_gpr[20] | 0u);
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A970C;
      }
      goto L_088A9784;
    }
L_088A9784:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_088A9788;
L_088A9788:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (64512u << 16u);
      if (branch_taken) {
          goto L_088A97D0;
      }
      goto L_088A9794;
    }
L_088A9794:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_088A9798;
L_088A9798:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A97B4;
      }
      goto L_088A97A8;
    }
L_088A97A8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(108)));
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(108), aot_gpr[8]);
    goto L_088A97B4;
L_088A97B4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(108)));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(108), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A9798;
      }
      goto L_088A97CC;
    }
L_088A97CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_088A97D0;
L_088A97D0:
    aot_gpr[18] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[17] = (3840u << 16u);
      if (branch_taken) {
          goto L_088A981C;
      }
      goto L_088A97DC;
    }
L_088A97DC:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    goto L_088A97E0;
L_088A97E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(108)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] >> 24u);
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A9808;
      }
      goto L_088A9800;
    }
L_088A9800:
    aot_gpr[31] = (0x088A9808u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 45u, 0x088A82D0u>(ctx, &aot_mem) && ctx.pc == 0x088A9808u) goto L_088A9808;
    return;
L_088A9808:
    aot_gpr[31] = (0x088A9810u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 129u, 0x088A7968u>(ctx, &aot_mem) && ctx.pc == 0x088A9810u) goto L_088A9810;
    return;
L_088A9810:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[18] != 0u) {
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
        goto L_088A97E0;
    }
    goto L_088A981C;
L_088A981C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (64512u << 16u);
      if (branch_taken) {
          goto L_088A9874;
      }
      goto L_088A9830;
    }
L_088A9830:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_088A9838;
L_088A9838:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(108)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(108), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[31] = (0x088A9860u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 129u, 0x088A7968u>(ctx, &aot_mem) && ctx.pc == 0x088A9860u) goto L_088A9860;
    return;
L_088A9860:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A9838;
      }
      goto L_088A9874;
    }
L_088A9874:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(148));
      if (branch_taken) {
          goto L_088A9998;
      }
      goto L_088A988C;
    }
L_088A988C:
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[20] = (0u | 1u);
    aot_gpr[18] = (0u | 0u);
    goto L_088A9898;
L_088A9898:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[4] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = aot_fpr[14] - aot_fpr[12];
    aot_gpr[31] = (0x088A98CCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 87u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A98CCu) goto L_088A98CC;
    return;
L_088A98CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_088A9900;
    }
    goto L_088A98F0;
L_088A98F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_088A9900;
      }
      goto L_088A9900;
    }
L_088A9900:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A9958;
      }
      goto L_088A9910;
    }
L_088A9910:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(74)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A9984;
      }
      goto L_088A9928;
    }
L_088A9928:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(aot_gpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[31] = (0x088A9950u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0288_entry, 288u, 118u, 0x08924A10u>(ctx, &aot_mem) && ctx.pc == 0x088A9950u) goto L_088A9950;
    return;
L_088A9950:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088A9984;
      }
      goto L_088A9958;
    }
L_088A9958:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(74)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9984;
      }
      goto L_088A9970;
    }
L_088A9970:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_088A9984;
L_088A9984:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_088A9898;
      }
      goto L_088A9998;
    }
L_088A9998:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A99C0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27248), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A99E0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A99E8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A99F0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A99F8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9A00:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9A08:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9A10:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9A18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24568));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(128)));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(132)));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(136)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[7] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(-4800));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088A9A6Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(136)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 166u, 0x08877BE8u>(ctx, &aot_mem) && ctx.pc == 0x088A9A6Cu) goto L_088A9A6C;
    return;
L_088A9A6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9A84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A9AF8;
      }
      goto L_088A9AA0;
    }
L_088A9AA0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4800));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[31] = (0x088A9AB8u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 60u, 0x088773A4u>(ctx, &aot_mem) && ctx.pc == 0x088A9AB8u) goto L_088A9AB8;
    return;
L_088A9AB8:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_088A9AD0;
      }
      goto L_088A9AC0;
    }
L_088A9AC0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24568));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_088A9AD0;
L_088A9AD0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088A9AF8;
      }
      goto L_088A9AD8;
    }
L_088A9AD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088A9AF8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A9AF8u) goto L_088A9AF8;
    return;
L_088A9AF8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9B0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088A9B58u);
    aot_gpr[6] = (0u | 24u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A9B58u) goto L_088A9B58;
    return;
L_088A9B58:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_088A9BA0;
      }
      goto L_088A9B64;
    }
L_088A9B64:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24568));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2)));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4800));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    goto L_088A9BA0;
L_088A9BA0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x088A9BBCu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 67u, 0x088A754Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9BBCu) goto L_088A9BBC;
    return;
L_088A9BBC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088A9BD0u);
    aot_gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9BD0u) goto L_088A9BD0;
    return;
L_088A9BD0:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[5] = (0u | 16u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088A9C0Cu);
    aot_gpr[6] = (0u | 32u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A9C0Cu) goto L_088A9C0C;
    return;
L_088A9C0C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088A9C28;
      }
      goto L_088A9C18;
    }
L_088A9C18:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x088A9C24u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 53u, 0x08927540u>(ctx, &aot_mem) && ctx.pc == 0x088A9C24u) goto L_088A9C24;
    return;
L_088A9C24:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_088A9C28;
L_088A9C28:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088A9C54;
      }
      goto L_088A9C38;
    }
L_088A9C38:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x088A9C50u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 63u, 0x088A7460u>(ctx, &aot_mem) && ctx.pc == 0x088A9C50u) goto L_088A9C50;
    return;
L_088A9C50:
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_088A9C54;
L_088A9C54:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9C7C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27256), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9C9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A9DCC;
      }
      goto L_088A9CC4;
    }
L_088A9CC4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4720));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[16] | 0u);
    aot_gpr[20] = (2218u << 16u);
    goto L_088A9CDC;
L_088A9CDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9CF4;
      }
      goto L_088A9CE8;
    }
L_088A9CE8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088A9CF4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-3948)));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 24u, 0x088C61B8u>(ctx, &aot_mem) && ctx.pc == 0x088A9CF4u) goto L_088A9CF4;
    return;
L_088A9CF4:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A9CDC;
      }
      goto L_088A9D04;
    }
L_088A9D04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9D20;
      }
      goto L_088A9D10;
    }
L_088A9D10:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088A9D20u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088A9D20u) goto L_088A9D20;
    return;
L_088A9D20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(46))))));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_088A9D88;
      }
      goto L_088A9D38;
    }
L_088A9D38:
    aot_gpr[19] = (0u | 0u);
    goto L_088A9D3C;
L_088A9D3C:
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9D70;
      }
      goto L_088A9D4C;
    }
L_088A9D4C:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088A9D6Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A9D6Cu) goto L_088A9D6C;
    return;
L_088A9D6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_088A9D70;
L_088A9D70:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(46))))));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A9D3C;
      }
      goto L_088A9D88;
    }
L_088A9D88:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] & 1u);
      if (branch_taken) {
          goto L_088A9DA4;
      }
      goto L_088A9D90;
    }
L_088A9D90:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088A9DA0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088A9DA0u) goto L_088A9DA0;
    return;
L_088A9DA0:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    goto L_088A9DA4;
L_088A9DA4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088A9DCC;
      }
      goto L_088A9DAC;
    }
L_088A9DAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088A9DCCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A9DCCu) goto L_088A9DCC;
    return;
L_088A9DCC:
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
L_088A9DEC:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(113))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(112))))));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (aot_gpr[8] << 2u);
      if (branch_taken) {
          goto L_088A9E4C;
      }
      goto L_088A9E00;
    }
L_088A9E00:
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    goto L_088A9E04;
L_088A9E04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    goto L_088A9E1C;
L_088A9E1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[5] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A9E1C;
      }
      goto L_088A9E38;
    }
L_088A9E38:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(112))))));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A9E04;
      }
      goto L_088A9E4C;
    }
L_088A9E4C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(27268)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(111), static_cast<std::uint8_t>(aot_gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9E5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088A9E70u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_088A9DEC;
L_088A9E70:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[31] = (0x088A9E80u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x088A9E80u) goto L_088A9E80;
    return;
L_088A9E80:
    aot_gpr[4] = (16544u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[4] = (20224u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 1u);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088A9EB4;
      }
      goto L_088A9EA8;
    }
L_088A9EA8:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088A9EC8;
      }
      goto L_088A9EB4;
    }
L_088A9EB4:
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    aot_gpr[6] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    goto L_088A9EC8;
L_088A9EC8:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(110), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(111), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9F2C;
      }
      goto L_088A9F14;
    }
L_088A9F14:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_088A9F34;
      }
      goto L_088A9F2C;
    }
L_088A9F2C:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_088A9F34;
L_088A9F34:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(38))))));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(104), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(40))))));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(106), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[6] = (aot_gpr[5] << 24u);
    goto L_088A9F4C;
L_088A9F4C:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 24u));
    aot_gpr[6] = (aot_gpr[6] << 24u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 24u));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (aot_gpr[5] << 24u);
      if (branch_taken) {
          goto L_088A9F4C;
      }
      goto L_088A9F78;
    }
L_088A9F78:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9F88:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A9F90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[6] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088A9FF4;
      }
      goto L_088A9FBC;
    }
L_088A9FBC:
    aot_gpr[5] = (aot_gpr[5] | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(44))))));
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[31] = (0x088A9FE8u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 34u, 0x088B0270u>(ctx, &aot_mem) && ctx.pc == 0x088A9FE8u) goto L_088A9FE8;
    return;
L_088A9FE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 3u, 0x088AA028u>(ctx, &aot_mem); return;
      }
      goto L_088A9FF4;
    }
L_088A9FF4:
    aot_gpr[5] = (aot_gpr[5] | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.pc = 0x088AA000u; return;
}

void recomp_unit_0165(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0165_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_165(Runtime &runtime) {
    runtime.register_generated_unit(165u, 0x088A9000u, 4096u, &recomp_unit_0165, &recomp_unit_0165_entry);
    runtime.register_function(0x088A9000u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9010u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9040u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9058u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9078u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9080u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9090u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A90E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9100u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9138u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A913Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9154u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9168u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9174u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A919Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A91F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9208u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9220u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9234u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9254u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A925Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9278u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9284u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9290u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A92A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A92A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A92B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A92E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A92E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A92F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A92F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A92FCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9308u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9320u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9330u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9338u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9348u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9354u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9378u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A93A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A93D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A93E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A93F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9400u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9434u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9464u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9470u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9490u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A949Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A94A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A94E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A94ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9500u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9528u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A953Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9544u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A954Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9554u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9558u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9568u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9578u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9590u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A95A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A95ACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A95CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A95DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A95F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9600u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A960Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9614u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9620u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9638u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A963Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9650u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A965Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9668u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A966Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9678u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9680u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A968Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9694u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A96A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A96A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A96B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A96B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A96C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A96D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A96DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A96E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A96ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A96FCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9708u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A970Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9724u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A972Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9738u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9740u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9750u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9758u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9760u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A976Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9778u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9784u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9788u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9794u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9798u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A97A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A97B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A97CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A97D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A97DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A97E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9800u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9808u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9810u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A981Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9830u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9838u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9860u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9874u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A988Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9898u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A98CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A98F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9900u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9910u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9928u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9950u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9958u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9970u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9984u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9998u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A99C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A99E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A99E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A99F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A99F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9A00u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9A08u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9A10u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9A18u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9A6Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9A84u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9AA0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9AB8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9AC0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9AD0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9AD8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9AF8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9B0Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9B58u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9B64u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9BA0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9BBCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9BD0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9C0Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9C18u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9C24u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9C28u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9C38u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9C50u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9C54u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9C7Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9C9Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9CC4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9CDCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9CE8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9CF4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9D04u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9D10u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9D20u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9D38u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9D3Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9D4Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9D6Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9D70u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9D88u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9D90u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9DA0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9DA4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9DACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9DCCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9DECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9E00u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9E04u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9E1Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9E38u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9E4Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9E5Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9E70u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9E80u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9EA8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9EB4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9EC8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9F14u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9F2Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9F34u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9F4Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9F78u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9F88u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9F90u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9FBCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9FE8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x088A9FF4u, &recomp_unit_0165, "recomp_unit_0165");
}
} // namespace psprecomp
