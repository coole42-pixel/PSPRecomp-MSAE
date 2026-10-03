#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0176[1019] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 7, 0,
    0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18,
    0, 0, 19, 20, 21, 0, 22, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0,
    0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 41, 0, 0,
    0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 44, 45, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0,
    0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0,
    0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0,
    0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0,
    70, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 0, 0, 0, 83, 0, 84, 0, 85, 0, 86, 0, 0, 0, 0, 87, 0, 88, 0, 89, 0, 90,
    0, 0, 0, 0, 91, 0, 92, 0, 93, 0, 94, 0, 0, 0, 0, 95, 0, 96, 0, 0, 97, 0, 98, 99, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 103, 0, 104, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0,
    0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0,
    0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0,
    0, 124, 0, 125, 0, 126, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137,
    0, 138, 0, 139, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0,
    0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 154, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0,
    0, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 0, 170, 0, 0, 171, 0, 172, 0, 173, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 176,
    177, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182,
};
void recomp_unit_0176_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088B4000u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0176[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088B4000;
    case 2u: goto L_088B40B0;
    case 3u: goto L_088B40C4;
    case 4u: goto L_088B40D0;
    case 5u: goto L_088B40DC;
    case 6u: goto L_088B40EC;
    case 7u: goto L_088B40F8;
    case 8u: goto L_088B4104;
    case 9u: goto L_088B411C;
    case 10u: goto L_088B4140;
    case 11u: goto L_088B415C;
    case 12u: goto L_088B4174;
    case 13u: goto L_088B4180;
    case 14u: goto L_088B41A0;
    case 15u: goto L_088B41B4;
    case 16u: goto L_088B41C4;
    case 17u: goto L_088B41D0;
    case 18u: goto L_088B41FC;
    case 19u: goto L_088B4208;
    case 20u: goto L_088B420C;
    case 21u: goto L_088B4210;
    case 22u: goto L_088B4218;
    case 23u: goto L_088B4224;
    case 24u: goto L_088B4230;
    case 25u: goto L_088B4278;
    case 26u: goto L_088B42A4;
    case 27u: goto L_088B42C4;
    case 28u: goto L_088B42D4;
    case 29u: goto L_088B42E0;
    case 30u: goto L_088B4300;
    case 31u: goto L_088B4318;
    case 32u: goto L_088B4338;
    case 33u: goto L_088B4354;
    case 34u: goto L_088B436C;
    case 35u: goto L_088B4378;
    case 36u: goto L_088B4398;
    case 37u: goto L_088B43AC;
    case 38u: goto L_088B43C0;
    case 39u: goto L_088B43D8;
    case 40u: goto L_088B43E4;
    case 41u: goto L_088B43F4;
    case 42u: goto L_088B4418;
    case 43u: goto L_088B4424;
    case 44u: goto L_088B4428;
    case 45u: goto L_088B442C;
    case 46u: goto L_088B4434;
    case 47u: goto L_088B4440;
    case 48u: goto L_088B44A8;
    case 49u: goto L_088B44BC;
    case 50u: goto L_088B44E0;
    case 51u: goto L_088B44F8;
    case 52u: goto L_088B450C;
    case 53u: goto L_088B4524;
    case 54u: goto L_088B4544;
    case 55u: goto L_088B454C;
    case 56u: goto L_088B4564;
    case 57u: goto L_088B456C;
    case 58u: goto L_088B458C;
    case 59u: goto L_088B4594;
    case 60u: goto L_088B45A8;
    case 61u: goto L_088B45B0;
    case 62u: goto L_088B45C8;
    case 63u: goto L_088B45D8;
    case 64u: goto L_088B45E8;
    case 65u: goto L_088B4608;
    case 66u: goto L_088B463C;
    case 67u: goto L_088B4654;
    case 68u: goto L_088B4664;
    case 69u: goto L_088B4678;
    case 70u: goto L_088B4680;
    case 71u: goto L_088B4698;
    case 72u: goto L_088B46A0;
    case 73u: goto L_088B46AC;
    case 74u: goto L_088B46CC;
    case 75u: goto L_088B46E4;
    case 76u: goto L_088B4708;
    case 77u: goto L_088B4714;
    case 78u: goto L_088B4724;
    case 79u: goto L_088B4738;
    case 80u: goto L_088B4790;
    case 81u: goto L_088B479C;
    case 82u: goto L_088B47A4;
    case 83u: goto L_088B47B8;
    case 84u: goto L_088B47C0;
    case 85u: goto L_088B47C8;
    case 86u: goto L_088B47D0;
    case 87u: goto L_088B47E4;
    case 88u: goto L_088B47EC;
    case 89u: goto L_088B47F4;
    case 90u: goto L_088B47FC;
    case 91u: goto L_088B4810;
    case 92u: goto L_088B4818;
    case 93u: goto L_088B4820;
    case 94u: goto L_088B4828;
    case 95u: goto L_088B483C;
    case 96u: goto L_088B4844;
    case 97u: goto L_088B4850;
    case 98u: goto L_088B4858;
    case 99u: goto L_088B485C;
    case 100u: goto L_088B4870;
    case 101u: goto L_088B4894;
    case 102u: goto L_088B48A0;
    case 103u: goto L_088B48A8;
    case 104u: goto L_088B48B0;
    case 105u: goto L_088B48C8;
    case 106u: goto L_088B48D0;
    case 107u: goto L_088B48DC;
    case 108u: goto L_088B48F8;
    case 109u: goto L_088B4908;
    case 110u: goto L_088B4930;
    case 111u: goto L_088B4940;
    case 112u: goto L_088B495C;
    case 113u: goto L_088B4974;
    case 114u: goto L_088B4984;
    case 115u: goto L_088B4990;
    case 116u: goto L_088B49BC;
    case 117u: goto L_088B49D0;
    case 118u: goto L_088B49F0;
    case 119u: goto L_088B4A1C;
    case 120u: goto L_088B4A30;
    case 121u: goto L_088B4A54;
    case 122u: goto L_088B4A68;
    case 123u: goto L_088B4A74;
    case 124u: goto L_088B4A84;
    case 125u: goto L_088B4A8C;
    case 126u: goto L_088B4A94;
    case 127u: goto L_088B4A98;
    case 128u: goto L_088B4AA0;
    case 129u: goto L_088B4AC4;
    case 130u: goto L_088B4AD0;
    case 131u: goto L_088B4AD8;
    case 132u: goto L_088B4AE0;
    case 133u: goto L_088B4B10;
    case 134u: goto L_088B4B24;
    case 135u: goto L_088B4B4C;
    case 136u: goto L_088B4B70;
    case 137u: goto L_088B4B7C;
    case 138u: goto L_088B4B84;
    case 139u: goto L_088B4B8C;
    case 140u: goto L_088B4B94;
    case 141u: goto L_088B4BA8;
    case 142u: goto L_088B4BBC;
    case 143u: goto L_088B4BCC;
    case 144u: goto L_088B4BD4;
    case 145u: goto L_088B4BDC;
    case 146u: goto L_088B4BF8;
    case 147u: goto L_088B4C08;
    case 148u: goto L_088B4C18;
    case 149u: goto L_088B4C2C;
    case 150u: goto L_088B4C4C;
    case 151u: goto L_088B4C58;
    case 152u: goto L_088B4C64;
    case 153u: goto L_088B4C80;
    case 154u: goto L_088B4C8C;
    case 155u: goto L_088B4C9C;
    case 156u: goto L_088B4CA8;
    case 157u: goto L_088B4CB8;
    case 158u: goto L_088B4CD0;
    case 159u: goto L_088B4DEC;
    case 160u: goto L_088B4E84;
    case 161u: goto L_088B4E94;
    case 162u: goto L_088B4EB4;
    case 163u: goto L_088B4EBC;
    case 164u: goto L_088B4EE0;
    case 165u: goto L_088B4EEC;
    case 166u: goto L_088B4EF8;
    case 167u: goto L_088B4F0C;
    case 168u: goto L_088B4F18;
    case 169u: goto L_088B4F24;
    case 170u: goto L_088B4F34;
    case 171u: goto L_088B4F40;
    case 172u: goto L_088B4F48;
    case 173u: goto L_088B4F50;
    case 174u: goto L_088B4F5C;
    case 175u: goto L_088B4F70;
    case 176u: goto L_088B4F7C;
    case 177u: goto L_088B4F80;
    case 178u: goto L_088B4F90;
    case 179u: goto L_088B4FA4;
    case 180u: goto L_088B4FB8;
    case 181u: goto L_088B4FC4;
    case 182u: goto L_088B4FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088B4000:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_fpr[17] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_gpr[6] = (2215u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[18]));
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[13] = aot_fpr[15] + aot_fpr[13];
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[9]);
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088B40B0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x088B40B0u) goto L_088B40B0;
    return;
