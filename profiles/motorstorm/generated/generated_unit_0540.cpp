#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0540[1022] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 12, 0, 0, 13, 0, 14, 0, 15, 0,
    0, 16, 0, 0, 17, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 28, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0,
    0, 0, 35, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 40, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 43,
    0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0,
    0, 0, 0, 0, 50, 0, 51, 0, 52, 0, 53, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0,
    0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 70,
    0, 71, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78,
    0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0,
    0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 90,
    0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0,
    0, 95, 0, 96, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0,
    0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0,
    119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132,
    0, 0, 0, 133, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0,
    0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 143, 144, 0, 0, 0, 0, 0, 0, 0,
    0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 149, 0, 150, 151, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 155, 0, 156, 0, 0, 157, 0, 158, 0, 0, 0, 159, 0, 160,
    0, 0, 161, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 167, 168, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 182, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187,
};
void recomp_unit_0540_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A20000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0540[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A20000;
    case 2u: goto L_08A20008;
    case 3u: goto L_08A20048;
    case 4u: goto L_08A20064;
    case 5u: goto L_08A20088;
    case 6u: goto L_08A20098;
    case 7u: goto L_08A200A8;
    case 8u: goto L_08A200B8;
    case 9u: goto L_08A200EC;
    case 10u: goto L_08A20140;
    case 11u: goto L_08A20148;
    case 12u: goto L_08A2015C;
    case 13u: goto L_08A20168;
    case 14u: goto L_08A20170;
    case 15u: goto L_08A20178;
    case 16u: goto L_08A20184;
    case 17u: goto L_08A20190;
    case 18u: goto L_08A20194;
    case 19u: goto L_08A201D0;
    case 20u: goto L_08A201E4;
    case 21u: goto L_08A20210;
    case 22u: goto L_08A20240;
    case 23u: goto L_08A20264;
    case 24u: goto L_08A20274;
    case 25u: goto L_08A202AC;
    case 26u: goto L_08A202B4;
    case 27u: goto L_08A202CC;
    case 28u: goto L_08A20304;
    case 29u: goto L_08A2030C;
    case 30u: goto L_08A2031C;
    case 31u: goto L_08A20324;
    case 32u: goto L_08A20334;
    case 33u: goto L_08A20358;
    case 34u: goto L_08A20364;
    case 35u: goto L_08A20388;
    case 36u: goto L_08A20390;
    case 37u: goto L_08A203A0;
    case 38u: goto L_08A203C4;
    case 39u: goto L_08A203CC;
    case 40u: goto L_08A203D0;
    case 41u: goto L_08A203DC;
    case 42u: goto L_08A203E4;
    case 43u: goto L_08A203FC;
    case 44u: goto L_08A20420;
    case 45u: goto L_08A20428;
    case 46u: goto L_08A20430;
    case 47u: goto L_08A20454;
    case 48u: goto L_08A2045C;
    case 49u: goto L_08A20478;
    case 50u: goto L_08A20490;
    case 51u: goto L_08A20498;
    case 52u: goto L_08A204A0;
    case 53u: goto L_08A204A8;
    case 54u: goto L_08A204AC;
    case 55u: goto L_08A204BC;
    case 56u: goto L_08A204E4;
    case 57u: goto L_08A204F4;
    case 58u: goto L_08A20504;
    case 59u: goto L_08A2051C;
    case 60u: goto L_08A20548;
    case 61u: goto L_08A20558;
    case 62u: goto L_08A20568;
    case 63u: goto L_08A20588;
    case 64u: goto L_08A2059C;
    case 65u: goto L_08A205A8;
    case 66u: goto L_08A205B0;
    case 67u: goto L_08A205B8;
    case 68u: goto L_08A205D8;
    case 69u: goto L_08A205E8;
    case 70u: goto L_08A205FC;
    case 71u: goto L_08A20604;
    case 72u: goto L_08A20614;
    case 73u: goto L_08A20620;
    case 74u: goto L_08A20644;
    case 75u: goto L_08A2064C;
    case 76u: goto L_08A206C8;
    case 77u: goto L_08A206EC;
    case 78u: goto L_08A206FC;
    case 79u: goto L_08A20708;
    case 80u: goto L_08A20710;
    case 81u: goto L_08A20728;
    case 82u: goto L_08A20740;
    case 83u: goto L_08A2074C;
    case 84u: goto L_08A2076C;
    case 85u: goto L_08A20788;
    case 86u: goto L_08A207C0;
    case 87u: goto L_08A207D0;
    case 88u: goto L_08A207D8;
    case 89u: goto L_08A207E0;
    case 90u: goto L_08A207FC;
    case 91u: goto L_08A20814;
    case 92u: goto L_08A20830;
    case 93u: goto L_08A20864;
    case 94u: goto L_08A2086C;
    case 95u: goto L_08A20884;
    case 96u: goto L_08A2088C;
    case 97u: goto L_08A2089C;
    case 98u: goto L_08A208A4;
    case 99u: goto L_08A208B8;
    case 100u: goto L_08A208D0;
    case 101u: goto L_08A208D8;
    case 102u: goto L_08A20920;
    case 103u: goto L_08A20938;
    case 104u: goto L_08A20940;
    case 105u: goto L_08A2094C;
    case 106u: goto L_08A20954;
    case 107u: goto L_08A2097C;
    case 108u: goto L_08A209A8;
    case 109u: goto L_08A209B8;
    case 110u: goto L_08A209CC;
    case 111u: goto L_08A209E8;
    case 112u: goto L_08A20A04;
    case 113u: goto L_08A20A10;
    case 114u: goto L_08A20A20;
    case 115u: goto L_08A20A3C;
    case 116u: goto L_08A20A48;
    case 117u: goto L_08A20A58;
    case 118u: goto L_08A20A74;
    case 119u: goto L_08A20A80;
    case 120u: goto L_08A20A90;
    case 121u: goto L_08A20AAC;
    case 122u: goto L_08A20AB8;
    case 123u: goto L_08A20AC8;
    case 124u: goto L_08A20AD8;
    case 125u: goto L_08A20AE4;
    case 126u: goto L_08A20AF4;
    case 127u: goto L_08A20B00;
    case 128u: goto L_08A20B1C;
    case 129u: goto L_08A20B34;
    case 130u: goto L_08A20B54;
    case 131u: goto L_08A20B6C;
    case 132u: goto L_08A20B7C;
    case 133u: goto L_08A20B8C;
    case 134u: goto L_08A20B90;
    case 135u: goto L_08A20BB4;
    case 136u: goto L_08A20BC8;
    case 137u: goto L_08A20BDC;
    case 138u: goto L_08A20BF4;
    case 139u: goto L_08A20C08;
    case 140u: goto L_08A20C28;
    case 141u: goto L_08A20C40;
    case 142u: goto L_08A20C4C;
    case 143u: goto L_08A20C5C;
    case 144u: goto L_08A20C60;
    case 145u: goto L_08A20C84;
    case 146u: goto L_08A20C98;
    case 147u: goto L_08A20CA8;
    case 148u: goto L_08A20CF8;
    case 149u: goto L_08A20D08;
    case 150u: goto L_08A20D10;
    case 151u: goto L_08A20D14;
    case 152u: goto L_08A20D1C;
    case 153u: goto L_08A20D28;
    case 154u: goto L_08A20D40;
    case 155u: goto L_08A20D48;
    case 156u: goto L_08A20D50;
    case 157u: goto L_08A20D5C;
    case 158u: goto L_08A20D64;
    case 159u: goto L_08A20D74;
    case 160u: goto L_08A20D7C;
    case 161u: goto L_08A20D88;
    case 162u: goto L_08A20D98;
    case 163u: goto L_08A20DA4;
    case 164u: goto L_08A20DBC;
    case 165u: goto L_08A20DD0;
    case 166u: goto L_08A20DDC;
    case 167u: goto L_08A20DE8;
    case 168u: goto L_08A20DEC;
    case 169u: goto L_08A20E00;
    case 170u: goto L_08A20E2C;
    case 171u: goto L_08A20E50;
    case 172u: goto L_08A20E60;
    case 173u: goto L_08A20E88;
    case 174u: goto L_08A20E94;
    case 175u: goto L_08A20EA8;
    case 176u: goto L_08A20EB0;
    case 177u: goto L_08A20ED4;
    case 178u: goto L_08A20EE8;
    case 179u: goto L_08A20F00;
    case 180u: goto L_08A20F38;
    case 181u: goto L_08A20F48;
    case 182u: goto L_08A20F50;
    case 183u: goto L_08A20F54;
    case 184u: goto L_08A20FAC;
    case 185u: goto L_08A20FC0;
    case 186u: goto L_08A20FEC;
    case 187u: goto L_08A20FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A20000:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0539_entry, 539u, 200u, 0x08A1FE30u>(ctx, &aot_mem); return;
      }
      goto L_08A20008;
    }
