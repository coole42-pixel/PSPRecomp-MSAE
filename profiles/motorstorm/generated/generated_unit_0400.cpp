#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0400[1024] = {
    1, 0, 2, 0, 0, 0, 0, 3, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 8, 9, 0, 10, 0, 0, 11, 0, 0,
    0, 0, 0, 0, 12, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0,
    17, 0, 0, 18, 0, 19, 0, 20, 0, 21, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 25, 0, 0, 26, 0, 27, 0, 28, 0, 29, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 32, 0, 33, 0, 0, 34, 0, 0, 35, 0,
    36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 43, 0, 44, 0, 45, 0, 46, 47, 48, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 49, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 54, 0, 55, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 62, 0, 63, 0, 0, 64, 0, 65,
    0, 66, 0, 0, 0, 0, 67, 0, 0, 68, 0, 69, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0,
    0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0,
    86, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0,
    0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 0, 105, 0, 106, 0, 0, 107,
    0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 115,
    0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0,
    123, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0,
    0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0,
    142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 151, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0,
    0, 164, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 173, 0,
    0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 176, 177, 0, 178, 0, 179, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 184, 0, 185, 0, 0, 0, 186, 0, 187,
    0, 188, 0, 0, 189, 0, 0, 190, 0, 191, 0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0,
    0, 0, 0, 197, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 201, 0, 202, 0, 0, 0, 203, 0, 204, 0, 205, 206, 0, 0, 207,
};
void recomp_unit_0400_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08994000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0400[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08994000;
    case 2u: goto L_08994008;
    case 3u: goto L_0899401C;
    case 4u: goto L_08994024;
    case 5u: goto L_08994030;
    case 6u: goto L_08994050;
    case 7u: goto L_08994058;
    case 8u: goto L_0899405C;
    case 9u: goto L_08994060;
    case 10u: goto L_08994068;
    case 11u: goto L_08994074;
    case 12u: goto L_08994090;
    case 13u: goto L_08994094;
    case 14u: goto L_089940C4;
    case 15u: goto L_089940C8;
    case 16u: goto L_089940F8;
    case 17u: goto L_08994100;
    case 18u: goto L_0899410C;
    case 19u: goto L_08994114;
    case 20u: goto L_0899411C;
    case 21u: goto L_08994124;
    case 22u: goto L_08994130;
    case 23u: goto L_08994138;
    case 24u: goto L_08994140;
    case 25u: goto L_08994188;
    case 26u: goto L_08994194;
    case 27u: goto L_0899419C;
    case 28u: goto L_089941A4;
    case 29u: goto L_089941AC;
    case 30u: goto L_089941B0;
    case 31u: goto L_089941D4;
    case 32u: goto L_089941D8;
    case 33u: goto L_089941E0;
    case 34u: goto L_089941EC;
    case 35u: goto L_089941F8;
    case 36u: goto L_08994200;
    case 37u: goto L_0899420C;
    case 38u: goto L_08994238;
    case 39u: goto L_08994244;
    case 40u: goto L_0899424C;
    case 41u: goto L_089942A8;
    case 42u: goto L_089942B4;
    case 43u: goto L_089942BC;
    case 44u: goto L_089942C4;
    case 45u: goto L_089942CC;
    case 46u: goto L_089942D4;
    case 47u: goto L_089942D8;
    case 48u: goto L_089942DC;
    case 49u: goto L_08994308;
    case 50u: goto L_0899430C;
    case 51u: goto L_08994328;
    case 52u: goto L_08994338;
    case 53u: goto L_08994348;
    case 54u: goto L_0899434C;
    case 55u: goto L_08994354;
    case 56u: goto L_0899435C;
    case 57u: goto L_08994368;
    case 58u: goto L_089943A4;
    case 59u: goto L_089943B4;
    case 60u: goto L_089943C8;
    case 61u: goto L_089943D8;
    case 62u: goto L_089943E0;
    case 63u: goto L_089943E8;
    case 64u: goto L_089943F4;
    case 65u: goto L_089943FC;
    case 66u: goto L_08994404;
    case 67u: goto L_08994418;
    case 68u: goto L_08994424;
    case 69u: goto L_0899442C;
    case 70u: goto L_08994438;
    case 71u: goto L_08994440;
    case 72u: goto L_08994460;
    case 73u: goto L_08994480;
    case 74u: goto L_08994488;
    case 75u: goto L_089944BC;
    case 76u: goto L_089944D0;
    case 77u: goto L_089944D8;
    case 78u: goto L_089944F4;
    case 79u: goto L_08994514;
    case 80u: goto L_08994530;
    case 81u: goto L_08994538;
    case 82u: goto L_08994540;
    case 83u: goto L_08994548;
    case 84u: goto L_08994568;
    case 85u: goto L_08994574;
    case 86u: goto L_08994580;
    case 87u: goto L_0899458C;
    case 88u: goto L_08994598;
    case 89u: goto L_089945A4;
    case 90u: goto L_089945B0;
    case 91u: goto L_089945BC;
    case 92u: goto L_089945C8;
    case 93u: goto L_089945E8;
    case 94u: goto L_08994608;
    case 95u: goto L_08994614;
    case 96u: goto L_08994620;
    case 97u: goto L_0899463C;
    case 98u: goto L_0899465C;
    case 99u: goto L_08994668;
    case 100u: goto L_08994674;
    case 101u: goto L_08994690;
    case 102u: goto L_089946C0;
    case 103u: goto L_089946CC;
    case 104u: goto L_089946D8;
    case 105u: goto L_089946E8;
    case 106u: goto L_089946F0;
    case 107u: goto L_089946FC;
    case 108u: goto L_08994704;
    case 109u: goto L_08994720;
    case 110u: goto L_08994740;
    case 111u: goto L_0899474C;
    case 112u: goto L_08994758;
    case 113u: goto L_08994764;
    case 114u: goto L_08994770;
    case 115u: goto L_0899477C;
    case 116u: goto L_08994798;
    case 117u: goto L_089947B8;
    case 118u: goto L_089947C4;
    case 119u: goto L_089947D0;
    case 120u: goto L_089947DC;
    case 121u: goto L_089947E8;
    case 122u: goto L_089947F4;
    case 123u: goto L_08994800;
    case 124u: goto L_0899480C;
    case 125u: goto L_0899481C;
    case 126u: goto L_0899483C;
    case 127u: goto L_0899485C;
    case 128u: goto L_08994868;
    case 129u: goto L_08994884;
    case 130u: goto L_089948A4;
    case 131u: goto L_089948B0;
    case 132u: goto L_089948BC;
    case 133u: goto L_089948C8;
    case 134u: goto L_089948D4;
    case 135u: goto L_089948F0;
    case 136u: goto L_08994910;
    case 137u: goto L_0899491C;
    case 138u: goto L_08994938;
    case 139u: goto L_08994940;
    case 140u: goto L_0899496C;
    case 141u: goto L_08994978;
    case 142u: goto L_08994980;
    case 143u: goto L_0899499C;
    case 144u: goto L_089949BC;
    case 145u: goto L_089949D8;
    case 146u: goto L_089949E4;
    case 147u: goto L_08994A00;
    case 148u: goto L_08994A10;
    case 149u: goto L_08994A20;
    case 150u: goto L_08994A2C;
    case 151u: goto L_08994A88;
    case 152u: goto L_08994A90;
    case 153u: goto L_08994A9C;
    case 154u: goto L_08994AB8;
    case 155u: goto L_08994AC0;
    case 156u: goto L_08994AD4;
    case 157u: goto L_08994AE8;
    case 158u: goto L_08994AF4;
    case 159u: goto L_08994B10;
    case 160u: goto L_08994B24;
    case 161u: goto L_08994B44;
    case 162u: goto L_08994B5C;
    case 163u: goto L_08994B68;
    case 164u: goto L_08994B84;
    case 165u: goto L_08994B8C;
    case 166u: goto L_08994B98;
    case 167u: goto L_08994BB4;
    case 168u: goto L_08994BC4;
    case 169u: goto L_08994BF8;
    case 170u: goto L_08994C2C;
    case 171u: goto L_08994C64;
    case 172u: goto L_08994C6C;
    case 173u: goto L_08994C78;
    case 174u: goto L_08994C8C;
    case 175u: goto L_08994C94;
    case 176u: goto L_08994CA8;
    case 177u: goto L_08994CAC;
    case 178u: goto L_08994CB4;
    case 179u: goto L_08994CBC;
    case 180u: goto L_08994CD0;
    case 181u: goto L_08994CD8;
    case 182u: goto L_08994ECC;
    case 183u: goto L_08994ED4;
    case 184u: goto L_08994EDC;
    case 185u: goto L_08994EE4;
    case 186u: goto L_08994EF4;
    case 187u: goto L_08994EFC;
    case 188u: goto L_08994F04;
    case 189u: goto L_08994F10;
    case 190u: goto L_08994F1C;
    case 191u: goto L_08994F24;
    case 192u: goto L_08994F2C;
    case 193u: goto L_08994F3C;
    case 194u: goto L_08994F48;
    case 195u: goto L_08994F60;
    case 196u: goto L_08994F70;
    case 197u: goto L_08994F8C;
    case 198u: goto L_08994F90;
    case 199u: goto L_08994FA4;
    case 200u: goto L_08994FB8;
    case 201u: goto L_08994FC4;
    case 202u: goto L_08994FCC;
    case 203u: goto L_08994FDC;
    case 204u: goto L_08994FE4;
    case 205u: goto L_08994FEC;
    case 206u: goto L_08994FF0;
    case 207u: goto L_08994FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08994000:
    aot_gpr[17] = (0u + 0u);
    aot_gpr[18] = (aot_gpr[2] + aot_gpr[3]);
    goto L_08994008;
L_08994008:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[23] << (aot_gpr[17] & 31u));
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[3]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08994068;
      }
      goto L_0899401C;
    }
