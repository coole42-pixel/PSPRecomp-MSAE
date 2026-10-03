#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0217[1022] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 6, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0,
    0, 14, 0, 15, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 20, 21, 0, 0, 0,
    0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28,
    0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0,
    0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0,
    0, 46, 0, 0, 47, 0, 48, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 53, 0, 54, 0,
    0, 0, 0, 0, 55, 0, 0, 56, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63,
    0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 68, 0, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 0, 73,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74,
    0, 75, 0, 0, 0, 76, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 85,
    0, 0, 86, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91,
    0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0,
    0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 100, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 108, 0, 0,
    0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 116, 0, 117, 0, 118, 0, 119, 0, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 123, 0, 0, 0, 0, 124, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 0, 130, 0,
    131, 0, 132, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 137, 0, 138, 0, 0, 139, 0, 140, 0, 0, 141,
    0, 142, 0, 0, 143, 144, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 152, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0,
    0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0,
    161, 0, 0, 162, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 167, 168, 0, 169, 0, 0, 0, 170, 171, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 175, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0,
    0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 0, 192, 0, 193, 0,
    0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 197, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 200, 201, 0, 0, 202, 0, 203, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207,
};
void recomp_unit_0217_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088DD000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0217[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088DD000;
    case 2u: goto L_088DD00C;
    case 3u: goto L_088DD014;
    case 4u: goto L_088DD040;
    case 5u: goto L_088DD04C;
    case 6u: goto L_088DD054;
    case 7u: goto L_088DD058;
    case 8u: goto L_088DD078;
    case 9u: goto L_088DD0A0;
    case 10u: goto L_088DD0AC;
    case 11u: goto L_088DD0C4;
    case 12u: goto L_088DD0CC;
    case 13u: goto L_088DD0F8;
    case 14u: goto L_088DD104;
    case 15u: goto L_088DD10C;
    case 16u: goto L_088DD110;
    case 17u: goto L_088DD130;
    case 18u: goto L_088DD158;
    case 19u: goto L_088DD164;
    case 20u: goto L_088DD16C;
    case 21u: goto L_088DD170;
    case 22u: goto L_088DD184;
    case 23u: goto L_088DD19C;
    case 24u: goto L_088DD1B4;
    case 25u: goto L_088DD1C8;
    case 26u: goto L_088DD1D0;
    case 27u: goto L_088DD1E0;
    case 28u: goto L_088DD1FC;
    case 29u: goto L_088DD20C;
    case 30u: goto L_088DD21C;
    case 31u: goto L_088DD238;
    case 32u: goto L_088DD248;
    case 33u: goto L_088DD258;
    case 34u: goto L_088DD274;
    case 35u: goto L_088DD284;
    case 36u: goto L_088DD294;
    case 37u: goto L_088DD2B4;
    case 38u: goto L_088DD2C0;
    case 39u: goto L_088DD300;
    case 40u: goto L_088DD30C;
    case 41u: goto L_088DD348;
    case 42u: goto L_088DD354;
    case 43u: goto L_088DD35C;
    case 44u: goto L_088DD36C;
    case 45u: goto L_088DD378;
    case 46u: goto L_088DD384;
    case 47u: goto L_088DD390;
    case 48u: goto L_088DD398;
    case 49u: goto L_088DD3A0;
    case 50u: goto L_088DD3A8;
    case 51u: goto L_088DD3E0;
    case 52u: goto L_088DD3E8;
    case 53u: goto L_088DD3F0;
    case 54u: goto L_088DD3F8;
    case 55u: goto L_088DD410;
    case 56u: goto L_088DD41C;
    case 57u: goto L_088DD424;
    case 58u: goto L_088DD434;
    case 59u: goto L_088DD440;
    case 60u: goto L_088DD44C;
    case 61u: goto L_088DD458;
    case 62u: goto L_088DD46C;
    case 63u: goto L_088DD4FC;
    case 64u: goto L_088DD504;
    case 65u: goto L_088DD514;
    case 66u: goto L_088DD524;
    case 67u: goto L_088DD530;
    case 68u: goto L_088DD538;
    case 69u: goto L_088DD548;
    case 70u: goto L_088DD554;
    case 71u: goto L_088DD560;
    case 72u: goto L_088DD56C;
    case 73u: goto L_088DD57C;
    case 74u: goto L_088DD5FC;
    case 75u: goto L_088DD604;
    case 76u: goto L_088DD614;
    case 77u: goto L_088DD61C;
    case 78u: goto L_088DD628;
    case 79u: goto L_088DD634;
    case 80u: goto L_088DD640;
    case 81u: goto L_088DD648;
    case 82u: goto L_088DD67C;
    case 83u: goto L_088DD6E8;
    case 84u: goto L_088DD6F0;
    case 85u: goto L_088DD6FC;
    case 86u: goto L_088DD708;
    case 87u: goto L_088DD710;
    case 88u: goto L_088DD724;
    case 89u: goto L_088DD750;
    case 90u: goto L_088DD768;
    case 91u: goto L_088DD77C;
    case 92u: goto L_088DD794;
    case 93u: goto L_088DD7AC;
    case 94u: goto L_088DD7C4;
    case 95u: goto L_088DD7D8;
    case 96u: goto L_088DD7F8;
    case 97u: goto L_088DD808;
    case 98u: goto L_088DD82C;
    case 99u: goto L_088DD840;
    case 100u: goto L_088DD84C;
    case 101u: goto L_088DD850;
    case 102u: goto L_088DD880;
    case 103u: goto L_088DD8A4;
    case 104u: goto L_088DD8C4;
    case 105u: goto L_088DD8D4;
    case 106u: goto L_088DD8E0;
    case 107u: goto L_088DD8EC;
    case 108u: goto L_088DD8F4;
    case 109u: goto L_088DD910;
    case 110u: goto L_088DD918;
    case 111u: goto L_088DD920;
    case 112u: goto L_088DD944;
    case 113u: goto L_088DD968;
    case 114u: goto L_088DD970;
    case 115u: goto L_088DD990;
    case 116u: goto L_088DD998;
    case 117u: goto L_088DD9A0;
    case 118u: goto L_088DD9A8;
    case 119u: goto L_088DD9B0;
    case 120u: goto L_088DD9C4;
    case 121u: goto L_088DD9D0;
    case 122u: goto L_088DD9D8;
    case 123u: goto L_088DD9E0;
    case 124u: goto L_088DD9F4;
    case 125u: goto L_088DDA34;
    case 126u: goto L_088DDA44;
    case 127u: goto L_088DDA50;
    case 128u: goto L_088DDA5C;
    case 129u: goto L_088DDA6C;
    case 130u: goto L_088DDA78;
    case 131u: goto L_088DDA80;
    case 132u: goto L_088DDA88;
    case 133u: goto L_088DDA9C;
    case 134u: goto L_088DDAA4;
    case 135u: goto L_088DDAB4;
    case 136u: goto L_088DDAC0;
    case 137u: goto L_088DDAD4;
    case 138u: goto L_088DDADC;
    case 139u: goto L_088DDAE8;
    case 140u: goto L_088DDAF0;
    case 141u: goto L_088DDAFC;
    case 142u: goto L_088DDB04;
    case 143u: goto L_088DDB10;
    case 144u: goto L_088DDB14;
    case 145u: goto L_088DDB1C;
    case 146u: goto L_088DDB2C;
    case 147u: goto L_088DDB3C;
    case 148u: goto L_088DDB44;
    case 149u: goto L_088DDB4C;
    case 150u: goto L_088DDB78;
    case 151u: goto L_088DDB90;
    case 152u: goto L_088DDBA0;
    case 153u: goto L_088DDBA4;
    case 154u: goto L_088DDBB4;
    case 155u: goto L_088DDBDC;
    case 156u: goto L_088DDBF4;
    case 157u: goto L_088DDC0C;
    case 158u: goto L_088DDC20;
    case 159u: goto L_088DDC3C;
    case 160u: goto L_088DDC74;
    case 161u: goto L_088DDC80;
    case 162u: goto L_088DDC8C;
    case 163u: goto L_088DDC98;
    case 164u: goto L_088DDCA8;
    case 165u: goto L_088DDCDC;
    case 166u: goto L_088DDD00;
    case 167u: goto L_088DDD10;
    case 168u: goto L_088DDD14;
    case 169u: goto L_088DDD1C;
    case 170u: goto L_088DDD2C;
    case 171u: goto L_088DDD30;
    case 172u: goto L_088DDD38;
    case 173u: goto L_088DDD50;
    case 174u: goto L_088DDD70;
    case 175u: goto L_088DDD84;
    case 176u: goto L_088DDD88;
    case 177u: goto L_088DDDAC;
    case 178u: goto L_088DDDBC;
    case 179u: goto L_088DDDCC;
    case 180u: goto L_088DDDDC;
    case 181u: goto L_088DDDF4;
    case 182u: goto L_088DDE18;
    case 183u: goto L_088DDE48;
    case 184u: goto L_088DDE74;
    case 185u: goto L_088DDE7C;
    case 186u: goto L_088DDE90;
    case 187u: goto L_088DDEA8;
    case 188u: goto L_088DDEBC;
    case 189u: goto L_088DDEC8;
    case 190u: goto L_088DDED4;
    case 191u: goto L_088DDEE4;
    case 192u: goto L_088DDEF0;
    case 193u: goto L_088DDEF8;
    case 194u: goto L_088DDF08;
    case 195u: goto L_088DDF24;
    case 196u: goto L_088DDF2C;
    case 197u: goto L_088DDF3C;
    case 198u: goto L_088DDF40;
    case 199u: goto L_088DDF50;
    case 200u: goto L_088DDF88;
    case 201u: goto L_088DDF8C;
    case 202u: goto L_088DDF98;
    case 203u: goto L_088DDFA0;
    case 204u: goto L_088DDFAC;
    case 205u: goto L_088DDFC0;
    case 206u: goto L_088DDFE0;
    case 207u: goto L_088DDFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088DD000:
    aot_gpr[7] = (0u | 256u);
    aot_gpr[31] = (0x088DD00Cu);
    aot_gpr[8] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 49u, 0x08945ABCu>(ctx, &aot_mem) && ctx.pc == 0x088DD00Cu) goto L_088DD00C;
    return;
