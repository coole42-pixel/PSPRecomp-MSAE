#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0013[1023] = {
    1, 0, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10,
    0, 0, 11, 0, 0, 12, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 17, 0, 18, 0, 0, 19, 0,
    20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0,
    0, 0, 27, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 35, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 39,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0,
    0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 49, 0, 0, 0, 0, 0, 0, 0, 0,
    50, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 63, 0, 0, 64, 65, 0, 0, 66, 67, 0, 68, 0, 0, 0, 69, 0, 0,
    0, 70, 0, 0, 71, 0, 72, 0, 0, 73, 74, 0, 0, 75, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 81, 82, 0, 0, 0, 83, 0, 0,
    0, 84, 0, 85, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0,
    91, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 94, 0, 95, 96, 0, 0, 97, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103,
    0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 107, 108,
    0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 122, 123, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0,
    0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147,
    0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0,
    0, 0, 0, 152, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 157, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0,
    0, 0, 0, 160, 0, 161, 162, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 171, 0, 0, 0, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0,
    175, 176, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 179, 0, 180, 181, 0, 0, 182, 0, 183, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185,
    0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 195, 0, 196, 0, 0, 0, 0, 0, 197,
    0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211,
};
void recomp_unit_0013_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08811004u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0013[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08811004;
    case 2u: goto L_08811020;
    case 3u: goto L_08811024;
    case 4u: goto L_08811034;
    case 5u: goto L_08811048;
    case 6u: goto L_08811060;
    case 7u: goto L_08811068;
    case 8u: goto L_08811070;
    case 9u: goto L_08811078;
    case 10u: goto L_08811080;
    case 11u: goto L_0881108C;
    case 12u: goto L_08811098;
    case 13u: goto L_088110A0;
    case 14u: goto L_088110AC;
    case 15u: goto L_088110D8;
    case 16u: goto L_088110E0;
    case 17u: goto L_088110E8;
    case 18u: goto L_088110F0;
    case 19u: goto L_088110FC;
    case 20u: goto L_08811104;
    case 21u: goto L_0881111C;
    case 22u: goto L_08811130;
    case 23u: goto L_08811144;
    case 24u: goto L_08811154;
    case 25u: goto L_08811168;
    case 26u: goto L_08811178;
    case 27u: goto L_0881118C;
    case 28u: goto L_0881119C;
    case 29u: goto L_088111A4;
    case 30u: goto L_088111C4;
    case 31u: goto L_088111EC;
    case 32u: goto L_0881121C;
    case 33u: goto L_08811228;
    case 34u: goto L_0881123C;
    case 35u: goto L_08811248;
    case 36u: goto L_08811250;
    case 37u: goto L_08811264;
    case 38u: goto L_08811274;
    case 39u: goto L_08811280;
    case 40u: goto L_08811294;
    case 41u: goto L_088112AC;
    case 42u: goto L_088112CC;
    case 43u: goto L_088112F8;
    case 44u: goto L_08811318;
    case 45u: goto L_0881132C;
    case 46u: goto L_08811330;
    case 47u: goto L_08811348;
    case 48u: goto L_0881135C;
    case 49u: goto L_08811360;
    case 50u: goto L_08811384;
    case 51u: goto L_08811388;
    case 52u: goto L_088113B8;
    case 53u: goto L_088113C4;
    case 54u: goto L_088113E4;
    case 55u: goto L_08811400;
    case 56u: goto L_08811430;
    case 57u: goto L_08811450;
    case 58u: goto L_0881145C;
    case 59u: goto L_08811464;
    case 60u: goto L_08811474;
    case 61u: goto L_088114AC;
    case 62u: goto L_088114B8;
    case 63u: goto L_088114C0;
    case 64u: goto L_088114CC;
    case 65u: goto L_088114D0;
    case 66u: goto L_088114DC;
    case 67u: goto L_088114E0;
    case 68u: goto L_088114E8;
    case 69u: goto L_088114F8;
    case 70u: goto L_08811508;
    case 71u: goto L_08811514;
    case 72u: goto L_0881151C;
    case 73u: goto L_08811528;
    case 74u: goto L_0881152C;
    case 75u: goto L_08811538;
    case 76u: goto L_0881153C;
    case 77u: goto L_08811544;
    case 78u: goto L_08811564;
    case 79u: goto L_088115C8;
    case 80u: goto L_088115D0;
    case 81u: goto L_088115E4;
    case 82u: goto L_088115E8;
    case 83u: goto L_088115F8;
    case 84u: goto L_08811608;
    case 85u: goto L_08811610;
    case 86u: goto L_0881161C;
    case 87u: goto L_08811624;
    case 88u: goto L_08811640;
    case 89u: goto L_08811660;
    case 90u: goto L_08811670;
    case 91u: goto L_08811684;
    case 92u: goto L_08811694;
    case 93u: goto L_088116A8;
    case 94u: goto L_088116B4;
    case 95u: goto L_088116BC;
    case 96u: goto L_088116C0;
    case 97u: goto L_088116CC;
    case 98u: goto L_088116D4;
    case 99u: goto L_088116DC;
    case 100u: goto L_08811728;
    case 101u: goto L_08811734;
    case 102u: goto L_0881174C;
    case 103u: goto L_08811780;
    case 104u: goto L_08811790;
    case 105u: goto L_088117EC;
    case 106u: goto L_088117F4;
    case 107u: goto L_088117FC;
    case 108u: goto L_08811800;
    case 109u: goto L_0881180C;
    case 110u: goto L_08811818;
    case 111u: goto L_0881182C;
    case 112u: goto L_08811834;
    case 113u: goto L_08811844;
    case 114u: goto L_08811854;
    case 115u: goto L_08811860;
    case 116u: goto L_08811888;
    case 117u: goto L_088118A4;
    case 118u: goto L_088118C8;
    case 119u: goto L_088118EC;
    case 120u: goto L_088118F8;
    case 121u: goto L_08811904;
    case 122u: goto L_08811920;
    case 123u: goto L_08811924;
    case 124u: goto L_0881192C;
    case 125u: goto L_0881193C;
    case 126u: goto L_0881194C;
    case 127u: goto L_08811968;
    case 128u: goto L_08811978;
    case 129u: goto L_08811984;
    case 130u: goto L_088119A4;
    case 131u: goto L_088119AC;
    case 132u: goto L_088119B4;
    case 133u: goto L_088119D0;
    case 134u: goto L_088119DC;
    case 135u: goto L_088119EC;
    case 136u: goto L_08811A04;
    case 137u: goto L_08811A1C;
    case 138u: goto L_08811A28;
    case 139u: goto L_08811A38;
    case 140u: goto L_08811A54;
    case 141u: goto L_08811A60;
    case 142u: goto L_08811A70;
    case 143u: goto L_08811A8C;
    case 144u: goto L_08811AC0;
    case 145u: goto L_08811AD4;
    case 146u: goto L_08811AEC;
    case 147u: goto L_08811B00;
    case 148u: goto L_08811B10;
    case 149u: goto L_08811B20;
    case 150u: goto L_08811B50;
    case 151u: goto L_08811B70;
    case 152u: goto L_08811B90;
    case 153u: goto L_08811B98;
    case 154u: goto L_08811BA0;
    case 155u: goto L_08811BC0;
    case 156u: goto L_08811BCC;
    case 157u: goto L_08811BD0;
    case 158u: goto L_08811BE4;
    case 159u: goto L_08811BEC;
    case 160u: goto L_08811C10;
    case 161u: goto L_08811C18;
    case 162u: goto L_08811C1C;
    case 163u: goto L_08811C30;
    case 164u: goto L_08811C40;
    case 165u: goto L_08811C54;
    case 166u: goto L_08811C68;
    case 167u: goto L_08811C7C;
    case 168u: goto L_08811C94;
    case 169u: goto L_08811CB8;
    case 170u: goto L_08811CC0;
    case 171u: goto L_08811CC4;
    case 172u: goto L_08811CD8;
    case 173u: goto L_08811CE0;
    case 174u: goto L_08811CE8;
    case 175u: goto L_08811D04;
    case 176u: goto L_08811D08;
    case 177u: goto L_08811D18;
    case 178u: goto L_08811D2C;
    case 179u: goto L_08811D38;
    case 180u: goto L_08811D40;
    case 181u: goto L_08811D44;
    case 182u: goto L_08811D50;
    case 183u: goto L_08811D58;
    case 184u: goto L_08811D5C;
    case 185u: goto L_08811D80;
    case 186u: goto L_08811DA0;
    case 187u: goto L_08811DBC;
    case 188u: goto L_08811DD0;
    case 189u: goto L_08811DE4;
    case 190u: goto L_08811DF8;
    case 191u: goto L_08811E24;
    case 192u: goto L_08811E34;
    case 193u: goto L_08811E44;
    case 194u: goto L_08811E58;
    case 195u: goto L_08811E60;
    case 196u: goto L_08811E68;
    case 197u: goto L_08811E80;
    case 198u: goto L_08811E9C;
    case 199u: goto L_08811EA8;
    case 200u: goto L_08811EBC;
    case 201u: goto L_08811EC8;
    case 202u: goto L_08811EE8;
    case 203u: goto L_08811EF0;
    case 204u: goto L_08811F24;
    case 205u: goto L_08811F44;
    case 206u: goto L_08811F84;
    case 207u: goto L_08811F94;
    case 208u: goto L_08811FAC;
    case 209u: goto L_08811FC0;
    case 210u: goto L_08811FD4;
    case 211u: goto L_08811FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08811004:
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (20224u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (65280u << 16u);
      if (branch_taken) {
          goto L_08811024;
      }
      goto L_08811020;
    }
L_08811020:
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_08811024;
L_08811024:
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[14] - aot_fpr[12];
        goto L_08811048;
    }
    goto L_08811034;