L_0899401C:
    { const bool branch_taken = aot_gpr[30] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08994030;
      }
      goto L_08994024;
    }
L_08994024:
    aot_gpr[2] = (aot_gpr[19] << 1u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08994030;
L_08994030:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[16] << 2u);
    aot_gpr[7] = (0u | 65535u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_089940F8;
      }
      goto L_08994050;
    }
L_08994050:
    { const bool branch_taken = aot_gpr[20] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08994114;
      }
      goto L_08994058;
    }
L_08994058:
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[20]));
    goto L_0899405C;
L_0899405C:
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08994060;
L_08994060:
    aot_gpr[19] = (aot_gpr[2] & 65535u);
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08994068;
L_08994068:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[17] != aot_gpr[22];
    aot_gpr[16] = (aot_gpr[2] & 65535u);
      if (branch_taken) {
          goto L_08994008;
      }
      goto L_08994074;
    }
L_08994074:
    aot_gpr[2] = (aot_gpr[21] + static_cast<std::uint32_t>(8));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[21] = (aot_gpr[2] & 65535u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[3];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 271u, 0x08993FF4u>(ctx, &aot_mem); return;
      }
      goto L_08994090;
    }
L_08994090:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_08994094;
L_08994094:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089940C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_089940C8;
L_089940C8:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(100));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089940F8:
    { const bool branch_taken = aot_gpr[20] == aot_gpr[7];
    aot_gpr[6] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_0899405C;
      }
      goto L_08994100;
    }
