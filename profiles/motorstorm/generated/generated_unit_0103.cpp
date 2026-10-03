#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0103[1023] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 7, 0, 0, 8, 0,
    9, 0, 10, 0, 11, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0, 0, 17, 0,
    18, 0, 19, 20, 0, 21, 0, 22, 23, 0, 24, 0, 25, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 32,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0,
    38, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 45, 46, 0, 47, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 50, 0, 51, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 54, 0, 55, 0, 0, 0, 0, 56,
    0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 60, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 68, 0, 0, 0, 69, 0, 70, 0, 0, 0, 71,
    0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0, 75, 0, 76, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0,
    0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 86, 0, 87, 0, 0, 88, 0,
    89, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96,
    0, 0, 97, 0, 98, 0, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 102, 103, 0, 0, 0, 104, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0,
    0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0,
    0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124,
    0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 128, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 134, 135, 0, 136, 0, 0, 137, 0, 0, 0, 0,
    138, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0,
    144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 149, 150, 0, 0, 151, 0, 0,
    0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 157,
    0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0,
    0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    164, 0, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 168, 0, 169, 0, 170, 0, 0, 0, 0, 171, 0, 172, 173, 0, 174, 0, 175, 0, 176, 0,
    177, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 181, 0, 0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192,
    0, 193, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 198, 199, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205,
};
void recomp_unit_0103_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0886B000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0103[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0886B000;
    case 2u: goto L_0886B01C;
    case 3u: goto L_0886B038;
    case 4u: goto L_0886B03C;
    case 5u: goto L_0886B04C;
    case 6u: goto L_0886B068;
    case 7u: goto L_0886B06C;
    case 8u: goto L_0886B078;
    case 9u: goto L_0886B080;
    case 10u: goto L_0886B088;
    case 11u: goto L_0886B090;
    case 12u: goto L_0886B094;
    case 13u: goto L_0886B0B8;
    case 14u: goto L_0886B0D0;
    case 15u: goto L_0886B0D8;
    case 16u: goto L_0886B0EC;
    case 17u: goto L_0886B0F8;
    case 18u: goto L_0886B100;
    case 19u: goto L_0886B108;
    case 20u: goto L_0886B10C;
    case 21u: goto L_0886B114;
    case 22u: goto L_0886B11C;
    case 23u: goto L_0886B120;
    case 24u: goto L_0886B128;
    case 25u: goto L_0886B130;
    case 26u: goto L_0886B134;
    case 27u: goto L_0886B140;
    case 28u: goto L_0886B178;
    case 29u: goto L_0886B1C8;
    case 30u: goto L_0886B1E0;
    case 31u: goto L_0886B1F0;
    case 32u: goto L_0886B1FC;
    case 33u: goto L_0886B20C;
    case 34u: goto L_0886B234;
    case 35u: goto L_0886B244;
    case 36u: goto L_0886B25C;
    case 37u: goto L_0886B264;
    case 38u: goto L_0886B280;
    case 39u: goto L_0886B288;
    case 40u: goto L_0886B294;
    case 41u: goto L_0886B2C0;
    case 42u: goto L_0886B2E0;
    case 43u: goto L_0886B348;
    case 44u: goto L_0886B35C;
    case 45u: goto L_0886B360;
    case 46u: goto L_0886B364;
    case 47u: goto L_0886B36C;
    case 48u: goto L_0886B39C;
    case 49u: goto L_0886B3A4;
    case 50u: goto L_0886B3AC;
    case 51u: goto L_0886B3B4;
    case 52u: goto L_0886B3C0;
    case 53u: goto L_0886B3D4;
    case 54u: goto L_0886B3E0;
    case 55u: goto L_0886B3E8;
    case 56u: goto L_0886B3FC;
    case 57u: goto L_0886B40C;
    case 58u: goto L_0886B454;
    case 59u: goto L_0886B46C;
    case 60u: goto L_0886B470;
    case 61u: goto L_0886B4A8;
    case 62u: goto L_0886B4B4;
    case 63u: goto L_0886B4C8;
    case 64u: goto L_0886B4D4;
    case 65u: goto L_0886B4E8;
    case 66u: goto L_0886B4F4;
    case 67u: goto L_0886B550;
    case 68u: goto L_0886B554;
    case 69u: goto L_0886B564;
    case 70u: goto L_0886B56C;
    case 71u: goto L_0886B57C;
    case 72u: goto L_0886B590;
    case 73u: goto L_0886B598;
    case 74u: goto L_0886B5A8;
    case 75u: goto L_0886B5B0;
    case 76u: goto L_0886B5B8;
    case 77u: goto L_0886B5C0;
    case 78u: goto L_0886B5D4;
    case 79u: goto L_0886B5EC;
    case 80u: goto L_0886B5F4;
    case 81u: goto L_0886B608;
    case 82u: goto L_0886B620;
    case 83u: goto L_0886B62C;
    case 84u: goto L_0886B644;
    case 85u: goto L_0886B65C;
    case 86u: goto L_0886B664;
    case 87u: goto L_0886B66C;
    case 88u: goto L_0886B678;
    case 89u: goto L_0886B680;
    case 90u: goto L_0886B688;
    case 91u: goto L_0886B698;
    case 92u: goto L_0886B6B0;
    case 93u: goto L_0886B6B4;
    case 94u: goto L_0886B6C0;
    case 95u: goto L_0886B6F4;
    case 96u: goto L_0886B6FC;
    case 97u: goto L_0886B708;
    case 98u: goto L_0886B710;
    case 99u: goto L_0886B71C;
    case 100u: goto L_0886B724;
    case 101u: goto L_0886B72C;
    case 102u: goto L_0886B740;
    case 103u: goto L_0886B744;
    case 104u: goto L_0886B754;
    case 105u: goto L_0886B758;
    case 106u: goto L_0886B76C;
    case 107u: goto L_0886B7C8;
    case 108u: goto L_0886B7D0;
    case 109u: goto L_0886B7E0;
    case 110u: goto L_0886B7E8;
    case 111u: goto L_0886B804;
    case 112u: goto L_0886B828;
    case 113u: goto L_0886B840;
    case 114u: goto L_0886B848;
    case 115u: goto L_0886B860;
    case 116u: goto L_0886B898;
    case 117u: goto L_0886B8B8;
    case 118u: goto L_0886B8E4;
    case 119u: goto L_0886B8F0;
    case 120u: goto L_0886B90C;
    case 121u: goto L_0886B928;
    case 122u: goto L_0886B944;
    case 123u: goto L_0886B95C;
    case 124u: goto L_0886B97C;
    case 125u: goto L_0886B98C;
    case 126u: goto L_0886B9B4;
    case 127u: goto L_0886B9BC;
    case 128u: goto L_0886B9D4;
    case 129u: goto L_0886B9D8;
    case 130u: goto L_0886B9E0;
    case 131u: goto L_0886BA30;
    case 132u: goto L_0886BA40;
    case 133u: goto L_0886BA4C;
    case 134u: goto L_0886BA54;
    case 135u: goto L_0886BA58;
    case 136u: goto L_0886BA60;
    case 137u: goto L_0886BA6C;
    case 138u: goto L_0886BA80;
    case 139u: goto L_0886BA90;
    case 140u: goto L_0886BA9C;
    case 141u: goto L_0886BAC8;
    case 142u: goto L_0886BAE8;
    case 143u: goto L_0886BAF0;
    case 144u: goto L_0886BB00;
    case 145u: goto L_0886BB0C;
    case 146u: goto L_0886BB28;
    case 147u: goto L_0886BB50;
    case 148u: goto L_0886BB5C;
    case 149u: goto L_0886BB64;
    case 150u: goto L_0886BB68;
    case 151u: goto L_0886BB74;
    case 152u: goto L_0886BB8C;
    case 153u: goto L_0886BBA4;
    case 154u: goto L_0886BBBC;
    case 155u: goto L_0886BBD0;
    case 156u: goto L_0886BBF8;
    case 157u: goto L_0886BBFC;
    case 158u: goto L_0886BC08;
    case 159u: goto L_0886BC34;
    case 160u: goto L_0886BC54;
    case 161u: goto L_0886BC6C;
    case 162u: goto L_0886BC84;
    case 163u: goto L_0886BC8C;
    case 164u: goto L_0886BD00;
    case 165u: goto L_0886BD10;
    case 166u: goto L_0886BD1C;
    case 167u: goto L_0886BD28;
    case 168u: goto L_0886BD30;
    case 169u: goto L_0886BD38;
    case 170u: goto L_0886BD40;
    case 171u: goto L_0886BD54;
    case 172u: goto L_0886BD5C;
    case 173u: goto L_0886BD60;
    case 174u: goto L_0886BD68;
    case 175u: goto L_0886BD70;
    case 176u: goto L_0886BD78;
    case 177u: goto L_0886BD80;
    case 178u: goto L_0886BD84;
    case 179u: goto L_0886BD98;
    case 180u: goto L_0886BDAC;
    case 181u: goto L_0886BDB0;
    case 182u: goto L_0886BDBC;
    case 183u: goto L_0886BDCC;
    case 184u: goto L_0886BDD4;
    case 185u: goto L_0886BE0C;
    case 186u: goto L_0886BE2C;
    case 187u: goto L_0886BE44;
    case 188u: goto L_0886BE60;
    case 189u: goto L_0886BE84;
    case 190u: goto L_0886BE98;
    case 191u: goto L_0886BEDC;
    case 192u: goto L_0886BEFC;
    case 193u: goto L_0886BF04;
    case 194u: goto L_0886BF0C;
    case 195u: goto L_0886BF18;
    case 196u: goto L_0886BF34;
    case 197u: goto L_0886BF3C;
    case 198u: goto L_0886BF50;
    case 199u: goto L_0886BF54;
    case 200u: goto L_0886BF60;
    case 201u: goto L_0886BFAC;
    case 202u: goto L_0886BFC4;
    case 203u: goto L_0886BFC8;
    case 204u: goto L_0886BFDC;
    case 205u: goto L_0886BFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0886B000:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(37)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(38)));
      if (branch_taken) {
          goto L_0886B03C;
      }
      goto L_0886B01C;
    }
