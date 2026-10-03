#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0142[1022] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0,
    3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 12, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0,
    0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 21, 0, 22, 0, 0, 0, 23, 0, 24, 0, 25, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 32,
    0, 33, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0, 42, 0,
    43, 0, 44, 0, 45, 0, 46, 0, 0, 47, 0, 48, 0, 49, 0, 0, 0, 50, 0, 51, 0, 52, 0, 53, 0, 54, 0, 0, 55, 0, 56, 0,
    57, 0, 58, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 62, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 65, 0, 66, 0, 67, 0, 0, 68, 0, 69, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 74, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 77, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    81, 82, 0, 83, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    86, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0,
    0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 99, 0, 0, 100,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 0,
    0, 0, 0, 0, 114, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0,
    0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0,
    0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0,
    0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 142, 143, 0,
    0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 148, 149, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0,
    0, 0, 152, 0, 0, 0, 0, 153, 0, 154, 155, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159,
    0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164,
    0, 0, 0, 165, 0, 166, 0, 167, 0, 168, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173,
    0, 174, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0,
    179, 0, 180, 0, 0, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0,
    188, 0, 0, 0, 189, 0, 0, 0, 0, 190, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194,
};
void recomp_unit_0142_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08892000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0142[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08892000;
    case 2u: goto L_08892074;
    case 3u: goto L_08892080;
    case 4u: goto L_08892094;
    case 5u: goto L_088920B0;
    case 6u: goto L_088920C0;
    case 7u: goto L_088920D8;
    case 8u: goto L_088920EC;
    case 9u: goto L_088920F0;
    case 10u: goto L_08892134;
    case 11u: goto L_08892148;
    case 12u: goto L_0889214C;
    case 13u: goto L_08892150;
    case 14u: goto L_08892190;
    case 15u: goto L_08892200;
    case 16u: goto L_088922C4;
    case 17u: goto L_088922D8;
    case 18u: goto L_088922F0;
    case 19u: goto L_08892310;
    case 20u: goto L_0889231C;
    case 21u: goto L_0889232C;
    case 22u: goto L_08892334;
    case 23u: goto L_08892344;
    case 24u: goto L_0889234C;
    case 25u: goto L_08892354;
    case 26u: goto L_0889235C;
    case 27u: goto L_08892364;
    case 28u: goto L_08892390;
    case 29u: goto L_08892398;
    case 30u: goto L_088923DC;
    case 31u: goto L_088923F8;
    case 32u: goto L_088923FC;
    case 33u: goto L_08892404;
    case 34u: goto L_0889241C;
    case 35u: goto L_08892424;
    case 36u: goto L_0889243C;
    case 37u: goto L_08892450;
    case 38u: goto L_08892458;
    case 39u: goto L_08892460;
    case 40u: goto L_08892468;
    case 41u: goto L_08892470;
    case 42u: goto L_08892478;
    case 43u: goto L_08892480;
    case 44u: goto L_08892488;
    case 45u: goto L_08892490;
    case 46u: goto L_08892498;
    case 47u: goto L_088924A4;
    case 48u: goto L_088924AC;
    case 49u: goto L_088924B4;
    case 50u: goto L_088924C4;
    case 51u: goto L_088924CC;
    case 52u: goto L_088924D4;
    case 53u: goto L_088924DC;
    case 54u: goto L_088924E4;
    case 55u: goto L_088924F0;
    case 56u: goto L_088924F8;
    case 57u: goto L_08892500;
    case 58u: goto L_08892508;
    case 59u: goto L_08892510;
    case 60u: goto L_08892520;
    case 61u: goto L_0889252C;
    case 62u: goto L_08892534;
    case 63u: goto L_08892540;
    case 64u: goto L_08892548;
    case 65u: goto L_08892588;
    case 66u: goto L_08892590;
    case 67u: goto L_08892598;
    case 68u: goto L_088925A4;
    case 69u: goto L_088925AC;
    case 70u: goto L_088925B0;
    case 71u: goto L_08892658;
    case 72u: goto L_08892660;
    case 73u: goto L_08892700;
    case 74u: goto L_08892708;
    case 75u: goto L_08892718;
    case 76u: goto L_08892724;
    case 77u: goto L_08892738;
    case 78u: goto L_08892740;
    case 79u: goto L_0889274C;
    case 80u: goto L_08892758;
    case 81u: goto L_08892780;
    case 82u: goto L_08892784;
    case 83u: goto L_0889278C;
    case 84u: goto L_08892794;
    case 85u: goto L_0889279C;
    case 86u: goto L_08892800;
    case 87u: goto L_08892808;
    case 88u: goto L_08892814;
    case 89u: goto L_08892834;
    case 90u: goto L_0889283C;
    case 91u: goto L_08892844;
    case 92u: goto L_08892850;
    case 93u: goto L_0889286C;
    case 94u: goto L_08892884;
    case 95u: goto L_08892894;
    case 96u: goto L_088928A0;
    case 97u: goto L_088928DC;
    case 98u: goto L_088928E4;
    case 99u: goto L_088928F0;
    case 100u: goto L_088928FC;
    case 101u: goto L_08892900;
    case 102u: goto L_0889293C;
    case 103u: goto L_08892948;
    case 104u: goto L_08892954;
    case 105u: goto L_08892964;
    case 106u: goto L_0889296C;
    case 107u: goto L_088929AC;
    case 108u: goto L_088929B4;
    case 109u: goto L_088929C0;
    case 110u: goto L_088929D0;
    case 111u: goto L_088929D8;
    case 112u: goto L_088929E4;
    case 113u: goto L_088929F0;
    case 114u: goto L_08892A10;
    case 115u: goto L_08892A14;
    case 116u: goto L_08892A34;
    case 117u: goto L_08892A6C;
    case 118u: goto L_08892A8C;
    case 119u: goto L_08892A94;
    case 120u: goto L_08892ACC;
    case 121u: goto L_08892AE8;
    case 122u: goto L_08892B00;
    case 123u: goto L_08892B14;
    case 124u: goto L_08892B2C;
    case 125u: goto L_08892B3C;
    case 126u: goto L_08892B40;
    case 127u: goto L_08892B60;
    case 128u: goto L_08892B6C;
    case 129u: goto L_08892B84;
    case 130u: goto L_08892B98;
    case 131u: goto L_08892BB0;
    case 132u: goto L_08892BC4;
    case 133u: goto L_08892BC8;
    case 134u: goto L_08892BE8;
    case 135u: goto L_08892BF4;
    case 136u: goto L_08892C04;
    case 137u: goto L_08892C1C;
    case 138u: goto L_08892C30;
    case 139u: goto L_08892C3C;
    case 140u: goto L_08892C54;
    case 141u: goto L_08892C68;
    case 142u: goto L_08892C74;
    case 143u: goto L_08892C78;
    case 144u: goto L_08892C8C;
    case 145u: goto L_08892C98;
    case 146u: goto L_08892CB0;
    case 147u: goto L_08892CC4;
    case 148u: goto L_08892CCC;
    case 149u: goto L_08892CD0;
    case 150u: goto L_08892CE4;
    case 151u: goto L_08892CF0;
    case 152u: goto L_08892D08;
    case 153u: goto L_08892D1C;
    case 154u: goto L_08892D24;
    case 155u: goto L_08892D28;
    case 156u: goto L_08892D3C;
    case 157u: goto L_08892D48;
    case 158u: goto L_08892D54;
    case 159u: goto L_08892D7C;
    case 160u: goto L_08892DA0;
    case 161u: goto L_08892DAC;
    case 162u: goto L_08892DBC;
    case 163u: goto L_08892DE0;
    case 164u: goto L_08892DFC;
    case 165u: goto L_08892E0C;
    case 166u: goto L_08892E14;
    case 167u: goto L_08892E1C;
    case 168u: goto L_08892E24;
    case 169u: goto L_08892E28;
    case 170u: goto L_08892E44;
    case 171u: goto L_08892E50;
    case 172u: goto L_08892E60;
    case 173u: goto L_08892E7C;
    case 174u: goto L_08892E84;
    case 175u: goto L_08892E8C;
    case 176u: goto L_08892EA0;
    case 177u: goto L_08892EEC;
    case 178u: goto L_08892EF8;
    case 179u: goto L_08892F00;
    case 180u: goto L_08892F08;
    case 181u: goto L_08892F18;
    case 182u: goto L_08892F20;
    case 183u: goto L_08892F28;
    case 184u: goto L_08892F30;
    case 185u: goto L_08892F38;
    case 186u: goto L_08892F40;
    case 187u: goto L_08892F5C;
    case 188u: goto L_08892F80;
    case 189u: goto L_08892F90;
    case 190u: goto L_08892FA4;
    case 191u: goto L_08892FA8;
    case 192u: goto L_08892FC4;
    case 193u: goto L_08892FE0;
    case 194u: goto L_08892FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08892000:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[22] | 0u);
    aot_gpr[10] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08892074u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 47u, 0x0888F4E8u>(ctx, &aot_mem) && ctx.pc == 0x08892074u) goto L_08892074;
    return;
