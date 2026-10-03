#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0006[1021] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 3, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 11, 12, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 20, 21, 0, 22, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 25, 26, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 30, 31, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 42, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0,
    0, 0, 0, 54, 0, 0, 55, 0, 56, 0, 0, 57, 0, 58, 59, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0,
    0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 70,
    0, 0, 0, 71, 0, 0, 0, 72, 73, 0, 0, 0, 74, 0, 75, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0,
    80, 0, 0, 0, 81, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 94, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0,
    103, 0, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 0, 110, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 116, 0, 0, 117,
    0, 118, 0, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 0, 125, 0, 0, 126, 0, 127, 0, 128, 0, 129, 0, 130, 0, 131, 0, 132,
    0, 0, 133, 0, 134, 0, 135, 0, 0, 136, 0, 0, 137, 0, 138, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0,
    0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147,
    0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151,
    0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0,
    163, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 168, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 172, 173, 0, 0, 0, 174, 0, 0, 0, 0, 175,
    0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181,
    0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 193, 0, 0, 0, 194, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 197, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0,
    203, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208,
    0, 209, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 215,
    0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 221,
};
void recomp_unit_0006_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0880A000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0006[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0880A000;
    case 2u: goto L_0880A004;
    case 3u: goto L_0880A024;
    case 4u: goto L_0880A028;
    case 5u: goto L_0880A03C;
    case 6u: goto L_0880A050;
    case 7u: goto L_0880A06C;
    case 8u: goto L_0880A090;
    case 9u: goto L_0880A0A4;
    case 10u: goto L_0880A0BC;
    case 11u: goto L_0880A0C4;
    case 12u: goto L_0880A0C8;
    case 13u: goto L_0880A0D0;
    case 14u: goto L_0880A0EC;
    case 15u: goto L_0880A0F8;
    case 16u: goto L_0880A100;
    case 17u: goto L_0880A120;
    case 18u: goto L_0880A148;
    case 19u: goto L_0880A160;
    case 20u: goto L_0880A164;
    case 21u: goto L_0880A168;
    case 22u: goto L_0880A170;
    case 23u: goto L_0880A190;
    case 24u: goto L_0880A1A8;
    case 25u: goto L_0880A1B0;
    case 26u: goto L_0880A1B4;
    case 27u: goto L_0880A1BC;
    case 28u: goto L_0880A1D8;
    case 29u: goto L_0880A1E4;
    case 30u: goto L_0880A1EC;
    case 31u: goto L_0880A1F0;
    case 32u: goto L_0880A224;
    case 33u: goto L_0880A22C;
    case 34u: goto L_0880A23C;
    case 35u: goto L_0880A2BC;
    case 36u: goto L_0880A2C4;
    case 37u: goto L_0880A2C8;
    case 38u: goto L_0880A338;
    case 39u: goto L_0880A340;
    case 40u: goto L_0880A358;
    case 41u: goto L_0880A370;
    case 42u: goto L_0880A384;
    case 43u: goto L_0880A388;
    case 44u: goto L_0880A39C;
    case 45u: goto L_0880A3B4;
    case 46u: goto L_0880A3D4;
    case 47u: goto L_0880A3E8;
    case 48u: goto L_0880A410;
    case 49u: goto L_0880A41C;
    case 50u: goto L_0880A428;
    case 51u: goto L_0880A448;
    case 52u: goto L_0880A460;
    case 53u: goto L_0880A474;
    case 54u: goto L_0880A48C;
    case 55u: goto L_0880A498;
    case 56u: goto L_0880A4A0;
    case 57u: goto L_0880A4AC;
    case 58u: goto L_0880A4B4;
    case 59u: goto L_0880A4B8;
    case 60u: goto L_0880A4CC;
    case 61u: goto L_0880A4D8;
    case 62u: goto L_0880A4EC;
    case 63u: goto L_0880A504;
    case 64u: goto L_0880A510;
    case 65u: goto L_0880A51C;
    case 66u: goto L_0880A544;
    case 67u: goto L_0880A550;
    case 68u: goto L_0880A560;
    case 69u: goto L_0880A574;
    case 70u: goto L_0880A57C;
    case 71u: goto L_0880A58C;
    case 72u: goto L_0880A59C;
    case 73u: goto L_0880A5A0;
    case 74u: goto L_0880A5B0;
    case 75u: goto L_0880A5B8;
    case 76u: goto L_0880A5C4;
    case 77u: goto L_0880A5D4;
    case 78u: goto L_0880A5E8;
    case 79u: goto L_0880A5F0;
    case 80u: goto L_0880A600;
    case 81u: goto L_0880A610;
    case 82u: goto L_0880A614;
    case 83u: goto L_0880A624;
    case 84u: goto L_0880A644;
    case 85u: goto L_0880A65C;
    case 86u: goto L_0880A680;
    case 87u: goto L_0880A68C;
    case 88u: goto L_0880A6A0;
    case 89u: goto L_0880A6B4;
    case 90u: goto L_0880A6D8;
    case 91u: goto L_0880A700;
    case 92u: goto L_0880A728;
    case 93u: goto L_0880A730;
    case 94u: goto L_0880A734;
    case 95u: goto L_0880A748;
    case 96u: goto L_0880A754;
    case 97u: goto L_0880A764;
    case 98u: goto L_0880A7A0;
    case 99u: goto L_0880A7B4;
    case 100u: goto L_0880A7D4;
    case 101u: goto L_0880A7E0;
    case 102u: goto L_0880A7F4;
    case 103u: goto L_0880A800;
    case 104u: goto L_0880A80C;
    case 105u: goto L_0880A814;
    case 106u: goto L_0880A81C;
    case 107u: goto L_0880A824;
    case 108u: goto L_0880A82C;
    case 109u: goto L_0880A834;
    case 110u: goto L_0880A840;
    case 111u: goto L_0880A848;
    case 112u: goto L_0880A850;
    case 113u: goto L_0880A858;
    case 114u: goto L_0880A860;
    case 115u: goto L_0880A868;
    case 116u: goto L_0880A870;
    case 117u: goto L_0880A87C;
    case 118u: goto L_0880A884;
    case 119u: goto L_0880A890;
    case 120u: goto L_0880A898;
    case 121u: goto L_0880A8A0;
    case 122u: goto L_0880A8A8;
    case 123u: goto L_0880A8B0;
    case 124u: goto L_0880A8B8;
    case 125u: goto L_0880A8C0;
    case 126u: goto L_0880A8CC;
    case 127u: goto L_0880A8D4;
    case 128u: goto L_0880A8DC;
    case 129u: goto L_0880A8E4;
    case 130u: goto L_0880A8EC;
    case 131u: goto L_0880A8F4;
    case 132u: goto L_0880A8FC;
    case 133u: goto L_0880A908;
    case 134u: goto L_0880A910;
    case 135u: goto L_0880A918;
    case 136u: goto L_0880A924;
    case 137u: goto L_0880A930;
    case 138u: goto L_0880A938;
    case 139u: goto L_0880A948;
    case 140u: goto L_0880A954;
    case 141u: goto L_0880A96C;
    case 142u: goto L_0880A974;
    case 143u: goto L_0880A988;
    case 144u: goto L_0880A9A4;
    case 145u: goto L_0880A9BC;
    case 146u: goto L_0880A9C4;
    case 147u: goto L_0880A9FC;
    case 148u: goto L_0880AA04;
    case 149u: goto L_0880AA30;
    case 150u: goto L_0880AA38;
    case 151u: goto L_0880AA7C;
    case 152u: goto L_0880AA94;
    case 153u: goto L_0880AAB0;
    case 154u: goto L_0880AAC4;
    case 155u: goto L_0880AADC;
    case 156u: goto L_0880AAE4;
    case 157u: goto L_0880AB0C;
    case 158u: goto L_0880AB18;
    case 159u: goto L_0880AB24;
    case 160u: goto L_0880AB30;
    case 161u: goto L_0880AB50;
    case 162u: goto L_0880AB68;
    case 163u: goto L_0880AB80;
    case 164u: goto L_0880AB84;
    case 165u: goto L_0880AB94;
    case 166u: goto L_0880ABB8;
    case 167u: goto L_0880ABC4;
    case 168u: goto L_0880AC0C;
    case 169u: goto L_0880AC10;
    case 170u: goto L_0880AC38;
    case 171u: goto L_0880AC44;
    case 172u: goto L_0880AC54;
    case 173u: goto L_0880AC58;
    case 174u: goto L_0880AC68;
    case 175u: goto L_0880AC7C;
    case 176u: goto L_0880AC84;
    case 177u: goto L_0880AC94;
    case 178u: goto L_0880ACB4;
    case 179u: goto L_0880ACBC;
    case 180u: goto L_0880ACD4;
    case 181u: goto L_0880ACFC;
    case 182u: goto L_0880AD04;
    case 183u: goto L_0880AD14;
    case 184u: goto L_0880AD48;
    case 185u: goto L_0880AD58;
    case 186u: goto L_0880AD60;
    case 187u: goto L_0880AD70;
    case 188u: goto L_0880AD94;
    case 189u: goto L_0880ADA0;
    case 190u: goto L_0880ADB8;
    case 191u: goto L_0880ADD0;
    case 192u: goto L_0880ADE0;
    case 193u: goto L_0880ADE4;
    case 194u: goto L_0880ADF4;
    case 195u: goto L_0880AE10;
    case 196u: goto L_0880AE30;
    case 197u: goto L_0880AE34;
    case 198u: goto L_0880AE44;
    case 199u: goto L_0880AE4C;
    case 200u: goto L_0880AE60;
    case 201u: goto L_0880AE6C;
    case 202u: goto L_0880AE78;
    case 203u: goto L_0880AE80;
    case 204u: goto L_0880AE94;
    case 205u: goto L_0880AE9C;
    case 206u: goto L_0880AEC8;
    case 207u: goto L_0880AEE0;
    case 208u: goto L_0880AEFC;
    case 209u: goto L_0880AF04;
    case 210u: goto L_0880AF0C;
    case 211u: goto L_0880AF14;
    case 212u: goto L_0880AF40;
    case 213u: goto L_0880AF58;
    case 214u: goto L_0880AF74;
    case 215u: goto L_0880AF7C;
    case 216u: goto L_0880AF88;
    case 217u: goto L_0880AF98;
    case 218u: goto L_0880AFC4;
    case 219u: goto L_0880AFCC;
    case 220u: goto L_0880AFDC;
    case 221u: goto L_0880AFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0880A000:
    aot_fpr[20] = aot_fpr[20] + aot_fpr[12];
    goto L_0880A004;
L_0880A004:
    aot_gpr[4] = (14979u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 4719u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(456)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0880A050;
      }
      goto L_0880A024;
    }