L_088DD00C:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (2215u << 16u);
    goto L_088DD014;
L_088DD014:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32700), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088DD040u);
    aot_gpr[6] = (0u | 56u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DD040u) goto L_088DD040;
    return;
L_088DD040:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD058;
      }
      goto L_088DD04C;
    }
L_088DD04C:
    aot_gpr[31] = (0x088DD054u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 10u, 0x08944134u>(ctx, &aot_mem) && ctx.pc == 0x088DD054u) goto L_088DD054;
    return;
L_088DD054:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_088DD058;
L_088DD058:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32704), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 256u);
    aot_gpr[6] = (0u | 128u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x088DD078u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 175u, 0x08943C0Cu>(ctx, &aot_mem) && ctx.pc == 0x088DD078u) goto L_088DD078;
    return;
L_088DD078:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088DD0A0u);
    aot_gpr[6] = (0u | 28u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DD0A0u) goto L_088DD0A0;
    return;
L_088DD0A0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088DD0CC;
      }
      goto L_088DD0AC;
    }
L_088DD0AC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 144u);
    aot_gpr[31] = (0x088DD0C4u);
    aot_gpr[8] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 49u, 0x08945ABCu>(ctx, &aot_mem) && ctx.pc == 0x088DD0C4u) goto L_088DD0C4;
    return;
