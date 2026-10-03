#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0102[1022] = {
    1, 0, 0, 2, 0, 3, 4, 0, 5, 0, 6, 7, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 16,
    0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 21, 0, 22, 0, 23, 24, 0, 0, 0, 0,
    0, 25, 0, 26, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0,
    33, 0, 0, 0, 0, 34, 35, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 41, 42, 0,
    43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0,
    0, 0, 0, 49, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 54, 55, 0, 56, 0, 57, 0, 58,
    0, 0, 0, 0, 0, 59, 60, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 65, 66, 0, 67,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 71, 72, 0, 73, 0, 74, 0, 75, 76, 0, 77, 0, 0,
    0, 78, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 96,
    0, 0, 0, 0, 0, 97, 0, 98, 0, 99, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0,
    0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 109, 110, 111, 0, 0,
    112, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0, 120, 0, 0, 121, 0,
    0, 122, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 127, 0, 128, 0, 0, 129, 0, 130, 0, 0, 131, 0,
    132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 0, 139, 0,
    140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 144, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 154, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0,
    166, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 172, 173, 0, 174, 0, 0, 175, 0, 0, 0,
    0, 0, 0, 176, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 181, 0,
    0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 193, 0, 0, 0, 0, 0, 194,
    0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 198, 0, 0, 0, 0, 0, 0, 199, 200, 0, 0, 201, 0,
    0, 0, 0, 202, 203, 0, 0, 204, 0, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0,
    0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0,
    0, 215, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0,
    0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227,
};
void recomp_unit_0102_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0886A000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0102[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0886A000;
    case 2u: goto L_0886A00C;
    case 3u: goto L_0886A014;
    case 4u: goto L_0886A018;
    case 5u: goto L_0886A020;
    case 6u: goto L_0886A028;
    case 7u: goto L_0886A02C;
    case 8u: goto L_0886A038;
    case 9u: goto L_0886A04C;
    case 10u: goto L_0886A068;
    case 11u: goto L_0886A078;
    case 12u: goto L_0886A090;
    case 13u: goto L_0886A0A0;
    case 14u: goto L_0886A0C8;
    case 15u: goto L_0886A0F8;
    case 16u: goto L_0886A0FC;
    case 17u: goto L_0886A10C;
    case 18u: goto L_0886A118;
    case 19u: goto L_0886A138;
    case 20u: goto L_0886A154;
    case 21u: goto L_0886A158;
    case 22u: goto L_0886A160;
    case 23u: goto L_0886A168;
    case 24u: goto L_0886A16C;
    case 25u: goto L_0886A184;
    case 26u: goto L_0886A18C;
    case 27u: goto L_0886A194;
    case 28u: goto L_0886A1A8;
    case 29u: goto L_0886A1BC;
    case 30u: goto L_0886A1D0;
    case 31u: goto L_0886A1E4;
    case 32u: goto L_0886A1F8;
    case 33u: goto L_0886A200;
    case 34u: goto L_0886A214;
    case 35u: goto L_0886A218;
    case 36u: goto L_0886A22C;
    case 37u: goto L_0886A23C;
    case 38u: goto L_0886A248;
    case 39u: goto L_0886A268;
    case 40u: goto L_0886A270;
    case 41u: goto L_0886A274;
    case 42u: goto L_0886A278;
    case 43u: goto L_0886A280;
    case 44u: goto L_0886A29C;
    case 45u: goto L_0886A2A8;
    case 46u: goto L_0886A2C8;
    case 47u: goto L_0886A2F0;
    case 48u: goto L_0886A2F8;
    case 49u: goto L_0886A30C;
    case 50u: goto L_0886A310;
    case 51u: goto L_0886A318;
    case 52u: goto L_0886A344;
    case 53u: goto L_0886A34C;
    case 54u: goto L_0886A360;
    case 55u: goto L_0886A364;
    case 56u: goto L_0886A36C;
    case 57u: goto L_0886A374;
    case 58u: goto L_0886A37C;
    case 59u: goto L_0886A394;
    case 60u: goto L_0886A398;
    case 61u: goto L_0886A3A4;
    case 62u: goto L_0886A3AC;
    case 63u: goto L_0886A3D4;
    case 64u: goto L_0886A3DC;
    case 65u: goto L_0886A3F0;
    case 66u: goto L_0886A3F4;
    case 67u: goto L_0886A3FC;
    case 68u: goto L_0886A400;
    case 69u: goto L_0886A430;
    case 70u: goto L_0886A438;
    case 71u: goto L_0886A44C;
    case 72u: goto L_0886A450;
    case 73u: goto L_0886A458;
    case 74u: goto L_0886A460;
    case 75u: goto L_0886A468;
    case 76u: goto L_0886A46C;
    case 77u: goto L_0886A474;
    case 78u: goto L_0886A484;
    case 79u: goto L_0886A488;
    case 80u: goto L_0886A4BC;
    case 81u: goto L_0886A4D0;
    case 82u: goto L_0886A514;
    case 83u: goto L_0886A528;
    case 84u: goto L_0886A53C;
    case 85u: goto L_0886A554;
    case 86u: goto L_0886A564;
    case 87u: goto L_0886A58C;
    case 88u: goto L_0886A5A4;
    case 89u: goto L_0886A5AC;
    case 90u: goto L_0886A5E0;
    case 91u: goto L_0886A600;
    case 92u: goto L_0886A61C;
    case 93u: goto L_0886A650;
    case 94u: goto L_0886A660;
    case 95u: goto L_0886A668;
    case 96u: goto L_0886A67C;
    case 97u: goto L_0886A694;
    case 98u: goto L_0886A69C;
    case 99u: goto L_0886A6A4;
    case 100u: goto L_0886A6B0;
    case 101u: goto L_0886A6C0;
    case 102u: goto L_0886A6D4;
    case 103u: goto L_0886A704;
    case 104u: goto L_0886A778;
    case 105u: goto L_0886A78C;
    case 106u: goto L_0886A7A4;
    case 107u: goto L_0886A7E0;
    case 108u: goto L_0886A7E8;
    case 109u: goto L_0886A7EC;
    case 110u: goto L_0886A7F0;
    case 111u: goto L_0886A7F4;
    case 112u: goto L_0886A800;
    case 113u: goto L_0886A808;
    case 114u: goto L_0886A814;
    case 115u: goto L_0886A820;
    case 116u: goto L_0886A830;
    case 117u: goto L_0886A850;
    case 118u: goto L_0886A85C;
    case 119u: goto L_0886A864;
    case 120u: goto L_0886A86C;
    case 121u: goto L_0886A878;
    case 122u: goto L_0886A884;
    case 123u: goto L_0886A890;
    case 124u: goto L_0886A8A0;
    case 125u: goto L_0886A8BC;
    case 126u: goto L_0886A8C4;
    case 127u: goto L_0886A8D0;
    case 128u: goto L_0886A8D8;
    case 129u: goto L_0886A8E4;
    case 130u: goto L_0886A8EC;
    case 131u: goto L_0886A8F8;
    case 132u: goto L_0886A900;
    case 133u: goto L_0886A924;
    case 134u: goto L_0886A92C;
    case 135u: goto L_0886A93C;
    case 136u: goto L_0886A954;
    case 137u: goto L_0886A95C;
    case 138u: goto L_0886A96C;
    case 139u: goto L_0886A978;
    case 140u: goto L_0886A980;
    case 141u: goto L_0886A998;
    case 142u: goto L_0886A9B4;
    case 143u: goto L_0886A9BC;
    case 144u: goto L_0886A9CC;
    case 145u: goto L_0886A9D0;
    case 146u: goto L_0886AA10;
    case 147u: goto L_0886AA18;
    case 148u: goto L_0886AA28;
    case 149u: goto L_0886AA58;
    case 150u: goto L_0886AA64;
    case 151u: goto L_0886AA70;
    case 152u: goto L_0886AA9C;
    case 153u: goto L_0886AAA8;
    case 154u: goto L_0886AAAC;
    case 155u: goto L_0886AAB0;
    case 156u: goto L_0886AAD4;
    case 157u: goto L_0886AAE4;
    case 158u: goto L_0886AAF0;
    case 159u: goto L_0886AB10;
    case 160u: goto L_0886AB20;
    case 161u: goto L_0886AB28;
    case 162u: goto L_0886AB34;
    case 163u: goto L_0886AB54;
    case 164u: goto L_0886AB64;
    case 165u: goto L_0886AB6C;
    case 166u: goto L_0886AB80;
    case 167u: goto L_0886AB8C;
    case 168u: goto L_0886AB9C;
    case 169u: goto L_0886ABAC;
    case 170u: goto L_0886ABB4;
    case 171u: goto L_0886ABC8;
    case 172u: goto L_0886ABD8;
    case 173u: goto L_0886ABDC;
    case 174u: goto L_0886ABE4;
    case 175u: goto L_0886ABF0;
    case 176u: goto L_0886AC0C;
    case 177u: goto L_0886AC14;
    case 178u: goto L_0886AC24;
    case 179u: goto L_0886AC58;
    case 180u: goto L_0886AC6C;
    case 181u: goto L_0886AC78;
    case 182u: goto L_0886AC84;
    case 183u: goto L_0886AC90;
    case 184u: goto L_0886ACB0;
    case 185u: goto L_0886ACB8;
    case 186u: goto L_0886ACE0;
    case 187u: goto L_0886ACF0;
    case 188u: goto L_0886AD08;
    case 189u: goto L_0886AD14;
    case 190u: goto L_0886AD28;
    case 191u: goto L_0886AD50;
    case 192u: goto L_0886AD60;
    case 193u: goto L_0886AD64;
    case 194u: goto L_0886AD7C;
    case 195u: goto L_0886AD9C;
    case 196u: goto L_0886ADBC;
    case 197u: goto L_0886ADC8;
    case 198u: goto L_0886ADCC;
    case 199u: goto L_0886ADE8;
    case 200u: goto L_0886ADEC;
    case 201u: goto L_0886ADF8;
    case 202u: goto L_0886AE0C;
    case 203u: goto L_0886AE10;
    case 204u: goto L_0886AE1C;
    case 205u: goto L_0886AE2C;
    case 206u: goto L_0886AE38;
    case 207u: goto L_0886AE44;
    case 208u: goto L_0886AE6C;
    case 209u: goto L_0886AE8C;
    case 210u: goto L_0886AEB4;
    case 211u: goto L_0886AEC0;
    case 212u: goto L_0886AED4;
    case 213u: goto L_0886AEE8;
    case 214u: goto L_0886AEF0;
    case 215u: goto L_0886AF04;
    case 216u: goto L_0886AF08;
    case 217u: goto L_0886AF18;
    case 218u: goto L_0886AF30;
    case 219u: goto L_0886AF48;
    case 220u: goto L_0886AF5C;
    case 221u: goto L_0886AF64;
    case 222u: goto L_0886AF84;
    case 223u: goto L_0886AF94;
    case 224u: goto L_0886AFA0;
    case 225u: goto L_0886AFAC;
    case 226u: goto L_0886AFE8;
    case 227u: goto L_0886AFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0886A000:
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(128), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0886A018;
      }
      goto L_0886A00C;
    }
