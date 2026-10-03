#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0303[1014] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 10, 0, 0, 0, 11, 0, 0, 12, 0,
    0, 13, 0, 14, 0, 15, 0, 16, 0, 17, 18, 0, 19, 0, 20, 0, 21, 0, 0, 22, 0, 23, 0, 24, 0, 25, 0, 26, 0, 27, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 33, 0,
    0, 0, 0, 0, 0, 34, 0, 35, 0, 36, 0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 43, 0, 44,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0,
    0, 49, 0, 0, 0, 50, 51, 0, 0, 52, 0, 0, 0, 0, 53, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57,
    0, 58, 0, 59, 60, 0, 61, 0, 0, 0, 62, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0,
    67, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 78,
    0, 79, 0, 80, 0, 81, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 0, 91,
    0, 92, 0, 93, 0, 0, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 0, 99, 0, 100, 0, 101, 0, 102, 0, 0, 103, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 112, 0, 0, 0, 0, 113, 0, 114, 0, 115, 0, 0, 116, 0, 117,
    118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 122, 0, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0,
    126, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0,
    135, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 141,
    0, 0, 142, 0, 143, 0, 144, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 149, 0, 0, 150, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 155, 156, 0,
    157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 161, 0, 0, 0, 162, 0, 0, 163, 0, 0, 164,
    0, 165, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 169, 0, 0, 170, 0, 171, 0, 172, 0, 173, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 177, 0, 178, 0, 179, 0, 0, 0, 0,
    0, 0, 180, 0, 181, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0,
    0, 201, 0, 202, 0, 203, 204, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 212, 0, 0, 0,
    0, 0, 0, 213, 0, 214, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 219, 0, 220, 0, 0, 0, 221, 0, 0, 222,
    223, 0, 224, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 232, 0,
    0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235,
};
void recomp_unit_0303_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08933000u;
        entry_id = (entry_delta < 4056u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0303[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08933000;
    case 2u: goto L_08933008;
    case 3u: goto L_08933020;
    case 4u: goto L_0893302C;
    case 5u: goto L_08933038;
    case 6u: goto L_08933040;
    case 7u: goto L_08933048;
    case 8u: goto L_08933050;
    case 9u: goto L_08933058;
    case 10u: goto L_0893305C;
    case 11u: goto L_0893306C;
    case 12u: goto L_08933078;
    case 13u: goto L_08933084;
    case 14u: goto L_0893308C;
    case 15u: goto L_08933094;
    case 16u: goto L_0893309C;
    case 17u: goto L_089330A4;
    case 18u: goto L_089330A8;
    case 19u: goto L_089330B0;
    case 20u: goto L_089330B8;
    case 21u: goto L_089330C0;
    case 22u: goto L_089330CC;
    case 23u: goto L_089330D4;
    case 24u: goto L_089330DC;
    case 25u: goto L_089330E4;
    case 26u: goto L_089330EC;
    case 27u: goto L_089330F4;
    case 28u: goto L_08933124;
    case 29u: goto L_08933144;
    case 30u: goto L_0893314C;
    case 31u: goto L_0893315C;
    case 32u: goto L_08933168;
    case 33u: goto L_08933178;
    case 34u: goto L_08933194;
    case 35u: goto L_0893319C;
    case 36u: goto L_089331A4;
    case 37u: goto L_089331AC;
    case 38u: goto L_089331B8;
    case 39u: goto L_089331C8;
    case 40u: goto L_089331D0;
    case 41u: goto L_089331D8;
    case 42u: goto L_089331EC;
    case 43u: goto L_089331F4;
    case 44u: goto L_089331FC;
    case 45u: goto L_08933228;
    case 46u: goto L_08933230;
    case 47u: goto L_08933260;
    case 48u: goto L_0893326C;
    case 49u: goto L_08933284;
    case 50u: goto L_08933294;
    case 51u: goto L_08933298;
    case 52u: goto L_089332A4;
    case 53u: goto L_089332B8;
    case 54u: goto L_089332BC;
    case 55u: goto L_089332C8;
    case 56u: goto L_089332F4;
    case 57u: goto L_089332FC;
    case 58u: goto L_08933304;
    case 59u: goto L_0893330C;
    case 60u: goto L_08933310;
    case 61u: goto L_08933318;
    case 62u: goto L_08933328;
    case 63u: goto L_08933330;
    case 64u: goto L_08933338;
    case 65u: goto L_0893336C;
    case 66u: goto L_08933378;
    case 67u: goto L_08933380;
    case 68u: goto L_08933384;
    case 69u: goto L_0893339C;
    case 70u: goto L_089333AC;
    case 71u: goto L_089333B4;
    case 72u: goto L_089333BC;
    case 73u: goto L_089333C4;
    case 74u: goto L_089333CC;
    case 75u: goto L_089333D4;
    case 76u: goto L_089333E4;
    case 77u: goto L_089333F4;
    case 78u: goto L_089333FC;
    case 79u: goto L_08933404;
    case 80u: goto L_0893340C;
    case 81u: goto L_08933414;
    case 82u: goto L_0893341C;
    case 83u: goto L_0893342C;
    case 84u: goto L_08933440;
    case 85u: goto L_08933448;
    case 86u: goto L_08933450;
    case 87u: goto L_08933458;
    case 88u: goto L_08933460;
    case 89u: goto L_08933468;
    case 90u: goto L_08933470;
    case 91u: goto L_0893347C;
    case 92u: goto L_08933484;
    case 93u: goto L_0893348C;
    case 94u: goto L_0893349C;
    case 95u: goto L_089334A4;
    case 96u: goto L_089334AC;
    case 97u: goto L_089334B4;
    case 98u: goto L_089334BC;
    case 99u: goto L_089334C8;
    case 100u: goto L_089334D0;
    case 101u: goto L_089334D8;
    case 102u: goto L_089334E0;
    case 103u: goto L_089334EC;
    case 104u: goto L_0893353C;
    case 105u: goto L_08933568;
    case 106u: goto L_08933590;
    case 107u: goto L_089335CC;
    case 108u: goto L_089335D0;
    case 109u: goto L_089335F0;
    case 110u: goto L_08933600;
    case 111u: goto L_08933640;
    case 112u: goto L_08933644;
    case 113u: goto L_08933658;
    case 114u: goto L_08933660;
    case 115u: goto L_08933668;
    case 116u: goto L_08933674;
    case 117u: goto L_0893367C;
    case 118u: goto L_08933680;
    case 119u: goto L_08933698;
    case 120u: goto L_089336AC;
    case 121u: goto L_089336C0;
    case 122u: goto L_089336C8;
    case 123u: goto L_089336D4;
    case 124u: goto L_089336E4;
    case 125u: goto L_089336F0;
    case 126u: goto L_08933700;
    case 127u: goto L_08933708;
    case 128u: goto L_08933710;
    case 129u: goto L_08933718;
    case 130u: goto L_08933744;
    case 131u: goto L_08933750;
    case 132u: goto L_0893375C;
    case 133u: goto L_0893376C;
    case 134u: goto L_08933774;
    case 135u: goto L_08933780;
    case 136u: goto L_08933790;
    case 137u: goto L_0893379C;
    case 138u: goto L_089337B8;
    case 139u: goto L_089337E8;
    case 140u: goto L_089337F0;
    case 141u: goto L_089337FC;
    case 142u: goto L_08933808;
    case 143u: goto L_08933810;
    case 144u: goto L_08933818;
    case 145u: goto L_0893381C;
    case 146u: goto L_08933840;
    case 147u: goto L_08933898;
    case 148u: goto L_089338A0;
    case 149u: goto L_089338AC;
    case 150u: goto L_089338B8;
    case 151u: goto L_089338C0;
    case 152u: goto L_089338D0;
    case 153u: goto L_089338DC;
    case 154u: goto L_089338EC;
    case 155u: goto L_089338F4;
    case 156u: goto L_089338F8;
    case 157u: goto L_08933900;
    case 158u: goto L_08933914;
    case 159u: goto L_08933944;
    case 160u: goto L_0893394C;
    case 161u: goto L_08933954;
    case 162u: goto L_08933964;
    case 163u: goto L_08933970;
    case 164u: goto L_0893397C;
    case 165u: goto L_08933984;
    case 166u: goto L_0893398C;
    case 167u: goto L_08933994;
    case 168u: goto L_089339BC;
    case 169u: goto L_08933A04;
    case 170u: goto L_08933A10;
    case 171u: goto L_08933A18;
    case 172u: goto L_08933A20;
    case 173u: goto L_08933A28;
    case 174u: goto L_08933A30;
    case 175u: goto L_08933A40;
    case 176u: goto L_08933A54;
    case 177u: goto L_08933A5C;
    case 178u: goto L_08933A64;
    case 179u: goto L_08933A6C;
    case 180u: goto L_08933A88;
    case 181u: goto L_08933A90;
    case 182u: goto L_08933A98;
    case 183u: goto L_08933AA0;
    case 184u: goto L_08933ACC;
    case 185u: goto L_08933AE4;
    case 186u: goto L_08933B00;
    case 187u: goto L_08933B0C;
    case 188u: goto L_08933B18;
    case 189u: goto L_08933B54;
    case 190u: goto L_08933B5C;
    case 191u: goto L_08933B8C;
    case 192u: goto L_08933B9C;
    case 193u: goto L_08933BA8;
    case 194u: goto L_08933BCC;
    case 195u: goto L_08933BF0;
    case 196u: goto L_08933BF8;
    case 197u: goto L_08933C44;
    case 198u: goto L_08933C50;
    case 199u: goto L_08933C5C;
    case 200u: goto L_08933C74;
    case 201u: goto L_08933C84;
    case 202u: goto L_08933C8C;
    case 203u: goto L_08933C94;
    case 204u: goto L_08933C98;
    case 205u: goto L_08933CA0;
    case 206u: goto L_08933CAC;
    case 207u: goto L_08933CB8;
    case 208u: goto L_08933CC4;
    case 209u: goto L_08933CD0;
    case 210u: goto L_08933CDC;
    case 211u: goto L_08933CE8;
    case 212u: goto L_08933CF0;
    case 213u: goto L_08933D0C;
    case 214u: goto L_08933D14;
    case 215u: goto L_08933D1C;
    case 216u: goto L_08933D2C;
    case 217u: goto L_08933D3C;
    case 218u: goto L_08933D48;
    case 219u: goto L_08933D58;
    case 220u: goto L_08933D60;
    case 221u: goto L_08933D70;
    case 222u: goto L_08933D7C;
    case 223u: goto L_08933D80;
    case 224u: goto L_08933D88;
    case 225u: goto L_08933D8C;
    case 226u: goto L_08933DB4;
    case 227u: goto L_08933DD4;
    case 228u: goto L_08933DE0;
    case 229u: goto L_08933E08;
    case 230u: goto L_08933E24;
    case 231u: goto L_08933F74;
    case 232u: goto L_08933F78;
    case 233u: goto L_08933F88;
    case 234u: goto L_08933FB8;
    case 235u: goto L_08933FD4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08933000:
    aot_gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[22]) >> 31u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_08933008;
L_08933008:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(313), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[7] = (aot_gpr[23] | 0u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08933020u);
    aot_gpr[8] = (0u | 0u);
    ctx.pc = 0x08A5B29Cu;
    return;
L_08933020:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08933058;
      }
      goto L_0893302C;
    }