L_08A20008:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-576));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(392)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(556), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(544), aot_gpr[16]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(540), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(548), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(552), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(560), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(564), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(568), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(572), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A201E4;
      }
      goto L_08A20048;
    }
L_08A20048:
    aot_gpr[4] = (18371u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 20480u);
    aot_gpr[20] = (0u | 65535u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(528));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    goto L_08A20064;
L_08A20064:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[18] == aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A201E4;
      }
      goto L_08A20088;
    }
L_08A20088:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(396)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A201E4;
      }
      goto L_08A20098;
    }
L_08A20098:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[18] = (aot_gpr[4] - aot_gpr[18]);
      if (branch_taken) {
          goto L_08A201D0;
      }
      goto L_08A200A8;
    }
L_08A200A8:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A200B8u);
    aot_gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A200B8u) goto L_08A200B8;
    return;
L_08A200B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[31] = (0x08A200ECu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A200ECu) goto L_08A200EC;
    return;
L_08A200EC:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[19]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(480)));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[18]);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(492)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[4]);
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(420)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(536), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[15];
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(532), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08A2015C;
      }
      goto L_08A20140;
    }
L_08A20140:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    aot_gpr[11] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A20194;
      }
      goto L_08A20148;
    }
L_08A20148:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(488)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(528), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08A20190;
      }
      goto L_08A2015C;
    }