L_0886A00C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0886A018;
      }
      goto L_0886A014;
    }
L_0886A014:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(128), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_0886A018;
L_0886A018:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A02C;
      }
      goto L_0886A020;
    }
L_0886A020:
    aot_gpr[31] = (0x0886A028u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 172u, 0x08869DC0u>(ctx, &aot_mem) && ctx.pc == 0x0886A028u) goto L_0886A028;
    return;
L_0886A028:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(148))))));
    goto L_0886A02C;
L_0886A02C:
    aot_gpr[4] = (0u | 5u);
    if (aot_gpr[5] != aot_gpr[4]) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(172)));
        goto L_0886A0FC;
    }
    goto L_0886A038;
L_0886A038:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[20])) && aot_fpr[12] == aot_fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(172)));
        goto L_0886A0FC;
    }
    goto L_0886A04C;
L_0886A04C:
    aot_gpr[4] = (16153u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886A078;
      }
      goto L_0886A068;
    }
L_0886A068:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7652)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = aot_fpr[20] + aot_fpr[12];
      if (branch_taken) {
          goto L_0886A078;
      }
      goto L_0886A078;
    }
L_0886A078:
    aot_gpr[4] = (16416u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_0886A0F8;
      }
      goto L_0886A090;
    }
L_0886A090:
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[31] = (0x0886A0A0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0886A0A0u) goto L_0886A0A0;
    return;