L_08892074:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08892150;
      }
      goto L_08892080;
    }
L_08892080:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(28))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(56))))));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088920B0;
      }
      goto L_08892094;
    }
L_08892094:
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(56))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_088920D8;
      }
      goto L_088920B0;
    }
L_088920B0:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(58))))));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088920D8;
      }
      goto L_088920C0;
    }
L_088920C0:
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(58))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(aot_gpr[5]));
    goto L_088920D8;
L_088920D8:
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(56))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(58))))));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0889214C;
      }
      goto L_088920EC;
    }
L_088920EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    goto L_088920F0;
L_088920F0:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[12]);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    aot_gpr[8] = (aot_gpr[22] | 0u);
    aot_gpr[9] = (aot_gpr[17] | 0u);
    aot_gpr[11] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08892134u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 114u, 0x0888FFD0u>(ctx, &aot_mem) && ctx.pc == 0x08892134u) goto L_08892134;
    return;
L_08892134:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(58))))));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
        goto L_088920F0;
    }
    goto L_08892148;
L_08892148:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(28))))));
    goto L_0889214C;
L_0889214C:
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_08892150;
L_08892150:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(244)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(248)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(252)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08892190:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-240));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[6]);
    aot_gpr[5] = (8192u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[11] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[8]);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[9]);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[10]);
      if (branch_taken) {
          goto L_08892A34;
      }
      goto L_08892200;
    }