L_08994100:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0899410Cu);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 123u, 0x08993708u>(ctx, &aot_mem) && ctx.pc == 0x0899410Cu) goto L_0899410C;
    return;
L_0899410C:
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08994060;
L_08994114:
    aot_gpr[31] = (0x0899411Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 63u, 0x089933F4u>(ctx, &aot_mem) && ctx.pc == 0x0899411Cu) goto L_0899411C;
    return;
L_0899411C:
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08994060;
L_08994124:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    (void)rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 269u, 0x08993FD0u>(ctx, &aot_mem); return;
L_08994130:
    aot_gpr[31] = (0x08994138u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 23u, 0x0899317Cu>(ctx, &aot_mem) && ctx.pc == 0x08994138u) goto L_08994138;
    return;
L_08994138:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    (void)rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 262u, 0x08993F6Cu>(ctx, &aot_mem); return;
L_08994140:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-544));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(512), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] & 255u);
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] & 255u);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(532), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(528), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(524), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(520), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (aot_gpr[8] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(536), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(516), aot_gpr[17]);
      if (branch_taken) {
          goto L_089941D4;
      }
      goto L_08994188;
    }
L_08994188:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089941D4;
      }
      goto L_08994194;
    }
L_08994194:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_089941D4;
      }
      goto L_0899419C;
    }
L_0899419C:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_089941D4;
      }
      goto L_089941A4;
    }
L_089941A4:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089941D8;
      }
      goto L_089941AC;
    }
L_089941AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(536)));
    goto L_089941B0;