L_088B40B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] | 10u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
      if (branch_taken) {
          goto L_088B40D0;
      }
      goto L_088B40C4;
    }
L_088B40C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[4]);
    goto L_088B40D0;
L_088B40D0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088B40DCu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x088B40DCu) goto L_088B40DC;
    return;
L_088B40DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088B40ECu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 59u, 0x0892F600u>(ctx, &aot_mem) && ctx.pc == 0x088B40ECu) goto L_088B40EC;
    return;
L_088B40EC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088B40F8u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 62u, 0x089356ACu>(ctx, &aot_mem) && ctx.pc == 0x088B40F8u) goto L_088B40F8;
    return;
L_088B40F8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4104:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088B411Cu);
    aot_gpr[6] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 78u, 0x088AACD0u>(ctx, &aot_mem) && ctx.pc == 0x088B411Cu) goto L_088B411C;
    return;
L_088B411C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3808));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4140:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B41A0;
      }
      goto L_088B415C;
    }
L_088B415C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3808));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088B4174u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 164u, 0x088A9C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088B4174u) goto L_088B4174;
    return;
L_088B4174:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088B41A0;
      }
      goto L_088B4180;
    }
L_088B4180:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088B41A0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B41A0u) goto L_088B41A0;
    return;
L_088B41A0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B41B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088B41C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 26u, 0x088AB300u>(ctx, &aot_mem) && ctx.pc == 0x088B41C4u) goto L_088B41C4;
    return;
