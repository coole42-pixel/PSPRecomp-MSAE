#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0352[1022] = {
    1, 0, 0, 2, 0, 0, 3, 0, 4, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 10, 0,
    11, 0, 12, 0, 13, 14, 0, 0, 15, 0, 0, 0, 16, 0, 17, 0, 18, 0, 19, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22,
    0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 32,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 48, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0,
    0, 55, 0, 0, 0, 56, 0, 57, 0, 58, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0,
    0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0,
    69, 0, 70, 0, 71, 0, 72, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 77, 0, 78, 0, 0, 0, 79,
    0, 0, 80, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 86, 0, 87,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 92, 0,
    93, 0, 94, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 101, 0, 0,
    102, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0,
    0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0, 0, 0, 112, 0, 113, 0, 114, 0, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 123, 0, 124, 0, 125, 0, 0, 126, 0, 127, 0, 128, 0, 0,
    0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0,
    0, 135, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 139, 0, 140, 0, 141, 142, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 0, 0, 150,
    0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0,
    0, 156, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 162, 0, 0, 0, 163, 0, 164, 0, 0,
    0, 165, 0, 166, 0, 0, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 177,
    0, 0, 0, 178, 179, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 186, 0, 187, 0, 0, 0, 0, 188, 0, 0, 189, 0, 190, 0, 0, 0, 191, 0, 0, 192,
    0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 198,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 204,
    0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 209, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0,
    218, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 225,
};
void recomp_unit_0352_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08964000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0352[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08964000;
    case 2u: goto L_0896400C;
    case 3u: goto L_08964018;
    case 4u: goto L_08964020;
    case 5u: goto L_0896402C;
    case 6u: goto L_08964040;
    case 7u: goto L_0896404C;
    case 8u: goto L_0896405C;
    case 9u: goto L_08964068;
    case 10u: goto L_08964078;
    case 11u: goto L_08964080;
    case 12u: goto L_08964088;
    case 13u: goto L_08964090;
    case 14u: goto L_08964094;
    case 15u: goto L_089640A0;
    case 16u: goto L_089640B0;
    case 17u: goto L_089640B8;
    case 18u: goto L_089640C0;
    case 19u: goto L_089640C8;
    case 20u: goto L_089640CC;
    case 21u: goto L_089640D8;
    case 22u: goto L_089640FC;
    case 23u: goto L_08964104;
    case 24u: goto L_08964114;
    case 25u: goto L_08964130;
    case 26u: goto L_08964138;
    case 27u: goto L_08964140;
    case 28u: goto L_08964148;
    case 29u: goto L_08964150;
    case 30u: goto L_0896415C;
    case 31u: goto L_08964168;
    case 32u: goto L_0896417C;
    case 33u: goto L_089641B8;
    case 34u: goto L_089641C0;
    case 35u: goto L_089641D0;
    case 36u: goto L_089641E8;
    case 37u: goto L_08964200;
    case 38u: goto L_08964220;
    case 39u: goto L_08964228;
    case 40u: goto L_08964234;
    case 41u: goto L_08964240;
    case 42u: goto L_08964250;
    case 43u: goto L_0896425C;
    case 44u: goto L_0896426C;
    case 45u: goto L_08964278;
    case 46u: goto L_089642AC;
    case 47u: goto L_089642BC;
    case 48u: goto L_089642C4;
    case 49u: goto L_089642CC;
    case 50u: goto L_089642D4;
    case 51u: goto L_0896430C;
    case 52u: goto L_0896433C;
    case 53u: goto L_08964350;
    case 54u: goto L_08964374;
    case 55u: goto L_08964384;
    case 56u: goto L_08964394;
    case 57u: goto L_0896439C;
    case 58u: goto L_089643A4;
    case 59u: goto L_089643AC;
    case 60u: goto L_089643B8;
    case 61u: goto L_089643C4;
    case 62u: goto L_089643EC;
    case 63u: goto L_08964404;
    case 64u: goto L_08964410;
    case 65u: goto L_08964428;
    case 66u: goto L_08964438;
    case 67u: goto L_08964464;
    case 68u: goto L_08964474;
    case 69u: goto L_08964480;
    case 70u: goto L_08964488;
    case 71u: goto L_08964490;
    case 72u: goto L_08964498;
    case 73u: goto L_089644AC;
    case 74u: goto L_089644B8;
    case 75u: goto L_089644D4;
    case 76u: goto L_089644DC;
    case 77u: goto L_089644E4;
    case 78u: goto L_089644EC;
    case 79u: goto L_089644FC;
    case 80u: goto L_08964508;
    case 81u: goto L_0896450C;
    case 82u: goto L_08964524;
    case 83u: goto L_08964544;
    case 84u: goto L_08964558;
    case 85u: goto L_08964564;
    case 86u: goto L_08964574;
    case 87u: goto L_0896457C;
    case 88u: goto L_089645A4;
    case 89u: goto L_089645B4;
    case 90u: goto L_08964660;
    case 91u: goto L_08964668;
    case 92u: goto L_08964678;
    case 93u: goto L_08964680;
    case 94u: goto L_08964688;
    case 95u: goto L_08964694;
    case 96u: goto L_0896469C;
    case 97u: goto L_089646B4;
    case 98u: goto L_089646C4;
    case 99u: goto L_089646DC;
    case 100u: goto L_089646E4;
    case 101u: goto L_089646F4;
    case 102u: goto L_08964700;
    case 103u: goto L_08964708;
    case 104u: goto L_08964720;
    case 105u: goto L_08964748;
    case 106u: goto L_089647D4;
    case 107u: goto L_089647E0;
    case 108u: goto L_089647F4;
    case 109u: goto L_08964818;
    case 110u: goto L_08964824;
    case 111u: goto L_0896482C;
    case 112u: goto L_0896483C;
    case 113u: goto L_08964844;
    case 114u: goto L_0896484C;
    case 115u: goto L_08964858;
    case 116u: goto L_08964860;
    case 117u: goto L_08964868;
    case 118u: goto L_08964880;
    case 119u: goto L_089648A8;
    case 120u: goto L_089648C8;
    case 121u: goto L_08964930;
    case 122u: goto L_08964938;
    case 123u: goto L_08964948;
    case 124u: goto L_08964950;
    case 125u: goto L_08964958;
    case 126u: goto L_08964964;
    case 127u: goto L_0896496C;
    case 128u: goto L_08964974;
    case 129u: goto L_0896498C;
    case 130u: goto L_089649A4;
    case 131u: goto L_089649BC;
    case 132u: goto L_089649CC;
    case 133u: goto L_089649D8;
    case 134u: goto L_089649EC;
    case 135u: goto L_08964A04;
    case 136u: goto L_08964A10;
    case 137u: goto L_08964A18;
    case 138u: goto L_08964A48;
    case 139u: goto L_08964A4C;
    case 140u: goto L_08964A54;
    case 141u: goto L_08964A5C;
    case 142u: goto L_08964A60;
    case 143u: goto L_08964A70;
    case 144u: goto L_08964A8C;
    case 145u: goto L_08964AB0;
    case 146u: goto L_08964AB8;
    case 147u: goto L_08964ADC;
    case 148u: goto L_08964AE4;
    case 149u: goto L_08964AEC;
    case 150u: goto L_08964AFC;
    case 151u: goto L_08964B0C;
    case 152u: goto L_08964B1C;
    case 153u: goto L_08964B40;
    case 154u: goto L_08964B48;
    case 155u: goto L_08964B6C;
    case 156u: goto L_08964B84;
    case 157u: goto L_08964B8C;
    case 158u: goto L_08964B9C;
    case 159u: goto L_08964BAC;
    case 160u: goto L_08964BC4;
    case 161u: goto L_08964BD4;
    case 162u: goto L_08964BDC;
    case 163u: goto L_08964BEC;
    case 164u: goto L_08964BF4;
    case 165u: goto L_08964C04;
    case 166u: goto L_08964C0C;
    case 167u: goto L_08964C1C;
    case 168u: goto L_08964C24;
    case 169u: goto L_08964C2C;
    case 170u: goto L_08964C34;
    case 171u: goto L_08964C3C;
    case 172u: goto L_08964C44;
    case 173u: goto L_08964C4C;
    case 174u: goto L_08964C58;
    case 175u: goto L_08964C64;
    case 176u: goto L_08964C74;
    case 177u: goto L_08964C7C;
    case 178u: goto L_08964C8C;
    case 179u: goto L_08964C90;
    case 180u: goto L_08964CA4;
    case 181u: goto L_08964CB4;
    case 182u: goto L_08964CC0;
    case 183u: goto L_08964CE8;
    case 184u: goto L_08964D1C;
    case 185u: goto L_08964D28;
    case 186u: goto L_08964D30;
    case 187u: goto L_08964D38;
    case 188u: goto L_08964D4C;
    case 189u: goto L_08964D58;
    case 190u: goto L_08964D60;
    case 191u: goto L_08964D70;
    case 192u: goto L_08964D7C;
    case 193u: goto L_08964D8C;
    case 194u: goto L_08964DC0;
    case 195u: goto L_08964DCC;
    case 196u: goto L_08964DE0;
    case 197u: goto L_08964DF0;
    case 198u: goto L_08964DFC;
    case 199u: goto L_08964E24;
    case 200u: goto L_08964E38;
    case 201u: goto L_08964E40;
    case 202u: goto L_08964E60;
    case 203u: goto L_08964E68;
    case 204u: goto L_08964E7C;
    case 205u: goto L_08964E84;
    case 206u: goto L_08964E94;
    case 207u: goto L_08964EA8;
    case 208u: goto L_08964EB8;
    case 209u: goto L_08964EC0;
    case 210u: goto L_08964EC8;
    case 211u: goto L_08964ED0;
    case 212u: goto L_08964F0C;
    case 213u: goto L_08964F20;
    case 214u: goto L_08964F2C;
    case 215u: goto L_08964F40;
    case 216u: goto L_08964F68;
    case 217u: goto L_08964F78;
    case 218u: goto L_08964F80;
    case 219u: goto L_08964F88;
    case 220u: goto L_08964F9C;
    case 221u: goto L_08964FB8;
    case 222u: goto L_08964FC4;
    case 223u: goto L_08964FD0;
    case 224u: goto L_08964FEC;
    case 225u: goto L_08964FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08964000:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896400Cu);
    // nop
    goto L_089643B8;