L_0893302C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[31] = (0x08933038u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 157u, 0x08932D28u>(ctx, &aot_mem) && ctx.pc == 0x08933038u) goto L_08933038;
    return;
L_08933038:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893305C;
      }
      goto L_08933040;
    }
L_08933040:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893305C;
      }
      goto L_08933048;
    }
L_08933048:
    aot_gpr[31] = (0x08933050u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 121u, 0x08932AB8u>(ctx, &aot_mem) && ctx.pc == 0x08933050u) goto L_08933050;
    return;
L_08933050:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08933008;
      }
      goto L_08933058;
    }
L_08933058:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), 0u);
    goto L_0893305C;
L_0893305C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0893306Cu);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    ctx.pc = 0x08A5B264u;
    return;
L_0893306C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089330A4;
      }
      goto L_08933078;
    }
L_08933078:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[31] = (0x08933084u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 157u, 0x08932D28u>(ctx, &aot_mem) && ctx.pc == 0x08933084u) goto L_08933084;
    return;
L_08933084:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089330A8;
      }
      goto L_0893308C;
    }
L_0893308C:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089330A8;
      }
      goto L_08933094;
    }
L_08933094:
    aot_gpr[31] = (0x0893309Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 121u, 0x08932AB8u>(ctx, &aot_mem) && ctx.pc == 0x0893309Cu) goto L_0893309C;
    return;