L_088B41C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B41D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-288));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(30)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088B420C;
      }
      goto L_088B41FC;
    }
L_088B41FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088B4210;
      }
      goto L_088B4208;
    }
L_088B4208:
    aot_gpr[4] = (0u | 1u);
    goto L_088B420C;
L_088B420C:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_088B4210;
L_088B4210:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B42A4;
      }
      goto L_088B4218;
    }
L_088B4218:
    aot_gpr[4] = (0u | 101u);
    aot_gpr[31] = (0x088B4224u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088B4224u) goto L_088B4224;
    return;
L_088B4224:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088B4230u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088B4230u) goto L_088B4230;
    return;
L_088B4230:
    aot_gpr[4] = (16928u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[11] = (16256u << 16u);
    aot_gpr[4] = (16864u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (65409u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[11]);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-32640));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x088B4278u);
    aot_gpr[10] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088B4278u) goto L_088B4278;
    return;
L_088B4278:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[4] = (16792u << 16u);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (16832u << 16u);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[31] = (0x088B42A4u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 165u, 0x088B3FC4u>(ctx, &aot_mem) && ctx.pc == 0x088B42A4u) goto L_088B42A4;
    return;
L_088B42A4:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B42C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088B42D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 189u, 0x088A9E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088B42D4u) goto L_088B42D4;
    return;