L_0896400C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964020;
      }
      goto L_08964018;
    }
L_08964018:
    aot_gpr[31] = (0x08964020u);
    aot_gpr[5] = (0u | 3u);
    goto L_08964374;
L_08964020:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896402C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08964040u);
    aot_gpr[6] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08964040u) goto L_08964040;
    return;
L_08964040:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896404C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896405Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 71u, 0x08983384u>(ctx, &aot_mem) && ctx.pc == 0x0896405Cu) goto L_0896405C;
    return;
L_0896405C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964068:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08964078u);
    // nop
    goto L_089643B8;
L_08964078:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964090;
      }
      goto L_08964080;
    }
L_08964080:
    aot_gpr[31] = (0x08964088u);
    // nop
    goto L_089643B8;
L_08964088:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08964094;
      }
      goto L_08964090;
    }
L_08964090:
    aot_gpr[2] = (0u | 0u);
    goto L_08964094;
L_08964094:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089640A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089640B0u);
    // nop
    goto L_089643B8;
L_089640B0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089640C8;
      }
      goto L_089640B8;
    }
L_089640B8:
    aot_gpr[31] = (0x089640C0u);
    // nop
    goto L_089643B8;
L_089640C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089640CC;
      }
      goto L_089640C8;
    }
L_089640C8:
    aot_gpr[2] = (0u | 256u);
    goto L_089640CC;