L_0886A0A0:
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(148))))));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[31] = (0x0886A0C8u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0886A0C8u) goto L_0886A0C8;
    return;
L_0886A0C8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (16000u << 16u);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (0u | 1u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(181), static_cast<std::uint8_t>(aot_gpr[4]));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[13] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0886A0F8;
L_0886A0F8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(172)));
    goto L_0886A0FC;
L_0886A0FC:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(172), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0886A118;
      }
      goto L_0886A10C;
    }
L_0886A10C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0886A118;
L_0886A118:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A138:
    aot_gpr[9] = (aot_gpr[6] & 255u);
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_gpr[8] = (aot_gpr[7] & 255u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(149))))));
    aot_gpr[7] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0886A158;
      }
      goto L_0886A154;
    }
L_0886A154:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(136), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0886A158;
L_0886A158:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[7];
    aot_gpr[10] = (0u | 2u);
      if (branch_taken) {
          goto L_0886A168;
      }
      goto L_0886A160;
    }
L_0886A160:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[10];
    // nop
      if (branch_taken) {
          goto L_0886A16C;
      }
      goto L_0886A168;
    }
L_0886A168:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(136), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0886A16C;
L_0886A16C:
    aot_gpr[10] = (16153u << 16u);
    aot_gpr[10] = (aot_gpr[10] | 39322u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[10]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(181)));
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A18C;
      }
      goto L_0886A184;
    }
L_0886A184:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(204)));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    goto L_0886A18C;
L_0886A18C:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A1A8;
      }
      goto L_0886A194;
    }
L_0886A194:
    aot_gpr[5] = (16486u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 26214u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    goto L_0886A1A8;
L_0886A1A8:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[14]) || std::isnan(aot_fpr[13])) && aot_fpr[14] == aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886A278;
      }
      goto L_0886A1BC;
    }