L_088DD0C4:
    aot_gpr[18] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (2215u << 16u);
    goto L_088DD0CC;
L_088DD0CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32716), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088DD0F8u);
    aot_gpr[6] = (0u | 56u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DD0F8u) goto L_088DD0F8;
    return;
L_088DD0F8:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD110;
      }
      goto L_088DD104;
    }
L_088DD104:
    aot_gpr[31] = (0x088DD10Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 10u, 0x08944134u>(ctx, &aot_mem) && ctx.pc == 0x088DD10Cu) goto L_088DD10C;
    return;
L_088DD10C:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_088DD110;
L_088DD110:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32720), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 256u);
    aot_gpr[6] = (0u | 80u);
    aot_gpr[7] = (0u | 3u);
    aot_gpr[31] = (0x088DD130u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 175u, 0x08943C0Cu>(ctx, &aot_mem) && ctx.pc == 0x088DD130u) goto L_088DD130;
    return;
L_088DD130:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088DD158u);
    aot_gpr[6] = (0u | 176u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DD158u) goto L_088DD158;
    return;
L_088DD158:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD170;
      }
      goto L_088DD164;
    }
L_088DD164:
    aot_gpr[31] = (0x088DD16Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 48u, 0x088166ECu>(ctx, &aot_mem) && ctx.pc == 0x088DD16Cu) goto L_088DD16C;
    return;
L_088DD16C:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_088DD170;
L_088DD170:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32724), aot_gpr[17]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x088DD184u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32728), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0290_entry, 290u, 105u, 0x08926A3Cu>(ctx, &aot_mem) && ctx.pc == 0x088DD184u) goto L_088DD184;
    return;
L_088DD184:
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
L_088DD19C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32728)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD1C8;
      }
      goto L_088DD1B4;
    }
L_088DD1B4:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(32728));
    aot_gpr[31] = (0x088DD1C8u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088DD1C8u) goto L_088DD1C8;
    return;
L_088DD1C8:
    aot_gpr[31] = (0x088DD1D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0290_entry, 290u, 112u, 0x08926A98u>(ctx, &aot_mem) && ctx.pc == 0x088DD1D0u) goto L_088DD1D0;
    return;
L_088DD1D0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32712)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD1FC;
      }
      goto L_088DD1E0;
    }
L_088DD1E0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088DD1FCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DD1FCu) goto L_088DD1FC;
    return;
L_088DD1FC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32708)));
    aot_gpr[31] = (0x088DD20Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 50u, 0x08945AF0u>(ctx, &aot_mem) && ctx.pc == 0x088DD20Cu) goto L_088DD20C;
    return;
L_088DD20C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32704)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD238;
      }
      goto L_088DD21C;
    }
L_088DD21C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088DD238u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DD238u) goto L_088DD238;
    return;
L_088DD238:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32700)));
    aot_gpr[31] = (0x088DD248u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 50u, 0x08945AF0u>(ctx, &aot_mem) && ctx.pc == 0x088DD248u) goto L_088DD248;
    return;
L_088DD248:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32720)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD274;
      }
      goto L_088DD258;
    }
L_088DD258:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088DD274u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DD274u) goto L_088DD274;
    return;
L_088DD274:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32716)));
    aot_gpr[31] = (0x088DD284u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 50u, 0x08945AF0u>(ctx, &aot_mem) && ctx.pc == 0x088DD284u) goto L_088DD284;
    return;
L_088DD284:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32724)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_088DD2B4;
      }
      goto L_088DD294;
    }
L_088DD294:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088DD2B4u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DD2B4u) goto L_088DD2B4;
    return;
L_088DD2B4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD2C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[16] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    aot_gpr[31] = (0x088DD300u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28764)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x088DD300u) goto L_088DD300;
    return;
L_088DD300:
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[31] = (0x088DD30Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28760)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x088DD30Cu) goto L_088DD30C;
    return;