L_089640CC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089640D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x089640FCu);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089640A0;
L_089640FC:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08964138;
      }
      goto L_08964104;
    }
L_08964104:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26984)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089641D0;
      }
      goto L_08964114;
    }
L_08964114:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(40));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08964130u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08964130u) goto L_08964130;
    return;
L_08964130:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089641D0;
      }
      goto L_08964138;
    }
L_08964138:
    aot_gpr[31] = (0x08964140u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_089643B8;
L_08964140:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089641D0;
      }
      goto L_08964148;
    }
L_08964148:
    aot_gpr[31] = (0x08964150u);
    // nop
    goto L_089643B8;
L_08964150:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0896415Cu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_08964DE0;
L_0896415C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089641C0;
      }
      goto L_08964168;
    }
L_08964168:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[5] << 4u);
      if (branch_taken) {
          goto L_089641C0;
      }
      goto L_0896417C;
    }
L_0896417C:
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(288), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] << 4u);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089641B8u);
    aot_gpr[6] = (0u | 31u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089641B8u) goto L_089641B8;
    return;
L_089641B8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089641D0;
      }
      goto L_089641C0;
    }
L_089641C0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089641D0u);
    aot_gpr[6] = (0u | 292u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089641D0u) goto L_089641D0;
    return;
L_089641D0:
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
L_089641E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-26984)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964228;
      }
      goto L_08964200;
    }
L_08964200:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(40));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08964220u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08964220u) goto L_08964220;
    return;
L_08964220:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08964234;
      }
      goto L_08964228;
    }
L_08964228:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08964234u);
    aot_gpr[6] = (0u | 292u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08964234u) goto L_08964234;
    return;
L_08964234:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964240:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08964250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 60u, 0x089623E8u>(ctx, &aot_mem) && ctx.pc == 0x08964250u) goto L_08964250;
    return;
L_08964250:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896425C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896426Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x0896426Cu) goto L_0896426C;
    return;
L_0896426C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964278:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26904), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089642C4;
      }
      goto L_089642AC;
    }
L_089642AC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089642BCu);
    aot_gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089642BCu) goto L_089642BC;
    return;
