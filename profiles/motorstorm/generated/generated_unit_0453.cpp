#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0453[1023] = {
    1, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 6, 7, 0, 0, 0,
    0, 8, 0, 9, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0,
    16, 0, 0, 0, 17, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 30, 0, 31, 0, 32, 0,
    0, 0, 0, 0, 33, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 43, 0, 44, 0, 45,
    0, 0, 0, 46, 0, 47, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 50, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0,
    53, 0, 0, 0, 54, 0, 0, 0, 0, 55, 56, 0, 57, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0,
    0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 69, 0, 70, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 75, 76, 0, 77, 0, 0,
    78, 0, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 86, 0,
    0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0,
    92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 95, 0, 96, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 102, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0,
    107, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 115,
    116, 0, 117, 0, 0, 118, 119, 0, 0, 120, 0, 0, 121, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 125, 0, 126, 0,
    0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0,
    135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 143,
    0, 0, 0, 144, 145, 0, 0, 0, 146, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150,
    0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 157, 0, 0, 0,
    0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 174,
    0, 0, 175, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 194, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 197, 0, 198, 0,
    199, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 203, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 209, 0, 0,
    210, 0, 0, 211, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 215,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 218,
};
void recomp_unit_0453_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089C9000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0453[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089C9000;
    case 2u: goto L_089C9010;
    case 3u: goto L_089C9018;
    case 4u: goto L_089C9050;
    case 5u: goto L_089C9058;
    case 6u: goto L_089C906C;
    case 7u: goto L_089C9070;
    case 8u: goto L_089C9084;
    case 9u: goto L_089C908C;
    case 10u: goto L_089C90A4;
    case 11u: goto L_089C90AC;
    case 12u: goto L_089C90B8;
    case 13u: goto L_089C90C0;
    case 14u: goto L_089C90DC;
    case 15u: goto L_089C90F4;
    case 16u: goto L_089C9100;
    case 17u: goto L_089C9110;
    case 18u: goto L_089C9114;
    case 19u: goto L_089C9128;
    case 20u: goto L_089C913C;
    case 21u: goto L_089C9148;
    case 22u: goto L_089C9158;
    case 23u: goto L_089C9164;
    case 24u: goto L_089C9198;
    case 25u: goto L_089C91A0;
    case 26u: goto L_089C91A8;
    case 27u: goto L_089C91B0;
    case 28u: goto L_089C91D0;
    case 29u: goto L_089C91E0;
    case 30u: goto L_089C91E8;
    case 31u: goto L_089C91F0;
    case 32u: goto L_089C91F8;
    case 33u: goto L_089C9210;
    case 34u: goto L_089C9218;
    case 35u: goto L_089C9220;
    case 36u: goto L_089C9270;
    case 37u: goto L_089C927C;
    case 38u: goto L_089C92A0;
    case 39u: goto L_089C92AC;
    case 40u: goto L_089C92B8;
    case 41u: goto L_089C92DC;
    case 42u: goto L_089C92E8;
    case 43u: goto L_089C92EC;
    case 44u: goto L_089C92F4;
    case 45u: goto L_089C92FC;
    case 46u: goto L_089C930C;
    case 47u: goto L_089C9314;
    case 48u: goto L_089C931C;
    case 49u: goto L_089C9328;
    case 50u: goto L_089C9340;
    case 51u: goto L_089C9344;
    case 52u: goto L_089C9378;
    case 53u: goto L_089C9380;
    case 54u: goto L_089C9390;
    case 55u: goto L_089C93A4;
    case 56u: goto L_089C93A8;
    case 57u: goto L_089C93B0;
    case 58u: goto L_089C93BC;
    case 59u: goto L_089C93D0;
    case 60u: goto L_089C93DC;
    case 61u: goto L_089C93E4;
    case 62u: goto L_089C9408;
    case 63u: goto L_089C9418;
    case 64u: goto L_089C9428;
    case 65u: goto L_089C944C;
    case 66u: goto L_089C9454;
    case 67u: goto L_089C9488;
    case 68u: goto L_089C9490;
    case 69u: goto L_089C94A8;
    case 70u: goto L_089C94B0;
    case 71u: goto L_089C94B8;
    case 72u: goto L_089C94C4;
    case 73u: goto L_089C94D0;
    case 74u: goto L_089C94DC;
    case 75u: goto L_089C94E8;
    case 76u: goto L_089C94EC;
    case 77u: goto L_089C94F4;
    case 78u: goto L_089C9500;
    case 79u: goto L_089C9510;
    case 80u: goto L_089C951C;
    case 81u: goto L_089C9528;
    case 82u: goto L_089C953C;
    case 83u: goto L_089C9544;
    case 84u: goto L_089C9564;
    case 85u: goto L_089C9574;
    case 86u: goto L_089C9578;
    case 87u: goto L_089C9588;
    case 88u: goto L_089C95CC;
    case 89u: goto L_089C95D4;
    case 90u: goto L_089C95E0;
    case 91u: goto L_089C95F4;
    case 92u: goto L_089C9600;
    case 93u: goto L_089C9608;
    case 94u: goto L_089C9628;
    case 95u: goto L_089C962C;
    case 96u: goto L_089C9634;
    case 97u: goto L_089C9638;
    case 98u: goto L_089C9640;
    case 99u: goto L_089C966C;
    case 100u: goto L_089C96A4;
    case 101u: goto L_089C96AC;
    case 102u: goto L_089C96B8;
    case 103u: goto L_089C96BC;
    case 104u: goto L_089C96C8;
    case 105u: goto L_089C96F0;
    case 106u: goto L_089C96F8;
    case 107u: goto L_089C9700;
    case 108u: goto L_089C9710;
    case 109u: goto L_089C9718;
    case 110u: goto L_089C973C;
    case 111u: goto L_089C9744;
    case 112u: goto L_089C974C;
    case 113u: goto L_089C975C;
    case 114u: goto L_089C9774;
    case 115u: goto L_089C977C;
    case 116u: goto L_089C9780;
    case 117u: goto L_089C9788;
    case 118u: goto L_089C9794;
    case 119u: goto L_089C9798;
    case 120u: goto L_089C97A4;
    case 121u: goto L_089C97B0;
    case 122u: goto L_089C97B4;
    case 123u: goto L_089C97DC;
    case 124u: goto L_089C97E4;
    case 125u: goto L_089C97F0;
    case 126u: goto L_089C97F8;
    case 127u: goto L_089C9808;
    case 128u: goto L_089C9818;
    case 129u: goto L_089C9828;
    case 130u: goto L_089C9834;
    case 131u: goto L_089C9840;
    case 132u: goto L_089C9854;
    case 133u: goto L_089C985C;
    case 134u: goto L_089C9870;
    case 135u: goto L_089C9880;
    case 136u: goto L_089C9888;
    case 137u: goto L_089C98A8;
    case 138u: goto L_089C98B0;
    case 139u: goto L_089C98B8;
    case 140u: goto L_089C98CC;
    case 141u: goto L_089C98E4;
    case 142u: goto L_089C98EC;
    case 143u: goto L_089C98FC;
    case 144u: goto L_089C990C;
    case 145u: goto L_089C9910;
    case 146u: goto L_089C9920;
    case 147u: goto L_089C9928;
    case 148u: goto L_089C9934;
    case 149u: goto L_089C9960;
    case 150u: goto L_089C997C;
    case 151u: goto L_089C998C;
    case 152u: goto L_089C9994;
    case 153u: goto L_089C99B0;
    case 154u: goto L_089C99C0;
    case 155u: goto L_089C99D8;
    case 156u: goto L_089C99E8;
    case 157u: goto L_089C99F0;
    case 158u: goto L_089C9A0C;
    case 159u: goto L_089C9A14;
    case 160u: goto L_089C9A30;
    case 161u: goto L_089C9A38;
    case 162u: goto L_089C9A58;
    case 163u: goto L_089C9A60;
    case 164u: goto L_089C9A90;
    case 165u: goto L_089C9A9C;
    case 166u: goto L_089C9AAC;
    case 167u: goto L_089C9AB8;
    case 168u: goto L_089C9AD8;
    case 169u: goto L_089C9AEC;
    case 170u: goto L_089C9B2C;
    case 171u: goto L_089C9B34;
    case 172u: goto L_089C9B58;
    case 173u: goto L_089C9B64;
    case 174u: goto L_089C9B7C;
    case 175u: goto L_089C9B88;
    case 176u: goto L_089C9B94;
    case 177u: goto L_089C9B9C;
    case 178u: goto L_089C9BE4;
    case 179u: goto L_089C9C10;
    case 180u: goto L_089C9C18;
    case 181u: goto L_089C9C30;
    case 182u: goto L_089C9C3C;
    case 183u: goto L_089C9C50;
    case 184u: goto L_089C9C84;
    case 185u: goto L_089C9C8C;
    case 186u: goto L_089C9CC0;
    case 187u: goto L_089C9D08;
    case 188u: goto L_089C9D34;
    case 189u: goto L_089C9D58;
    case 190u: goto L_089C9D60;
    case 191u: goto L_089C9D90;
    case 192u: goto L_089C9DB4;
    case 193u: goto L_089C9DC0;
    case 194u: goto L_089C9DC4;
    case 195u: goto L_089C9DDC;
    case 196u: goto L_089C9DE4;
    case 197u: goto L_089C9DF0;
    case 198u: goto L_089C9DF8;
    case 199u: goto L_089C9E00;
    case 200u: goto L_089C9E10;
    case 201u: goto L_089C9E24;
    case 202u: goto L_089C9E74;
    case 203u: goto L_089C9E78;
    case 204u: goto L_089C9EA8;
    case 205u: goto L_089C9EC0;
    case 206u: goto L_089C9EC8;
    case 207u: goto L_089C9EE0;
    case 208u: goto L_089C9EEC;
    case 209u: goto L_089C9EF4;
    case 210u: goto L_089C9F00;
    case 211u: goto L_089C9F0C;
    case 212u: goto L_089C9F18;
    case 213u: goto L_089C9F20;
    case 214u: goto L_089C9F74;
    case 215u: goto L_089C9F7C;
    case 216u: goto L_089C9FCC;
    case 217u: goto L_089C9FD4;
    case 218u: goto L_089C9FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089C9000:
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[16]));
    aot_gpr[31] = (0x089C9010u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 117u, 0x089CC9F8u>(ctx, &aot_mem) && ctx.pc == 0x089C9010u) goto L_089C9010;
    return;