L_08A2015C:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A20178;
      }
      goto L_08A20168;
    }
L_08A20168:
    if (aot_gpr[6] != 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_08A20184;
    }
    goto L_08A20170;
L_08A20170:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[11] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A20194;
      }
      goto L_08A20178;
    }
L_08A20178:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(424)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(528), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08A20190;
      }
      goto L_08A20184;
    }
L_08A20184:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(412)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(528), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08A20190;
L_08A20190:
    aot_gpr[11] = (aot_gpr[5] | 0u);
    goto L_08A20194;
L_08A20194:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(448)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[7]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    aot_gpr[9] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08A201D0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A201D0u) goto L_08A201D0;
    return;
L_08A201D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(392)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
        goto L_08A20064;
    }
    goto L_08A201E4;
L_08A201E4:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(540)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(544)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(548)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(552)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(556)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(560)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(564)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(568)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(572)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(576));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A20210:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(384)));
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[7] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
      if (branch_taken) {
          goto L_08A2030C;
      }
      goto L_08A20240;
    }
L_08A20240:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(-10)));
    aot_gpr[7] = (aot_gpr[5] - aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(-12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[5]);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(360));
      if (branch_taken) {
          goto L_08A202B4;
      }
      goto L_08A20264;
    }
L_08A20264:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(360), aot_gpr[8]);
    aot_gpr[31] = (0x08A20274u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 194u, 0x08A46BC4u>(ctx, &aot_mem) && ctx.pc == 0x08A20274u) goto L_08A20274;
    return;
L_08A20274:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(384)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[6] = (aot_gpr[9] + aot_gpr[6]);
    aot_gpr[9] = (aot_gpr[10] + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    if (static_cast<std::int32_t>(aot_gpr[7]) >= 0) {
    aot_gpr[8] = (aot_gpr[7] | 0u);
        goto L_08A202AC;
    }
    goto L_08A202AC;
L_08A202AC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(360), aot_gpr[8]);
      if (branch_taken) {
          goto L_08A2031C;
      }
      goto L_08A202B4;
    }
L_08A202B4:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08A202CCu);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 194u, 0x08A46BC4u>(ctx, &aot_mem) && ctx.pc == 0x08A202CCu) goto L_08A202CC;
    return;
L_08A202CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(384)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[6] = (aot_gpr[9] + aot_gpr[6]);
    aot_gpr[9] = (aot_gpr[10] + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    if (static_cast<std::int32_t>(aot_gpr[7]) >= 0) {
    aot_gpr[8] = (aot_gpr[7] | 0u);
        goto L_08A20304;
    }
    goto L_08A20304;
L_08A20304:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(360), aot_gpr[8]);
      if (branch_taken) {
          goto L_08A2031C;
      }
      goto L_08A2030C;
    }
L_08A2030C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(360), aot_gpr[5]);
    aot_gpr[9] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    goto L_08A2031C;