L_0880A024:
    aot_gpr[17] = (0u | 0u);
    goto L_0880A028;
L_0880A028:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(452)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(544)));
    aot_gpr[31] = (0x0880A03Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 148u, 0x088B4C18u>(ctx, &aot_mem) && ctx.pc == 0x0880A03Cu) goto L_0880A03C;
    return;
L_0880A03C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(456)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_0880A028;
      }
      goto L_0880A050;
    }
L_0880A050:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A06C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7520)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(564)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(27908)));
    aot_gpr[2] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (0u < aot_gpr[5] ? 1u : 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A090:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[6] & 255u);
    aot_gpr[2] = (0u | 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(452)));
      if (branch_taken) {
          goto L_0880A0D0;
      }
      goto L_0880A0A4;
    }
L_0880A0A4:
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880A0C4;
      }
      goto L_0880A0BC;
    }
L_0880A0BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0880A0C8;
      }
      goto L_0880A0C4;
    }
L_0880A0C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0880A0C8;
L_0880A0C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A100;
      }
      goto L_0880A0D0;
    }
L_0880A0D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(456)));
    aot_gpr[8] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[8]);
      if (branch_taken) {
          goto L_0880A0F8;
      }
      goto L_0880A0EC;
    }
L_0880A0EC:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0880A100;
      }
      goto L_0880A0F8;
    }