L_088DD30C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28764)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28760)));
    aot_gpr[19] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32700)));
    aot_gpr[6] = (2219u << 16u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-22112)));
    aot_gpr[20] = (65280u << 16u);
    aot_gpr[6] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[21]);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088DD348u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-28792)));
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 55u, 0x08945B58u>(ctx, &aot_mem) && ctx.pc == 0x088DD348u) goto L_088DD348;
    return;
L_088DD348:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32700)));
    aot_gpr[31] = (0x088DD354u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 56u, 0x08945B60u>(ctx, &aot_mem) && ctx.pc == 0x088DD354u) goto L_088DD354;
    return;
L_088DD354:
    aot_gpr[31] = (0x088DD35Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32700)));
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 16u, 0x08940218u>(ctx, &aot_mem) && ctx.pc == 0x088DD35Cu) goto L_088DD35C;
    return;
L_088DD35C:
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32704)));
    aot_gpr[31] = (0x088DD36Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 19u, 0x08940244u>(ctx, &aot_mem) && ctx.pc == 0x088DD36Cu) goto L_088DD36C;
    return;
L_088DD36C:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x088DD378u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 50u, 0x0893F5DCu>(ctx, &aot_mem) && ctx.pc == 0x088DD378u) goto L_088DD378;
    return;
L_088DD378:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x088DD384u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 56u, 0x0893F63Cu>(ctx, &aot_mem) && ctx.pc == 0x088DD384u) goto L_088DD384;
    return;
L_088DD384:
    aot_gpr[4] = (0u | 1920u);
    aot_gpr[31] = (0x088DD390u);
    aot_gpr[5] = (0u | 1984u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 114u, 0x08931A8Cu>(ctx, &aot_mem) && ctx.pc == 0x088DD390u) goto L_088DD390;
    return;
L_088DD390:
    aot_gpr[31] = (0x088DD398u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 150u, 0x0885A908u>(ctx, &aot_mem) && ctx.pc == 0x088DD398u) goto L_088DD398;
    return;
L_088DD398:
    aot_gpr[31] = (0x088DD3A0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28764)));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 21u, 0x089281DCu>(ctx, &aot_mem) && ctx.pc == 0x088DD3A0u) goto L_088DD3A0;
    return;
L_088DD3A0:
    aot_gpr[31] = (0x088DD3A8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28764)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x088DD3A8u) goto L_088DD3A8;
    return;
L_088DD3A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28764)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (0u | 6u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2116), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2118), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[6] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[31] = (0x088DD3E0u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x088DD3E0u) goto L_088DD3E0;
    return;
L_088DD3E0:
    aot_gpr[31] = (0x088DD3E8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28760)));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 15u, 0x08928174u>(ctx, &aot_mem) && ctx.pc == 0x088DD3E8u) goto L_088DD3E8;
    return;
L_088DD3E8:
    aot_gpr[31] = (0x088DD3F0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28760)));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 21u, 0x089281DCu>(ctx, &aot_mem) && ctx.pc == 0x088DD3F0u) goto L_088DD3F0;
    return;
L_088DD3F0:
    aot_gpr[31] = (0x088DD3F8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28760)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x088DD3F8u) goto L_088DD3F8;
    return;
L_088DD3F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28760)));
    aot_gpr[16] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32708)));
    aot_gpr[31] = (0x088DD410u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 55u, 0x08945B58u>(ctx, &aot_mem) && ctx.pc == 0x088DD410u) goto L_088DD410;
    return;
L_088DD410:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32708)));
    aot_gpr[31] = (0x088DD41Cu);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 56u, 0x08945B60u>(ctx, &aot_mem) && ctx.pc == 0x088DD41Cu) goto L_088DD41C;
    return;
L_088DD41C:
    aot_gpr[31] = (0x088DD424u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32708)));
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 16u, 0x08940218u>(ctx, &aot_mem) && ctx.pc == 0x088DD424u) goto L_088DD424;
    return;
L_088DD424:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32712)));
    aot_gpr[31] = (0x088DD434u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 19u, 0x08940244u>(ctx, &aot_mem) && ctx.pc == 0x088DD434u) goto L_088DD434;
    return;
L_088DD434:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x088DD440u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 50u, 0x0893F5DCu>(ctx, &aot_mem) && ctx.pc == 0x088DD440u) goto L_088DD440;
    return;
L_088DD440:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x088DD44Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 56u, 0x0893F63Cu>(ctx, &aot_mem) && ctx.pc == 0x088DD44Cu) goto L_088DD44C;
    return;
L_088DD44C:
    aot_gpr[4] = (0u | 1984u);
    aot_gpr[31] = (0x088DD458u);
    aot_gpr[5] = (0u | 2016u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 114u, 0x08931A8Cu>(ctx, &aot_mem) && ctx.pc == 0x088DD458u) goto L_088DD458;
    return;
L_088DD458:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088DD46Cu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 221u, 0x08A4BFECu>(ctx, &aot_mem) && ctx.pc == 0x088DD46Cu) goto L_088DD46C;
    return;