L_08A2031C:
    if (aot_gpr[9] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(364), aot_gpr[5]);
        goto L_08A203D0;
    }
    goto L_08A20324;
L_08A20324:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(392)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[7] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A203CC;
      }
      goto L_08A20334;
    }
L_08A20334:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(14)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[7]);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(364));
      if (branch_taken) {
          goto L_08A20390;
      }
      goto L_08A20358;
    }
L_08A20358:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(364), aot_gpr[6]);
    aot_gpr[31] = (0x08A20364u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 194u, 0x08A46BC4u>(ctx, &aot_mem) && ctx.pc == 0x08A20364u) goto L_08A20364;
    return;
L_08A20364:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(384)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(364)));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) >= 0;
    aot_gpr[6] = (aot_gpr[8] + aot_gpr[6]);
      if (branch_taken) {
          goto L_08A203D0;
      }
      goto L_08A20388;
    }
L_08A20388:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(364), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A203D0;
      }
      goto L_08A20390;
    }
L_08A20390:
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(364), aot_gpr[5]);
    aot_gpr[31] = (0x08A203A0u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 194u, 0x08A46BC4u>(ctx, &aot_mem) && ctx.pc == 0x08A203A0u) goto L_08A203A0;
    return;
L_08A203A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(384)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(364)));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) >= 0;
    aot_gpr[6] = (aot_gpr[8] + aot_gpr[6]);
      if (branch_taken) {
          goto L_08A203D0;
      }
      goto L_08A203C4;
    }
L_08A203C4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(364), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A203D0;
      }
      goto L_08A203CC;
    }
L_08A203CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(364), aot_gpr[5]);
    goto L_08A203D0;
L_08A203D0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A20428;
      }
      goto L_08A203DC;
    }
L_08A203DC:
    if (aot_gpr[5] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(368), aot_gpr[5]);
        goto L_08A20420;
    }
    goto L_08A203E4;
L_08A203E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(-10)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(368), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(368));
    aot_gpr[31] = (0x08A203FCu);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 194u, 0x08A46BC4u>(ctx, &aot_mem) && ctx.pc == 0x08A203FCu) goto L_08A203FC;
    return;
L_08A203FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(384)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[7] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(2)));
      if (branch_taken) {
          goto L_08A20454;
      }
      goto L_08A20420;
    }
L_08A20420:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(2)));
      if (branch_taken) {
          goto L_08A20454;
      }
      goto L_08A20428;
    }
L_08A20428:
    aot_gpr[31] = (0x08A20430u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 123u, 0x08A466ECu>(ctx, &aot_mem) && ctx.pc == 0x08A20430u) goto L_08A20430;
    return;
L_08A20430:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(384)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(368), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[7] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(2)));
    goto L_08A20454;
L_08A20454:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A204A0;
      }
      goto L_08A2045C;
    }
L_08A2045C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(392)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20498;
      }
      goto L_08A20478;
    }
L_08A20478:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(372), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(372));
    aot_gpr[31] = (0x08A20490u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 194u, 0x08A46BC4u>(ctx, &aot_mem) && ctx.pc == 0x08A20490u) goto L_08A20490;
    return;
L_08A20490:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A204AC;
      }
      goto L_08A20498;
    }
L_08A20498:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(372), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A204AC;
      }
      goto L_08A204A0;
    }
L_08A204A0:
    aot_gpr[31] = (0x08A204A8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 130u, 0x08A46754u>(ctx, &aot_mem) && ctx.pc == 0x08A204A8u) goto L_08A204A8;
    return;
L_08A204A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(372), aot_gpr[2]);
    goto L_08A204AC;
L_08A204AC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A204BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] - aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[18] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A20504;
      }
      goto L_08A204E4;
    }
L_08A204E4:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A204F4u);
    aot_gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A204F4u) goto L_08A204F4;
    return;
L_08A204F4:
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A20504u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A20504u) goto L_08A20504;
    return;
L_08A20504:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2051C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A20548u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 215u, 0x08A46CCCu>(ctx, &aot_mem) && ctx.pc == 0x08A20548u) goto L_08A20548;
    return;
L_08A20548:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(17296));
    { const bool branch_taken = aot_gpr[19] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(292), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A20568;
      }
      goto L_08A20558;
    }
L_08A20558:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A20568u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0541_entry, 541u, 78u, 0x08A21560u>(ctx, &aot_mem) && ctx.pc == 0x08A20568u) goto L_08A20568;
    return;