L_08811034:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[5] & aot_gpr[4]);
      if (branch_taken) {
          goto L_08811060;
      }
      goto L_08811048;
    }
L_08811048:
    aot_gpr[5] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[4] = (aot_gpr[5] & aot_gpr[4]);
    goto L_08811060;
L_08811060:
    aot_gpr[31] = (0x08811068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 213u, 0x08810E24u>(ctx, &aot_mem) && ctx.pc == 0x08811068u) goto L_08811068;
    return;
L_08811068:
    aot_gpr[31] = (0x08811070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 115u, 0x08894D70u>(ctx, &aot_mem) && ctx.pc == 0x08811070u) goto L_08811070;
    return;
L_08811070:
    aot_gpr[31] = (0x08811078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 85u, 0x08888A44u>(ctx, &aot_mem) && ctx.pc == 0x08811078u) goto L_08811078;
    return;
L_08811078:
    aot_gpr[31] = (0x08811080u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 68u, 0x0893F730u>(ctx, &aot_mem) && ctx.pc == 0x08811080u) goto L_08811080;
    return;
L_08811080:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(-7290)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088110A0;
      }
      goto L_0881108C;
    }
L_0881108C:
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[31] = (0x08811098u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x08811098u) goto L_08811098;
    return;
L_08811098:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(-7290), static_cast<std::uint8_t>(0u));
    goto L_088110A0;