L_088DD46C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    aot_gpr[17] = (2215u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(0u));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[23] = (0u | 128u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (0u | 64u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[23]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[30] = (0u | 256u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[30]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[23]));
    aot_gpr[31] = (0x088DD4FCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 92u, 0x08935918u>(ctx, &aot_mem) && ctx.pc == 0x088DD4FCu) goto L_088DD4FC;
    return;
L_088DD4FC:
    aot_gpr[31] = (0x088DD504u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32704)));
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 166u, 0x08943B80u>(ctx, &aot_mem) && ctx.pc == 0x088DD504u) goto L_088DD504;
    return;
L_088DD504:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088DD514u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 59u, 0x0892F600u>(ctx, &aot_mem) && ctx.pc == 0x088DD514u) goto L_088DD514;
    return;
L_088DD514:
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(32716)));
    aot_gpr[31] = (0x088DD524u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 55u, 0x08945B58u>(ctx, &aot_mem) && ctx.pc == 0x088DD524u) goto L_088DD524;
    return;
L_088DD524:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(32716)));
    aot_gpr[31] = (0x088DD530u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 56u, 0x08945B60u>(ctx, &aot_mem) && ctx.pc == 0x088DD530u) goto L_088DD530;
    return;
L_088DD530:
    aot_gpr[31] = (0x088DD538u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(32716)));
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 16u, 0x08940218u>(ctx, &aot_mem) && ctx.pc == 0x088DD538u) goto L_088DD538;
    return;
L_088DD538:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32720)));
    aot_gpr[31] = (0x088DD548u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 19u, 0x08940244u>(ctx, &aot_mem) && ctx.pc == 0x088DD548u) goto L_088DD548;
    return;
L_088DD548:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x088DD554u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 50u, 0x0893F5DCu>(ctx, &aot_mem) && ctx.pc == 0x088DD554u) goto L_088DD554;
    return;
L_088DD554:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x088DD560u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 56u, 0x0893F63Cu>(ctx, &aot_mem) && ctx.pc == 0x088DD560u) goto L_088DD560;
    return;
L_088DD560:
    aot_gpr[4] = (0u | 1976u);
    aot_gpr[31] = (0x088DD56Cu);
    aot_gpr[5] = (0u | 2008u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 114u, 0x08931A8Cu>(ctx, &aot_mem) && ctx.pc == 0x088DD56Cu) goto L_088DD56C;
    return;
L_088DD56C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088DD57Cu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 221u, 0x08A4BFECu>(ctx, &aot_mem) && ctx.pc == 0x088DD57Cu) goto L_088DD57C;
    return;
L_088DD57C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(0u));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[7]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 144u);
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (0u | 80u);
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[30]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[23]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088DD5FCu);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 92u, 0x08935918u>(ctx, &aot_mem) && ctx.pc == 0x088DD5FCu) goto L_088DD5FC;
    return;
L_088DD5FC:
    aot_gpr[31] = (0x088DD604u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32704)));
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 166u, 0x08943B80u>(ctx, &aot_mem) && ctx.pc == 0x088DD604u) goto L_088DD604;
    return;
L_088DD604:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088DD614u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 59u, 0x0892F600u>(ctx, &aot_mem) && ctx.pc == 0x088DD614u) goto L_088DD614;
    return;
L_088DD614:
    aot_gpr[31] = (0x088DD61Cu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 16u, 0x08940218u>(ctx, &aot_mem) && ctx.pc == 0x088DD61Cu) goto L_088DD61C;
    return;
L_088DD61C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x088DD628u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 19u, 0x08940244u>(ctx, &aot_mem) && ctx.pc == 0x088DD628u) goto L_088DD628;
    return;
L_088DD628:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x088DD634u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 50u, 0x0893F5DCu>(ctx, &aot_mem) && ctx.pc == 0x088DD634u) goto L_088DD634;
    return;
L_088DD634:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x088DD640u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 56u, 0x0893F63Cu>(ctx, &aot_mem) && ctx.pc == 0x088DD640u) goto L_088DD640;
    return;
L_088DD640:
    aot_gpr[31] = (0x088DD648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 122u, 0x08931B30u>(ctx, &aot_mem) && ctx.pc == 0x088DD648u) goto L_088DD648;
    return;
L_088DD648:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD67C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2172)));
    aot_gpr[6] = (2215u << 16u);
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32724)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (16204u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32724)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32724)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2172)));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32724)));
    aot_gpr[7] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088DD6E8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32724)));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x08816998u>(ctx, &aot_mem) && ctx.pc == 0x088DD6E8u) goto L_088DD6E8;
    return;
L_088DD6E8:
    aot_gpr[31] = (0x088DD6F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 17u, 0x0893F128u>(ctx, &aot_mem) && ctx.pc == 0x088DD6F0u) goto L_088DD6F0;
    return;
L_088DD6F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x088DD6FCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088DD2C0;
L_088DD6FC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088DD708u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2228)));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x08816998u>(ctx, &aot_mem) && ctx.pc == 0x088DD708u) goto L_088DD708;
    return;
L_088DD708:
    aot_gpr[31] = (0x088DD710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 17u, 0x0893F128u>(ctx, &aot_mem) && ctx.pc == 0x088DD710u) goto L_088DD710;
    return;