L_08A20568:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_08A20588:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A2059Cu);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(332));
    goto L_08A20830;
L_08A2059C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A205A8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(872)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A205B0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 512u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A205B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A205D8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A205D8u) goto L_08A205D8;
    return;
L_08A205D8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A205E8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    goto L_08A20E2C;
L_08A205E8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A205FC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(332));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A20604:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A20614u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(332));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A20614u) goto L_08A20614;
    return;
L_08A20614:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A20620:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A20644u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(672));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A20644u) goto L_08A20644;
    return;
L_08A20644:
    aot_gpr[31] = (0x08A2064Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A2074C;
L_08A2064C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(864), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(868), 0u);
    aot_gpr[4] = (0u | 14u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(872), 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(852), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(860), aot_gpr[5]);
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(888), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (16672u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(892), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(896), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(900), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(136), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(884), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(844), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(904), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(908), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(320), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A206C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A206ECu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 132u, 0x08A12914u>(ctx, &aot_mem) && ctx.pc == 0x08A206ECu) goto L_08A206EC;
    return;
L_08A206EC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A206FCu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 158u, 0x08A12ADCu>(ctx, &aot_mem) && ctx.pc == 0x08A206FCu) goto L_08A206FC;
    return;
L_08A206FC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(328), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A20710;
      }
      goto L_08A20708;
    }
L_08A20708:
    aot_gpr[31] = (0x08A20710u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0542_entry, 542u, 154u, 0x08A22A54u>(ctx, &aot_mem) && ctx.pc == 0x08A20710u) goto L_08A20710;
    return;
L_08A20710:
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
L_08A20728:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A20740u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(332));
    goto L_08A20788;
L_08A20740:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2074C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(332));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A2076Cu);
    aot_gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2076Cu) goto L_08A2076C;
    return;
L_08A2076C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(848), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(876), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(880), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A20788:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-544));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(520), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(524), aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(512), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(516), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(528), aot_gpr[31]);
    aot_gpr[31] = (0x08A207C0u);
    aot_gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A207C0u) goto L_08A207C0;
    return;
L_08A207C0:
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[18]);
    aot_gpr[6] = (aot_gpr[17] - aot_gpr[16]);
    aot_gpr[31] = (0x08A207D0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x08A207D0u) goto L_08A207D0;
    return;
L_08A207D0:
    aot_gpr[31] = (0x08A207D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A207D8u) goto L_08A207D8;
    return;
L_08A207D8:
    aot_gpr[31] = (0x08A207E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 222u, 0x089FEE14u>(ctx, &aot_mem) && ctx.pc == 0x08A207E0u) goto L_08A207E0;
    return;
L_08A207E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(852)));
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A207FCu);
    aot_gpr[18] = (aot_gpr[2] + aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A207FCu) goto L_08A207FC;
    return;
L_08A207FC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A20814u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A20814u) goto L_08A20814;
    return;
L_08A20814:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(512)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(516)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(520)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(524)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(528)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A20830:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[31]);
    aot_gpr[31] = (0x08A20864u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 239u, 0x08A00FD8u>(ctx, &aot_mem) && ctx.pc == 0x08A20864u) goto L_08A20864;
    return;
L_08A20864:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20954;
      }
      goto L_08A2086C;
    }
L_08A2086C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A20884u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A20884u) goto L_08A20884;
    return;
L_08A20884:
    if (aot_gpr[2] == 0u) {
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(300)));
        goto L_08A2089C;
    }
    goto L_08A2088C;
L_08A2088C:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(312)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(316)));
      if (branch_taken) {
          goto L_08A208A4;
      }
      goto L_08A2089C;
    }
L_08A2089C:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(296)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(304)));
    goto L_08A208A4;
L_08A208A4:
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A208B8u);
    aot_gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A208B8u) goto L_08A208B8;
    return;
L_08A208B8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(876)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(880)));
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[4] - aot_gpr[6]);
    aot_gpr[31] = (0x08A208D0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A208D0u) goto L_08A208D0;
    return;
L_08A208D0:
    aot_gpr[31] = (0x08A208D8u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A208D8u) goto L_08A208D8;
    return;
L_08A208D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(852)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[12] = (aot_gpr[18] + static_cast<std::uint32_t>(144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[18] + static_cast<std::uint32_t>(20));
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    aot_gpr[9] = (aot_gpr[19] | 0u);
    aot_gpr[11] = (aot_gpr[22] | 0u);
    jump_target = aot_gpr[13];
    aot_gpr[31] = (0x08A20920u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[12]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A20920u) goto L_08A20920;
    return;
L_08A20920:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A20938u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A20938u) goto L_08A20938;
    return;