L_089941B0:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(532)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(528)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(524)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(520)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(516)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(512)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089941D4:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    goto L_089941D8;
L_089941D8:
    aot_gpr[31] = (0x089941E0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089941E0u) goto L_089941E0;
    return;
L_089941E0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08994238;
      }
      goto L_089941EC;
    }
L_089941EC:
    aot_gpr[2] = (aot_gpr[18] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(536)));
      if (branch_taken) {
          goto L_089941B0;
      }
      goto L_089941F8;
    }
L_089941F8:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089941B0;
      }
      goto L_08994200;
    }
L_08994200:
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x0899420Cu);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0899420Cu) goto L_0899420C;
    return;
L_0899420C:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[2] = (0u + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(536)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(532)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(528)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(524)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(520)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(516)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(512)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08994238:
    aot_gpr[5] = (aot_gpr[20] & 65535u);
    aot_gpr[31] = (0x08994244u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x08994244u) goto L_08994244;
    return;
L_08994244:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(5));
    goto L_089941EC;
L_0899424C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-576));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(528), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] & 255u);
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(-11));
    aot_gpr[2] = (aot_gpr[2] & 255u);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(560), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[11] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(556), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(552), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(548), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(544), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(532), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[9] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(564), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(540), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(536), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(512), aot_gpr[6]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(576)));
      if (branch_taken) {
          goto L_08994308;
      }
      goto L_089942A8;
    }
L_089942A8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(14));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(13));
      if (branch_taken) {
          goto L_08994308;
      }
      goto L_089942B4;
    }
L_089942B4:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08994308;
      }
      goto L_089942BC;
    }
L_089942BC:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08994308;
      }
      goto L_089942C4;
    }
L_089942C4:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08994308;
      }
      goto L_089942CC;
    }
L_089942CC:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          goto L_0899430C;
      }
      goto L_089942D4;
    }
L_089942D4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(564)));
    goto L_089942D8;
L_089942D8:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(560)));
    goto L_089942DC;
L_089942DC:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(556)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(552)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(548)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(544)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(540)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(536)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(532)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(528)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(576));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08994308:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-128));
    goto L_0899430C;
L_0899430C:
    if (aot_gpr[8] == 0u) aot_gpr[2] = (0u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[8] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[16]));
      if (branch_taken) {
          goto L_089943A4;
      }
      goto L_08994328;
    }
L_08994328:
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x08994338u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08994338u) goto L_08994338;
    return;
L_08994338:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(11));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[17]);
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[17] = (aot_gpr[18] + aot_gpr[17]);
      if (branch_taken) {
          goto L_089943D8;
      }
      goto L_08994348;
    }
L_08994348:
    aot_gpr[2] = (aot_gpr[22] < aot_gpr[19] ? 1u : 0u);
    goto L_0899434C;
L_0899434C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(564)));
      if (branch_taken) {
          goto L_089942D8;
      }
      goto L_08994354;
    }
L_08994354:
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[4] = (aot_gpr[23] + 0u);
      if (branch_taken) {
          goto L_089942D8;
      }
      goto L_0899435C;
    }
L_0899435C:
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x08994368u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08994368u) goto L_08994368;
    return;
L_08994368:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(512)));
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(564)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(560)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(556)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(552)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(548)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(544)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(540)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(536)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(532)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(528)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(576));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089943A4:
    aot_gpr[5] = (aot_gpr[8] & 65535u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089943B4u);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089943B4u) goto L_089943B4;
    return;
L_089943B4:
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089943C8u);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089943C8u) goto L_089943C8;
    return;
L_089943C8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(11));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[17]);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    aot_gpr[17] = (aot_gpr[18] + aot_gpr[17]);
      if (branch_taken) {
          goto L_08994348;
      }
      goto L_089943D8;
    }
L_089943D8:
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(564)));
      if (branch_taken) {
          goto L_089942D8;
      }
      goto L_089943E0;
    }
L_089943E0:
    if (aot_gpr[21] == 0u) {
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(560)));
        goto L_089942DC;
    }
    goto L_089943E8;
L_089943E8:
    aot_gpr[2] = (aot_gpr[21] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_08994404;
      }
      goto L_089943F4;
    }
L_089943F4:
    aot_gpr[31] = (0x089943FCu);
    aot_gpr[5] = (aot_gpr[21] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089943FCu) goto L_089943FC;
    return;