L_0893309C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08933008;
      }
      goto L_089330A4;
    }
L_089330A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), 0u);
    goto L_089330A8;
L_089330A8:
    aot_gpr[31] = (0x089330B0u);
    // nop
    ctx.pc = 0x08A5AFA4u;
    return;
L_089330B0:
    { const bool branch_taken = aot_gpr[21] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[20]);
      if (branch_taken) {
          goto L_089330F4;
      }
      goto L_089330B8;
    }
L_089330B8:
    aot_gpr[31] = (0x089330C0u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 121u, 0x08932AB8u>(ctx, &aot_mem) && ctx.pc == 0x089330C0u) goto L_089330C0;
    return;
L_089330C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089330EC;
      }
      goto L_089330CC;
    }
L_089330CC:
    aot_gpr[31] = (0x089330D4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 157u, 0x08932D28u>(ctx, &aot_mem) && ctx.pc == 0x089330D4u) goto L_089330D4;
    return;
L_089330D4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089330EC;
      }
      goto L_089330DC;
    }
L_089330DC:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089330EC;
      }
      goto L_089330E4;
    }
L_089330E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08933008;
      }
      goto L_089330EC;
    }
L_089330EC:
    aot_gpr[31] = (0x089330F4u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 186u, 0x08932EB0u>(ctx, &aot_mem) && ctx.pc == 0x089330F4u) goto L_089330F4;
    return;
L_089330F4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08933124:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(21400)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08933144u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = 0x08A5B06Cu;
    return;
L_08933144:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_0893315C;
      }
      goto L_0893314C;
    }
L_0893314C:
    aot_gpr[2] = (aot_gpr[16] ^ aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(21280), aot_gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08933168;
      }
      goto L_0893315C;
    }
L_0893315C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(21280)));
    aot_gpr[2] = (aot_gpr[4] ^ aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08933168;
L_08933168:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08933178:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08933194u);
    aot_gpr[18] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 102u, 0x08932940u>(ctx, &aot_mem) && ctx.pc == 0x08933194u) goto L_08933194;
    return;
L_08933194:
    aot_gpr[31] = (0x0893319Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 114u, 0x08932A70u>(ctx, &aot_mem) && ctx.pc == 0x0893319Cu) goto L_0893319C;
    return;
L_0893319C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089331B8;
      }
      goto L_089331A4;
    }
L_089331A4:
    aot_gpr[31] = (0x089331ACu);
    // nop
    ctx.pc = 0x08A5B2BCu;
    return;
L_089331AC:
    aot_gpr[4] = (aot_gpr[2] & 32u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089331D0;
      }
      goto L_089331B8;
    }
L_089331B8:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(21392)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (2219u << 16u);
      if (branch_taken) {
          goto L_089331D8;
      }
      goto L_089331C8;
    }
L_089331C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08933310;
      }
      goto L_089331D0;
    }
L_089331D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08933384;
      }
      goto L_089331D8;
    }
L_089331D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(21396)));
    aot_gpr[17] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08933310;
      }
      goto L_089331EC;
    }
