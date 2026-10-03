#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0005[1023] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0,
    0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 10, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 16, 17, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 20, 0, 0, 0, 21, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 25, 26, 0, 0, 0, 0, 0, 0,
    0, 27, 0, 0, 28, 0, 0, 29, 30, 0, 31, 0, 32, 0, 33, 0, 0, 34, 0, 35, 0, 36, 0, 37, 0, 38, 0, 39, 0, 0, 40, 0,
    0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0,
    0, 53, 0, 0, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 62, 0, 63, 0, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0,
    0, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 76, 0, 77, 0, 0, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0,
    0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0,
    0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 107, 0, 108, 109, 0, 110, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 116, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123,
    0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0,
    0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0,
    133, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 136, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0,
    0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 146, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    150, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 162, 0, 163, 0, 164, 0, 0, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 170, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 176, 0, 0, 177,
    0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 180, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183,
};
void recomp_unit_0005_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08809000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0005[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08809000;
    case 2u: goto L_08809024;
    case 3u: goto L_08809030;
    case 4u: goto L_08809034;
    case 5u: goto L_08809060;
    case 6u: goto L_08809078;
    case 7u: goto L_08809088;
    case 8u: goto L_088090A4;
    case 9u: goto L_088090BC;
    case 10u: goto L_088090C8;
    case 11u: goto L_088090CC;
    case 12u: goto L_08809100;
    case 13u: goto L_08809128;
    case 14u: goto L_08809158;
    case 15u: goto L_08809168;
    case 16u: goto L_0880916C;
    case 17u: goto L_08809170;
    case 18u: goto L_088091E0;
    case 19u: goto L_088091F0;
    case 20u: goto L_0880920C;
    case 21u: goto L_0880921C;
    case 22u: goto L_08809220;
    case 23u: goto L_08809240;
    case 24u: goto L_0880925C;
    case 25u: goto L_08809260;
    case 26u: goto L_08809264;
    case 27u: goto L_08809284;
    case 28u: goto L_08809290;
    case 29u: goto L_0880929C;
    case 30u: goto L_088092A0;
    case 31u: goto L_088092A8;
    case 32u: goto L_088092B0;
    case 33u: goto L_088092B8;
    case 34u: goto L_088092C4;
    case 35u: goto L_088092CC;
    case 36u: goto L_088092D4;
    case 37u: goto L_088092DC;
    case 38u: goto L_088092E4;
    case 39u: goto L_088092EC;
    case 40u: goto L_088092F8;
    case 41u: goto L_08809304;
    case 42u: goto L_0880931C;
    case 43u: goto L_08809330;
    case 44u: goto L_08809348;
    case 45u: goto L_08809360;
    case 46u: goto L_08809368;
    case 47u: goto L_08809380;
    case 48u: goto L_08809394;
    case 49u: goto L_088093AC;
    case 50u: goto L_088093BC;
    case 51u: goto L_088093D4;
    case 52u: goto L_088093E8;
    case 53u: goto L_08809404;
    case 54u: goto L_08809414;
    case 55u: goto L_0880941C;
    case 56u: goto L_08809424;
    case 57u: goto L_0880942C;
    case 58u: goto L_08809434;
    case 59u: goto L_0880944C;
    case 60u: goto L_08809454;
    case 61u: goto L_0880945C;
    case 62u: goto L_08809464;
    case 63u: goto L_0880946C;
    case 64u: goto L_08809490;
    case 65u: goto L_088094A4;
    case 66u: goto L_088094AC;
    case 67u: goto L_088094BC;
    case 68u: goto L_088094E4;
    case 69u: goto L_088094F8;
    case 70u: goto L_08809508;
    case 71u: goto L_08809510;
    case 72u: goto L_08809518;
    case 73u: goto L_08809520;
    case 74u: goto L_08809528;
    case 75u: goto L_08809530;
    case 76u: goto L_08809538;
    case 77u: goto L_08809540;
    case 78u: goto L_08809550;
    case 79u: goto L_08809558;
    case 80u: goto L_08809560;
    case 81u: goto L_08809568;
    case 82u: goto L_08809570;
    case 83u: goto L_08809594;
    case 84u: goto L_088095A0;
    case 85u: goto L_088095AC;
    case 86u: goto L_088095B8;
    case 87u: goto L_088095C0;
    case 88u: goto L_088095CC;
    case 89u: goto L_088095F4;
    case 90u: goto L_08809614;
    case 91u: goto L_0880962C;
    case 92u: goto L_0880965C;
    case 93u: goto L_08809668;
    case 94u: goto L_0880968C;
    case 95u: goto L_08809694;
    case 96u: goto L_088096AC;
    case 97u: goto L_088096B4;
    case 98u: goto L_088096C8;
    case 99u: goto L_088096D4;
    case 100u: goto L_088096F0;
    case 101u: goto L_08809700;
    case 102u: goto L_08809724;
    case 103u: goto L_0880976C;
    case 104u: goto L_08809818;
    case 105u: goto L_08809848;
    case 106u: goto L_08809858;
    case 107u: goto L_08809860;
    case 108u: goto L_08809868;
    case 109u: goto L_0880986C;
    case 110u: goto L_08809874;
    case 111u: goto L_088098A8;
    case 112u: goto L_08809948;
    case 113u: goto L_08809958;
    case 114u: goto L_08809998;
    case 115u: goto L_088099DC;
    case 116u: goto L_08809A10;
    case 117u: goto L_08809A14;
    case 118u: goto L_08809A3C;
    case 119u: goto L_08809A60;
    case 120u: goto L_08809AC8;
    case 121u: goto L_08809AD4;
    case 122u: goto L_08809AE4;
    case 123u: goto L_08809AFC;
    case 124u: goto L_08809B14;
    case 125u: goto L_08809B24;
    case 126u: goto L_08809B3C;
    case 127u: goto L_08809B50;
    case 128u: goto L_08809B60;
    case 129u: goto L_08809B68;
    case 130u: goto L_08809B8C;
    case 131u: goto L_08809BBC;
    case 132u: goto L_08809BEC;
    case 133u: goto L_08809C00;
    case 134u: goto L_08809C0C;
    case 135u: goto L_08809C18;
    case 136u: goto L_08809C2C;
    case 137u: goto L_08809C34;
    case 138u: goto L_08809C3C;
    case 139u: goto L_08809C60;
    case 140u: goto L_08809C74;
    case 141u: goto L_08809C88;
    case 142u: goto L_08809CA0;
    case 143u: goto L_08809CB4;
    case 144u: goto L_08809CE8;
    case 145u: goto L_08809CF0;
    case 146u: goto L_08809CF8;
    case 147u: goto L_08809D00;
    case 148u: goto L_08809D28;
    case 149u: goto L_08809D54;
    case 150u: goto L_08809D80;
    case 151u: goto L_08809D8C;
    case 152u: goto L_08809DA0;
    case 153u: goto L_08809DB4;
    case 154u: goto L_08809DCC;
    case 155u: goto L_08809DDC;
    case 156u: goto L_08809DF4;
    case 157u: goto L_08809E24;
    case 158u: goto L_08809E30;
    case 159u: goto L_08809E58;
    case 160u: goto L_08809E60;
    case 161u: goto L_08809E70;
    case 162u: goto L_08809E88;
    case 163u: goto L_08809E90;
    case 164u: goto L_08809E98;
    case 165u: goto L_08809EA8;
    case 166u: goto L_08809EB0;
    case 167u: goto L_08809EC0;
    case 168u: goto L_08809ED8;
    case 169u: goto L_08809EEC;
    case 170u: goto L_08809EF0;
    case 171u: goto L_08809F18;
    case 172u: goto L_08809F28;
    case 173u: goto L_08809F38;
    case 174u: goto L_08809F58;
    case 175u: goto L_08809F60;
    case 176u: goto L_08809F70;
    case 177u: goto L_08809F7C;
    case 178u: goto L_08809F98;
    case 179u: goto L_08809FA0;
    case 180u: goto L_08809FB8;
    case 181u: goto L_08809FBC;
    case 182u: goto L_08809FC4;
    case 183u: goto L_08809FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08809000:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[9]);
      if (branch_taken) {
          goto L_08809030;
      }
      goto L_08809024;
    }