L_089943FC:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(2));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(2));
    goto L_08994404;
L_08994404:
    aot_gpr[6] = (aot_gpr[21] << 1u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[19] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(564)));
      if (branch_taken) {
          goto L_089942D8;
      }
      goto L_08994418;
    }
L_08994418:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08994424u);
    aot_gpr[5] = (aot_gpr[30] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08994424u) goto L_08994424;
    return;
L_08994424:
    aot_gpr[2] = (aot_gpr[22] < aot_gpr[19] ? 1u : 0u);
    goto L_0899434C;
L_0899442C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_08994438:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_08994440:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08994460u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x08994460u) goto L_08994460;
    return;
L_08994460:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_08994480:
    // nop
    goto L_08994B24;
L_08994488:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(24));
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[16] + aot_gpr[18]);
    goto L_089944BC;
L_089944BC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089944D0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08994480;
L_089944D0:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[19];
    aot_gpr[2] = (aot_gpr[16] + aot_gpr[18]);
      if (branch_taken) {
          goto L_089944BC;
      }
      goto L_089944D8;
    }
L_089944D8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089944F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08994514u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x08994514u) goto L_08994514;
    return;
L_08994514:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem); return;
L_08994530:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem); return;
L_08994538:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem); return;
L_08994540:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem); return;
L_08994548:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08994568u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x08994568u) goto L_08994568;
    return;
L_08994568:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08994574u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x08994574u) goto L_08994574;
    return;
L_08994574:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08994580u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x08994580u) goto L_08994580;
    return;
L_08994580:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0899458Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x0899458Cu) goto L_0899458C;
    return;
L_0899458C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08994598u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x08994598u) goto L_08994598;
    return;
L_08994598:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089945A4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089945A4u) goto L_089945A4;
    return;
L_089945A4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089945B0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089945B0u) goto L_089945B0;
    return;
L_089945B0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089945BCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089945BCu) goto L_089945BC;
    return;
L_089945BC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089945C8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089945C8u) goto L_089945C8;
    return;
L_089945C8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(10)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089945E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08994608u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x08994608u) goto L_08994608;
    return;
L_08994608:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08994614u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x08994614u) goto L_08994614;
    return;
L_08994614:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08994620u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x08994620u) goto L_08994620;
    return;
L_08994620:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem); return;
L_0899463C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0899465Cu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x0899465Cu) goto L_0899465C;
    return;
L_0899465C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08994668u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x08994668u) goto L_08994668;
    return;
L_08994668:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08994674u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x08994674u) goto L_08994674;
    return;
L_08994674:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_08994690:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089946C0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089946C0u) goto L_089946C0;
    return;
L_089946C0:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089946CCu);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089946CCu) goto L_089946CC;
    return;
L_089946CC:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089946D8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089946D8u) goto L_089946D8;
    return;
L_089946D8:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089946E8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089946E8u) goto L_089946E8;
    return;
L_089946E8:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[17]);
    goto L_089946F0;
L_089946F0:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089946FCu);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089946FCu) goto L_089946FC;
    return;
L_089946FC:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[19];
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[17]);
      if (branch_taken) {
          goto L_089946F0;
      }
      goto L_08994704;
    }
L_08994704:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08994720:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08994740u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x08994740u) goto L_08994740;
    return;
L_08994740:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x0899474Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x0899474Cu) goto L_0899474C;
    return;
L_0899474C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08994758u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x08994758u) goto L_08994758;
    return;
L_08994758:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08994764u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x08994764u) goto L_08994764;
    return;
L_08994764:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08994770u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x08994770u) goto L_08994770;
    return;
L_08994770:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x0899477Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x0899477Cu) goto L_0899477C;
    return;
L_0899477C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_08994798:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089947B8u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089947B8u) goto L_089947B8;
    return;
L_089947B8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089947C4u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089947C4u) goto L_089947C4;
    return;
L_089947C4:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089947D0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089947D0u) goto L_089947D0;
    return;
L_089947D0:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089947DCu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089947DCu) goto L_089947DC;
    return;
L_089947DC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089947E8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089947E8u) goto L_089947E8;
    return;
L_089947E8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089947F4u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089947F4u) goto L_089947F4;
    return;
L_089947F4:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08994800u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x08994800u) goto L_08994800;
    return;
L_08994800:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x0899480Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x0899480Cu) goto L_0899480C;
    return;