L_0886A1BC:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[14]) || std::isnan(aot_fpr[13])) && aot_fpr[14] == aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886A278;
      }
      goto L_0886A1D0;
    }
L_0886A1D0:
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[17]) || std::isnan(aot_fpr[13])) && aot_fpr[17] == aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
      if (branch_taken) {
          goto L_0886A248;
      }
      goto L_0886A1E4;
    }
L_0886A1E4:
    aot_fpr[12] = aot_fpr[12] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886A200;
      }
      goto L_0886A1F8;
    }
L_0886A1F8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
      if (branch_taken) {
          goto L_0886A218;
      }
      goto L_0886A200;
    }
L_0886A200:
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]) ^ 0x80000000u);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886A218;
      }
      goto L_0886A214;
    }
L_0886A214:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    goto L_0886A218;
L_0886A218:
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[15]) || std::isnan(aot_fpr[13])) && aot_fpr[15] == aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[12] - aot_fpr[16];
        goto L_0886A23C;
    }
    goto L_0886A22C;
L_0886A22C:
    aot_gpr[5] = (16128u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] - aot_fpr[16];
    goto L_0886A23C;
L_0886A23C:
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0886A278;
      }
      goto L_0886A248;
    }
L_0886A248:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[9] = (16051u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(72)));
    aot_gpr[5] = (aot_gpr[9] | 13107u);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[15]) || std::isnan(aot_fpr[13])) && aot_fpr[15] == aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
      if (branch_taken) {
          goto L_0886A270;
      }
      goto L_0886A268;
    }
L_0886A268:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[14] = aot_fpr[14] + aot_fpr[12];
      if (branch_taken) {
          goto L_0886A274;
      }
      goto L_0886A270;
    }
L_0886A270:
    aot_fpr[14] = aot_fpr[14] - aot_fpr[12];
    goto L_0886A274;
L_0886A274:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_0886A278;
L_0886A278:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A29C;
      }
      goto L_0886A280;
    }
L_0886A280:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (16128u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0886A29C;
L_0886A29C:
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0886A36C;
      }
      goto L_0886A2A8;
    }
L_0886A2A8:
    aot_gpr[7] = (16256u << 16u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(148))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[7] = (17096u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[7]);
      if (branch_taken) {
          goto L_0886A318;
      }
      goto L_0886A2C8;
    }
L_0886A2C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(736)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(188)));
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] / aot_fpr[15];
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_0886A2F8;
      }
      goto L_0886A2F0;
    }
L_0886A2F0:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0886A310;
      }
      goto L_0886A2F8;
    }
L_0886A2F8:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_0886A30C;
    }
    goto L_0886A30C;
L_0886A30C:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0886A310;
L_0886A310:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A364;
      }
      goto L_0886A318;
    }
L_0886A318:
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) & 0x7FFFFFFFu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(736)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(192)));
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] / aot_fpr[15];
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_0886A34C;
      }
      goto L_0886A344;
    }
L_0886A344:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0886A364;
      }
      goto L_0886A34C;
    }
L_0886A34C:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_0886A360;
    }
    goto L_0886A360;
L_0886A360:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0886A364;
L_0886A364:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A46C;
      }
      goto L_0886A36C;
    }
L_0886A36C:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[7];
    aot_gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_0886A458;
      }
      goto L_0886A374;
    }
L_0886A374:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0886A458;
      }
      goto L_0886A37C;
    }
L_0886A37C:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(148))))));
    aot_gpr[8] = (16256u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
      if (branch_taken) {
          goto L_0886A398;
      }
      goto L_0886A394;
    }
L_0886A394:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    goto L_0886A398;
L_0886A398:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 6 ? 1u : 0u);
    if (aot_gpr[6] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
        goto L_0886A400;
    }
    goto L_0886A3A4;
L_0886A3A4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    aot_gpr[5] = (aot_gpr[5] << 2u);
      if (branch_taken) {
          goto L_0886A3FC;
      }
      goto L_0886A3AC;
    }
L_0886A3AC:
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_fpr[14] = aot_fpr[14] - aot_fpr[15];
    aot_fpr[15] = aot_fpr[16] - aot_fpr[15];
    aot_fpr[14] = aot_fpr[14] / aot_fpr[15];
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_0886A3DC;
      }
      goto L_0886A3D4;
    }
L_0886A3D4:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0886A3F4;
      }
      goto L_0886A3DC;
    }
L_0886A3DC:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_0886A3F0;
    }
    goto L_0886A3F0;
L_0886A3F0:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0886A3F4;
L_0886A3F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A450;
      }
      goto L_0886A3FC;
    }
L_0886A3FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    goto L_0886A400;
L_0886A400:
    aot_gpr[6] = (17096u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(736)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(192)));
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] / aot_fpr[15];
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_0886A438;
      }
      goto L_0886A430;
    }