L_08809024:
    aot_gpr[6] = (0u | 2u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08809034;
      }
      goto L_08809030;
    }
L_08809030:
    aot_gpr[4] = (0u | 1u);
    goto L_08809034;
L_08809034:
    aot_gpr[5] = (aot_gpr[4] & 255u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2072)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (16153u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[4] = (0u | 1u);
        goto L_08809060;
    }
    goto L_08809060;
L_08809060:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[31] = (0x08809078u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 71u, 0x088EB668u>(ctx, &aot_mem) && ctx.pc == 0x08809078u) goto L_08809078;
    return;
L_08809078:
    ctx.set_fpu_condition((aot_fpr[0] < aot_fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[18] = (0u | 1u);
        goto L_08809088;
    }
    goto L_08809088;
L_08809088:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2208)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[21] = (0u | 0u);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[21] = (0u | 1u);
        goto L_088090A4;
    }
    goto L_088090A4;
L_088090A4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[21] & 255u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_088090C8;
      }
      goto L_088090BC;
    }
L_088090BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088090CC;
      }
      goto L_088090C8;
    }
L_088090C8:
    aot_gpr[21] = (0u | 1u);
    goto L_088090CC;
L_088090CC:
    aot_gpr[21] = (aot_gpr[21] & 255u);
    aot_gpr[4] = (0u | 0u);
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (15820u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[4] = (0u | 1u);
        goto L_08809100;
    }
    goto L_08809100;