L_08892200:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (4096u << 16u);
    aot_gpr[30] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[5]);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[5]);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[5]);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[5]);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[5]);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[5]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[30] = (0u < aot_gpr[30] ? 1u : 0u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[23] = (0u | 0u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_0889252C;
      }
      goto L_088922C4;
    }
L_088922C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-11));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(51) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-11));
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_088922D8;
    }
L_088922D8:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(13024)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088922F0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[22] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x08892310u);
    aot_gpr[5] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08892310u) goto L_08892310;
    return;
L_08892310:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889232C;
      }
      goto L_0889231C;
    }
L_0889231C:
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (0x0889232Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 88u, 0x08944C94u>(ctx, &aot_mem) && ctx.pc == 0x0889232Cu) goto L_0889232C;
    return;
L_0889232C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_08892334;
    }
L_08892334:
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_08892344;
    }
L_08892344:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_0889234C;
    }
L_0889234C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_08892354;
    }
L_08892354:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[16]);
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_0889235C;
    }
L_0889235C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[16]);
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_08892364;
    }
L_08892364:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7000)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08892390u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08892390u) goto L_08892390;
    return;
L_08892390:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_08892398;
    }
L_08892398:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(aot_gpr[22]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[22] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[22]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7000)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(3))))));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[7] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088923DCu);
    aot_gpr[6] = (aot_gpr[9] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088923DCu) goto L_088923DC;
    return;
L_088923DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[30]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_088923FC;
      }
      goto L_088923F8;
    }