L_089C9010:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0452_entry, 452u, 171u, 0x089C8F3Cu>(ctx, &aot_mem); return;
      }
      goto L_089C9018;
    }
L_089C9018:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(22)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[21] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u | 61440u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[10] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    aot_gpr[31] = (0x089C9050u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 104u, 0x089C367Cu>(ctx, &aot_mem) && ctx.pc == 0x089C9050u) goto L_089C9050;
    return;
L_089C9050:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C9218;
      }
      goto L_089C9058;
    }
L_089C9058:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(6));
    aot_gpr[2] = (aot_gpr[19] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_089C906C;
L_089C906C:
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089C9070;
L_089C9070:
    aot_gpr[16] = (aot_gpr[3] & 65535u);
    aot_gpr[2] = (aot_gpr[6] & 65535u);
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C90A4;
      }
      goto L_089C9084;
    }
L_089C9084:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    (void)rt.invoke_chained_direct<&recomp_unit_0452_entry, 452u, 176u, 0x089C8F94u>(ctx, &aot_mem); return;
L_089C908C:
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[3] & 65535u);
    aot_gpr[2] = (aot_gpr[6] & 65535u);
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C9084;
      }
      goto L_089C90A4;
    }
L_089C90A4:
    { const bool branch_taken = aot_gpr[30] != 0u;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0452_entry, 452u, 171u, 0x089C8F3Cu>(ctx, &aot_mem); return;
      }
      goto L_089C90AC;
    }