L_0886B01C:
    aot_gpr[8] = (2218u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[14] = aot_fpr[14] - aot_fpr[15];
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_0886B03C;
      }
      goto L_0886B038;
    }
L_0886B038:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0886B03C;
L_0886B03C:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[8] = (15651u << 16u);
      if (branch_taken) {
          goto L_0886B06C;
      }
      goto L_0886B04C;
    }
L_0886B04C:
    aot_gpr[8] = (aot_gpr[8] | 55050u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0886B06C;
      }
      goto L_0886B068;
    }
L_0886B068:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0886B06C;
L_0886B06C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(39)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B0F8;
      }
      goto L_0886B078;
    }
L_0886B078:
    if (aot_gpr[7] != 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_0886B094;
    }
    goto L_0886B080;
L_0886B080:
    if (aot_gpr[6] != 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_0886B094;
    }
    goto L_0886B088;
L_0886B088:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B0B8;
      }
      goto L_0886B090;
    }
L_0886B090:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_0886B094;
L_0886B094:
    aot_gpr[8] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[8] = (15820u << 16u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[8] = (aot_gpr[8] | 52429u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0886B0F8;
      }
      goto L_0886B0B8;
    }
L_0886B0B8:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[8] = (2218u << 16u);
      if (branch_taken) {
          goto L_0886B0EC;
      }
      goto L_0886B0D0;
    }