L_088B42D4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B42E0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27568), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4300:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088B4318u);
    aot_gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 78u, 0x088AACD0u>(ctx, &aot_mem) && ctx.pc == 0x088B4318u) goto L_088B4318;
    return;
L_088B4318:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3760));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4338:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B4398;
      }
      goto L_088B4354;
    }
L_088B4354:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3760));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088B436Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 164u, 0x088A9C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088B436Cu) goto L_088B436C;
    return;
L_088B436C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088B4398;
      }
      goto L_088B4378;
    }
L_088B4378:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088B4398u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B4398u) goto L_088B4398;
    return;
L_088B4398:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B43AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088B43C0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 26u, 0x088AB300u>(ctx, &aot_mem) && ctx.pc == 0x088B43C0u) goto L_088B43C0;
    return;
L_088B43C0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(148)));
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088B43E4;
      }
      goto L_088B43D8;
    }
L_088B43D8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088B43E4;
L_088B43E4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B43F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(30)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088B4428;
      }
      goto L_088B4418;
    }
L_088B4418:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088B442C;
      }
      goto L_088B4424;
    }
L_088B4424:
    aot_gpr[4] = (0u | 1u);
    goto L_088B4428;
L_088B4428:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_088B442C;
L_088B442C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B44E0;
      }
      goto L_088B4434;
    }
L_088B4434:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088B4440u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 53u, 0x088AAA7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B4440u) goto L_088B4440;
    return;
L_088B4440:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(104))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(116))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[6] = (16704u << 16u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(106))))));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(117))))));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[4] = (16768u << 16u);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    aot_fpr[13] = aot_fpr[15] + aot_fpr[16];
    aot_fpr[17] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[17])));
    aot_gpr[5] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = aot_fpr[13] + aot_fpr[17];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088B44A8u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(32))))));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088B44A8u) goto L_088B44A8;
    return;
L_088B44A8:
    aot_gpr[5] = (16256u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[31] = (0x088B44BCu);
    aot_gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 34u, 0x088B0270u>(ctx, &aot_mem) && ctx.pc == 0x088B44BCu) goto L_088B44BC;
    return;
L_088B44BC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[31] = (0x088B44E0u);
    aot_gpr[10] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088B44E0u) goto L_088B44E0;
    return;
L_088B44E0:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B44F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088B450Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 189u, 0x088A9E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088B450Cu) goto L_088B450C;
    return;
L_088B450C:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4524:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088B45A8;
      }
      goto L_088B4544;
    }
L_088B4544:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088B45D8;
      }
      goto L_088B454C;
    }
L_088B454C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(148)));
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B45D8;
      }
      goto L_088B4564;
    }
L_088B4564:
    aot_gpr[31] = (0x088B456Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 189u, 0x088A9E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088B456Cu) goto L_088B456C;
    return;
L_088B456C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x088B458Cu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 201u, 0x088A9F90u>(ctx, &aot_mem) && ctx.pc == 0x088B458Cu) goto L_088B458C;
    return;
L_088B458C:
    aot_gpr[31] = (0x088B4594u);
    aot_gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 34u, 0x088B0270u>(ctx, &aot_mem) && ctx.pc == 0x088B4594u) goto L_088B4594;
    return;
L_088B4594:
    aot_gpr[4] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088B45D8;
      }
      goto L_088B45A8;
    }
L_088B45A8:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088B45D8;
      }
      goto L_088B45B0;
    }
L_088B45B0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(148)));
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B45D8;
      }
      goto L_088B45C8;
    }
L_088B45C8:
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088B45D8;
L_088B45D8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B45E8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27576), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4608:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(27716));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    goto L_088B463C;
L_088B463C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_fpr[20] = aot_fpr[20] + aot_fpr[12];
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B463C;
      }
      goto L_088B4654;
    }