L_0880A0F8:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0880A100;
L_0880A100:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[8] + aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[8] + aot_gpr[4]);
    aot_gpr[9] = (aot_gpr[8] << 7u);
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[9] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[8];
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
      if (branch_taken) {
          goto L_0880A168;
      }
      goto L_0880A120;
    }
L_0880A120:
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[9] = (aot_gpr[5] << 7u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[5] = (aot_gpr[9] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(132)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0880A164;
      }
      goto L_0880A148;
    }
L_0880A148:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(132)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A164;
      }
      goto L_0880A160;
    }
L_0880A160:
    aot_gpr[6] = (0u | 1u);
    goto L_0880A164;
L_0880A164:
    aot_gpr[2] = (aot_gpr[6] & 255u);
    goto L_0880A168;
L_0880A168:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A170:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_0880A1BC;
      }
      goto L_0880A190;
    }
L_0880A190:
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880A1B0;
      }
      goto L_0880A1A8;
    }
L_0880A1A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0880A1B4;
      }
      goto L_0880A1B0;
    }
L_0880A1B0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_0880A1B4;
L_0880A1B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[6]);
      if (branch_taken) {
          goto L_0880A1F0;
      }
      goto L_0880A1BC;
    }
L_0880A1BC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(456)));
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[7]);
      if (branch_taken) {
          goto L_0880A1E4;
      }
      goto L_0880A1D8;
    }
L_0880A1D8:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0880A1EC;
      }
      goto L_0880A1E4;
    }
L_0880A1E4:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_0880A1EC;
L_0880A1EC:
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[6]);
    goto L_0880A1F0;
L_0880A1F0:
    aot_gpr[8] = (aot_gpr[6] << 7u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] << 4u);
    aot_gpr[6] = (aot_gpr[8] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[8] = (aot_gpr[4] << 7u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(452)));
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[8] + aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[31] = (0x0880A224u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 146u, 0x088B4BF8u>(ctx, &aot_mem) && ctx.pc == 0x0880A224u) goto L_0880A224;
    return;
L_0880A224:
    aot_gpr[31] = (0x0880A22Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 145u, 0x088B4BDCu>(ctx, &aot_mem) && ctx.pc == 0x0880A22Cu) goto L_0880A22C;
    return;
L_0880A22C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A23C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-224));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4444)));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[21]);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(388)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(560)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880A2C4;
      }
      goto L_0880A2BC;
    }
L_0880A2BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0880A2C8;
      }
      goto L_0880A2C4;
    }
L_0880A2C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_0880A2C8;
L_0880A2C8:
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[8] = (aot_gpr[5] << 7u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(452)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(520)));
    aot_gpr[6] = (16256u << 16u);
    aot_gpr[5] = (aot_gpr[8] + aot_gpr[5]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[12];
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(536)));
    aot_gpr[5] = (16880u << 16u);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[5] = (0u | 0u);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[20] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(388), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880A358;
      }
      goto L_0880A338;
    }
L_0880A338:
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    goto L_0880A340;
L_0880A340:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(296));
    aot_gpr[8] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880A340;
      }
      goto L_0880A358;
    }
L_0880A358:
    aot_gpr[7] = (2177u << 16u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x0880A370u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-26600));
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 202u, 0x08A39C40u>(ctx, &aot_mem) && ctx.pc == 0x0880A370u) goto L_0880A370;
    return;
L_0880A370:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(456)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0880A3B4;
      }
      goto L_0880A384;
    }