L_089C90AC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0452_entry, 452u, 172u, 0x089C8F40u>(ctx, &aot_mem); return;
      }
      goto L_089C90B8;
    }
L_089C90B8:
    if (aot_gpr[22] != 0u) {
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
        (void)rt.invoke_chained_direct<&recomp_unit_0452_entry, 452u, 173u, 0x089C8F44u>(ctx, &aot_mem); return;
    }
    goto L_089C90C0;
L_089C90C0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[2] = (aot_gpr[20] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0452_entry, 452u, 171u, 0x089C8F3Cu>(ctx, &aot_mem); return;
      }
      goto L_089C90DC;
    }
L_089C90DC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(188)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C90F4u);
    aot_gpr[7] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C90F4u) goto L_089C90F4;
    return;
L_089C90F4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089C91E0;
      }
      goto L_089C9100;
    }
L_089C9100:
    aot_gpr[18] = (0u + 0u);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(2));
    goto L_089C9128;
L_089C9110:
    aot_gpr[3] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089C9114;
L_089C9114:
    aot_gpr[18] = (aot_gpr[3] & 65535u);
    aot_gpr[2] = (aot_gpr[6] & 65535u);
    aot_gpr[2] = (aot_gpr[18] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089C91E0;
      }
      goto L_089C9128;
    }
L_089C9128:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-3));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C9114;
      }
      goto L_089C913C;
    }
L_089C913C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(452)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_089C91F8;
      }
      goto L_089C9148;
    }
L_089C9148:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(468)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C9114;
      }
      goto L_089C9158;
    }
L_089C9158:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089C9164u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089C9164u) goto L_089C9164;
    return;
L_089C9164:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (0u | 61440u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[10] = (0u + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    aot_gpr[31] = (0x089C9198u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 104u, 0x089C367Cu>(ctx, &aot_mem) && ctx.pc == 0x089C9198u) goto L_089C9198;
    return;
L_089C9198:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0452_entry, 452u, 171u, 0x089C8F3Cu>(ctx, &aot_mem); return;
      }
      goto L_089C91A0;
    }
L_089C91A0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_089C9110;
L_089C91A8:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    goto L_089C906C;
L_089C91B0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(468)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C9070;
      }
      goto L_089C91D0;
    }
L_089C91D0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[2]);
    goto L_089C9070;
L_089C91E0:
    aot_gpr[31] = (0x089C91E8u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 108u, 0x089C280Cu>(ctx, &aot_mem) && ctx.pc == 0x089C91E8u) goto L_089C91E8;
    return;
L_089C91E8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0452_entry, 452u, 171u, 0x089C8F3Cu>(ctx, &aot_mem); return;
      }
      goto L_089C91F0;
    }
L_089C91F0:
    aot_gpr[4] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0452_entry, 452u, 171u, 0x089C8F3Cu>(ctx, &aot_mem); return;
L_089C91F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(452), 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(152)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C9210u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(188)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C9210u) goto L_089C9210;
    return;
L_089C9210:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_089C9110;
L_089C9218:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0452_entry, 452u, 171u, 0x089C8F3Cu>(ctx, &aot_mem); return;
L_089C9220:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[5] & 65535u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[2] = (0u | 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    { const bool branch_taken = aot_gpr[21] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_089C9344;
      }
      goto L_089C9270;
    }