L_08A20938:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20954;
      }
      goto L_08A20940;
    }
L_08A20940:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A20954;
      }
      goto L_08A2094C;
    }
L_08A2094C:
    aot_gpr[31] = (0x08A20954u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08A20F00;
L_08A20954:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2097C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A209A8u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 119u, 0x08A03734u>(ctx, &aot_mem) && ctx.pc == 0x08A209A8u) goto L_08A209A8;
    return;
L_08A209A8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A209B8u);
    aot_gpr[6] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 139u, 0x08A03874u>(ctx, &aot_mem) && ctx.pc == 0x08A209B8u) goto L_08A209B8;
    return;
L_08A209B8:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A209CCu);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 11u, 0x08A0107Cu>(ctx, &aot_mem) && ctx.pc == 0x08A209CCu) goto L_08A209CC;
    return;
L_08A209CC:
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
L_08A209E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(848)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A20A04u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(332));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 146u, 0x08A46810u>(ctx, &aot_mem) && ctx.pc == 0x08A20A04u) goto L_08A20A04;
    return;
L_08A20A04:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(848), aot_gpr[2]);
    aot_gpr[31] = (0x08A20A10u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A20FC0;
L_08A20A10:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A20A20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(848)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A20A3Cu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(332));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 151u, 0x08A4688Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20A3Cu) goto L_08A20A3C;
    return;
L_08A20A3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(848), aot_gpr[2]);
    aot_gpr[31] = (0x08A20A48u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0541_entry, 541u, 21u, 0x08A21178u>(ctx, &aot_mem) && ctx.pc == 0x08A20A48u) goto L_08A20A48;
    return;
L_08A20A48:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A20A58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(848)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A20A74u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(332));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 123u, 0x08A466ECu>(ctx, &aot_mem) && ctx.pc == 0x08A20A74u) goto L_08A20A74;
    return;
L_08A20A74:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(848), aot_gpr[2]);
    aot_gpr[31] = (0x08A20A80u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A20FC0;
L_08A20A80:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A20A90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(848)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A20AACu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(332));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 130u, 0x08A46754u>(ctx, &aot_mem) && ctx.pc == 0x08A20AACu) goto L_08A20AAC;
    return;
L_08A20AAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(848), aot_gpr[2]);
    aot_gpr[31] = (0x08A20AB8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0541_entry, 541u, 21u, 0x08A21178u>(ctx, &aot_mem) && ctx.pc == 0x08A20AB8u) goto L_08A20AB8;
    return;
L_08A20AB8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A20AC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A20AD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 11u, 0x08A0107Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20AD8u) goto L_08A20AD8;
    return;
L_08A20AD8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A20AE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A20AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 11u, 0x08A0107Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20AF4u) goto L_08A20AF4;
    return;
L_08A20AF4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A20B00:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A20B1Cu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(332));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A20B1Cu) goto L_08A20B1C;
    return;
L_08A20B1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(848), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(876), 0u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(880), 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A20B34;
L_08A20B34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(880), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(216));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A20B54u);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A20B54u) goto L_08A20B54;
    return;
L_08A20B54:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(884)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A20B7C;
      }
      goto L_08A20B6C;
    }
L_08A20B6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(880)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A20B34;
      }
      goto L_08A20B7C;
    }
L_08A20B7C:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A20BC8;
      }
      goto L_08A20B8C;
    }
L_08A20B8C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(880)));
    goto L_08A20B90;
L_08A20B90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(880), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(216));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A20BB4u);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A20BB4u) goto L_08A20BB4;
    return;
L_08A20BB4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(884)));
    ctx.set_fpu_condition((aot_fpr[0] <= aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(880)));
        goto L_08A20B90;
    }
    goto L_08A20BC8;
L_08A20BC8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A20BDC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A20BF4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(332));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A20BF4u) goto L_08A20BF4;
    return;
L_08A20BF4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(848), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(876), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(880), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    goto L_08A20C08;
L_08A20C08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(876), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(216));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(848)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A20C28u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A20C28u) goto L_08A20C28;
    return;
L_08A20C28:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(884)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A20C4C;
      }
      goto L_08A20C40;
    }
L_08A20C40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(876)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A20C08;
      }
      goto L_08A20C4C;
    }