L_0886A430:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0886A450;
      }
      goto L_0886A438;
    }
L_0886A438:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_0886A44C;
    }
    goto L_0886A44C;
L_0886A44C:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0886A450;
L_0886A450:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_0886A46C;
      }
      goto L_0886A458;
    }
L_0886A458:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    aot_gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_0886A468;
      }
      goto L_0886A460;
    }
L_0886A460:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0886A46C;
      }
      goto L_0886A468;
    }
L_0886A468:
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[4]);
    goto L_0886A46C;
L_0886A46C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A474:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_0886A564;
      }
      goto L_0886A484;
    }
L_0886A484:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    goto L_0886A488;
L_0886A488:
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[7] = (15820u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(136)));
    aot_gpr[6] = (aot_gpr[7] | 52429u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[16] < aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_0886A514;
      }
      goto L_0886A4BC;
    }
L_0886A4BC:
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886A514;
      }
      goto L_0886A4D0;
    }
L_0886A4D0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(136)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    aot_fpr[12] = aot_fpr[12] - aot_fpr[14];
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25116));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[15] = aot_fpr[15] - aot_fpr[12];
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
      if (branch_taken) {
          goto L_0886A564;
      }
      goto L_0886A514;
    }
L_0886A514:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[6] = (16256u << 16u);
      if (branch_taken) {
          goto L_0886A554;
      }
      goto L_0886A528;
    }
L_0886A528:
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[14])) && aot_fpr[13] == aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886A554;
      }
      goto L_0886A53C;
    }
L_0886A53C:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25116));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0886A564;
      }
      goto L_0886A554;
    }
L_0886A554:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 10 ? 1u : 0u);
    if (aot_gpr[6] != 0u) {
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
        goto L_0886A488;
    }
    goto L_0886A564;
L_0886A564:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(108), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (16250u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] | 57672u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0886A5A4;
      }
      goto L_0886A58C;
    }
L_0886A58C:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
        goto L_0886A5A4;
    }
    goto L_0886A5A4;
L_0886A5A4:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(108), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A5AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(64), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A5E0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25112), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A600:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0886A61Cu);
    aot_gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0886A61Cu) goto L_0886A61C;
    return;
L_0886A61C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(112), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (49024u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(138), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A650:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_0886A6A4;
      }
      goto L_0886A660;
    }
L_0886A660:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A6A4;
      }
      goto L_0886A668;
    }
L_0886A668:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A69C;
      }
      goto L_0886A67C;
    }
L_0886A67C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0886A694u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886A694u) goto L_0886A694;
    return;
L_0886A694:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A6A4;
      }
      goto L_0886A69C;
    }
L_0886A69C:
    aot_gpr[31] = (0x0886A6A4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0886A6A4u) goto L_0886A6A4;
    return;
L_0886A6A4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A6B0:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    goto L_0886A6C0;
L_0886A6C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886A6C0;
      }
      goto L_0886A6D4;
    }
L_0886A6D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(128), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (49024u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(112), 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(25164), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25168), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886A704:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(736)));
    aot_gpr[5] = (15820u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(4))))));
    aot_gpr[5] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (2215u << 16u);
      if (branch_taken) {
          goto L_0886A7F4;
      }
      goto L_0886A778;
    }
L_0886A778:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[7] = (16128u << 16u);
      if (branch_taken) {
          goto L_0886A7F0;
      }
      goto L_0886A78C;
    }
L_0886A78C:
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[14] = aot_fpr[12] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886A7F0;
      }
      goto L_0886A7A4;
    }
L_0886A7A4:
    aot_fpr[13] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[7] = (16281u << 16u);
    aot_gpr[7] = (aot_gpr[7] | 39322u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(140), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(140), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(736)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(10)));
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[7] = (aot_gpr[7] << 16u);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 16u));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0886A7E8;
      }
      goto L_0886A7E0;
    }
L_0886A7E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[6] | 8192u);
      if (branch_taken) {
          goto L_0886A7EC;
      }
      goto L_0886A7E8;
    }
L_0886A7E8:
    aot_gpr[6] = (aot_gpr[6] | 4096u);
    goto L_0886A7EC;
L_0886A7EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_0886A7F0;
L_0886A7F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0886A7F4;
L_0886A7F4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(179)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0886A808;
      }
      goto L_0886A800;
    }
L_0886A800:
    aot_gpr[6] = (aot_gpr[6] | 16384u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_0886A808;
L_0886A808:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(178)));
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A820;
      }
      goto L_0886A814;
    }
L_0886A814:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(185)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A830;
      }
      goto L_0886A820;
    }
L_0886A820:
    aot_gpr[6] = (aot_gpr[6] | 512u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(185)));
      if (branch_taken) {
          goto L_0886A85C;
      }
      goto L_0886A830;
    }
L_0886A830:
    aot_gpr[8] = (14979u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr[8] = (aot_gpr[8] | 4719u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[8]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886A85C;
      }
      goto L_0886A850;
    }