L_088110A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(-7192)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088110F0;
      }
      goto L_088110AC;
    }
L_088110AC:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-16192));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7184));
    aot_gpr[31] = (0x088110D8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-16180));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 136u, 0x08927B1Cu>(ctx, &aot_mem) && ctx.pc == 0x088110D8u) goto L_088110D8;
    return;
L_088110D8:
    aot_gpr[31] = (0x088110E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 124u, 0x08934A44u>(ctx, &aot_mem) && ctx.pc == 0x088110E0u) goto L_088110E0;
    return;
L_088110E0:
    aot_gpr[31] = (0x088110E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 65u, 0x088825E8u>(ctx, &aot_mem) && ctx.pc == 0x088110E8u) goto L_088110E8;
    return;
L_088110E8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(-7192), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088110FC;
      }
      goto L_088110F0;
    }
L_088110F0:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x088110FCu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 49u, 0x08931588u>(ctx, &aot_mem) && ctx.pc == 0x088110FCu) goto L_088110FC;
    return;
L_088110FC:
    aot_gpr[31] = (0x08811104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 79u, 0x0889A438u>(ctx, &aot_mem) && ctx.pc == 0x08811104u) goto L_08811104;
    return;
L_08811104:
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
L_0881111C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08811130u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 126u, 0x089438DCu>(ctx, &aot_mem) && ctx.pc == 0x08811130u) goto L_08811130;
    return;
L_08811130:
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811144:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08811154u);
    aot_gpr[4] = (0u | 256u);
    goto L_0881111C;
L_08811154:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7316), aot_gpr[2]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811168:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08811178u);
    aot_gpr[4] = (0u | 256u);
    goto L_0881111C;
L_08811178:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7312), aot_gpr[2]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881118C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0881119Cu);
    // nop
    goto L_08811144;
L_0881119C:
    aot_gpr[31] = (0x088111A4u);
    // nop
    goto L_08811168;
L_088111A4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7316)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7516)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088111C4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7312)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7312), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7312), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7516)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088111EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(-7288));
    aot_gpr[7] = (aot_gpr[6] & 255u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0881121Cu);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0287_entry, 287u, 184u, 0x08923CE8u>(ctx, &aot_mem) && ctx.pc == 0x0881121Cu) goto L_0881121C;
    return;
L_0881121C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811228:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0881123Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7288)));
    if (rt.invoke_chained_direct<&recomp_unit_0287_entry, 287u, 186u, 0x08923D10u>(ctx, &aot_mem) && ctx.pc == 0x0881123Cu) goto L_0881123C;
    return;
L_0881123C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811248:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811250:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08811274;
      }
      goto L_08811264;
    }
L_08811264:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08811274u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7224));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08811274u) goto L_08811274;
    return;
L_08811274:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811280:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08811294u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7184));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08811294u) goto L_08811294;
    return;
L_08811294:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-7192), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088112AC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22224), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088112CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x088112F8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x088112F8u) goto L_088112F8;
    return;