L_08A20C4C:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A20C98;
      }
      goto L_08A20C5C;
    }
L_08A20C5C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(876)));
    goto L_08A20C60;
L_08A20C60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(876), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(216));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(880)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A20C84u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A20C84u) goto L_08A20C84;
    return;
L_08A20C84:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(884)));
    ctx.set_fpu_condition((aot_fpr[0] <= aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(876)));
        goto L_08A20C60;
    }
    goto L_08A20C98;
L_08A20C98:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A20CA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(232)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A20CF8u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A20CF8u) goto L_08A20CF8;
    return;
L_08A20CF8:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[21] = (0u | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[22] = (aot_gpr[16] + static_cast<std::uint32_t>(332));
      if (branch_taken) {
          goto L_08A20D14;
      }
      goto L_08A20D08;
    }
L_08A20D08:
    aot_gpr[31] = (0x08A20D10u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A20D10u) goto L_08A20D10;
    return;
L_08A20D10:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    goto L_08A20D14;
L_08A20D14:
    aot_gpr[31] = (0x08A20D1Cu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A20D1Cu) goto L_08A20D1C;
    return;
L_08A20D1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[23] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A20D48;
      }
      goto L_08A20D28;
    }
L_08A20D28:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A20D40u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0541_entry, 541u, 127u, 0x08A21878u>(ctx, &aot_mem) && ctx.pc == 0x08A20D40u) goto L_08A20D40;
    return;
L_08A20D40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20E00;
      }
      goto L_08A20D48;
    }
L_08A20D48:
    if (static_cast<std::int32_t>(aot_gpr[21]) <= 0) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(232)));
        goto L_08A20DEC;
    }
    goto L_08A20D50;
L_08A20D50:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(232)));
        goto L_08A20DEC;
    }
    goto L_08A20D5C;
L_08A20D5C:
    aot_gpr[31] = (0x08A20D64u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A20D64u) goto L_08A20D64;
    return;
L_08A20D64:
    aot_gpr[4] = (aot_gpr[23] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(513) ? 1u : 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(232)));
        goto L_08A20DEC;
    }
    goto L_08A20D74;
L_08A20D74:
    aot_gpr[31] = (0x08A20D7Cu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A20D7Cu) goto L_08A20D7C;
    return;
L_08A20D7C:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08A20D88u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 177u, 0x08A46AE8u>(ctx, &aot_mem) && ctx.pc == 0x08A20D88u) goto L_08A20D88;
    return;
L_08A20D88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(872)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(232)));
        goto L_08A20DEC;
    }
    goto L_08A20D98;
L_08A20D98:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(848)));
    aot_gpr[31] = (0x08A20DA4u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A20DA4u) goto L_08A20DA4;
    return;
L_08A20DA4:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(848)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (0u | 512u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A20DBCu);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 155u, 0x08A46904u>(ctx, &aot_mem) && ctx.pc == 0x08A20DBCu) goto L_08A20DBC;
    return;
L_08A20DBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(880)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(848), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A20DDC;
      }
      goto L_08A20DD0;
    }
L_08A20DD0:
    aot_gpr[20] = (aot_gpr[20] - aot_gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[20]);
      if (branch_taken) {
          goto L_08A20DDC;
      }
      goto L_08A20DDC;
    }
L_08A20DDC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(880), aot_gpr[20]);
    aot_gpr[31] = (0x08A20DE8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0541_entry, 541u, 21u, 0x08A21178u>(ctx, &aot_mem) && ctx.pc == 0x08A20DE8u) goto L_08A20DE8;
    return;
L_08A20DE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(232)));
    goto L_08A20DEC;
L_08A20DEC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(136));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A20E00u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A20E00u) goto L_08A20E00;
    return;
L_08A20E00:
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
L_08A20E2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A20E50u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    goto L_08A2074C;
L_08A20E50:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(332));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A20E60u);
    aot_gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x08A20E60u) goto L_08A20E60;
    return;
L_08A20E60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(848), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(880), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(216));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (0u | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A20E88u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A20E88u) goto L_08A20E88;
    return;
L_08A20E88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(848)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_08A20EE8;
      }
      goto L_08A20E94;
    }
L_08A20E94:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(884)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A20EE8;
      }
      goto L_08A20EA8;
    }
L_08A20EA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(876), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(876)));
    goto L_08A20EB0;
L_08A20EB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(876), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(216));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(848)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A20ED4u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A20ED4u) goto L_08A20ED4;
    return;