L_0886B0D0:
    aot_gpr[31] = (0x0886B0D8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 221u, 0x0886AF64u>(ctx, &aot_mem) && ctx.pc == 0x0886B0D8u) goto L_0886B0D8;
    return;
L_0886B0D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(37)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(38)));
      if (branch_taken) {
          goto L_0886B0F8;
      }
      goto L_0886B0EC;
    }
L_0886B0EC:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0886B0F8;
L_0886B0F8:
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886B108;
      }
      goto L_0886B100;
    }
L_0886B100:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), 0u);
      if (branch_taken) {
          goto L_0886B10C;
      }
      goto L_0886B108;
    }
L_0886B108:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    goto L_0886B10C;
L_0886B10C:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886B11C;
      }
      goto L_0886B114;
    }
L_0886B114:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), 0u);
      if (branch_taken) {
          goto L_0886B120;
      }
      goto L_0886B11C;
    }
L_0886B11C:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    goto L_0886B120;
L_0886B120:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886B130;
      }
      goto L_0886B128;
    }
L_0886B128:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), 0u);
      if (branch_taken) {
          goto L_0886B134;
      }
      goto L_0886B130;
    }
L_0886B130:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    goto L_0886B134;
L_0886B134:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B140:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0886B178u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B178u) goto L_0886B178;
    return;
L_0886B178:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5584));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[7] = (15395u << 16u);
    aot_gpr[6] = (aot_gpr[7] | 55050u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[15];
    aot_gpr[7] = (20224u << 16u);
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[7]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[6]);
      if (branch_taken) {
          goto L_0886B1E0;
      }
      goto L_0886B1C8;
    }
L_0886B1C8:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_0886B1E0;
    }
    goto L_0886B1E0;