L_088B4654:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7516)));
    aot_gpr[31] = (0x088B4664u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x088B4664u) goto L_088B4664;
    return;
L_088B4664:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B46AC;
      }
      goto L_088B4678;
    }
L_088B4678:
    aot_gpr[5] = (0u | 15u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(60));
    goto L_088B4680;
L_088B4680:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[20] = aot_fpr[20] - aot_fpr[12];
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B46A0;
      }
      goto L_088B4698;
    }
L_088B4698:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B46AC;
      }
      goto L_088B46A0;
    }
L_088B46A0:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_088B4680;
      }
      goto L_088B46AC;
    }
L_088B46AC:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B46CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(148)));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[6] << (aot_gpr[5] & 31u));
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B46E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[9] = (2214u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(27716));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(29648));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    aot_gpr[7] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B4714;
      }
      goto L_088B4708;
    }
L_088B4708:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B4714;
      }
      goto L_088B4714;
    }
L_088B4714:
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    goto L_088B4724;
L_088B4724:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[4] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B4724;
      }
      goto L_088B4738;
    }
L_088B4738:
    aot_gpr[4] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[9]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(29392));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(29456));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(29584));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(29520));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[10]) < 0;
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088B47B8;
      }
      goto L_088B4790;
    }
L_088B4790:
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x088B479Cu);
    aot_gpr[5] = (aot_gpr[10] | 0u);
    goto L_088B46CC;
L_088B479C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B47B8;
      }
      goto L_088B47A4;
    }
L_088B47A4:
    aot_gpr[4] = (aot_gpr[10] << 2u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[9]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088B47B8;
L_088B47B8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[11]) < 0;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_088B47E4;
      }
      goto L_088B47C0;
    }
L_088B47C0:
    aot_gpr[31] = (0x088B47C8u);
    aot_gpr[5] = (aot_gpr[11] | 0u);
    goto L_088B46CC;
L_088B47C8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B47E4;
      }
      goto L_088B47D0;
    }
L_088B47D0:
    aot_gpr[4] = (aot_gpr[11] << 2u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[9]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088B47E4;
L_088B47E4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) < 0;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_088B4810;
      }
      goto L_088B47EC;
    }
L_088B47EC:
    aot_gpr[31] = (0x088B47F4u);
    aot_gpr[5] = (aot_gpr[3] | 0u);
    goto L_088B46CC;
L_088B47F4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B4810;
      }
      goto L_088B47FC;
    }
L_088B47FC:
    aot_gpr[4] = (aot_gpr[3] << 2u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[9]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088B4810;
L_088B4810:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[12]) < 0;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_088B483C;
      }
      goto L_088B4818;
    }
L_088B4818:
    aot_gpr[31] = (0x088B4820u);
    aot_gpr[5] = (aot_gpr[12] | 0u);
    goto L_088B46CC;
L_088B4820:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B483C;
      }
      goto L_088B4828;
    }
L_088B4828:
    aot_gpr[4] = (aot_gpr[12] << 2u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[9]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088B483C;
L_088B483C:
    aot_gpr[31] = (0x088B4844u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_088B4608;
L_088B4844:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B485C;
      }
      goto L_088B4850;
    }
L_088B4850:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B485C;
      }
      goto L_088B4858;
    }
L_088B4858:
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_088B485C;
L_088B485C:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4870:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[9] = (2214u << 16u);
    aot_gpr[8] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(29648));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(27716));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    goto L_088B4894;
L_088B4894:
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x088B48A0u);
    aot_gpr[5] = (aot_gpr[10] | 0u);
    goto L_088B46CC;
L_088B48A0:
    if (aot_gpr[2] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
        goto L_088B48B0;
    }
    goto L_088B48A8;
L_088B48A8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088B48B0;
      }
      goto L_088B48B0;
    }
L_088B48B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[10] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B4894;
      }
      goto L_088B48C8;
    }