L_0886A850:
    aot_gpr[6] = (aot_gpr[6] | 1024u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(185)));
    goto L_0886A85C;
L_0886A85C:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A86C;
      }
      goto L_0886A864;
    }
L_0886A864:
    aot_gpr[6] = (aot_gpr[6] | 2048u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_0886A86C;
L_0886A86C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(183)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A884;
      }
      goto L_0886A878;
    }
L_0886A878:
    aot_gpr[7] = (2u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_0886A884;
L_0886A884:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(182)));
    if (aot_gpr[7] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_0886A8A0;
    }
    goto L_0886A890;
L_0886A890:
    aot_gpr[7] = (1u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_0886A8A0;
L_0886A8A0:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(60)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(64)));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[20])) && aot_fpr[13] == aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886A8C4;
      }
      goto L_0886A8BC;
    }
L_0886A8BC:
    aot_gpr[6] = (aot_gpr[6] | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_0886A8C4;
L_0886A8C4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(186)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A8D8;
      }
      goto L_0886A8D0;
    }
L_0886A8D0:
    aot_gpr[6] = (aot_gpr[6] | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_0886A8D8;
L_0886A8D8:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(148))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) >= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(112), aot_gpr[7]);
      if (branch_taken) {
          goto L_0886A8EC;
      }
      goto L_0886A8E4;
    }
L_0886A8E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(112), 0u);
    aot_gpr[7] = (0u | 0u);
    goto L_0886A8EC;
L_0886A8EC:
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[8] = (16u << 16u);
      if (branch_taken) {
          goto L_0886A900;
      }
      goto L_0886A8F8;
    }
L_0886A8F8:
    aot_gpr[7] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(112), aot_gpr[7]);
    goto L_0886A900;
L_0886A900:
    aot_gpr[8] = (aot_gpr[8] << (aot_gpr[7] & 31u));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(104), aot_gpr[7]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_0886A92C;
      }
      goto L_0886A924;
    }
L_0886A924:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
      if (branch_taken) {
          goto L_0886A93C;
      }
      goto L_0886A92C;
    }
L_0886A92C:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
        goto L_0886A93C;
    }
    goto L_0886A93C;
L_0886A93C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(136)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886A95C;
      }
      goto L_0886A954;
    }
L_0886A954:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
      if (branch_taken) {
          goto L_0886A96C;
      }
      goto L_0886A95C;
    }
L_0886A95C:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_0886A96C;
    }
    goto L_0886A96C;
L_0886A96C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886A9D0;
      }
      goto L_0886A978;
    }
L_0886A978:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886A9D0;
      }
      goto L_0886A980;
    }
L_0886A980:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(116)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[6] = (15267u << 16u);
      if (branch_taken) {
          goto L_0886A9D0;
      }
      goto L_0886A998;
    }
L_0886A998:
    aot_gpr[6] = (aot_gpr[6] | 55050u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[14] = aot_fpr[15] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886A9BC;
      }
      goto L_0886A9B4;
    }
L_0886A9B4:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
      if (branch_taken) {
          goto L_0886A9CC;
      }
      goto L_0886A9BC;
    }
L_0886A9BC:
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_0886A9CC;
    }
    goto L_0886A9CC;
L_0886A9CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_0886A9D0;
L_0886A9D0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    aot_gpr[6] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (16230u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 26214u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[6]);
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[15] = aot_fpr[15] + aot_fpr[24];
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886AA18;
      }
      goto L_0886AA10;
    }
L_0886AA10:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
      if (branch_taken) {
          goto L_0886AA28;
      }
      goto L_0886AA18;
    }
L_0886AA18:
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_0886AA28;
    }
    goto L_0886AA28;
L_0886AA28:
    aot_gpr[6] = (16100u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[6] = (aot_gpr[6] | 57967u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(124), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[6]);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4828)));
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[16] < aot_fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
        goto L_0886AA58;
    }
    goto L_0886AA58;
L_0886AA58:
    aot_fpr[15] = aot_fpr[15] / aot_fpr[16];
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
      if (branch_taken) {
          goto L_0886AA70;
      }
      goto L_0886AA64;
    }
L_0886AA64:
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4828)));
    aot_fpr[14] = aot_fpr[14] / aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(108), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_0886AA70;
L_0886AA70:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(149))))));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] ^ 1u);
    aot_gpr[5] = (aot_gpr[5] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(116)));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0886AAAC;
      }
      goto L_0886AA9C;
    }
L_0886AA9C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(187)));
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[7] = (aot_gpr[6] & 255u);
      if (branch_taken) {
          goto L_0886AAB0;
      }
      goto L_0886AAA8;
    }
L_0886AAA8:
    aot_gpr[6] = (0u | 1u);
    goto L_0886AAAC;