L_089C9270:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x089C927Cu);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 96u, 0x089C1858u>(ctx, &aot_mem) && ctx.pc == 0x089C927Cu) goto L_089C927C;
    return;
L_089C927C:
    aot_gpr[2] = (aot_gpr[21] << 3u);
    aot_gpr[3] = (aot_gpr[21] << 6u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[21]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[2]);
      if (branch_taken) {
          goto L_089C92E8;
      }
      goto L_089C92A0;
    }
L_089C92A0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(88)));
    if (aot_gpr[7] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(436)));
        goto L_089C92EC;
    }
    goto L_089C92AC;
L_089C92AC:
    aot_gpr[19] = (aot_gpr[21] << 2u);
    aot_gpr[17] = (0u + 0u);
    aot_gpr[16] = (0u + 0u);
    goto L_089C92B8;
L_089C92B8:
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[6] + 0u);
    aot_gpr[2] = (aot_gpr[19] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    { const bool branch_taken = aot_gpr[20] == aot_gpr[3];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089C9490;
      }
      goto L_089C92DC;
    }
L_089C92DC:
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[7] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
        goto L_089C92B8;
    }
    goto L_089C92E8;
L_089C92E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(436)));
    goto L_089C92EC;
L_089C92EC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089C92FC;
      }
      goto L_089C92F4;
    }
L_089C92F4:
    aot_gpr[31] = (0x089C92FCu);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 2u, 0x089C10C8u>(ctx, &aot_mem) && ctx.pc == 0x089C92FCu) goto L_089C92FC;
    return;
L_089C92FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089C94B8;
      }
      goto L_089C930C;
    }
L_089C930C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_089C9378;
      }
      goto L_089C9314;
    }
L_089C9314:
    aot_gpr[31] = (0x089C931Cu);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 11u, 0x089C605Cu>(ctx, &aot_mem) && ctx.pc == 0x089C931Cu) goto L_089C931C;
    return;
L_089C931C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u | 54501u);
      if (branch_taken) {
          goto L_089C9344;
      }
      goto L_089C9328;
    }
L_089C9328:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(188)));
    aot_gpr[7] = (aot_gpr[22] + 0u);
    aot_gpr[4] = (0u | 65535u);
    aot_gpr[5] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C9340u);
    aot_gpr[6] = (0u | 54501u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C9340u) goto L_089C9340;
    return;
L_089C9340:
    aot_gpr[3] = (0u | 54501u);
    goto L_089C9344;
L_089C9344:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9378:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089C9314;
      }
      goto L_089C9380;
    }
L_089C9380:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(152)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(188)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C9390u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C9390u) goto L_089C9390;
    return;
L_089C9390:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(-3));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(468)));
        goto L_089C9818;
    }
    goto L_089C93A4;
L_089C93A4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    goto L_089C93A8;
L_089C93A8:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[23] = (0u | 65535u);
      if (branch_taken) {
          goto L_089C974C;
      }
      goto L_089C93B0;
    }
L_089C93B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089C96A4;
      }
      goto L_089C93BC;
    }
L_089C93BC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[22] == aot_gpr[2];
    aot_gpr[16] = (aot_gpr[21] & 65535u);
      if (branch_taken) {
          goto L_089C94DC;
      }
      goto L_089C93D0;
    }
L_089C93D0:
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[22] == aot_gpr[19];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C94DC;
      }
      goto L_089C93DC;
    }
L_089C93DC:
    if (aot_gpr[22] != aot_gpr[2]) {
    aot_gpr[5] = (aot_gpr[20] + 0u);
        goto L_089C94EC;
    }
    goto L_089C93E4;
L_089C93E4:
    aot_gpr[3] = (aot_gpr[16] << 6u);
    aot_gpr[2] = (aot_gpr[16] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[3];
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
      if (branch_taken) {
          goto L_089C94DC;
      }
      goto L_089C9408;
    }
L_089C9408:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089C94DC;
      }
      goto L_089C9418;
    }
L_089C9418:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(6));
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(38));
    aot_gpr[31] = (0x089C9428u);
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089C9428u) goto L_089C9428;
    return;
L_089C9428:
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[5] = (aot_gpr[30] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(aot_gpr[17]));
    aot_gpr[31] = (0x089C944Cu);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(aot_gpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 7u, 0x089CC06Cu>(ctx, &aot_mem) && ctx.pc == 0x089C944Cu) goto L_089C944C;
    return;
L_089C944C:
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (aot_gpr[20] + 0u);
        goto L_089C94EC;
    }
    goto L_089C9454;
L_089C9454:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(22)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[9] = (aot_gpr[30] + 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (0u | 61440u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[10] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[19]);
    aot_gpr[31] = (0x089C9488u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 104u, 0x089C367Cu>(ctx, &aot_mem) && ctx.pc == 0x089C9488u) goto L_089C9488;
    return;
L_089C9488:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    goto L_089C94EC;
L_089C9490:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[31] = (0x089C94A8u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 194u, 0x089C3F78u>(ctx, &aot_mem) && ctx.pc == 0x089C94A8u) goto L_089C94A8;
    return;
L_089C94A8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C9344;
      }
      goto L_089C94B0;
    }
L_089C94B0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(88)));
    goto L_089C92DC;