L_08809100:
    aot_gpr[7] = (16204u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (aot_gpr[7] | 52429u);
    aot_gpr[5] = (aot_gpr[4] & 255u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[4] = (0u | 1u);
        goto L_08809128;
    }
    goto L_08809128;
L_08809128:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[7] | aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[21] | aot_gpr[5]);
    aot_gpr[22] = (aot_gpr[6] | aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[22] = (0u < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[30] != 0u;
    aot_gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_0880916C;
      }
      goto L_08809158;
    }
L_08809158:
    aot_gpr[5] = (aot_gpr[18] & 255u);
    aot_gpr[5] = (aot_gpr[4] | aot_gpr[5]);
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_08809170;
    }
    goto L_08809168;
L_08809168:
    aot_gpr[23] = (0u | 1u);
    goto L_0880916C;
L_0880916C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08809170;
L_08809170:
    aot_gpr[18] = (aot_gpr[30] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(364)));
    aot_gpr[18] = (aot_gpr[18] & aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(176)));
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[13] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[4] = (16576u << 16u);
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[23] = (aot_gpr[23] & 255u);
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[26] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[26] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) & 0x7FFFFFFFu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (15651u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
    aot_gpr[4] = (aot_gpr[4] | 55050u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088091F0;
      }
      goto L_088091E0;
    }
L_088091E0:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[16] = (0u | 1u);
        goto L_08809220;
    }
    goto L_088091F0;
L_088091F0:
    aot_gpr[4] = (48419u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 55050u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08809220;
      }
      goto L_0880920C;
    }
L_0880920C:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08809220;
      }
      goto L_0880921C;
    }
L_0880921C:
    aot_gpr[16] = (0u | 1u);
    goto L_08809220;
L_08809220:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[16] & 255u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(404)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08809260;
      }
      goto L_08809240;
    }
L_08809240:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(164)));
    aot_gpr[4] = (16672u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_08809264;
      }
      goto L_0880925C;
    }
L_0880925C:
    aot_gpr[16] = (0u | 1u);
    goto L_08809260;
L_08809260:
    aot_gpr[4] = (2218u << 16u);
    goto L_08809264;
L_08809264:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7520)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(520)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(536)));
    aot_fpr[13] = aot_fpr[28] - aot_fpr[20];
    aot_gpr[16] = (aot_gpr[16] & 255u);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_fpr[20] = aot_fpr[20] + aot_fpr[12];
      if (branch_taken) {
          goto L_088092A0;
      }
      goto L_08809284;
    }