L_0886AAAC:
    aot_gpr[7] = (aot_gpr[6] & 255u);
    goto L_0886AAB0;
L_0886AAB0:
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(76)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0886AAD4u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 133u, 0x08867C90u>(ctx, &aot_mem) && ctx.pc == 0x0886AAD4u) goto L_0886AAD4;
    return;
L_0886AAD4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(149))))));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0886AAF0;
      }
      goto L_0886AAE4;
    }
L_0886AAE4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AB28;
      }
      goto L_0886AAF0;
    }
L_0886AAF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[20])) && aot_fpr[13] == aot_fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_0886AB20;
    }
    goto L_0886AB10;
L_0886AB10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0886AB20;
L_0886AB20:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_0886ABDC;
      }
      goto L_0886AB28;
    }
L_0886AB28:
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0886AB6C;
      }
      goto L_0886AB34;
    }
L_0886AB34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[20])) && aot_fpr[13] == aot_fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_0886AB64;
    }
    goto L_0886AB54;
L_0886AB54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0886AB64;
L_0886AB64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_0886ABDC;
      }
      goto L_0886AB6C;
    }
L_0886AB6C:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(140)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[14]) || std::isnan(aot_fpr[20])) && aot_fpr[14] == aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_0886AB8C;
      }
      goto L_0886AB80;
    }
L_0886AB80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(186)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886ABB4;
      }
      goto L_0886AB8C;
    }
L_0886AB8C:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[20])) && aot_fpr[13] == aot_fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_0886ABAC;
    }
    goto L_0886AB9C;
L_0886AB9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0886ABAC;
L_0886ABAC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_0886ABDC;
      }
      goto L_0886ABB4;
    }
L_0886ABB4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(150))))));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_0886ABD8;
    }
    goto L_0886ABC8;
L_0886ABC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0886ABD8;
L_0886ABD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(76)));
    goto L_0886ABDC;
L_0886ABDC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886ABF0;
      }
      goto L_0886ABE4;
    }
L_0886ABE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] | 128u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0886ABF0;
L_0886ABF0:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886AC14;
      }
      goto L_0886AC0C;
    }
L_0886AC0C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
      if (branch_taken) {
          goto L_0886AC24;
      }
      goto L_0886AC14;
    }
L_0886AC14:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
        goto L_0886AC24;
    }
    goto L_0886AC24;
L_0886AC24:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[20])) && aot_fpr[13] == aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886AC6C;
      }
      goto L_0886AC58;
    }
L_0886AC58:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[20])) && aot_fpr[13] == aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886AC78;
      }
      goto L_0886AC6C;
    }
L_0886AC6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0886AC78;
L_0886AC78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(177)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AC90;
      }
      goto L_0886AC84;
    }
L_0886AC84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0886AC90;
L_0886AC90:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(424)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4832)));
      if (branch_taken) {
          goto L_0886ACE0;
      }
      goto L_0886ACB0;
    }
L_0886ACB0:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    goto L_0886ACB8;
L_0886ACB8:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(432));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[6]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(148)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(336));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886ACB8;
      }
      goto L_0886ACE0;
    }
L_0886ACE0:
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0886AD14;
      }
      goto L_0886ACF0;
    }
L_0886ACF0:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
        goto L_0886AD08;
    }
    goto L_0886AD08;
L_0886AD08:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0886ACF0;
      }
      goto L_0886AD14;
    }
L_0886AD14:
    aot_fpr[13] = std::sqrt(aot_fpr[13]);
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
        goto L_0886AD28;
    }
    goto L_0886AD28;
L_0886AD28:
    aot_fpr[13] = aot_fpr[13] / aot_fpr[15];
    aot_gpr[4] = (15948u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(92)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_0886AD60;
      }
      goto L_0886AD50;
    }
L_0886AD50:
    aot_gpr[5] = (16544u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_0886AD64;
      }
      goto L_0886AD60;
    }
L_0886AD60:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    goto L_0886AD64;
L_0886AD64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886ADF8;
      }
      goto L_0886AD7C;
    }
L_0886AD7C:
    aot_gpr[4] = (16204u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(140)));
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (2214u << 16u);
      if (branch_taken) {
          goto L_0886ADC8;
      }
      goto L_0886AD9C;
    }
L_0886AD9C:
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4852)));
    aot_fpr[20] = aot_fpr[13] / aot_fpr[15];
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_0886ADCC;
      }
      goto L_0886ADBC;
    }
L_0886ADBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
      if (branch_taken) {
          goto L_0886ADCC;
      }
      goto L_0886ADC8;
    }
L_0886ADC8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_0886ADCC;
L_0886ADCC:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25164), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886ADEC;
      }
      goto L_0886ADE8;
    }
L_0886ADE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0886ADEC;
L_0886ADEC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(25168), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0886AE10;
      }
      goto L_0886ADF8;
    }
L_0886ADF8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(25168)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0886AE10;
      }
      goto L_0886AE0C;
    }