L_088112F8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24648));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08811330;
      }
      goto L_08811318;
    }
L_08811318:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0881132Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0284_entry, 284u, 83u, 0x08920718u>(ctx, &aot_mem) && ctx.pc == 0x0881132Cu) goto L_0881132C;
    return;
L_0881132C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08811330;
L_08811330:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08811360;
      }
      goto L_08811348;
    }
L_08811348:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0881135Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 181u, 0x08A4AD70u>(ctx, &aot_mem) && ctx.pc == 0x0881135Cu) goto L_0881135C;
    return;
L_0881135C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08811360;
L_08811360:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088113E4;
      }
      goto L_08811384;
    }
L_08811384:
    aot_gpr[20] = (2218u << 16u);
    goto L_08811388;
L_08811388:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x088113B8u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 29u, 0x0894B1B8u>(ctx, &aot_mem) && ctx.pc == 0x088113B8u) goto L_088113B8;
    return;
L_088113B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7344)));
    aot_gpr[31] = (0x088113C4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 45u, 0x0894B31Cu>(ctx, &aot_mem) && ctx.pc == 0x088113C4u) goto L_088113C4;
    return;
L_088113C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08811388;
      }
      goto L_088113E4;
    }
L_088113E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08811400u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 7u, 0x0894B05Cu>(ctx, &aot_mem) && ctx.pc == 0x08811400u) goto L_08811400;
    return;
L_08811400:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(82), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08811430:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08811450u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x08811450u) goto L_08811450;
    return;
L_08811450:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811464;
      }
      goto L_0881145C;
    }
L_0881145C:
    aot_gpr[31] = (0x08811464u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 176u, 0x08922D00u>(ctx, &aot_mem) && ctx.pc == 0x08811464u) goto L_08811464;
    return;
L_08811464:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811474:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[17] = (aot_gpr[5] & 255u);
    aot_gpr[20] = (0u | 3u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(23220)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    goto L_088114AC;
L_088114AC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4508)));
    if (aot_gpr[7] != aot_gpr[20]) {
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
        goto L_088114D0;
    }
    goto L_088114B8;
L_088114B8:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088114CC;
      }
      goto L_088114C0;
    }
L_088114C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4476)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088114E0;
      }
      goto L_088114CC;
    }
L_088114CC:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_088114D0;
L_088114D0:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088114AC;
      }
      goto L_088114DC;
    }
L_088114DC:
    aot_gpr[4] = (0u | 0u);
    goto L_088114E0;
L_088114E0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08811544;
      }
      goto L_088114E8;
    }
L_088114E8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088114F8u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    goto L_08811430;
L_088114F8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(23220)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    goto L_08811508;
L_08811508:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4508)));
    if (aot_gpr[7] != aot_gpr[20]) {
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
        goto L_0881152C;
    }
    goto L_08811514;
L_08811514:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08811528;
      }
      goto L_0881151C;
    }
L_0881151C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4476)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0881153C;
      }
      goto L_08811528;
    }
L_08811528:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    goto L_0881152C;
L_0881152C:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08811508;
      }
      goto L_08811538;
    }
L_08811538:
    aot_gpr[4] = (0u | 0u);
    goto L_0881153C;
L_0881153C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088114E8;
      }
      goto L_08811544;
    }
L_08811544:
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
L_08811564:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-208));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[21]);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (4u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088115C8u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 25u, 0x0891F258u>(ctx, &aot_mem) && ctx.pc == 0x088115C8u) goto L_088115C8;
    return;
L_088115C8:
    aot_gpr[31] = (0x088115D0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 250u, 0x0891EF6Cu>(ctx, &aot_mem) && ctx.pc == 0x088115D0u) goto L_088115D0;
    return;
L_088115D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088116A8;
      }
      goto L_088115E4;
    }
L_088115E4:
    aot_gpr[18] = (0u | 0u);
    goto L_088115E8;
L_088115E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[31] = (0x088115F8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 60u, 0x0894B468u>(ctx, &aot_mem) && ctx.pc == 0x088115F8u) goto L_088115F8;
    return;
L_088115F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0881161C;
      }
      goto L_08811608;
    }
L_08811608:
    aot_gpr[31] = (0x08811610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 49u, 0x0894B364u>(ctx, &aot_mem) && ctx.pc == 0x08811610u) goto L_08811610;
    return;
L_08811610:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0881161C;
L_0881161C:
    aot_gpr[31] = (0x08811624u);
    aot_gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 67u, 0x0894B4C8u>(ctx, &aot_mem) && ctx.pc == 0x08811624u) goto L_08811624;
    return;
L_08811624:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[31] = (0x08811640u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 78u, 0x0894B594u>(ctx, &aot_mem) && ctx.pc == 0x08811640u) goto L_08811640;
    return;