L_08809284:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(189)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088092A0;
      }
      goto L_08809290;
    }
L_08809290:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088092A0;
      }
      goto L_0880929C;
    }
L_0880929C:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    goto L_088092A0;
L_088092A0:
    aot_gpr[31] = (0x088092A8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 133u, 0x0880BA10u>(ctx, &aot_mem) && ctx.pc == 0x088092A8u) goto L_088092A8;
    return;
L_088092A8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088092D4;
      }
      goto L_088092B0;
    }
L_088092B0:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088092D4;
      }
      goto L_088092B8;
    }
L_088092B8:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088092CC;
      }
      goto L_088092C4;
    }
L_088092C4:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088092CC;
      }
      goto L_088092CC;
    }
L_088092CC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
      if (branch_taken) {
          goto L_088096C8;
      }
      goto L_088092D4;
    }
L_088092D4:
    aot_gpr[31] = (0x088092DCu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 134u, 0x0880BA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088092DCu) goto L_088092DC;
    return;
L_088092DC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088096B4;
      }
      goto L_088092E4;
    }
L_088092E4:
    { const bool branch_taken = aot_gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088092F8;
      }
      goto L_088092EC;
    }
L_088092EC:
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(240), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_088096C8;
      }
      goto L_088092F8;
    }
L_088092F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880931C;
      }
      goto L_08809304;
    }
L_08809304:
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (49024u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(240), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(248), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088096C8;
      }
      goto L_0880931C;
    }
L_0880931C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(240)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08809360;
      }
      goto L_08809330;
    }
L_08809330:
    aot_gpr[4] = (0u | 1u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(240)));
    if (aot_gpr[22] != 0u) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
        goto L_08809348;
    }
    goto L_08809348;
L_08809348:
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[4] = (49024u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(248), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(240), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088096C8;
      }
      goto L_08809360;
    }
L_08809360:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08809380;
      }
      goto L_08809368;
    }
L_08809368:
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (49024u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(240), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(248), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088096C8;
      }
      goto L_08809380;
    }
L_08809380:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(248)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(240), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_088093AC;
      }
      goto L_08809394;
    }
L_08809394:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088096AC;
      }
      goto L_088093AC;
    }
L_088093AC:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[30] | aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088093D4;
      }
      goto L_088093BC;
    }
L_088093BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08809694;
      }
      goto L_088093D4;
    }
L_088093D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[21] | aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[16]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088096C8;
      }
      goto L_088093E8;
    }
L_088093E8:
    aot_gpr[4] = (15887u << 16u);
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[4] | 23593u);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_fpr[26] = aot_fpr[28] - aot_fpr[26];
      if (branch_taken) {
          goto L_08809414;
      }
      goto L_08809404;
    }
L_08809404:
    aot_gpr[4] = (15918u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 5243u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_088094A4;
      }
      goto L_08809414;
    }
L_08809414:
    aot_gpr[31] = (0x0880941Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 137u, 0x0880BA4Cu>(ctx, &aot_mem) && ctx.pc == 0x0880941Cu) goto L_0880941C;
    return;
L_0880941C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08809434;
      }
      goto L_08809424;
    }
L_08809424:
    aot_gpr[31] = (0x0880942Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 135u, 0x0880BA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0880942Cu) goto L_0880942C;
    return;
L_0880942C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880944C;
      }
      goto L_08809434;
    }
L_08809434:
    aot_gpr[4] = (15820u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16384u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_088094A4;
      }
      goto L_0880944C;
    }
L_0880944C:
    aot_gpr[31] = (0x08809454u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 136u, 0x0880BA3Cu>(ctx, &aot_mem) && ctx.pc == 0x08809454u) goto L_08809454;
    return;
L_08809454:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880946C;
      }
      goto L_0880945C;
    }
L_0880945C:
    aot_gpr[31] = (0x08809464u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 143u, 0x0880BAACu>(ctx, &aot_mem) && ctx.pc == 0x08809464u) goto L_08809464;
    return;
L_08809464:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088094A4;
      }
      goto L_0880946C;
    }
L_0880946C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (16726u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(380)));
    aot_gpr[4] = (aot_gpr[5] | 36700u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088094A4;
      }
      goto L_08809490;
    }