L_089331EC:
    aot_gpr[31] = (0x089331F4u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 121u, 0x08932AB8u>(ctx, &aot_mem) && ctx.pc == 0x089331F4u) goto L_089331F4;
    return;
L_089331F4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893330C;
      }
      goto L_089331FC;
    }
L_089331FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(21396)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] << 8u);
    aot_gpr[7] = (aot_gpr[5] << 6u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[7] = (2219u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16160));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893326C;
      }
      goto L_08933228;
    }
L_08933228:
    aot_gpr[31] = (0x08933230u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 157u, 0x08932D28u>(ctx, &aot_mem) && ctx.pc == 0x08933230u) goto L_08933230;
    return;
L_08933230:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(21396)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[31] = (0x08933260u);
    aot_gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 189u, 0x08932EF0u>(ctx, &aot_mem) && ctx.pc == 0x08933260u) goto L_08933260;
    return;
L_08933260:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(21396)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[17]);
      if (branch_taken) {
          goto L_08933304;
      }
      goto L_0893326C;
    }
L_0893326C:
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(21396)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933298;
      }
      goto L_08933284;
    }
L_08933284:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08933294u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08933294u) goto L_08933294;
    return;
L_08933294:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(21396)));
    goto L_08933298;
L_08933298:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089332BC;
      }
      goto L_089332A4;
    }
L_089332A4:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089332B8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089332B8u) goto L_089332B8;
    return;
L_089332B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(21396)));
    goto L_089332BC;
L_089332BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[9] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089332F4;
      }
      goto L_089332C8;
    }
L_089332C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x089332F4u);
    aot_gpr[8] = (aot_gpr[10] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089332F4u) goto L_089332F4;
    return;
L_089332F4:
    aot_gpr[31] = (0x089332FCu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 186u, 0x08932EB0u>(ctx, &aot_mem) && ctx.pc == 0x089332FCu) goto L_089332FC;
    return;
L_089332FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08933384;
      }
      goto L_08933304;
    }
L_08933304:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08933310;
      }
      goto L_0893330C;
    }
L_0893330C:
    aot_gpr[18] = (0u | 0u);
    goto L_08933310;
L_08933310:
    aot_gpr[31] = (0x08933318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 102u, 0x08932940u>(ctx, &aot_mem) && ctx.pc == 0x08933318u) goto L_08933318;
    return;
L_08933318:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(21396)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08933378;
      }
      goto L_08933328;
    }
L_08933328:
    aot_gpr[31] = (0x08933330u);
    aot_gpr[4] = (0u | 0u);
    goto L_08933124;
L_08933330:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933380;
      }
      goto L_08933338;
    }
L_08933338:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(21396)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[31] = (0x0893336Cu);
    aot_gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 189u, 0x08932EF0u>(ctx, &aot_mem) && ctx.pc == 0x0893336Cu) goto L_0893336C;
    return;
L_0893336C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(21396)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    goto L_08933378;
L_08933378:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08933384;
      }
      goto L_08933380;
    }
L_08933380:
    aot_gpr[2] = (0u | 0u);
    goto L_08933384;
L_08933384:
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
L_0893339C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    goto L_089333AC;
L_089333AC:
    aot_gpr[31] = (0x089333B4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = 0x08A5ABE4u;
    return;
L_089333B4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089333D4;
      }
      goto L_089333BC;
    }
L_089333BC:
    aot_gpr[31] = (0x089333C4u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 157u, 0x08932D28u>(ctx, &aot_mem) && ctx.pc == 0x089333C4u) goto L_089333C4;
    return;
L_089333C4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089333D4;
      }
      goto L_089333CC;
    }
L_089333CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089333AC;
      }
      goto L_089333D4;
    }
L_089333D4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089333E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    goto L_089333F4;
L_089333F4:
    aot_gpr[31] = (0x089333FCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = 0x08A5AC64u;
    return;
L_089333FC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0893341C;
      }
      goto L_08933404;
    }
L_08933404:
    aot_gpr[31] = (0x0893340Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 157u, 0x08932D28u>(ctx, &aot_mem) && ctx.pc == 0x0893340Cu) goto L_0893340C;
    return;
L_0893340C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893341C;
      }
      goto L_08933414;
    }
L_08933414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089333F4;
      }
      goto L_0893341C;
    }
L_0893341C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893342C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
        goto L_08933450;
    }
    goto L_08933440;
L_08933440:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08933448;
      }
      goto L_08933448;
    }
L_08933448:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089334E0;
      }
      goto L_08933450;
    }
L_08933450:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933448;
      }
      goto L_08933458;
    }
L_08933458:
    aot_gpr[31] = (0x08933460u);
    // nop
    ctx.pc = 0x08A5B2CCu;
    return;
L_08933460:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893348C;
      }
      goto L_08933468;
    }
L_08933468:
    aot_gpr[31] = (0x08933470u);
    // nop
    ctx.pc = 0x08A5B2BCu;
    return;
L_08933470:
    aot_gpr[4] = (aot_gpr[2] & 2u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893348C;
      }
      goto L_0893347C;
    }
L_0893347C:
    aot_gpr[31] = (0x08933484u);
    aot_gpr[4] = (0u | 10000u);
    ctx.pc = 0x08A5B094u;
    return;