L_088B48C8:
    aot_gpr[31] = (0x088B48D0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_088B4608;
L_088B48D0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B48DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(132)));
    aot_gpr[2] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B4930;
      }
      goto L_088B48F8;
    }
L_088B48F8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7516)));
    aot_gpr[31] = (0x088B4908u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x088B4908u) goto L_088B4908;
    return;
L_088B4908:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088B4930;
L_088B4930:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4940:
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(148)));
    aot_gpr[5] = (aot_gpr[6] << (aot_gpr[5] & 31u));
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    aot_gpr[5] = (aot_gpr[7] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(148), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B495C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(148)));
    aot_gpr[7] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[7] << (aot_gpr[5] & 31u));
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(148), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4974:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088B4984u);
    // nop
    goto L_088B4870;
L_088B4984:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4990:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    goto L_088B49BC;
L_088B49BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(64), 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B49BC;
      }
      goto L_088B49D0;
    }
L_088B49D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(128), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(132), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(136), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(140), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(148), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(160), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(164), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B49F0:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    goto L_088B4A1C;
L_088B4A1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(64), 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B4A1C;
      }
      goto L_088B4A30;
    }
L_088B4A30:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(128), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(132), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(136), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(140), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(148), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(152), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4A54:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(132)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_088B4A94;
      }
      goto L_088B4A68;
    }
L_088B4A68:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088B4A8C;
      }
      goto L_088B4A74;
    }
L_088B4A74:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B4A68;
      }
      goto L_088B4A84;
    }
L_088B4A84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4A94;
      }
      goto L_088B4A8C;
    }
L_088B4A8C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B4A98;
      }
      goto L_088B4A94;
    }
L_088B4A94:
    aot_gpr[2] = (0u | 0u);
    goto L_088B4A98;
L_088B4A98:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4AA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(132)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[6]) < 16 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B4B10;
      }
      goto L_088B4AC4;
    }
L_088B4AC4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088B4AD0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_088B4A54;
L_088B4AD0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B4B10;
      }
      goto L_088B4AD8;
    }
L_088B4AD8:
    aot_gpr[31] = (0x088B4AE0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088B4974;
L_088B4AE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(132)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[17] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(132), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(432), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(436), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088B4B10u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_088B495C;
L_088B4B10:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4B24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(132)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 16 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4BA8;
      }
      goto L_088B4B4C;
    }
L_088B4B4C:
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(436)));
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(132), aot_gpr[4]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088B4B84;
      }
      goto L_088B4B70;
    }
L_088B4B70:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(436)));
    aot_gpr[31] = (0x088B4B7Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088B46CC;
L_088B4B7C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4B94;
      }
      goto L_088B4B84;
    }
L_088B4B84:
    aot_gpr[31] = (0x088B4B8Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088B4974;
L_088B4B8C:
    aot_gpr[7] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(436), aot_gpr[7]);
    goto L_088B4B94;
L_088B4B94:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(432), aot_gpr[5]);
    aot_gpr[31] = (0x088B4BA8u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    goto L_088B495C;
L_088B4BA8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4BBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(128), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4BD4;
      }
      goto L_088B4BCC;
    }
L_088B4BCC:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(485), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_088B4BD4;
L_088B4BD4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4BDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(132)));
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(64), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(132), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4BF8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(132)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(132), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4C08:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(132), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(128), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(148), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4C18:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(160)));
    aot_fpr[13] = aot_fpr[13] / aot_fpr[14];
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4C2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(436)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(436), aot_gpr[8]);
    aot_gpr[9] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088B4C4Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_088B4940;
L_088B4C4C:
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x088B4C58u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    goto L_088B495C;
L_088B4C58:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4C64:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088B4C80u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_088B48DC;
L_088B4C80:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4CB8;
      }
      goto L_088B4C8C;
    }
L_088B4C8C:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(436)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088B4C9Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_088B46E4;
L_088B4C9C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088B4CB8;
      }
      goto L_088B4CA8;
    }