L_08811640:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[31] = (0x08811660u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 11u, 0x0891814Cu>(ctx, &aot_mem) && ctx.pc == 0x08811660u) goto L_08811660;
    return;
L_08811660:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08811670u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0271_entry, 271u, 41u, 0x08913490u>(ctx, &aot_mem) && ctx.pc == 0x08811670u) goto L_08811670;
    return;
L_08811670:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[31] = (0x08811684u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 196u, 0x0894BEBCu>(ctx, &aot_mem) && ctx.pc == 0x08811684u) goto L_08811684;
    return;
L_08811684:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[31] = (0x08811694u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 46u, 0x0894B330u>(ctx, &aot_mem) && ctx.pc == 0x08811694u) goto L_08811694;
    return;
L_08811694:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088115E8;
      }
      goto L_088116A8;
    }
L_088116A8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_088116C0;
      }
      goto L_088116B4;
    }
L_088116B4:
    aot_gpr[31] = (0x088116BCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x088116BCu) goto L_088116BC;
    return;
L_088116BC:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(aot_gpr[21]));
    goto L_088116C0;
L_088116C0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(82))))));
    if (aot_gpr[4] == aot_gpr[21]) {
    aot_gpr[4] = (18804u << 16u);
        goto L_088116DC;
    }
    goto L_088116CC;
L_088116CC:
    aot_gpr[31] = (0x088116D4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x088116D4u) goto L_088116D4;
    return;
L_088116D4:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(82), static_cast<std::uint16_t>(aot_gpr[21]));
    aot_gpr[4] = (18804u << 16u);
    goto L_088116DC;
L_088116DC:
    aot_gpr[4] = (aot_gpr[4] | 9216u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (51572u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[4] | 9216u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(144);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { const bool branch_taken = aot_gpr[4] == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(160);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_08811790;
      }
      goto L_08811728;
    }
L_08811728:
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[18] = (0u | 0u);
    goto L_08811734;
L_08811734:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0881174Cu);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 73u, 0x0894B540u>(ctx, &aot_mem) && ctx.pc == 0x0881174Cu) goto L_0881174C;
    return;
L_0881174C:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vminmax(20u, 20u, 21u, 3u, true);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(144);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(160);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vminmax(21u, 21u, 22u, 3u, false);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(160);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08811734;
      }
      goto L_08811780;
    }
L_08811780:
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    goto L_08811790;
L_08811790:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<21u, 3u>(vfpu_d); }
    aot_gpr[4] = (16128u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<21u, 21u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[13] + aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088117ECu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 60u, 0x0894B468u>(ctx, &aot_mem) && ctx.pc == 0x088117ECu) goto L_088117EC;
    return;
L_088117EC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08811800;
      }
      goto L_088117F4;
    }
L_088117F4:
    aot_gpr[31] = (0x088117FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 49u, 0x0894B364u>(ctx, &aot_mem) && ctx.pc == 0x088117FCu) goto L_088117FC;
    return;
L_088117FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_08811800;
L_08811800:
    aot_gpr[5] = (2177u << 16u);
    aot_gpr[31] = (0x0881180Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7880));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 195u, 0x0894BEB4u>(ctx, &aot_mem) && ctx.pc == 0x0881180Cu) goto L_0881180C;
    return;
L_0881180C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x08811818u);
    aot_gpr[5] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 67u, 0x0894B4C8u>(ctx, &aot_mem) && ctx.pc == 0x08811818u) goto L_08811818;
    return;
L_08811818:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[5] = (aot_gpr[4] & 65535u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x0881182Cu);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 78u, 0x0894B594u>(ctx, &aot_mem) && ctx.pc == 0x0881182Cu) goto L_0881182C;
    return;
L_0881182C:
    aot_gpr[31] = (0x08811834u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 46u, 0x0894B330u>(ctx, &aot_mem) && ctx.pc == 0x08811834u) goto L_08811834;
    return;
L_08811834:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(64));
    aot_gpr[31] = (0x08811844u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 187u, 0x0894BE4Cu>(ctx, &aot_mem) && ctx.pc == 0x08811844u) goto L_08811844;
    return;
L_08811844:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23220)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811860;
      }
      goto L_08811854;
    }
L_08811854:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08811860u);
    aot_gpr[5] = (0u | 1u);
    goto L_08811474;
L_08811860:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811888:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0881192C;
      }
      goto L_088118A4;
    }