L_089642BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089642CC;
      }
      goto L_089642C4;
    }
L_089642C4:
    aot_gpr[31] = (0x089642CCu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 133u, 0x089D1B48u>(ctx, &aot_mem) && ctx.pc == 0x089642CCu) goto L_089642CC;
    return;
L_089642CC:
    aot_gpr[31] = (0x089642D4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 136u, 0x089D1B80u>(ctx, &aot_mem) && ctx.pc == 0x089642D4u) goto L_089642D4;
    return;
L_089642D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (0u | 8192u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[16] != 0u) {
    aot_gpr[4] = (aot_gpr[16] | 0u);
        goto L_0896430C;
    }
    goto L_0896430C;
L_0896430C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26908), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(508), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(504), 0u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(512));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896433Cu);
    aot_gpr[6] = (0u | 76u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896433Cu) goto L_0896433C;
    return;
L_0896433C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), 0u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08964350u);
    aot_gpr[6] = (0u | 448u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08964350u) goto L_08964350;
    return;
L_08964350:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[4] = (0u | 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964374:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089643AC;
      }
      goto L_08964384;
    }
L_08964384:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-26904)));
    if (aot_gpr[7] != aot_gpr[4]) {
    aot_gpr[5] = (aot_gpr[5] & 1u);
        goto L_0896439C;
    }
    goto L_08964394;
L_08964394:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-26904), 0u);
    aot_gpr[5] = (aot_gpr[5] & 1u);
    goto L_0896439C;
L_0896439C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089643AC;
      }
      goto L_089643A4;
    }
L_089643A4:
    aot_gpr[31] = (0x089643ACu);
    // nop
    goto L_0896425C;
L_089643AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089643B8:
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26904)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089643C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (2198u << 16u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-26912));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089643ECu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(21808));
    if (rt.invoke_chained_direct<&recomp_unit_0382_entry, 382u, 242u, 0x08982FA0u>(ctx, &aot_mem) && ctx.pc == 0x089643ECu) goto L_089643EC;
    return;
L_089643EC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (2198u << 16u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-26908));
    aot_gpr[31] = (0x08964404u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(21896));
    if (rt.invoke_chained_direct<&recomp_unit_0382_entry, 382u, 242u, 0x08982FA0u>(ctx, &aot_mem) && ctx.pc == 0x08964404u) goto L_08964404;
    return;
L_08964404:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964428;
      }
      goto L_08964410;
    }
L_08964410:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08964428u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08964428u) goto L_08964428;
    return;
L_08964428:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964438:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[6] & 255u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(588));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08964464u);
    aot_gpr[6] = (0u | 156u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08964464u) goto L_08964464;
    return;
L_08964464:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08964488;
      }
      goto L_08964474;
    }
L_08964474:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(508)));
        goto L_08964490;
    }
    goto L_08964480;
L_08964480:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089644E4;
      }
      goto L_08964488;
    }
L_08964488:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896450C;
      }
      goto L_08964490;
    }
L_08964490:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089644E4;
      }
      goto L_08964498;
    }
L_08964498:
    aot_gpr[5] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[31] = (0x089644ACu);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 60u, 0x089623E8u>(ctx, &aot_mem) && ctx.pc == 0x089644ACu) goto L_089644AC;
    return;
L_089644AC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(508), aot_gpr[2]);
      if (branch_taken) {
          goto L_089644DC;
      }
      goto L_089644B8;
    }
L_089644B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (aot_gpr[5] << 4u);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[31] = (0x089644D4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089644D4u) goto L_089644D4;
    return;
L_089644D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089644E4;
      }
      goto L_089644DC;
    }
L_089644DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896450C;
      }
      goto L_089644E4;
    }
L_089644E4:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089644FC;
      }
      goto L_089644EC;
    }
L_089644EC:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(512));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089644FCu);
    aot_gpr[6] = (0u | 76u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089644FCu) goto L_089644FC;
    return;
L_089644FC:
    aot_gpr[4] = (0u | 2u);
    if (aot_gpr[17] != 0u) {
    aot_gpr[4] = (0u | 1u);
        goto L_08964508;
    }
    goto L_08964508;
L_08964508:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    goto L_0896450C;
L_0896450C:
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
L_08964524:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08964558;
      }
      goto L_08964544;
    }
L_08964544:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(512));
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08964558u);
    aot_gpr[6] = (0u | 76u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08964558u) goto L_08964558;
    return;
L_08964558:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964564:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (0u | 6u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (0u | 5u);
        goto L_08964574;
    }
    goto L_08964574;
L_08964574:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896457C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-416));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(388), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(392), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(400), aot_gpr[31]);
    aot_gpr[31] = (0x089645A4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0388_entry, 388u, 162u, 0x08988AB4u>(ctx, &aot_mem) && ctx.pc == 0x089645A4u) goto L_089645A4;
    return;