L_08809490:
    aot_gpr[4] = (16025u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16672u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    goto L_088094A4;
L_088094A4:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (15897u << 16u);
      if (branch_taken) {
          goto L_088094BC;
      }
      goto L_088094AC;
    }
L_088094AC:
    aot_gpr[4] = (17096u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (15897u << 16u);
    goto L_088094BC;
L_088094BC:
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(184)));
    aot_fpr[12] = aot_fpr[28] - aot_fpr[12];
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880968C;
      }
      goto L_088094E4;
    }
L_088094E4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((aot_fpr[22] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880968C;
      }
      goto L_088094F8;
    }
L_088094F8:
    aot_gpr[4] = (16221u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 45613u);
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_08809510;
      }
      goto L_08809508;
    }
L_08809508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088095A0;
      }
      goto L_08809510;
    }
L_08809510:
    aot_gpr[31] = (0x08809518u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 137u, 0x0880BA4Cu>(ctx, &aot_mem) && ctx.pc == 0x08809518u) goto L_08809518;
    return;
L_08809518:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08809540;
      }
      goto L_08809520;
    }
L_08809520:
    aot_gpr[31] = (0x08809528u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 135u, 0x0880BA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08809528u) goto L_08809528;
    return;
L_08809528:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08809540;
      }
      goto L_08809530;
    }
L_08809530:
    aot_gpr[31] = (0x08809538u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 138u, 0x0880BA5Cu>(ctx, &aot_mem) && ctx.pc == 0x08809538u) goto L_08809538;
    return;
L_08809538:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08809550;
      }
      goto L_08809540;
    }
L_08809540:
    aot_gpr[4] = (16252u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 10486u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_088095A0;
      }
      goto L_08809550;
    }
L_08809550:
    aot_gpr[31] = (0x08809558u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 136u, 0x0880BA3Cu>(ctx, &aot_mem) && ctx.pc == 0x08809558u) goto L_08809558;
    return;
L_08809558:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08809570;
      }
      goto L_08809560;
    }
L_08809560:
    aot_gpr[31] = (0x08809568u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 143u, 0x0880BAACu>(ctx, &aot_mem) && ctx.pc == 0x08809568u) goto L_08809568;
    return;
L_08809568:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088095A0;
      }
      goto L_08809570;
    }
L_08809570:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (16726u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(380)));
    aot_gpr[4] = (aot_gpr[5] | 36700u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088095A0;
      }
      goto L_08809594;
    }
L_08809594:
    aot_gpr[4] = (16217u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    goto L_088095A0;
L_088095A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088095B8;
      }
      goto L_088095AC;
    }
L_088095AC:
    aot_gpr[4] = (16192u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    goto L_088095B8;
L_088095B8:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (16000u << 16u);
      if (branch_taken) {
          goto L_088095CC;
      }
      goto L_088095C0;
    }
L_088095C0:
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16000u << 16u);
    goto L_088095CC;
L_088095CC:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[28];
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880968C;
      }
      goto L_088095F4;
    }
L_088095F4:
    aot_gpr[4] = (16204u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0880968C;
      }
      goto L_08809614;
    }
L_08809614:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7516)));
    aot_gpr[31] = (0x0880962Cu);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0880962Cu) goto L_0880962C;
    return;
L_0880962C:
    aot_gpr[4] = (16076u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (16230u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 26214u);
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[24]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(240), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0880968C;
      }
      goto L_0880965C;
    }
L_0880965C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7516)));
    aot_gpr[31] = (0x08809668u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x08809668u) goto L_08809668;
    return;
L_08809668:
    aot_gpr[4] = (15820u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (16199u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 44564u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(248), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0880968C;
L_0880968C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088096C8;
      }
      goto L_08809694;
    }
L_08809694:
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (49024u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(240), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(248), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088096C8;
      }
      goto L_088096AC;
    }
L_088096AC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088096C8;
      }
      goto L_088096B4;
    }
L_088096B4:
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (49024u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(240), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(248), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088096C8;
L_088096C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08809724;
      }
      goto L_088096D4;
    }