L_088DD710:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD724:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32712)));
    aot_gpr[18] = (0u | 56u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088DD750u);
    aot_gpr[6] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088DD750u) goto L_088DD750;
    return;
L_088DD750:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32712)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x088DD768u);
    aot_gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088DD768u) goto L_088DD768;
    return;
L_088DD768:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 104u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[31] = (0x088DD77Cu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 48u, 0x08942488u>(ctx, &aot_mem) && ctx.pc == 0x088DD77Cu) goto L_088DD77C;
    return;
L_088DD77C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32712)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(104));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x088DD794u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088DD794u) goto L_088DD794;
    return;
L_088DD794:
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
L_088DD7AC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32712)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(104));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD7C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088DD7D8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_088DD724;
L_088DD7D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x088DD7F8u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 48u, 0x08942488u>(ctx, &aot_mem) && ctx.pc == 0x088DD7F8u) goto L_088DD7F8;
    return;
L_088DD7F8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD808:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088DD82Cu);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 47u, 0x08931568u>(ctx, &aot_mem) && ctx.pc == 0x088DD82Cu) goto L_088DD82C;
    return;
L_088DD82C:
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32728)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(32728));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (2215u << 16u);
      if (branch_taken) {
          goto L_088DD850;
      }
      goto L_088DD840;
    }
L_088DD840:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088DD84Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088DD84Cu) goto L_088DD84C;
    return;
L_088DD84C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32732), 0u);
    goto L_088DD850;
L_088DD850:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32720)));
    aot_gpr[9] = (aot_gpr[16] + static_cast<std::uint32_t>(32732));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (0u | 144u);
    aot_gpr[5] = (0u | 80u);
    aot_gpr[6] = (0u | 256u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088DD880u);
    aot_gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0290_entry, 290u, 113u, 0x08926AA0u>(ctx, &aot_mem) && ctx.pc == 0x088DD880u) goto L_088DD880;
    return;
L_088DD880:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(aot_gpr[5]));
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
L_088DD8A4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32696), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD8C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088DD8D4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 34u, 0x088832E0u>(ctx, &aot_mem) && ctx.pc == 0x088DD8D4u) goto L_088DD8D4;
    return;
L_088DD8D4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD8E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DD910;
      }
      goto L_088DD8EC;
    }
L_088DD8EC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_088DD968;
      }
      goto L_088DD8F4;
    }
L_088DD8F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] | 4u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
      if (branch_taken) {
          goto L_088DD968;
      }
      goto L_088DD910;
    }
L_088DD910:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DD944;
      }
      goto L_088DD918;
    }
L_088DD918:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD968;
      }
      goto L_088DD920;
    }
L_088DD920:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (16168u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 62915u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[6] | 4u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
      if (branch_taken) {
          goto L_088DD968;
      }
      goto L_088DD944;
    }
L_088DD944:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (16040u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 62915u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[6] | 4u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
      if (branch_taken) {
          goto L_088DD968;
      }
      goto L_088DD968;
    }
L_088DD968:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD970:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 65535u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088DD9A0;
      }
      goto L_088DD990;
    }
L_088DD990:
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[17]));
      if (branch_taken) {
          goto L_088DD9B0;
      }
      goto L_088DD998;
    }
L_088DD998:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088DD9A8;
      }
      goto L_088DD9A0;
    }
L_088DD9A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD9E0;
      }
      goto L_088DD9A8;
    }
L_088DD9A8:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DD9C4;
      }
      goto L_088DD9B0;
    }
L_088DD9B0:
    aot_gpr[5] = (aot_gpr[17] ^ 2u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088DD9C4u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 14u, 0x088841FCu>(ctx, &aot_mem) && ctx.pc == 0x088DD9C4u) goto L_088DD9C4;
    return;
L_088DD9C4:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[17] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DD9D8;
      }
      goto L_088DD9D0;
    }
L_088DD9D0:
    aot_gpr[31] = (0x088DD9D8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 8u, 0x08884164u>(ctx, &aot_mem) && ctx.pc == 0x088DD9D8u) goto L_088DD9D8;
    return;
L_088DD9D8:
    aot_gpr[31] = (0x088DD9E0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088DD8E0;
L_088DD9E0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD9F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[23] = (0u | 90u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088DDB44;
      }
      goto L_088DDA34;
    }
L_088DDA34:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[20] = (0u | 60u);
    aot_gpr[21] = (0u | 70u);
    aot_gpr[22] = (0u | 80u);
    goto L_088DDA44;
L_088DDA44:
    aot_gpr[19] = (0u | 0u);
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088DDA5C;
      }
      goto L_088DDA50;
    }
L_088DDA50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088DDA80;
      }
      goto L_088DDA5C;
    }
L_088DDA5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(860)));
    aot_gpr[5] = (0u | 5u);
    aot_gpr[31] = (0x088DDA6Cu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088DDA6Cu) goto L_088DDA6C;
    return;
L_088DDA6C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDA80;
      }
      goto L_088DDA78;
    }
L_088DDA78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_088DDA80;
L_088DDA80:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDB2C;
      }
      goto L_088DDA88;
    }
L_088DDA88:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDB2C;
      }
      goto L_088DDA9C;
    }