L_088923F8:
    aot_gpr[30] = (0u | 1u);
    goto L_088923FC;
L_088923FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_08892404;
    }
L_08892404:
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0889241Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12696));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0889241Cu) goto L_0889241C;
    return;
L_0889241C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_08892424;
    }
L_08892424:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(aot_gpr[22]));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x0889243Cu);
    aot_gpr[22] = (aot_gpr[4] + static_cast<std::uint32_t>(12700));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x0889243Cu) goto L_0889243C;
    return;
L_0889243C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08892450u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08892450u) goto L_08892450;
    return;
L_08892450:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_08892458;
    }
L_08892458:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[16]);
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_08892460;
    }
L_08892460:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[16]);
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_08892468;
    }
L_08892468:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_08892470;
    }
L_08892470:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[16]);
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_08892478;
    }
L_08892478:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[16]);
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_08892480;
    }
L_08892480:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_08892488;
    }
L_08892488:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[16]);
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_08892490;
    }
L_08892490:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[16]);
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_08892498;
    }
L_08892498:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[16]);
      if (branch_taken) {
          goto L_088924AC;
      }
      goto L_088924A4;
    }
L_088924A4:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088924AC;
L_088924AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_088924B4;
    }
L_088924B4:
    aot_gpr[23] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088924CC;
      }
      goto L_088924C4;
    }
L_088924C4:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088924CC;
L_088924CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_088924D4;
    }
L_088924D4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[16]);
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_088924DC;
    }
L_088924DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_088924E4;
    }
L_088924E4:
    aot_gpr[21] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[16]);
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_088924F0;
    }
L_088924F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_088924F8;
    }
L_088924F8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[16]);
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_08892500;
    }
L_08892500:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_08892508;
    }
L_08892508:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[16]);
      if (branch_taken) {
          goto L_08892510;
      }
      goto L_08892510;
    }
L_08892510:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08892520u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 26u, 0x088942BCu>(ctx, &aot_mem) && ctx.pc == 0x08892520u) goto L_08892520;
    return;
L_08892520:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088922C4;
      }
      goto L_0889252C;
    }
L_0889252C:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08892700;
      }
      goto L_08892534;
    }
L_08892534:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08892590;
      }
      goto L_08892540;
    }
L_08892540:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08892700;
      }
      goto L_08892548;
    }
L_08892548:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[4] = (0u | 8u);
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[8] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x08892588u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x08892588u) goto L_08892588;
    return;
L_08892588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08892700;
      }
      goto L_08892590;
    }
L_08892590:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_088925B0;
      }
      goto L_08892598;
    }
L_08892598:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08892660;
      }
      goto L_088925A4;
    }
L_088925A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08892700;
      }
      goto L_088925AC;
    }
L_088925AC:
    aot_gpr[5] = (2216u << 16u);
    goto L_088925B0;
L_088925B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[4] = (0u | 8u);
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    aot_gpr[7] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[9] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[8] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(-3664), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[7] = (64u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-3662), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[7]);
    aot_gpr[8] = (0u | 255u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-3661), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[8] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(-3660), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(-3658), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[7] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(-3656), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[5] = (32u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[5] = (256u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08892658u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-28808), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x08892658u) goto L_08892658;
    return;
L_08892658:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08892700;
      }
      goto L_08892660;
    }
L_08892660:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[4] = (0u | 8u);
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    aot_gpr[7] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[9] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[8] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(-3664), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_gpr[7] = (0u | 1u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[8] = (64u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-3662), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[8]);
    aot_gpr[9] = (0u | 255u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-3661), static_cast<std::uint8_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(-3660), static_cast<std::uint16_t>(0u));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(-3658), static_cast<std::uint16_t>(0u));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[8]);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(-3656), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[7] = (32u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-28808), 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[31] = (0x08892700u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x08892700u) goto L_08892700;
    return;
L_08892700:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08892A34;
      }
      goto L_08892708;
    }
L_08892708:
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[22] = (0u | 1u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_08892724;
      }
      goto L_08892718;
    }