L_0899480C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x0899481Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x0899481Cu) goto L_0899481C;
    return;
L_0899481C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(12));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_0899483C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0899485Cu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x0899485Cu) goto L_0899485C;
    return;
L_0899485C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08994868u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x08994868u) goto L_08994868;
    return;
L_08994868:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_08994884:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089948A4u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089948A4u) goto L_089948A4;
    return;
L_089948A4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089948B0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089948B0u) goto L_089948B0;
    return;
L_089948B0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089948BCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089948BCu) goto L_089948BC;
    return;
L_089948BC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089948C8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089948C8u) goto L_089948C8;
    return;
L_089948C8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089948D4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089948D4u) goto L_089948D4;
    return;
L_089948D4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(10));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem); return;
L_089948F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08994910u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x08994910u) goto L_08994910;
    return;
L_08994910:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x0899491Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x0899491Cu) goto L_0899491C;
    return;
L_0899491C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_08994938:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_08994940:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] + aot_gpr[16]);
    goto L_0899496C;
L_0899496C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08994978u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x08994978u) goto L_08994978;
    return;
L_08994978:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[19];
    aot_gpr[5] = (aot_gpr[18] + aot_gpr[16]);
      if (branch_taken) {
          goto L_0899496C;
      }
      goto L_08994980;
    }
L_08994980:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899499C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089949BCu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089949BCu) goto L_089949BC;
    return;
L_089949BC:
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[31] = (0x089949D8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_08994488;
L_089949D8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089949E4u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089949E4u) goto L_089949E4;
    return;
L_089949E4:
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[31] = (0x08994A00u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_08994940;
L_08994A00:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(120));
    aot_gpr[31] = (0x08994A10u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x08994A10u) goto L_08994A10;
    return;
L_08994A10:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(137));
    aot_gpr[31] = (0x08994A20u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x08994A20u) goto L_08994A20;
    return;
L_08994A20:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08994A2Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x08994A2Cu) goto L_08994A2C;
    return;
L_08994A2C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08994A88:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12596));
    goto L_08994A90;
L_08994A90:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08994A9Cu);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x08994A9Cu) goto L_08994A9C;
    return;
L_08994A9C:
    aot_gpr[3] = (aot_gpr[16] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08994AB8:
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    goto L_08994A90;
L_08994AC0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[31] = (0x08994AD4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12592));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08994AD4u) goto L_08994AD4;
    return;
L_08994AD4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08994AE8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12580));
    goto L_08994A90;
L_08994AF4:
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[3]));
    aot_gpr[4] = (aot_gpr[5] + 0u);
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]));
    aot_gpr[5] = (aot_gpr[3] + 0u);
    aot_gpr[31] = (0x08994B10u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    goto L_08994BB4;
L_08994B10:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08994B24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08994B44u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x08994B44u) goto L_08994B44;
    return;
L_08994B44:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08994B84;
      }
      goto L_08994B5C;
    }
L_08994B5C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08994B68u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x08994B68u) goto L_08994B68;
    return;
L_08994B68:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_08994B84:
    aot_gpr[31] = (0x08994B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x08994B8Cu) goto L_08994B8C;
    return;
L_08994B8C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08994B98u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x08994B98u) goto L_08994B98;
    return;
L_08994B98:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_08994BB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_08994CAC;
      }
      goto L_08994BC4;
    }
L_08994BC4:
    aot_gpr[2] = (20971u << 16u);
    aot_gpr[10] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[13] = (aot_gpr[2] | 34079u);
    aot_gpr[2] = (aot_gpr[10] + aot_gpr[8]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (52428u << 16u);
    aot_gpr[11] = (aot_gpr[3] | 52429u);
    aot_gpr[3] = (aot_gpr[6] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[12] = (0u + static_cast<std::uint32_t>(46));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(10) ? 1u : 0u);
      if (branch_taken) {
          goto L_08994C8C;
      }
      goto L_08994BF8;
    }
L_08994BF8:
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[6]) * static_cast<std::uint64_t>(aot_gpr[13]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[2] = (ctx.hi);
    aot_gpr[2] = (aot_gpr[2] >> 5u);
    aot_gpr[5] = (aot_gpr[2] << 4u);
    aot_gpr[3] = (aot_gpr[2] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[3] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[3]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[6]) * static_cast<std::uint64_t>(aot_gpr[11]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    goto L_08994C2C;
L_08994C2C:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (ctx.hi);
    aot_gpr[2] = (aot_gpr[2] >> 3u);
    aot_gpr[4] = (aot_gpr[2] << 3u);
    aot_gpr[3] = (aot_gpr[2] << 1u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[3]);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[8] == aot_gpr[9];
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08994CA8;
      }
      goto L_08994C64;
    }