L_089645A4:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(588));
    aot_gpr[31] = (0x089645B4u);
    aot_gpr[6] = (0u | 156u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089645B4u) goto L_089645B4;
    return;
L_089645B4:
    aot_gpr[4] = (2198u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21364));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[4]);
    aot_gpr[4] = (2198u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21396));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[4]);
    aot_gpr[4] = (2198u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21428));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[4]);
    aot_gpr[4] = (2198u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21460));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[16]);
    aot_gpr[4] = (2198u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21540));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[16]);
    aot_gpr[4] = (0u < aot_gpr[5] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    aot_gpr[4] = (2198u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21748));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(352), aot_gpr[4]);
    aot_gpr[4] = (2198u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(356), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21716));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(372), aot_gpr[5]);
    aot_gpr[4] = (2198u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(368), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21492));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(348), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(376));
      if (branch_taken) {
          goto L_08964680;
      }
      goto L_08964660;
    }
L_08964660:
    aot_gpr[31] = (0x08964668u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 3u, 0x08983018u>(ctx, &aot_mem) && ctx.pc == 0x08964668u) goto L_08964668;
    return;
L_08964668:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 13u);
    aot_gpr[31] = (0x08964678u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 161u, 0x08962BC4u>(ctx, &aot_mem) && ctx.pc == 0x08964678u) goto L_08964678;
    return;
L_08964678:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08964680;
L_08964680:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964694;
      }
      goto L_08964688;
    }
L_08964688:
    aot_gpr[4] = (0u | 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08964694;
L_08964694:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08964708;
      }
      goto L_0896469C;
    }
L_0896469C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(384)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08964700;
      }
      goto L_089646B4;
    }
L_089646B4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26976)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964700;
      }
      goto L_089646C4;
    }
L_089646C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089646DCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089646DCu) goto L_089646DC;
    return;
L_089646DC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08964700;
      }
      goto L_089646E4;
    }
L_089646E4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089646F4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 29u, 0x0896D174u>(ctx, &aot_mem) && ctx.pc == 0x089646F4u) goto L_089646F4;
    return;
L_089646F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x08964700u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0422_entry, 422u, 52u, 0x089AA3D4u>(ctx, &aot_mem) && ctx.pc == 0x08964700u) goto L_08964700;
    return;
L_08964700:
    aot_gpr[4] = (0u | 7u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    goto L_08964708;
L_08964708:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(388)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(392)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(416));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964720:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-240));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[31]);
    aot_gpr[31] = (0x08964748u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0388_entry, 388u, 176u, 0x08988C1Cu>(ctx, &aot_mem) && ctx.pc == 0x08964748u) goto L_08964748;
    return;
L_08964748:
    aot_gpr[4] = (2198u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21364));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2198u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21396));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (2198u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21428));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (2198u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21460));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    aot_gpr[5] = (2198u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(21716));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[5] = (0u < aot_gpr[6] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[5]);
    aot_gpr[5] = (2198u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(21748));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[5]);
    aot_gpr[5] = (0u | 7u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(32), aot_gpr[5]);
      if (branch_taken) {
          goto L_08964818;
      }
      goto L_089647D4;
    }
L_089647D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08964818;
      }
      goto L_089647E0;
    }
L_089647E0:
    aot_gpr[5] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[31] = (0x089647F4u);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 60u, 0x089623E8u>(ctx, &aot_mem) && ctx.pc == 0x089647F4u) goto L_089647F4;
    return;
L_089647F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(508), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08964818u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08964818u) goto L_08964818;
    return;
L_08964818:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(204));
      if (branch_taken) {
          goto L_08964844;
      }
      goto L_08964824;
    }
L_08964824:
    aot_gpr[31] = (0x0896482Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 19u, 0x08983104u>(ctx, &aot_mem) && ctx.pc == 0x0896482Cu) goto L_0896482C;
    return;
L_0896482C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 13u);
    aot_gpr[31] = (0x0896483Cu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 161u, 0x08962BC4u>(ctx, &aot_mem) && ctx.pc == 0x0896483Cu) goto L_0896483C;
    return;
L_0896483C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08964844;
L_08964844:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964858;
      }
      goto L_0896484C;
    }
L_0896484C:
    aot_gpr[4] = (0u | 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08964858;
L_08964858:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08964868;
      }
      goto L_08964860;
    }
L_08964860:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    goto L_08964868;
L_08964868:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964880:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[31]);
    aot_gpr[31] = (0x089648A8u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 15u, 0x089830B4u>(ctx, &aot_mem) && ctx.pc == 0x089648A8u) goto L_089648A8;
    return;