L_088096D4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (16000u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08809724;
      }
      goto L_088096F0;
    }
L_088096F0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7516)));
    aot_gpr[31] = (0x08809700u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x08809700u) goto L_08809700;
    return;
L_08809700:
    aot_gpr[4] = (15820u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52424u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (16204u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(248), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08809724;
L_08809724:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880976C:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(21264)));
    aot_fpr[13] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_gpr[7] = (49024u << 16u);
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(-7648));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-7648), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(21240), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(21268), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809818:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(388)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(388)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08809860;
      }
      goto L_08809848;
    }
L_08809848:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08809868;
      }
      goto L_08809858;
    }
L_08809858:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0880986C;
      }
      goto L_08809860;
    }
L_08809860:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880986C;
      }
      goto L_08809868;
    }
L_08809868:
    aot_gpr[2] = (0u | 0u);
    goto L_0880986C;
L_0880986C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809874:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-14456));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[7] = (2176u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (0u | 12u);
    aot_gpr[6] = (0u | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088098A8u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(17460));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x088098A8u) goto L_088098A8;
    return;
L_088098A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(456), 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (17530u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(552), aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(556), aot_gpr[4]);
    aot_gpr[5] = (16128u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(460), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(464), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (15820u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(476), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(480), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(564), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(488), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(496), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(500), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(568), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(560), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(508), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(512), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(504), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(492), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(516), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(548), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(520), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(536), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(540), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(524), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(528), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(544), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809948:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(572), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(576), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(580), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809958:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(460), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(464), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(468), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[5] = (16128u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(472), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[13] = aot_fpr[14] + aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(476), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(480), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(484), __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(496), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(500), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809998:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(456)));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(452)));
    aot_gpr[6] = (aot_gpr[18] << 7u);
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[18] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[31] = (0x088099DCu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 115u, 0x088B4990u>(ctx, &aot_mem) && ctx.pc == 0x088099DCu) goto L_088099DC;
    return;
L_088099DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(456)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08809A3C;
      }
      goto L_08809A10;
    }
L_08809A10:
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[4]);
    goto L_08809A14;
L_08809A14:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[6] = (aot_gpr[6] << 24u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 24u));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[4]);
      if (branch_taken) {
          goto L_08809A14;
      }
      goto L_08809A3C;
    }
L_08809A3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(456)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(456), aot_gpr[4]);
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
L_08809A60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(564), static_cast<std::uint8_t>(0u));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(565), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(552), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(556), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(488), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (17530u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(568), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(496), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(500), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(508), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(512), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(504), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(560), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(492), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(516), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (0u | 0u);
    goto L_08809AC8;
L_08809AC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(452)));
    aot_gpr[31] = (0x08809AD4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 115u, 0x088B4990u>(ctx, &aot_mem) && ctx.pc == 0x08809AD4u) goto L_08809AD4;
    return;
L_08809AD4:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_08809AC8;
      }
      goto L_08809AE4;
    }
L_08809AE4:
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
L_08809AFC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28040)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[7] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
        goto L_08809B14;
    }
    goto L_08809B14;
L_08809B14:
    aot_gpr[10] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[10] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08809B60;
      }
      goto L_08809B24;
    }
L_08809B24:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[9]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(168));
    goto L_08809B3C;
L_08809B3C:
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[8]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08809B3C;
      }
      goto L_08809B50;
    }
L_08809B50:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[10] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08809B24;
      }
      goto L_08809B60;
    }
L_08809B60:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(548), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809B68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08809B8Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7512)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 253u, 0x088BEF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08809B8Cu) goto L_08809B8C;
    return;
L_08809B8C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (16100u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1452)));
    aot_gpr[4] = (aot_gpr[4] | 57967u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1456)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (2218u << 16u);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1460)));
    aot_gpr[31] = (0x08809BBCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7520)));
    goto L_08809948;
L_08809BBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(456), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7520)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4056)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4060)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4064)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4068)));
    aot_gpr[5] = (15907u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4072)));
    aot_gpr[5] = (aot_gpr[5] | 55050u);
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4080)));
    aot_gpr[31] = (0x08809BECu);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[5]);
    goto L_08809958;