L_08994C64:
    if (aot_gpr[8] == 0u) {
    aot_gpr[7] = (aot_gpr[2] + 0u);
        goto L_08994C78;
    }
    goto L_08994C6C;
L_08994C6C:
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[12]));
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (aot_gpr[2] + 0u);
    goto L_08994C78;
L_08994C78:
    aot_gpr[2] = (aot_gpr[10] + aot_gpr[8]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[6] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(10) ? 1u : 0u);
      if (branch_taken) {
          goto L_08994BF8;
      }
      goto L_08994C8C;
    }
L_08994C8C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[6]) * static_cast<std::uint64_t>(aot_gpr[11]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
      if (branch_taken) {
          goto L_08994C2C;
      }
      goto L_08994C94;
    }
L_08994C94:
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(48));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[9];
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08994C64;
      }
      goto L_08994CA8;
    }
L_08994CA8:
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_08994CAC;
L_08994CAC:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08994CB4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08994CD0;
      }
      goto L_08994CBC;
    }
L_08994CBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    goto L_08994CD0;
L_08994CD0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08994CD8:
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1528));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(15720), aot_gpr[2]);
    aot_gpr[3] = (2201u << 16u);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(15720));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(20584));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(28868));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[3] = (2201u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(30232));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(20956));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[3] = (2201u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(21684));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(24480));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    aot_gpr[3] = (2201u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(22100));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(21348));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    aot_gpr[3] = (2201u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(22276));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(22668));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    aot_gpr[3] = (2201u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(24032));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(22924));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(44), aot_gpr[3]);
    aot_gpr[3] = (2201u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(23200));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(23928));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(52), aot_gpr[3]);
    aot_gpr[3] = (2201u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(23520));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(28028));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(60), aot_gpr[3]);
    aot_gpr[3] = (2201u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(29596));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(24788));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    aot_gpr[3] = (2201u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(25860));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(25100));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(76), aot_gpr[3]);
    aot_gpr[3] = (2201u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(25468));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(80), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(25964));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(84), aot_gpr[3]);
    aot_gpr[3] = (2201u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(26816));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(88), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(26900));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(92), aot_gpr[3]);
    aot_gpr[3] = (2201u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(21304));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(96), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(26072));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(100), aot_gpr[3]);
    aot_gpr[3] = (2201u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(26360));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(104), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(20968));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(108), aot_gpr[3]);
    aot_gpr[3] = (2202u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-16972));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(112), aot_gpr[2]);
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-14560));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(116), aot_gpr[3]);
    aot_gpr[3] = (2202u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-13564));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(120), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(20864));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(124), aot_gpr[3]);
    aot_gpr[3] = (2202u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-10252));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(128), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(21076));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(132), aot_gpr[3]);
    aot_gpr[3] = (2202u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-13768));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(136), aot_gpr[2]);
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-25592));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(140), aot_gpr[3]);
    aot_gpr[3] = (2201u << 16u);
    aot_gpr[4] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(144), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(23384));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30796));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(14476), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(148), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(152), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(156), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(160), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(164), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08994ECC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_08994EFC;
      }
      goto L_08994ED4;
    }
L_08994ED4:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(64));
    goto L_08994EE4;
L_08994EDC:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08994EFC;
      }
      goto L_08994EE4;
    }
L_08994EE4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08994EDC;
      }
      goto L_08994EF4;
    }
L_08994EF4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08994EFC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08994F04:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1024));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
      if (branch_taken) {
          goto L_08994F2C;
      }
      goto L_08994F10;
    }
L_08994F10:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1536));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08994F2C;
      }
      goto L_08994F1C;
    }
L_08994F1C:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (2201u << 16u);
      if (branch_taken) {
          goto L_08994F3C;
      }
      goto L_08994F24;
    }
L_08994F24:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08994F2C:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-10252));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08994F3C:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(20728));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08994F48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08994F60u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 208u, 0x0898FD48u>(ctx, &aot_mem) && ctx.pc == 0x08994F60u) goto L_08994F60;
    return;