L_089648A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(512));
    aot_gpr[31] = (0x089648C8u);
    aot_gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089648C8u) goto L_089648C8;
    return;
L_089648C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (2198u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21572));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (2198u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21604));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    aot_gpr[4] = (2198u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21684));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[4] = (2198u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21636));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_08964950;
      }
      goto L_08964930;
    }
L_08964930:
    aot_gpr[31] = (0x08964938u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 130u, 0x089836A8u>(ctx, &aot_mem) && ctx.pc == 0x08964938u) goto L_08964938;
    return;
L_08964938:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 13u);
    aot_gpr[31] = (0x08964948u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 161u, 0x08962BC4u>(ctx, &aot_mem) && ctx.pc == 0x08964948u) goto L_08964948;
    return;
L_08964948:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08964950;
L_08964950:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964964;
      }
      goto L_08964958;
    }
L_08964958:
    aot_gpr[4] = (0u | 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08964964;
L_08964964:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08964974;
      }
      goto L_0896496C;
    }
L_0896496C:
    aot_gpr[4] = (0u | 7u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    goto L_08964974;
L_08964974:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896498C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089649D8;
      }
      goto L_089649A4;
    }
L_089649A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[31] = (0x089649BCu);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 109u, 0x089835B8u>(ctx, &aot_mem) && ctx.pc == 0x089649BCu) goto L_089649BC;
    return;
L_089649BC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089649CCu);
    aot_gpr[5] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 161u, 0x08962BC4u>(ctx, &aot_mem) && ctx.pc == 0x089649CCu) goto L_089649CC;
    return;
L_089649CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_089649D8;
L_089649D8:
    aot_gpr[5] = (0u | 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089649EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08964A10;
      }
      goto L_08964A04;
    }
L_08964A04:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(508)));
      if (branch_taken) {
          goto L_08964A4C;
      }
      goto L_08964A10;
    }
L_08964A10:
    aot_gpr[31] = (0x08964A18u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 119u, 0x08983624u>(ctx, &aot_mem) && ctx.pc == 0x08964A18u) goto L_08964A18;
    return;
L_08964A18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (2198u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(21396));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (0u | 7u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[31] = (0x08964A48u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 122u, 0x08983648u>(ctx, &aot_mem) && ctx.pc == 0x08964A48u) goto L_08964A48;
    return;
L_08964A48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(508)));
    goto L_08964A4C;
L_08964A4C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964A60;
      }
      goto L_08964A54;
    }
L_08964A54:
    aot_gpr[31] = (0x08964A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x08964A5Cu) goto L_08964A5C;
    return;
L_08964A5C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(508), 0u);
    goto L_08964A60;
L_08964A60:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964A70:
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[10] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[9] | 0u);
    aot_gpr[4] = (aot_gpr[10] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[7] = (0u | 9u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08964A8C;
L_08964A8C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[9] + aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[10] + aot_gpr[8]);
      if (branch_taken) {
          goto L_08964A8C;
      }
      goto L_08964AB0;
    }
L_08964AB0:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964AB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08964ADCu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 193u, 0x089D1F84u>(ctx, &aot_mem) && ctx.pc == 0x08964ADCu) goto L_08964ADC;
    return;
L_08964ADC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964AEC;
      }
      goto L_08964AE4;
    }
L_08964AE4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08964AFC;
      }
      goto L_08964AEC;
    }
L_08964AEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[5] ^ aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08964AFC;
L_08964AFC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964B0C:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (0u | 56u);
    goto L_08964B1C;
L_08964B1C:
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (aot_gpr[7] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08964B1C;
      }
      goto L_08964B40;
    }
L_08964B40:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964B48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-816));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(792), aot_gpr[16]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(796), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(800), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[17] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08964B8C;
      }
      goto L_08964B6C;
    }
L_08964B6C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(788), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08964B84u);
    aot_gpr[5] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 161u, 0x08962BC4u>(ctx, &aot_mem) && ctx.pc == 0x08964B84u) goto L_08964B84;
    return;
L_08964B84:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(788)));
    goto L_08964B8C;
L_08964B8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08964DCC;
      }
      goto L_08964B9C;
    }
L_08964B9C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (aot_gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964C3C;
      }
      goto L_08964BAC;
    }
L_08964BAC:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[5]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-21792)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964BC4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08964BD4u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    goto L_0896457C;
L_08964BD4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08964C3C;
      }
      goto L_08964BDC;
    }
L_08964BDC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08964BECu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    goto L_08964720;
L_08964BEC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08964C3C;
      }
      goto L_08964BF4;
    }