L_088118A4:
    aot_gpr[5] = (17174u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (0u | 15u);
    aot_gpr[5] = (17008u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (17154u << 16u);
    aot_gpr[31] = (0x088118C8u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 134u, 0x088639D8u>(ctx, &aot_mem) && ctx.pc == 0x088118C8u) goto L_088118C8;
    return;
L_088118C8:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (0u | 15u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088118ECu);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 133u, 0x088639ACu>(ctx, &aot_mem) && ctx.pc == 0x088118ECu) goto L_088118EC;
    return;
L_088118EC:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[31] = (0x088118F8u);
    aot_gpr[5] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x088118F8u) goto L_088118F8;
    return;
L_088118F8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811924;
      }
      goto L_08811904;
    }
L_08811904:
    aot_gpr[7] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 15u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x08811920u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 125u, 0x088638D4u>(ctx, &aot_mem) && ctx.pc == 0x08811920u) goto L_08811920;
    return;
L_08811920:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_08811924;
L_08811924:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(84), 0u);
      if (branch_taken) {
          goto L_08811AC0;
      }
      goto L_0881192C;
    }
L_0881192C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08811AC0;
      }
      goto L_0881193C;
    }
L_0881193C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(82))))));
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088119AC;
      }
      goto L_0881194C;
    }
L_0881194C:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (16320u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088119AC;
      }
      goto L_08811968;
    }
L_08811968:
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088119AC;
      }
      goto L_08811978;
    }
L_08811978:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[31] = (0x08811984u);
    aot_gpr[5] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x08811984u) goto L_08811984;
    return;
L_08811984:
    aot_gpr[7] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (0u | 15u);
    aot_gpr[31] = (0x088119A4u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 125u, 0x088638D4u>(ctx, &aot_mem) && ctx.pc == 0x088119A4u) goto L_088119A4;
    return;
L_088119A4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(82), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_08811A1C;
      }
      goto L_088119AC;
    }
L_088119AC:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08811A1C;
      }
      goto L_088119B4;
    }
L_088119B4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (16576u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088119EC;
      }
      goto L_088119D0;
    }
L_088119D0:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088119DCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x088119DCu) goto L_088119DC;
    return;
L_088119DC:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(82), static_cast<std::uint16_t>(aot_gpr[17]));
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(84), aot_gpr[4]);
      if (branch_taken) {
          goto L_08811A1C;
      }
      goto L_088119EC;
    }
L_088119EC:
    aot_gpr[4] = (16544u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08811A1C;
      }
      goto L_08811A04;
    }
L_08811A04:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[5] = (aot_gpr[5] << 6u);
    aot_gpr[31] = (0x08811A1Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 107u, 0x0892A828u>(ctx, &aot_mem) && ctx.pc == 0x08811A1Cu) goto L_08811A1C;
    return;
L_08811A1C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08811AC0;
      }
      goto L_08811A28;
    }
L_08811A28:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08811AC0;
      }
      goto L_08811A38;
    }
L_08811A38:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (16416u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08811A70;
      }
      goto L_08811A54;
    }
L_08811A54:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08811A60u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x08811A60u) goto L_08811A60;
    return;
L_08811A60:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(aot_gpr[17]));
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(84), aot_gpr[4]);
      if (branch_taken) {
          goto L_08811AC0;
      }
      goto L_08811A70;
    }
L_08811A70:
    aot_gpr[4] = (16345u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08811AC0;
      }
      goto L_08811A8C;
    }
L_08811A8C:
    aot_gpr[4] = (16204u << 16u);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = aot_fpr[12] / aot_fpr[14];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[5] = (aot_gpr[5] << 6u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[31] = (0x08811AC0u);
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 107u, 0x0892A828u>(ctx, &aot_mem) && ctx.pc == 0x08811AC0u) goto L_08811AC0;
    return;
L_08811AC0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811AD4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08811B10;
      }
      goto L_08811AEC;
    }
L_08811AEC:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08811B00u);
    aot_gpr[5] = (0u | 0u);
    goto L_08811474;
L_08811B00:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08811B10u);
    aot_gpr[5] = (0u | 1u);
    goto L_08811888;
L_08811B10:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811B20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08811B98;
      }
      goto L_08811B50;
    }
L_08811B50:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[13] = aot_fpr[12] + aot_fpr[14];
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08811B70u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_08811888;
L_08811B70:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_fpr[20] = aot_fpr[20] - aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08811BA0;
      }
      goto L_08811B90;
    }
L_08811B90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08811D5C;
      }
      goto L_08811B98;
    }
L_08811B98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08811D5C;
      }
      goto L_08811BA0;
    }
L_08811BA0:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[6] = (16256u << 16u);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[13])) && aot_fpr[12] == aot_fpr[13]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
      if (branch_taken) {
          goto L_08811BCC;
      }
      goto L_08811BC0;
    }
L_08811BC0:
    aot_fpr[12] = aot_fpr[13] / aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08811BD0;
      }
      goto L_08811BCC;
    }