L_08892718:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08892724;
L_08892724:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[22]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_08892A34;
      }
      goto L_08892738;
    }
L_08892738:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08892784;
      }
      goto L_08892740;
    }
L_08892740:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08892784;
      }
      goto L_0889274C;
    }
L_0889274C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08892784;
      }
      goto L_08892758;
    }
L_08892758:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08892780u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08892780u) goto L_08892780;
    return;
L_08892780:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08892784;
L_08892784:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088929D0;
      }
      goto L_0889278C;
    }
L_0889278C:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08892808;
      }
      goto L_08892794;
    }
L_08892794:
    aot_gpr[31] = (0x0889279Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 242u, 0x0888BF14u>(ctx, &aot_mem) && ctx.pc == 0x0889279Cu) goto L_0889279C;
    return;
L_0889279C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[7] = (aot_gpr[2] | 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[12]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[13]);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[9] = (aot_gpr[17] | 0u);
    aot_gpr[10] = (aot_gpr[30] | 0u);
    aot_gpr[11] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08892800u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 197u, 0x0888DF38u>(ctx, &aot_mem) && ctx.pc == 0x08892800u) goto L_08892800;
    return;
L_08892800:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088929D0;
      }
      goto L_08892808;
    }
L_08892808:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889283C;
      }
      goto L_08892814;
    }
L_08892814:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[9] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08892834u);
    aot_gpr[10] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 175u, 0x0888EF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08892834u) goto L_08892834;
    return;
L_08892834:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088929D0;
      }
      goto L_0889283C;
    }
L_0889283C:
    { const bool branch_taken = aot_gpr[23] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(aot_gpr[17]));
      if (branch_taken) {
          goto L_08892948;
      }
      goto L_08892844;
    }
L_08892844:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08892894;
      }
      goto L_08892850;
    }
L_08892850:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (16u << 16u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[23] + static_cast<std::uint32_t>(14))))));
      if (branch_taken) {
          goto L_08892884;
      }
      goto L_0889286C;
    }
L_0889286C:
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    goto L_08892884;
L_08892884:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08892894;
L_08892894:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088928E4;
      }
      goto L_088928A0;
    }
L_088928A0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[30]);
    aot_gpr[11] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x088928DCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 105u, 0x0889173Cu>(ctx, &aot_mem) && ctx.pc == 0x088928DCu) goto L_088928DC;
    return;
L_088928DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889293C;
      }
      goto L_088928E4;
    }
L_088928E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
        goto L_08892900;
    }
    goto L_088928F0;
L_088928F0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088928FCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 90u, 0x0885B74Cu>(ctx, &aot_mem) && ctx.pc == 0x088928FCu) goto L_088928FC;
    return;
L_088928FC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    goto L_08892900;
L_08892900:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0889293Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 8u, 0x0888F0B8u>(ctx, &aot_mem) && ctx.pc == 0x0889293Cu) goto L_0889293C;
    return;
L_0889293C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_088929D0;
      }
      goto L_08892948;
    }
L_08892948:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088929B4;
      }
      goto L_08892954;
    }
L_08892954:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
        goto L_0889296C;
    }
    goto L_08892964;
L_08892964:
    aot_gpr[17] = (0u | 1u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    goto L_0889296C;
L_0889296C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[12]);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    aot_gpr[10] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088929ACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[13]);
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 163u, 0x08891DB8u>(ctx, &aot_mem) && ctx.pc == 0x088929ACu) goto L_088929AC;
    return;
L_088929AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088929D0;
      }
      goto L_088929B4;
    }
L_088929B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088929D0;
      }
      goto L_088929C0;
    }
L_088929C0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[31] = (0x088929D0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 6u, 0x0889011Cu>(ctx, &aot_mem) && ctx.pc == 0x088929D0u) goto L_088929D0;
    return;
L_088929D0:
    if (aot_gpr[20] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_08892A14;
    }
    goto L_088929D8;
L_088929D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[4] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_08892A14;
    }
    goto L_088929E4;