L_08964BF4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08964C04u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    goto L_08964880;
L_08964C04:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08964C3C;
      }
      goto L_08964C0C;
    }
L_08964C0C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08964C1Cu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    goto L_0896498C;
L_08964C1C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08964C3C;
      }
      goto L_08964C24;
    }
L_08964C24:
    aot_gpr[31] = (0x08964C2Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089649EC;
L_08964C2C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08964C3C;
      }
      goto L_08964C34;
    }
L_08964C34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08964C3C;
      }
      goto L_08964C3C;
    }
L_08964C3C:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08964DCC;
      }
      goto L_08964C44;
    }
L_08964C44:
    aot_gpr[31] = (0x08964C4Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    goto L_0896404C;
L_08964C4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964DCC;
      }
      goto L_08964C58;
    }
L_08964C58:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08964C64u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 81u, 0x08983414u>(ctx, &aot_mem) && ctx.pc == 0x08964C64u) goto L_08964C64;
    return;
L_08964C64:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x08964C74u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 89u, 0x08983474u>(ctx, &aot_mem) && ctx.pc == 0x08964C74u) goto L_08964C74;
    return;
L_08964C74:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08964C90;
      }
      goto L_08964C7C;
    }
L_08964C7C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08964C90;
      }
      goto L_08964C8C;
    }
L_08964C8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    goto L_08964C90;
L_08964C90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(504)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964D28;
      }
      goto L_08964CA4;
    }
L_08964CA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08964D28;
      }
      goto L_08964CB4;
    }
L_08964CB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x08964CC0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 38u, 0x08985364u>(ctx, &aot_mem) && ctx.pc == 0x08964CC0u) goto L_08964CC0;
    return;
L_08964CC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(508)));
    aot_gpr[6] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[11] = (aot_gpr[29] + static_cast<std::uint32_t>(136));
    aot_gpr[31] = (0x08964CE8u);
    aot_gpr[5] = (aot_gpr[11] | 0u);
    goto L_08964A70;
L_08964CE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (0u | 76u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-26908)));
    aot_gpr[5] = (0u | 80u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x08964D1Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 158u, 0x08983858u>(ctx, &aot_mem) && ctx.pc == 0x08964D1Cu) goto L_08964D1C;
    return;
L_08964D1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10000));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(504), aot_gpr[4]);
    goto L_08964D28;
L_08964D28:
    aot_gpr[31] = (0x08964D30u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08964AB8;
L_08964D30:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964DCC;
      }
      goto L_08964D38;
    }
L_08964D38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964DCC;
      }
      goto L_08964D4C;
    }
L_08964D4C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x08964D58u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 81u, 0x08983414u>(ctx, &aot_mem) && ctx.pc == 0x08964D58u) goto L_08964D58;
    return;
L_08964D58:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08964DCC;
      }
      goto L_08964D60;
    }
L_08964D60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08964DCC;
      }
      goto L_08964D70;
    }
L_08964D70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x08964D7Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(228));
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 38u, 0x08985364u>(ctx, &aot_mem) && ctx.pc == 0x08964D7Cu) goto L_08964D7C;
    return;
L_08964D7C:
    aot_gpr[11] = (aot_gpr[29] + static_cast<std::uint32_t>(340));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(56));
    aot_gpr[31] = (0x08964D8Cu);
    aot_gpr[5] = (aot_gpr[11] | 0u);
    goto L_08964B0C;
L_08964D8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[4]);
    aot_gpr[4] = (0u | 448u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-26912)));
    aot_gpr[5] = (0u | 80u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(220), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(216));
    aot_gpr[31] = (0x08964DC0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(292));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 158u, 0x08983858u>(ctx, &aot_mem) && ctx.pc == 0x08964DC0u) goto L_08964DC0;
    return;
L_08964DC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10000));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    goto L_08964DCC;
L_08964DCC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(792)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(796)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(800)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(816));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964DE0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(508)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964DF0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(76), aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964DFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] << 5u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(108));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08964E24u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x08964E24u) goto L_08964E24;
    return;
L_08964E24:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964E38:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964E40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08964E84;
      }
      goto L_08964E60;
    }
L_08964E60:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08964E94;
      }
      goto L_08964E68;
    }
L_08964E68:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08964E7Cu);
    aot_gpr[6] = (0u | 448u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08964E7Cu) goto L_08964E7C;
    return;
L_08964E7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08964E94;
      }
      goto L_08964E84;
    }
L_08964E84:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08964E94u);
    aot_gpr[6] = (0u | 448u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08964E94u) goto L_08964E94;
    return;
L_08964E94:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964EA8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08964EC0;
      }
      goto L_08964EB8;
    }
L_08964EB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08964EC8;
      }
      goto L_08964EC0;
    }