L_088B4CA8:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088B4CB8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088B4C2C;
L_088B4CB8:
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
L_088B4CD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[22]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_fpr[18] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[28] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[19] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(140), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(136), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7520)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(560)));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[22]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(132)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7508)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[22]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4444)));
    aot_fpr[12] = aot_fpr[26] / aot_fpr[12];
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(456)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[6]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(520)));
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[6]);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(536)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(144)));
    aot_gpr[7] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[7]);
    aot_gpr[5] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(488)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[5]);
    aot_fpr[16] = aot_fpr[16] - aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_fpr[0] = aot_fpr[26] - aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(156), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[30] = (0u | 0u);
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[30]) < static_cast<std::int32_t>(aot_gpr[22]) ? 1u : 0u);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[16];
    aot_fpr[12] = aot_fpr[14] + aot_fpr[15];
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 110u, 0x088B5828u>(ctx, &aot_mem); return;
      }
      goto L_088B4DEC;
    }
L_088B4DEC:
    aot_gpr[4] = (16025u << 16u);
    aot_fpr[13] = aot_fpr[26] - aot_fpr[19];
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[16] = aot_fpr[26] - aot_fpr[12];
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    aot_gpr[4] = (16469u << 16u);
    aot_fpr[14] = aot_fpr[12] - aot_fpr[14];
    aot_gpr[4] = (aot_gpr[4] | 20447u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(27588));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    aot_gpr[4] = (16153u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[4] = (15897u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[13] = aot_fpr[26] - aot_fpr[13];
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (49024u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(27844));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(27780));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_088B4E84;
L_088B4E84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 109u, 0x088B5810u>(ctx, &aot_mem); return;
      }
      goto L_088B4E94;
    }
L_088B4E94:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(200)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(196)));
    aot_gpr[20] = (aot_gpr[16] + static_cast<std::uint32_t>(384));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[23] = (aot_gpr[22] + static_cast<std::uint32_t>(96));
    aot_gpr[31] = (0x088B4EB4u);
    aot_gpr[17] = (aot_gpr[23] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 139u, 0x0880BA6Cu>(ctx, &aot_mem) && ctx.pc == 0x088B4EB4u) goto L_088B4EB4;
    return;
L_088B4EB4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 108u, 0x088B5808u>(ctx, &aot_mem); return;
      }
      goto L_088B4EBC;
    }
L_088B4EBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(28)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(436)));
    ctx.set_fpu_condition((aot_fpr[24] < aot_fpr[26]));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(432), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] << 3u);
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[19] = (aot_gpr[4] + aot_gpr[19]);
      if (branch_taken) {
          goto L_088B4EEC;
      }
      goto L_088B4EE0;
    }
L_088B4EE0:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[14] = aot_fpr[20] + aot_fpr[14];
      if (branch_taken) {
          goto L_088B4F80;
      }
      goto L_088B4EEC;
    }
L_088B4EEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B4F50;
      }
      goto L_088B4EF8;
    }
L_088B4EF8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[20] + aot_fpr[12];
        goto L_088B4F48;
    }
    goto L_088B4F0C;
L_088B4F0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(485)));
    if (aot_gpr[4] == 0u) {
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_088B4F24;
    }
    goto L_088B4F18;
L_088B4F18:
    { const float fs = aot_fpr[30]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[20] + aot_fpr[12];
      if (branch_taken) {
          goto L_088B4F40;
      }
      goto L_088B4F24;
    }
L_088B4F24:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[20] + aot_fpr[12];
        goto L_088B4F40;
    }
    goto L_088B4F34;
L_088B4F34:
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[20] - aot_fpr[12];
      if (branch_taken) {
          goto L_088B4F40;
      }
      goto L_088B4F40;
    }
L_088B4F40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4F48;
      }
      goto L_088B4F48;
    }