L_0880A384:
    aot_gpr[19] = (aot_gpr[29] | 0u);
    goto L_0880A388;
L_0880A388:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(452)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(132)));
    aot_gpr[31] = (0x0880A39Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(72), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 147u, 0x088B4C08u>(ctx, &aot_mem) && ctx.pc == 0x0880A39Cu) goto L_0880A39C;
    return;
L_0880A39C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(456)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(176));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880A388;
      }
      goto L_0880A3B4;
    }
L_0880A3B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(388), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(560)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[4]);
    aot_gpr[30] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[30] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0880A4CC;
      }
      goto L_0880A3D4;
    }
L_0880A3D4:
    aot_gpr[4] = (16384u << 16u);
    aot_gpr[20] = (0u | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[23] = (aot_gpr[29] | 0u);
    aot_gpr[22] = (aot_gpr[29] | 0u);
    goto L_0880A3E8;
L_0880A3E8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(452)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[20]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] ^ 1u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0880A448;
      }
      goto L_0880A410;
    }
L_0880A410:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A4B8;
      }
      goto L_0880A41C;
    }
L_0880A41C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880A4B8;
      }
      goto L_0880A428;
    }
L_0880A428:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(560), aot_gpr[21]);
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(152)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(152), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0880A4B8;
      }
      goto L_0880A448;
    }
L_0880A448:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(432), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(72)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880A48C;
      }
      goto L_0880A460;
    }
L_0880A460:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(456)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A48C;
      }
      goto L_0880A474;
    }
L_0880A474:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(452)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(176));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[20]);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    goto L_0880A48C;
L_0880A48C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0880A498u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 134u, 0x088B4B24u>(ctx, &aot_mem) && ctx.pc == 0x0880A498u) goto L_0880A498;
    return;
L_0880A498:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880A4B4;
      }
      goto L_0880A4A0;
    }
L_0880A4A0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0880A4ACu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 142u, 0x088B4BBCu>(ctx, &aot_mem) && ctx.pc == 0x0880A4ACu) goto L_0880A4AC;
    return;
L_0880A4AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A4B8;
      }
      goto L_0880A4B4;
    }
L_0880A4B4:
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(485), static_cast<std::uint8_t>(0u));
    goto L_0880A4B8;
L_0880A4B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[30] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880A3E8;
      }
      goto L_0880A4CC;
    }
L_0880A4CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(536)));
      if (branch_taken) {
          goto L_0880A4EC;
      }
      goto L_0880A4D8;
    }
L_0880A4D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(456)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(560), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[4]);
    goto L_0880A4EC;
L_0880A4EC:
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
      if (branch_taken) {
          goto L_0880A624;
      }
      goto L_0880A504;
    }
L_0880A504:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0880A624;
      }
      goto L_0880A510;
    }
L_0880A510:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(560)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    aot_gpr[6] = (16300u << 16u);
      if (branch_taken) {
          goto L_0880A624;
      }
      goto L_0880A51C;
    }
L_0880A51C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(520)));
    aot_gpr[6] = (aot_gpr[6] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[16] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880A5B8;
      }
      goto L_0880A544;
    }
L_0880A544:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A624;
      }
      goto L_0880A550;
    }
L_0880A550:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A5A0;
      }
      goto L_0880A560;
    }
L_0880A560:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x0880A574u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_0880A090;
L_0880A574:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A58C;
      }
      goto L_0880A57C;
    }
L_0880A57C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0880A58Cu);
    aot_gpr[6] = (0u | 1u);
    goto L_0880A170;
L_0880A58C:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880A560;
      }
      goto L_0880A59C;
    }
L_0880A59C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(560)));
    goto L_0880A5A0;
L_0880A5A0:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880A550;
      }
      goto L_0880A5B0;
    }
L_0880A5B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A624;
      }
      goto L_0880A5B8;
    }
L_0880A5B8:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A624;
      }
      goto L_0880A5C4;
    }
L_0880A5C4:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A614;
      }
      goto L_0880A5D4;
    }
L_0880A5D4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0880A5E8u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_0880A090;
L_0880A5E8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A600;
      }
      goto L_0880A5F0;
    }
L_0880A5F0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0880A600u);
    aot_gpr[6] = (0u | 0u);
    goto L_0880A170;
L_0880A600:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880A5D4;
      }
      goto L_0880A610;
    }
L_0880A610:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(560)));
    goto L_0880A614;
L_0880A614:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880A5C4;
      }
      goto L_0880A624;
    }
L_0880A624:
    aot_gpr[4] = (16040u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(540)));
    aot_gpr[4] = (aot_gpr[4] | 62915u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (16217u << 16u);
      if (branch_taken) {
          goto L_0880A764;
      }
      goto L_0880A644;
    }
L_0880A644:
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880A764;
      }
      goto L_0880A65C;
    }
L_0880A65C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7504));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (14979u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] | 4719u);
    aot_fpr[22] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[22])));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
      if (branch_taken) {
          goto L_0880A68C;
      }
      goto L_0880A680;
    }
L_0880A680:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[22] = aot_fpr[22] + aot_fpr[12];
    goto L_0880A68C;
L_0880A68C:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[21] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_0880A764;
      }
      goto L_0880A6A0;
    }