L_08964EC0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    goto L_08964EC8;
L_08964EC8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964ED0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(36));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08964F0Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 55u, 0x089832C4u>(ctx, &aot_mem) && ctx.pc == 0x08964F0Cu) goto L_08964F0C;
    return;
L_08964F0C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08964F80;
      }
      goto L_08964F20;
    }
L_08964F20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964F80;
      }
      goto L_08964F2C;
    }
L_08964F2C:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964F78;
      }
      goto L_08964F40;
    }
L_08964F40:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(512));
    aot_gpr[6] = (aot_gpr[5] << 4u);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08964F68u);
    aot_gpr[6] = (0u | 76u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08964F68u) goto L_08964F68;
    return;
L_08964F68:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08964F78u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    goto L_08964DFC;
L_08964F78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08964F88;
      }
      goto L_08964F80;
    }
L_08964F80:
    aot_gpr[4] = (0u | 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    goto L_08964F88;
L_08964F88:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964F9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0353_entry, 353u, 2u, 0x08965004u>(ctx, &aot_mem); return;
      }
      goto L_08964FB8;
    }
L_08964FB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964FF4;
      }
      goto L_08964FC4;
    }
L_08964FC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08964FF4;
      }
      goto L_08964FD0;
    }
L_08964FD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08964FECu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08964FECu) goto L_08964FEC;
    return;
L_08964FEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08964FF4;
      }
      goto L_08964FF4;
    }
L_08964FF4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.pc = 0x08965000u; return;
}

void recomp_unit_0352(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0352_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_352(Runtime &runtime) {
    runtime.register_generated_unit(352u, 0x08964000u, 4096u, &recomp_unit_0352, &recomp_unit_0352_entry);
    runtime.register_function(0x08964000u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x0896400Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964018u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964020u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x0896402Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964040u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x0896404Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x0896405Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964068u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964078u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964080u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964088u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964090u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964094u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089640A0u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089640B0u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089640B8u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089640C0u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089640C8u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089640CCu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089640D8u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089640FCu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964104u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964114u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964130u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964138u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964140u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964148u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964150u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x0896415Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964168u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x0896417Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089641B8u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089641C0u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089641D0u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089641E8u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964200u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964220u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964228u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964234u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964240u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964250u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x0896425Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x0896426Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964278u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089642ACu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089642BCu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089642C4u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089642CCu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089642D4u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x0896430Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x0896433Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964350u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964374u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964384u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964394u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x0896439Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089643A4u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089643ACu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089643B8u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089643C4u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089643ECu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964404u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964410u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964428u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964438u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964464u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964474u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964480u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964488u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964490u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964498u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089644ACu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089644B8u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089644D4u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089644DCu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089644E4u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089644ECu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089644FCu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964508u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x0896450Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964524u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964544u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964558u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964564u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964574u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x0896457Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089645A4u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089645B4u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964660u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964668u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964678u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964680u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964688u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964694u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x0896469Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089646B4u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089646C4u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089646DCu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089646E4u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089646F4u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964700u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964708u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964720u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964748u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089647D4u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089647E0u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089647F4u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964818u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964824u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x0896482Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x0896483Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964844u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x0896484Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964858u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964860u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964868u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964880u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089648A8u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089648C8u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964930u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964938u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964948u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964950u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964958u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964964u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x0896496Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964974u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x0896498Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089649A4u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089649BCu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089649CCu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089649D8u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x089649ECu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964A04u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964A10u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964A18u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964A48u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964A4Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964A54u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964A5Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964A60u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964A70u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964A8Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964AB0u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964AB8u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964ADCu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964AE4u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964AECu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964AFCu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964B0Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964B1Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964B40u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964B48u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964B6Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964B84u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964B8Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964B9Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964BACu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964BC4u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964BD4u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964BDCu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964BECu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964BF4u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964C04u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964C0Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964C1Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964C24u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964C2Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964C34u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964C3Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964C44u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964C4Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964C58u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964C64u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964C74u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964C7Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964C8Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964C90u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964CA4u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964CB4u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964CC0u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964CE8u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964D1Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964D28u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964D30u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964D38u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964D4Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964D58u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964D60u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964D70u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964D7Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964D8Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964DC0u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964DCCu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964DE0u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964DF0u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964DFCu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964E24u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964E38u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964E40u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964E60u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964E68u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964E7Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964E84u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964E94u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964EA8u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964EB8u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964EC0u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964EC8u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964ED0u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964F0Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964F20u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964F2Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964F40u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964F68u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964F78u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964F80u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964F88u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964F9Cu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964FB8u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964FC4u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964FD0u, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964FECu, &recomp_unit_0352, "recomp_unit_0352");
    runtime.register_function(0x08964FF4u, &recomp_unit_0352, "recomp_unit_0352");
}
} // namespace psprecomp