L_089C94B8:
    aot_gpr[2] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C930C;
      }
      goto L_089C94C4;
    }
L_089C94C4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[21];
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_089C9314;
      }
      goto L_089C94D0;
    }
L_089C94D0:
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_089C9344;
L_089C94DC:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C94E8u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 168u, 0x089C3D70u>(ctx, &aot_mem) && ctx.pc == 0x089C94E8u) goto L_089C94E8;
    return;
L_089C94E8:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    goto L_089C94EC;
L_089C94EC:
    aot_gpr[31] = (0x089C94F4u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0449_entry, 449u, 137u, 0x089C5AECu>(ctx, &aot_mem) && ctx.pc == 0x089C94F4u) goto L_089C94F4;
    return;
L_089C94F4:
    aot_gpr[2] = (0u | 65535u);
    if (aot_gpr[23] == aot_gpr[2]) {
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(164)));
        goto L_089C9638;
    }
    goto L_089C9500;
L_089C9500:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(148)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(188)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089C9510u);
    aot_gpr[4] = (aot_gpr[23] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C9510u) goto L_089C9510;
    return;
L_089C9510:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089C962C;
      }
      goto L_089C951C;
    }
L_089C951C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(60), 0u);
      if (branch_taken) {
          goto L_089C9574;
      }
      goto L_089C9528;
    }
L_089C9528:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[2] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[4] = (0u + 0u);
    goto L_089C9544;
L_089C953C:
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(96)));
        goto L_089C9578;
    }
    goto L_089C9544;
L_089C9544:
    aot_gpr[2] = (aot_gpr[8] + aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-3));
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089C953C;
      }
      goto L_089C9564;
    }
L_089C9564:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089C953C;
L_089C9574:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_089C9578;
L_089C9578:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(15));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089C9588u);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(98), static_cast<std::uint16_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089C9588u) goto L_089C9588;
    return;
L_089C9588:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u | 61440u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[10] = (aot_gpr[29] + static_cast<std::uint32_t>(44));
    aot_gpr[11] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    aot_gpr[31] = (0x089C95CCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 153u, 0x089C1B60u>(ctx, &aot_mem) && ctx.pc == 0x089C95CCu) goto L_089C95CC;
    return;
L_089C95CC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C9344;
      }
      goto L_089C95D4;
    }
L_089C95D4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089C962C;
      }
      goto L_089C95E0;
    }
L_089C95E0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(176)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(188)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089C95F4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C95F4u) goto L_089C95F4;
    return;
L_089C95F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(60), aot_gpr[16]);
      if (branch_taken) {
          goto L_089C9628;
      }
      goto L_089C9600;
    }
L_089C9600:
    aot_gpr[4] = (0u + 0u);
    aot_gpr[3] = (0u + 0u);
    goto L_089C9608;
L_089C9608:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(456), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089C9608;
      }
      goto L_089C9628;
    }
L_089C9628:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089C962C;
L_089C962C:
    if (aot_gpr[2] == aot_gpr[23]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(100)));
        goto L_089C98B0;
    }
    goto L_089C9634;
L_089C9634:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(164)));
    goto L_089C9638;
L_089C9638:
    { const bool branch_taken = aot_gpr[12] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089C9344;
      }
      goto L_089C9640;
    }
L_089C9640:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(188)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(15));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[10] = (0u + 0u);
    jump_target = aot_gpr[12];
    aot_gpr[31] = (0x089C966Cu);
    aot_gpr[11] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C966Cu) goto L_089C966C;
    return;
L_089C966C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C96A4:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (aot_gpr[21] & 65535u);
      if (branch_taken) {
          goto L_089C97F8;
      }
      goto L_089C96AC;
    }
L_089C96AC:
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089C97F0;
      }
      goto L_089C96B8;
    }
L_089C96B8:
    aot_gpr[4] = (aot_gpr[2] & 65535u);
    goto L_089C96BC;
L_089C96BC:
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[4] << 6u);
      if (branch_taken) {
          goto L_089C973C;
      }
      goto L_089C96C8;
    }
L_089C96C8:
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[3];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C94E8;
      }
      goto L_089C96F0;
    }
L_089C96F0:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[2];
    aot_gpr[3] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089C9718;
      }
      goto L_089C96F8;
    }
L_089C96F8:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    goto L_089C94EC;
L_089C9700:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C94E8;
      }
      goto L_089C9710;
    }
L_089C9710:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[3] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089C94E8;
      }
      goto L_089C9718;
    }
L_089C9718:
    aot_gpr[4] = (aot_gpr[3] & 65535u);
    aot_gpr[3] = (aot_gpr[4] << 6u);
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[3] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[7]);
      if (branch_taken) {
          goto L_089C9700;
      }
      goto L_089C973C;
    }
L_089C973C:
    aot_gpr[31] = (0x089C9744u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 168u, 0x089C3D70u>(ctx, &aot_mem) && ctx.pc == 0x089C9744u) goto L_089C9744;
    return;
L_089C9744:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    goto L_089C94EC;
L_089C974C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (0u | 65535u);
      if (branch_taken) {
          goto L_089C97B4;
      }
      goto L_089C975C;
    }