L_0880A6A0:
    aot_gpr[4] = (16936u << 16u);
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(136));
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(140));
    aot_gpr[18] = (aot_gpr[29] | 0u);
    goto L_0880A6B4;
L_0880A6B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(456)));
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(432)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[5]);
      if (branch_taken) {
          goto L_0880A754;
      }
      goto L_0880A6D8;
    }
L_0880A6D8:
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(452)));
    aot_gpr[8] = (aot_gpr[5] << 7u);
    aot_gpr[6] = (aot_gpr[6] << 4u);
    aot_gpr[6] = (aot_gpr[8] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(132)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880A754;
      }
      goto L_0880A700;
    }
L_0880A700:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(160)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(136)));
    aot_fpr[15] = aot_fpr[12] - aot_fpr[22];
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(388)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[12] = aot_fpr[13] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
      if (branch_taken) {
          goto L_0880A730;
      }
      goto L_0880A728;
    }
L_0880A728:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0880A734;
      }
      goto L_0880A730;
    }
L_0880A730:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_0880A734;
L_0880A734:
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880A754;
      }
      goto L_0880A748;
    }
L_0880A748:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0880A754u);
    aot_gpr[6] = (0u | 0u);
    goto L_0880A170;
L_0880A754:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[21] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880A6B4;
      }
      goto L_0880A764;
    }
L_0880A764:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A7A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(560)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0880A7D4;
      }
      goto L_0880A7B4;
    }
L_0880A7B4:
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[5] << 7u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(452)));
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[31] = (0x0880A7D4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 152u, 0x088B4C64u>(ctx, &aot_mem) && ctx.pc == 0x0880A7D4u) goto L_0880A7D4;
    return;
L_0880A7D4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A7E0:
    aot_gpr[5] = (16948u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 13000 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 19001 ? 1u : 0u);
      if (branch_taken) {
          goto L_0880A87C;
      }
      goto L_0880A7F4;
    }
L_0880A7F4:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 6001 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 12000u);
      if (branch_taken) {
          goto L_0880A840;
      }
      goto L_0880A800;
    }
L_0880A800:
    aot_gpr[5] = (0u | 6000u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 5000u);
      if (branch_taken) {
          goto L_0880A908;
      }
      goto L_0880A80C;
    }
L_0880A80C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 4000u);
      if (branch_taken) {
          goto L_0880A908;
      }
      goto L_0880A814;
    }
L_0880A814:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 3000u);
      if (branch_taken) {
          goto L_0880A908;
      }
      goto L_0880A81C;
    }
L_0880A81C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 2000u);
      if (branch_taken) {
          goto L_0880A834;
      }
      goto L_0880A824;
    }
L_0880A824:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 1000u);
      if (branch_taken) {
          goto L_0880A834;
      }
      goto L_0880A82C;
    }
L_0880A82C:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0880A930;
      }
      goto L_0880A834;
    }
L_0880A834:
    aot_gpr[4] = (16956u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_0880A930;
      }
      goto L_0880A840;
    }
L_0880A840:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 11000u);
      if (branch_taken) {
          goto L_0880A910;
      }
      goto L_0880A848;
    }
L_0880A848:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 10000u);
      if (branch_taken) {
          goto L_0880A910;
      }
      goto L_0880A850;
    }
L_0880A850:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 9000u);
      if (branch_taken) {
          goto L_0880A910;
      }
      goto L_0880A858;
    }
L_0880A858:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 8000u);
      if (branch_taken) {
          goto L_0880A870;
      }
      goto L_0880A860;
    }
L_0880A860:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 7000u);
      if (branch_taken) {
          goto L_0880A870;
      }
      goto L_0880A868;
    }
L_0880A868:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0880A930;
      }
      goto L_0880A870;
    }
L_0880A870:
    aot_gpr[4] = (16940u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_0880A930;
      }
      goto L_0880A87C;
    }
L_0880A87C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 25000u);
      if (branch_taken) {
          goto L_0880A8CC;
      }
      goto L_0880A884;
    }
L_0880A884:
    aot_gpr[5] = (0u | 19000u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 18000u);
      if (branch_taken) {
          goto L_0880A8FC;
      }
      goto L_0880A890;
    }
L_0880A890:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 17000u);
      if (branch_taken) {
          goto L_0880A918;
      }
      goto L_0880A898;
    }
L_0880A898:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 16000u);
      if (branch_taken) {
          goto L_0880A918;
      }
      goto L_0880A8A0;
    }
L_0880A8A0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 15000u);
      if (branch_taken) {
          goto L_0880A918;
      }
      goto L_0880A8A8;
    }
L_0880A8A8:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 14000u);
      if (branch_taken) {
          goto L_0880A8C0;
      }
      goto L_0880A8B0;
    }
L_0880A8B0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 13000u);
      if (branch_taken) {
          goto L_0880A8C0;
      }
      goto L_0880A8B8;
    }
L_0880A8B8:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0880A930;
      }
      goto L_0880A8C0;
    }
L_0880A8C0:
    aot_gpr[4] = (16964u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_0880A930;
      }
      goto L_0880A8CC;
    }
L_0880A8CC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 24000u);
      if (branch_taken) {
          goto L_0880A8C0;
      }
      goto L_0880A8D4;
    }