L_088DDA9C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_088DDAA4;
L_088DDAA4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088DDB1C;
      }
      goto L_088DDAB4;
    }
L_088DDAB4:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DDB1C;
      }
      goto L_088DDAC0;
    }
L_088DDAC0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[7] < static_cast<std::uint32_t>(60) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDADC;
      }
      goto L_088DDAD4;
    }
L_088DDAD4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[20]));
      if (branch_taken) {
          goto L_088DDB14;
      }
      goto L_088DDADC;
    }
L_088DDADC:
    aot_gpr[4] = (aot_gpr[7] < static_cast<std::uint32_t>(70) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDAF0;
      }
      goto L_088DDAE8;
    }
L_088DDAE8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[21]));
      if (branch_taken) {
          goto L_088DDB14;
      }
      goto L_088DDAF0;
    }
L_088DDAF0:
    aot_gpr[4] = (aot_gpr[7] < static_cast<std::uint32_t>(80) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDB04;
      }
      goto L_088DDAFC;
    }
L_088DDAFC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[22]));
      if (branch_taken) {
          goto L_088DDB14;
      }
      goto L_088DDB04;
    }
L_088DDB04:
    aot_gpr[4] = (aot_gpr[7] < static_cast<std::uint32_t>(90) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDB14;
      }
      goto L_088DDB10;
    }
L_088DDB10:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[23]));
    goto L_088DDB14;
L_088DDB14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDB2C;
      }
      goto L_088DDB1C;
    }
L_088DDB1C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DDAA4;
      }
      goto L_088DDB2C;
    }
L_088DDB2C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DDA44;
      }
      goto L_088DDB3C;
    }
L_088DDB3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDB4C;
      }
      goto L_088DDB44;
    }
L_088DDB44:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[23]));
    goto L_088DDB4C;
L_088DDB4C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DDB78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_088DDBA4;
      }
      goto L_088DDB90;
    }
L_088DDB90:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088DDBA0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0590_entry, 590u, 124u, 0x08A52A20u>(ctx, &aot_mem) && ctx.pc == 0x088DDBA0u) goto L_088DDBA0;
    return;
L_088DDBA0:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_088DDBA4;
L_088DDBA4:
    aot_gpr[2] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DDBB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088DDBDCu);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088DDBDCu) goto L_088DDBDC;
    return;
L_088DDBDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDC20;
      }
      goto L_088DDBF4;
    }
L_088DDBF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[5] << 4u);
    aot_gpr[31] = (0x088DDC0Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088DDC0Cu) goto L_088DDC0C;
    return;
L_088DDC0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_088DDC20;
L_088DDC20:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_088DDC3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[31]);
    aot_gpr[31] = (0x088DDC74u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(5236)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088DDC74u) goto L_088DDC74;
    return;
L_088DDC74:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DDD1C;
      }
      goto L_088DDC80;
    }
L_088DDC80:
    aot_gpr[4] = (0u | 9u);
    aot_gpr[31] = (0x088DDC8Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 158u, 0x08872BF0u>(ctx, &aot_mem) && ctx.pc == 0x088DDC8Cu) goto L_088DDC8C;
    return;
L_088DDC8C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDD14;
      }
      goto L_088DDC98;
    }
L_088DDC98:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088DDCA8u);
    aot_gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088DDCA8u) goto L_088DDCA8;
    return;
L_088DDCA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(128)));
    aot_gpr[5] = (24948u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(24900));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (20563u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20575));
    aot_gpr[5] = (0u | 92u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088DDCDCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088DDCDCu) goto L_088DDCDC;
    return;
L_088DDCDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(5236)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088DDD00u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DDD00u) goto L_088DDD00;
    return;
L_088DDD00:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(5236)));
    aot_gpr[31] = (0x088DDD10u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 46u, 0x088C0344u>(ctx, &aot_mem) && ctx.pc == 0x088DDD10u) goto L_088DDD10;
    return;
L_088DDD10:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    goto L_088DDD14;
L_088DDD14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDD30;
      }
      goto L_088DDD1C;
    }
L_088DDD1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(5236)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088DDD2Cu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 46u, 0x088C0344u>(ctx, &aot_mem) && ctx.pc == 0x088DDD2Cu) goto L_088DDD2C;
    return;
L_088DDD2C:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    goto L_088DDD30;
L_088DDD30:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDDF4;
      }
      goto L_088DDD38;
    }
L_088DDD38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088DDD50u);
    aot_gpr[5] = (aot_gpr[6] << 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x088DDD50u) goto L_088DDD50;
    return;
L_088DDD50:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x088DDD70u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 16u, 0x08883150u>(ctx, &aot_mem) && ctx.pc == 0x088DDD70u) goto L_088DDD70;
    return;
L_088DDD70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088DDDF4;
      }
      goto L_088DDD84;
    }
L_088DDD84:
    aot_gpr[21] = (0u | 0u);
    goto L_088DDD88;
L_088DDD88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    aot_gpr[31] = (0x088DDDACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 24u, 0x0888325Cu>(ctx, &aot_mem) && ctx.pc == 0x088DDDACu) goto L_088DDDAC;
    return;
L_088DDDAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[31] = (0x088DDDBCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088DD9F4;
L_088DDDBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DDDDC;
      }
      goto L_088DDDCC;
    }