L_0886AE0C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    goto L_0886AE10;
L_0886AE10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AE2C;
      }
      goto L_0886AE1C;
    }
L_0886AE1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] | 256u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(0u));
    goto L_0886AE2C;
L_0886AE2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(166)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AE44;
      }
      goto L_0886AE38;
    }
L_0886AE38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] | 32768u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0886AE44;
L_0886AE44:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886AE6C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25160), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886AE8C:
    aot_gpr[8] = (aot_gpr[7] & 255u);
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(5584));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_0886AEB4;
L_0886AEB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[6] + aot_gpr[7]);
    goto L_0886AEC0;
L_0886AEC0:
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[10]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886AEC0;
      }
      goto L_0886AED4;
    }
L_0886AED4:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[8]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0886AEB4;
      }
      goto L_0886AEE8;
    }
L_0886AEE8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AF5C;
      }
      goto L_0886AEF0;
    }
L_0886AEF0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[4] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0886AF5C;
      }
      goto L_0886AF04;
    }
L_0886AF04:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-16));
    goto L_0886AF08;
L_0886AF08:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[8]) < 11 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AF48;
      }
      goto L_0886AF18;
    }
L_0886AF18:
    aot_gpr[8] = (aot_gpr[8] << 4u);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[9]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886AF48;
      }
      goto L_0886AF30;
    }
L_0886AF30:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[9] << 2u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    goto L_0886AF48;
L_0886AF48:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[4] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_0886AF08;
      }
      goto L_0886AF5C;
    }
L_0886AF5C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886AF64:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[5];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0886AFA0;
      }
      goto L_0886AF84;
    }
L_0886AF84:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x0886AF94u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x0886AF94u) goto L_0886AF94;
    return;
L_0886AF94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_0886AFA0;
L_0886AFA0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886AFAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0886AFE8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    goto L_0886AF64;
L_0886AFE8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886AFF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.pc = 0x0886B000u; return;
}

void recomp_unit_0102(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0102_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_102(Runtime &runtime) {
    runtime.register_generated_unit(102u, 0x0886A000u, 4096u, &recomp_unit_0102, &recomp_unit_0102_entry);
    runtime.register_function(0x0886A000u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A00Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A014u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A018u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A020u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A028u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A02Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A038u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A04Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A068u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A078u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A090u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A0A0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A0C8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A0F8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A0FCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A10Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A118u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A138u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A154u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A158u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A160u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A168u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A16Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A184u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A18Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A194u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A1A8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A1BCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A1D0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A1E4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A1F8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A200u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A214u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A218u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A22Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A23Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A248u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A268u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A270u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A274u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A278u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A280u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A29Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A2A8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A2C8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A2F0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A2F8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A30Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A310u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A318u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A344u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A34Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A360u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A364u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A36Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A374u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A37Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A394u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A398u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A3A4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A3ACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A3D4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A3DCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A3F0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A3F4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A3FCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A400u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A430u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A438u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A44Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A450u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A458u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A460u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A468u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A46Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A474u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A484u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A488u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A4BCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A4D0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A514u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A528u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A53Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A554u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A564u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A58Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A5A4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A5ACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A5E0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A600u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A61Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A650u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A660u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A668u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A67Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A694u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A69Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A6A4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A6B0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A6C0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A6D4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A704u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A778u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A78Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A7A4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A7E0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A7E8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A7ECu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A7F0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A7F4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A800u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A808u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A814u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A820u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A830u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A850u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A85Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A864u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A86Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A878u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A884u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A890u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A8A0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A8BCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A8C4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A8D0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A8D8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A8E4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A8ECu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A8F8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A900u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A924u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A92Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A93Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A954u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A95Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A96Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A978u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A980u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A998u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A9B4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A9BCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A9CCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886A9D0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AA10u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AA18u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AA28u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AA58u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AA64u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AA70u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AA9Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AAA8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AAACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AAB0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AAD4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AAE4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AAF0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AB10u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AB20u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AB28u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AB34u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AB54u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AB64u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AB6Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AB80u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AB8Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AB9Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886ABACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886ABB4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886ABC8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886ABD8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886ABDCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886ABE4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886ABF0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AC0Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AC14u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AC24u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AC58u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AC6Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AC78u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AC84u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AC90u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886ACB0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886ACB8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886ACE0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886ACF0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AD08u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AD14u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AD28u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AD50u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AD60u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AD64u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AD7Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AD9Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886ADBCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886ADC8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886ADCCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886ADE8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886ADECu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886ADF8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AE0Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AE10u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AE1Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AE2Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AE38u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AE44u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AE6Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AE8Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AEB4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AEC0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AED4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AEE8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AEF0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AF04u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AF08u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AF18u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AF30u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AF48u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AF5Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AF64u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AF84u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AF94u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AFA0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AFACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AFE8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0886AFF4u, &recomp_unit_0102, "recomp_unit_0102");
}
} // namespace psprecomp