L_0886B1E0:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[13] - aot_fpr[14];
        goto L_0886B1FC;
    }
    goto L_0886B1F0;
L_0886B1F0:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0886B20C;
      }
      goto L_0886B1FC;
    }
L_0886B1FC:
    aot_gpr[6] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    goto L_0886B20C;
L_0886B20C:
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0886B234u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 125u, 0x088638D4u>(ctx, &aot_mem) && ctx.pc == 0x0886B234u) goto L_0886B234;
    return;
L_0886B234:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0886B2C0;
      }
      goto L_0886B244;
    }
L_0886B244:
    aot_gpr[18] = (aot_gpr[17] << 6u);
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[22]));
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7472)));
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
      if (branch_taken) {
          goto L_0886B264;
      }
      goto L_0886B25C;
    }
L_0886B25C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B280;
      }
      goto L_0886B264;
    }
L_0886B264:
    aot_gpr[5] = (16000u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_0886B280;
    }
    goto L_0886B280;
L_0886B280:
    aot_gpr[31] = (0x0886B288u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 107u, 0x0892A828u>(ctx, &aot_mem) && ctx.pc == 0x0886B288u) goto L_0886B288;
    return;
L_0886B288:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[31] = (0x0886B294u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B294u) goto L_0886B294;
    return;
L_0886B294:
    aot_gpr[4] = (15651u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 55050u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (16250u << 16u);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[5] = (aot_gpr[5] | 57672u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[31] = (0x0886B2C0u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 101u, 0x0892A7E0u>(ctx, &aot_mem) && ctx.pc == 0x0886B2C0u) goto L_0886B2C0;
    return;
L_0886B2C0:
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
L_0886B2E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5392)));
    aot_gpr[4] = (aot_gpr[4] << 7u);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(112)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (0u | 0u);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[20])) && aot_fpr[13] == aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0886B360;
      }
      goto L_0886B348;
    }
L_0886B348:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[20])) && aot_fpr[13] == aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          goto L_0886B364;
      }
      goto L_0886B35C;
    }
L_0886B35C:
    aot_gpr[5] = (0u | 1u);
    goto L_0886B360;
L_0886B360:
    aot_gpr[4] = (aot_gpr[5] & 255u);
    goto L_0886B364;
L_0886B364:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886B3A4;
      }
      goto L_0886B36C;
    }
L_0886B36C:
    aot_gpr[5] = (15907u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 55050u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(40))))));
    aot_gpr[5] = (16025u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_gpr[7] = (16256u << 16u);
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[20] = (0u | 3u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[7]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0886B3AC;
      }
      goto L_0886B39C;
    }
L_0886B39C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B3B4;
      }
      goto L_0886B3A4;
    }
L_0886B3A4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0886B860;
      }
      goto L_0886B3AC;
    }
L_0886B3AC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0886B3B4;
L_0886B3B4:
    aot_gpr[4] = (0u | 0u);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[20];
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0886B3E0;
      }
      goto L_0886B3C0;
    }
L_0886B3C0:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[5];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_0886B554;
      }
      goto L_0886B3D4;
    }
L_0886B3D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0886B554;
      }
      goto L_0886B3E0;
    }
L_0886B3E0:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886B4A8;
      }
      goto L_0886B3E8;
    }
L_0886B3E8:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    if (aot_gpr[6] == aot_gpr[5]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
        goto L_0886B40C;
    }
    goto L_0886B3FC;
L_0886B3FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    goto L_0886B40C;
L_0886B40C:
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    aot_gpr[7] = (aot_gpr[7] & 2u);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0886B46C;
      }
      goto L_0886B454;
    }
L_0886B454:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(44)));
    aot_gpr[7] = (aot_gpr[7] & 2u);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B470;
      }
      goto L_0886B46C;
    }
L_0886B46C:
    aot_gpr[19] = (0u | 1u);
    goto L_0886B470;
L_0886B470:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(16);
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
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16968u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_0886B554;
      }
      goto L_0886B4A8;
    }
L_0886B4A8:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0886B4D4;
      }
      goto L_0886B4B4;
    }
L_0886B4B4:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[5];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_0886B554;
      }
      goto L_0886B4C8;
    }
L_0886B4C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0886B554;
      }
      goto L_0886B4D4;
    }
L_0886B4D4:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[6] == aot_gpr[5]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
        goto L_0886B4F4;
    }
    goto L_0886B4E8;
L_0886B4E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    goto L_0886B4F4;
L_0886B4F4:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
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
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (16000u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] & 2u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_0886B554;
      }
      goto L_0886B550;
    }