L_08811BCC:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_08811BD0;
L_08811BD0:
    aot_gpr[18] = (0u | 0u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08811C94;
      }
      goto L_08811BE4;
    }
L_08811BE4:
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[19] = (0u | 0u);
    goto L_08811BEC;
L_08811BEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08811C18;
      }
      goto L_08811C10;
    }
L_08811C10:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08811C1C;
      }
      goto L_08811C18;
    }
L_08811C18:
    aot_gpr[17] = (0u | 0u);
    goto L_08811C1C;
L_08811C1C:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08811C30u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 11u, 0x0891814Cu>(ctx, &aot_mem) && ctx.pc == 0x08811C30u) goto L_08811C30;
    return;
L_08811C30:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08811C40u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0271_entry, 271u, 41u, 0x08913490u>(ctx, &aot_mem) && ctx.pc == 0x08811C40u) goto L_08811C40;
    return;
L_08811C40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[31] = (0x08811C54u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 65u, 0x0894B49Cu>(ctx, &aot_mem) && ctx.pc == 0x08811C54u) goto L_08811C54;
    return;
L_08811C54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[31] = (0x08811C68u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 196u, 0x0894BEBCu>(ctx, &aot_mem) && ctx.pc == 0x08811C68u) goto L_08811C68;
    return;
L_08811C68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[31] = (0x08811C7Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 64u, 0x0894B490u>(ctx, &aot_mem) && ctx.pc == 0x08811C7Cu) goto L_08811C7C;
    return;
L_08811C7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08811BEC;
      }
      goto L_08811C94;
    }
L_08811C94:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08811CC0;
      }
      goto L_08811CB8;
    }
L_08811CB8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08811CC4;
      }
      goto L_08811CC0;
    }
L_08811CC0:
    aot_gpr[17] = (0u | 0u);
    goto L_08811CC4;
L_08811CC4:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08811CD8u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 25u, 0x0891F258u>(ctx, &aot_mem) && ctx.pc == 0x08811CD8u) goto L_08811CD8;
    return;
L_08811CD8:
    aot_gpr[31] = (0x08811CE0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 250u, 0x0891EF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08811CE0u) goto L_08811CE0;
    return;
L_08811CE0:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811D5C;
      }
      goto L_08811CE8;
    }
L_08811CE8:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08811D2C;
      }
      goto L_08811D04;
    }
L_08811D04:
    aot_gpr[18] = (0u | 0u);
    goto L_08811D08;
L_08811D08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[31] = (0x08811D18u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 49u, 0x0894B364u>(ctx, &aot_mem) && ctx.pc == 0x08811D18u) goto L_08811D18;
    return;
L_08811D18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08811D08;
      }
      goto L_08811D2C;
    }
L_08811D2C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_08811D44;
      }
      goto L_08811D38;
    }
L_08811D38:
    aot_gpr[31] = (0x08811D40u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x08811D40u) goto L_08811D40;
    return;
L_08811D40:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(aot_gpr[19]));
    goto L_08811D44;
L_08811D44:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(82))))));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_08811D5C;
      }
      goto L_08811D50;
    }
L_08811D50:
    aot_gpr[31] = (0x08811D58u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 202u, 0x08862EC0u>(ctx, &aot_mem) && ctx.pc == 0x08811D58u) goto L_08811D58;
    return;
L_08811D58:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(82), static_cast<std::uint16_t>(aot_gpr[19]));
    goto L_08811D5C;
L_08811D5C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811D80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08811DE4;
      }
      goto L_08811DA0;
    }
L_08811DA0:
    aot_gpr[4] = (0u | 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x08811DBCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 193u, 0x0894BE88u>(ctx, &aot_mem) && ctx.pc == 0x08811DBCu) goto L_08811DBC;
    return;
L_08811DBC:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08811DD0u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 108u, 0x08884BBCu>(ctx, &aot_mem) && ctx.pc == 0x08811DD0u) goto L_08811DD0;
    return;
L_08811DD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x08811DE4u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 9u, 0x0891F0B4u>(ctx, &aot_mem) && ctx.pc == 0x08811DE4u) goto L_08811DE4;
    return;
L_08811DE4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811DF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08811E58;
      }
      goto L_08811E24;
    }
L_08811E24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[31] = (0x08811E34u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 49u, 0x0894B364u>(ctx, &aot_mem) && ctx.pc == 0x08811E34u) goto L_08811E34;
    return;
L_08811E34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[31] = (0x08811E44u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 31u, 0x0894B1E8u>(ctx, &aot_mem) && ctx.pc == 0x08811E44u) goto L_08811E44;
    return;
L_08811E44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08811E24;
      }
      goto L_08811E58;
    }
L_08811E58:
    aot_gpr[31] = (0x08811E60u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 49u, 0x0894B364u>(ctx, &aot_mem) && ctx.pc == 0x08811E60u) goto L_08811E60;
    return;