L_089C975C:
    aot_gpr[3] = (aot_gpr[11] + 0u);
    aot_gpr[10] = (0u | 65535u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(8));
    goto L_089C9788;
L_089C9774:
    if (aot_gpr[2] == aot_gpr[9]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(468)));
        goto L_089C9798;
    }
    goto L_089C977C;
L_089C977C:
    aot_gpr[5] = (aot_gpr[6] & 65535u);
    goto L_089C9780;
L_089C9780:
    { const bool branch_taken = aot_gpr[7] == aot_gpr[5];
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089C97B0;
      }
      goto L_089C9788;
    }
L_089C9788:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[8];
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C9774;
      }
      goto L_089C9794;
    }
L_089C9794:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(468)));
    goto L_089C9798;
L_089C9798:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[10] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (aot_gpr[6] & 65535u);
        goto L_089C9780;
    }
    goto L_089C97A4;
L_089C97A4:
    aot_gpr[10] = (aot_gpr[4] + 0u);
    aot_gpr[23] = (aot_gpr[5] + 0u);
    goto L_089C977C;
L_089C97B0:
    aot_gpr[4] = (aot_gpr[23] + 0u);
    goto L_089C97B4;
L_089C97B4:
    aot_gpr[3] = (aot_gpr[4] << 6u);
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[3] = (aot_gpr[11] + aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089C9808;
      }
      goto L_089C97DC;
    }
L_089C97DC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_089C9928;
      }
      goto L_089C97E4;
    }
L_089C97E4:
    aot_gpr[23] = (0u | 65535u);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(aot_gpr[23]));
    goto L_089C93B0;
L_089C97F0:
    { const bool branch_taken = aot_gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C973C;
      }
      goto L_089C97F8;
    }
L_089C97F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[2] & 65535u);
    goto L_089C96BC;
L_089C9808:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(aot_gpr[23]));
    goto L_089C93B0;
L_089C9818:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(98)));
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C93A8;
      }
      goto L_089C9828;
    }
L_089C9828:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C93A8;
      }
      goto L_089C9834;
    }
L_089C9834:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(456)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C93A8;
      }
      goto L_089C9840;
    }
L_089C9840:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089C985C;
      }
      goto L_089C9854;
    }
L_089C9854:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_089C93A4;
L_089C985C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(176)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(188)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C9870u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C9870u) goto L_089C9870;
    return;
L_089C9870:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(60), aot_gpr[2]);
      if (branch_taken) {
          goto L_089C9854;
      }
      goto L_089C9880;
    }
L_089C9880:
    aot_gpr[4] = (0u + 0u);
    aot_gpr[3] = (0u + 0u);
    goto L_089C9888;
L_089C9888:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(456), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089C9888;
      }
      goto L_089C98A8;
    }
L_089C98A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_089C93A4;
L_089C98B0:
    if (aot_gpr[2] == 0u) {
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(164)));
        goto L_089C9638;
    }
    goto L_089C98B8;
L_089C98B8:
    aot_gpr[19] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2792)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(244)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C98CCu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C98CCu) goto L_089C98CC;
    return;
L_089C98CC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] >> 2u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[2]);
      if (branch_taken) {
          goto L_089C9634;
      }
      goto L_089C98E4;
    }
L_089C98E4:
    aot_gpr[17] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(436)));
    goto L_089C98EC;
L_089C98EC:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(584));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C9910;
      }
      goto L_089C98FC;
    }
L_089C98FC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2792)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(248)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C990Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C990Cu) goto L_089C990C;
    return;
L_089C990C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    goto L_089C9910;
L_089C9910:
    aot_gpr[2] = (aot_gpr[3] & 65535u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(436)));
        goto L_089C98EC;
    }
    goto L_089C9920;
L_089C9920:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(164)));
    goto L_089C9638;
L_089C9928:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(aot_gpr[23]));
    goto L_089C93B0;
L_089C9934:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x089C9960u);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 147u, 0x089C2BCCu>(ctx, &aot_mem) && ctx.pc == 0x089C9960u) goto L_089C9960;
    return;
L_089C9960:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u | 65535u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[7] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089C99B0;
      }
      goto L_089C997C;
    }
L_089C997C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[3] + 0u);
    aot_gpr[31] = (0x089C998Cu);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    goto L_089C9220;
L_089C998C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089C99F0;
      }
      goto L_089C9994;
    }
L_089C9994:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C99B0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[31] = (0x089C99C0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 96u, 0x089C1858u>(ctx, &aot_mem) && ctx.pc == 0x089C99C0u) goto L_089C99C0;
    return;
L_089C99C0:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C99D8u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C99D8u) goto L_089C99D8;
    return;
L_089C99D8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089C9A0C;
      }
      goto L_089C99E8;
    }
L_089C99E8:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089C9A0C;
      }
      goto L_089C99F0;
    }
L_089C99F0:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9A0C:
    aot_gpr[31] = (0x089C9A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 11u, 0x089C605Cu>(ctx, &aot_mem) && ctx.pc == 0x089C9A14u) goto L_089C9A14;
    return;