L_08A20ED4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(884)));
    ctx.set_fpu_condition((aot_fpr[0] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(876)));
        goto L_08A20EB0;
    }
    goto L_08A20EE8;
L_08A20EE8:
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
L_08A20F00:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(216));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(876)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(848)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A20F38u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A20F38u) goto L_08A20F38;
    return;
L_08A20F38:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[12] = aot_fpr[12] + aot_fpr[0];
      if (branch_taken) {
          goto L_08A20F50;
      }
      goto L_08A20F48;
    }
L_08A20F48:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(316)));
      if (branch_taken) {
          goto L_08A20F54;
      }
      goto L_08A20F50;
    }
L_08A20F50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    goto L_08A20F54;
L_08A20F54:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(176));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(900)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[11] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[11]);
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(144));
    jump_target = aot_gpr[10];
    aot_gpr[31] = (0x08A20FACu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A20FACu) goto L_08A20FAC;
    return;
L_08A20FAC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A20FC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(848)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(876)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0541_entry, 541u, 20u, 0x08A2115Cu>(ctx, &aot_mem); return;
      }
      goto L_08A20FEC;
    }
L_08A20FEC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0541_entry, 541u, 20u, 0x08A2115Cu>(ctx, &aot_mem); return;
      }
      goto L_08A20FF4;
    }
L_08A20FF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-17960)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(332));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0541_entry, 541u, 14u, 0x08A210E4u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0541_entry, 541u, 1u, 0x08A21000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0540(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0540_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_540(Runtime &runtime) {
    runtime.register_generated_unit(540u, 0x08A20000u, 4096u, &recomp_unit_0540, &recomp_unit_0540_entry);
    runtime.register_function(0x08A20000u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20008u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20048u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20064u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20088u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20098u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A200A8u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A200B8u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A200ECu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20140u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20148u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A2015Cu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20168u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20170u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20178u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20184u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20190u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20194u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A201D0u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A201E4u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20210u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20240u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20264u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20274u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A202ACu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A202B4u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A202CCu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20304u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A2030Cu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A2031Cu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20324u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20334u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20358u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20364u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20388u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20390u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A203A0u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A203C4u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A203CCu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A203D0u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A203DCu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A203E4u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A203FCu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20420u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20428u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20430u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20454u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A2045Cu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20478u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20490u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20498u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A204A0u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A204A8u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A204ACu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A204BCu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A204E4u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A204F4u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20504u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A2051Cu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20548u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20558u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20568u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20588u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A2059Cu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A205A8u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A205B0u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A205B8u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A205D8u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A205E8u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A205FCu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20604u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20614u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20620u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20644u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A2064Cu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A206C8u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A206ECu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A206FCu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20708u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20710u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20728u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20740u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A2074Cu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A2076Cu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20788u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A207C0u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A207D0u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A207D8u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A207E0u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A207FCu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20814u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20830u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20864u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A2086Cu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20884u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A2088Cu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A2089Cu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A208A4u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A208B8u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A208D0u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A208D8u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20920u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20938u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20940u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A2094Cu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20954u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A2097Cu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A209A8u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A209B8u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A209CCu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A209E8u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20A04u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20A10u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20A20u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20A3Cu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20A48u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20A58u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20A74u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20A80u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20A90u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20AACu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20AB8u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20AC8u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20AD8u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20AE4u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20AF4u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20B00u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20B1Cu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20B34u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20B54u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20B6Cu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20B7Cu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20B8Cu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20B90u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20BB4u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20BC8u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20BDCu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20BF4u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20C08u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20C28u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20C40u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20C4Cu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20C5Cu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20C60u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20C84u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20C98u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20CA8u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20CF8u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20D08u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20D10u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20D14u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20D1Cu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20D28u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20D40u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20D48u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20D50u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20D5Cu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20D64u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20D74u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20D7Cu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20D88u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20D98u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20DA4u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20DBCu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20DD0u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20DDCu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20DE8u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20DECu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20E00u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20E2Cu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20E50u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20E60u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20E88u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20E94u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20EA8u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20EB0u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20ED4u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20EE8u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20F00u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20F38u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20F48u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20F50u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20F54u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20FACu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20FC0u, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20FECu, &recomp_unit_0540, "recomp_unit_0540");
    runtime.register_function(0x08A20FF4u, &recomp_unit_0540, "recomp_unit_0540");
}
} // namespace psprecomp