L_08994F60:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_08994F90;
      }
      goto L_08994F70;
    }
L_08994F70:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[31] = (0x08994F8Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    goto L_08994F04;
L_08994F8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
    goto L_08994F90;
L_08994F90:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08994FA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08994FF0;
      }
      goto L_08994FB8;
    }
L_08994FB8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08994FCC;
      }
      goto L_08994FC4;
    }
L_08994FC4:
    aot_gpr[31] = (0x08994FCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x08994FCCu) goto L_08994FCC;
    return;
L_08994FCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08994FE4;
      }
      goto L_08994FDC;
    }
L_08994FDC:
    aot_gpr[31] = (0x08994FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x08994FE4u) goto L_08994FE4;
    return;
L_08994FE4:
    aot_gpr[31] = (0x08994FECu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x08994FECu) goto L_08994FEC;
    return;
L_08994FEC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    goto L_08994FF0;
L_08994FF0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08994FFC:
    if (aot_gpr[4] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
        (void)rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 4u, 0x0899502Cu>(ctx, &aot_mem); return;
    }
    (void)rt.invoke_chained_direct<&recomp_unit_0401_entry, 401u, 1u, 0x08995004u>(ctx, &aot_mem); return;
}

void recomp_unit_0400(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0400_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_400(Runtime &runtime) {
    runtime.register_generated_unit(400u, 0x08994000u, 4096u, &recomp_unit_0400, &recomp_unit_0400_entry);
    runtime.register_function(0x08994000u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994008u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x0899401Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994024u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994030u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994050u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994058u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x0899405Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994060u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994068u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994074u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994090u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994094u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089940C4u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089940C8u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089940F8u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994100u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x0899410Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994114u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x0899411Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994124u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994130u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994138u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994140u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994188u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994194u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x0899419Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089941A4u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089941ACu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089941B0u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089941D4u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089941D8u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089941E0u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089941ECu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089941F8u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994200u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x0899420Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994238u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994244u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x0899424Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089942A8u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089942B4u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089942BCu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089942C4u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089942CCu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089942D4u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089942D8u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089942DCu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994308u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x0899430Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994328u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994338u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994348u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x0899434Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994354u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x0899435Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994368u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089943A4u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089943B4u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089943C8u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089943D8u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089943E0u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089943E8u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089943F4u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089943FCu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994404u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994418u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994424u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x0899442Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994438u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994440u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994460u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994480u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994488u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089944BCu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089944D0u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089944D8u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089944F4u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994514u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994530u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994538u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994540u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994548u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994568u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994574u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994580u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x0899458Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994598u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089945A4u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089945B0u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089945BCu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089945C8u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089945E8u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994608u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994614u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994620u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x0899463Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x0899465Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994668u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994674u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994690u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089946C0u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089946CCu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089946D8u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089946E8u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089946F0u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089946FCu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994704u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994720u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994740u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x0899474Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994758u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994764u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994770u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x0899477Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994798u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089947B8u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089947C4u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089947D0u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089947DCu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089947E8u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089947F4u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994800u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x0899480Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x0899481Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x0899483Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x0899485Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994868u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994884u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089948A4u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089948B0u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089948BCu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089948C8u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089948D4u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089948F0u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994910u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x0899491Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994938u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994940u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x0899496Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994978u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994980u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x0899499Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089949BCu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089949D8u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x089949E4u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994A00u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994A10u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994A20u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994A2Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994A88u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994A90u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994A9Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994AB8u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994AC0u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994AD4u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994AE8u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994AF4u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994B10u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994B24u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994B44u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994B5Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994B68u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994B84u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994B8Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994B98u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994BB4u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994BC4u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994BF8u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994C2Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994C64u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994C6Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994C78u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994C8Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994C94u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994CA8u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994CACu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994CB4u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994CBCu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994CD0u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994CD8u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994ECCu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994ED4u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994EDCu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994EE4u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994EF4u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994EFCu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994F04u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994F10u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994F1Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994F24u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994F2Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994F3Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994F48u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994F60u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994F70u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994F8Cu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994F90u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994FA4u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994FB8u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994FC4u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994FCCu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994FDCu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994FE4u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994FECu, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994FF0u, &recomp_unit_0400, "recomp_unit_0400");
    runtime.register_function(0x08994FFCu, &recomp_unit_0400, "recomp_unit_0400");
}
} // namespace psprecomp