L_088929E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(33)));
    if (aot_gpr[4] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_08892A14;
    }
    goto L_088929F0;
L_088929F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08892A10u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08892A10u) goto L_08892A10;
    return;
L_08892A10:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_08892A14;
L_08892A14:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[20];
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[22];
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[22]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08892738;
      }
      goto L_08892A34;
    }
L_08892A34:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08892A6C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26056), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08892A8C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08892A94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08892ACCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x08892ACCu) goto L_08892ACC;
    return;
L_08892ACC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6516));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08892AE8u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 150u, 0x08A4DAB8u>(ctx, &aot_mem) && ctx.pc == 0x08892AE8u) goto L_08892AE8;
    return;
L_08892AE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08892B60;
      }
      goto L_08892B00;
    }
L_08892B00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[31] = (0x08892B14u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 151u, 0x08A4DAC0u>(ctx, &aot_mem) && ctx.pc == 0x08892B14u) goto L_08892B14;
    return;
L_08892B14:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[20]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08892B40;
      }
      goto L_08892B2C;
    }
L_08892B2C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08892B3Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 152u, 0x088897F0u>(ctx, &aot_mem) && ctx.pc == 0x08892B3Cu) goto L_08892B3C;
    return;
L_08892B3C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_08892B40;
L_08892B40:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08892B00;
      }
      goto L_08892B60;
    }
L_08892B60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x08892B6Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 152u, 0x08A4DAC8u>(ctx, &aot_mem) && ctx.pc == 0x08892B6Cu) goto L_08892B6C;
    return;
L_08892B6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08892BE8;
      }
      goto L_08892B84;
    }
L_08892B84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[31] = (0x08892B98u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 73u, 0x08A4B414u>(ctx, &aot_mem) && ctx.pc == 0x08892B98u) goto L_08892B98;
    return;
L_08892B98:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[20]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08892BC8;
      }
      goto L_08892BB0;
    }
L_08892BB0:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08892BC4u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 203u, 0x08943F50u>(ctx, &aot_mem) && ctx.pc == 0x08892BC4u) goto L_08892BC4;
    return;
L_08892BC4:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_08892BC8;
L_08892BC8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08892B84;
      }
      goto L_08892BE8;
    }
L_08892BE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (0x08892BF4u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 153u, 0x08A4DAD0u>(ctx, &aot_mem) && ctx.pc == 0x08892BF4u) goto L_08892BF4;
    return;
L_08892BF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[31] = (0x08892C04u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 154u, 0x08A4DAD8u>(ctx, &aot_mem) && ctx.pc == 0x08892C04u) goto L_08892C04;
    return;
L_08892C04:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08892C8C;
      }
      goto L_08892C1C;
    }
L_08892C1C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[20]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08892C78;
      }
      goto L_08892C30;
    }
L_08892C30:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08892C3Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 155u, 0x08A4DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08892C3Cu) goto L_08892C3C;
    return;
L_08892C3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[20]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08892C74;
      }
      goto L_08892C54;
    }
L_08892C54:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08892C68u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0284_entry, 284u, 83u, 0x08920718u>(ctx, &aot_mem) && ctx.pc == 0x08892C68u) goto L_08892C68;
    return;
L_08892C68:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[20]);
    goto L_08892C74;
L_08892C74:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08892C78;
L_08892C78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08892C1C;
      }
      goto L_08892C8C;
    }
L_08892C8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x08892C98u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 156u, 0x08A4DAE8u>(ctx, &aot_mem) && ctx.pc == 0x08892C98u) goto L_08892C98;
    return;
L_08892C98:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08892CE4;
      }
      goto L_08892CB0;
    }
L_08892CB0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08892CD0;
      }
      goto L_08892CC4;
    }
L_08892CC4:
    aot_gpr[31] = (0x08892CCCu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 157u, 0x08A4DAF0u>(ctx, &aot_mem) && ctx.pc == 0x08892CCCu) goto L_08892CCC;
    return;
L_08892CCC:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08892CD0;
L_08892CD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08892CB0;
      }
      goto L_08892CE4;
    }