L_088B4F48:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088B4F80;
      }
      goto L_088B4F50;
    }
L_088B4F50:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088B4F80;
      }
      goto L_088B4F5C;
    }
L_088B4F5C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[28]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[20] + aot_fpr[12];
        goto L_088B4F7C;
    }
    goto L_088B4F70;
L_088B4F70:
    { const float fs = aot_fpr[30]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[20] + aot_fpr[12];
      if (branch_taken) {
          goto L_088B4F7C;
      }
      goto L_088B4F7C;
    }
L_088B4F7C:
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088B4F80;
L_088B4F80:
    ctx.set_fpu_condition((aot_fpr[24] <= aot_fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(388)));
      if (branch_taken) {
          goto L_088B4FB8;
      }
      goto L_088B4F90;
    }
L_088B4F90:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B4FB8;
      }
      goto L_088B4FA4;
    }
L_088B4FA4:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(491), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
      if (branch_taken) {
          goto L_088B4FC4;
      }
      goto L_088B4FB8;
    }
L_088B4FB8:
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(491), static_cast<std::uint8_t>(0u));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(140)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_088B4FC4;
L_088B4FC4:
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(140), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = aot_fpr[13] - aot_fpr[15];
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[28]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[4] = (0u | 1u);
        goto L_088B4FE8;
    }
    goto L_088B4FE8;
L_088B4FE8:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_fpr[22] = aot_fpr[14] - aot_fpr[13];
    aot_gpr[17] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.pc = 0x088B5000u; return;
}

void recomp_unit_0176(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0176_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_176(Runtime &runtime) {
    runtime.register_generated_unit(176u, 0x088B4000u, 4096u, &recomp_unit_0176, &recomp_unit_0176_entry);
    runtime.register_function(0x088B4000u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B40B0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B40C4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B40D0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B40DCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B40ECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B40F8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4104u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B411Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4140u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B415Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4174u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4180u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B41A0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B41B4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B41C4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B41D0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B41FCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4208u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B420Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4210u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4218u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4224u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4230u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4278u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B42A4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B42C4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B42D4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B42E0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4300u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4318u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4338u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4354u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B436Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4378u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4398u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B43ACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B43C0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B43D8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B43E4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B43F4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4418u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4424u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4428u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B442Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4434u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4440u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B44A8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B44BCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B44E0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B44F8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B450Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4524u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4544u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B454Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4564u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B456Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B458Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4594u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B45A8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B45B0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B45C8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B45D8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B45E8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4608u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B463Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4654u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4664u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4678u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4680u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4698u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B46A0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B46ACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B46CCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B46E4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4708u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4714u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4724u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4738u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4790u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B479Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B47A4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B47B8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B47C0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B47C8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B47D0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B47E4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B47ECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B47F4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B47FCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4810u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4818u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4820u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4828u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B483Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4844u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4850u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4858u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B485Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4870u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4894u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B48A0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B48A8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B48B0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B48C8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B48D0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B48DCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B48F8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4908u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4930u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4940u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B495Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4974u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4984u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4990u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B49BCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B49D0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B49F0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4A1Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4A30u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4A54u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4A68u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4A74u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4A84u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4A8Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4A94u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4A98u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4AA0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4AC4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4AD0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4AD8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4AE0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4B10u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4B24u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4B4Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4B70u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4B7Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4B84u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4B8Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4B94u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4BA8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4BBCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4BCCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4BD4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4BDCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4BF8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4C08u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4C18u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4C2Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4C4Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4C58u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4C64u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4C80u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4C8Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4C9Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4CA8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4CB8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4CD0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4DECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4E84u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4E94u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4EB4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4EBCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4EE0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4EECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4EF8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4F0Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4F18u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4F24u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4F34u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4F40u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4F48u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4F50u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4F5Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4F70u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4F7Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4F80u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4F90u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4FA4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4FB8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4FC4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x088B4FE8u, &recomp_unit_0176, "recomp_unit_0176");
}
} // namespace psprecomp