L_08809BEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1464)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08809C2C;
      }
      goto L_08809C00;
    }
L_08809C00:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08809C0Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 249u, 0x088BEED4u>(ctx, &aot_mem) && ctx.pc == 0x08809C0Cu) goto L_08809C0C;
    return;
L_08809C0C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08809C18u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_08809998;
L_08809C18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1464)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08809C00;
      }
      goto L_08809C2C;
    }
L_08809C2C:
    aot_gpr[31] = (0x08809C34u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08809A60;
L_08809C34:
    aot_gpr[31] = (0x08809C3Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08809AFC;
L_08809C3C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4084)));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28152), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
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
L_08809C60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    goto L_08809C74;
L_08809C74:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08809C74;
      }
      goto L_08809C88;
    }
L_08809C88:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[31] = (0x08809CA0u);
    aot_gpr[6] = (0u | 1408u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x08809CA0u) goto L_08809CA0;
    return;
L_08809CA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(452), aot_gpr[2]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809CB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28040)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(548)));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(548), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08809D00;
      }
      goto L_08809CE8;
    }
L_08809CE8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08809CF8;
      }
      goto L_08809CF0;
    }
L_08809CF0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    goto L_08809CF8;
L_08809CF8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(548), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08809D00;
L_08809D00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(548)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (16197u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 7864u);
    aot_gpr[5] = (0u | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(168));
    goto L_08809D28;
L_08809D28:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 8 ? 1u : 0u);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08809D28;
      }
      goto L_08809D54;
    }
L_08809D54:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[6] = (0u | 255u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (0u | 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[8] = (0u | 3u);
    aot_gpr[31] = (0x08809D80u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(348)));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 48u, 0x088BD3A0u>(ctx, &aot_mem) && ctx.pc == 0x08809D80u) goto L_08809D80;
    return;
L_08809D80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(564)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08809DDC;
      }
      goto L_08809D8C;
    }
L_08809D8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(456)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08809DDC;
      }
      goto L_08809DA0;
    }
L_08809DA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(452)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08809DCC;
      }
      goto L_08809DB4;
    }
L_08809DB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(348)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 255u);
    aot_gpr[7] = (0u | 2u);
    aot_gpr[31] = (0x08809DCCu);
    aot_gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 48u, 0x088BD3A0u>(ctx, &aot_mem) && ctx.pc == 0x08809DCCu) goto L_08809DCC;
    return;
L_08809DCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(456)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_08809DA0;
      }
      goto L_08809DDC;
    }
L_08809DDC:
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
L_08809DF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7504));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (16076u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] | 52429u);
    aot_gpr[7] = (16256u << 16u);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
      if (branch_taken) {
          goto L_08809E30;
      }
      goto L_08809E24;
    }
L_08809E24:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[15] = aot_fpr[15] + aot_fpr[13];
    goto L_08809E30;
L_08809E30:
    aot_gpr[5] = (14979u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 4719u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(524)));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[15] = aot_fpr[15] / aot_fpr[16];
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
        goto L_08809E60;
    }
    goto L_08809E58;
L_08809E58:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08809E70;
      }
      goto L_08809E60;
    }
L_08809E60:
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_08809E70;
    }
    goto L_08809E70;
L_08809E70:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(492)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08809E90;
      }
      goto L_08809E88;
    }
L_08809E88:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08809E98;
      }
      goto L_08809E90;
    }
L_08809E90:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08809E98;
L_08809E98:
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
        goto L_08809EB0;
    }
    goto L_08809EA8;
L_08809EA8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08809EC0;
      }
      goto L_08809EB0;
    }
L_08809EB0:
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_08809EC0;
    }
    goto L_08809EC0;
L_08809EC0:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(532), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08809EEC;
      }
      goto L_08809ED8;
    }
L_08809ED8:
    aot_fpr[14] = aot_fpr[14] - aot_fpr[15];
    aot_gpr[5] = (16416u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
      if (branch_taken) {
          goto L_08809EF0;
      }
      goto L_08809EEC;
    }