L_08933484:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08933468;
      }
      goto L_0893348C;
    }
L_0893348C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x0893349Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-25396));
    ctx.pc = 0x08A5B2F4u;
    return;
L_0893349C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089334AC;
      }
      goto L_089334A4;
    }
L_089334A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089334B4;
      }
      goto L_089334AC;
    }
L_089334AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089334E0;
      }
      goto L_089334B4;
    }
L_089334B4:
    aot_gpr[31] = (0x089334BCu);
    // nop
    ctx.pc = 0x08A5B2BCu;
    return;
L_089334BC:
    aot_gpr[4] = (aot_gpr[2] & 32u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089334D8;
      }
      goto L_089334C8;
    }
L_089334C8:
    aot_gpr[31] = (0x089334D0u);
    aot_gpr[4] = (0u | 10000u);
    ctx.pc = 0x08A5B094u;
    return;
L_089334D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089334B4;
      }
      goto L_089334D8;
    }
L_089334D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08933448;
      }
      goto L_089334E0;
    }
L_089334E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089334EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (2219u << 16u);
    aot_gpr[10] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (0u | 2u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(16160));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(21408));
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[6] = (2219u << 16u);
    aot_gpr[17] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[10]);
    aot_gpr[31] = (0x0893353Cu);
    aot_gpr[4] = (0u | 1280u);
    goto L_0893339C;
L_0893353C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[4] << 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(21388), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[31] = (0x08933568u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x08933568u) goto L_08933568;
    return;
L_08933568:
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(21396), aot_gpr[2]);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(21392), 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08933590u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-25380));
    ctx.pc = 0x08A5B0FCu;
    return;
L_08933590:
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(21400), aot_gpr[2]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(21280), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(21388)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[11] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (0u | 2u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (2219u << 16u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[5] = (2219u << 16u);
      if (branch_taken) {
          goto L_089335F0;
      }
      goto L_089335CC;
    }
L_089335CC:
    aot_gpr[11] = (0u | 0u);
    goto L_089335D0;
L_089335D0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21388)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_089335D0;
      }
      goto L_089335F0;
    }
L_089335F0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25364)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25368)));
    goto L_08933600;
L_08933600:
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(44), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(313), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(40), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[6] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(320));
      if (branch_taken) {
          goto L_08933600;
      }
      goto L_08933640;
    }
L_08933640:
    aot_gpr[4] = (0u | 0u);
    goto L_08933644;
L_08933644:
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08933644;
      }
      goto L_08933658;
    }
L_08933658:
    aot_gpr[31] = (0x08933660u);
    aot_gpr[4] = (0u | 2u);
    goto L_0893342C;
L_08933660:
    aot_gpr[31] = (0x08933668u);
    aot_gpr[4] = (0u | 3u);
    goto L_0893342C;
L_08933668:
    aot_gpr[4] = (2219u << 16u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22308), 0u);
      if (branch_taken) {
          goto L_0893367C;
      }
      goto L_08933674;
    }
L_08933674:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(21384), aot_gpr[16]);
      if (branch_taken) {
          goto L_08933680;
      }
      goto L_0893367C;
    }
L_0893367C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(21384), 0u);
    goto L_08933680;
L_08933680:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08933698:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089336ACu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(21400)));
    ctx.pc = 0x08A5B004u;
    return;
L_089336AC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x089336C0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(21396));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x089336C0u) goto L_089336C0;
    return;
L_089336C0:
    aot_gpr[31] = (0x089336C8u);
    aot_gpr[4] = (0u | 1280u);
    goto L_089333E4;
L_089336C8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089336D4:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16160));
    aot_gpr[5] = (0u | 0u);
    goto L_089336E4;
L_089336E4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08933708;
      }
      goto L_089336F0;
    }
L_089336F0:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(320));
      if (branch_taken) {
          goto L_089336E4;
      }
      goto L_08933700;
    }
L_08933700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08933710;
      }
      goto L_08933708;
    }
L_08933708:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08933710;
      }
      goto L_08933710;
    }
L_08933710:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08933718:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08933744u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(22048));
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 113u, 0x08932A58u>(ctx, &aot_mem) && ctx.pc == 0x08933744u) goto L_08933744;
    return;
L_08933744:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08933750u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08933750u) goto L_08933750;
    return;
L_08933750:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08933774;
      }
      goto L_0893375C;
    }
L_0893375C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0893376Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-25336));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x0893376Cu) goto L_0893376C;
    return;
L_0893376C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08933790;
      }
      goto L_08933774;
    }
L_08933774:
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08933790;
      }
      goto L_08933780;
    }
L_08933780:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(21384)));
    aot_gpr[31] = (0x08933790u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x08933790u) goto L_08933790;
    return;
L_08933790:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0893379Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x0893379Cu) goto L_0893379C;
    return;
L_0893379C:
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
L_089337B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] << 8u);
    aot_gpr[5] = (aot_gpr[16] << 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16160));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    goto L_089337E8;
L_089337E8:
    aot_gpr[31] = (0x089337F0u);
    // nop
    ctx.pc = 0x08A5B254u;
    return;
L_089337F0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08933818;
      }
      goto L_089337FC;
    }
L_089337FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[31] = (0x08933808u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 157u, 0x08932D28u>(ctx, &aot_mem) && ctx.pc == 0x08933808u) goto L_08933808;
    return;