L_0880A8D4:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 23000u);
      if (branch_taken) {
          goto L_0880A924;
      }
      goto L_0880A8DC;
    }
L_0880A8DC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 22000u);
      if (branch_taken) {
          goto L_0880A924;
      }
      goto L_0880A8E4;
    }
L_0880A8E4:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 21000u);
      if (branch_taken) {
          goto L_0880A924;
      }
      goto L_0880A8EC;
    }
L_0880A8EC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 20000u);
      if (branch_taken) {
          goto L_0880A8FC;
      }
      goto L_0880A8F4;
    }
L_0880A8F4:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0880A930;
      }
      goto L_0880A8FC;
    }
L_0880A8FC:
    aot_gpr[4] = (16956u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_0880A930;
      }
      goto L_0880A908;
    }
L_0880A908:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A930;
      }
      goto L_0880A910;
    }
L_0880A910:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A930;
      }
      goto L_0880A918;
    }
L_0880A918:
    aot_gpr[4] = (16940u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_0880A930;
      }
      goto L_0880A924;
    }
L_0880A924:
    aot_gpr[4] = (16940u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_0880A930;
      }
      goto L_0880A930;
    }
L_0880A930:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A938:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_fpr[0] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_0880A96C;
      }
      goto L_0880A948;
    }
L_0880A948:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(452)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    goto L_0880A954;
L_0880A954:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_fpr[0] = aot_fpr[0] - aot_fpr[12];
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_0880A954;
      }
      goto L_0880A96C;
    }
L_0880A96C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A974:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(456)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_fpr[0] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_0880A9BC;
      }
      goto L_0880A988;
    }
L_0880A988:
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(452)));
    aot_gpr[8] = (aot_gpr[6] << 7u);
    aot_gpr[7] = (aot_gpr[7] << 4u);
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    goto L_0880A9A4;
L_0880A9A4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_fpr[0] = aot_fpr[0] + aot_fpr[12];
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-176));
      if (branch_taken) {
          goto L_0880A9A4;
      }
      goto L_0880A9BC;
    }
L_0880A9BC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A9C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x0880A9FCu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_0880A06C;
L_0880A9FC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 13u, 0x0880B0D4u>(ctx, &aot_mem); return;
      }
      goto L_0880AA04;
    }
L_0880AA04:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(496)));
    aot_gpr[17] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(500)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(456)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 1 ? 1u : 0u);
    aot_fpr[13] = aot_fpr[14] - aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(496), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(500), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0880AA38;
      }
      goto L_0880AA30;
    }
L_0880AA30:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(564), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 5u, 0x0880B04Cu>(ctx, &aot_mem); return;
      }
      goto L_0880AA38;
    }
L_0880AA38:
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[4] << 7u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_fpr[28] = __builtin_bit_cast(float, 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(452)));
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-176));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(144)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(504), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(556)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0880AAB0;
      }
      goto L_0880AA7C;
    }
L_0880AA7C:
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[6] = (16128u << 16u);
      if (branch_taken) {
          goto L_0880AAC4;
      }
      goto L_0880AA94;
    }
L_0880AA94:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(504)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(504), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0880AAC4;
      }
      goto L_0880AAB0;
    }
L_0880AAB0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(504)));
    aot_gpr[6] = (16128u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(504), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0880AAC4;
L_0880AAC4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4444)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[7];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(556), aot_gpr[5]);
      if (branch_taken) {
          goto L_0880AAE4;
      }
      goto L_0880AADC;
    }
L_0880AADC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(556), 0u);
    aot_gpr[5] = (0u | 0u);
    goto L_0880AAE4;
L_0880AAE4:
    aot_gpr[6] = (aot_gpr[5] << 5u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[18];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0880AB68;
      }
      goto L_0880AB0C;
    }
L_0880AB0C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0880AB68;
      }
      goto L_0880AB18;
    }
L_0880AB18:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(485)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880AB30;
      }
      goto L_0880AB24;
    }
L_0880AB24:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0880AB50;
      }
      goto L_0880AB30;
    }
L_0880AB30:
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[8] = (aot_gpr[5] << 7u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(452)));
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[5] = (aot_gpr[8] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(128)));
    goto L_0880AB50;
L_0880AB50:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(36)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0880AB68u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0249_entry, 249u, 25u, 0x088FD244u>(ctx, &aot_mem) && ctx.pc == 0x0880AB68u) goto L_0880AB68;
    return;
L_0880AB68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(552)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(552), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(508)));
      if (branch_taken) {
          goto L_0880AB84;
      }
      goto L_0880AB80;
    }
L_0880AB80:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(552), 0u);
    goto L_0880AB84;
L_0880AB84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(552)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0880ACBC;
      }
      goto L_0880AB94;
    }
L_0880AB94:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28044)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2216u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-32516)));
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(480)));
      if (branch_taken) {
          goto L_0880ABC4;
      }
      goto L_0880ABB8;
    }
L_0880ABB8:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = aot_fpr[14] + aot_fpr[16];
    goto L_0880ABC4;
L_0880ABC4:
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(388)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(512), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(508), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
      if (branch_taken) {
          goto L_0880AC10;
      }
      goto L_0880AC0C;
    }