L_08811E60:
    aot_gpr[31] = (0x08811E68u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 31u, 0x0894B1E8u>(ctx, &aot_mem) && ctx.pc == 0x08811E68u) goto L_08811E68;
    return;
L_08811E68:
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
L_08811E80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08811EBC;
      }
      goto L_08811E9C;
    }
L_08811E9C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811EBC;
      }
      goto L_08811EA8;
    }
L_08811EA8:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08811EBCu);
    aot_gpr[6] = (0u | 0u);
    goto L_08811430;
L_08811EBC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811EC8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[6] & 65535u);
    aot_gpr[6] = (65535u << 16u);
    aot_gpr[6] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[7] = (1u << 16u);
    if (aot_gpr[6] != aot_gpr[7]) {
    aot_gpr[5] = (2218u << 16u);
        goto L_08811EF0;
    }
    goto L_08811EE8;
L_08811EE8:
    aot_gpr[4] = (aot_gpr[5] & 65535u);
    aot_gpr[5] = (2218u << 16u);
    goto L_08811EF0;
L_08811EF0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(376), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811F24:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22232), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08811F44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-320));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(76)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(316), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[17] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 5u, 0x08812054u>(ctx, &aot_mem); return;
      }
      goto L_08811F84;
    }
L_08811F84:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08811F94u);
    aot_gpr[5] = (aot_gpr[18] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x08811F94u) goto L_08811F94;
    return;
L_08811F94:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (2214u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 5u, 0x08812054u>(ctx, &aot_mem); return;
      }
      goto L_08811FAC;
    }
L_08811FAC:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(272));
    aot_gpr[22] = (0u | 32768u);
    aot_gpr[30] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-16120));
    goto L_08811FC0;
L_08811FC0:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08811FD4u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08811FD4u) goto L_08811FD4;
    return;
L_08811FD4:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[31] = (0x08811FFCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 17u, 0x088770DCu>(ctx, &aot_mem) && ctx.pc == 0x08811FFCu) goto L_08811FFC;
    return;
L_08811FFC:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08812000u; return;
}

void recomp_unit_0013(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0013_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_13(Runtime &runtime) {
    runtime.register_generated_unit(13u, 0x08811000u, 4096u, &recomp_unit_0013, &recomp_unit_0013_entry);
    runtime.register_function(0x08811004u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811020u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811024u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811034u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811048u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811060u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811068u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811070u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811078u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811080u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0881108Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811098u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088110A0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088110ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088110D8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088110E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088110E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088110F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088110FCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811104u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0881111Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811130u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811144u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811154u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811168u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811178u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0881118Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0881119Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088111A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088111C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088111ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0881121Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811228u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0881123Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811248u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811250u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811264u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811274u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811280u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811294u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088112ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088112CCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088112F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811318u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0881132Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811330u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811348u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0881135Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811360u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811384u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811388u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088113B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088113C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088113E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811400u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811430u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811450u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0881145Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811464u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811474u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088114ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088114B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088114C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088114CCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088114D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088114DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088114E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088114E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088114F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811508u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811514u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0881151Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811528u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0881152Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811538u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0881153Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811544u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811564u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088115C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088115D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088115E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088115E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088115F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811608u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811610u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0881161Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811624u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811640u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811660u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811670u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811684u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811694u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088116A8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088116B4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088116BCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088116C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088116CCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088116D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088116DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811728u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811734u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0881174Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811780u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811790u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088117ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088117F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088117FCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811800u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0881180Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811818u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0881182Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811834u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811844u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811854u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811860u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811888u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088118A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088118C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088118ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088118F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811904u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811920u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811924u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0881192Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0881193Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0881194Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811968u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811978u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811984u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088119A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088119ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088119B4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088119D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088119DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088119ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811A04u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811A1Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811A28u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811A38u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811A54u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811A60u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811A70u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811A8Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811AC0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811AD4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811AECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811B00u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811B10u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811B20u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811B50u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811B70u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811B90u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811B98u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811BA0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811BC0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811BCCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811BD0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811BE4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811BECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811C10u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811C18u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811C1Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811C30u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811C40u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811C54u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811C68u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811C7Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811C94u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811CB8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811CC0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811CC4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811CD8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811CE0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811CE8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811D04u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811D08u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811D18u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811D2Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811D38u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811D40u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811D44u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811D50u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811D58u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811D5Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811D80u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811DA0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811DBCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811DD0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811DE4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811DF8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811E24u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811E34u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811E44u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811E58u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811E60u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811E68u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811E80u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811E9Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811EA8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811EBCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811EC8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811EE8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811EF0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811F24u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811F44u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811F84u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811F94u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811FACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811FC0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811FD4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08811FFCu, &recomp_unit_0013, "recomp_unit_0013");
}
} // namespace psprecomp