L_089C9A14:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(140)));
    aot_gpr[7] = (aot_gpr[19] + 0u);
    aot_gpr[4] = (0u | 65535u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u | 54501u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u | 54501u);
      if (branch_taken) {
          goto L_089C9994;
      }
      goto L_089C9A30;
    }
L_089C9A30:
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089C9A38u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(188)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C9A38u) goto L_089C9A38;
    return;
L_089C9A38:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u | 54501u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9A58:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9A60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[5] + 0u);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[31] = (0x089C9A90u);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089C9A90u) goto L_089C9A90;
    return;
L_089C9A90:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089C9A9Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C9A9Cu) goto L_089C9A9C;
    return;
L_089C9A9C:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C9AACu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C9AACu) goto L_089C9AAC;
    return;
L_089C9AAC:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089C9AB8u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089C9AB8u) goto L_089C9AB8;
    return;
L_089C9AB8:
    aot_gpr[3] = (aot_gpr[2] ^ 1u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[3] == 0u) aot_gpr[2] = (0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9AD8:
    aot_gpr[2] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[4]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(3));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9AEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (aot_gpr[6] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[31] = (0x089C9B2Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089C9B2Cu) goto L_089C9B2C;
    return;
L_089C9B2C:
    { const bool branch_taken = aot_gpr[20] != 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089C9B58;
      }
      goto L_089C9B34;
    }
L_089C9B34:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9B58:
    aot_gpr[21] = (aot_gpr[18] + aot_gpr[17]);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[18] = (0u + 0u);
    goto L_089C9B64;
L_089C9B64:
    aot_gpr[7] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089C9B7Cu);
    aot_gpr[8] = (aot_gpr[29] + 0u);
    goto L_089C9A60;
L_089C9B7C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089C9B34;
      }
      goto L_089C9B88;
    }
L_089C9B88:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[20] != aot_gpr[18];
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[2]);
      if (branch_taken) {
          goto L_089C9B64;
      }
      goto L_089C9B94;
    }
L_089C9B94:
    aot_gpr[2] = (0u + 0u);
    goto L_089C9B34;
L_089C9B9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    aot_gpr[31] = (0x089C9BE4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    goto L_089C9AD8;
L_089C9BE4:
    aot_gpr[19] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(78)));
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[16] + 0u);
    aot_gpr[8] = (aot_gpr[17] + 0u);
    aot_gpr[9] = (aot_gpr[18] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089C9C10u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    goto L_089C9AEC;
L_089C9C10:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C9C50;
      }
      goto L_089C9C18;
    }
L_089C9C18:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089C9C84;
      }
      goto L_089C9C30;
    }
L_089C9C30:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9C84;
      }
      goto L_089C9C3C;
    }
L_089C9C3C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(188)));
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C9C50u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C9C50u) goto L_089C9C50;
    return;
L_089C9C50:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9C84:
    aot_gpr[31] = (0x089C9C8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 160u, 0x089C3BE0u>(ctx, &aot_mem) && ctx.pc == 0x089C9C8Cu) goto L_089C9C8C;
    return;
L_089C9C8C:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9CC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[31] = (0x089C9D08u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    goto L_089C9AD8;
L_089C9D08:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(31));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(78)));
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (0u + 0u);
    aot_gpr[31] = (0x089C9D34u);
    aot_gpr[9] = (0u + 0u);
    goto L_089C9AEC;
L_089C9D34:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    aot_gpr[7] = (aot_gpr[19] + 0u);
    aot_gpr[8] = (aot_gpr[29] + 0u);
    aot_gpr[9] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[29] + aot_gpr[16]);
      if (branch_taken) {
          goto L_089C9D60;
      }
      goto L_089C9D58;
    }
L_089C9D58:
    aot_gpr[31] = (0x089C9D60u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(aot_gpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 163u, 0x089C3C5Cu>(ctx, &aot_mem) && ctx.pc == 0x089C9D60u) goto L_089C9D60;
    return;
L_089C9D60:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9D90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[3] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
      if (branch_taken) {
          goto L_089C9DDC;
      }
      goto L_089C9DB4;
    }
L_089C9DB4:
    aot_gpr[2] = (0u | 55008u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C9DDC;
      }
      goto L_089C9DC0;
    }
L_089C9DC0:
    aot_gpr[6] = (0u + 0u);
    goto L_089C9DC4;
L_089C9DC4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9DDC:
    aot_gpr[31] = (0x089C9DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 104u, 0x0898F644u>(ctx, &aot_mem) && ctx.pc == 0x089C9DE4u) goto L_089C9DE4;
    return;
L_089C9DE4:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089C9DC0;
      }
      goto L_089C9DF0;
    }
L_089C9DF0:
    aot_gpr[31] = (0x089C9DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 106u, 0x0898F67Cu>(ctx, &aot_mem) && ctx.pc == 0x089C9DF8u) goto L_089C9DF8;
    return;
L_089C9DF8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C9DC4;
      }
      goto L_089C9E00;
    }
L_089C9E00:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089C9DC0;
      }
      goto L_089C9E10;
    }
L_089C9E10:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9E24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089C9EA8;
      }
      goto L_089C9E74;
    }