L_0880AC0C:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_0880AC10;
L_0880AC10:
    aot_fpr[13] = aot_fpr[12] / aot_fpr[13];
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(492)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(488), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (0u | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(492), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[4] = (0u | 1u);
        goto L_0880AC38;
    }
    goto L_0880AC38;
L_0880AC38:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0880AC58;
      }
      goto L_0880AC44;
    }
L_0880AC44:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880AC58;
      }
      goto L_0880AC54;
    }
L_0880AC54:
    aot_gpr[5] = (0u | 1u);
    goto L_0880AC58;
L_0880AC58:
    aot_gpr[6] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0880AC68u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0880A23C;
L_0880AC68:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(500)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880ACB4;
      }
      goto L_0880AC7C;
    }
L_0880AC7C:
    aot_gpr[31] = (0x0880AC84u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0880A7A0;
L_0880AC84:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7516)));
    aot_gpr[31] = (0x0880AC94u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0880AC94u) goto L_0880AC94;
    return;
L_0880AC94:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(472)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(468)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(500), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[13] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(500), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(500), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0880ACB4;
L_0880ACB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 5u, 0x0880B04Cu>(ctx, &aot_mem); return;
      }
      goto L_0880ACBC;
    }
L_0880ACBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(565)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(456)));
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(568)));
      if (branch_taken) {
          goto L_0880AD04;
      }
      goto L_0880ACD4;
    }
L_0880ACD4:
    aot_gpr[4] = (15820u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(568), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0880AD48;
      }
      goto L_0880ACFC;
    }
L_0880ACFC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(564), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0880AD48;
      }
      goto L_0880AD04;
    }
L_0880AD04:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_0880AD48;
      }
      goto L_0880AD14;
    }
L_0880AD14:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(520)));
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_gpr[4] = (15779u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 55050u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[20];
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(568), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0880AD48;
L_0880AD48:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880AD60;
      }
      goto L_0880AD58;
    }
L_0880AD58:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_0880AD70;
      }
      goto L_0880AD60;
    }
L_0880AD60:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
        goto L_0880AD70;
    }
    goto L_0880AD70;
L_0880AD70:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(568), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(512)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2080));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[13] = aot_fpr[12] - aot_fpr[13];
      if (branch_taken) {
          goto L_0880ADE4;
      }
      goto L_0880AD94;
    }
L_0880AD94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (0x0880ADA0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0880A7E0;
L_0880ADA0:
    aot_gpr[4] = (16880u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_0880ADE4;
      }
      goto L_0880ADB8;
    }
L_0880ADB8:
    aot_gpr[4] = (16000u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880ADE0;
      }
      goto L_0880ADD0;
    }
L_0880ADD0:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880ADE4;
      }
      goto L_0880ADE0;
    }
L_0880ADE0:
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_0880ADE4;
L_0880ADE4:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (16204u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 5u, 0x0880B04Cu>(ctx, &aot_mem); return;
      }
      goto L_0880ADF4;
    }
L_0880ADF4:
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (16128u << 16u);
    aot_gpr[18] = (0u | 0u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[19] = (2215u << 16u);
    goto L_0880AE10;
L_0880AE10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(452)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(488)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(504)));
    aot_gpr[9] = (aot_gpr[4] + aot_gpr[18]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(560)));
      if (branch_taken) {
          goto L_0880AE34;
      }
      goto L_0880AE30;
    }
L_0880AE30:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0880AE34;
L_0880AE34:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(28)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(27908)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[8]) > 0;
    aot_gpr[7] = (aot_gpr[5] - aot_gpr[6]);
      if (branch_taken) {
          goto L_0880AE60;
      }
      goto L_0880AE44;
    }
L_0880AE44:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_0880AFF0;
      }
      goto L_0880AE4C;
    }
L_0880AE4C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(508)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(568)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(540)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 1u, 0x0880B000u>(ctx, &aot_mem); return;
      }
      goto L_0880AE60;
    }
L_0880AE60:
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[8]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880AE80;
      }
      goto L_0880AE6C;
    }
L_0880AE6C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[8]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880AF7C;
      }
      goto L_0880AE78;
    }
L_0880AE78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880AFF0;
      }
      goto L_0880AE80;
    }
L_0880AE80:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(508)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(568)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) <= 0;
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(540)));
      if (branch_taken) {
          goto L_0880AF04;
      }
      goto L_0880AE94;
    }
L_0880AE94:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_0880AF74;
      }
      goto L_0880AE9C;
    }
L_0880AE9C:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(520)));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    aot_fpr[18] = aot_fpr[20] - aot_fpr[14];
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const float fs = aot_fpr[18]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] + aot_fpr[17];
    aot_fpr[14] = aot_fpr[20] - aot_fpr[14];
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_fpr[14] = aot_fpr[20] - aot_fpr[14];
      if (branch_taken) {
          goto L_0880AEFC;
      }
      goto L_0880AEC8;
    }
L_0880AEC8:
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[10] = (aot_gpr[6] << 7u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] << 4u);
    aot_gpr[6] = (aot_gpr[10] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    goto L_0880AEE0;
L_0880AEE0:
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[18] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[18] = fs * ft; }
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(176));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_fpr[13] = aot_fpr[13] + aot_fpr[18];
      if (branch_taken) {
          goto L_0880AEE0;
      }
      goto L_0880AEFC;
    }