L_08933808:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893381C;
      }
      goto L_08933810;
    }
L_08933810:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_089337E8;
      }
      goto L_08933818;
    }
L_08933818:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(48), 0u);
    goto L_0893381C;
L_0893381C:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(313), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08933840:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[7] & 255u);
    aot_gpr[7] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16160));
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25364)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[6] = (0u | 2u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25368)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089338C0;
      }
      goto L_08933898;
    }
L_08933898:
    aot_gpr[31] = (0x089338A0u);
    // nop
    ctx.pc = 0x08A5B2BCu;
    return;
L_089338A0:
    aot_gpr[4] = (aot_gpr[2] & 32u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089338C0;
      }
      goto L_089338AC;
    }
L_089338AC:
    aot_gpr[4] = (0u | 32u);
    aot_gpr[31] = (0x089338B8u);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = 0x08A5B2D4u;
    return;
L_089338B8:
    aot_gpr[31] = (0x089338C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 153u, 0x08943ACCu>(ctx, &aot_mem) && ctx.pc == 0x089338C0u) goto L_089338C0;
    return;
L_089338C0:
    aot_gpr[30] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089338D0u);
    aot_gpr[5] = (0u | 46u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 271u, 0x08A3ADD8u>(ctx, &aot_mem) && ctx.pc == 0x089338D0u) goto L_089338D0;
    return;
L_089338D0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089338F8;
      }
      goto L_089338DC;
    }
L_089338DC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089338ECu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-25360));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x089338ECu) goto L_089338EC;
    return;
L_089338EC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089338F8;
      }
      goto L_089338F4;
    }
L_089338F4:
    aot_gpr[30] = (0u | 1u);
    goto L_089338F8;
L_089338F8:
    aot_gpr[31] = (0x08933900u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_089336D4;
L_08933900:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08933914u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08933718;
L_08933914:
    aot_gpr[4] = (aot_gpr[18] << 8u);
    aot_gpr[5] = (aot_gpr[18] << 6u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[18] << 8u);
    aot_gpr[5] = (aot_gpr[18] << 6u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[23] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08933944;
L_08933944:
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08933954;
      }
      goto L_0893394C;
    }
L_0893394C:
    aot_gpr[16] = (16384u << 16u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08933954;
L_08933954:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08933964u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = 0x08A5B25Cu;
    return;
L_08933964:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[16]) >= 0) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[21]);
        goto L_089339BC;
    }
    goto L_08933970;
L_08933970:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    aot_gpr[31] = (0x0893397Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 157u, 0x08932D28u>(ctx, &aot_mem) && ctx.pc == 0x0893397Cu) goto L_0893397C;
    return;
L_0893397C:
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[21]);
        goto L_08933994;
    }
    goto L_08933984;
L_08933984:
    if (aot_gpr[22] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[21]);
        goto L_08933994;
    }
    goto L_0893398C;
L_0893398C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08933944;
      }
      goto L_08933994;
    }
L_08933994:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(12), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(48), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08933B5C;
      }
      goto L_089339BC;
    }
L_089339BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(44), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(316), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25348)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25352)));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(313), static_cast<std::uint8_t>(aot_gpr[23]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[31] = (0x08933A04u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 121u, 0x08932AB8u>(ctx, &aot_mem) && ctx.pc == 0x08933A04u) goto L_08933A04;
    return;
L_08933A04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08933A40;
      }
      goto L_08933A10;
    }
L_08933A10:
    aot_gpr[31] = (0x08933A18u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 157u, 0x08932D28u>(ctx, &aot_mem) && ctx.pc == 0x08933A18u) goto L_08933A18;
    return;
L_08933A18:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933A30;
      }
      goto L_08933A20;
    }
L_08933A20:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933A30;
      }
      goto L_08933A28;
    }
L_08933A28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08933944;
      }
      goto L_08933A30;
    }
L_08933A30:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(48), 0u);
      if (branch_taken) {
          goto L_08933B5C;
      }
      goto L_08933A40;
    }
L_08933A40:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08933AA0;
      }
      goto L_08933A54;
    }
L_08933A54:
    aot_gpr[31] = (0x08933A5Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.pc = 0x08A5AC8Cu;
    return;
L_08933A5C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08933A88;
      }
      goto L_08933A64;
    }
L_08933A64:
    aot_gpr[31] = (0x08933A6Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.pc = 0x08A5AC94u;
    return;
L_08933A6C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (aot_gpr[22] + static_cast<std::uint32_t>(52));
    aot_gpr[6] = (aot_gpr[16] & 2047u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[18] + aot_gpr[7]);
      if (branch_taken) {
          goto L_08933A98;
      }
      goto L_08933A88;
    }
L_08933A88:
    aot_gpr[31] = (0x08933A90u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    goto L_089337B8;
L_08933A90:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08933B5C;
      }
      goto L_08933A98;
    }
L_08933A98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08933B00;
      }
      goto L_08933AA0;
    }
L_08933AA0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25364)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25368)));
    aot_gpr[19] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08933ACCu);
    aot_gpr[8] = (0u | 2u);
    ctx.pc = 0x08A5B29Cu;
    return;
L_08933ACC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08933AE4u);
    aot_gpr[8] = (0u | 0u);
    ctx.pc = 0x08A5B29Cu;
    return;