L_0886B550:
    aot_gpr[19] = (0u | 1u);
    goto L_0886B554;
L_0886B554:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_0886B56C;
    }
    goto L_0886B564;
L_0886B564:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_0886B57C;
      }
      goto L_0886B56C;
    }
L_0886B56C:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_0886B57C;
    }
    goto L_0886B57C;
L_0886B57C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[20])) && aot_fpr[13] == aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0886B758;
      }
      goto L_0886B590;
    }
L_0886B590:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B758;
      }
      goto L_0886B598;
    }
L_0886B598:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886B5B8;
      }
      goto L_0886B5A8;
    }
L_0886B5A8:
    { const bool branch_taken = aot_gpr[18] == aot_gpr[20];
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0886B5C0;
      }
      goto L_0886B5B0;
    }
L_0886B5B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B5EC;
      }
      goto L_0886B5B8;
    }
L_0886B5B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B860;
      }
      goto L_0886B5C0;
    }
L_0886B5C0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[21] = (0u | 5u);
    aot_gpr[31] = (0x0886B5D4u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B5D4u) goto L_0886B5D4;
    return;
L_0886B5D4:
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[0] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[21] = (aot_gpr[20] | 0u);
        goto L_0886B5EC;
    }
    goto L_0886B5EC;
L_0886B5EC:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886B620;
      }
      goto L_0886B5F4;
    }
L_0886B5F4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[21] = (0u | 1u);
    aot_gpr[31] = (0x0886B608u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B608u) goto L_0886B608;
    return;
L_0886B608:
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[0] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[21] = (0u | 2u);
        goto L_0886B620;
    }
    goto L_0886B620;
L_0886B620:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0886B6B4;
      }
      goto L_0886B62C;
    }
L_0886B62C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr[21] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0886B680;
      }
      goto L_0886B644;
    }
L_0886B644:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[5]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(4856)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B65C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (0u | 5u);
      if (branch_taken) {
          goto L_0886B680;
      }
      goto L_0886B664;
    }
L_0886B664:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_0886B680;
      }
      goto L_0886B66C;
    }
L_0886B66C:
    aot_gpr[21] = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0886B680;
      }
      goto L_0886B678;
    }
L_0886B678:
    aot_gpr[21] = (0u | 8u);
    aot_gpr[4] = (0u | 0u);
    goto L_0886B680;
L_0886B680:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B6B4;
      }
      goto L_0886B688;
    }
L_0886B688:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[31] = (0x0886B698u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0886B698u) goto L_0886B698;
    return;
L_0886B698:
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[0] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886B6B4;
      }
      goto L_0886B6B0;
    }
L_0886B6B0:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    goto L_0886B6B4;
L_0886B6B4:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0886B72C;
      }
      goto L_0886B6C0;
    }
L_0886B6C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5260)));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B6FC;
      }
      goto L_0886B6F4;
    }
L_0886B6F4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (0u | 2u);
      if (branch_taken) {
          goto L_0886B72C;
      }
      goto L_0886B6FC;
    }
L_0886B6FC:
    aot_gpr[5] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B710;
      }
      goto L_0886B708;
    }
L_0886B708:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (0u | 7u);
      if (branch_taken) {
          goto L_0886B72C;
      }
      goto L_0886B710;
    }
L_0886B710:
    aot_gpr[4] = (aot_gpr[4] & 4u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B724;
      }
      goto L_0886B71C;
    }
L_0886B71C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (0u | 6u);
      if (branch_taken) {
          goto L_0886B72C;
      }
      goto L_0886B724;
    }
L_0886B724:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B860;
      }
      goto L_0886B72C;
    }
L_0886B72C:
    aot_gpr[4] = (16153u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(aot_gpr[20]));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_0886B744;
      }
      goto L_0886B740;
    }
L_0886B740:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    goto L_0886B744;
L_0886B744:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[31] = (0x0886B754u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    goto L_0886B140;
L_0886B754:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    goto L_0886B758;
L_0886B758:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886B860;
      }
      goto L_0886B76C;
    }
L_0886B76C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
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
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16968u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0886B7D0;
      }
      goto L_0886B7C8;
    }
L_0886B7C8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_0886B7E0;
      }
      goto L_0886B7D0;
    }
L_0886B7D0:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_0886B7E0;
    }
    goto L_0886B7E0;
L_0886B7E0:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0886B840;
      }
      goto L_0886B7E8;
    }