L_08892CE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x08892CF0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 156u, 0x08A4DAE8u>(ctx, &aot_mem) && ctx.pc == 0x08892CF0u) goto L_08892CF0;
    return;
L_08892CF0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08892D3C;
      }
      goto L_08892D08;
    }
L_08892D08:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08892D28;
      }
      goto L_08892D1C;
    }
L_08892D1C:
    aot_gpr[31] = (0x08892D24u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 157u, 0x08A4DAF0u>(ctx, &aot_mem) && ctx.pc == 0x08892D24u) goto L_08892D24;
    return;
L_08892D24:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08892D28;
L_08892D28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08892D08;
      }
      goto L_08892D3C;
    }
L_08892D3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    aot_gpr[31] = (0x08892D48u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 158u, 0x08A4DAF8u>(ctx, &aot_mem) && ctx.pc == 0x08892D48u) goto L_08892D48;
    return;
L_08892D48:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), aot_gpr[2]);
    aot_gpr[31] = (0x08892D54u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08892A8C;
L_08892D54:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08892D7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29232)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08892DBC;
      }
      goto L_08892DA0;
    }
L_08892DA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(-29228)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08892DBC;
      }
      goto L_08892DAC;
    }
L_08892DAC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08892DBCu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08892DBCu) goto L_08892DBC;
    return;
L_08892DBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-29232), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(-29228), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-29224), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08892DE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08892E8C;
      }
      goto L_08892DFC;
    }
L_08892DFC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6516));
    aot_gpr[31] = (0x08892E0Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0312_entry, 312u, 155u, 0x0893CC3Cu>(ctx, &aot_mem) && ctx.pc == 0x08892E0Cu) goto L_08892E0C;
    return;
L_08892E0C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08892E28;
      }
      goto L_08892E14;
    }
L_08892E14:
    aot_gpr[31] = (0x08892E1Cu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0312_entry, 312u, 116u, 0x0893CA68u>(ctx, &aot_mem) && ctx.pc == 0x08892E1Cu) goto L_08892E1C;
    return;
L_08892E1C:
    aot_gpr[31] = (0x08892E24u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08892D7C;
L_08892E24:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(164), 0u);
    goto L_08892E28;
L_08892E28:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7000), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-6996), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08892E44u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x08892E44u) goto L_08892E44;
    return;
L_08892E44:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08892E8C;
      }
      goto L_08892E50;
    }
L_08892E50:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08892E84;
      }
      goto L_08892E60;
    }
L_08892E60:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08892E7Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08892E7Cu) goto L_08892E7C;
    return;
L_08892E7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08892E8C;
      }
      goto L_08892E84;
    }
L_08892E84:
    aot_gpr[31] = (0x08892E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08892E8Cu) goto L_08892E8C;
    return;
L_08892E8C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08892EA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x08892EECu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 77u, 0x0888A4F0u>(ctx, &aot_mem) && ctx.pc == 0x08892EECu) goto L_08892EEC;
    return;
L_08892EEC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 4u, 0x08893020u>(ctx, &aot_mem); return;
      }
      goto L_08892EF8;
    }
L_08892EF8:
    aot_gpr[31] = (0x08892F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0312_entry, 312u, 155u, 0x0893CC3Cu>(ctx, &aot_mem) && ctx.pc == 0x08892F00u) goto L_08892F00;
    return;
L_08892F00:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08892F38;
      }
      goto L_08892F08;
    }
L_08892F08:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(164)));
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x08892F18u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08892F18u) goto L_08892F18;
    return;
L_08892F18:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08892F28;
      }
      goto L_08892F20;
    }
L_08892F20:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08892F38;
      }
      goto L_08892F28;
    }
L_08892F28:
    aot_gpr[31] = (0x08892F30u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0312_entry, 312u, 116u, 0x0893CA68u>(ctx, &aot_mem) && ctx.pc == 0x08892F30u) goto L_08892F30;
    return;