L_08809EEC:
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    goto L_08809EF0;
L_08809EF0:
    aot_gpr[5] = (16128u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_gpr[5] = (16192u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[15] = aot_fpr[15] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[14] = aot_fpr[16] - aot_fpr[14];
      if (branch_taken) {
          goto L_08809F28;
      }
      goto L_08809F18;
    }
L_08809F18:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(536), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(540), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08809FBC;
      }
      goto L_08809F28;
    }
L_08809F28:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
        goto L_08809F7C;
    }
    goto L_08809F38;
L_08809F38:
    aot_fpr[13] = aot_fpr[13] - aot_fpr[15];
    aot_fpr[14] = aot_fpr[14] - aot_fpr[15];
    aot_fpr[14] = aot_fpr[13] / aot_fpr[14];
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(536), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_08809F60;
      }
      goto L_08809F58;
    }
L_08809F58:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08809F70;
      }
      goto L_08809F60;
    }
L_08809F60:
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_08809F70;
    }
    goto L_08809F70;
L_08809F70:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(536), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(540), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08809FBC;
      }
      goto L_08809F7C;
    }
L_08809F7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(536), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[14] = aot_fpr[12] - aot_fpr[14];
    aot_fpr[13] = aot_fpr[13] / aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(540), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08809FA0;
      }
      goto L_08809F98;
    }
L_08809F98:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(540), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08809FBC;
      }
      goto L_08809FA0;
    }
L_08809FA0:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_08809FB8;
    }
    goto L_08809FB8;
L_08809FB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(540), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08809FBC;
L_08809FBC:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809FC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7504));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[20] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[20])));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 2u, 0x0880A004u>(ctx, &aot_mem); return;
      }
      goto L_08809FF8;
    }
L_08809FF8:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.pc = 0x0880A000u; return;
}

void recomp_unit_0005(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0005_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_5(Runtime &runtime) {
    runtime.register_generated_unit(5u, 0x08809000u, 4096u, &recomp_unit_0005, &recomp_unit_0005_entry);
    runtime.register_function(0x08809000u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809024u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809030u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809034u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809060u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809078u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809088u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088090A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088090BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088090C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088090CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809100u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809128u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809158u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809168u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0880916Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809170u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088091E0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088091F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0880920Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0880921Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809220u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809240u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0880925Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809260u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809264u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809284u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809290u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0880929Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088092A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088092A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088092B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088092B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088092C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088092CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088092D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088092DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088092E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088092ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088092F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809304u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0880931Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809330u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809348u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809360u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809368u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809380u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809394u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088093ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088093BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088093D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088093E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809404u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809414u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0880941Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809424u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0880942Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809434u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0880944Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809454u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0880945Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809464u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0880946Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809490u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088094A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088094ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088094BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088094E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088094F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809508u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809510u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809518u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809520u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809528u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809530u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809538u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809540u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809550u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809558u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809560u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809568u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809570u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809594u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088095A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088095ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088095B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088095C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088095CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088095F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809614u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0880962Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0880965Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809668u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0880968Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809694u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088096ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088096B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088096C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088096D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088096F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809700u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809724u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0880976Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809818u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809848u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809858u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809860u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809868u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0880986Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809874u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088098A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809948u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809958u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809998u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088099DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809A10u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809A14u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809A3Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809A60u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809AC8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809AD4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809AE4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809AFCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809B14u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809B24u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809B3Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809B50u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809B60u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809B68u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809B8Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809BBCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809BECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809C00u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809C0Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809C18u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809C2Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809C34u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809C3Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809C60u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809C74u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809C88u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809CA0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809CB4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809CE8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809CF0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809CF8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809D00u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809D28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809D54u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809D80u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809D8Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809DA0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809DB4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809DCCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809DDCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809DF4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809E24u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809E30u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809E58u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809E60u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809E70u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809E88u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809E90u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809E98u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809EA8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809EB0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809EC0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809ED8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809EECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809EF0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809F18u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809F28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809F38u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809F58u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809F60u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809F70u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809F7Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809F98u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809FA0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809FB8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809FBCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809FC4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08809FF8u, &recomp_unit_0005, "recomp_unit_0005");
}
} // namespace psprecomp