L_08933AE4:
    aot_gpr[7] = (aot_gpr[22] + static_cast<std::uint32_t>(52));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (aot_gpr[16] & 2047u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[18] + aot_gpr[7]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08933B00;
L_08933B00:
    aot_gpr[8] = (aot_gpr[6] | 0u);
    if (aot_gpr[8] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[21]);
        goto L_08933B18;
    }
    goto L_08933B0C;
L_08933B0C:
    aot_gpr[8] = (0u | 2048u);
    aot_gpr[8] = (aot_gpr[8] - aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[21]);
    goto L_08933B18;
L_08933B18:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[8] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[6] = (aot_gpr[6] >> 11u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x08933B54u);
    aot_gpr[6] = (0u | 259u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x08933B54u) goto L_08933B54;
    return;
L_08933B54:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(311), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (aot_gpr[23] | 0u);
    goto L_08933B5C;
L_08933B5C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08933B8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08933B9Cu);
    // nop
    ctx.pc = 0x08A5AC9Cu;
    return;
L_08933B9C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08933BA8:
    aot_gpr[6] = (aot_gpr[4] << 8u);
    aot_gpr[4] = (aot_gpr[4] << 6u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16160));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (0u | 40u);
    goto L_08933BCC;
L_08933BCC:
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
          goto L_08933BCC;
      }
      goto L_08933BF0;
    }
L_08933BF0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08933BF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-368));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(324), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(332), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[8] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(328), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[18] & 4u);
    aot_gpr[7] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(336), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(340), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(344), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(348), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(352), aot_gpr[31]);
    aot_gpr[31] = (0x08933C44u);
    aot_gpr[6] = (0u | 0u);
    goto L_08933840;
L_08933C44:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08933C8C;
      }
      goto L_08933C50;
    }
L_08933C50:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08933C5Cu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_08933BA8;
L_08933C5C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25340)));
    aot_gpr[31] = (0x08933C74u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25344)));
    if (rt.invoke_chained_direct<&recomp_unit_0570_entry, 570u, 74u, 0x08A3E640u>(ctx, &aot_mem) && ctx.pc == 0x08933C74u) goto L_08933C74;
    return;
L_08933C74:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[21] = (aot_gpr[18] & 1u);
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[22] = (2216u << 16u);
      if (branch_taken) {
          goto L_08933C94;
      }
      goto L_08933C84;
    }
L_08933C84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08933C98;
      }
      goto L_08933C8C;
    }
L_08933C8C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08933D8C;
      }
      goto L_08933C94;
    }
L_08933C94:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    goto L_08933C98;
L_08933C98:
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-29308)));
      if (branch_taken) {
          goto L_08933CB8;
      }
      goto L_08933CA0;
    }
L_08933CA0:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08933CACu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 180u, 0x0891CD38u>(ctx, &aot_mem) && ctx.pc == 0x08933CACu) goto L_08933CAC;
    return;
L_08933CAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08933CF0;
      }
      goto L_08933CB8;
    }
L_08933CB8:
    aot_gpr[5] = (aot_gpr[18] & 2u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933CDC;
      }
      goto L_08933CC4;
    }
L_08933CC4:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08933CD0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 180u, 0x0891CD38u>(ctx, &aot_mem) && ctx.pc == 0x08933CD0u) goto L_08933CD0;
    return;
L_08933CD0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08933CF0;
      }
      goto L_08933CDC;
    }
L_08933CDC:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08933CE8u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x08933CE8u) goto L_08933CE8;
    return;
L_08933CE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08933CF0;
L_08933CF0:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x08933D0Cu);
    aot_gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 189u, 0x08932EF0u>(ctx, &aot_mem) && ctx.pc == 0x08933D0Cu) goto L_08933D0C;
    return;
L_08933D0C:
    aot_gpr[31] = (0x08933D14u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_089337B8;
L_08933D14:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933D80;
      }
      goto L_08933D1C;
    }
L_08933D1C:
    aot_gpr[4] = (aot_gpr[18] & 2u);
    aot_gpr[18] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29060)));
      if (branch_taken) {
          goto L_08933D48;
      }
      goto L_08933D2C;
    }
L_08933D2C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08933D3Cu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 180u, 0x0891CD38u>(ctx, &aot_mem) && ctx.pc == 0x08933D3Cu) goto L_08933D3C;
    return;
L_08933D3C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
      if (branch_taken) {
          goto L_08933D60;
      }
      goto L_08933D48;
    }
L_08933D48:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08933D58u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x08933D58u) goto L_08933D58;
    return;
L_08933D58:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    goto L_08933D60;
L_08933D60:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08933D70u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08933D70u) goto L_08933D70;
    return;
L_08933D70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08933D7Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08933D7Cu) goto L_08933D7C;
    return;
L_08933D7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), aot_gpr[16]);
    goto L_08933D80;
L_08933D80:
    aot_gpr[31] = (0x08933D88u);
    // nop
    ctx.pc = 0x08A5AFA4u;
    return;
L_08933D88:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    goto L_08933D8C;
L_08933D8C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(328)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(332)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(336)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(340)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(348)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(352)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08933DB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08933DD4u);
    aot_gpr[4] = (0u | 128u);
    goto L_08933BF8;