L_089C9E74:
    aot_gpr[7] = (0u + 0u);
    goto L_089C9E78;
L_089C9E78:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9EA8:
    aot_gpr[21] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (aot_gpr[8] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(176)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C9EC0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C9EC0u) goto L_089C9EC0;
    return;
L_089C9EC0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C9E78;
      }
      goto L_089C9EC8;
    }
L_089C9EC8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2792)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(200)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C9EE0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C9EE0u) goto L_089C9EE0;
    return;
L_089C9EE0:
    aot_gpr[3] = (0u | 55002u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_089C9E78;
      }
      goto L_089C9EEC;
    }
L_089C9EEC:
    if (aot_gpr[19] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089C9FD4;
    }
    goto L_089C9EF4;
L_089C9EF4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089C9FD4;
    }
    goto L_089C9F00;
L_089C9F00:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    if (aot_gpr[6] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089C9FD4;
    }
    goto L_089C9F0C;
L_089C9F0C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C9F7C;
      }
      goto L_089C9F18;
    }
L_089C9F18:
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    goto L_089C9F20;
L_089C9F20:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[7] << 2u);
    aot_gpr[3] = (aot_gpr[7] << 4u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[2] << 4u);
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[7] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_089C9E74;
      }
      goto L_089C9F74;
    }
L_089C9F74:
    if (aot_gpr[8] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
        goto L_089C9F20;
    }
    goto L_089C9F7C;
L_089C9F7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (aot_gpr[7] << 2u);
    aot_gpr[2] = (aot_gpr[7] << 4u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (aot_gpr[3] << 4u);
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[7] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0454_entry, 454u, 4u, 0x089CA028u>(ctx, &aot_mem); return;
      }
      goto L_089C9FCC;
    }
L_089C9FCC:
    aot_gpr[7] = (0u + 0u);
    goto L_089C9E78;
L_089C9FD4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[2] << 4u);
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[23] + aot_gpr[5]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C9FF8u);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C9FF8u) goto L_089C9FF8;
    return;
L_089C9FF8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] + 0u);
    ctx.pc = 0x089CA000u; return;
}

void recomp_unit_0453(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0453_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_453(Runtime &runtime) {
    runtime.register_generated_unit(453u, 0x089C9000u, 4096u, &recomp_unit_0453, &recomp_unit_0453_entry);
    runtime.register_function(0x089C9000u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9010u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9018u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9050u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9058u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C906Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9070u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9084u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C908Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C90A4u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C90ACu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C90B8u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C90C0u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C90DCu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C90F4u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9100u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9110u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9114u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9128u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C913Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9148u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9158u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9164u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9198u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C91A0u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C91A8u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C91B0u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C91D0u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C91E0u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C91E8u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C91F0u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C91F8u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9210u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9218u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9220u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9270u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C927Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C92A0u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C92ACu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C92B8u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C92DCu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C92E8u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C92ECu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C92F4u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C92FCu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C930Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9314u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C931Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9328u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9340u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9344u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9378u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9380u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9390u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C93A4u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C93A8u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C93B0u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C93BCu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C93D0u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C93DCu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C93E4u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9408u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9418u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9428u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C944Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9454u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9488u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9490u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C94A8u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C94B0u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C94B8u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C94C4u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C94D0u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C94DCu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C94E8u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C94ECu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C94F4u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9500u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9510u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C951Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9528u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C953Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9544u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9564u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9574u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9578u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9588u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C95CCu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C95D4u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C95E0u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C95F4u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9600u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9608u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9628u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C962Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9634u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9638u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9640u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C966Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C96A4u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C96ACu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C96B8u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C96BCu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C96C8u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C96F0u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C96F8u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9700u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9710u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9718u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C973Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9744u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C974Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C975Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9774u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C977Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9780u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9788u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9794u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9798u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C97A4u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C97B0u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C97B4u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C97DCu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C97E4u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C97F0u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C97F8u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9808u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9818u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9828u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9834u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9840u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9854u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C985Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9870u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9880u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9888u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C98A8u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C98B0u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C98B8u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C98CCu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C98E4u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C98ECu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C98FCu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C990Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9910u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9920u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9928u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9934u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9960u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C997Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C998Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9994u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C99B0u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C99C0u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C99D8u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C99E8u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C99F0u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9A0Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9A14u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9A30u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9A38u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9A58u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9A60u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9A90u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9A9Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9AACu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9AB8u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9AD8u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9AECu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9B2Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9B34u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9B58u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9B64u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9B7Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9B88u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9B94u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9B9Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9BE4u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9C10u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9C18u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9C30u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9C3Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9C50u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9C84u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9C8Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9CC0u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9D08u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9D34u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9D58u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9D60u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9D90u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9DB4u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9DC0u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9DC4u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9DDCu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9DE4u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9DF0u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9DF8u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9E00u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9E10u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9E24u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9E74u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9E78u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9EA8u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9EC0u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9EC8u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9EE0u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9EECu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9EF4u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9F00u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9F0Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9F18u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9F20u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9F74u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9F7Cu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9FCCu, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9FD4u, &recomp_unit_0453, "recomp_unit_0453");
    runtime.register_function(0x089C9FF8u, &recomp_unit_0453, "recomp_unit_0453");
}
} // namespace psprecomp