L_0886B7E8:
    aot_gpr[5] = (15897u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886B840;
      }
      goto L_0886B804;
    }
L_0886B804:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5584));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(148)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0886B828u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 125u, 0x088638D4u>(ctx, &aot_mem) && ctx.pc == 0x0886B828u) goto L_0886B828;
    return;
L_0886B828:
    aot_gpr[4] = (15820u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0886B840;
L_0886B840:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0886B860;
      }
      goto L_0886B848;
    }
L_0886B848:
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[4] = (aot_gpr[4] << 6u);
    aot_gpr[31] = (0x0886B860u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 107u, 0x0892A828u>(ctx, &aot_mem) && ctx.pc == 0x0886B860u) goto L_0886B860;
    return;
L_0886B860:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B898:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25184), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B8B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(5744));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0886B8E4;
L_0886B8E4:
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x0886B8F0u);
    aot_gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x0886B8F0u) goto L_0886B8F0;
    return;
L_0886B8F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[19]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886B8E4;
      }
      goto L_0886B90C;
    }
L_0886B90C:
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
L_0886B928:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[6] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0886B944;
L_0886B944:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(9))))));
    aot_gpr[31] = (0x0886B95Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x0886B95Cu) goto L_0886B95C;
    return;
L_0886B95C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[6] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0886B944;
      }
      goto L_0886B97C;
    }
L_0886B97C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B98C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(736)));
    aot_gpr[5] = (16256u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_fpr[12] = aot_fpr[0] - aot_fpr[12];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (15897u << 16u);
      if (branch_taken) {
          goto L_0886B9BC;
      }
      goto L_0886B9B4;
    }
L_0886B9B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886B9D8;
      }
      goto L_0886B9BC;
    }
L_0886B9BC:
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_0886B9D4;
    }
    goto L_0886B9D4;
L_0886B9D4:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0886B9D8;
L_0886B9D8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886B9E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    aot_gpr[7] = (aot_gpr[7] & 2u);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0886BA40;
      }
      goto L_0886BA30;
    }
L_0886BA30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(732)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BA60;
      }
      goto L_0886BA40;
    }
L_0886BA40:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0886BA58;
      }
      goto L_0886BA4C;
    }
L_0886BA4C:
    aot_gpr[31] = (0x0886BA54u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x0886BA54u) goto L_0886BA54;
    return;
L_0886BA54:
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr[19]));
    goto L_0886BA58;
L_0886BA58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BC08;
      }
      goto L_0886BA60;
    }
L_0886BA60:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0886BA6Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_0886B98C;
L_0886BA6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(2080));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_0886BAF0;
      }
      goto L_0886BA80;
    }
L_0886BA80:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(2080));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(57)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886BAF0;
      }
      goto L_0886BA90;
    }
L_0886BA90:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0886BAF0;
      }
      goto L_0886BA9C;
    }
L_0886BA9C:
    aot_gpr[8] = (16256u << 16u);
    aot_gpr[21] = (2218u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[20] = (0u | 1u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(5744)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886BAC8u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 125u, 0x088638D4u>(ctx, &aot_mem) && ctx.pc == 0x0886BAC8u) goto L_0886BAC8;
    return;
L_0886BAC8:
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(5744));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886BAE8u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 125u, 0x088638D4u>(ctx, &aot_mem) && ctx.pc == 0x0886BAE8u) goto L_0886BAE8;
    return;
L_0886BAE8:
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    goto L_0886BAF0;
L_0886BAF0:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(2080));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(2080));
      if (branch_taken) {
          goto L_0886BB68;
      }
      goto L_0886BB00;
    }
L_0886BB00:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(57)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BB68;
      }
      goto L_0886BB0C;
    }
L_0886BB0C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2080));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[12])) && aot_fpr[13] == aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886BB50;
      }
      goto L_0886BB28;
    }
L_0886BB28:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5744));
    aot_gpr[8] = (16256u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886BB50u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 125u, 0x088638D4u>(ctx, &aot_mem) && ctx.pc == 0x0886BB50u) goto L_0886BB50;
    return;
L_0886BB50:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0886BB68;
      }
      goto L_0886BB5C;
    }
L_0886BB5C:
    aot_gpr[31] = (0x0886BB64u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x0886BB64u) goto L_0886BB64;
    return;
L_0886BB64:
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr[19]));
    goto L_0886BB68;
L_0886BB68:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0886BB8C;
      }
      goto L_0886BB74;
    }