L_0880AEFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880AF74;
      }
      goto L_0880AF04;
    }
L_0880AF04:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0880AF74;
      }
      goto L_0880AF0C;
    }
L_0880AF0C:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_0880AF74;
      }
      goto L_0880AF14;
    }
L_0880AF14:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(520)));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    aot_fpr[18] = aot_fpr[20] - aot_fpr[14];
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const float fs = aot_fpr[18]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] + aot_fpr[17];
    aot_fpr[14] = aot_fpr[20] - aot_fpr[14];
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_fpr[14] = aot_fpr[14] + aot_fpr[20];
      if (branch_taken) {
          goto L_0880AF74;
      }
      goto L_0880AF40;
    }
L_0880AF40:
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[10] = (aot_gpr[5] << 7u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[5] = (aot_gpr[10] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    goto L_0880AF58;
L_0880AF58:
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[18] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[18] = fs * ft; }
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(176));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_fpr[13] = aot_fpr[13] - aot_fpr[18];
      if (branch_taken) {
          goto L_0880AF58;
      }
      goto L_0880AF74;
    }
L_0880AF74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 1u, 0x0880B000u>(ctx, &aot_mem); return;
      }
      goto L_0880AF7C;
    }
L_0880AF7C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0880AF88u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_0880A938;
L_0880AF88:
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0880AF98u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_0880A974;
L_0880AF98:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(476)));
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(492)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[18] = aot_fpr[18] / aot_fpr[12];
    aot_fpr[17] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    ctx.set_fpu_condition((aot_fpr[18] <= aot_fpr[20]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(508)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(568)));
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(540)));
      if (branch_taken) {
          goto L_0880AFCC;
      }
      goto L_0880AFC4;
    }
L_0880AFC4:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[18] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_0880AFDC;
      }
      goto L_0880AFCC;
    }
L_0880AFCC:
    ctx.set_fpu_condition((aot_fpr[18] < aot_fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[18] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
        goto L_0880AFDC;
    }
    goto L_0880AFDC;
L_0880AFDC:
    aot_fpr[14] = aot_fpr[14] - aot_fpr[17];
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[14] = aot_fpr[17] + aot_fpr[14];
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 1u, 0x0880B000u>(ctx, &aot_mem); return;
      }
      goto L_0880AFF0;
    }
L_0880AFF0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(508)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(568)));
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(540)));
    ctx.pc = 0x0880B000u; return;
}

void recomp_unit_0006(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0006_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_6(Runtime &runtime) {
    runtime.register_generated_unit(6u, 0x0880A000u, 4096u, &recomp_unit_0006, &recomp_unit_0006_entry);
    runtime.register_function(0x0880A000u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A004u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A024u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A028u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A03Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A050u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A06Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A090u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A0A4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A0BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A0C4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A0C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A0D0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A0ECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A0F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A100u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A120u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A148u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A160u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A164u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A168u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A170u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A190u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A1A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A1B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A1B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A1BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A1D8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A1E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A1ECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A1F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A224u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A22Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A23Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A2BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A2C4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A2C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A338u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A340u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A358u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A370u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A384u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A388u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A39Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A3B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A3D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A3E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A410u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A41Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A428u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A448u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A460u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A474u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A48Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A498u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A4A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A4ACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A4B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A4B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A4CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A4D8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A4ECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A504u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A510u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A51Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A544u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A550u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A560u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A574u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A57Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A58Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A59Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A5A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A5B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A5B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A5C4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A5D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A5E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A5F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A600u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A610u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A614u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A624u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A644u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A65Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A680u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A68Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A6A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A6B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A6D8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A700u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A728u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A730u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A734u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A748u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A754u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A764u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A7A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A7B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A7D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A7E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A7F4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A800u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A80Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A814u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A81Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A824u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A82Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A834u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A840u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A848u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A850u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A858u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A860u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A868u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A870u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A87Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A884u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A890u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A898u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A8A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A8A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A8B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A8B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A8C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A8CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A8D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A8DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A8E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A8ECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A8F4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A8FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A908u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A910u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A918u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A924u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A930u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A938u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A948u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A954u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A96Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A974u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A988u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A9A4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A9BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A9C4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880A9FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AA04u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AA30u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AA38u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AA7Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AA94u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AAB0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AAC4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AADCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AAE4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AB0Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AB18u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AB24u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AB30u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AB50u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AB68u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AB80u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AB84u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AB94u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880ABB8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880ABC4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AC0Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AC10u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AC38u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AC44u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AC54u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AC58u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AC68u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AC7Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AC84u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AC94u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880ACB4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880ACBCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880ACD4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880ACFCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AD04u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AD14u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AD48u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AD58u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AD60u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AD70u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AD94u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880ADA0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880ADB8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880ADD0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880ADE0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880ADE4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880ADF4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AE10u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AE30u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AE34u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AE44u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AE4Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AE60u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AE6Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AE78u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AE80u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AE94u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AE9Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AEC8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AEE0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AEFCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AF04u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AF0Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AF14u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AF40u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AF58u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AF74u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AF7Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AF88u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AF98u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AFC4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AFCCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AFDCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0880AFF0u, &recomp_unit_0006, "recomp_unit_0006");
}
} // namespace psprecomp