L_08933DD4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08933DE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[13] = (aot_gpr[10] | 0u);
    aot_gpr[14] = (aot_gpr[9] | 0u);
    aot_gpr[15] = (aot_gpr[8] | 0u);
    aot_gpr[24] = (aot_gpr[7] | 0u);
    aot_gpr[25] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08933E08u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 102u, 0x08932940u>(ctx, &aot_mem) && ctx.pc == 0x08933E08u) goto L_08933E08;
    return;
L_08933E08:
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[6] = (2219u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21388)));
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[4] << 4u);
      if (branch_taken) {
          goto L_08933F74;
      }
      goto L_08933E24;
    }
L_08933E24:
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
    aot_gpr[6] = (2219u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[8] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[8] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[25]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[8] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[24]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[8] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[15]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[8] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[14]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[8] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[8] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[8] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[7] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[7] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[13]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[2] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(21392), aot_gpr[4]);
      if (branch_taken) {
          goto L_08933F78;
      }
      goto L_08933F74;
    }
L_08933F74:
    aot_gpr[2] = (0u | 0u);
    goto L_08933F78;
L_08933F78:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08933F88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[13] = (aot_gpr[11] | 0u);
    aot_gpr[14] = (aot_gpr[10] | 0u);
    aot_gpr[15] = (aot_gpr[9] | 0u);
    aot_gpr[24] = (aot_gpr[8] | 0u);
    aot_gpr[25] = (aot_gpr[7] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08933FB8u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 102u, 0x08932940u>(ctx, &aot_mem) && ctx.pc == 0x08933FB8u) goto L_08933FB8;
    return;
L_08933FB8:
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[6] = (2219u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21388)));
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[4] << 4u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 2u, 0x08934124u>(ctx, &aot_mem); return;
      }
      goto L_08933FD4;
    }
L_08933FD4:
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
    aot_gpr[6] = (2219u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21392)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21396)));
    aot_gpr[8] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[4]);
    ctx.pc = 0x08934000u; return;
}

void recomp_unit_0303(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0303_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_303(Runtime &runtime) {
    runtime.register_generated_unit(303u, 0x08933000u, 4096u, &recomp_unit_0303, &recomp_unit_0303_entry);
    runtime.register_function(0x08933000u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933008u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933020u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x0893302Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933038u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933040u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933048u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933050u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933058u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x0893305Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x0893306Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933078u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933084u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x0893308Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933094u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x0893309Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089330A4u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089330A8u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089330B0u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089330B8u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089330C0u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089330CCu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089330D4u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089330DCu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089330E4u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089330ECu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089330F4u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933124u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933144u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x0893314Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x0893315Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933168u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933178u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933194u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x0893319Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089331A4u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089331ACu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089331B8u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089331C8u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089331D0u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089331D8u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089331ECu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089331F4u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089331FCu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933228u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933230u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933260u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x0893326Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933284u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933294u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933298u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089332A4u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089332B8u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089332BCu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089332C8u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089332F4u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089332FCu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933304u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x0893330Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933310u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933318u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933328u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933330u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933338u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x0893336Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933378u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933380u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933384u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x0893339Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089333ACu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089333B4u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089333BCu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089333C4u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089333CCu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089333D4u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089333E4u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089333F4u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089333FCu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933404u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x0893340Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933414u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x0893341Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x0893342Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933440u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933448u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933450u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933458u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933460u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933468u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933470u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x0893347Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933484u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x0893348Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x0893349Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089334A4u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089334ACu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089334B4u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089334BCu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089334C8u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089334D0u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089334D8u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089334E0u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089334ECu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x0893353Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933568u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933590u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089335CCu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089335D0u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089335F0u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933600u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933640u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933644u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933658u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933660u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933668u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933674u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x0893367Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933680u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933698u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089336ACu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089336C0u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089336C8u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089336D4u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089336E4u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089336F0u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933700u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933708u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933710u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933718u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933744u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933750u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x0893375Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x0893376Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933774u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933780u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933790u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x0893379Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089337B8u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089337E8u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089337F0u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089337FCu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933808u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933810u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933818u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x0893381Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933840u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933898u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089338A0u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089338ACu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089338B8u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089338C0u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089338D0u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089338DCu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089338ECu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089338F4u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089338F8u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933900u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933914u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933944u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x0893394Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933954u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933964u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933970u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x0893397Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933984u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x0893398Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933994u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x089339BCu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933A04u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933A10u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933A18u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933A20u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933A28u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933A30u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933A40u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933A54u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933A5Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933A64u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933A6Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933A88u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933A90u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933A98u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933AA0u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933ACCu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933AE4u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933B00u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933B0Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933B18u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933B54u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933B5Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933B8Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933B9Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933BA8u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933BCCu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933BF0u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933BF8u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933C44u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933C50u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933C5Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933C74u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933C84u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933C8Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933C94u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933C98u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933CA0u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933CACu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933CB8u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933CC4u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933CD0u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933CDCu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933CE8u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933CF0u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933D0Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933D14u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933D1Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933D2Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933D3Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933D48u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933D58u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933D60u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933D70u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933D7Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933D80u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933D88u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933D8Cu, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933DB4u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933DD4u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933DE0u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933E08u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933E24u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933F74u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933F78u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933F88u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933FB8u, &recomp_unit_0303, "recomp_unit_0303");
    runtime.register_function(0x08933FD4u, &recomp_unit_0303, "recomp_unit_0303");
}
} // namespace psprecomp