L_088DDDCC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(176)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    goto L_088DDDDC;
L_088DDDDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_088DDD88;
      }
      goto L_088DDDF4;
    }
L_088DDDF4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DDE18:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[7]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DDE48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088DDE90;
      }
      goto L_088DDE74;
    }
L_088DDE74:
    aot_gpr[31] = (0x088DDE7Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_088DD8C4;
L_088DDE7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088DDE74;
      }
      goto L_088DDE90;
    }
L_088DDE90:
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
L_088DDEA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088DDEBCu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_088DDE48;
L_088DDEBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDEE4;
      }
      goto L_088DDEC8;
    }
L_088DDEC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDEE4;
      }
      goto L_088DDED4;
    }
L_088DDED4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088DDEE4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088DDEE4u) goto L_088DDEE4;
    return;
L_088DDEE4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDEF8;
      }
      goto L_088DDEF0;
    }
L_088DDEF0:
    aot_gpr[31] = (0x088DDEF8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 46u, 0x08883384u>(ctx, &aot_mem) && ctx.pc == 0x088DDEF8u) goto L_088DDEF8;
    return;
L_088DDEF8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DDF08:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDF40;
      }
      goto L_088DDF24;
    }
L_088DDF24:
    aot_gpr[31] = (0x088DDF2Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 46u, 0x08883384u>(ctx, &aot_mem) && ctx.pc == 0x088DDF2Cu) goto L_088DDF2C;
    return;
L_088DDF2C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088DDF3Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5236)));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 111u, 0x088838B4u>(ctx, &aot_mem) && ctx.pc == 0x088DDF3Cu) goto L_088DDF3C;
    return;
L_088DDF3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_088DDF40;
L_088DDF40:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DDF50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088DDFC0;
      }
      goto L_088DDF88;
    }
L_088DDF88:
    aot_gpr[18] = (aot_gpr[6] & 65535u);
    goto L_088DDF8C;
L_088DDF8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_088DDFA0;
      }
      goto L_088DDF98;
    }
L_088DDF98:
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DDFAC;
      }
      goto L_088DDFA0;
    }
L_088DDFA0:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088DDFACu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_088DD970;
L_088DDFAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088DDF8C;
      }
      goto L_088DDFC0;
    }
L_088DDFC0:
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
L_088DDFE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DDFF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 4u);
    ctx.pc = 0x088DE000u; return;
}

void recomp_unit_0217(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0217_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_217(Runtime &runtime) {
    runtime.register_generated_unit(217u, 0x088DD000u, 4096u, &recomp_unit_0217, &recomp_unit_0217_entry);
    runtime.register_function(0x088DD000u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD00Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD014u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD040u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD04Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD054u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD058u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD078u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD0A0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD0ACu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD0C4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD0CCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD0F8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD104u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD10Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD110u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD130u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD158u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD164u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD16Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD170u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD184u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD19Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD1B4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD1C8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD1D0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD1E0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD1FCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD20Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD21Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD238u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD248u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD258u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD274u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD284u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD294u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD2B4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD2C0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD300u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD30Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD348u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD354u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD35Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD36Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD378u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD384u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD390u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD398u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD3A0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD3A8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD3E0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD3E8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD3F0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD3F8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD410u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD41Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD424u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD434u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD440u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD44Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD458u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD46Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD4FCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD504u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD514u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD524u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD530u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD538u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD548u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD554u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD560u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD56Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD57Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD5FCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD604u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD614u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD61Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD628u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD634u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD640u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD648u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD67Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD6E8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD6F0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD6FCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD708u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD710u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD724u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD750u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD768u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD77Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD794u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD7ACu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD7C4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD7D8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD7F8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD808u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD82Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD840u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD84Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD850u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD880u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD8A4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD8C4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD8D4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD8E0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD8ECu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD8F4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD910u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD918u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD920u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD944u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD968u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD970u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD990u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD998u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD9A0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD9A8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD9B0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD9C4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD9D0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD9D8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD9E0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DD9F4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDA34u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDA44u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDA50u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDA5Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDA6Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDA78u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDA80u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDA88u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDA9Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDAA4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDAB4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDAC0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDAD4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDADCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDAE8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDAF0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDAFCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDB04u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDB10u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDB14u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDB1Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDB2Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDB3Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDB44u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDB4Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDB78u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDB90u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDBA0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDBA4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDBB4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDBDCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDBF4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDC0Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDC20u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDC3Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDC74u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDC80u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDC8Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDC98u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDCA8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDCDCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDD00u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDD10u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDD14u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDD1Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDD2Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDD30u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDD38u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDD50u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDD70u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDD84u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDD88u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDDACu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDDBCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDDCCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDDDCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDDF4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDE18u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDE48u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDE74u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDE7Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDE90u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDEA8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDEBCu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDEC8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDED4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDEE4u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDEF0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDEF8u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDF08u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDF24u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDF2Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDF3Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDF40u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDF50u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDF88u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDF8Cu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDF98u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDFA0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDFACu, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDFC0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDFE0u, &recomp_unit_0217, "recomp_unit_0217");
    runtime.register_function(0x088DDFF4u, &recomp_unit_0217, "recomp_unit_0217");
}
} // namespace psprecomp