L_0886BB74:
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[4] = (aot_gpr[4] << 6u);
    aot_gpr[31] = (0x0886BB8Cu);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 107u, 0x0892A828u>(ctx, &aot_mem) && ctx.pc == 0x0886BB8Cu) goto L_0886BB8C;
    return;
L_0886BB8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(2080));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[20]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(2080));
      if (branch_taken) {
          goto L_0886BBFC;
      }
      goto L_0886BBA4;
    }
L_0886BBA4:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[12])) && aot_fpr[13] == aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886BBFC;
      }
      goto L_0886BBBC;
    }
L_0886BBBC:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886BBFC;
      }
      goto L_0886BBD0;
    }
L_0886BBD0:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5744));
    aot_gpr[8] = (16256u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886BBF8u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 125u, 0x088638D4u>(ctx, &aot_mem) && ctx.pc == 0x0886BBF8u) goto L_0886BBF8;
    return;
L_0886BBF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    goto L_0886BBFC;
L_0886BBFC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2080));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0886BC08;
L_0886BC08:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BC34:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25192), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BC54:
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (0u | 0u);
    goto L_0886BC6C;
L_0886BC6C:
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886BC6C;
      }
      goto L_0886BC84;
    }
L_0886BC84:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BC8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(424)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[20] << 7u);
    aot_gpr[7] = (aot_gpr[20] << 4u);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(432));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(688)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(224));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[18] & 15u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] & 15u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x0886BD00u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0234_entry, 234u, 90u, 0x088EE818u>(ctx, &aot_mem) && ctx.pc == 0x0886BD00u) goto L_0886BD00;
    return;
L_0886BD00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0886BD10u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0234_entry, 234u, 90u, 0x088EE818u>(ctx, &aot_mem) && ctx.pc == 0x0886BD10u) goto L_0886BD10;
    return;
L_0886BD10:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0886BD30;
      }
      goto L_0886BD1C;
    }
L_0886BD1C:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0886BD38;
      }
      goto L_0886BD28;
    }
L_0886BD28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BD68;
      }
      goto L_0886BD30;
    }
L_0886BD30:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0886BE0C;
      }
      goto L_0886BD38;
    }
L_0886BD38:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BD68;
      }
      goto L_0886BD40;
    }
L_0886BD40:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886BD5C;
      }
      goto L_0886BD54;
    }
L_0886BD54:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0886BD60;
      }
      goto L_0886BD5C;
    }
L_0886BD5C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0886BD60;
L_0886BD60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BD84;
      }
      goto L_0886BD68;
    }
L_0886BD68:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BD78;
      }
      goto L_0886BD70;
    }
L_0886BD70:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0886BD84;
      }
      goto L_0886BD78;
    }
L_0886BD78:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BD84;
      }
      goto L_0886BD80;
    }
L_0886BD80:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0886BD84;
L_0886BD84:
    aot_gpr[7] = (aot_gpr[18] & 64u);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0886BDAC;
      }
      goto L_0886BD98;
    }
L_0886BD98:
    aot_gpr[7] = (aot_gpr[17] & 64u);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BDB0;
      }
      goto L_0886BDAC;
    }
L_0886BDAC:
    aot_gpr[6] = (0u | 1u);
    goto L_0886BDB0;
L_0886BDB0:
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BDCC;
      }
      goto L_0886BDBC;
    }
L_0886BDBC:
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(5756), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0886BDD4;
      }
      goto L_0886BDCC;
    }
L_0886BDCC:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(5756), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0886BDD4;
L_0886BDD4:
    aot_gpr[4] = (aot_gpr[5] ^ 9u);
    aot_gpr[6] = (aot_gpr[5] ^ 7u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[5] ^ 5u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[5] ^ 4u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[5] << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> 16u));
    goto L_0886BE0C;
L_0886BE0C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BE2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[7] = (0u | 0u);
    goto L_0886BE44;
L_0886BE44:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x0886BE60u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(11))))));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x0886BE60u) goto L_0886BE60;
    return;
L_0886BE60:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < 2 ? 1u : 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0886BE44;
      }
      goto L_0886BE84;
    }
L_0886BE84:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886BE98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(9)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0886BF04;
      }
      goto L_0886BEDC;
    }
L_0886BEDC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5320));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_fpr[22] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[22])));
      if (branch_taken) {
          goto L_0886BF0C;
      }
      goto L_0886BEFC;
    }
L_0886BEFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886BF18;
      }
      goto L_0886BF04;
    }