L_08892F30:
    aot_gpr[31] = (0x08892F38u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08892D7C;
L_08892F38:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 4u, 0x08893020u>(ctx, &aot_mem); return;
      }
      goto L_08892F40;
    }
L_08892F40:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7288)));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(71))))));
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[21] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (2216u << 16u);
      if (branch_taken) {
          goto L_08892FE0;
      }
      goto L_08892F5C;
    }
L_08892F5C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(71));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u | 32768u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[31] = (0x08892F80u);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 255u, 0x08876EA0u>(ctx, &aot_mem) && ctx.pc == 0x08892F80u) goto L_08892F80;
    return;
L_08892F80:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08892FA8;
      }
      goto L_08892F90;
    }
L_08892F90:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08892FA4u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 114u, 0x08928AA8u>(ctx, &aot_mem) && ctx.pc == 0x08892FA4u) goto L_08892FA4;
    return;
L_08892FA4:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08892FA8;
L_08892FA8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] ^ 32768u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[23] = (aot_gpr[4] & 255u);
    aot_gpr[31] = (0x08892FC4u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x08892FC4u) goto L_08892FC4;
    return;
L_08892FC4:
    aot_gpr[4] = (aot_gpr[23] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-29232), aot_gpr[19]);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(-29228), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-29224), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08892FF4;
      }
      goto L_08892FE0;
    }
L_08892FE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-29232), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(-29228), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-29224), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08892FF4;
L_08892FF4:
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    ctx.pc = 0x08893000u; return;
}

void recomp_unit_0142(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0142_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_142(Runtime &runtime) {
    runtime.register_generated_unit(142u, 0x08892000u, 4096u, &recomp_unit_0142, &recomp_unit_0142_entry);
    runtime.register_function(0x08892000u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892074u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892080u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892094u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088920B0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088920C0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088920D8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088920ECu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088920F0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892134u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892148u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x0889214Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892150u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892190u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892200u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088922C4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088922D8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088922F0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892310u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x0889231Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x0889232Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892334u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892344u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x0889234Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892354u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x0889235Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892364u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892390u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892398u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088923DCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088923F8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088923FCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892404u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x0889241Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892424u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x0889243Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892450u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892458u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892460u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892468u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892470u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892478u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892480u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892488u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892490u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892498u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088924A4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088924ACu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088924B4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088924C4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088924CCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088924D4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088924DCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088924E4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088924F0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088924F8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892500u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892508u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892510u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892520u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x0889252Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892534u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892540u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892548u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892588u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892590u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892598u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088925A4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088925ACu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088925B0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892658u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892660u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892700u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892708u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892718u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892724u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892738u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892740u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x0889274Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892758u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892780u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892784u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x0889278Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892794u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x0889279Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892800u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892808u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892814u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892834u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x0889283Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892844u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892850u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x0889286Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892884u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892894u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088928A0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088928DCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088928E4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088928F0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088928FCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892900u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x0889293Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892948u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892954u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892964u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x0889296Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088929ACu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088929B4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088929C0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088929D0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088929D8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088929E4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x088929F0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892A10u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892A14u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892A34u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892A6Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892A8Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892A94u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892ACCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892AE8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892B00u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892B14u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892B2Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892B3Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892B40u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892B60u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892B6Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892B84u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892B98u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892BB0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892BC4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892BC8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892BE8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892BF4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892C04u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892C1Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892C30u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892C3Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892C54u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892C68u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892C74u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892C78u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892C8Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892C98u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892CB0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892CC4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892CCCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892CD0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892CE4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892CF0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892D08u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892D1Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892D24u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892D28u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892D3Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892D48u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892D54u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892D7Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892DA0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892DACu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892DBCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892DE0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892DFCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892E0Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892E14u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892E1Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892E24u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892E28u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892E44u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892E50u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892E60u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892E7Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892E84u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892E8Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892EA0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892EECu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892EF8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892F00u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892F08u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892F18u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892F20u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892F28u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892F30u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892F38u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892F40u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892F5Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892F80u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892F90u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892FA4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892FA8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892FC4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892FE0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08892FF4u, &recomp_unit_0142, "recomp_unit_0142");
}
} // namespace psprecomp