L_0886BF04:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 44u, 0x0886C2C0u>(ctx, &aot_mem); return;
      }
      goto L_0886BF0C;
    }
L_0886BF0C:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[22] = aot_fpr[22] + aot_fpr[12];
    goto L_0886BF18;
L_0886BF18:
    aot_gpr[4] = (15395u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 55050u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x0886BF34u);
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0234_entry, 234u, 81u, 0x088EE7ACu>(ctx, &aot_mem) && ctx.pc == 0x0886BF34u) goto L_0886BF34;
    return;
L_0886BF34:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (16384u << 16u);
      if (branch_taken) {
          goto L_0886BF54;
      }
      goto L_0886BF3C;
    }
L_0886BF3C:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886BF54;
      }
      goto L_0886BF50;
    }
L_0886BF50:
    aot_gpr[19] = (0u | 1u);
    goto L_0886BF54;
L_0886BF54:
    aot_gpr[19] = (aot_gpr[19] & 255u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 3u, 0x0886C01Cu>(ctx, &aot_mem); return;
      }
      goto L_0886BF60;
    }
L_0886BF60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(424)));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(432));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[5] << 7u);
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[5] = (aot_gpr[7] - aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(164)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(432));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) & 0x7FFFFFFFu);
    aot_gpr[5] = (16672u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_0886BFC4;
      }
      goto L_0886BFAC;
    }
L_0886BFAC:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(164)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886BFC8;
      }
      goto L_0886BFC4;
    }
L_0886BFC4:
    aot_gpr[19] = (0u | 0u);
    goto L_0886BFC8;
L_0886BFC8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[13])) && aot_fpr[12] == aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886BFF8;
      }
      goto L_0886BFDC;
    }
L_0886BFDC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[13])) && aot_fpr[12] == aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 3u, 0x0886C01Cu>(ctx, &aot_mem); return;
      }
      goto L_0886BFF8;
    }
L_0886BFF8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (16256u << 16u);
    ctx.pc = 0x0886C000u; return;
}

void recomp_unit_0103(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0103_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_103(Runtime &runtime) {
    runtime.register_generated_unit(103u, 0x0886B000u, 4096u, &recomp_unit_0103, &recomp_unit_0103_entry);
    runtime.register_function(0x0886B000u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B01Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B038u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B03Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B04Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B068u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B06Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B078u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B080u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B088u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B090u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B094u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B0B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B0D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B0D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B0ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B0F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B100u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B108u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B10Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B114u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B11Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B120u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B128u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B130u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B134u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B140u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B178u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B1C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B1E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B1F0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B1FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B20Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B234u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B244u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B25Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B264u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B280u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B288u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B294u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B2C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B2E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B348u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B35Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B360u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B364u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B36Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B39Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B3A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B3ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B3B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B3C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B3D4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B3E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B3E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B3FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B40Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B454u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B46Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B470u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B4A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B4B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B4C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B4D4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B4E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B4F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B550u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B554u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B564u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B56Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B57Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B590u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B598u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B5A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B5B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B5B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B5C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B5D4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B5ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B5F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B608u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B620u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B62Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B644u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B65Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B664u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B66Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B678u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B680u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B688u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B698u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B6B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B6B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B6C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B6F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B6FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B708u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B710u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B71Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B724u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B72Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B740u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B744u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B754u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B758u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B76Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B7C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B7D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B7E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B7E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B804u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B828u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B840u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B848u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B860u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B898u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B8B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B8E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B8F0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B90Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B928u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B944u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B95Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B97Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B98Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B9B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B9BCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B9D4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B9D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886B9E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BA30u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BA40u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BA4Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BA54u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BA58u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BA60u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BA6Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BA80u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BA90u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BA9Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BAC8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BAE8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BAF0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BB00u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BB0Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BB28u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BB50u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BB5Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BB64u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BB68u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BB74u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BB8Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BBA4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BBBCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BBD0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BBF8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BBFCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BC08u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BC34u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BC54u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BC6Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BC84u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BC8Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BD00u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BD10u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BD1Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BD28u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BD30u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BD38u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BD40u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BD54u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BD5Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BD60u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BD68u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BD70u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BD78u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BD80u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BD84u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BD98u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BDACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BDB0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BDBCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BDCCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BDD4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BE0Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BE2Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BE44u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BE60u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BE84u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BE98u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BEDCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BEFCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BF04u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BF0Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BF18u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BF34u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BF3Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BF50u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BF54u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BF60u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BFACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BFC4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BFC8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BFDCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x0886BFF8u, &recomp_unit_0103, "recomp_unit_0103");
}
} // namespace psprecomp
